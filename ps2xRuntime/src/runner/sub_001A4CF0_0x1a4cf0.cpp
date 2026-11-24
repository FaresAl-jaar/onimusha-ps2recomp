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

// Function: sub_001A4CF0
// Address: 0x1a4cf0 - 0x1a53a0
void sub_001A4CF0_0x1a4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4CF0_0x1a4cf0");
#endif

    switch (ctx->pc) {
        case 0x1a4cf0u: goto label_1a4cf0;
        case 0x1a4cf4u: goto label_1a4cf4;
        case 0x1a4cf8u: goto label_1a4cf8;
        case 0x1a4cfcu: goto label_1a4cfc;
        case 0x1a4d00u: goto label_1a4d00;
        case 0x1a4d04u: goto label_1a4d04;
        case 0x1a4d08u: goto label_1a4d08;
        case 0x1a4d0cu: goto label_1a4d0c;
        case 0x1a4d10u: goto label_1a4d10;
        case 0x1a4d14u: goto label_1a4d14;
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d1cu: goto label_1a4d1c;
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d24u: goto label_1a4d24;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4d30u: goto label_1a4d30;
        case 0x1a4d34u: goto label_1a4d34;
        case 0x1a4d38u: goto label_1a4d38;
        case 0x1a4d3cu: goto label_1a4d3c;
        case 0x1a4d40u: goto label_1a4d40;
        case 0x1a4d44u: goto label_1a4d44;
        case 0x1a4d48u: goto label_1a4d48;
        case 0x1a4d4cu: goto label_1a4d4c;
        case 0x1a4d50u: goto label_1a4d50;
        case 0x1a4d54u: goto label_1a4d54;
        case 0x1a4d58u: goto label_1a4d58;
        case 0x1a4d5cu: goto label_1a4d5c;
        case 0x1a4d60u: goto label_1a4d60;
        case 0x1a4d64u: goto label_1a4d64;
        case 0x1a4d68u: goto label_1a4d68;
        case 0x1a4d6cu: goto label_1a4d6c;
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d74u: goto label_1a4d74;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d7cu: goto label_1a4d7c;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d84u: goto label_1a4d84;
        case 0x1a4d88u: goto label_1a4d88;
        case 0x1a4d8cu: goto label_1a4d8c;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4d94u: goto label_1a4d94;
        case 0x1a4d98u: goto label_1a4d98;
        case 0x1a4d9cu: goto label_1a4d9c;
        case 0x1a4da0u: goto label_1a4da0;
        case 0x1a4da4u: goto label_1a4da4;
        case 0x1a4da8u: goto label_1a4da8;
        case 0x1a4dacu: goto label_1a4dac;
        case 0x1a4db0u: goto label_1a4db0;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4db8u: goto label_1a4db8;
        case 0x1a4dbcu: goto label_1a4dbc;
        case 0x1a4dc0u: goto label_1a4dc0;
        case 0x1a4dc4u: goto label_1a4dc4;
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4dccu: goto label_1a4dcc;
        case 0x1a4dd0u: goto label_1a4dd0;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4dd8u: goto label_1a4dd8;
        case 0x1a4ddcu: goto label_1a4ddc;
        case 0x1a4de0u: goto label_1a4de0;
        case 0x1a4de4u: goto label_1a4de4;
        case 0x1a4de8u: goto label_1a4de8;
        case 0x1a4decu: goto label_1a4dec;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4df4u: goto label_1a4df4;
        case 0x1a4df8u: goto label_1a4df8;
        case 0x1a4dfcu: goto label_1a4dfc;
        case 0x1a4e00u: goto label_1a4e00;
        case 0x1a4e04u: goto label_1a4e04;
        case 0x1a4e08u: goto label_1a4e08;
        case 0x1a4e0cu: goto label_1a4e0c;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e5cu: goto label_1a4e5c;
        case 0x1a4e60u: goto label_1a4e60;
        case 0x1a4e64u: goto label_1a4e64;
        case 0x1a4e68u: goto label_1a4e68;
        case 0x1a4e6cu: goto label_1a4e6c;
        case 0x1a4e70u: goto label_1a4e70;
        case 0x1a4e74u: goto label_1a4e74;
        case 0x1a4e78u: goto label_1a4e78;
        case 0x1a4e7cu: goto label_1a4e7c;
        case 0x1a4e80u: goto label_1a4e80;
        case 0x1a4e84u: goto label_1a4e84;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4e8cu: goto label_1a4e8c;
        case 0x1a4e90u: goto label_1a4e90;
        case 0x1a4e94u: goto label_1a4e94;
        case 0x1a4e98u: goto label_1a4e98;
        case 0x1a4e9cu: goto label_1a4e9c;
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4ea4u: goto label_1a4ea4;
        case 0x1a4ea8u: goto label_1a4ea8;
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eb4u: goto label_1a4eb4;
        case 0x1a4eb8u: goto label_1a4eb8;
        case 0x1a4ebcu: goto label_1a4ebc;
        case 0x1a4ec0u: goto label_1a4ec0;
        case 0x1a4ec4u: goto label_1a4ec4;
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        case 0x1a5004u: goto label_1a5004;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a5014u: goto label_1a5014;
        case 0x1a5018u: goto label_1a5018;
        case 0x1a501cu: goto label_1a501c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5024u: goto label_1a5024;
        case 0x1a5028u: goto label_1a5028;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5030u: goto label_1a5030;
        case 0x1a5034u: goto label_1a5034;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a503cu: goto label_1a503c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5044u: goto label_1a5044;
        case 0x1a5048u: goto label_1a5048;
        case 0x1a504cu: goto label_1a504c;
        case 0x1a5050u: goto label_1a5050;
        case 0x1a5054u: goto label_1a5054;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a505cu: goto label_1a505c;
        case 0x1a5060u: goto label_1a5060;
        case 0x1a5064u: goto label_1a5064;
        case 0x1a5068u: goto label_1a5068;
        case 0x1a506cu: goto label_1a506c;
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5074u: goto label_1a5074;
        case 0x1a5078u: goto label_1a5078;
        case 0x1a507cu: goto label_1a507c;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5170u: goto label_1a5170;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5178u: goto label_1a5178;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5180u: goto label_1a5180;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a5188u: goto label_1a5188;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a5194u: goto label_1a5194;
        case 0x1a5198u: goto label_1a5198;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a0u: goto label_1a51a0;
        case 0x1a51a4u: goto label_1a51a4;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51acu: goto label_1a51ac;
        case 0x1a51b0u: goto label_1a51b0;
        case 0x1a51b4u: goto label_1a51b4;
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51bcu: goto label_1a51bc;
        case 0x1a51c0u: goto label_1a51c0;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51c8u: goto label_1a51c8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51d0u: goto label_1a51d0;
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51d8u: goto label_1a51d8;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51e0u: goto label_1a51e0;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51ecu: goto label_1a51ec;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f4u: goto label_1a51f4;
        case 0x1a51f8u: goto label_1a51f8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5200u: goto label_1a5200;
        case 0x1a5204u: goto label_1a5204;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        case 0x1a5358u: goto label_1a5358;
        case 0x1a535cu: goto label_1a535c;
        case 0x1a5360u: goto label_1a5360;
        case 0x1a5364u: goto label_1a5364;
        case 0x1a5368u: goto label_1a5368;
        case 0x1a536cu: goto label_1a536c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5374u: goto label_1a5374;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a537cu: goto label_1a537c;
        case 0x1a5380u: goto label_1a5380;
        case 0x1a5384u: goto label_1a5384;
        case 0x1a5388u: goto label_1a5388;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5390u: goto label_1a5390;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a539cu: goto label_1a539c;
        default: break;
    }

    ctx->pc = 0x1a4cf0u;

label_1a4cf0:
    // 0x1a4cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a4cf4:
    // 0x1a4cf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a4cf8:
    // 0x1a4cf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a4cfc:
    // 0x1a4cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a4d00:
    // 0x1a4d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a4d04:
    // 0x1a4d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a4d08:
    // 0x1a4d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a4d0c:
    // 0x1a4d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d10:
    // 0x1a4d10: 0xc069d34  jal         func_1A74D0
label_1a4d14:
    if (ctx->pc == 0x1A4D14u) {
        ctx->pc = 0x1A4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D10u;
        // 0x1a4d14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D18u;
        goto label_1a4d18;
    }
    ctx->pc = 0x1A4D10u;
    SET_GPR_U32(ctx, 31, 0x1A4D18u);
    ctx->pc = 0x1A4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D10u;
    // 0x1a4d14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74D0u, 0x1A4D10u, 0x1A4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D18u;
