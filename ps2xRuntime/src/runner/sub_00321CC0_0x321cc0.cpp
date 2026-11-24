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

// Function: sub_00321CC0
// Address: 0x321cc0 - 0x3225c8
void sub_00321CC0_0x321cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321CC0_0x321cc0");
#endif

    switch (ctx->pc) {
        case 0x321cc0u: goto label_321cc0;
        case 0x321cc4u: goto label_321cc4;
        case 0x321cc8u: goto label_321cc8;
        case 0x321cccu: goto label_321ccc;
        case 0x321cd0u: goto label_321cd0;
        case 0x321cd4u: goto label_321cd4;
        case 0x321cd8u: goto label_321cd8;
        case 0x321cdcu: goto label_321cdc;
        case 0x321ce0u: goto label_321ce0;
        case 0x321ce4u: goto label_321ce4;
        case 0x321ce8u: goto label_321ce8;
        case 0x321cecu: goto label_321cec;
        case 0x321cf0u: goto label_321cf0;
        case 0x321cf4u: goto label_321cf4;
        case 0x321cf8u: goto label_321cf8;
        case 0x321cfcu: goto label_321cfc;
        case 0x321d00u: goto label_321d00;
        case 0x321d04u: goto label_321d04;
        case 0x321d08u: goto label_321d08;
        case 0x321d0cu: goto label_321d0c;
        case 0x321d10u: goto label_321d10;
        case 0x321d14u: goto label_321d14;
        case 0x321d18u: goto label_321d18;
        case 0x321d1cu: goto label_321d1c;
        case 0x321d20u: goto label_321d20;
        case 0x321d24u: goto label_321d24;
        case 0x321d28u: goto label_321d28;
        case 0x321d2cu: goto label_321d2c;
        case 0x321d30u: goto label_321d30;
        case 0x321d34u: goto label_321d34;
        case 0x321d38u: goto label_321d38;
        case 0x321d3cu: goto label_321d3c;
        case 0x321d40u: goto label_321d40;
        case 0x321d44u: goto label_321d44;
        case 0x321d48u: goto label_321d48;
        case 0x321d4cu: goto label_321d4c;
        case 0x321d50u: goto label_321d50;
        case 0x321d54u: goto label_321d54;
        case 0x321d58u: goto label_321d58;
        case 0x321d5cu: goto label_321d5c;
        case 0x321d60u: goto label_321d60;
        case 0x321d64u: goto label_321d64;
        case 0x321d68u: goto label_321d68;
        case 0x321d6cu: goto label_321d6c;
        case 0x321d70u: goto label_321d70;
        case 0x321d74u: goto label_321d74;
        case 0x321d78u: goto label_321d78;
        case 0x321d7cu: goto label_321d7c;
        case 0x321d80u: goto label_321d80;
        case 0x321d84u: goto label_321d84;
        case 0x321d88u: goto label_321d88;
        case 0x321d8cu: goto label_321d8c;
        case 0x321d90u: goto label_321d90;
        case 0x321d94u: goto label_321d94;
        case 0x321d98u: goto label_321d98;
        case 0x321d9cu: goto label_321d9c;
        case 0x321da0u: goto label_321da0;
        case 0x321da4u: goto label_321da4;
        case 0x321da8u: goto label_321da8;
        case 0x321dacu: goto label_321dac;
        case 0x321db0u: goto label_321db0;
        case 0x321db4u: goto label_321db4;
        case 0x321db8u: goto label_321db8;
        case 0x321dbcu: goto label_321dbc;
        case 0x321dc0u: goto label_321dc0;
        case 0x321dc4u: goto label_321dc4;
        case 0x321dc8u: goto label_321dc8;
        case 0x321dccu: goto label_321dcc;
        case 0x321dd0u: goto label_321dd0;
        case 0x321dd4u: goto label_321dd4;
        case 0x321dd8u: goto label_321dd8;
        case 0x321ddcu: goto label_321ddc;
        case 0x321de0u: goto label_321de0;
        case 0x321de4u: goto label_321de4;
        case 0x321de8u: goto label_321de8;
        case 0x321decu: goto label_321dec;
        case 0x321df0u: goto label_321df0;
        case 0x321df4u: goto label_321df4;
        case 0x321df8u: goto label_321df8;
        case 0x321dfcu: goto label_321dfc;
        case 0x321e00u: goto label_321e00;
        case 0x321e04u: goto label_321e04;
        case 0x321e08u: goto label_321e08;
        case 0x321e0cu: goto label_321e0c;
        case 0x321e10u: goto label_321e10;
        case 0x321e14u: goto label_321e14;
        case 0x321e18u: goto label_321e18;
        case 0x321e1cu: goto label_321e1c;
        case 0x321e20u: goto label_321e20;
        case 0x321e24u: goto label_321e24;
        case 0x321e28u: goto label_321e28;
        case 0x321e2cu: goto label_321e2c;
        case 0x321e30u: goto label_321e30;
        case 0x321e34u: goto label_321e34;
        case 0x321e38u: goto label_321e38;
        case 0x321e3cu: goto label_321e3c;
        case 0x321e40u: goto label_321e40;
        case 0x321e44u: goto label_321e44;
        case 0x321e48u: goto label_321e48;
        case 0x321e4cu: goto label_321e4c;
        case 0x321e50u: goto label_321e50;
        case 0x321e54u: goto label_321e54;
        case 0x321e58u: goto label_321e58;
        case 0x321e5cu: goto label_321e5c;
        case 0x321e60u: goto label_321e60;
        case 0x321e64u: goto label_321e64;
        case 0x321e68u: goto label_321e68;
        case 0x321e6cu: goto label_321e6c;
        case 0x321e70u: goto label_321e70;
        case 0x321e74u: goto label_321e74;
        case 0x321e78u: goto label_321e78;
        case 0x321e7cu: goto label_321e7c;
        case 0x321e80u: goto label_321e80;
        case 0x321e84u: goto label_321e84;
        case 0x321e88u: goto label_321e88;
        case 0x321e8cu: goto label_321e8c;
        case 0x321e90u: goto label_321e90;
        case 0x321e94u: goto label_321e94;
        case 0x321e98u: goto label_321e98;
        case 0x321e9cu: goto label_321e9c;
        case 0x321ea0u: goto label_321ea0;
        case 0x321ea4u: goto label_321ea4;
        case 0x321ea8u: goto label_321ea8;
        case 0x321eacu: goto label_321eac;
        case 0x321eb0u: goto label_321eb0;
        case 0x321eb4u: goto label_321eb4;
        case 0x321eb8u: goto label_321eb8;
        case 0x321ebcu: goto label_321ebc;
        case 0x321ec0u: goto label_321ec0;
        case 0x321ec4u: goto label_321ec4;
        case 0x321ec8u: goto label_321ec8;
        case 0x321eccu: goto label_321ecc;
        case 0x321ed0u: goto label_321ed0;
        case 0x321ed4u: goto label_321ed4;
        case 0x321ed8u: goto label_321ed8;
        case 0x321edcu: goto label_321edc;
        case 0x321ee0u: goto label_321ee0;
        case 0x321ee4u: goto label_321ee4;
        case 0x321ee8u: goto label_321ee8;
        case 0x321eecu: goto label_321eec;
        case 0x321ef0u: goto label_321ef0;
        case 0x321ef4u: goto label_321ef4;
        case 0x321ef8u: goto label_321ef8;
        case 0x321efcu: goto label_321efc;
        case 0x321f00u: goto label_321f00;
        case 0x321f04u: goto label_321f04;
        case 0x321f08u: goto label_321f08;
        case 0x321f0cu: goto label_321f0c;
        case 0x321f10u: goto label_321f10;
        case 0x321f14u: goto label_321f14;
        case 0x321f18u: goto label_321f18;
        case 0x321f1cu: goto label_321f1c;
        case 0x321f20u: goto label_321f20;
        case 0x321f24u: goto label_321f24;
        case 0x321f28u: goto label_321f28;
        case 0x321f2cu: goto label_321f2c;
        case 0x321f30u: goto label_321f30;
        case 0x321f34u: goto label_321f34;
        case 0x321f38u: goto label_321f38;
        case 0x321f3cu: goto label_321f3c;
        case 0x321f40u: goto label_321f40;
        case 0x321f44u: goto label_321f44;
        case 0x321f48u: goto label_321f48;
        case 0x321f4cu: goto label_321f4c;
        case 0x321f50u: goto label_321f50;
        case 0x321f54u: goto label_321f54;
        case 0x321f58u: goto label_321f58;
        case 0x321f5cu: goto label_321f5c;
        case 0x321f60u: goto label_321f60;
        case 0x321f64u: goto label_321f64;
        case 0x321f68u: goto label_321f68;
        case 0x321f6cu: goto label_321f6c;
        case 0x321f70u: goto label_321f70;
        case 0x321f74u: goto label_321f74;
        case 0x321f78u: goto label_321f78;
        case 0x321f7cu: goto label_321f7c;
        case 0x321f80u: goto label_321f80;
        case 0x321f84u: goto label_321f84;
        case 0x321f88u: goto label_321f88;
        case 0x321f8cu: goto label_321f8c;
        case 0x321f90u: goto label_321f90;
        case 0x321f94u: goto label_321f94;
        case 0x321f98u: goto label_321f98;
        case 0x321f9cu: goto label_321f9c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321fa4u: goto label_321fa4;
        case 0x321fa8u: goto label_321fa8;
        case 0x321facu: goto label_321fac;
        case 0x321fb0u: goto label_321fb0;
        case 0x321fb4u: goto label_321fb4;
        case 0x321fb8u: goto label_321fb8;
        case 0x321fbcu: goto label_321fbc;
        case 0x321fc0u: goto label_321fc0;
        case 0x321fc4u: goto label_321fc4;
        case 0x321fc8u: goto label_321fc8;
        case 0x321fccu: goto label_321fcc;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fd4u: goto label_321fd4;
        case 0x321fd8u: goto label_321fd8;
        case 0x321fdcu: goto label_321fdc;
        case 0x321fe0u: goto label_321fe0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321fe8u: goto label_321fe8;
        case 0x321fecu: goto label_321fec;
        case 0x321ff0u: goto label_321ff0;
        case 0x321ff4u: goto label_321ff4;
        case 0x321ff8u: goto label_321ff8;
        case 0x321ffcu: goto label_321ffc;
        case 0x322000u: goto label_322000;
        case 0x322004u: goto label_322004;
        case 0x322008u: goto label_322008;
        case 0x32200cu: goto label_32200c;
        case 0x322010u: goto label_322010;
        case 0x322014u: goto label_322014;
        case 0x322018u: goto label_322018;
        case 0x32201cu: goto label_32201c;
        case 0x322020u: goto label_322020;
        case 0x322024u: goto label_322024;
        case 0x322028u: goto label_322028;
        case 0x32202cu: goto label_32202c;
        case 0x322030u: goto label_322030;
        case 0x322034u: goto label_322034;
        case 0x322038u: goto label_322038;
        case 0x32203cu: goto label_32203c;
        case 0x322040u: goto label_322040;
        case 0x322044u: goto label_322044;
        case 0x322048u: goto label_322048;
        case 0x32204cu: goto label_32204c;
        case 0x322050u: goto label_322050;
        case 0x322054u: goto label_322054;
        case 0x322058u: goto label_322058;
        case 0x32205cu: goto label_32205c;
        case 0x322060u: goto label_322060;
        case 0x322064u: goto label_322064;
        case 0x322068u: goto label_322068;
        case 0x32206cu: goto label_32206c;
        case 0x322070u: goto label_322070;
        case 0x322074u: goto label_322074;
        case 0x322078u: goto label_322078;
        case 0x32207cu: goto label_32207c;
        case 0x322080u: goto label_322080;
        case 0x322084u: goto label_322084;
        case 0x322088u: goto label_322088;
        case 0x32208cu: goto label_32208c;
        case 0x322090u: goto label_322090;
        case 0x322094u: goto label_322094;
        case 0x322098u: goto label_322098;
        case 0x32209cu: goto label_32209c;
        case 0x3220a0u: goto label_3220a0;
        case 0x3220a4u: goto label_3220a4;
        case 0x3220a8u: goto label_3220a8;
        case 0x3220acu: goto label_3220ac;
        case 0x3220b0u: goto label_3220b0;
        case 0x3220b4u: goto label_3220b4;
        case 0x3220b8u: goto label_3220b8;
        case 0x3220bcu: goto label_3220bc;
        case 0x3220c0u: goto label_3220c0;
        case 0x3220c4u: goto label_3220c4;
        case 0x3220c8u: goto label_3220c8;
        case 0x3220ccu: goto label_3220cc;
        case 0x3220d0u: goto label_3220d0;
        case 0x3220d4u: goto label_3220d4;
        case 0x3220d8u: goto label_3220d8;
        case 0x3220dcu: goto label_3220dc;
        case 0x3220e0u: goto label_3220e0;
        case 0x3220e4u: goto label_3220e4;
        case 0x3220e8u: goto label_3220e8;
        case 0x3220ecu: goto label_3220ec;
        case 0x3220f0u: goto label_3220f0;
        case 0x3220f4u: goto label_3220f4;
        case 0x3220f8u: goto label_3220f8;
        case 0x3220fcu: goto label_3220fc;
        case 0x322100u: goto label_322100;
        case 0x322104u: goto label_322104;
        case 0x322108u: goto label_322108;
        case 0x32210cu: goto label_32210c;
        case 0x322110u: goto label_322110;
        case 0x322114u: goto label_322114;
        case 0x322118u: goto label_322118;
        case 0x32211cu: goto label_32211c;
        case 0x322120u: goto label_322120;
        case 0x322124u: goto label_322124;
        case 0x322128u: goto label_322128;
        case 0x32212cu: goto label_32212c;
        case 0x322130u: goto label_322130;
        case 0x322134u: goto label_322134;
        case 0x322138u: goto label_322138;
        case 0x32213cu: goto label_32213c;
        case 0x322140u: goto label_322140;
        case 0x322144u: goto label_322144;
        case 0x322148u: goto label_322148;
        case 0x32214cu: goto label_32214c;
        case 0x322150u: goto label_322150;
        case 0x322154u: goto label_322154;
        case 0x322158u: goto label_322158;
        case 0x32215cu: goto label_32215c;
        case 0x322160u: goto label_322160;
        case 0x322164u: goto label_322164;
        case 0x322168u: goto label_322168;
        case 0x32216cu: goto label_32216c;
        case 0x322170u: goto label_322170;
        case 0x322174u: goto label_322174;
        case 0x322178u: goto label_322178;
        case 0x32217cu: goto label_32217c;
        case 0x322180u: goto label_322180;
        case 0x322184u: goto label_322184;
        case 0x322188u: goto label_322188;
        case 0x32218cu: goto label_32218c;
        case 0x322190u: goto label_322190;
        case 0x322194u: goto label_322194;
        case 0x322198u: goto label_322198;
        case 0x32219cu: goto label_32219c;
        case 0x3221a0u: goto label_3221a0;
        case 0x3221a4u: goto label_3221a4;
        case 0x3221a8u: goto label_3221a8;
        case 0x3221acu: goto label_3221ac;
        case 0x3221b0u: goto label_3221b0;
        case 0x3221b4u: goto label_3221b4;
        case 0x3221b8u: goto label_3221b8;
        case 0x3221bcu: goto label_3221bc;
        case 0x3221c0u: goto label_3221c0;
        case 0x3221c4u: goto label_3221c4;
        case 0x3221c8u: goto label_3221c8;
        case 0x3221ccu: goto label_3221cc;
        case 0x3221d0u: goto label_3221d0;
        case 0x3221d4u: goto label_3221d4;
        case 0x3221d8u: goto label_3221d8;
        case 0x3221dcu: goto label_3221dc;
        case 0x3221e0u: goto label_3221e0;
        case 0x3221e4u: goto label_3221e4;
        case 0x3221e8u: goto label_3221e8;
        case 0x3221ecu: goto label_3221ec;
        case 0x3221f0u: goto label_3221f0;
        case 0x3221f4u: goto label_3221f4;
        case 0x3221f8u: goto label_3221f8;
        case 0x3221fcu: goto label_3221fc;
        case 0x322200u: goto label_322200;
        case 0x322204u: goto label_322204;
        case 0x322208u: goto label_322208;
        case 0x32220cu: goto label_32220c;
        case 0x322210u: goto label_322210;
        case 0x322214u: goto label_322214;
        case 0x322218u: goto label_322218;
        case 0x32221cu: goto label_32221c;
        case 0x322220u: goto label_322220;
        case 0x322224u: goto label_322224;
        case 0x322228u: goto label_322228;
        case 0x32222cu: goto label_32222c;
        case 0x322230u: goto label_322230;
        case 0x322234u: goto label_322234;
        case 0x322238u: goto label_322238;
        case 0x32223cu: goto label_32223c;
        case 0x322240u: goto label_322240;
        case 0x322244u: goto label_322244;
        case 0x322248u: goto label_322248;
        case 0x32224cu: goto label_32224c;
        case 0x322250u: goto label_322250;
        case 0x322254u: goto label_322254;
        case 0x322258u: goto label_322258;
        case 0x32225cu: goto label_32225c;
        case 0x322260u: goto label_322260;
        case 0x322264u: goto label_322264;
        case 0x322268u: goto label_322268;
        case 0x32226cu: goto label_32226c;
        case 0x322270u: goto label_322270;
        case 0x322274u: goto label_322274;
        case 0x322278u: goto label_322278;
        case 0x32227cu: goto label_32227c;
        case 0x322280u: goto label_322280;
        case 0x322284u: goto label_322284;
        case 0x322288u: goto label_322288;
        case 0x32228cu: goto label_32228c;
        case 0x322290u: goto label_322290;
        case 0x322294u: goto label_322294;
        case 0x322298u: goto label_322298;
        case 0x32229cu: goto label_32229c;
        case 0x3222a0u: goto label_3222a0;
        case 0x3222a4u: goto label_3222a4;
        case 0x3222a8u: goto label_3222a8;
        case 0x3222acu: goto label_3222ac;
        case 0x3222b0u: goto label_3222b0;
        case 0x3222b4u: goto label_3222b4;
        case 0x3222b8u: goto label_3222b8;
        case 0x3222bcu: goto label_3222bc;
        case 0x3222c0u: goto label_3222c0;
        case 0x3222c4u: goto label_3222c4;
        case 0x3222c8u: goto label_3222c8;
        case 0x3222ccu: goto label_3222cc;
        case 0x3222d0u: goto label_3222d0;
        case 0x3222d4u: goto label_3222d4;
        case 0x3222d8u: goto label_3222d8;
        case 0x3222dcu: goto label_3222dc;
        case 0x3222e0u: goto label_3222e0;
        case 0x3222e4u: goto label_3222e4;
        case 0x3222e8u: goto label_3222e8;
        case 0x3222ecu: goto label_3222ec;
        case 0x3222f0u: goto label_3222f0;
        case 0x3222f4u: goto label_3222f4;
        case 0x3222f8u: goto label_3222f8;
        case 0x3222fcu: goto label_3222fc;
        case 0x322300u: goto label_322300;
        case 0x322304u: goto label_322304;
        case 0x322308u: goto label_322308;
        case 0x32230cu: goto label_32230c;
        case 0x322310u: goto label_322310;
        case 0x322314u: goto label_322314;
        case 0x322318u: goto label_322318;
        case 0x32231cu: goto label_32231c;
        case 0x322320u: goto label_322320;
        case 0x322324u: goto label_322324;
        case 0x322328u: goto label_322328;
        case 0x32232cu: goto label_32232c;
        case 0x322330u: goto label_322330;
        case 0x322334u: goto label_322334;
        case 0x322338u: goto label_322338;
        case 0x32233cu: goto label_32233c;
        case 0x322340u: goto label_322340;
        case 0x322344u: goto label_322344;
        case 0x322348u: goto label_322348;
        case 0x32234cu: goto label_32234c;
        case 0x322350u: goto label_322350;
        case 0x322354u: goto label_322354;
        case 0x322358u: goto label_322358;
        case 0x32235cu: goto label_32235c;
        case 0x322360u: goto label_322360;
        case 0x322364u: goto label_322364;
        case 0x322368u: goto label_322368;
        case 0x32236cu: goto label_32236c;
        case 0x322370u: goto label_322370;
        case 0x322374u: goto label_322374;
        case 0x322378u: goto label_322378;
        case 0x32237cu: goto label_32237c;
        case 0x322380u: goto label_322380;
        case 0x322384u: goto label_322384;
        case 0x322388u: goto label_322388;
        case 0x32238cu: goto label_32238c;
        case 0x322390u: goto label_322390;
        case 0x322394u: goto label_322394;
        case 0x322398u: goto label_322398;
        case 0x32239cu: goto label_32239c;
        case 0x3223a0u: goto label_3223a0;
        case 0x3223a4u: goto label_3223a4;
        case 0x3223a8u: goto label_3223a8;
        case 0x3223acu: goto label_3223ac;
        case 0x3223b0u: goto label_3223b0;
        case 0x3223b4u: goto label_3223b4;
        case 0x3223b8u: goto label_3223b8;
        case 0x3223bcu: goto label_3223bc;
        case 0x3223c0u: goto label_3223c0;
        case 0x3223c4u: goto label_3223c4;
        case 0x3223c8u: goto label_3223c8;
        case 0x3223ccu: goto label_3223cc;
        case 0x3223d0u: goto label_3223d0;
        case 0x3223d4u: goto label_3223d4;
        case 0x3223d8u: goto label_3223d8;
        case 0x3223dcu: goto label_3223dc;
        case 0x3223e0u: goto label_3223e0;
        case 0x3223e4u: goto label_3223e4;
        case 0x3223e8u: goto label_3223e8;
        case 0x3223ecu: goto label_3223ec;
        case 0x3223f0u: goto label_3223f0;
        case 0x3223f4u: goto label_3223f4;
        case 0x3223f8u: goto label_3223f8;
        case 0x3223fcu: goto label_3223fc;
        case 0x322400u: goto label_322400;
        case 0x322404u: goto label_322404;
        case 0x322408u: goto label_322408;
        case 0x32240cu: goto label_32240c;
        case 0x322410u: goto label_322410;
        case 0x322414u: goto label_322414;
        case 0x322418u: goto label_322418;
        case 0x32241cu: goto label_32241c;
        case 0x322420u: goto label_322420;
        case 0x322424u: goto label_322424;
        case 0x322428u: goto label_322428;
        case 0x32242cu: goto label_32242c;
        case 0x322430u: goto label_322430;
        case 0x322434u: goto label_322434;
        case 0x322438u: goto label_322438;
        case 0x32243cu: goto label_32243c;
        case 0x322440u: goto label_322440;
        case 0x322444u: goto label_322444;
        case 0x322448u: goto label_322448;
        case 0x32244cu: goto label_32244c;
        case 0x322450u: goto label_322450;
        case 0x322454u: goto label_322454;
        case 0x322458u: goto label_322458;
        case 0x32245cu: goto label_32245c;
        case 0x322460u: goto label_322460;
        case 0x322464u: goto label_322464;
        case 0x322468u: goto label_322468;
        case 0x32246cu: goto label_32246c;
        case 0x322470u: goto label_322470;
        case 0x322474u: goto label_322474;
        case 0x322478u: goto label_322478;
        case 0x32247cu: goto label_32247c;
        case 0x322480u: goto label_322480;
        case 0x322484u: goto label_322484;
        case 0x322488u: goto label_322488;
        case 0x32248cu: goto label_32248c;
        case 0x322490u: goto label_322490;
        case 0x322494u: goto label_322494;
        case 0x322498u: goto label_322498;
        case 0x32249cu: goto label_32249c;
        case 0x3224a0u: goto label_3224a0;
        case 0x3224a4u: goto label_3224a4;
        case 0x3224a8u: goto label_3224a8;
        case 0x3224acu: goto label_3224ac;
        case 0x3224b0u: goto label_3224b0;
        case 0x3224b4u: goto label_3224b4;
        case 0x3224b8u: goto label_3224b8;
        case 0x3224bcu: goto label_3224bc;
        case 0x3224c0u: goto label_3224c0;
        case 0x3224c4u: goto label_3224c4;
        case 0x3224c8u: goto label_3224c8;
        case 0x3224ccu: goto label_3224cc;
        case 0x3224d0u: goto label_3224d0;
        case 0x3224d4u: goto label_3224d4;
        case 0x3224d8u: goto label_3224d8;
        case 0x3224dcu: goto label_3224dc;
        case 0x3224e0u: goto label_3224e0;
        case 0x3224e4u: goto label_3224e4;
        case 0x3224e8u: goto label_3224e8;
        case 0x3224ecu: goto label_3224ec;
        case 0x3224f0u: goto label_3224f0;
        case 0x3224f4u: goto label_3224f4;
        case 0x3224f8u: goto label_3224f8;
        case 0x3224fcu: goto label_3224fc;
        case 0x322500u: goto label_322500;
        case 0x322504u: goto label_322504;
        case 0x322508u: goto label_322508;
        case 0x32250cu: goto label_32250c;
        case 0x322510u: goto label_322510;
        case 0x322514u: goto label_322514;
        case 0x322518u: goto label_322518;
        case 0x32251cu: goto label_32251c;
        case 0x322520u: goto label_322520;
        case 0x322524u: goto label_322524;
        case 0x322528u: goto label_322528;
        case 0x32252cu: goto label_32252c;
        case 0x322530u: goto label_322530;
        case 0x322534u: goto label_322534;
        case 0x322538u: goto label_322538;
        case 0x32253cu: goto label_32253c;
        case 0x322540u: goto label_322540;
        case 0x322544u: goto label_322544;
        case 0x322548u: goto label_322548;
        case 0x32254cu: goto label_32254c;
        case 0x322550u: goto label_322550;
        case 0x322554u: goto label_322554;
        case 0x322558u: goto label_322558;
        case 0x32255cu: goto label_32255c;
        case 0x322560u: goto label_322560;
        case 0x322564u: goto label_322564;
        case 0x322568u: goto label_322568;
        case 0x32256cu: goto label_32256c;
        case 0x322570u: goto label_322570;
        case 0x322574u: goto label_322574;
        case 0x322578u: goto label_322578;
        case 0x32257cu: goto label_32257c;
        case 0x322580u: goto label_322580;
        case 0x322584u: goto label_322584;
        case 0x322588u: goto label_322588;
        case 0x32258cu: goto label_32258c;
        case 0x322590u: goto label_322590;
        case 0x322594u: goto label_322594;
        case 0x322598u: goto label_322598;
        case 0x32259cu: goto label_32259c;
        case 0x3225a0u: goto label_3225a0;
        case 0x3225a4u: goto label_3225a4;
        case 0x3225a8u: goto label_3225a8;
        case 0x3225acu: goto label_3225ac;
        case 0x3225b0u: goto label_3225b0;
        case 0x3225b4u: goto label_3225b4;
        case 0x3225b8u: goto label_3225b8;
        case 0x3225bcu: goto label_3225bc;
        case 0x3225c0u: goto label_3225c0;
        case 0x3225c4u: goto label_3225c4;
        default: break;
    }

    ctx->pc = 0x321cc0u;