label_1a4d18:
    // 0x1a4d18: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1a4d18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4d1c:
    // 0x1a4d1c: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x1a4d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_1a4d20:
    // 0x1a4d20: 0x14600197  bnez        $v1, . + 4 + (0x197 << 2)
label_1a4d24:
    if (ctx->pc == 0x1A4D24u) {
        ctx->pc = 0x1A4D28u;
        goto label_1a4d28;
    }
    ctx->pc = 0x1A4D20u;
    {
        const bool branch_taken_0x1a4d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d20) {
            ctx->pc = 0x1A5380u;
            goto label_1a5380;
        }
    }
    ctx->pc = 0x1A4D28u;
label_1a4d28:
    // 0x1a4d28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a4d2c:
    // 0x1a4d2c: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
label_1a4d30:
    if (ctx->pc == 0x1A4D30u) {
        ctx->pc = 0x1A4D34u;
        goto label_1a4d34;
    }
    ctx->pc = 0x1A4D2Cu;
    {
        const bool branch_taken_0x1a4d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4d2c) {
            ctx->pc = 0x1A4D90u;
            goto label_1a4d90;
        }
    }
    ctx->pc = 0x1A4D34u;
label_1a4d34:
    // 0x1a4d34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4d38:
    // 0x1a4d38: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1a4d3c:
    // 0x1a4d3c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1a4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4d40:
    // 0x1a4d40: 0xc049522  jal         func_125488
label_1a4d44:
    if (ctx->pc == 0x1A4D44u) {
        ctx->pc = 0x1A4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D40u;
        // 0x1a4d44: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D48u;
        goto label_1a4d48;
    }
    ctx->pc = 0x1A4D40u;
    SET_GPR_U32(ctx, 31, 0x1A4D48u);
    ctx->pc = 0x1A4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D40u;
    // 0x1a4d44: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A4D40u, 0x1A4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D48u;
label_1a4d48:
    // 0x1a4d48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a4d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d4c:
    // 0x1a4d4c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1a4d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d50:
    // 0x1a4d50: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x1a4d50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
label_1a4d54:
    // 0x1a4d54: 0x0  nop
    ctx->pc = 0x1a4d54u;
    // NOP
label_1a4d58:
    // 0x1a4d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4d5c:
    // 0x1a4d5c: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x1a4d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_1a4d60:
    // 0x1a4d60: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1a4d64:
    // 0x1a4d64: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1a4d68:
    // 0x1a4d68: 0xc049522  jal         func_125488
label_1a4d6c:
    if (ctx->pc == 0x1A4D6Cu) {
        ctx->pc = 0x1A4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D68u;
        // 0x1a4d6c: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D70u;
        goto label_1a4d70;
    }
    ctx->pc = 0x1A4D68u;
    SET_GPR_U32(ctx, 31, 0x1A4D70u);
    ctx->pc = 0x1A4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D68u;
    // 0x1a4d6c: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A4D68u, 0x1A4D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D70u;
label_1a4d70:
    // 0x1a4d70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a4d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1a4d74:
    // 0x1a4d74: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_1a4d78:
    // 0x1a4d78: 0x2e830010  sltiu       $v1, $s4, 0x10
    ctx->pc = 0x1a4d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a4d7c:
    // 0x1a4d7c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1a4d80:
    if (ctx->pc == 0x1A4D80u) {
        ctx->pc = 0x1A4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D7Cu;
        // 0x1a4d80: 0x265203e8  addiu       $s2, $s2, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D84u;
        goto label_1a4d84;
    }
    ctx->pc = 0x1A4D7Cu;
    {
        const bool branch_taken_0x1a4d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D7Cu;
        // 0x1a4d80: 0x265203e8  addiu       $s2, $s2, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d7c) {
            ctx->pc = 0x1A4D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4d58;
        }
    }
    ctx->pc = 0x1A4D84u;
label_1a4d84:
    // 0x1a4d84: 0x10000064  b           . + 4 + (0x64 << 2)
label_1a4d88:
    if (ctx->pc == 0x1A4D88u) {
        ctx->pc = 0x1A4D8Cu;
        goto label_1a4d8c;
    }
    ctx->pc = 0x1A4D84u;
    {
        const bool branch_taken_0x1a4d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d84) {
            ctx->pc = 0x1A4F18u;
            goto label_1a4f18;
        }
    }
    ctx->pc = 0x1A4D8Cu;
label_1a4d8c:
    // 0x1a4d8c: 0x0  nop
    ctx->pc = 0x1a4d8cu;
    // NOP
label_1a4d90:
    // 0x1a4d90: 0x28810084  slti        $at, $a0, 0x84
    ctx->pc = 0x1a4d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)132) ? 1 : 0);
label_1a4d94:
    // 0x1a4d94: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_1a4d98:
    if (ctx->pc == 0x1A4D98u) {
        ctx->pc = 0x1A4D9Cu;
        goto label_1a4d9c;
    }
    ctx->pc = 0x1A4D94u;
    {
        const bool branch_taken_0x1a4d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d94) {
            ctx->pc = 0x1A4EA0u;
            goto label_1a4ea0;
        }
    }
    ctx->pc = 0x1A4D9Cu;
label_1a4d9c:
    // 0x1a4d9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4da0:
    // 0x1a4da0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1a4da4:
    // 0x1a4da4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1a4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4da8:
    // 0x1a4da8: 0xc049522  jal         func_125488
label_1a4dac:
    if (ctx->pc == 0x1A4DACu) {
        ctx->pc = 0x1A4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DA8u;
        // 0x1a4dac: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DB0u;
        goto label_1a4db0;
    }
    ctx->pc = 0x1A4DA8u;
    SET_GPR_U32(ctx, 31, 0x1A4DB0u);
    ctx->pc = 0x1A4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DA8u;
    // 0x1a4dac: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A4DA8u, 0x1A4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DB0u;
label_1a4db0:
    // 0x1a4db0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a4db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4db4:
    // 0x1a4db4: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
label_1a4db8:
    // 0x1a4db8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1a4db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dbc:
    // 0x1a4dbc: 0x0  nop
    ctx->pc = 0x1a4dbcu;
    // NOP
label_1a4dc0:
    // 0x1a4dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dc4:
    // 0x1a4dc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a4dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dc8:
    // 0x1a4dc8: 0xc049522  jal         func_125488
label_1a4dcc:
    if (ctx->pc == 0x1A4DCCu) {
        ctx->pc = 0x1A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DC8u;
        // 0x1a4dcc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DD0u;
        goto label_1a4dd0;
    }
    ctx->pc = 0x1A4DC8u;
    SET_GPR_U32(ctx, 31, 0x1A4DD0u);
    ctx->pc = 0x1A4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DC8u;
    // 0x1a4dcc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A4DC8u, 0x1A4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DD0u;
label_1a4dd0:
    // 0x1a4dd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a4dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1a4dd4:
    // 0x1a4dd4: 0x267303d0  addiu       $s3, $s3, 0x3D0
    ctx->pc = 0x1a4dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
label_1a4dd8:
    // 0x1a4dd8: 0x2e830010  sltiu       $v1, $s4, 0x10
    ctx->pc = 0x1a4dd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a4ddc:
    // 0x1a4ddc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1a4de0:
    if (ctx->pc == 0x1A4DE0u) {
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DE4u;
        goto label_1a4de4;
    }
    ctx->pc = 0x1A4DDCu;
    {
        const bool branch_taken_0x1a4ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ddc) {
            ctx->pc = 0x1A4DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4dc0;
        }
    }
    ctx->pc = 0x1A4DE4u;
label_1a4de4:
    // 0x1a4de4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a4de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4de8:
    // 0x1a4de8: 0x28610083  slti        $at, $v1, 0x83
    ctx->pc = 0x1a4de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)131) ? 1 : 0);
label_1a4dec:
    // 0x1a4dec: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1a4df0:
    if (ctx->pc == 0x1A4DF0u) {
        ctx->pc = 0x1A4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DECu;
        // 0x1a4df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DF4u;
        goto label_1a4df4;
    }
    ctx->pc = 0x1A4DECu;
    {
        const bool branch_taken_0x1a4dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DECu;
        // 0x1a4df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dec) {
            ctx->pc = 0x1A4E20u;
            goto label_1a4e20;
        }
    }
    ctx->pc = 0x1A4DF4u;
label_1a4df4:
    // 0x1a4df4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a4df8:
    // 0x1a4df8: 0xc0692bc  jal         func_1A4AF0
label_1a4dfc:
    if (ctx->pc == 0x1A4DFCu) {
        ctx->pc = 0x1A4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DF8u;
        // 0x1a4dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E00u;
        goto label_1a4e00;
    }
    ctx->pc = 0x1A4DF8u;
    SET_GPR_U32(ctx, 31, 0x1A4E00u);
    ctx->pc = 0x1A4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DF8u;
    // 0x1a4dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x1A4DF8u, 0x1A4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E00u;
label_1a4e00:
    // 0x1a4e00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e04:
    // 0x1a4e04: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
label_1a4e08:
    if (ctx->pc == 0x1A4E08u) {
        ctx->pc = 0x1A4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E04u;
        // 0x1a4e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E0Cu;
        goto label_1a4e0c;
    }
    ctx->pc = 0x1A4E04u;
    {
        const bool branch_taken_0x1a4e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E04u;
        // 0x1a4e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e04) {
            ctx->pc = 0x1A4F18u;
            goto label_1a4f18;
        }
    }
    ctx->pc = 0x1A4E0Cu;
label_1a4e0c:
    // 0x1a4e0c: 0xc069894  jal         func_1A6250
label_1a4e10:
    if (ctx->pc == 0x1A4E10u) {
        ctx->pc = 0x1A4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E0Cu;
        // 0x1a4e10: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E14u;
        goto label_1a4e14;
    }
    ctx->pc = 0x1A4E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E14u);
    ctx->pc = 0x1A4E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E0Cu;
    // 0x1a4e10: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6250u, 0x1A4E0Cu, 0x1A4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E14u;
label_1a4e14:
    // 0x1a4e14: 0x10000040  b           . + 4 + (0x40 << 2)
label_1a4e18:
    if (ctx->pc == 0x1A4E18u) {
        ctx->pc = 0x1A4E1Cu;
        goto label_1a4e1c;
    }
    ctx->pc = 0x1A4E14u;
    {
        const bool branch_taken_0x1a4e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e14) {
            ctx->pc = 0x1A4F18u;
            goto label_1a4f18;
        }
    }
    ctx->pc = 0x1A4E1Cu;
label_1a4e1c:
    // 0x1a4e1c: 0x0  nop
    ctx->pc = 0x1a4e1cu;
    // NOP
label_1a4e20:
    // 0x1a4e20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a4e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e24:
    // 0x1a4e24: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1a4e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e28:
    // 0x1a4e28: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4e2c:
    // 0x1a4e2c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a4e30:
    // 0x1a4e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e34:
    // 0x1a4e34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4e38:
    // 0x1a4e38: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x1a4e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a4e3c:
    // 0x1a4e3c: 0x0  nop
    ctx->pc = 0x1a4e3cu;
    // NOP
label_1a4e40:
    // 0x1a4e40: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1a4e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1a4e44:
    // 0x1a4e44: 0x14680006  bne         $v1, $t0, . + 4 + (0x6 << 2)
label_1a4e48:
    if (ctx->pc == 0x1A4E48u) {
        ctx->pc = 0x1A4E4Cu;
        goto label_1a4e4c;
    }
    ctx->pc = 0x1A4E44u;
    {
        const bool branch_taken_0x1a4e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a4e44) {
            ctx->pc = 0x1A4E60u;
            goto label_1a4e60;
        }
    }
    ctx->pc = 0x1A4E4Cu;
label_1a4e4c:
    // 0x1a4e4c: 0x8d230060  lw          $v1, 0x60($t1)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
label_1a4e50:
    // 0x1a4e50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a4e54:
    if (ctx->pc == 0x1A4E54u) {
        ctx->pc = 0x1A4E58u;
        goto label_1a4e58;
    }
    ctx->pc = 0x1A4E50u;
    {
        const bool branch_taken_0x1a4e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e50) {
            ctx->pc = 0x1A4E60u;
            goto label_1a4e60;
        }
    }
    ctx->pc = 0x1A4E58u;
label_1a4e58:
    // 0x1a4e58: 0xad270060  sw          $a3, 0x60($t1)
    ctx->pc = 0x1a4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 7));
label_1a4e5c:
    // 0x1a4e5c: 0x0  nop
    ctx->pc = 0x1a4e5cu;
    // NOP
label_1a4e60:
    // 0x1a4e60: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1a4e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1a4e64:
    // 0x1a4e64: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
label_1a4e68:
    if (ctx->pc == 0x1A4E68u) {
        ctx->pc = 0x1A4E6Cu;
        goto label_1a4e6c;
    }
    ctx->pc = 0x1A4E64u;
    {
        const bool branch_taken_0x1a4e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a4e64) {
            ctx->pc = 0x1A4E80u;
            goto label_1a4e80;
        }
    }
    ctx->pc = 0x1A4E6Cu;
label_1a4e6c:
    // 0x1a4e6c: 0xa1250028  sb          $a1, 0x28($t1)
    ctx->pc = 0x1a4e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 40), (uint8_t)GPR_U32(ctx, 5));
label_1a4e70:
    // 0x1a4e70: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x1a4e70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_1a4e74:
    // 0x1a4e74: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x1a4e74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
label_1a4e78:
    // 0x1a4e78: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x1a4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
label_1a4e7c:
    // 0x1a4e7c: 0x0  nop
    ctx->pc = 0x1a4e7cu;
    // NOP
label_1a4e80:
    // 0x1a4e80: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1a4e84:
    // 0x1a4e84: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x1a4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
label_1a4e88:
    // 0x1a4e88: 0x2d430010  sltiu       $v1, $t2, 0x10
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a4e8c:
    // 0x1a4e8c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1a4e90:
    if (ctx->pc == 0x1A4E90u) {
        ctx->pc = 0x1A4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E8Cu;
        // 0x1a4e90: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E94u;
        goto label_1a4e94;
    }
    ctx->pc = 0x1A4E8Cu;
    {
        const bool branch_taken_0x1a4e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E8Cu;
        // 0x1a4e90: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e8c) {
            ctx->pc = 0x1A4E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A4E94u;
label_1a4e94:
    // 0x1a4e94: 0x10000020  b           . + 4 + (0x20 << 2)
label_1a4e98:
    if (ctx->pc == 0x1A4E98u) {
        ctx->pc = 0x1A4E9Cu;
        goto label_1a4e9c;
    }
    ctx->pc = 0x1A4E94u;
    {
        const bool branch_taken_0x1a4e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e94) {
            ctx->pc = 0x1A4F18u;
            goto label_1a4f18;
        }
    }
    ctx->pc = 0x1A4E9Cu;
label_1a4e9c:
    // 0x1a4e9c: 0x0  nop
    ctx->pc = 0x1a4e9cu;
    // NOP
label_1a4ea0:
    // 0x1a4ea0: 0x28810085  slti        $at, $a0, 0x85
    ctx->pc = 0x1a4ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)133) ? 1 : 0);
label_1a4ea4:
    // 0x1a4ea4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1a4ea8:
    if (ctx->pc == 0x1A4EA8u) {
        ctx->pc = 0x1A4EACu;
        goto label_1a4eac;
    }
    ctx->pc = 0x1A4EA4u;
    {
        const bool branch_taken_0x1a4ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ea4) {
            ctx->pc = 0x1A4F00u;
            goto label_1a4f00;
        }
    }
    ctx->pc = 0x1A4EACu;
label_1a4eac:
    // 0x1a4eac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4eb0:
    // 0x1a4eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4eb4:
    // 0x1a4eb4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1a4eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4eb8:
    // 0x1a4eb8: 0xc049522  jal         func_125488
label_1a4ebc:
    if (ctx->pc == 0x1A4EBCu) {
        ctx->pc = 0x1A4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB8u;
        // 0x1a4ebc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EC0u;
        goto label_1a4ec0;
    }
    ctx->pc = 0x1A4EB8u;
    SET_GPR_U32(ctx, 31, 0x1A4EC0u);
    ctx->pc = 0x1A4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EB8u;
    // 0x1a4ebc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A4EB8u, 0x1A4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EC0u;