label_321cc0:
    // 0x321cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x321cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_321cc4:
    // 0x321cc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x321cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_321cc8:
    // 0x321cc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x321cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_321ccc:
    // 0x321ccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x321cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_321cd0:
    // 0x321cd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321cd4:
    // 0x321cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x321cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_321cd8:
    // 0x321cd8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x321cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_321cdc:
    // 0x321cdc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x321cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_321ce0:
    // 0x321ce0: 0xc07cce0  jal         func_1F3380
label_321ce4:
    if (ctx->pc == 0x321CE4u) {
        ctx->pc = 0x321CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CE0u;
        // 0x321ce4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CE8u;
        goto label_321ce8;
    }
    ctx->pc = 0x321CE0u;
    SET_GPR_U32(ctx, 31, 0x321CE8u);
    ctx->pc = 0x321CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CE0u;
    // 0x321ce4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x321CE0u, 0x321CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CE8u;
label_321ce8:
    // 0x321ce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321cec:
    // 0x321cec: 0xc0c84a4  jal         func_321290
label_321cf0:
    if (ctx->pc == 0x321CF0u) {
        ctx->pc = 0x321CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CECu;
        // 0x321cf0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CF4u;
        goto label_321cf4;
    }
    ctx->pc = 0x321CECu;
    SET_GPR_U32(ctx, 31, 0x321CF4u);
    ctx->pc = 0x321CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CECu;
    // 0x321cf0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321290u, 0x321CECu, 0x321CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CF4u;