label_1a4ec0:
    // 0x1a4ec0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a4ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ec4:
    // 0x1a4ec4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1a4ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ec8:
    // 0x1a4ec8: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1a4ec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1a4ecc:
    // 0x1a4ecc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a4eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4ed0:
    // 0x1a4ed0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1a4ed4:
    if (ctx->pc == 0x1A4ED4u) {
        ctx->pc = 0x1A4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED0u;
        // 0x1a4ed4: 0x2644008c  addiu       $a0, $s2, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4ED8u;
        goto label_1a4ed8;
    }
    ctx->pc = 0x1A4ED0u;
    {
        const bool branch_taken_0x1a4ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED0u;
        // 0x1a4ed4: 0x2644008c  addiu       $a0, $s2, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ed0) {
            ctx->pc = 0x1A4EE8u;
            goto label_1a4ee8;
        }
    }
    ctx->pc = 0x1A4ED8u;
label_1a4ed8:
    // 0x1a4ed8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a4edc:
    // 0x1a4edc: 0xc049590  jal         func_125640
label_1a4ee0:
    if (ctx->pc == 0x1A4EE0u) {
        ctx->pc = 0x1A4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EDCu;
        // 0x1a4ee0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EE4u;
        goto label_1a4ee4;
    }
    ctx->pc = 0x1A4EDCu;
    SET_GPR_U32(ctx, 31, 0x1A4EE4u);
    ctx->pc = 0x1A4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EDCu;
    // 0x1a4ee0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4EDCu, 0x1A4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EE4u;
label_1a4ee4:
    // 0x1a4ee4: 0x0  nop
    ctx->pc = 0x1a4ee4u;
    // NOP
label_1a4ee8:
    // 0x1a4ee8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a4ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a4eec:
    // 0x1a4eec: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x1a4eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a4ef0:
    // 0x1a4ef0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1a4ef4:
    if (ctx->pc == 0x1A4EF4u) {
        ctx->pc = 0x1A4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EF0u;
        // 0x1a4ef4: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EF8u;
        goto label_1a4ef8;
    }
    ctx->pc = 0x1A4EF0u;
    {
        const bool branch_taken_0x1a4ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EF0u;
        // 0x1a4ef4: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ef0) {
            ctx->pc = 0x1A4EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4ec8;
        }
    }
    ctx->pc = 0x1A4EF8u;
label_1a4ef8:
    // 0x1a4ef8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4efc:
    if (ctx->pc == 0x1A4EFCu) {
        ctx->pc = 0x1A4F00u;
        goto label_1a4f00;
    }
    ctx->pc = 0x1A4EF8u;
    {
        const bool branch_taken_0x1a4ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ef8) {
            ctx->pc = 0x1A4F18u;
            goto label_1a4f18;
        }
    }
    ctx->pc = 0x1A4F00u;
label_1a4f00:
    // 0x1a4f00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4f04:
    // 0x1a4f04: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1a4f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4f08:
    // 0x1a4f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f0c:
    // 0x1a4f0c: 0xc049522  jal         func_125488
label_1a4f10:
    if (ctx->pc == 0x1A4F10u) {
        ctx->pc = 0x1A4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F0Cu;
        // 0x1a4f10: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F14u;
        goto label_1a4f14;
    }
    ctx->pc = 0x1A4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F14u);
    ctx->pc = 0x1A4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F0Cu;
    // 0x1a4f10: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A4F0Cu, 0x1A4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F14u;
label_1a4f14:
    // 0x1a4f14: 0x0  nop
    ctx->pc = 0x1a4f14u;
    // NOP
label_1a4f18:
    // 0x1a4f18: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a4f18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f1c:
    // 0x1a4f1c: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x1a4f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
label_1a4f20:
    // 0x1a4f20: 0x240a0055  addiu       $t2, $zero, 0x55
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1a4f24:
    // 0x1a4f24: 0x240b06c0  addiu       $t3, $zero, 0x6C0
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
label_1a4f28:
    // 0x1a4f28: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a4f2c:
    // 0x1a4f2c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1a4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1a4f30:
    // 0x1a4f30: 0x3c123f00  lui         $s2, 0x3F00
    ctx->pc = 0x1a4f30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16128 << 16));
label_1a4f34:
    // 0x1a4f34: 0x24040562  addiu       $a0, $zero, 0x562
    ctx->pc = 0x1a4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
label_1a4f38:
    // 0x1a4f38: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f3c:
    // 0x1a4f3c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1a4f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a4f40:
    // 0x1a4f40: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1a4f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a4f44:
    // 0x1a4f44: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x1a4f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_1a4f48:
    // 0x1a4f48: 0x258c58c0  addiu       $t4, $t4, 0x58C0
    ctx->pc = 0x1a4f48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 22720));
label_1a4f4c:
    // 0x1a4f4c: 0x0  nop
    ctx->pc = 0x1a4f4cu;
    // NOP
label_1a4f50:
    // 0x1a4f50: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a4f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a4f54:
    // 0x1a4f54: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a4f58:
    // 0x1a4f58: 0xa6200006  sh          $zero, 0x6($s1)
    ctx->pc = 0x1a4f58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
label_1a4f5c:
    // 0x1a4f5c: 0x922e0000  lbu         $t6, 0x0($s1)
    ctx->pc = 0x1a4f5cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4f60:
    // 0x1a4f60: 0x2dc10016  sltiu       $at, $t6, 0x16
    ctx->pc = 0x1a4f60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_1a4f64:
    // 0x1a4f64: 0x10200102  beqz        $at, . + 4 + (0x102 << 2)
label_1a4f68:
    if (ctx->pc == 0x1A4F68u) {
        ctx->pc = 0x1A4F6Cu;
        goto label_1a4f6c;
    }
    ctx->pc = 0x1A4F64u;
    {
        const bool branch_taken_0x1a4f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f64) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A4F6Cu;
label_1a4f6c:
    // 0x1a4f6c: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1a4f6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_1a4f70:
    // 0x1a4f70: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1a4f70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_1a4f74:
    // 0x1a4f74: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_1a4f78:
    // 0x1a4f78: 0x1c00008  jr          $t6
label_1a4f7c:
    if (ctx->pc == 0x1A4F7Cu) {
        ctx->pc = 0x1A4F80u;
        goto label_1a4f80;
    }
    ctx->pc = 0x1A4F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 14);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A4F80u;
label_1a4f80:
    // 0x1a4f80: 0x262f005c  addiu       $t7, $s1, 0x5C
    ctx->pc = 0x1a4f80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_1a4f84:
    // 0x1a4f84: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a4f84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a4f88:
    // 0x1a4f88: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a4f8c:
    // 0x1a4f8c: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a4f90:
    if (ctx->pc == 0x1A4F90u) {
        ctx->pc = 0x1A4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F8Cu;
        // 0x1a4f90: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F94u;
        goto label_1a4f94;
    }
    ctx->pc = 0x1A4F8Cu;
    {
        const bool branch_taken_0x1a4f8c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F8Cu;
        // 0x1a4f90: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f8c) {
            ctx->pc = 0x1A4F9Cu;
            goto label_1a4f9c;
        }
    }
    ctx->pc = 0x1A4F94u;
label_1a4f94:
    // 0x1a4f94: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a4f94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a4f98:
    // 0x1a4f98: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a4f98u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a4f9c:
    // 0x1a4f9c: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a4f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a4fa0:
    // 0x1a4fa0: 0xa62b0004  sh          $t3, 0x4($s1)
    ctx->pc = 0x1a4fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 11));
label_1a4fa4:
    // 0x1a4fa4: 0x920e0000  lbu         $t6, 0x0($s0)
    ctx->pc = 0x1a4fa4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4fa8:
    // 0x1a4fa8: 0x29c10086  slti        $at, $t6, 0x86
    ctx->pc = 0x1a4fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)134) ? 1 : 0);
label_1a4fac:
    // 0x1a4fac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1a4fb0:
    if (ctx->pc == 0x1A4FB0u) {
        ctx->pc = 0x1A4FB4u;
        goto label_1a4fb4;
    }
    ctx->pc = 0x1A4FACu;
    {
        const bool branch_taken_0x1a4fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fac) {
            ctx->pc = 0x1A4FC8u;
            goto label_1a4fc8;
        }
    }
    ctx->pc = 0x1A4FB4u;
label_1a4fb4:
    // 0x1a4fb4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1a4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_1a4fb8:
    // 0x1a4fb8: 0xae2a0048  sw          $t2, 0x48($s1)
    ctx->pc = 0x1a4fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 10));
label_1a4fbc:
    // 0x1a4fbc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1a4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1a4fc0:
    // 0x1a4fc0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1a4fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_1a4fc4:
    // 0x1a4fc4: 0x0  nop
    ctx->pc = 0x1a4fc4u;
    // NOP