label_321cf4:
    // 0x321cf4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x321cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_321cf8:
    // 0x321cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321cfc:
    // 0x321cfc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x321cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_321d00:
    // 0x321d00: 0x10620191  beq         $v1, $v0, . + 4 + (0x191 << 2)
label_321d04:
    if (ctx->pc == 0x321D04u) {
        ctx->pc = 0x321D08u;
        goto label_321d08;
    }
    ctx->pc = 0x321D00u;
    {
        const bool branch_taken_0x321d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321d00) {
            ctx->pc = 0x322348u;
            goto label_322348;
        }
    }
    ctx->pc = 0x321D08u;
label_321d08:
    // 0x321d08: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x321d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_321d0c:
    // 0x321d0c: 0x1062017a  beq         $v1, $v0, . + 4 + (0x17A << 2)
label_321d10:
    if (ctx->pc == 0x321D10u) {
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D14u;
        goto label_321d14;
    }
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x3222F8u;
            goto label_3222f8;
        }
    }
    ctx->pc = 0x321D14u;
label_321d14:
    // 0x321d14: 0x10620146  beq         $v1, $v0, . + 4 + (0x146 << 2)
label_321d18:
    if (ctx->pc == 0x321D18u) {
        ctx->pc = 0x321D1Cu;
        goto label_321d1c;
    }
    ctx->pc = 0x321D14u;
    {
        const bool branch_taken_0x321d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321d14) {
            ctx->pc = 0x322230u;
            goto label_322230;
        }
    }
    ctx->pc = 0x321D1Cu;
label_321d1c:
    // 0x321d1c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x321d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_321d20:
    // 0x321d20: 0x1062011b  beq         $v1, $v0, . + 4 + (0x11B << 2)
label_321d24:
    if (ctx->pc == 0x321D24u) {
        ctx->pc = 0x321D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D20u;
        // 0x321d24: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D28u;
        goto label_321d28;
    }
    ctx->pc = 0x321D20u;
    {
        const bool branch_taken_0x321d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D20u;
        // 0x321d24: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d20) {
            ctx->pc = 0x322190u;
            goto label_322190;
        }
    }
    ctx->pc = 0x321D28u;
label_321d28:
    // 0x321d28: 0x10620103  beq         $v1, $v0, . + 4 + (0x103 << 2)
label_321d2c:
    if (ctx->pc == 0x321D2Cu) {
        ctx->pc = 0x321D30u;
        goto label_321d30;
    }
    ctx->pc = 0x321D28u;
    {
        const bool branch_taken_0x321d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321d28) {
            ctx->pc = 0x322138u;
            goto label_322138;
        }
    }
    ctx->pc = 0x321D30u;
label_321d30:
    // 0x321d30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x321d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_321d34:
    // 0x321d34: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
label_321d38:
    if (ctx->pc == 0x321D38u) {
        ctx->pc = 0x321D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D34u;
        // 0x321d38: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D3Cu;
        goto label_321d3c;
    }
    ctx->pc = 0x321D34u;
    {
        const bool branch_taken_0x321d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D34u;
        // 0x321d38: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d34) {
            ctx->pc = 0x3220A8u;
            goto label_3220a8;
        }
    }
    ctx->pc = 0x321D3Cu;
label_321d3c:
    // 0x321d3c: 0x106200c4  beq         $v1, $v0, . + 4 + (0xC4 << 2)
label_321d40:
    if (ctx->pc == 0x321D40u) {
        ctx->pc = 0x321D44u;
        goto label_321d44;
    }
    ctx->pc = 0x321D3Cu;
    {
        const bool branch_taken_0x321d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321d3c) {
            ctx->pc = 0x322050u;
            goto label_322050;
        }
    }
    ctx->pc = 0x321D44u;
label_321d44:
    // 0x321d44: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x321d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_321d48:
    // 0x321d48: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
label_321d4c:
    if (ctx->pc == 0x321D4Cu) {
        ctx->pc = 0x321D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D48u;
        // 0x321d4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D50u;
        goto label_321d50;
    }
    ctx->pc = 0x321D48u;
    {
        const bool branch_taken_0x321d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D48u;
        // 0x321d4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d48) {
            ctx->pc = 0x321FC8u;
            goto label_321fc8;
        }
    }
    ctx->pc = 0x321D50u;
label_321d50:
    // 0x321d50: 0x10620215  beq         $v1, $v0, . + 4 + (0x215 << 2)
label_321d54:
    if (ctx->pc == 0x321D54u) {
        ctx->pc = 0x321D58u;
        goto label_321d58;
    }
    ctx->pc = 0x321D50u;
    {
        const bool branch_taken_0x321d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321d50) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x321D58u;
label_321d58:
    // 0x321d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321d5c:
    // 0x321d5c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_321d60:
    if (ctx->pc == 0x321D60u) {
        ctx->pc = 0x321D64u;
        goto label_321d64;
    }
    ctx->pc = 0x321D5Cu;
    {
        const bool branch_taken_0x321d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321d5c) {
            ctx->pc = 0x321DD0u;
            goto label_321dd0;
        }
    }
    ctx->pc = 0x321D64u;
label_321d64:
    // 0x321d64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_321d68:
    if (ctx->pc == 0x321D68u) {
        ctx->pc = 0x321D6Cu;
        goto label_321d6c;
    }
    ctx->pc = 0x321D64u;
    {
        const bool branch_taken_0x321d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d64) {
            ctx->pc = 0x321D78u;
            goto label_321d78;
        }
    }
    ctx->pc = 0x321D6Cu;
label_321d6c:
    // 0x321d6c: 0x1000020e  b           . + 4 + (0x20E << 2)
label_321d70:
    if (ctx->pc == 0x321D70u) {
        ctx->pc = 0x321D74u;
        goto label_321d74;
    }
    ctx->pc = 0x321D6Cu;
    {
        const bool branch_taken_0x321d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d6c) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x321D74u;
label_321d74:
    // 0x321d74: 0x0  nop
    ctx->pc = 0x321d74u;
    // NOP
label_321d78:
    // 0x321d78: 0xc0c85d4  jal         func_321750
label_321d7c:
    if (ctx->pc == 0x321D7Cu) {
        ctx->pc = 0x321D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D78u;
        // 0x321d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D80u;
        goto label_321d80;
    }
    ctx->pc = 0x321D78u;
    SET_GPR_U32(ctx, 31, 0x321D80u);
    ctx->pc = 0x321D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D78u;
    // 0x321d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321750u, 0x321D78u, 0x321D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D80u;
label_321d80:
    // 0x321d80: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x321d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_321d84:
    // 0x321d84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_321d88:
    // 0x321d88: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x321d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_321d8c:
    // 0x321d8c: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x321d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_321d90:
    // 0x321d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321d94:
    // 0x321d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321d98:
    // 0x321d98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x321d98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321d9c:
    // 0x321d9c: 0xc09565c  jal         func_255970
label_321da0:
    if (ctx->pc == 0x321DA0u) {
        ctx->pc = 0x321DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D9Cu;
        // 0x321da0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DA4u;
        goto label_321da4;
    }
    ctx->pc = 0x321D9Cu;
    SET_GPR_U32(ctx, 31, 0x321DA4u);
    ctx->pc = 0x321DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D9Cu;
    // 0x321da0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x321D9Cu, 0x321DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DA4u;
label_321da4:
    // 0x321da4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321da8:
    // 0x321da8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x321da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_321dac:
    // 0x321dac: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x321dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_321db0:
    // 0x321db0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x321db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_321db4:
    // 0x321db4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321db8:
    // 0x321db8: 0xc0a468c  jal         func_291A30
label_321dbc:
    if (ctx->pc == 0x321DBCu) {
        ctx->pc = 0x321DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DB8u;
        // 0x321dbc: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DC0u;
        goto label_321dc0;
    }
    ctx->pc = 0x321DB8u;
    SET_GPR_U32(ctx, 31, 0x321DC0u);
    ctx->pc = 0x321DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321DB8u;
    // 0x321dbc: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A30u, 0x321DB8u, 0x321DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DC0u;
label_321dc0:
    // 0x321dc0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_321dc4:
    // 0x321dc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_321dc8:
    // 0x321dc8: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_321dcc:
    if (ctx->pc == 0x321DCCu) {
        ctx->pc = 0x321DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DC8u;
        // 0x321dcc: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DD0u;
        goto label_321dd0;
    }
    ctx->pc = 0x321DC8u;
    {
        const bool branch_taken_0x321dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DC8u;
        // 0x321dcc: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321dc8) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x321DD0u;
label_321dd0:
    // 0x321dd0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x321dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_321dd4:
    // 0x321dd4: 0xc095150  jal         func_254540
label_321dd8:
    if (ctx->pc == 0x321DD8u) {
        ctx->pc = 0x321DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DD4u;
        // 0x321dd8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DDCu;
        goto label_321ddc;
    }
    ctx->pc = 0x321DD4u;
    SET_GPR_U32(ctx, 31, 0x321DDCu);
    ctx->pc = 0x321DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321DD4u;
    // 0x321dd8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x321DD4u, 0x321DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DDCu;
label_321ddc:
    // 0x321ddc: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
label_321de0:
    if (ctx->pc == 0x321DE0u) {
        ctx->pc = 0x321DE4u;
        goto label_321de4;
    }
    ctx->pc = 0x321DDCu;
    {
        const bool branch_taken_0x321ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321ddc) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x321DE4u;
label_321de4:
    // 0x321de4: 0xc0a46a0  jal         func_291A80
label_321de8:
    if (ctx->pc == 0x321DE8u) {
        ctx->pc = 0x321DECu;
        goto label_321dec;
    }
    ctx->pc = 0x321DE4u;
    SET_GPR_U32(ctx, 31, 0x321DECu);
    ctx->pc = 0x291A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A80u, 0x321DE4u, 0x321DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DECu;
label_321dec:
    // 0x321dec: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x321decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_321df0:
    // 0x321df0: 0xc095154  jal         func_254550
label_321df4:
    if (ctx->pc == 0x321DF4u) {
        ctx->pc = 0x321DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DF0u;
        // 0x321df4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DF8u;
        goto label_321df8;
    }
    ctx->pc = 0x321DF0u;
    SET_GPR_U32(ctx, 31, 0x321DF8u);
    ctx->pc = 0x321DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321DF0u;
    // 0x321df4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x321DF0u, 0x321DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DF8u;
label_321df8:
    // 0x321df8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x321df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_321dfc:
    // 0x321dfc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x321dfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_321e00:
    // 0x321e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321e04:
    // 0x321e04: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
label_321e08:
    if (ctx->pc == 0x321E08u) {
        ctx->pc = 0x321E0Cu;
        goto label_321e0c;
    }
    ctx->pc = 0x321E04u;
    {
        const bool branch_taken_0x321e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321e04) {
            ctx->pc = 0x321F68u;
            goto label_321f68;
        }
    }
    ctx->pc = 0x321E0Cu;
label_321e0c:
    // 0x321e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321e10:
    // 0x321e10: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_321e14:
    if (ctx->pc == 0x321E14u) {
        ctx->pc = 0x321E18u;
        goto label_321e18;
    }
    ctx->pc = 0x321E10u;
    {
        const bool branch_taken_0x321e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321e10) {
            ctx->pc = 0x321E70u;
            goto label_321e70;
        }
    }
    ctx->pc = 0x321E18u;
label_321e18:
    // 0x321e18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_321e1c:
    if (ctx->pc == 0x321E1Cu) {
        ctx->pc = 0x321E20u;
        goto label_321e20;
    }
    ctx->pc = 0x321E18u;
    {
        const bool branch_taken_0x321e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e18) {
            ctx->pc = 0x321E28u;
            goto label_321e28;
        }
    }
    ctx->pc = 0x321E20u;
label_321e20:
    // 0x321e20: 0x1000005d  b           . + 4 + (0x5D << 2)
label_321e24:
    if (ctx->pc == 0x321E24u) {
        ctx->pc = 0x321E28u;
        goto label_321e28;
    }
    ctx->pc = 0x321E20u;
    {
        const bool branch_taken_0x321e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e20) {
            ctx->pc = 0x321F98u;
            goto label_321f98;
        }
    }
    ctx->pc = 0x321E28u;
label_321e28:
    // 0x321e28: 0xc0c85f4  jal         func_3217D0
label_321e2c:
    if (ctx->pc == 0x321E2Cu) {
        ctx->pc = 0x321E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E28u;
        // 0x321e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E30u;
        goto label_321e30;
    }
    ctx->pc = 0x321E28u;
    SET_GPR_U32(ctx, 31, 0x321E30u);
    ctx->pc = 0x321E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E28u;
    // 0x321e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x321E28u, 0x321E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E30u;
label_321e30:
    // 0x321e30: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x321e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_321e34:
    // 0x321e34: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x321e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
label_321e38:
    // 0x321e38: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x321e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
label_321e3c:
    // 0x321e3c: 0x24843900  addiu       $a0, $a0, 0x3900
    ctx->pc = 0x321e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
label_321e40:
    // 0x321e40: 0x24c625d0  addiu       $a2, $a2, 0x25D0
    ctx->pc = 0x321e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9680));
label_321e44:
    // 0x321e44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x321e44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321e48:
    // 0x321e48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x321e48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321e4c:
    // 0x321e4c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x321e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_321e50:
    // 0x321e50: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x321e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_321e54:
    // 0x321e54: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x321e54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_321e58:
    // 0x321e58: 0xc065758  jal         func_195D60
label_321e5c:
    if (ctx->pc == 0x321E5Cu) {
        ctx->pc = 0x321E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E58u;
        // 0x321e5c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E60u;
        goto label_321e60;
    }
    ctx->pc = 0x321E58u;
    SET_GPR_U32(ctx, 31, 0x321E60u);
    ctx->pc = 0x321E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E58u;
    // 0x321e5c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D60u, 0x321E58u, 0x321E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E60u;
label_321e60:
    // 0x321e60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x321e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_321e64:
    // 0x321e64: 0x100001d0  b           . + 4 + (0x1D0 << 2)
label_321e68:
    if (ctx->pc == 0x321E68u) {
        ctx->pc = 0x321E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E64u;
        // 0x321e68: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E6Cu;
        goto label_321e6c;
    }
    ctx->pc = 0x321E64u;
    {
        const bool branch_taken_0x321e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E64u;
        // 0x321e68: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e64) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x321E6Cu;
label_321e6c:
    // 0x321e6c: 0x0  nop
    ctx->pc = 0x321e6cu;
    // NOP
label_321e70:
    // 0x321e70: 0xc0c85f4  jal         func_3217D0
label_321e74:
    if (ctx->pc == 0x321E74u) {
        ctx->pc = 0x321E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E70u;
        // 0x321e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E78u;
        goto label_321e78;
    }
    ctx->pc = 0x321E70u;
    SET_GPR_U32(ctx, 31, 0x321E78u);
    ctx->pc = 0x321E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E70u;
    // 0x321e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x321E70u, 0x321E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E78u;
label_321e78:
    // 0x321e78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321e7c:
    // 0x321e7c: 0x878482cc  lh          $a0, -0x7D34($gp)
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935244)));
label_321e80:
    // 0x321e80: 0x8c2bcebc  lw          $t3, -0x3144($at)
    ctx->pc = 0x321e80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_321e84:
    // 0x321e84: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x321e84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
label_321e88:
    // 0x321e88: 0x938382ce  lbu         $v1, -0x7D32($gp)
    ctx->pc = 0x321e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935246)));
label_321e8c:
    // 0x321e8c: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x321e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_321e90:
    // 0x321e90: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x321e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_321e94:
    // 0x321e94: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x321e94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_321e98:
    // 0x321e98: 0x3c068432  lui         $a2, 0x8432
    ctx->pc = 0x321e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33842 << 16));
label_321e9c:
    // 0x321e9c: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x321e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_321ea0:
    // 0x321ea0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_321ea4:
    // 0x321ea4: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x321ea4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_321ea8:
    // 0x321ea8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321eac:
    // 0x321eac: 0xac2acebc  sw          $t2, -0x3144($at)
    ctx->pc = 0x321eacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 10));
label_321eb0:
    // 0x321eb0: 0xa5240000  sh          $a0, 0x0($t1)
    ctx->pc = 0x321eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 4));
label_321eb4:
    // 0x321eb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321eb8:
    // 0x321eb8: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x321eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
label_321ebc:
    // 0x321ebc: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x321ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_321ec0:
    // 0x321ec0: 0x91230002  lbu         $v1, 0x2($t1)
    ctx->pc = 0x321ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_321ec4:
    // 0x321ec4: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x321ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_321ec8:
    // 0x321ec8: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x321ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