label_1a4fc8:
    // 0x1a4fc8: 0x920e0000  lbu         $t6, 0x0($s0)
    ctx->pc = 0x1a4fc8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4fcc:
    // 0x1a4fcc: 0x29c10087  slti        $at, $t6, 0x87
    ctx->pc = 0x1a4fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)135) ? 1 : 0);
label_1a4fd0:
    // 0x1a4fd0: 0x102000e7  beqz        $at, . + 4 + (0xE7 << 2)
label_1a4fd4:
    if (ctx->pc == 0x1A4FD4u) {
        ctx->pc = 0x1A4FD8u;
        goto label_1a4fd8;
    }
    ctx->pc = 0x1A4FD0u;
    {
        const bool branch_taken_0x1a4fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fd0) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A4FD8u;
label_1a4fd8:
    // 0x1a4fd8: 0xae29004c  sw          $t1, 0x4C($s1)
    ctx->pc = 0x1a4fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 9));
label_1a4fdc:
    // 0x1a4fdc: 0xae280050  sw          $t0, 0x50($s1)
    ctx->pc = 0x1a4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 8));
label_1a4fe0:
    // 0x1a4fe0: 0xae270054  sw          $a3, 0x54($s1)
    ctx->pc = 0x1a4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 7));
label_1a4fe4:
    // 0x1a4fe4: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_1a4fe8:
    if (ctx->pc == 0x1A4FE8u) {
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0xae260058  sw          $a2, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FECu;
        goto label_1a4fec;
    }
    ctx->pc = 0x1A4FE4u;
    {
        const bool branch_taken_0x1a4fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0xae260058  sw          $a2, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fe4) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A4FECu;
label_1a4fec:
    // 0x1a4fec: 0x0  nop
    ctx->pc = 0x1a4fecu;
    // NOP
label_1a4ff0:
    // 0x1a4ff0: 0x262f002c  addiu       $t7, $s1, 0x2C
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1a4ff4:
    // 0x1a4ff4: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a4ff8:
    // 0x1a4ff8: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a4ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a4ffc:
    // 0x1a4ffc: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5000:
    if (ctx->pc == 0x1A5000u) {
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5004u;
        goto label_1a5004;
    }
    ctx->pc = 0x1A4FFCu;
    {
        const bool branch_taken_0x1a4ffc = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ffc) {
            ctx->pc = 0x1A500Cu;
            goto label_1a500c;
        }
    }
    ctx->pc = 0x1A5004u;
label_1a5004:
    // 0x1a5004: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5004u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5008:
    // 0x1a5008: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5008u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a500c:
    // 0x1a500c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_1a5010:
    if (ctx->pc == 0x1A5010u) {
        ctx->pc = 0x1A5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A500Cu;
        // 0x1a5010: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5014u;
        goto label_1a5014;
    }
    ctx->pc = 0x1A500Cu;
    {
        const bool branch_taken_0x1a500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A500Cu;
        // 0x1a5010: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a500c) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5014u;
label_1a5014:
    // 0x1a5014: 0x0  nop
    ctx->pc = 0x1a5014u;
    // NOP
label_1a5018:
    // 0x1a5018: 0x262f0020  addiu       $t7, $s1, 0x20
    ctx->pc = 0x1a5018u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1a501c:
    // 0x1a501c: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5020:
    // 0x1a5020: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5024:
    // 0x1a5024: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5028:
    if (ctx->pc == 0x1A5028u) {
        ctx->pc = 0x1A5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5024u;
        // 0x1a5028: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A502Cu;
        goto label_1a502c;
    }
    ctx->pc = 0x1A5024u;
    {
        const bool branch_taken_0x1a5024 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5024u;
        // 0x1a5028: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5024) {
            ctx->pc = 0x1A5034u;
            goto label_1a5034;
        }
    }
    ctx->pc = 0x1A502Cu;
label_1a502c:
    // 0x1a502c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a502cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5030:
    // 0x1a5030: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5030u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5034:
    // 0x1a5034: 0x100000ce  b           . + 4 + (0xCE << 2)
label_1a5038:
    if (ctx->pc == 0x1A5038u) {
        ctx->pc = 0x1A5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5034u;
        // 0x1a5038: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A503Cu;
        goto label_1a503c;
    }
    ctx->pc = 0x1A5034u;
    {
        const bool branch_taken_0x1a5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5034u;
        // 0x1a5038: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5034) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A503Cu;
label_1a503c:
    // 0x1a503c: 0x0  nop
    ctx->pc = 0x1a503cu;
    // NOP
label_1a5040:
    // 0x1a5040: 0x262f0050  addiu       $t7, $s1, 0x50
    ctx->pc = 0x1a5040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1a5044:
    // 0x1a5044: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a5044u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5048:
    // 0x1a5048: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5048u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a504c:
    // 0x1a504c: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5050:
    if (ctx->pc == 0x1A5050u) {
        ctx->pc = 0x1A5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A504Cu;
        // 0x1a5050: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5054u;
        goto label_1a5054;
    }
    ctx->pc = 0x1A504Cu;
    {
        const bool branch_taken_0x1a504c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A504Cu;
        // 0x1a5050: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a504c) {
            ctx->pc = 0x1A505Cu;
            goto label_1a505c;
        }
    }
    ctx->pc = 0x1A5054u;
label_1a5054:
    // 0x1a5054: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5058:
    // 0x1a5058: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5058u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a505c:
    // 0x1a505c: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a505cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5060:
    // 0x1a5060: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1a5064:
    if (ctx->pc == 0x1A5064u) {
        ctx->pc = 0x1A5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5060u;
        // 0x1a5064: 0xa6250004  sh          $a1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5068u;
        goto label_1a5068;
    }
    ctx->pc = 0x1A5060u;
    {
        const bool branch_taken_0x1a5060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5060u;
        // 0x1a5064: 0xa6250004  sh          $a1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5060) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5068u;
label_1a5068:
    // 0x1a5068: 0x262f0094  addiu       $t7, $s1, 0x94
    ctx->pc = 0x1a5068u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_1a506c:
    // 0x1a506c: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a506cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5070:
    // 0x1a5070: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5074:
    // 0x1a5074: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5078:
    if (ctx->pc == 0x1A5078u) {
        ctx->pc = 0x1A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5074u;
        // 0x1a5078: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A507Cu;
        goto label_1a507c;
    }
    ctx->pc = 0x1A5074u;
    {
        const bool branch_taken_0x1a5074 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5074u;
        // 0x1a5078: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5074) {
            ctx->pc = 0x1A5084u;
            goto label_1a5084;
        }
    }
    ctx->pc = 0x1A507Cu;
label_1a507c:
    // 0x1a507c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a507cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5080:
    // 0x1a5080: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5080u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5084:
    // 0x1a5084: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a5084u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5088:
    // 0x1a5088: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1a508c:
    if (ctx->pc == 0x1A508Cu) {
        ctx->pc = 0x1A508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5088u;
        // 0x1a508c: 0xa6250004  sh          $a1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5090u;
        goto label_1a5090;
    }
    ctx->pc = 0x1A5088u;
    {
        const bool branch_taken_0x1a5088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5088u;
        // 0x1a508c: 0xa6250004  sh          $a1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5088) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5090u;
label_1a5090:
    // 0x1a5090: 0x262f0024  addiu       $t7, $s1, 0x24
    ctx->pc = 0x1a5090u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_1a5094:
    // 0x1a5094: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a5094u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5098:
    // 0x1a5098: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5098u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a509c:
    // 0x1a509c: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a50a0:
    if (ctx->pc == 0x1A50A0u) {
        ctx->pc = 0x1A50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A509Cu;
        // 0x1a50a0: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50A4u;
        goto label_1a50a4;
    }
    ctx->pc = 0x1A509Cu;
    {
        const bool branch_taken_0x1a509c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A509Cu;
        // 0x1a50a0: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a509c) {
            ctx->pc = 0x1A50ACu;
            goto label_1a50ac;
        }
    }
    ctx->pc = 0x1A50A4u;
label_1a50a4:
    // 0x1a50a4: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a50a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a50a8:
    // 0x1a50a8: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a50ac:
    // 0x1a50ac: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a50acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a50b0:
    // 0x1a50b0: 0x100000af  b           . + 4 + (0xAF << 2)