label_321ecc:
    // 0x321ecc: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x321eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_321ed0:
    // 0x321ed0: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x321ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_321ed4:
    // 0x321ed4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x321ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_321ed8:
    // 0x321ed8: 0x9084006c  lbu         $a0, 0x6C($a0)
    ctx->pc = 0x321ed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
label_321edc:
    // 0x321edc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321ee0:
    // 0x321ee0: 0x872006  srlv        $a0, $a3, $a0
    ctx->pc = 0x321ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_321ee4:
    // 0x321ee4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x321ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_321ee8:
    // 0x321ee8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x321ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_321eec:
    // 0x321eec: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x321eecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954696), GPR_U32(ctx, 3));
label_321ef0:
    // 0x321ef0: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x321ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_321ef4:
    // 0x321ef4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321ef8:
    // 0x321ef8: 0x91230002  lbu         $v1, 0x2($t1)
    ctx->pc = 0x321ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_321efc:
    // 0x321efc: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x321efcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_321f00:
    // 0x321f00: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x321f00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_321f04:
    // 0x321f04: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x321f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_321f08:
    // 0x321f08: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x321f08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_321f0c:
    // 0x321f0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321f10:
    // 0x321f10: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x321f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_321f14:
    // 0x321f14: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_321f18:
    // 0x321f18: 0x90a50068  lbu         $a1, 0x68($a1)
    ctx->pc = 0x321f18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 104)));
label_321f1c:
    // 0x321f1c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x321f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_321f20:
    // 0x321f20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321f24:
    // 0x321f24: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x321f24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
label_321f28:
    // 0x321f28: 0xa71806  srlv        $v1, $a3, $a1
    ctx->pc = 0x321f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_321f2c:
    // 0x321f2c: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x321f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_321f30:
    // 0x321f30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_321f34:
    // 0x321f34: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x321f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_321f38:
    // 0x321f38: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_321f3c:
    if (ctx->pc == 0x321F3Cu) {
        ctx->pc = 0x321F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F38u;
        // 0x321f3c: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F40u;
        goto label_321f40;
    }
    ctx->pc = 0x321F38u;
    {
        const bool branch_taken_0x321f38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F38u;
        // 0x321f3c: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f38) {
            ctx->pc = 0x321F50u;
            goto label_321f50;
        }
    }
    ctx->pc = 0x321F40u;
label_321f40:
    // 0x321f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321f44:
    // 0x321f44: 0xc0aaf64  jal         func_2ABD90
label_321f48:
    if (ctx->pc == 0x321F48u) {
        ctx->pc = 0x321F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F44u;
        // 0x321f48: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F4Cu;
        goto label_321f4c;
    }
    ctx->pc = 0x321F44u;
    SET_GPR_U32(ctx, 31, 0x321F4Cu);
    ctx->pc = 0x321F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F44u;
    // 0x321f48: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD90u, 0x321F44u, 0x321F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F4Cu;
label_321f4c:
    // 0x321f4c: 0x0  nop
    ctx->pc = 0x321f4cu;
    // NOP
label_321f50:
    // 0x321f50: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x321f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_321f54:
    // 0x321f54: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x321f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_321f58:
    // 0x321f58: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x321f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_321f5c:
    // 0x321f5c: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x321f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_321f60:
    // 0x321f60: 0x10000191  b           . + 4 + (0x191 << 2)