label_1a50b4:
    if (ctx->pc == 0x1A50B4u) {
        ctx->pc = 0x1A50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50B0u;
        // 0x1a50b4: 0xa6200004  sh          $zero, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50B8u;
        goto label_1a50b8;
    }
    ctx->pc = 0x1A50B0u;
    {
        const bool branch_taken_0x1a50b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50B0u;
        // 0x1a50b4: 0xa6200004  sh          $zero, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50b0) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A50B8u;
label_1a50b8:
    // 0x1a50b8: 0x262f0080  addiu       $t7, $s1, 0x80
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1a50bc:
    // 0x1a50bc: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a50bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a50c0:
    // 0x1a50c0: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a50c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a50c4:
    // 0x1a50c4: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a50c8:
    if (ctx->pc == 0x1A50C8u) {
        ctx->pc = 0x1A50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50C4u;
        // 0x1a50c8: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50CCu;
        goto label_1a50cc;
    }
    ctx->pc = 0x1A50C4u;
    {
        const bool branch_taken_0x1a50c4 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50C4u;
        // 0x1a50c8: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50c4) {
            ctx->pc = 0x1A50D4u;
            goto label_1a50d4;
        }
    }
    ctx->pc = 0x1A50CCu;
label_1a50cc:
    // 0x1a50cc: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a50ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a50d0:
    // 0x1a50d0: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a50d4:
    // 0x1a50d4: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a50d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a50d8:
    // 0x1a50d8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1a50dc:
    // 0x1a50dc: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a50dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a50e0:
    // 0x1a50e0: 0x942e6ac4  lhu         $t6, 0x6AC4($at)
    ctx->pc = 0x1a50e0u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1a50e4:
    // 0x1a50e4: 0x11c400a2  beq         $t6, $a0, . + 4 + (0xA2 << 2)
label_1a50e8:
    if (ctx->pc == 0x1A50E8u) {
        ctx->pc = 0x1A50ECu;
        goto label_1a50ec;
    }
    ctx->pc = 0x1A50E4u;
    {
        const bool branch_taken_0x1a50e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a50e4) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A50ECu;
label_1a50ec:
    // 0x1a50ec: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1a50f0:
    if (ctx->pc == 0x1A50F0u) {
        ctx->pc = 0x1A50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ECu;
        // 0x1a50f0: 0xa2200063  sb          $zero, 0x63($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 99), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50F4u;
        goto label_1a50f4;
    }
    ctx->pc = 0x1A50ECu;
    {
        const bool branch_taken_0x1a50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ECu;
        // 0x1a50f0: 0xa2200063  sb          $zero, 0x63($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 99), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50ec) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A50F4u;
label_1a50f4:
    // 0x1a50f4: 0x0  nop
    ctx->pc = 0x1a50f4u;
    // NOP
label_1a50f8:
    // 0x1a50f8: 0x262f0064  addiu       $t7, $s1, 0x64
    ctx->pc = 0x1a50f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_1a50fc:
    // 0x1a50fc: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5100:
    // 0x1a5100: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5100u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5104:
    // 0x1a5104: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5108:
    if (ctx->pc == 0x1A5108u) {
        ctx->pc = 0x1A5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5104u;
        // 0x1a5108: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A510Cu;
        goto label_1a510c;
    }
    ctx->pc = 0x1A5104u;
    {
        const bool branch_taken_0x1a5104 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5104u;
        // 0x1a5108: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5104) {
            ctx->pc = 0x1A5114u;
            goto label_1a5114;
        }
    }
    ctx->pc = 0x1A510Cu;
label_1a510c:
    // 0x1a510c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a510cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5110:
    // 0x1a5110: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5110u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5114:
    // 0x1a5114: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a5114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5118:
    // 0x1a5118: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a5118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1a511c:
    // 0x1a511c: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a511cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a5120:
    // 0x1a5120: 0x942e6ac4  lhu         $t6, 0x6AC4($at)
    ctx->pc = 0x1a5120u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1a5124:
    // 0x1a5124: 0x11c40092  beq         $t6, $a0, . + 4 + (0x92 << 2)
label_1a5128:
    if (ctx->pc == 0x1A5128u) {
        ctx->pc = 0x1A512Cu;
        goto label_1a512c;
    }
    ctx->pc = 0x1A5124u;
    {
        const bool branch_taken_0x1a5124 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a5124) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A512Cu;
label_1a512c:
    // 0x1a512c: 0x10000090  b           . + 4 + (0x90 << 2)
label_1a5130:
    if (ctx->pc == 0x1A5130u) {
        ctx->pc = 0x1A5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A512Cu;
        // 0x1a5130: 0xa220005f  sb          $zero, 0x5F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5134u;
        goto label_1a5134;
    }
    ctx->pc = 0x1A512Cu;
    {
        const bool branch_taken_0x1a512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A512Cu;
        // 0x1a5130: 0xa220005f  sb          $zero, 0x5F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a512c) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5134u;
label_1a5134:
    // 0x1a5134: 0x0  nop
    ctx->pc = 0x1a5134u;
    // NOP
label_1a5138:
    // 0x1a5138: 0x262f0050  addiu       $t7, $s1, 0x50
    ctx->pc = 0x1a5138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1a513c:
    // 0x1a513c: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a513cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5140:
    // 0x1a5140: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5140u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5144:
    // 0x1a5144: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5148:
    if (ctx->pc == 0x1A5148u) {
        ctx->pc = 0x1A5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5144u;
        // 0x1a5148: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A514Cu;
        goto label_1a514c;
    }
    ctx->pc = 0x1A5144u;
    {
        const bool branch_taken_0x1a5144 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5144u;
        // 0x1a5148: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5144) {
            ctx->pc = 0x1A5154u;
            goto label_1a5154;
        }
    }
    ctx->pc = 0x1A514Cu;
label_1a514c:
    // 0x1a514c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a514cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5150:
    // 0x1a5150: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5150u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5154:
    // 0x1a5154: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a5154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5158:
    // 0x1a5158: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a5158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1a515c:
    // 0x1a515c: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a515cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a5160:
    // 0x1a5160: 0x942e6ac4  lhu         $t6, 0x6AC4($at)
    ctx->pc = 0x1a5160u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1a5164:
    // 0x1a5164: 0x11c40082  beq         $t6, $a0, . + 4 + (0x82 << 2)
label_1a5168:
    if (ctx->pc == 0x1A5168u) {
        ctx->pc = 0x1A516Cu;
        goto label_1a516c;
    }
    ctx->pc = 0x1A5164u;
    {
        const bool branch_taken_0x1a5164 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a5164) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A516Cu;
label_1a516c:
    // 0x1a516c: 0x10000080  b           . + 4 + (0x80 << 2)
label_1a5170:
    if (ctx->pc == 0x1A5170u) {
        ctx->pc = 0x1A5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A516Cu;
        // 0x1a5170: 0xa220004b  sb          $zero, 0x4B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5174u;
        goto label_1a5174;
    }
    ctx->pc = 0x1A516Cu;
    {
        const bool branch_taken_0x1a516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A516Cu;
        // 0x1a5170: 0xa220004b  sb          $zero, 0x4B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a516c) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5174u;
label_1a5174:
    // 0x1a5174: 0x0  nop
    ctx->pc = 0x1a5174u;
    // NOP
label_1a5178:
    // 0x1a5178: 0x262f0048  addiu       $t7, $s1, 0x48
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_1a517c:
    // 0x1a517c: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a517cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5180:
    // 0x1a5180: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5180u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5184:
    // 0x1a5184: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5188:
    if (ctx->pc == 0x1A5188u) {
        ctx->pc = 0x1A5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5184u;
        // 0x1a5188: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A518Cu;
        goto label_1a518c;
    }
    ctx->pc = 0x1A5184u;
    {
        const bool branch_taken_0x1a5184 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5184u;
        // 0x1a5188: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5184) {
            ctx->pc = 0x1A5194u;
            goto label_1a5194;
        }
    }
    ctx->pc = 0x1A518Cu;
label_1a518c:
    // 0x1a518c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a518cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5190:
    // 0x1a5190: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5194:
    // 0x1a5194: 0x10000076  b           . + 4 + (0x76 << 2)
label_1a5198:
    if (ctx->pc == 0x1A5198u) {
        ctx->pc = 0x1A5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5194u;
        // 0x1a5198: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A519Cu;
        goto label_1a519c;
    }
    ctx->pc = 0x1A5194u;
    {
        const bool branch_taken_0x1a5194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5194u;
        // 0x1a5198: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5194) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A519Cu;
label_1a519c:
    // 0x1a519c: 0x0  nop
    ctx->pc = 0x1a519cu;
    // NOP
label_1a51a0:
    // 0x1a51a0: 0x262f0084  addiu       $t7, $s1, 0x84
    ctx->pc = 0x1a51a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_1a51a4:
    // 0x1a51a4: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a51a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a51a8:
    // 0x1a51a8: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a51ac:
    // 0x1a51ac: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a51b0:
    if (ctx->pc == 0x1A51B0u) {
        ctx->pc = 0x1A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51ACu;
        // 0x1a51b0: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51B4u;
        goto label_1a51b4;
    }
    ctx->pc = 0x1A51ACu;
    {
        const bool branch_taken_0x1a51ac = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51ACu;
        // 0x1a51b0: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51ac) {
            ctx->pc = 0x1A51BCu;
            goto label_1a51bc;
        }
    }
    ctx->pc = 0x1A51B4u;
label_1a51b4:
    // 0x1a51b4: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a51b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a51b8:
    // 0x1a51b8: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a51b8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a51bc:
    // 0x1a51bc: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1a51c0:
    if (ctx->pc == 0x1A51C0u) {
        ctx->pc = 0x1A51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51BCu;
        // 0x1a51c0: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51C4u;
        goto label_1a51c4;
    }
    ctx->pc = 0x1A51BCu;
    {
        const bool branch_taken_0x1a51bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51BCu;
        // 0x1a51c0: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51bc) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A51C4u;
label_1a51c4:
    // 0x1a51c4: 0x0  nop
    ctx->pc = 0x1a51c4u;
    // NOP
label_1a51c8:
    // 0x1a51c8: 0x262f002c  addiu       $t7, $s1, 0x2C
    ctx->pc = 0x1a51c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1a51cc:
    // 0x1a51cc: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a51ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a51d0:
    // 0x1a51d0: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a51d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a51d4:
    // 0x1a51d4: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a51d8:
    if (ctx->pc == 0x1A51D8u) {
        ctx->pc = 0x1A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51D4u;
        // 0x1a51d8: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51DCu;
        goto label_1a51dc;
    }
    ctx->pc = 0x1A51D4u;
    {
        const bool branch_taken_0x1a51d4 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51D4u;
        // 0x1a51d8: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51d4) {
            ctx->pc = 0x1A51E4u;
            goto label_1a51e4;
        }
    }
    ctx->pc = 0x1A51DCu;
label_1a51dc:
    // 0x1a51dc: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a51dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a51e0:
    // 0x1a51e0: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a51e0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a51e4:
    // 0x1a51e4: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a51e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a51e8:
    // 0x1a51e8: 0x10000061  b           . + 4 + (0x61 << 2)
label_1a51ec:
    if (ctx->pc == 0x1A51ECu) {
        ctx->pc = 0x1A51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51E8u;
        // 0x1a51ec: 0xa6250004  sh          $a1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51F0u;
        goto label_1a51f0;
    }
    ctx->pc = 0x1A51E8u;
    {
        const bool branch_taken_0x1a51e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51E8u;
        // 0x1a51ec: 0xa6250004  sh          $a1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51e8) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A51F0u;
label_1a51f0:
    // 0x1a51f0: 0x262f007c  addiu       $t7, $s1, 0x7C
    ctx->pc = 0x1a51f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_1a51f4:
    // 0x1a51f4: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a51f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a51f8:
    // 0x1a51f8: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a51f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a51fc:
    // 0x1a51fc: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5200:
    if (ctx->pc == 0x1A5200u) {
        ctx->pc = 0x1A5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51FCu;
        // 0x1a5200: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5204u;
        goto label_1a5204;
    }
    ctx->pc = 0x1A51FCu;
    {
        const bool branch_taken_0x1a51fc = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51FCu;
        // 0x1a5200: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51fc) {
            ctx->pc = 0x1A520Cu;
            goto label_1a520c;
        }
    }
    ctx->pc = 0x1A5204u;
label_1a5204:
    // 0x1a5204: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5204u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5208:
    // 0x1a5208: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a520c:
    // 0x1a520c: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a520cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5210:
    // 0x1a5210: 0x10000057  b           . + 4 + (0x57 << 2)
label_1a5214:
    if (ctx->pc == 0x1A5214u) {
        ctx->pc = 0x1A5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5210u;
        // 0x1a5214: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5218u;
        goto label_1a5218;
    }
    ctx->pc = 0x1A5210u;
    {
        const bool branch_taken_0x1a5210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5210u;
        // 0x1a5214: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5210) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5218u;
label_1a5218:
    // 0x1a5218: 0x262f01ac  addiu       $t7, $s1, 0x1AC
    ctx->pc = 0x1a5218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 428));
label_1a521c:
    // 0x1a521c: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a521cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5220:
    // 0x1a5220: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5220u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5224:
    // 0x1a5224: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5228:
    if (ctx->pc == 0x1A5228u) {
        ctx->pc = 0x1A5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5224u;
        // 0x1a5228: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A522Cu;
        goto label_1a522c;
    }
    ctx->pc = 0x1A5224u;
    {
        const bool branch_taken_0x1a5224 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5224u;
        // 0x1a5228: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5224) {
            ctx->pc = 0x1A5234u;
            goto label_1a5234;
        }
    }
    ctx->pc = 0x1A522Cu;
label_1a522c:
    // 0x1a522c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5230:
    // 0x1a5230: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5230u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5234:
    // 0x1a5234: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1a5238:
    if (ctx->pc == 0x1A5238u) {
        ctx->pc = 0x1A5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5234u;
        // 0x1a5238: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A523Cu;
        goto label_1a523c;
    }
    ctx->pc = 0x1A5234u;
    {
        const bool branch_taken_0x1a5234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5234u;
        // 0x1a5238: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5234) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A523Cu;
label_1a523c:
    // 0x1a523c: 0x0  nop
    ctx->pc = 0x1a523cu;
    // NOP
label_1a5240:
    // 0x1a5240: 0x262f0050  addiu       $t7, $s1, 0x50
    ctx->pc = 0x1a5240u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1a5244:
    // 0x1a5244: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a5244u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5248:
    // 0x1a5248: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5248u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a524c:
    // 0x1a524c: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5250:
    if (ctx->pc == 0x1A5250u) {
        ctx->pc = 0x1A5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A524Cu;
        // 0x1a5250: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5254u;
        goto label_1a5254;
    }
    ctx->pc = 0x1A524Cu;
    {
        const bool branch_taken_0x1a524c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A524Cu;
        // 0x1a5250: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a524c) {
            ctx->pc = 0x1A525Cu;
            goto label_1a525c;
        }
    }
    ctx->pc = 0x1A5254u;
label_1a5254:
    // 0x1a5254: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5254u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5258:
    // 0x1a5258: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5258u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a525c:
    // 0x1a525c: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a525cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5260:
    // 0x1a5260: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a5260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1a5264:
    // 0x1a5264: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a5264u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a5268:
    // 0x1a5268: 0x942e6ac4  lhu         $t6, 0x6AC4($at)
    ctx->pc = 0x1a5268u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1a526c:
    // 0x1a526c: 0x11c40040  beq         $t6, $a0, . + 4 + (0x40 << 2)
label_1a5270:
    if (ctx->pc == 0x1A5270u) {
        ctx->pc = 0x1A5274u;
        goto label_1a5274;
    }
    ctx->pc = 0x1A526Cu;
    {
        const bool branch_taken_0x1a526c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a526c) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5274u;
label_1a5274:
    // 0x1a5274: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a5278:
    if (ctx->pc == 0x1A5278u) {
        ctx->pc = 0x1A5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5274u;
        // 0x1a5278: 0xa220004b  sb          $zero, 0x4B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A527Cu;
        goto label_1a527c;
    }
    ctx->pc = 0x1A5274u;
    {
        const bool branch_taken_0x1a5274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5274u;
        // 0x1a5278: 0xa220004b  sb          $zero, 0x4B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5274) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A527Cu;
label_1a527c:
    // 0x1a527c: 0x0  nop
    ctx->pc = 0x1a527cu;
    // NOP
label_1a5280:
    // 0x1a5280: 0x262f0098  addiu       $t7, $s1, 0x98
    ctx->pc = 0x1a5280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_1a5284:
    // 0x1a5284: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a5284u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5288:
    // 0x1a5288: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5288u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a528c:
    // 0x1a528c: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5290:
    if (ctx->pc == 0x1A5290u) {
        ctx->pc = 0x1A5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A528Cu;
        // 0x1a5290: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5294u;
        goto label_1a5294;
    }
    ctx->pc = 0x1A528Cu;
    {
        const bool branch_taken_0x1a528c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A528Cu;
        // 0x1a5290: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a528c) {
            ctx->pc = 0x1A529Cu;
            goto label_1a529c;
        }
    }
    ctx->pc = 0x1A5294u;