label_321f64:
    if (ctx->pc == 0x321F64u) {
        ctx->pc = 0x321F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F60u;
        // 0x321f64: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F68u;
        goto label_321f68;
    }
    ctx->pc = 0x321F60u;
    {
        const bool branch_taken_0x321f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F60u;
        // 0x321f64: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f60) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x321F68u;
label_321f68:
    // 0x321f68: 0xc0c85f4  jal         func_3217D0
label_321f6c:
    if (ctx->pc == 0x321F6Cu) {
        ctx->pc = 0x321F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F68u;
        // 0x321f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F70u;
        goto label_321f70;
    }
    ctx->pc = 0x321F68u;
    SET_GPR_U32(ctx, 31, 0x321F70u);
    ctx->pc = 0x321F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F68u;
    // 0x321f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x321F68u, 0x321F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F70u;
label_321f70:
    // 0x321f70: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321f74:
    // 0x321f74: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_321f78:
    // 0x321f78: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x321f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_321f7c:
    // 0x321f7c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x321f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_321f80:
    // 0x321f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321f84:
    // 0x321f84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x321f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_321f88:
    // 0x321f88: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321f8c:
    // 0x321f8c: 0xac23cc34  sw          $v1, -0x33CC($at)
    ctx->pc = 0x321f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
label_321f90:
    // 0x321f90: 0x10000187  b           . + 4 + (0x187 << 2)
label_321f94:
    if (ctx->pc == 0x321F94u) {
        ctx->pc = 0x321F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F90u;
        // 0x321f94: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F98u;
        goto label_321f98;
    }
    ctx->pc = 0x321F90u;
    {
        const bool branch_taken_0x321f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F90u;
        // 0x321f94: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f90) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x321F98u;
label_321f98:
    // 0x321f98: 0xc0c85f4  jal         func_3217D0
label_321f9c:
    if (ctx->pc == 0x321F9Cu) {
        ctx->pc = 0x321F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F98u;
        // 0x321f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FA0u;
        goto label_321fa0;
    }
    ctx->pc = 0x321F98u;
    SET_GPR_U32(ctx, 31, 0x321FA0u);
    ctx->pc = 0x321F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F98u;
    // 0x321f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x321F98u, 0x321FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FA0u;
label_321fa0:
    // 0x321fa0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321fa4:
    // 0x321fa4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_321fa8:
    // 0x321fa8: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x321fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_321fac:
    // 0x321fac: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x321facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_321fb0:
    // 0x321fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321fb4:
    // 0x321fb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x321fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_321fb8:
    // 0x321fb8: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321fbc:
    // 0x321fbc: 0xac23cc34  sw          $v1, -0x33CC($at)
    ctx->pc = 0x321fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
label_321fc0:
    // 0x321fc0: 0x1000017b  b           . + 4 + (0x17B << 2)
label_321fc4:
    if (ctx->pc == 0x321FC4u) {
        ctx->pc = 0x321FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FC0u;
        // 0x321fc4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FC8u;
        goto label_321fc8;
    }
    ctx->pc = 0x321FC0u;
    {
        const bool branch_taken_0x321fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FC0u;
        // 0x321fc4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fc0) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x321FC8u;
label_321fc8:
    // 0x321fc8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x321fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_321fcc:
    // 0x321fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321fd0:
    // 0x321fd0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_321fd4:
    if (ctx->pc == 0x321FD4u) {
        ctx->pc = 0x321FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FD0u;
        // 0x321fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FD8u;
        goto label_321fd8;
    }
    ctx->pc = 0x321FD0u;
    {
        const bool branch_taken_0x321fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x321FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FD0u;
        // 0x321fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fd0) {
            ctx->pc = 0x322020u;
            goto label_322020;
        }
    }
    ctx->pc = 0x321FD8u;
label_321fd8:
    // 0x321fd8: 0xc0c85d4  jal         func_321750
label_321fdc:
    if (ctx->pc == 0x321FDCu) {
        ctx->pc = 0x321FE0u;
        goto label_321fe0;
    }
    ctx->pc = 0x321FD8u;
    SET_GPR_U32(ctx, 31, 0x321FE0u);
    ctx->pc = 0x321750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321750u, 0x321FD8u, 0x321FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FE0u;
label_321fe0:
    // 0x321fe0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x321fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_321fe4:
    // 0x321fe4: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x321fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_321fe8:
    // 0x321fe8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x321fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_321fec:
    // 0x321fec: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x321fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_321ff0:
    // 0x321ff0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x321ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_321ff4:
    // 0x321ff4: 0xc0d165c  jal         func_345970
label_321ff8:
    if (ctx->pc == 0x321FF8u) {
        ctx->pc = 0x321FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FF4u;
        // 0x321ff8: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FFCu;
        goto label_321ffc;
    }
    ctx->pc = 0x321FF4u;
    SET_GPR_U32(ctx, 31, 0x321FFCu);
    ctx->pc = 0x321FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FF4u;
    // 0x321ff8: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x321FF4u, 0x321FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FFCu;
label_321ffc:
    // 0x321ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322000:
    // 0x322000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322004:
    // 0x322004: 0xc0d0590  jal         func_341640
label_322008:
    if (ctx->pc == 0x322008u) {
        ctx->pc = 0x322008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322004u;
        // 0x322008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32200Cu;
        goto label_32200c;
    }
    ctx->pc = 0x322004u;
    SET_GPR_U32(ctx, 31, 0x32200Cu);
    ctx->pc = 0x322008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322004u;
    // 0x322008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x322004u, 0x32200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32200Cu;
label_32200c:
    // 0x32200c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x32200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_322010:
    // 0x322010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_322014:
    // 0x322014: 0x10000164  b           . + 4 + (0x164 << 2)
label_322018:
    if (ctx->pc == 0x322018u) {
        ctx->pc = 0x322018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322014u;
        // 0x322018: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32201Cu;
        goto label_32201c;
    }
    ctx->pc = 0x322014u;
    {
        const bool branch_taken_0x322014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322014u;
        // 0x322018: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322014) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x32201Cu;
label_32201c:
    // 0x32201c: 0x0  nop
    ctx->pc = 0x32201cu;
    // NOP
label_322020:
    // 0x322020: 0xc0c85f4  jal         func_3217D0
label_322024:
    if (ctx->pc == 0x322024u) {
        ctx->pc = 0x322024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322020u;
        // 0x322024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322028u;
        goto label_322028;
    }
    ctx->pc = 0x322020u;
    SET_GPR_U32(ctx, 31, 0x322028u);
    ctx->pc = 0x322024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322020u;
    // 0x322024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x322020u, 0x322028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322028u;
label_322028:
    // 0x322028: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x322028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_32202c:
    // 0x32202c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x32202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_322030:
    // 0x322030: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x322030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_322034:
    // 0x322034: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x322034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_322038:
    // 0x322038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32203c:
    // 0x32203c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32203cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_322040:
    // 0x322040: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x322040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_322044:
    // 0x322044: 0xac23cc34  sw          $v1, -0x33CC($at)
    ctx->pc = 0x322044u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
label_322048:
    // 0x322048: 0x10000159  b           . + 4 + (0x159 << 2)
label_32204c:
    if (ctx->pc == 0x32204Cu) {
        ctx->pc = 0x32204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322048u;
        // 0x32204c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322050u;
        goto label_322050;
    }
    ctx->pc = 0x322048u;
    {
        const bool branch_taken_0x322048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322048u;
        // 0x32204c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322048) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x322050u;
label_322050:
    // 0x322050: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x322050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_322054:
    // 0x322054: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x322054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_322058:
    // 0x322058: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x322058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_32205c:
    // 0x32205c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x32205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_322060:
    // 0x322060: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x322060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_322064:
    // 0x322064: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x322064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_322068:
    // 0x322068: 0x320f809  jalr        $t9
label_32206c:
    if (ctx->pc == 0x32206Cu) {
        ctx->pc = 0x32206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322068u;
        // 0x32206c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322070u;
        goto label_322070;
    }
    ctx->pc = 0x322068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322070u);
        ctx->pc = 0x32206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322068u;
        // 0x32206c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322068u, 0x322070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322070u;
label_322070:
    // 0x322070: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
label_322074:
    if (ctx->pc == 0x322074u) {
        ctx->pc = 0x322078u;
        goto label_322078;
    }
    ctx->pc = 0x322070u;
    {
        const bool branch_taken_0x322070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322070) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322078u;
label_322078:
    // 0x322078: 0x96450044  lhu         $a1, 0x44($s2)
    ctx->pc = 0x322078u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_32207c:
    // 0x32207c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x32207cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_322080:
    // 0x322080: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x322080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322084:
    // 0x322084: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x322084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_322088:
    // 0x322088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x322088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32208c:
    // 0x32208c: 0xc0c2b48  jal         func_30AD20
label_322090:
    if (ctx->pc == 0x322090u) {
        ctx->pc = 0x322090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32208Cu;
        // 0x322090: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322094u;
        goto label_322094;
    }
    ctx->pc = 0x32208Cu;
    SET_GPR_U32(ctx, 31, 0x322094u);
    ctx->pc = 0x322090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32208Cu;
    // 0x322090: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AD20u, 0x32208Cu, 0x322094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322094u;
label_322094:
    // 0x322094: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x322094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_322098:
    // 0x322098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32209c:
    // 0x32209c: 0x10000142  b           . + 4 + (0x142 << 2)
label_3220a0:
    if (ctx->pc == 0x3220A0u) {
        ctx->pc = 0x3220A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32209Cu;
        // 0x3220a0: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220A4u;
        goto label_3220a4;
    }
    ctx->pc = 0x32209Cu;
    {
        const bool branch_taken_0x32209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32209Cu;
        // 0x3220a0: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32209c) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x3220A4u;
label_3220a4:
    // 0x3220a4: 0x0  nop
    ctx->pc = 0x3220a4u;
    // NOP
label_3220a8:
    // 0x3220a8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3220a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_3220ac:
    // 0x3220ac: 0xc0c2b78  jal         func_30ADE0
label_3220b0:
    if (ctx->pc == 0x3220B0u) {
        ctx->pc = 0x3220B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220ACu;
        // 0x3220b0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220B4u;
        goto label_3220b4;
    }
    ctx->pc = 0x3220ACu;
    SET_GPR_U32(ctx, 31, 0x3220B4u);
    ctx->pc = 0x3220B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220ACu;
    // 0x3220b0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ADE0u, 0x3220ACu, 0x3220B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220B4u;
label_3220b4:
    // 0x3220b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3220b8:
    // 0x3220b8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_3220bc:
    if (ctx->pc == 0x3220BCu) {
        ctx->pc = 0x3220BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220B8u;
        // 0x3220bc: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220C0u;
        goto label_3220c0;
    }
    ctx->pc = 0x3220B8u;
    {
        const bool branch_taken_0x3220b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3220BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220B8u;
        // 0x3220bc: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220b8) {
            ctx->pc = 0x3220F8u;
            goto label_3220f8;
        }
    }
    ctx->pc = 0x3220C0u;
label_3220c0:
    // 0x3220c0: 0xc0d0ac8  jal         func_342B20
label_3220c4:
    if (ctx->pc == 0x3220C4u) {
        ctx->pc = 0x3220C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220C0u;
        // 0x3220c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220C8u;
        goto label_3220c8;
    }
    ctx->pc = 0x3220C0u;
    SET_GPR_U32(ctx, 31, 0x3220C8u);
    ctx->pc = 0x3220C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220C0u;
    // 0x3220c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B20u, 0x3220C0u, 0x3220C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220C8u;
label_3220c8:
    // 0x3220c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3220c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3220cc:
    // 0x3220cc: 0xc0c85f4  jal         func_3217D0
label_3220d0:
    if (ctx->pc == 0x3220D0u) {
        ctx->pc = 0x3220D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220CCu;
        // 0x3220d0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220D4u;
        goto label_3220d4;
    }
    ctx->pc = 0x3220CCu;
    SET_GPR_U32(ctx, 31, 0x3220D4u);
    ctx->pc = 0x3220D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220CCu;
    // 0x3220d0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x3220CCu, 0x3220D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220D4u;
label_3220d4:
    // 0x3220d4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3220d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_3220d8:
    // 0x3220d8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3220d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_3220dc:
    // 0x3220dc: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x3220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_3220e0:
    // 0x3220e0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3220e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3220e4:
    // 0x3220e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3220e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3220e8:
    // 0x3220e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3220e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3220ec:
    // 0x3220ec: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3220ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_3220f0:
    // 0x3220f0: 0x1000012f  b           . + 4 + (0x12F << 2)
label_3220f4:
    if (ctx->pc == 0x3220F4u) {
        ctx->pc = 0x3220F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220F0u;
        // 0x3220f4: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3220F8u;
        goto label_3220f8;
    }
    ctx->pc = 0x3220F0u;
    {
        const bool branch_taken_0x3220f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220F0u;
        // 0x3220f4: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220f0) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x3220F8u;
label_3220f8:
    // 0x3220f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3220f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3220fc:
    // 0x3220fc: 0x1443012a  bne         $v0, $v1, . + 4 + (0x12A << 2)
label_322100:
    if (ctx->pc == 0x322100u) {
        ctx->pc = 0x322104u;
        goto label_322104;
    }
    ctx->pc = 0x3220FCu;
    {
        const bool branch_taken_0x3220fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3220fc) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322104u;
label_322104:
    // 0x322104: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x322104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_322108:
    // 0x322108: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x322108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_32210c:
    // 0x32210c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x32210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_322110:
    // 0x322110: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x322110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_322114:
    // 0x322114: 0xc0d166c  jal         func_3459B0
label_322118:
    if (ctx->pc == 0x322118u) {
        ctx->pc = 0x322118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322114u;
        // 0x322118: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32211Cu;
        goto label_32211c;
    }
    ctx->pc = 0x322114u;
    SET_GPR_U32(ctx, 31, 0x32211Cu);
    ctx->pc = 0x322118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322114u;
    // 0x322118: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459B0u, 0x322114u, 0x32211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32211Cu;
label_32211c:
    // 0x32211c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322120:
    // 0x322120: 0xc0d0548  jal         func_341520
label_322124:
    if (ctx->pc == 0x322124u) {
        ctx->pc = 0x322124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322120u;
        // 0x322124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322128u;
        goto label_322128;
    }
    ctx->pc = 0x322120u;
    SET_GPR_U32(ctx, 31, 0x322128u);
    ctx->pc = 0x322124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322120u;
    // 0x322124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x322120u, 0x322128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322128u;
label_322128:
    // 0x322128: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x322128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_32212c:
    // 0x32212c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_322130:
    // 0x322130: 0x1000011d  b           . + 4 + (0x11D << 2)
label_322134:
    if (ctx->pc == 0x322134u) {
        ctx->pc = 0x322134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322130u;
        // 0x322134: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322138u;
        goto label_322138;
    }
    ctx->pc = 0x322130u;
    {
        const bool branch_taken_0x322130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322130u;
        // 0x322134: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322130) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322138u;
label_322138:
    // 0x322138: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_32213c:
    // 0x32213c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x32213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_322140:
    // 0x322140: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x322140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_322144:
    // 0x322144: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x322144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_322148:
    // 0x322148: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x322148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32214c:
    // 0x32214c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x32214cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_322150:
    // 0x322150: 0x320f809  jalr        $t9
label_322154:
    if (ctx->pc == 0x322154u) {
        ctx->pc = 0x322154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322150u;
        // 0x322154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322158u;
        goto label_322158;
    }
    ctx->pc = 0x322150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322158u);
        ctx->pc = 0x322154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322150u;
        // 0x322154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322150u, 0x322158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322158u;
label_322158:
    // 0x322158: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
label_32215c:
    if (ctx->pc == 0x32215Cu) {
        ctx->pc = 0x322160u;
        goto label_322160;
    }
    ctx->pc = 0x322158u;
    {
        const bool branch_taken_0x322158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322158) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322160u;
label_322160:
    // 0x322160: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x322160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_322164:
    // 0x322164: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x322164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_322168:
    // 0x322168: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x322168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_32216c:
    // 0x32216c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x32216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_322170:
    // 0x322170: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x322170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_322174:
    // 0x322174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x322174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322178:
    // 0x322178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x322178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32217c:
    // 0x32217c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32217cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_322180:
    // 0x322180: 0xc0c85f4  jal         func_3217D0
label_322184:
    if (ctx->pc == 0x322184u) {
        ctx->pc = 0x322184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322180u;
        // 0x322184: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322188u;
        goto label_322188;
    }
    ctx->pc = 0x322180u;
    SET_GPR_U32(ctx, 31, 0x322188u);
    ctx->pc = 0x322184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322180u;
    // 0x322184: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x322180u, 0x322188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322188u;
label_322188:
    // 0x322188: 0x10000109  b           . + 4 + (0x109 << 2)
label_32218c:
    if (ctx->pc == 0x32218Cu) {
        ctx->pc = 0x32218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322188u;
        // 0x32218c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322190u;
        goto label_322190;
    }
    ctx->pc = 0x322188u;
    {
        const bool branch_taken_0x322188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322188u;
        // 0x32218c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322188) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x322190u;
label_322190:
    // 0x322190: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x322190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_322194:
    // 0x322194: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x322194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_322198:
    // 0x322198: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_32219c:
    if (ctx->pc == 0x32219Cu) {
        ctx->pc = 0x32219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322198u;
        // 0x32219c: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3221A0u;
        goto label_3221a0;
    }
    ctx->pc = 0x322198u;
    {
        const bool branch_taken_0x322198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322198u;
        // 0x32219c: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322198) {
            ctx->pc = 0x322218u;
            goto label_322218;
        }
    }
    ctx->pc = 0x3221A0u;
label_3221a0:
    // 0x3221a0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3221a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3221a4:
    // 0x3221a4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_3221a8:
    // 0x3221a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3221a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3221ac:
    // 0x3221ac: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3221acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_3221b0:
    // 0x3221b0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3221b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3221b4:
    // 0x3221b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3221b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3221b8:
    // 0x3221b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3221b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3221bc:
    // 0x3221bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3221bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3221c0:
    // 0x3221c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3221c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3221c4:
    // 0x3221c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3221c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3221c8:
    // 0x3221c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3221c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3221cc:
    // 0x3221cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3221d0:
    if (ctx->pc == 0x3221D0u) {
        ctx->pc = 0x3221D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221CCu;
        // 0x3221d0: 0x96240824  lhu         $a0, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3221D4u;
        goto label_3221d4;
    }
    ctx->pc = 0x3221CCu;
    {
        const bool branch_taken_0x3221cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3221D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221CCu;
        // 0x3221d0: 0x96240824  lhu         $a0, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221cc) {
            ctx->pc = 0x3221E4u;
            goto label_3221e4;
        }
    }
    ctx->pc = 0x3221D4u;
label_3221d4:
    // 0x3221d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3221d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3221d8:
    // 0x3221d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3221d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3221dc:
    // 0x3221dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3221e0:
    if (ctx->pc == 0x3221E0u) {
        ctx->pc = 0x3221E4u;
        goto label_3221e4;
    }
    ctx->pc = 0x3221DCu;
    {
        const bool branch_taken_0x3221dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3221dc) {
            ctx->pc = 0x3221FCu;
            goto label_3221fc;
        }
    }
    ctx->pc = 0x3221E4u;
label_3221e4:
    // 0x3221e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3221e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3221e8:
    // 0x3221e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3221e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3221ec:
    // 0x3221ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3221ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3221f0:
    // 0x3221f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3221f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3221f4:
    // 0x3221f4: 0x0  nop
    ctx->pc = 0x3221f4u;
    // NOP
label_3221f8:
    // 0x3221f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3221f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3221fc:
    // 0x3221fc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_322200:
    if (ctx->pc == 0x322200u) {
        ctx->pc = 0x322204u;
        goto label_322204;
    }
    ctx->pc = 0x3221FCu;
    {
        const bool branch_taken_0x3221fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3221fc) {
            ctx->pc = 0x322218u;
            goto label_322218;
        }
    }
    ctx->pc = 0x322204u;
label_322204:
    // 0x322204: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x322204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_322208:
    // 0x322208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32220c:
    // 0x32220c: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_322210:
    if (ctx->pc == 0x322210u) {
        ctx->pc = 0x322210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32220Cu;
        // 0x322210: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322214u;
        goto label_322214;
    }
    ctx->pc = 0x32220Cu;
    {
        const bool branch_taken_0x32220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32220Cu;
        // 0x322210: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32220c) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322214u;
label_322214:
    // 0x322214: 0x0  nop
    ctx->pc = 0x322214u;
    // NOP
label_322218:
    // 0x322218: 0x162000e3  bnez        $s1, . + 4 + (0xE3 << 2)
label_32221c:
    if (ctx->pc == 0x32221Cu) {
        ctx->pc = 0x322220u;
        goto label_322220;
    }
    ctx->pc = 0x322218u;
    {
        const bool branch_taken_0x322218 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x322218) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322220u;
label_322220:
    // 0x322220: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x322220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_322224:
    // 0x322224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_322228:
    // 0x322228: 0x100000df  b           . + 4 + (0xDF << 2)
label_32222c:
    if (ctx->pc == 0x32222Cu) {
        ctx->pc = 0x32222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322228u;
        // 0x32222c: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322230u;
        goto label_322230;
    }
    ctx->pc = 0x322228u;
    {
        const bool branch_taken_0x322228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322228u;
        // 0x32222c: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322228) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322230u;
label_322230:
    // 0x322230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322234:
    // 0x322234: 0xc0d0548  jal         func_341520
label_322238:
    if (ctx->pc == 0x322238u) {
        ctx->pc = 0x322238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322234u;
        // 0x322238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32223Cu;
        goto label_32223c;
    }
    ctx->pc = 0x322234u;
    SET_GPR_U32(ctx, 31, 0x32223Cu);
    ctx->pc = 0x322238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322234u;
    // 0x322238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x322234u, 0x32223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32223Cu;
label_32223c:
    // 0x32223c: 0xc0d16a0  jal         func_345A80
label_322240:
    if (ctx->pc == 0x322240u) {
        ctx->pc = 0x322240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32223Cu;
        // 0x322240: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322244u;
        goto label_322244;
    }
    ctx->pc = 0x32223Cu;
    SET_GPR_U32(ctx, 31, 0x322244u);
    ctx->pc = 0x322240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32223Cu;
    // 0x322240: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A80u, 0x32223Cu, 0x322244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322244u;
label_322244:
    // 0x322244: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x322244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_322248:
    // 0x322248: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x322248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_32224c:
    // 0x32224c: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x32224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
label_322250:
    // 0x322250: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x322250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_322254:
    // 0x322254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_322258:
    // 0x322258: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x322258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_32225c:
    // 0x32225c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x32225cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_322260:
    // 0x322260: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x322260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_322264:
    // 0x322264: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x322264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_322268:
    // 0x322268: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x322268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_32226c:
    // 0x32226c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x32226cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_322270:
    // 0x322270: 0xac6201f4  sw          $v0, 0x1F4($v1)
    ctx->pc = 0x322270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 500), GPR_U32(ctx, 2));
label_322274:
    // 0x322274: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x322274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_322278:
    // 0x322278: 0xc0d165c  jal         func_345970
label_32227c:
    if (ctx->pc == 0x32227Cu) {
        ctx->pc = 0x32227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322278u;
        // 0x32227c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322280u;
        goto label_322280;
    }
    ctx->pc = 0x322278u;
    SET_GPR_U32(ctx, 31, 0x322280u);
    ctx->pc = 0x32227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322278u;
    // 0x32227c: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x322278u, 0x322280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322280u;
label_322280:
    // 0x322280: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x322280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_322284:
    // 0x322284: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x322284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_322288:
    // 0x322288: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x322288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_32228c:
    // 0x32228c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x32228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_322290:
    // 0x322290: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x322290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_322294:
    // 0x322294: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x322294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_322298:
    // 0x322298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32229c:
    // 0x32229c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32229cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3222a0:
    // 0x3222a0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3222a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3222a4:
    // 0x3222a4: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x3222a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_3222a8:
    // 0x3222a8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3222a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3222ac:
    // 0x3222ac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3222acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3222b0:
    // 0x3222b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3222b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3222b4:
    // 0x3222b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3222b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3222b8:
    // 0x3222b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3222bc:
    if (ctx->pc == 0x3222BCu) {
        ctx->pc = 0x3222C0u;
        goto label_3222c0;
    }
    ctx->pc = 0x3222B8u;
    {
        const bool branch_taken_0x3222b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3222b8) {
            ctx->pc = 0x3222D0u;
            goto label_3222d0;
        }
    }
    ctx->pc = 0x3222C0u;