label_1a5294:
    // 0x1a5294: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5294u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5298:
    // 0x1a5298: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5298u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a529c:
    // 0x1a529c: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a529cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a52a0:
    // 0x1a52a0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a52a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1a52a4:
    // 0x1a52a4: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a52a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a52a8:
    // 0x1a52a8: 0x942e6ac4  lhu         $t6, 0x6AC4($at)
    ctx->pc = 0x1a52a8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1a52ac:
    // 0x1a52ac: 0x11c40030  beq         $t6, $a0, . + 4 + (0x30 << 2)
label_1a52b0:
    if (ctx->pc == 0x1A52B0u) {
        ctx->pc = 0x1A52B4u;
        goto label_1a52b4;
    }
    ctx->pc = 0x1A52ACu;
    {
        const bool branch_taken_0x1a52ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a52ac) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A52B4u;
label_1a52b4:
    // 0x1a52b4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1a52b8:
    if (ctx->pc == 0x1A52B8u) {
        ctx->pc = 0x1A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B4u;
        // 0x1a52b8: 0xa2200093  sb          $zero, 0x93($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 147), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52BCu;
        goto label_1a52bc;
    }
    ctx->pc = 0x1A52B4u;
    {
        const bool branch_taken_0x1a52b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B4u;
        // 0x1a52b8: 0xa2200093  sb          $zero, 0x93($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 147), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52b4) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A52BCu;
label_1a52bc:
    // 0x1a52bc: 0x0  nop
    ctx->pc = 0x1a52bcu;
    // NOP
label_1a52c0:
    // 0x1a52c0: 0x262f005c  addiu       $t7, $s1, 0x5C
    ctx->pc = 0x1a52c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_1a52c4:
    // 0x1a52c4: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a52c8:
    // 0x1a52c8: 0xa6250004  sh          $a1, 0x4($s1)
    ctx->pc = 0x1a52c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
label_1a52cc:
    // 0x1a52cc: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a52ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a52d0:
    // 0x1a52d0: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a52d4:
    if (ctx->pc == 0x1A52D4u) {
        ctx->pc = 0x1A52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52D0u;
        // 0x1a52d4: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52D8u;
        goto label_1a52d8;
    }
    ctx->pc = 0x1A52D0u;
    {
        const bool branch_taken_0x1a52d0 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52D0u;
        // 0x1a52d4: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52d0) {
            ctx->pc = 0x1A52E0u;
            goto label_1a52e0;
        }
    }
    ctx->pc = 0x1A52D8u;
label_1a52d8:
    // 0x1a52d8: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a52dc:
    // 0x1a52dc: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a52dcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a52e0:
    // 0x1a52e0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a52e4:
    if (ctx->pc == 0x1A52E4u) {
        ctx->pc = 0x1A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E0u;
        // 0x1a52e4: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52E8u;
        goto label_1a52e8;
    }
    ctx->pc = 0x1A52E0u;
    {
        const bool branch_taken_0x1a52e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E0u;
        // 0x1a52e4: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52e0) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A52E8u;
label_1a52e8:
    // 0x1a52e8: 0x262f0070  addiu       $t7, $s1, 0x70
    ctx->pc = 0x1a52e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1a52ec:
    // 0x1a52ec: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a52f0:
    // 0x1a52f0: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x1a52f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a52f4:
    // 0x1a52f4: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a52f8:
    // 0x1a52f8: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a52fc:
    if (ctx->pc == 0x1A52FCu) {
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5300u;
        goto label_1a5300;
    }
    ctx->pc = 0x1A52F8u;
    {
        const bool branch_taken_0x1a52f8 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52f8) {
            ctx->pc = 0x1A5308u;
            goto label_1a5308;
        }
    }
    ctx->pc = 0x1A5300u;
label_1a5300:
    // 0x1a5300: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5304:
    // 0x1a5304: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5304u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5308:
    // 0x1a5308: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a530c:
    if (ctx->pc == 0x1A530Cu) {
        ctx->pc = 0x1A530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5308u;
        // 0x1a530c: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5310u;
        goto label_1a5310;
    }
    ctx->pc = 0x1A5308u;
    {
        const bool branch_taken_0x1a5308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5308u;
        // 0x1a530c: 0xa62e0006  sh          $t6, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5308) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5310u;
label_1a5310:
    // 0x1a5310: 0x262f00bc  addiu       $t7, $s1, 0xBC
    ctx->pc = 0x1a5310u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
label_1a5314:
    // 0x1a5314: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a5314u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5318:
    // 0x1a5318: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a5318u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a531c:
    // 0x1a531c: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5320:
    // 0x1a5320: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5324:
    if (ctx->pc == 0x1A5324u) {
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5328u;
        goto label_1a5328;
    }
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A5330u;
            goto label_1a5330;
        }
    }
    ctx->pc = 0x1A5328u;
label_1a5328:
    // 0x1a5328: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a532c:
    // 0x1a532c: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a532cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5330:
    // 0x1a5330: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a5330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5334:
    // 0x1a5334: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x1a5334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_1a5338:
    // 0x1a5338: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x1a5338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_1a533c:
    // 0x1a533c: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1a533cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_1a5340:
    // 0x1a5340: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a5344:
    if (ctx->pc == 0x1A5344u) {
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0xae3200cc  sw          $s2, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5348u;
        goto label_1a5348;
    }
    ctx->pc = 0x1A5340u;
    {
        const bool branch_taken_0x1a5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0xae3200cc  sw          $s2, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5340) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A5348u;
label_1a5348:
    // 0x1a5348: 0x262f0020  addiu       $t7, $s1, 0x20
    ctx->pc = 0x1a5348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1a534c:
    // 0x1a534c: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5350:
    // 0x1a5350: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1a5354:
    // 0x1a5354: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1a5358:
    if (ctx->pc == 0x1A5358u) {
        ctx->pc = 0x1A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5354u;
        // 0x1a5358: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A535Cu;
        goto label_1a535c;
    }
    ctx->pc = 0x1A5354u;
    {
        const bool branch_taken_0x1a5354 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5354u;
        // 0x1a5358: 0xf7083  sra         $t6, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5354) {
            ctx->pc = 0x1A5364u;
            goto label_1a5364;
        }
    }
    ctx->pc = 0x1A535Cu;
label_1a535c:
    // 0x1a535c: 0x25ee0003  addiu       $t6, $t7, 0x3
    ctx->pc = 0x1a535cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1a5360:
    // 0x1a5360: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1a5360u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1a5364:
    // 0x1a5364: 0xa62e0006  sh          $t6, 0x6($s1)
    ctx->pc = 0x1a5364u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 14));
label_1a5368:
    // 0x1a5368: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x1a5368u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a536c:
    // 0x1a536c: 0x0  nop
    ctx->pc = 0x1a536cu;
    // NOP
label_1a5370:
    // 0x1a5370: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1a5370u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1a5374:
    // 0x1a5374: 0x2dae0010  sltiu       $t6, $t5, 0x10
    ctx->pc = 0x1a5374u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a5378:
    // 0x1a5378: 0x15c0fef5  bnez        $t6, . + 4 + (-0x10B << 2)
label_1a537c:
    if (ctx->pc == 0x1A537Cu) {
        ctx->pc = 0x1A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5378u;
        // 0x1a537c: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5380u;
        goto label_1a5380;
    }
    ctx->pc = 0x1A5378u;
    {
        const bool branch_taken_0x1a5378 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5378u;
        // 0x1a537c: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5378) {
            ctx->pc = 0x1A4F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4f50;
        }
    }
    ctx->pc = 0x1A5380u;
label_1a5380:
    // 0x1a5380: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5384:
    // 0x1a5384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a5384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5388:
    // 0x1a5388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a538c:
    // 0x1a538c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a538cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5390:
    // 0x1a5390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5394:
    // 0x1a5394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5398:
    // 0x1a5398: 0x3e00008  jr          $ra
label_1a539c:
    if (ctx->pc == 0x1A539Cu) {
        ctx->pc = 0x1A539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5398u;
        // 0x1a539c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53A0u;
        goto label_fallthrough_0x1a5398;
    }
    ctx->pc = 0x1A5398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5398u;
        // 0x1a539c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5398:
    ctx->pc = 0x1A53A0u;
}