label_3222c0:
    // 0x3222c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3222c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3222c4:
    // 0x3222c4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3222c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3222c8:
    // 0x3222c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3222cc:
    if (ctx->pc == 0x3222CCu) {
        ctx->pc = 0x3222CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222C8u;
        // 0x3222cc: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222D0u;
        goto label_3222d0;
    }
    ctx->pc = 0x3222C8u;
    {
        const bool branch_taken_0x3222c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3222CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222C8u;
        // 0x3222cc: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222c8) {
            ctx->pc = 0x3222ECu;
            goto label_3222ec;
        }
    }
    ctx->pc = 0x3222D0u;
label_3222d0:
    // 0x3222d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3222d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3222d4:
    // 0x3222d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3222d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3222d8:
    // 0x3222d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3222d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3222dc:
    // 0x3222dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3222dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3222e0:
    // 0x3222e0: 0x0  nop
    ctx->pc = 0x3222e0u;
    // NOP
label_3222e4:
    // 0x3222e4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3222e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3222e8:
    // 0x3222e8: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x3222e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_3222ec:
    // 0x3222ec: 0xc0d0ae8  jal         func_342BA0
label_3222f0:
    if (ctx->pc == 0x3222F0u) {
        ctx->pc = 0x3222F4u;
        goto label_3222f4;
    }
    ctx->pc = 0x3222ECu;
    SET_GPR_U32(ctx, 31, 0x3222F4u);
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3222ECu, 0x3222F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222F4u;
label_3222f4:
    // 0x3222f4: 0x0  nop
    ctx->pc = 0x3222f4u;
    // NOP
label_3222f8:
    // 0x3222f8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3222f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_3222fc:
    // 0x3222fc: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x3222fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_322300:
    // 0x322300: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x322300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_322304:
    // 0x322304: 0xc0d0b00  jal         func_342C00
label_322308:
    if (ctx->pc == 0x322308u) {
        ctx->pc = 0x322308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322304u;
        // 0x322308: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32230Cu;
        goto label_32230c;
    }
    ctx->pc = 0x322304u;
    SET_GPR_U32(ctx, 31, 0x32230Cu);
    ctx->pc = 0x322308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322304u;
    // 0x322308: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x322304u, 0x32230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32230Cu;
label_32230c:
    // 0x32230c: 0xc0d0af4  jal         func_342BD0
label_322310:
    if (ctx->pc == 0x322310u) {
        ctx->pc = 0x322310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32230Cu;
        // 0x322310: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322314u;
        goto label_322314;
    }
    ctx->pc = 0x32230Cu;
    SET_GPR_U32(ctx, 31, 0x322314u);
    ctx->pc = 0x322310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32230Cu;
    // 0x322310: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x32230Cu, 0x322314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322314u;
label_322314:
    // 0x322314: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_322318:
    if (ctx->pc == 0x322318u) {
        ctx->pc = 0x32231Cu;
        goto label_32231c;
    }
    ctx->pc = 0x322314u;
    {
        const bool branch_taken_0x322314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322314) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x32231Cu;
label_32231c:
    // 0x32231c: 0x96450044  lhu         $a1, 0x44($s2)
    ctx->pc = 0x32231cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_322320:
    // 0x322320: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x322320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_322324:
    // 0x322324: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x322324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_322328:
    // 0x322328: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x322328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32232c:
    // 0x32232c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32232cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322330:
    // 0x322330: 0xc0c2b48  jal         func_30AD20
label_322334:
    if (ctx->pc == 0x322334u) {
        ctx->pc = 0x322334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322330u;
        // 0x322334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322338u;
        goto label_322338;
    }
    ctx->pc = 0x322330u;
    SET_GPR_U32(ctx, 31, 0x322338u);
    ctx->pc = 0x322334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322330u;
    // 0x322334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AD20u, 0x322330u, 0x322338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322338u;
label_322338:
    // 0x322338: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x322338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_32233c:
    // 0x32233c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_322340:
    // 0x322340: 0x10000099  b           . + 4 + (0x99 << 2)
label_322344:
    if (ctx->pc == 0x322344u) {
        ctx->pc = 0x322344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322340u;
        // 0x322344: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322348u;
        goto label_322348;
    }
    ctx->pc = 0x322340u;
    {
        const bool branch_taken_0x322340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322340u;
        // 0x322344: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322340) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322348u;
label_322348:
    // 0x322348: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x322348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_32234c:
    // 0x32234c: 0xc0c2b78  jal         func_30ADE0
label_322350:
    if (ctx->pc == 0x322350u) {
        ctx->pc = 0x322350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32234Cu;
        // 0x322350: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322354u;
        goto label_322354;
    }
    ctx->pc = 0x32234Cu;
    SET_GPR_U32(ctx, 31, 0x322354u);
    ctx->pc = 0x322350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32234Cu;
    // 0x322350: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ADE0u, 0x32234Cu, 0x322354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322354u;
label_322354:
    // 0x322354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322358:
    // 0x322358: 0x1443003f  bne         $v0, $v1, . + 4 + (0x3F << 2)
label_32235c:
    if (ctx->pc == 0x32235Cu) {
        ctx->pc = 0x32235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322358u;
        // 0x32235c: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322360u;
        goto label_322360;
    }
    ctx->pc = 0x322358u;
    {
        const bool branch_taken_0x322358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322358u;
        // 0x32235c: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322358) {
            ctx->pc = 0x322458u;
            goto label_322458;
        }
    }
    ctx->pc = 0x322360u;
label_322360:
    // 0x322360: 0xc0d0ac8  jal         func_342B20
label_322364:
    if (ctx->pc == 0x322364u) {
        ctx->pc = 0x322364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322360u;
        // 0x322364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322368u;
        goto label_322368;
    }
    ctx->pc = 0x322360u;
    SET_GPR_U32(ctx, 31, 0x322368u);
    ctx->pc = 0x322364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322360u;
    // 0x322364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B20u, 0x322360u, 0x322368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322368u;
label_322368:
    // 0x322368: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x322368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_32236c:
    // 0x32236c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x32236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_322370:
    // 0x322370: 0x8c25cc34  lw          $a1, -0x33CC($at)
    ctx->pc = 0x322370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_322374:
    // 0x322374: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x322374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_322378:
    // 0x322378: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x322378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_32237c:
    // 0x32237c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x32237cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_322380:
    // 0x322380: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x322380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_322384:
    // 0x322384: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x322384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_322388:
    // 0x322388: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x322388u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_32238c:
    // 0x32238c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x32238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_322390:
    // 0x322390: 0x3c0b8432  lui         $t3, 0x8432
    ctx->pc = 0x322390u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33842 << 16));
label_322394:
    // 0x322394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322398:
    // 0x322398: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x322398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_32239c:
    // 0x32239c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_3223a0:
    // 0x3223a0: 0xac24cc34  sw          $a0, -0x33CC($at)
    ctx->pc = 0x3223a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 4));
label_3223a4:
    // 0x3223a4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3223a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3223a8:
    // 0x3223a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3223a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3223ac:
    // 0x3223ac: 0x8c28cebc  lw          $t0, -0x3144($at)
    ctx->pc = 0x3223acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_3223b0:
    // 0x3223b0: 0x878582cc  lh          $a1, -0x7D34($gp)
    ctx->pc = 0x3223b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935244)));
label_3223b4:
    // 0x3223b4: 0x938482ce  lbu         $a0, -0x7D32($gp)
    ctx->pc = 0x3223b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935246)));
label_3223b8:
    // 0x3223b8: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x3223b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_3223bc:
    // 0x3223bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3223bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3223c0:
    // 0x3223c0: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x3223c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
label_3223c4:
    // 0x3223c4: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x3223c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_3223c8:
    // 0x3223c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3223c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3223cc:
    // 0x3223cc: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x3223ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
label_3223d0:
    // 0x3223d0: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x3223d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_3223d4:
    // 0x3223d4: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x3223d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3223d8:
    // 0x3223d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3223d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3223dc:
    // 0x3223dc: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x3223dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
label_3223e0:
    // 0x3223e0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3223e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_3223e4:
    // 0x3223e4: 0x908d0064  lbu         $t5, 0x64($a0)
    ctx->pc = 0x3223e4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_3223e8:
    // 0x3223e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3223e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3223ec:
    // 0x3223ec: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x3223ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954700)));
label_3223f0:
    // 0x3223f0: 0x1ac6006  srlv        $t4, $t4, $t5
    ctx->pc = 0x3223f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_3223f4:
    // 0x3223f4: 0x18b5827  nor         $t3, $t4, $t3
    ctx->pc = 0x3223f4u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 12) | GPR_U64(ctx, 11)));
label_3223f8:
    // 0x3223f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3223f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3223fc:
    // 0x3223fc: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x3223fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954704)));
label_322400:
    // 0x322400: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322404:
    // 0x322404: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x322404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
label_322408:
    // 0x322408: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_32240c:
    // 0x32240c: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x32240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
label_322410:
    // 0x322410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322414:
    // 0x322414: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x322414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_322418:
    // 0x322418: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x322418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_32241c:
    // 0x32241c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32241cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322420:
    // 0x322420: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x322420u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
label_322424:
    // 0x322424: 0x14b2024  and         $a0, $t2, $t3
    ctx->pc = 0x322424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
label_322428:
    // 0x322428: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_32242c:
    // 0x32242c: 0xac24cec8  sw          $a0, -0x3138($at)
    ctx->pc = 0x32242cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954696), GPR_U32(ctx, 4));
label_322430:
    // 0x322430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322434:
    // 0x322434: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x322434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_322438:
    // 0x322438: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x322438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_32243c:
    // 0x32243c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32243cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322440:
    // 0x322440: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x322440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_322444:
    // 0x322444: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x322444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_322448:
    // 0x322448: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x322448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_32244c:
    // 0x32244c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x32244cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_322450:
    // 0x322450: 0x10000057  b           . + 4 + (0x57 << 2)
label_322454:
    if (ctx->pc == 0x322454u) {
        ctx->pc = 0x322454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322450u;
        // 0x322454: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322458u;
        goto label_322458;
    }
    ctx->pc = 0x322450u;
    {
        const bool branch_taken_0x322450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322450u;
        // 0x322454: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322450) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x322458u;
label_322458:
    // 0x322458: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32245c:
    // 0x32245c: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
label_322460:
    if (ctx->pc == 0x322460u) {
        ctx->pc = 0x322464u;
        goto label_322464;
    }
    ctx->pc = 0x32245Cu;
    {
        const bool branch_taken_0x32245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32245c) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x322464u;
label_322464:
    // 0x322464: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x322464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_322468:
    // 0x322468: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x322468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_32246c:
    // 0x32246c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x32246cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_322470:
    // 0x322470: 0xc0d168c  jal         func_345A30
label_322474:
    if (ctx->pc == 0x322474u) {
        ctx->pc = 0x322474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322470u;
        // 0x322474: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322478u;
        goto label_322478;
    }
    ctx->pc = 0x322470u;
    SET_GPR_U32(ctx, 31, 0x322478u);
    ctx->pc = 0x322474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322470u;
    // 0x322474: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x322470u, 0x322478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322478u;
label_322478:
    // 0x322478: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x322478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_32247c:
    // 0x32247c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x32247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_322480:
    // 0x322480: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x322480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_322484:
    // 0x322484: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x322484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_322488:
    // 0x322488: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32248c:
    // 0x32248c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x32248cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_322490:
    // 0x322490: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x322490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_322494:
    // 0x322494: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x322494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_322498:
    // 0x322498: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x322498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_32249c:
    // 0x32249c: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_3224a0:
    // 0x3224a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3224a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3224a4:
    // 0x3224a4: 0xac6201f4  sw          $v0, 0x1F4($v1)
    ctx->pc = 0x3224a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 500), GPR_U32(ctx, 2));
label_3224a8:
    // 0x3224a8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3224a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3224ac:
    // 0x3224ac: 0xc0d1654  jal         func_345950
label_3224b0:
    if (ctx->pc == 0x3224B0u) {
        ctx->pc = 0x3224B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224ACu;
        // 0x3224b0: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3224B4u;
        goto label_3224b4;
    }
    ctx->pc = 0x3224ACu;
    SET_GPR_U32(ctx, 31, 0x3224B4u);
    ctx->pc = 0x3224B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3224ACu;
    // 0x3224b0: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345950u, 0x3224ACu, 0x3224B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3224B4u;
label_3224b4:
    // 0x3224b4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3224b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_3224b8:
    // 0x3224b8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3224b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_3224bc:
    // 0x3224bc: 0x8c25cc34  lw          $a1, -0x33CC($at)
    ctx->pc = 0x3224bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_3224c0:
    // 0x3224c0: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x3224c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3224c4:
    // 0x3224c4: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3224c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_3224c8:
    // 0x3224c8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3224c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_3224cc:
    // 0x3224cc: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x3224ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3224d0:
    // 0x3224d0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3224d4:
    // 0x3224d4: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x3224d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_3224d8:
    // 0x3224d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3224d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3224dc:
    // 0x3224dc: 0x3c0b8432  lui         $t3, 0x8432
    ctx->pc = 0x3224dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33842 << 16));
label_3224e0:
    // 0x3224e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3224e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3224e4:
    // 0x3224e4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3224e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3224e8:
    // 0x3224e8: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3224e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_3224ec:
    // 0x3224ec: 0xac24cc34  sw          $a0, -0x33CC($at)
    ctx->pc = 0x3224ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 4));
label_3224f0:
    // 0x3224f0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3224f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3224f4:
    // 0x3224f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3224f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3224f8:
    // 0x3224f8: 0x8c28cebc  lw          $t0, -0x3144($at)
    ctx->pc = 0x3224f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_3224fc:
    // 0x3224fc: 0x878582cc  lh          $a1, -0x7D34($gp)
    ctx->pc = 0x3224fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935244)));
label_322500:
    // 0x322500: 0x938482ce  lbu         $a0, -0x7D32($gp)
    ctx->pc = 0x322500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935246)));
label_322504:
    // 0x322504: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x322504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_322508:
    // 0x322508: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_32250c:
    // 0x32250c: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x32250cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
label_322510:
    // 0x322510: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x322510u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_322514:
    // 0x322514: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322518:
    // 0x322518: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x322518u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
label_32251c:
    // 0x32251c: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x32251cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_322520:
    // 0x322520: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x322520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_322524:
    // 0x322524: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322528:
    // 0x322528: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x322528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
label_32252c:
    // 0x32252c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x32252cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_322530:
    // 0x322530: 0x908d0060  lbu         $t5, 0x60($a0)
    ctx->pc = 0x322530u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_322534:
    // 0x322534: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322538:
    // 0x322538: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x322538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954700)));
label_32253c:
    // 0x32253c: 0x1ac6006  srlv        $t4, $t4, $t5
    ctx->pc = 0x32253cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_322540:
    // 0x322540: 0x18b5827  nor         $t3, $t4, $t3
    ctx->pc = 0x322540u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 12) | GPR_U64(ctx, 11)));
label_322544:
    // 0x322544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322548:
    // 0x322548: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x322548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954704)));
label_32254c:
    // 0x32254c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322550:
    // 0x322550: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x322550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
label_322554:
    // 0x322554: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322558:
    // 0x322558: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x322558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
label_32255c:
    // 0x32255c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322560:
    // 0x322560: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x322560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_322564:
    // 0x322564: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x322564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_322568:
    // 0x322568: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_32256c:
    // 0x32256c: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x32256cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
label_322570:
    // 0x322570: 0x14b2024  and         $a0, $t2, $t3
    ctx->pc = 0x322570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
label_322574:
    // 0x322574: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322578:
    // 0x322578: 0xac24cec8  sw          $a0, -0x3138($at)
    ctx->pc = 0x322578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954696), GPR_U32(ctx, 4));
label_32257c:
    // 0x32257c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_322580:
    // 0x322580: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x322580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_322584:
    // 0x322584: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x322584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_322588:
    // 0x322588: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_32258c:
    // 0x32258c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x32258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_322590:
    // 0x322590: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x322590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_322594:
    // 0x322594: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x322594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_322598:
    // 0x322598: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x322598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_32259c:
    // 0x32259c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3225a0:
    if (ctx->pc == 0x3225A0u) {
        ctx->pc = 0x3225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32259Cu;
        // 0x3225a0: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3225A4u;
        goto label_3225a4;
    }
    ctx->pc = 0x32259Cu;
    {
        const bool branch_taken_0x32259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32259Cu;
        // 0x3225a0: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32259c) {
            ctx->pc = 0x3225B0u;
            goto label_3225b0;
        }
    }
    ctx->pc = 0x3225A4u;
label_3225a4:
    // 0x3225a4: 0x0  nop
    ctx->pc = 0x3225a4u;
    // NOP
label_3225a8:
    // 0x3225a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3225a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3225ac:
    // 0x3225ac: 0x0  nop
    ctx->pc = 0x3225acu;
    // NOP
label_3225b0:
    // 0x3225b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3225b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3225b4:
    // 0x3225b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3225b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3225b8:
    // 0x3225b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3225b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3225bc:
    // 0x3225bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3225bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3225c0:
    // 0x3225c0: 0x3e00008  jr          $ra
label_3225c4:
    if (ctx->pc == 0x3225C4u) {
        ctx->pc = 0x3225C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225C0u;
        // 0x3225c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3225C8u;
        goto label_fallthrough_0x3225c0;
    }
    ctx->pc = 0x3225C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3225C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225C0u;
        // 0x3225c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3225C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3225c0:
    ctx->pc = 0x3225C8u;
}
