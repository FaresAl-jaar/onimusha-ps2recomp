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

// Function: sub_00187D70
// Address: 0x187d70 - 0x18b4d4
void sub_00187D70_0x187d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187D70_0x187d70");
#endif

    switch (ctx->pc) {
        case 0x187e0cu: goto label_187e0c;
        case 0x187e14u: goto label_187e14;
        case 0x187ec0u: goto label_187ec0;
        case 0x187ed0u: goto label_187ed0;
        case 0x187ee0u: goto label_187ee0;
        case 0x187ee8u: goto label_187ee8;
        case 0x187f1cu: goto label_187f1c;
        case 0x187f60u: goto label_187f60;
        case 0x187f70u: goto label_187f70;
        case 0x187fa0u: goto label_187fa0;
        case 0x188010u: goto label_188010;
        case 0x188124u: goto label_188124;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e8u: goto label_1882e8;
        case 0x188308u: goto label_188308;
        case 0x188310u: goto label_188310;
        case 0x188394u: goto label_188394;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883e4u: goto label_1883e4;
        case 0x188418u: goto label_188418;
        case 0x188428u: goto label_188428;
        case 0x18843cu: goto label_18843c;
        case 0x18844cu: goto label_18844c;
        case 0x18845cu: goto label_18845c;
        case 0x18846cu: goto label_18846c;
        case 0x188474u: goto label_188474;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884d8u: goto label_1884d8;
        case 0x1884e0u: goto label_1884e0;
        case 0x188508u: goto label_188508;
        case 0x188520u: goto label_188520;
        case 0x188540u: goto label_188540;
        case 0x188550u: goto label_188550;
        case 0x188564u: goto label_188564;
        case 0x188574u: goto label_188574;
        case 0x188584u: goto label_188584;
        case 0x188594u: goto label_188594;
        case 0x18859cu: goto label_18859c;
        case 0x1885dcu: goto label_1885dc;
        case 0x188600u: goto label_188600;
        case 0x188608u: goto label_188608;
        case 0x188630u: goto label_188630;
        case 0x188648u: goto label_188648;
        case 0x188654u: goto label_188654;
        case 0x188660u: goto label_188660;
        case 0x188704u: goto label_188704;
        case 0x18871cu: goto label_18871c;
        case 0x188724u: goto label_188724;
        case 0x18872cu: goto label_18872c;
        case 0x188738u: goto label_188738;
        case 0x18876cu: goto label_18876c;
        case 0x18879cu: goto label_18879c;
        case 0x1887c8u: goto label_1887c8;
        case 0x1887d8u: goto label_1887d8;
        case 0x1887e8u: goto label_1887e8;
        case 0x1887f0u: goto label_1887f0;
        case 0x18881cu: goto label_18881c;
        case 0x188828u: goto label_188828;
        case 0x188840u: goto label_188840;
        case 0x188848u: goto label_188848;
        case 0x1888b0u: goto label_1888b0;
        case 0x1889f4u: goto label_1889f4;
        case 0x188b54u: goto label_188b54;
        case 0x188cd8u: goto label_188cd8;
        case 0x188ce0u: goto label_188ce0;
        case 0x188cf0u: goto label_188cf0;
        case 0x188cfcu: goto label_188cfc;
        case 0x188d0cu: goto label_188d0c;
        case 0x188d18u: goto label_188d18;
        case 0x188d38u: goto label_188d38;
        case 0x188d40u: goto label_188d40;
        case 0x188dc4u: goto label_188dc4;
        case 0x188decu: goto label_188dec;
        case 0x188df4u: goto label_188df4;
        case 0x188e04u: goto label_188e04;
        case 0x188e14u: goto label_188e14;
        case 0x188e48u: goto label_188e48;
        case 0x188e58u: goto label_188e58;
        case 0x188e6cu: goto label_188e6c;
        case 0x188e7cu: goto label_188e7c;
        case 0x188e90u: goto label_188e90;
        case 0x188ea0u: goto label_188ea0;
        case 0x188ea8u: goto label_188ea8;
        case 0x188eecu: goto label_188eec;
        case 0x188f10u: goto label_188f10;
        case 0x188f18u: goto label_188f18;
        case 0x188f44u: goto label_188f44;
        case 0x188f5cu: goto label_188f5c;
        case 0x188f80u: goto label_188f80;
        case 0x188f90u: goto label_188f90;
        case 0x188fa4u: goto label_188fa4;
        case 0x188fb4u: goto label_188fb4;
        case 0x188fc8u: goto label_188fc8;
        case 0x188fd8u: goto label_188fd8;
        case 0x188fe0u: goto label_188fe0;
        case 0x189024u: goto label_189024;
        case 0x189048u: goto label_189048;
        case 0x189050u: goto label_189050;
        case 0x18907cu: goto label_18907c;
        case 0x189094u: goto label_189094;
        case 0x1890a4u: goto label_1890a4;
        case 0x1890b0u: goto label_1890b0;
        case 0x189154u: goto label_189154;
        case 0x18916cu: goto label_18916c;
        case 0x189174u: goto label_189174;
        case 0x18917cu: goto label_18917c;
        case 0x189188u: goto label_189188;
        case 0x1891bcu: goto label_1891bc;
        case 0x1891ecu: goto label_1891ec;
        case 0x189218u: goto label_189218;
        case 0x189228u: goto label_189228;
        case 0x189238u: goto label_189238;
        case 0x189240u: goto label_189240;
        case 0x18926cu: goto label_18926c;
        case 0x189360u: goto label_189360;
        case 0x189388u: goto label_189388;
        case 0x189390u: goto label_189390;
        case 0x1893a0u: goto label_1893a0;
        case 0x1893acu: goto label_1893ac;
        case 0x1893b8u: goto label_1893b8;
        case 0x1893c4u: goto label_1893c4;
        case 0x1893d0u: goto label_1893d0;
        case 0x189474u: goto label_189474;
        case 0x18948cu: goto label_18948c;
        case 0x18949cu: goto label_18949c;
        case 0x1894dcu: goto label_1894dc;
        case 0x189574u: goto label_189574;
        case 0x189590u: goto label_189590;
        case 0x1895c8u: goto label_1895c8;
        case 0x1895e0u: goto label_1895e0;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f8u: goto label_1895f8;
        case 0x189600u: goto label_189600;
        case 0x189608u: goto label_189608;
        case 0x18963cu: goto label_18963c;
        case 0x18966cu: goto label_18966c;
        case 0x189694u: goto label_189694;
        case 0x1896a0u: goto label_1896a0;
        case 0x189744u: goto label_189744;
        case 0x189758u: goto label_189758;
        case 0x189760u: goto label_189760;
        case 0x189768u: goto label_189768;
        case 0x189778u: goto label_189778;
        case 0x189788u: goto label_189788;
        case 0x189798u: goto label_189798;
        case 0x1897a0u: goto label_1897a0;
        case 0x1897ccu: goto label_1897cc;
        case 0x18984cu: goto label_18984c;
        case 0x189854u: goto label_189854;
        case 0x189860u: goto label_189860;
        case 0x189868u: goto label_189868;
        case 0x189878u: goto label_189878;
        case 0x189884u: goto label_189884;
        case 0x189910u: goto label_189910;
        case 0x189920u: goto label_189920;
        case 0x189960u: goto label_189960;
        case 0x189970u: goto label_189970;
        case 0x1899d8u: goto label_1899d8;
        case 0x1899e8u: goto label_1899e8;
        case 0x189a28u: goto label_189a28;
        case 0x189a38u: goto label_189a38;
        case 0x189bf8u: goto label_189bf8;
        case 0x189c10u: goto label_189c10;
        case 0x189c1cu: goto label_189c1c;
        case 0x189c34u: goto label_189c34;
        case 0x189c4cu: goto label_189c4c;
        case 0x189c68u: goto label_189c68;
        case 0x189c70u: goto label_189c70;
        case 0x189c7cu: goto label_189c7c;
        case 0x189d20u: goto label_189d20;
        case 0x189d48u: goto label_189d48;
        case 0x189d60u: goto label_189d60;
        case 0x189d68u: goto label_189d68;
        case 0x189d70u: goto label_189d70;
        case 0x189d88u: goto label_189d88;
        case 0x189da0u: goto label_189da0;
        case 0x189dacu: goto label_189dac;
        case 0x189e50u: goto label_189e50;
        case 0x189e58u: goto label_189e58;
        case 0x189e60u: goto label_189e60;
        case 0x189e6cu: goto label_189e6c;
        case 0x189e78u: goto label_189e78;
        case 0x189e84u: goto label_189e84;
        case 0x189e9cu: goto label_189e9c;
        case 0x189ea8u: goto label_189ea8;
        case 0x189eb4u: goto label_189eb4;
        case 0x189f58u: goto label_189f58;
        case 0x189f78u: goto label_189f78;
        case 0x189f88u: goto label_189f88;
        case 0x189f98u: goto label_189f98;
        case 0x189fa8u: goto label_189fa8;
        case 0x189fb8u: goto label_189fb8;
        case 0x189fc0u: goto label_189fc0;
        case 0x189fc8u: goto label_189fc8;
        case 0x189fd4u: goto label_189fd4;
        case 0x189fecu: goto label_189fec;
        case 0x189ffcu: goto label_189ffc;
        case 0x18a004u: goto label_18a004;
        case 0x18a01cu: goto label_18a01c;
        case 0x18a034u: goto label_18a034;
        case 0x18a040u: goto label_18a040;
        case 0x18a04cu: goto label_18a04c;
        case 0x18a058u: goto label_18a058;
        case 0x18a06cu: goto label_18a06c;
        case 0x18a078u: goto label_18a078;
        case 0x18a084u: goto label_18a084;
        case 0x18a128u: goto label_18a128;
        case 0x18a148u: goto label_18a148;
        case 0x18a158u: goto label_18a158;
        case 0x18a168u: goto label_18a168;
        case 0x18a178u: goto label_18a178;
        case 0x18a188u: goto label_18a188;
        case 0x18a198u: goto label_18a198;
        case 0x18a1a0u: goto label_18a1a0;
        case 0x18a1a8u: goto label_18a1a8;
        case 0x18a1b4u: goto label_18a1b4;
        case 0x18a1ccu: goto label_18a1cc;
        case 0x18a1dcu: goto label_18a1dc;
        case 0x18a1e4u: goto label_18a1e4;
        case 0x18a1fcu: goto label_18a1fc;
        case 0x18a214u: goto label_18a214;
        case 0x18a220u: goto label_18a220;
        case 0x18a22cu: goto label_18a22c;
        case 0x18a238u: goto label_18a238;
        case 0x18a274u: goto label_18a274;
        case 0x18a280u: goto label_18a280;
        case 0x18a28cu: goto label_18a28c;
        case 0x18a330u: goto label_18a330;
        case 0x18a350u: goto label_18a350;
        case 0x18a360u: goto label_18a360;
        case 0x18a370u: goto label_18a370;
        case 0x18a380u: goto label_18a380;
        case 0x18a390u: goto label_18a390;
        case 0x18a398u: goto label_18a398;
        case 0x18a3a0u: goto label_18a3a0;
        case 0x18a3acu: goto label_18a3ac;
        case 0x18a3c4u: goto label_18a3c4;
        case 0x18a3d0u: goto label_18a3d0;
        case 0x18a3d8u: goto label_18a3d8;
        case 0x18a3f0u: goto label_18a3f0;
        case 0x18a408u: goto label_18a408;
        case 0x18a41cu: goto label_18a41c;
        case 0x18a428u: goto label_18a428;
        case 0x18a434u: goto label_18a434;
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4f8u: goto label_18a4f8;
        case 0x18a508u: goto label_18a508;
        case 0x18a518u: goto label_18a518;
        case 0x18a528u: goto label_18a528;
        case 0x18a538u: goto label_18a538;
        case 0x18a540u: goto label_18a540;
        case 0x18a548u: goto label_18a548;
        case 0x18a554u: goto label_18a554;
        case 0x18a56cu: goto label_18a56c;
        case 0x18a57cu: goto label_18a57c;
        case 0x18a584u: goto label_18a584;
        case 0x18a59cu: goto label_18a59c;
        case 0x18a5b4u: goto label_18a5b4;
        case 0x18a5c0u: goto label_18a5c0;
        case 0x18a5ccu: goto label_18a5cc;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5ecu: goto label_18a5ec;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a604u: goto label_18a604;
        case 0x18a6a8u: goto label_18a6a8;
        case 0x18a6c8u: goto label_18a6c8;
        case 0x18a6d8u: goto label_18a6d8;
        case 0x18a6e8u: goto label_18a6e8;
        case 0x18a6f8u: goto label_18a6f8;
        case 0x18a708u: goto label_18a708;
        case 0x18a710u: goto label_18a710;
        case 0x18a718u: goto label_18a718;
        case 0x18a730u: goto label_18a730;
        case 0x18a740u: goto label_18a740;
        case 0x18a748u: goto label_18a748;
        case 0x18a760u: goto label_18a760;
        case 0x18a778u: goto label_18a778;
        case 0x18a78cu: goto label_18a78c;
        case 0x18a798u: goto label_18a798;
        case 0x18a7a4u: goto label_18a7a4;
        case 0x18a848u: goto label_18a848;
        case 0x18a860u: goto label_18a860;
        case 0x18a874u: goto label_18a874;
        case 0x18a888u: goto label_18a888;
        case 0x18a89cu: goto label_18a89c;
        case 0x18a8a8u: goto label_18a8a8;
        case 0x18a8dcu: goto label_18a8dc;
        case 0x18a8ecu: goto label_18a8ec;
        case 0x18a8fcu: goto label_18a8fc;
        case 0x18a90cu: goto label_18a90c;
        case 0x18a924u: goto label_18a924;
        case 0x18a94cu: goto label_18a94c;
        case 0x18a960u: goto label_18a960;
        case 0x18a970u: goto label_18a970;
        case 0x18a978u: goto label_18a978;
        case 0x18a980u: goto label_18a980;
        case 0x18a990u: goto label_18a990;
        case 0x18a9a4u: goto label_18a9a4;
        case 0x18a9b4u: goto label_18a9b4;
        case 0x18a9bcu: goto label_18a9bc;
        case 0x18a9d8u: goto label_18a9d8;
        case 0x18a9e0u: goto label_18a9e0;
        case 0x18a9e8u: goto label_18a9e8;
        case 0x18aa54u: goto label_18aa54;
        case 0x18aa68u: goto label_18aa68;
        case 0x18aa7cu: goto label_18aa7c;
        case 0x18aa84u: goto label_18aa84;
        case 0x18aac8u: goto label_18aac8;
        case 0x18aadcu: goto label_18aadc;
        case 0x18ab08u: goto label_18ab08;
        case 0x18ab10u: goto label_18ab10;
        case 0x18ab1cu: goto label_18ab1c;
        case 0x18ab30u: goto label_18ab30;
        case 0x18abe0u: goto label_18abe0;
        case 0x18ac30u: goto label_18ac30;
        case 0x18ac64u: goto label_18ac64;
        case 0x18ac74u: goto label_18ac74;
        case 0x18ac84u: goto label_18ac84;
        case 0x18ac94u: goto label_18ac94;
        case 0x18aca0u: goto label_18aca0;
        case 0x18acacu: goto label_18acac;
        case 0x18ad50u: goto label_18ad50;
        case 0x18ad58u: goto label_18ad58;
        case 0x18ad60u: goto label_18ad60;
        case 0x18ad84u: goto label_18ad84;
        case 0x18ada8u: goto label_18ada8;
        case 0x18adb8u: goto label_18adb8;
        case 0x18adc8u: goto label_18adc8;
        case 0x18addcu: goto label_18addc;
        case 0x18adecu: goto label_18adec;
        case 0x18ae04u: goto label_18ae04;
        case 0x18ae10u: goto label_18ae10;
        case 0x18ae54u: goto label_18ae54;
        case 0x18ae98u: goto label_18ae98;
        case 0x18aea8u: goto label_18aea8;
        case 0x18aebcu: goto label_18aebc;
        case 0x18aeccu: goto label_18aecc;
        case 0x18aed4u: goto label_18aed4;
        case 0x18af30u: goto label_18af30;
        case 0x18af44u: goto label_18af44;
        case 0x18afa0u: goto label_18afa0;
        case 0x18afa8u: goto label_18afa8;
        case 0x18afb4u: goto label_18afb4;
        case 0x18afc4u: goto label_18afc4;
        case 0x18afd0u: goto label_18afd0;
        case 0x18afdcu: goto label_18afdc;
        case 0x18afe8u: goto label_18afe8;
        case 0x18b08cu: goto label_18b08c;
        case 0x18b0acu: goto label_18b0ac;
        case 0x18b0c4u: goto label_18b0c4;
        case 0x18b0e8u: goto label_18b0e8;
        case 0x18b124u: goto label_18b124;
        case 0x18b13cu: goto label_18b13c;
        case 0x18b158u: goto label_18b158;
        case 0x18b16cu: goto label_18b16c;
        case 0x18b180u: goto label_18b180;
        case 0x18b190u: goto label_18b190;
        case 0x18b1a8u: goto label_18b1a8;
        case 0x18b1b8u: goto label_18b1b8;
        case 0x18b1c0u: goto label_18b1c0;
        case 0x18b1c8u: goto label_18b1c8;
        case 0x18b1d4u: goto label_18b1d4;
        case 0x18b1ecu: goto label_18b1ec;
        case 0x18b1fcu: goto label_18b1fc;
        case 0x18b204u: goto label_18b204;
        case 0x18b21cu: goto label_18b21c;
        case 0x18b234u: goto label_18b234;
        case 0x18b24cu: goto label_18b24c;
        case 0x18b258u: goto label_18b258;
        case 0x18b264u: goto label_18b264;
        case 0x18b308u: goto label_18b308;
        case 0x18b328u: goto label_18b328;
        case 0x18b338u: goto label_18b338;
        case 0x18b348u: goto label_18b348;
        case 0x18b358u: goto label_18b358;
        case 0x18b368u: goto label_18b368;
        case 0x18b370u: goto label_18b370;
        case 0x18b378u: goto label_18b378;
        case 0x18b384u: goto label_18b384;
        case 0x18b39cu: goto label_18b39c;
        case 0x18b3acu: goto label_18b3ac;
        case 0x18b3b4u: goto label_18b3b4;
        case 0x18b3ccu: goto label_18b3cc;
        case 0x18b3e4u: goto label_18b3e4;
        case 0x18b3f0u: goto label_18b3f0;
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b408u: goto label_18b408;
        case 0x18b420u: goto label_18b420;
        case 0x18b440u: goto label_18b440;
        case 0x18b450u: goto label_18b450;
        case 0x18b460u: goto label_18b460;
        case 0x18b468u: goto label_18b468;
        case 0x18b494u: goto label_18b494;
        default: break;
    }

    ctx->pc = 0x187d70u;

    // 0x187d70: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x187d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x187d74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187d78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x187d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x187d7c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x187d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x187d80: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x187d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x187d84: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x187d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x187d88: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x187d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x187d8c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x187d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x187d90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x187d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x187d94: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x187d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x187d98: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x187d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x187d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x187da0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x187da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x187da4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187da8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x187da8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x187dac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x187dacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x187db0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x187db0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x187db4: 0x9033cea4  lbu         $s3, -0x315C($at)
    ctx->pc = 0x187db4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x187db8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187dbc: 0x8c24cee0  lw          $a0, -0x3120($at)
    ctx->pc = 0x187dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x187dc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187dc4: 0x14600db4  bnez        $v1, . + 4 + (0xDB4 << 2)
    ctx->pc = 0x187DC4u;
    {
        const bool branch_taken_0x187dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DC4u;
        // 0x187dc8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dc4) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x187DCCu;
    // 0x187dcc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x187dd0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x187dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x187dd4: 0x14600db0  bnez        $v1, . + 4 + (0xDB0 << 2)
    ctx->pc = 0x187DD4u;
    {
        const bool branch_taken_0x187dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187dd4) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x187DDCu;
    // 0x187ddc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187de0: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187de4: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x187de4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x187de8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x187de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x187dec: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x187decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x187df0: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x187df0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187df4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x187df8: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x187df8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x187dfc: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x187dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x187e00: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x187e00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x187e04: 0xc041290  jal         func_104A40
    ctx->pc = 0x187E04u;
    SET_GPR_U32(ctx, 31, 0x187E0Cu);
    ctx->pc = 0x187E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E04u;
    // 0x187e08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x187E04u, 0x187E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E0Cu;
label_187e0c:
    // 0x187e0c: 0xc041294  jal         func_104A50
    ctx->pc = 0x187E0Cu;
    SET_GPR_U32(ctx, 31, 0x187E14u);
    ctx->pc = 0x187E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E0Cu;
    // 0x187e10: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x187E0Cu, 0x187E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E14u;
label_187e14:
    // 0x187e14: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x187e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x187e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187e1c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x187e1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x187e20: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x187E20u;
    {
        const bool branch_taken_0x187e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E20u;
        // 0x187e24: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e20) {
            ctx->pc = 0x187E60u;
            goto label_187e60;
        }
    }
    ctx->pc = 0x187E28u;
    // 0x187e28: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x187e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x187e2c: 0x8c24cee0  lw          $a0, -0x3120($at)
    ctx->pc = 0x187e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954720)));
    // 0x187e30: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x187e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187e34: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x187e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x187e38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187e3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187e40: 0xac23cee0  sw          $v1, -0x3120($at)
    ctx->pc = 0x187e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEE0u, _value); } while (0);
    // 0x187e44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187e48: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x187e4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x187e50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187e54: 0xac22cee0  sw          $v0, -0x3120($at)
    ctx->pc = 0x187e54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEE0u, _value); } while (0);
    // 0x187e58: 0xae800368  sw          $zero, 0x368($s4)
    ctx->pc = 0x187e58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 872), GPR_U32(ctx, 0));
    // 0x187e5c: 0x0  nop
    ctx->pc = 0x187e5cu;
    // NOP
label_187e60:
    // 0x187e60: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x187e64: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x187e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x187e68: 0x24020711  addiu       $v0, $zero, 0x711
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1809));
    // 0x187e6c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187E6Cu;
    {
        const bool branch_taken_0x187e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E6Cu;
        // 0x187e70: 0x24020110  addiu       $v0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e6c) {
            ctx->pc = 0x187E90u;
            goto label_187e90;
        }
    }
    ctx->pc = 0x187E74u;
    // 0x187e74: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187E74u;
    {
        const bool branch_taken_0x187e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187e74) {
            ctx->pc = 0x187E88u;
            goto label_187e88;
        }
    }
    ctx->pc = 0x187E7Cu;
    // 0x187e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187E7Cu;
    {
        const bool branch_taken_0x187e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e7c) {
            ctx->pc = 0x187EB0u;
            goto label_187eb0;
        }
    }
    ctx->pc = 0x187E84u;
    // 0x187e84: 0x0  nop
    ctx->pc = 0x187e84u;
    // NOP
label_187e88:
    // 0x187e88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x187E88u;
    {
        const bool branch_taken_0x187e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E88u;
        // 0x187e8c: 0x24160006  addiu       $s6, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e88) {
            ctx->pc = 0x187EB0u;
            goto label_187eb0;
        }
    }
    ctx->pc = 0x187E90u;
label_187e90:
    // 0x187e90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187e94: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x187e94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x187e98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x187e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x187e9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187ea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187EA0u;
    {
        const bool branch_taken_0x187ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ea0) {
            ctx->pc = 0x187EB0u;
            goto label_187eb0;
        }
    }
    ctx->pc = 0x187EA8u;
    // 0x187ea8: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x187eac: 0x0  nop
    ctx->pc = 0x187eacu;
    // NOP
label_187eb0:
    // 0x187eb0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x187eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x187eb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187eb8: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x187EB8u;
    SET_GPR_U32(ctx, 31, 0x187EC0u);
    ctx->pc = 0x187EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EB8u;
    // 0x187ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x187EB8u, 0x187EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EC0u;
label_187ec0:
    // 0x187ec0: 0x8fb002b0  lw          $s0, 0x2B0($sp)
    ctx->pc = 0x187ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x187ec4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x187ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x187ec8: 0xc041338  jal         func_104CE0
    ctx->pc = 0x187EC8u;
    SET_GPR_U32(ctx, 31, 0x187ED0u);
    ctx->pc = 0x187ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EC8u;
    // 0x187ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x187EC8u, 0x187ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187ED0u;
label_187ed0:
    // 0x187ed0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x187ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x187ed4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187ed8: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x187ED8u;
    SET_GPR_U32(ctx, 31, 0x187EE0u);
    ctx->pc = 0x187EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187ED8u;
    // 0x187edc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x187ED8u, 0x187EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EE0u;
label_187ee0:
    // 0x187ee0: 0xc041298  jal         func_104A60
    ctx->pc = 0x187EE0u;
    SET_GPR_U32(ctx, 31, 0x187EE8u);
    ctx->pc = 0x187EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EE0u;
    // 0x187ee4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x187EE0u, 0x187EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EE8u;
label_187ee8:
    // 0x187ee8: 0x2644000f  addiu       $a0, $s2, 0xF
    ctx->pc = 0x187ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x187eec: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x187eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x187ef0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x187ef0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187ef4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x187ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x187ef8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x187ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x187efc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x187efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x187f00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187f04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x187f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f08: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x187f08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x187f0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f10: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x187f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x187f14: 0xc061c60  jal         func_187180
    ctx->pc = 0x187F14u;
    SET_GPR_U32(ctx, 31, 0x187F1Cu);
    ctx->pc = 0x187F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F14u;
    // 0x187f18: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x187F14u, 0x187F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F1Cu;
label_187f1c:
    // 0x187f1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187f20: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x187f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x187f24: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x187f24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x187f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187f2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187F2Cu;
    {
        const bool branch_taken_0x187f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F2Cu;
        // 0x187f30: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f2c) {
            ctx->pc = 0x187F58u;
            goto label_187f58;
        }
    }
    ctx->pc = 0x187F34u;
    // 0x187f34: 0x16c30004  bne         $s6, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187F34u;
    {
        const bool branch_taken_0x187f34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x187f34) {
            ctx->pc = 0x187F48u;
            goto label_187f48;
        }
    }
    ctx->pc = 0x187F3Cu;
    // 0x187f3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187F3Cu;
    {
        const bool branch_taken_0x187f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F3Cu;
        // 0x187f40: 0x2416000d  addiu       $s6, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f3c) {
            ctx->pc = 0x187F58u;
            goto label_187f58;
        }
    }
    ctx->pc = 0x187F44u;
    // 0x187f44: 0x0  nop
    ctx->pc = 0x187f44u;
    // NOP
label_187f48:
    // 0x187f48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x187f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x187f4c: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x187F4Cu;
    {
        const bool branch_taken_0x187f4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x187f4c) {
            ctx->pc = 0x187F58u;
            goto label_187f58;
        }
    }
    ctx->pc = 0x187F54u;
    // 0x187f54: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x187f54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_187f58:
    // 0x187f58: 0xc061da8  jal         func_1876A0
    ctx->pc = 0x187F58u;
    SET_GPR_U32(ctx, 31, 0x187F60u);
    ctx->pc = 0x187F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F58u;
    // 0x187f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876A0u, 0x187F58u, 0x187F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F60u;
label_187f60:
    // 0x187f60: 0xaf808670  sw          $zero, -0x7990($gp)
    ctx->pc = 0x187f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 0));
    // 0x187f64: 0x8e830314  lw          $v1, 0x314($s4)
    ctx->pc = 0x187f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 788)));
    // 0x187f68: 0x1000061f  b           . + 4 + (0x61F << 2)
    ctx->pc = 0x187F68u;
    {
        const bool branch_taken_0x187f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F68u;
        // 0x187f6c: 0xaf838674  sw          $v1, -0x798C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f68) {
            ctx->pc = 0x1897E8u;
            goto label_1897e8;
        }
    }
    ctx->pc = 0x187F70u;
label_187f70:
    // 0x187f70: 0x8f878674  lw          $a3, -0x798C($gp)
    ctx->pc = 0x187f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x187f74: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x187f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187f78: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x187f78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x187f7c: 0x10200614  beqz        $at, . + 4 + (0x614 << 2)
    ctx->pc = 0x187F7Cu;
    {
        const bool branch_taken_0x187f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F7Cu;
        // 0x187f80: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f7c) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187F84u;
    // 0x187f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187f88: 0x24845680  addiu       $a0, $a0, 0x5680
    ctx->pc = 0x187f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22144));
    // 0x187f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187f90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187f94: 0x600008  jr          $v1
    ctx->pc = 0x187F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187FA0u: goto label_187fa0;
            case 0x188828u: goto label_188828;
            case 0x189280u: goto label_189280;
            case 0x1897D0u: goto label_1897d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x187F9Cu;
    // 0x187f9c: 0x0  nop
    ctx->pc = 0x187f9cu;
    // NOP
label_187fa0:
    // 0x187fa0: 0x8e830368  lw          $v1, 0x368($s4)
    ctx->pc = 0x187fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 872)));
    // 0x187fa4: 0x1460060a  bnez        $v1, . + 4 + (0x60A << 2)
    ctx->pc = 0x187FA4u;
    {
        const bool branch_taken_0x187fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA4u;
        // 0x187fa8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fa4) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187FACu;
    // 0x187fac: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x187facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x187fb0: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x187fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x187fb4: 0x14600606  bnez        $v1, . + 4 + (0x606 << 2)
    ctx->pc = 0x187FB4u;
    {
        const bool branch_taken_0x187fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fb4) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187FBCu;
    // 0x187fbc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x187fc0: 0x8c3195b4  lw          $s1, -0x6A4C($at)
    ctx->pc = 0x187fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8095B4u));
    // 0x187fc4: 0x96250030  lhu         $a1, 0x30($s1)
    ctx->pc = 0x187fc4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x187fc8: 0x30a30040  andi        $v1, $a1, 0x40
    ctx->pc = 0x187fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x187fcc: 0x10600600  beqz        $v1, . + 4 + (0x600 << 2)
    ctx->pc = 0x187FCCu;
    {
        const bool branch_taken_0x187fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FCCu;
        // 0x187fd0: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fcc) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187FD4u;
    // 0x187fd4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x187fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x187fd8: 0x106005fd  beqz        $v1, . + 4 + (0x5FD << 2)
    ctx->pc = 0x187FD8u;
    {
        const bool branch_taken_0x187fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fd8) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187FE0u;
    // 0x187fe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187fe4: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x187fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x187fe8: 0x146005f9  bnez        $v1, . + 4 + (0x5F9 << 2)
    ctx->pc = 0x187FE8u;
    {
        const bool branch_taken_0x187fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE8u;
        // 0x187fec: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fe8) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187FF0u;
    // 0x187ff0: 0x146005f7  bnez        $v1, . + 4 + (0x5F7 << 2)
    ctx->pc = 0x187FF0u;
    {
        const bool branch_taken_0x187ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ff0) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x187FF8u;
    // 0x187ff8: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x187ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x187ffc: 0x146005f4  bnez        $v1, . + 4 + (0x5F4 << 2)
    ctx->pc = 0x187FFCu;
    {
        const bool branch_taken_0x187ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ffc) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x188004u;
    // 0x188004: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x188004u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x188008: 0xc07204c  jal         func_1C8130
    ctx->pc = 0x188008u;
    SET_GPR_U32(ctx, 31, 0x188010u);
    ctx->pc = 0x18800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188008u;
    // 0x18800c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8130u, 0x188008u, 0x188010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188010u;
label_188010:
    // 0x188010: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x188010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x188014: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x188014u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x188018: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18801c: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x18801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188020: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x188020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188024: 0xe4201440  swc1        $f0, 0x1440($at)
    ctx->pc = 0x188024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841440u, _value); } while (0); }
    // 0x188028: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x18802c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18802cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188030: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x188030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188034: 0xe4201444  swc1        $f0, 0x1444($at)
    ctx->pc = 0x188034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841444u, _value); } while (0); }
    // 0x188038: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x188038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x18803c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188040: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x188040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188044: 0xe4201448  swc1        $f0, 0x1448($at)
    ctx->pc = 0x188044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841448u, _value); } while (0); }
    // 0x188048: 0x90630037  lbu         $v1, 0x37($v1)
    ctx->pc = 0x188048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 55)));
    // 0x18804c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18804Cu;
    {
        const bool branch_taken_0x18804c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x188050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18804Cu;
        // 0x188050: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18804c) {
            ctx->pc = 0x188060u;
            goto label_188060;
        }
    }
    ctx->pc = 0x188054u;
    // 0x188054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188058u;
    {
        const bool branch_taken_0x188058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188058u;
        // 0x18805c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188058) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188060u;
label_188060:
    // 0x188060: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x188060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x188064: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x188064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x188068: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188068u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18806c: 0x0  nop
    ctx->pc = 0x18806cu;
    // NOP
    // 0x188070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x188070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188074: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x188074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_188078:
    // 0x188078: 0x8f878674  lw          $a3, -0x798C($gp)
    ctx->pc = 0x188078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x18807c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x188080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188088: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x188088u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18808c: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18808Cu;
    {
        const bool branch_taken_0x18808c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x188090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18808Cu;
        // 0x188090: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18808c) {
            ctx->pc = 0x1880A0u;
            goto label_1880a0;
        }
    }
    ctx->pc = 0x188094u;
    // 0x188094: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188098: 0x14c30059  bne         $a2, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x188098u;
    {
        const bool branch_taken_0x188098 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x188098) {
            ctx->pc = 0x188200u;
            goto label_188200;
        }
    }
    ctx->pc = 0x1880A0u;
label_1880a0:
    // 0x1880a0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1880a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1880a4: 0xc4221440  lwc1        $f2, 0x1440($at)
    ctx->pc = 0x1880a4u;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1880a8: 0x8f858674  lw          $a1, -0x798C($gp)
    ctx->pc = 0x1880a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1880ac: 0x24030202  addiu       $v1, $zero, 0x202
    ctx->pc = 0x1880acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x1880b0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1880b4: 0xc4211444  lwc1        $f1, 0x1444($at)
    ctx->pc = 0x1880b4u;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1880b8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1880b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1880bc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1880bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1880c0: 0xc4201448  lwc1        $f0, 0x1448($at)
    ctx->pc = 0x1880c0u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880c4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1880c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1880c8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1880c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1880cc: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1880ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1880d0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1880d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1880d4: 0xe4221430  swc1        $f2, 0x1430($at)
    ctx->pc = 0x1880d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841430u, _value); } while (0); }
    // 0x1880d8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1880d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1880dc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1880dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1880e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1880e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1880e4: 0xe4211434  swc1        $f1, 0x1434($at)
    ctx->pc = 0x1880e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841434u, _value); } while (0); }
    // 0x1880e8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1880e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1880ec: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1880ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1880f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1880f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1880f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1880F4u;
    {
        const bool branch_taken_0x1880f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1880F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F4u;
        // 0x1880f8: 0xe4201438  swc1        $f0, 0x1438($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 5176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f4) {
            ctx->pc = 0x188108u;
            goto label_188108;
        }
    }
    ctx->pc = 0x1880FCu;
    // 0x1880fc: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x188100: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x188100u;
    {
        const bool branch_taken_0x188100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188100) {
            ctx->pc = 0x1881A8u;
            goto label_1881a8;
        }
    }
    ctx->pc = 0x188108u;
label_188108:
    // 0x188108: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18810c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x18810cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x188110: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x188114: 0x24841460  addiu       $a0, $a0, 0x1460
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5216));
    // 0x188118: 0x24a5d740  addiu       $a1, $a1, -0x28C0
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956864));
    // 0x18811c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x18811Cu;
    SET_GPR_U32(ctx, 31, 0x188124u);
    ctx->pc = 0x188120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18811Cu;
    // 0x188120: 0x24c61440  addiu       $a2, $a2, 0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x18811Cu, 0x188124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188124u;
label_188124:
    // 0x188124: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188128: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18812c: 0xc4241460  lwc1        $f4, 0x1460($at)
    ctx->pc = 0x18812cu;
    { uint32_t bits = FAST_READ32(0x841460u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188130: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x188130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188138: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x18813c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x18813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x188140: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188144: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188148: 0xc4231468  lwc1        $f3, 0x1468($at)
    ctx->pc = 0x188148u;
    { uint32_t bits = FAST_READ32(0x841468u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18814c: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x18814cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x188150: 0x460318dc  madd.s      $f3, $f3, $f3
    ctx->pc = 0x188150u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x188154: 0x460300c4  c1          0x300C4
    ctx->pc = 0x188154u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[3]);
    // 0x188158: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x188158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18815c: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x18815cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x188160: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x188160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188164: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x188164u;
    {
        const bool branch_taken_0x188164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188164) {
            ctx->pc = 0x188170u;
            goto label_188170;
        }
    }
    ctx->pc = 0x18816Cu;
    // 0x18816c: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x18816cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_188170:
    // 0x188170: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188174: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x188174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188178: 0x8f848674  lw          $a0, -0x798C($gp)
    ctx->pc = 0x188178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x18817c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188180: 0x460410c1  sub.s       $f3, $f2, $f4
    ctx->pc = 0x188180u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x188184: 0x3c03c440  lui         $v1, 0xC440
    ctx->pc = 0x188184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50240 << 16));
    // 0x188188: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x188188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18818c: 0xc4211448  lwc1        $f1, 0x1448($at)
    ctx->pc = 0x18818cu;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188194: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x188194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x188198: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18819c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x18819cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1881a0: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x1881a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
    // 0x1881a4: 0xe4201438  swc1        $f0, 0x1438($at)
    ctx->pc = 0x1881a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841438u, _value); } while (0); }
label_1881a8:
    // 0x1881a8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881ac: 0xc4251440  lwc1        $f5, 0x1440($at)
    ctx->pc = 0x1881acu;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1881b0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881b4: 0xc4241430  lwc1        $f4, 0x1430($at)
    ctx->pc = 0x1881b4u;
    { uint32_t bits = FAST_READ32(0x841430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1881b8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881bc: 0xc4231444  lwc1        $f3, 0x1444($at)
    ctx->pc = 0x1881bcu;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1881c0: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1881c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1881c4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881c8: 0xc4221434  lwc1        $f2, 0x1434($at)
    ctx->pc = 0x1881c8u;
    { uint32_t bits = FAST_READ32(0x841434u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1881cc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881d0: 0xc4211448  lwc1        $f1, 0x1448($at)
    ctx->pc = 0x1881d0u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1881d4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1881d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1881d8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881dc: 0xc4201438  lwc1        $f0, 0x1438($at)
    ctx->pc = 0x1881dcu;
    { uint32_t bits = FAST_READ32(0x841438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1881e0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881e4: 0xe4241450  swc1        $f4, 0x1450($at)
    ctx->pc = 0x1881e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841450u, _value); } while (0); }
    // 0x1881e8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881ec: 0xe4221454  swc1        $f2, 0x1454($at)
    ctx->pc = 0x1881ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841454u, _value); } while (0); }
    // 0x1881f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1881f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1881f4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1881f8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1881F8u;
    {
        const bool branch_taken_0x1881f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F8u;
        // 0x1881fc: 0xe4201458  swc1        $f0, 0x1458($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 5208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881f8) {
            ctx->pc = 0x188350u;
            goto label_188350;
        }
    }
    ctx->pc = 0x188200u;
label_188200:
    // 0x188200: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188204: 0xc4221440  lwc1        $f2, 0x1440($at)
    ctx->pc = 0x188204u;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188208: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x188208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x18820c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x18820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188210: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x188210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x188214: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188218: 0xc4211444  lwc1        $f1, 0x1444($at)
    ctx->pc = 0x188218u;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18821c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188220: 0xc4231448  lwc1        $f3, 0x1448($at)
    ctx->pc = 0x188220u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188224: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188228: 0xe4201430  swc1        $f0, 0x1430($at)
    ctx->pc = 0x188228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841430u, _value); } while (0); }
    // 0x18822c: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x18822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x188230: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188234: 0xc4201430  lwc1        $f0, 0x1430($at)
    ctx->pc = 0x188234u;
    { uint32_t bits = FAST_READ32(0x841430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188238: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x188238u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x18823c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18823cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188240: 0xe4241434  swc1        $f4, 0x1434($at)
    ctx->pc = 0x188240u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841434u, _value); } while (0); }
    // 0x188244: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x188244u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x188248: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18824c: 0xc4201434  lwc1        $f0, 0x1434($at)
    ctx->pc = 0x18824cu;
    { uint32_t bits = FAST_READ32(0x841434u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188250: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x188250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188254: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188258: 0xe4241438  swc1        $f4, 0x1438($at)
    ctx->pc = 0x188258u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841438u, _value); } while (0); }
    // 0x18825c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188260: 0xe4221450  swc1        $f2, 0x1450($at)
    ctx->pc = 0x188260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841450u, _value); } while (0); }
    // 0x188264: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188268: 0xc4221438  lwc1        $f2, 0x1438($at)
    ctx->pc = 0x188268u;
    { uint32_t bits = FAST_READ32(0x841438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18826c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18826cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188270: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188274: 0xc4201450  lwc1        $f0, 0x1450($at)
    ctx->pc = 0x188274u;
    { uint32_t bits = FAST_READ32(0x841450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188278: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x188278u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18827c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188280: 0xe4211454  swc1        $f1, 0x1454($at)
    ctx->pc = 0x188280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841454u, _value); } while (0); }
    // 0x188284: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x188284u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x188288: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18828c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x18828cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x188290: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x188290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x188294: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x188294u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x188298: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x188298u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x18829c: 0xe4231458  swc1        $f3, 0x1458($at)
    ctx->pc = 0x18829cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841458u, _value); } while (0); }
    // 0x1882a0: 0xc04b946  jal         func_12E518
    ctx->pc = 0x1882A0u;
    SET_GPR_U32(ctx, 31, 0x1882A8u);
    ctx->pc = 0x1882A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882A0u;
    // 0x1882a4: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x1882A0u, 0x1882A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882A8u;
label_1882a8:
    // 0x1882a8: 0xc047b76  jal         func_11EDD8
    ctx->pc = 0x1882A8u;
    SET_GPR_U32(ctx, 31, 0x1882B0u);
    ctx->pc = 0x1882ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882A8u;
    // 0x1882ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDD8u, 0x1882A8u, 0x1882B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882B0u;
label_1882b0:
    // 0x1882b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1882b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882b4: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x1882b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1882b8: 0xc04b946  jal         func_12E518
    ctx->pc = 0x1882B8u;
    SET_GPR_U32(ctx, 31, 0x1882C0u);
    ctx->pc = 0x1882BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882B8u;
    // 0x1882bc: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x1882B8u, 0x1882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882C0u;
label_1882c0:
    // 0x1882c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1882c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882c4: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x1882C4u;
    SET_GPR_U32(ctx, 31, 0x1882CCu);
    ctx->pc = 0x1882C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882C4u;
    // 0x1882c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x1882C4u, 0x1882CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882CCu;
label_1882cc:
    // 0x1882cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882d0: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1882d4: 0xc04b946  jal         func_12E518
    ctx->pc = 0x1882D4u;
    SET_GPR_U32(ctx, 31, 0x1882DCu);
    ctx->pc = 0x1882D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882D4u;
    // 0x1882d8: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x1882D4u, 0x1882DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882DCu;
label_1882dc:
    // 0x1882dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1882dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882e0: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x1882E0u;
    SET_GPR_U32(ctx, 31, 0x1882E8u);
    ctx->pc = 0x1882E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882E0u;
    // 0x1882e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x1882E0u, 0x1882E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882E8u;
label_1882e8:
    // 0x1882e8: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x1882e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x1882ec: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1882f0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1882f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x1882f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1882f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1882f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1882f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1882fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1882fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188300: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x188300u;
    SET_GPR_U32(ctx, 31, 0x188308u);
    ctx->pc = 0x188304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188300u;
    // 0x188304: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x188300u, 0x188308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188308u;
label_188308:
    // 0x188308: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x188308u;
    SET_GPR_U32(ctx, 31, 0x188310u);
    ctx->pc = 0x18830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188308u;
    // 0x18830c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x188308u, 0x188310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188310u;
label_188310:
    // 0x188310: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x188310u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x188314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188318: 0x0  nop
    ctx->pc = 0x188318u;
    // NOP
    // 0x18831c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18831cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188320: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188320u;
    {
        const bool branch_taken_0x188320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188320) {
            ctx->pc = 0x188330u;
            goto label_188330;
        }
    }
    ctx->pc = 0x188328u;
    // 0x188328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x188328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x18832c: 0x0  nop
    ctx->pc = 0x18832cu;
    // NOP
label_188330:
    // 0x188330: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188338: 0x0  nop
    ctx->pc = 0x188338u;
    // NOP
    // 0x18833c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18833cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188340: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x188340u;
    {
        const bool branch_taken_0x188340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188340) {
            ctx->pc = 0x188350u;
            goto label_188350;
        }
    }
    ctx->pc = 0x188348u;
    // 0x188348: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x188348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x18834c: 0x0  nop
    ctx->pc = 0x18834cu;
    // NOP
label_188350:
    // 0x188350: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x188354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188358: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x188358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18835c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x18835cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x188360: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x188360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188364: 0x4501051a  bc1t        . + 4 + (0x51A << 2)
    ctx->pc = 0x188364u;
    {
        const bool branch_taken_0x188364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188364) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x18836Cu;
    // 0x18836c: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188370: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x188374: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x188378: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18837c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18837cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x188380: 0x24a51430  addiu       $a1, $a1, 0x1430
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5168));
    // 0x188384: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x188384u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x188388: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x188388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18838c: 0xc062fcc  jal         func_18BF30
    ctx->pc = 0x18838Cu;
    SET_GPR_U32(ctx, 31, 0x188394u);
    ctx->pc = 0x188390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18838Cu;
    // 0x188390: 0x24c61440  addiu       $a2, $a2, 0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BF30u, 0x18838Cu, 0x188394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188394u;
label_188394:
    // 0x188394: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188398: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x188398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18839c: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18839cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1883a0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1883a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1883a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1883a8: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x1883a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1883ac: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1883b0: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x1883b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1883b4: 0xc041290  jal         func_104A40
    ctx->pc = 0x1883B4u;
    SET_GPR_U32(ctx, 31, 0x1883BCu);
    ctx->pc = 0x1883B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883B4u;
    // 0x1883b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1883B4u, 0x1883BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883BCu;
label_1883bc:
    // 0x1883bc: 0xc041294  jal         func_104A50
    ctx->pc = 0x1883BCu;
    SET_GPR_U32(ctx, 31, 0x1883C4u);
    ctx->pc = 0x1883C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883BCu;
    // 0x1883c0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x1883BCu, 0x1883C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883C4u;
label_1883c4:
    // 0x1883c4: 0x8e850360  lw          $a1, 0x360($s4)
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
    // 0x1883c8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1883cc: 0xc041306  jal         func_104C18
    ctx->pc = 0x1883CCu;
    SET_GPR_U32(ctx, 31, 0x1883D4u);
    ctx->pc = 0x1883D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883CCu;
    // 0x1883d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x1883CCu, 0x1883D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883D4u;
label_1883d4:
    // 0x1883d4: 0x8e850364  lw          $a1, 0x364($s4)
    ctx->pc = 0x1883d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 868)));
    // 0x1883d8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1883d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1883dc: 0xc041306  jal         func_104C18
    ctx->pc = 0x1883DCu;
    SET_GPR_U32(ctx, 31, 0x1883E4u);
    ctx->pc = 0x1883E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883DCu;
    // 0x1883e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x1883DCu, 0x1883E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883E4u;
label_1883e4:
    // 0x1883e4: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x1883e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1883e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1883ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1883ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1883f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883F0u;
    {
        const bool branch_taken_0x1883f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1883F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F0u;
        // 0x1883f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f0) {
            ctx->pc = 0x188400u;
            goto label_188400;
        }
    }
    ctx->pc = 0x1883F8u;
    // 0x1883f8: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1883F8u;
    {
        const bool branch_taken_0x1883f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1883f8) {
            ctx->pc = 0x188528u;
            goto label_188528;
        }
    }
    ctx->pc = 0x188400u;
label_188400:
    // 0x188400: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x188404: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x188404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x188408: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18840c: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x188410: 0xc041306  jal         func_104C18
    ctx->pc = 0x188410u;
    SET_GPR_U32(ctx, 31, 0x188418u);
    ctx->pc = 0x188414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188410u;
    // 0x188414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188410u, 0x188418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188418u;
label_188418:
    // 0x188418: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18841c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188420: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188420u;
    SET_GPR_U32(ctx, 31, 0x188428u);
    ctx->pc = 0x188424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188420u;
    // 0x188424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188420u, 0x188428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188428u;
label_188428:
    // 0x188428: 0x8fb502b0  lw          $s5, 0x2B0($sp)
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18842c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188434: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x188434u;
    SET_GPR_U32(ctx, 31, 0x18843Cu);
    ctx->pc = 0x188438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188434u;
    // 0x188438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x188434u, 0x18843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18843Cu;
label_18843c:
    // 0x18843c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188444: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188444u;
    SET_GPR_U32(ctx, 31, 0x18844Cu);
    ctx->pc = 0x188448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188444u;
    // 0x188448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188444u, 0x18844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18844Cu;
label_18844c:
    // 0x18844c: 0x8fbe02b0  lw          $fp, 0x2B0($sp)
    ctx->pc = 0x18844cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188450: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188454: 0xc041338  jal         func_104CE0
    ctx->pc = 0x188454u;
    SET_GPR_U32(ctx, 31, 0x18845Cu);
    ctx->pc = 0x188458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188454u;
    // 0x188458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x188454u, 0x18845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18845Cu;
label_18845c:
    // 0x18845c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188460: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188464: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188464u;
    SET_GPR_U32(ctx, 31, 0x18846Cu);
    ctx->pc = 0x188468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188464u;
    // 0x188468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188464u, 0x18846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18846Cu;
label_18846c:
    // 0x18846c: 0xc041298  jal         func_104A60
    ctx->pc = 0x18846Cu;
    SET_GPR_U32(ctx, 31, 0x188474u);
    ctx->pc = 0x188470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18846Cu;
    // 0x188470: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18846Cu, 0x188474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188474u;
label_188474:
    // 0x188474: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x188474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x188478: 0x1e193c  dsll32      $v1, $fp, 4
    ctx->pc = 0x188478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 4));
    // 0x18847c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x188480: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x188480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x188484: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x188484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x188488: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18848c: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x18848cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x188490: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x188490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x188494: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x188498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18849c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1884a0: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1884a0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1884a4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1884a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1884a8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1884a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1884ac: 0xc0a77a8  jal         func_29DEA0
    ctx->pc = 0x1884ACu;
    SET_GPR_U32(ctx, 31, 0x1884B4u);
    ctx->pc = 0x1884B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884ACu;
    // 0x1884b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DEA0u, 0x1884ACu, 0x1884B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884B4u;
label_1884b4:
    // 0x1884b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1884b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1884b8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1884b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1884bc: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1884c0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1884c4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1884c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1884c8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1884cc: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1884ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1884d0: 0xc041290  jal         func_104A40
    ctx->pc = 0x1884D0u;
    SET_GPR_U32(ctx, 31, 0x1884D8u);
    ctx->pc = 0x1884D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884D0u;
    // 0x1884d4: 0x432824  and         $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1884D0u, 0x1884D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884D8u;
label_1884d8:
    // 0x1884d8: 0xc041294  jal         func_104A50
    ctx->pc = 0x1884D8u;
    SET_GPR_U32(ctx, 31, 0x1884E0u);
    ctx->pc = 0x1884DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884D8u;
    // 0x1884dc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x1884D8u, 0x1884E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884E0u;
label_1884e0:
    // 0x1884e0: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x1884e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1884e4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1884e8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1884e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1884ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1884ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f0: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1884f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1884f4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1884f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1884f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1884fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1884fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188500: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x188500u;
    SET_GPR_U32(ctx, 31, 0x188508u);
    ctx->pc = 0x188504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188500u;
    // 0x188504: 0xffc20000  sd          $v0, 0x0($fp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x188500u, 0x188508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188508u;
label_188508:
    // 0x188508: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18850c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188510: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x188510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x188514: 0x8c4502f0  lw          $a1, 0x2F0($v0)
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x188518: 0xc041306  jal         func_104C18
    ctx->pc = 0x188518u;
    SET_GPR_U32(ctx, 31, 0x188520u);
    ctx->pc = 0x18851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188518u;
    // 0x18851c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188518u, 0x188520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188520u;
label_188520:
    // 0x188520: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x188520u;
    {
        const bool branch_taken_0x188520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188520) {
            ctx->pc = 0x188648u;
            goto label_188648;
        }
    }
    ctx->pc = 0x188528u;
label_188528:
    // 0x188528: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18852c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x18852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x188530: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188534: 0x8c4502c0  lw          $a1, 0x2C0($v0)
    ctx->pc = 0x188534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x188538: 0xc041306  jal         func_104C18
    ctx->pc = 0x188538u;
    SET_GPR_U32(ctx, 31, 0x188540u);
    ctx->pc = 0x18853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188538u;
    // 0x18853c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188538u, 0x188540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188540u;
label_188540:
    // 0x188540: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188544: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188548: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188548u;
    SET_GPR_U32(ctx, 31, 0x188550u);
    ctx->pc = 0x18854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188548u;
    // 0x18854c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188548u, 0x188550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188550u;
label_188550:
    // 0x188550: 0x8fb502b0  lw          $s5, 0x2B0($sp)
    ctx->pc = 0x188550u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188554: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18855c: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x18855Cu;
    SET_GPR_U32(ctx, 31, 0x188564u);
    ctx->pc = 0x188560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18855Cu;
    // 0x188560: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x18855Cu, 0x188564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188564u;
label_188564:
    // 0x188564: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188568: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18856c: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18856Cu;
    SET_GPR_U32(ctx, 31, 0x188574u);
    ctx->pc = 0x188570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18856Cu;
    // 0x188570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18856Cu, 0x188574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188574u;
label_188574:
    // 0x188574: 0x8fbe02b0  lw          $fp, 0x2B0($sp)
    ctx->pc = 0x188574u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188578: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18857c: 0xc041338  jal         func_104CE0
    ctx->pc = 0x18857Cu;
    SET_GPR_U32(ctx, 31, 0x188584u);
    ctx->pc = 0x188580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18857Cu;
    // 0x188580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x18857Cu, 0x188584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188584u;
label_188584:
    // 0x188584: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188588: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18858c: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18858Cu;
    SET_GPR_U32(ctx, 31, 0x188594u);
    ctx->pc = 0x188590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18858Cu;
    // 0x188590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18858Cu, 0x188594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188594u;
label_188594:
    // 0x188594: 0xc041298  jal         func_104A60
    ctx->pc = 0x188594u;
    SET_GPR_U32(ctx, 31, 0x18859Cu);
    ctx->pc = 0x188598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188594u;
    // 0x188598: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x188594u, 0x18859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18859Cu;
label_18859c:
    // 0x18859c: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x18859cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1885a0: 0x1e193c  dsll32      $v1, $fp, 4
    ctx->pc = 0x1885a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 4));
    // 0x1885a4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1885a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1885a8: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1885a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1885ac: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1885acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1885b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1885b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1885b4: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x1885b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x1885b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1885b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1885bc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1885bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1885c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1885c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1885c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1885c8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1885c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1885cc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1885ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1885d0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1885d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1885d4: 0xc0a77a8  jal         func_29DEA0
    ctx->pc = 0x1885D4u;
    SET_GPR_U32(ctx, 31, 0x1885DCu);
    ctx->pc = 0x1885D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885D4u;
    // 0x1885d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DEA0u, 0x1885D4u, 0x1885DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885DCu;
label_1885dc:
    // 0x1885dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1885dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1885e0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1885e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1885e4: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x1885e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1885e8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1885e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1885ec: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1885ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1885f0: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1885f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1885f4: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1885f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1885f8: 0xc041290  jal         func_104A40
    ctx->pc = 0x1885F8u;
    SET_GPR_U32(ctx, 31, 0x188600u);
    ctx->pc = 0x1885FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885F8u;
    // 0x1885fc: 0x432824  and         $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1885F8u, 0x188600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188600u;
label_188600:
    // 0x188600: 0xc041294  jal         func_104A50
    ctx->pc = 0x188600u;
    SET_GPR_U32(ctx, 31, 0x188608u);
    ctx->pc = 0x188604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188600u;
    // 0x188604: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x188600u, 0x188608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188608u;
label_188608:
    // 0x188608: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x188608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18860c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x188610: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188618: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x18861c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x18861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x188620: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x188620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x188624: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188628: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x188628u;
    SET_GPR_U32(ctx, 31, 0x188630u);
    ctx->pc = 0x18862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188628u;
    // 0x18862c: 0xffc20000  sd          $v0, 0x0($fp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x188628u, 0x188630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188630u;
label_188630:
    // 0x188630: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x188634: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188638: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x188638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18863c: 0x8c4502e0  lw          $a1, 0x2E0($v0)
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x188640: 0xc041306  jal         func_104C18
    ctx->pc = 0x188640u;
    SET_GPR_U32(ctx, 31, 0x188648u);
    ctx->pc = 0x188644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188640u;
    // 0x188644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188640u, 0x188648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188648u;
label_188648:
    // 0x188648: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18864c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18864Cu;
    SET_GPR_U32(ctx, 31, 0x188654u);
    ctx->pc = 0x188650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18864Cu;
    // 0x188650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18864Cu, 0x188654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188654u;
label_188654:
    // 0x188654: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188658: 0xc041386  jal         func_104E18
    ctx->pc = 0x188658u;
    SET_GPR_U32(ctx, 31, 0x188660u);
    ctx->pc = 0x18865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188658u;
    // 0x18865c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x188658u, 0x188660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188660u;
label_188660:
    // 0x188660: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x188660u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x188664: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x188664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x188668: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x188668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18866c: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18866cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x188670: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x188670u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x188674: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x188674u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x188678: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18867c: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18867cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x188680: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x188684: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x188684u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x188688: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x188688u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18868c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x188690: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x188690u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x188694: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x188694u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x188698: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x188698u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18869c: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18869cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x1886a0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1886a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1886a4: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x1886a4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x1886a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1886a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1886ac: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x1886acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1886b0: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x1886b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x1886b4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1886b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1886b8: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x1886b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x1886bc: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x1886bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x1886c0: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1886c4: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x1886c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x1886c8: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x1886c8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1886cc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1886d0: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x1886d0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1886d4: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x1886d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1886d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1886d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1886dc: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x1886dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x1886e0: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x1886e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1886e4: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x1886e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1886e8: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x1886e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1886ec: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x1886ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x1886f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1886f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1886f4: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x1886f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x1886f8: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x1886f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1886fc: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1886FCu;
    SET_GPR_U32(ctx, 31, 0x188704u);
    ctx->pc = 0x188700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1886FCu;
    // 0x188700: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1886FCu, 0x188704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188704u;
label_188704:
    // 0x188704: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188708: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18870c: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x188710: 0xdc460040  ld          $a2, 0x40($v0)
    ctx->pc = 0x188710u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x188714: 0xc041418  jal         func_105060
    ctx->pc = 0x188714u;
    SET_GPR_U32(ctx, 31, 0x18871Cu);
    ctx->pc = 0x188718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188714u;
    // 0x188718: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x188714u, 0x18871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18871Cu;
label_18871c:
    // 0x18871c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18871Cu;
    SET_GPR_U32(ctx, 31, 0x188724u);
    ctx->pc = 0x188720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18871Cu;
    // 0x188720: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18871Cu, 0x188724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188724u;
label_188724:
    // 0x188724: 0xc04139c  jal         func_104E70
    ctx->pc = 0x188724u;
    SET_GPR_U32(ctx, 31, 0x18872Cu);
    ctx->pc = 0x188728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188724u;
    // 0x188728: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x188724u, 0x18872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18872Cu;
label_18872c:
    // 0x18872c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18872Cu;
    {
        const bool branch_taken_0x18872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18872Cu;
        // 0x188730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18872c) {
            ctx->pc = 0x1887A8u;
            goto label_1887a8;
        }
    }
    ctx->pc = 0x188734u;
    // 0x188734: 0x0  nop
    ctx->pc = 0x188734u;
    // NOP
label_188738:
    // 0x188738: 0x8e82031c  lw          $v0, 0x31C($s4)
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
    // 0x18873c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18873Cu;
    {
        const bool branch_taken_0x18873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18873c) {
            ctx->pc = 0x188778u;
            goto label_188778;
        }
    }
    ctx->pc = 0x188744u;
    // 0x188744: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x188744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188748: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x188748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18874c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x188750: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188754: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x188758: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18875c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x188760: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x188760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x188764: 0xc05f45c  jal         func_17D170
    ctx->pc = 0x188764u;
    SET_GPR_U32(ctx, 31, 0x18876Cu);
    ctx->pc = 0x188768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188764u;
    // 0x188768: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D170u, 0x188764u, 0x18876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18876Cu;
label_18876c:
    // 0x18876c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18876Cu;
    {
        const bool branch_taken_0x18876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18876c) {
            ctx->pc = 0x1887A0u;
            goto label_1887a0;
        }
    }
    ctx->pc = 0x188774u;
    // 0x188774: 0x0  nop
    ctx->pc = 0x188774u;
    // NOP
label_188778:
    // 0x188778: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18877c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x188780: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x188780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188784: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x188788: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x188788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18878c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x188790: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x188790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x188794: 0xc05f45c  jal         func_17D170
    ctx->pc = 0x188794u;
    SET_GPR_U32(ctx, 31, 0x18879Cu);
    ctx->pc = 0x188798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188794u;
    // 0x188798: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D170u, 0x188794u, 0x18879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18879Cu;
label_18879c:
    // 0x18879c: 0x0  nop
    ctx->pc = 0x18879cu;
    // NOP
label_1887a0:
    // 0x1887a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1887a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1887a4: 0x0  nop
    ctx->pc = 0x1887a4u;
    // NOP
label_1887a8:
    // 0x1887a8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1887ac: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x1887acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1887b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1887b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1887b4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1887B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887B4u;
        // 0x1887b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x188738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188738;
        }
    }
    ctx->pc = 0x1887BCu;
    // 0x1887bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1887c0: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x1887C0u;
    SET_GPR_U32(ctx, 31, 0x1887C8u);
    ctx->pc = 0x1887C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887C0u;
    // 0x1887c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x1887C0u, 0x1887C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887C8u;
label_1887c8:
    // 0x1887c8: 0x8fb002b0  lw          $s0, 0x2B0($sp)
    ctx->pc = 0x1887c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1887cc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1887ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1887d0: 0xc041338  jal         func_104CE0
    ctx->pc = 0x1887D0u;
    SET_GPR_U32(ctx, 31, 0x1887D8u);
    ctx->pc = 0x1887D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887D0u;
    // 0x1887d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x1887D0u, 0x1887D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887D8u;
label_1887d8:
    // 0x1887d8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1887d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1887dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1887dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1887e0: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x1887E0u;
    SET_GPR_U32(ctx, 31, 0x1887E8u);
    ctx->pc = 0x1887E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887E0u;
    // 0x1887e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x1887E0u, 0x1887E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887E8u;
label_1887e8:
    // 0x1887e8: 0xc041298  jal         func_104A60
    ctx->pc = 0x1887E8u;
    SET_GPR_U32(ctx, 31, 0x1887F0u);
    ctx->pc = 0x1887ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887E8u;
    // 0x1887ec: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x1887E8u, 0x1887F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887F0u;
label_1887f0:
    // 0x1887f0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1887f4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1887f8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1887fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188800: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188804: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18880c: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x18880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x188810: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x188810u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x188814: 0xc061c60  jal         func_187180
    ctx->pc = 0x188814u;
    SET_GPR_U32(ctx, 31, 0x18881Cu);
    ctx->pc = 0x188818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188814u;
    // 0x188818: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x188814u, 0x18881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18881Cu;
label_18881c:
    // 0x18881c: 0x100003ec  b           . + 4 + (0x3EC << 2)
    ctx->pc = 0x18881Cu;
    {
        const bool branch_taken_0x18881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18881c) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x188824u;
    // 0x188824: 0x0  nop
    ctx->pc = 0x188824u;
    // NOP
label_188828:
    // 0x188828: 0x8e830368  lw          $v1, 0x368($s4)
    ctx->pc = 0x188828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 872)));
    // 0x18882c: 0x146003e8  bnez        $v1, . + 4 + (0x3E8 << 2)
    ctx->pc = 0x18882Cu;
    {
        const bool branch_taken_0x18882c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18882Cu;
        // 0x188830: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18882c) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x188834u;
    // 0x188834: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x188834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188838: 0x8c2386e8  lw          $v1, -0x7918($at)
    ctx->pc = 0x188838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936296)));
    // 0x18883c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_188840:
    if (ctx->pc == 0x188840u) {
        ctx->pc = 0x188840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18883Cu;
        // 0x188840: 0xaf838678  sw          $v1, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188844u;
        goto label_fallthrough_0x18883c;
    }
    ctx->pc = 0x18883Cu;
    {
        const bool branch_taken_0x18883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18883Cu;
        // 0x188840: 0xaf838678  sw          $v1, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18883c) {
            ctx->pc = 0x1888B0u;
            goto label_1888b0;
        }
    }
label_fallthrough_0x18883c:
    ctx->pc = 0x188844u;
    // 0x188844: 0x0  nop
    ctx->pc = 0x188844u;
    // NOP
label_188848:
    // 0x188848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18884c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18884Cu;
    {
        const bool branch_taken_0x18884c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x188850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18884Cu;
        // 0x188850: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18884c) {
            ctx->pc = 0x188868u;
            goto label_188868;
        }
    }
    ctx->pc = 0x188854u;
    // 0x188854: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x188854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188858: 0x8c2386ec  lw          $v1, -0x7914($at)
    ctx->pc = 0x188858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936300)));
    // 0x18885c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18885Cu;
    {
        const bool branch_taken_0x18885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18885Cu;
        // 0x188860: 0xaf838678  sw          $v1, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18885c) {
            ctx->pc = 0x1888B0u;
            goto label_1888b0;
        }
    }
    ctx->pc = 0x188864u;
    // 0x188864: 0x0  nop
    ctx->pc = 0x188864u;
    // NOP
label_188868:
    // 0x188868: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18886c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18886Cu;
    {
        const bool branch_taken_0x18886c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x188870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18886Cu;
        // 0x188870: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18886c) {
            ctx->pc = 0x188888u;
            goto label_188888;
        }
    }
    ctx->pc = 0x188874u;
    // 0x188874: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x188874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188878: 0x8c2386f4  lw          $v1, -0x790C($at)
    ctx->pc = 0x188878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936308)));
    // 0x18887c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18887Cu;
    {
        const bool branch_taken_0x18887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18887Cu;
        // 0x188880: 0xaf838678  sw          $v1, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18887c) {
            ctx->pc = 0x1888B0u;
            goto label_1888b0;
        }
    }
    ctx->pc = 0x188884u;
    // 0x188884: 0x0  nop
    ctx->pc = 0x188884u;
    // NOP
label_188888:
    // 0x188888: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x188888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18888c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18888Cu;
    {
        const bool branch_taken_0x18888c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x188890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18888Cu;
        // 0x188890: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18888c) {
            ctx->pc = 0x1888A8u;
            goto label_1888a8;
        }
    }
    ctx->pc = 0x188894u;
    // 0x188894: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x188894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188898: 0x8c2386e4  lw          $v1, -0x791C($at)
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936292)));
    // 0x18889c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18889Cu;
    {
        const bool branch_taken_0x18889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18889Cu;
        // 0x1888a0: 0xaf838678  sw          $v1, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18889c) {
            ctx->pc = 0x1888B0u;
            goto label_1888b0;
        }
    }
    ctx->pc = 0x1888A4u;
    // 0x1888a4: 0x0  nop
    ctx->pc = 0x1888a4u;
    // NOP
label_1888a8:
    // 0x1888a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1888A8u;
    {
        const bool branch_taken_0x1888a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888a8) {
            ctx->pc = 0x1888C0u;
            goto label_1888c0;
        }
    }
    ctx->pc = 0x1888B0u;
label_1888b0:
    // 0x1888b0: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x1888b4: 0x1060ffe4  beqz        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1888B4u;
    {
        const bool branch_taken_0x1888b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888b4) {
            ctx->pc = 0x188848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188848;
        }
    }
    ctx->pc = 0x1888BCu;
    // 0x1888bc: 0x0  nop
    ctx->pc = 0x1888bcu;
    // NOP
label_1888c0:
    // 0x1888c0: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x1888c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x1888c4: 0x106003c2  beqz        $v1, . + 4 + (0x3C2 << 2)
    ctx->pc = 0x1888C4u;
    {
        const bool branch_taken_0x1888c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888c4) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x1888CCu;
    // 0x1888cc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1888ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1888d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1888d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1888d4: 0x12230024  beq         $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1888D4u;
    {
        const bool branch_taken_0x1888d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1888D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888D4u;
        // 0x1888d8: 0x8e15004c  lw          $s5, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888d4) {
            ctx->pc = 0x188968u;
            goto label_188968;
        }
    }
    ctx->pc = 0x1888DCu;
    // 0x1888dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1888dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1888e0: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1888E0u;
    {
        const bool branch_taken_0x1888e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1888E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888E0u;
        // 0x1888e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888e0) {
            ctx->pc = 0x188948u;
            goto label_188948;
        }
    }
    ctx->pc = 0x1888E8u;
    // 0x1888e8: 0x1223000f  beq         $s1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1888E8u;
    {
        const bool branch_taken_0x1888e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1888e8) {
            ctx->pc = 0x188928u;
            goto label_188928;
        }
    }
    ctx->pc = 0x1888F0u;
    // 0x1888f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1888f4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1888F4u;
    {
        const bool branch_taken_0x1888f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1888f4) {
            ctx->pc = 0x188908u;
            goto label_188908;
        }
    }
    ctx->pc = 0x1888FCu;
    // 0x1888fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1888FCu;
    {
        const bool branch_taken_0x1888fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888fc) {
            ctx->pc = 0x188980u;
            goto label_188980;
        }
    }
    ctx->pc = 0x188904u;
    // 0x188904: 0x0  nop
    ctx->pc = 0x188904u;
    // NOP
label_188908:
    // 0x188908: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18890c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x188910: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x188910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x188914: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x188914u;
    {
        const bool branch_taken_0x188914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188914) {
            ctx->pc = 0x188980u;
            goto label_188980;
        }
    }
    ctx->pc = 0x18891Cu;
    // 0x18891c: 0x10000254  b           . + 4 + (0x254 << 2)
    ctx->pc = 0x18891Cu;
    {
        const bool branch_taken_0x18891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18891c) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188924u;
    // 0x188924: 0x0  nop
    ctx->pc = 0x188924u;
    // NOP
label_188928:
    // 0x188928: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18892c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x188930: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x188930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x188934: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x188934u;
    {
        const bool branch_taken_0x188934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188934) {
            ctx->pc = 0x188980u;
            goto label_188980;
        }
    }
    ctx->pc = 0x18893Cu;
    // 0x18893c: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x18893Cu;
    {
        const bool branch_taken_0x18893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18893c) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188944u;
    // 0x188944: 0x0  nop
    ctx->pc = 0x188944u;
    // NOP
label_188948:
    // 0x188948: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18894c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x18894cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x188950: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x188950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x188954: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x188954u;
    {
        const bool branch_taken_0x188954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188954) {
            ctx->pc = 0x188980u;
            goto label_188980;
        }
    }
    ctx->pc = 0x18895Cu;
    // 0x18895c: 0x10000244  b           . + 4 + (0x244 << 2)
    ctx->pc = 0x18895Cu;
    {
        const bool branch_taken_0x18895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18895c) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188964u;
    // 0x188964: 0x0  nop
    ctx->pc = 0x188964u;
    // NOP
label_188968:
    // 0x188968: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18896c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x18896cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x188970: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x188970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x188974: 0x1460023e  bnez        $v1, . + 4 + (0x23E << 2)
    ctx->pc = 0x188974u;
    {
        const bool branch_taken_0x188974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188974) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x18897Cu;
    // 0x18897c: 0x0  nop
    ctx->pc = 0x18897cu;
    // NOP
label_188980:
    // 0x188980: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x188984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188988: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x188988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x18898c: 0x10660238  beq         $v1, $a2, . + 4 + (0x238 << 2)
    ctx->pc = 0x18898Cu;
    {
        const bool branch_taken_0x18898c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x18898c) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188994u;
    // 0x188994: 0x12a00236  beqz        $s5, . + 4 + (0x236 << 2)
    ctx->pc = 0x188994u;
    {
        const bool branch_taken_0x188994 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x188994) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x18899Cu;
    // 0x18899c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x18899cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1889a0: 0x10a00233  beqz        $a1, . + 4 + (0x233 << 2)
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x1889A8u;
    // 0x1889a8: 0x8ea30128  lw          $v1, 0x128($s5)
    ctx->pc = 0x1889a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x1889ac: 0x10600230  beqz        $v1, . + 4 + (0x230 << 2)
    ctx->pc = 0x1889ACu;
    {
        const bool branch_taken_0x1889ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ACu;
        // 0x1889b0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889ac) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x1889B4u;
    // 0x1889b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1889b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1889b8: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1889b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x1889bc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1889BCu;
    {
        const bool branch_taken_0x1889bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1889bc) {
            ctx->pc = 0x1889D8u;
            goto label_1889d8;
        }
    }
    ctx->pc = 0x1889C4u;
    // 0x1889c4: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x1889c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x1889c8: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x1889c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1889cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1889ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1889d0: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x1889d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1889d4: 0x0  nop
    ctx->pc = 0x1889d4u;
    // NOP
label_1889d8:
    // 0x1889d8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1889d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1889dc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1889dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1889e0: 0x10600223  beqz        $v1, . + 4 + (0x223 << 2)
    ctx->pc = 0x1889E0u;
    {
        const bool branch_taken_0x1889e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889e0) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x1889E8u;
    // 0x1889e8: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x1889e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1889ec: 0xc07204c  jal         func_1C8130
    ctx->pc = 0x1889ECu;
    SET_GPR_U32(ctx, 31, 0x1889F4u);
    ctx->pc = 0x1889F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889ECu;
    // 0x1889f0: 0x92040001  lbu         $a0, 0x1($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8130u, 0x1889ECu, 0x1889F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889F4u;
label_1889f4:
    // 0x1889f4: 0x96070030  lhu         $a3, 0x30($s0)
    ctx->pc = 0x1889f4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1889f8: 0x30e30040  andi        $v1, $a3, 0x40
    ctx->pc = 0x1889f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x1889fc: 0x1060021c  beqz        $v1, . + 4 + (0x21C << 2)
    ctx->pc = 0x1889FCu;
    {
        const bool branch_taken_0x1889fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889FCu;
        // 0x188a00: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889fc) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188A04u;
    // 0x188a04: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x188a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x188a08: 0x10600219  beqz        $v1, . + 4 + (0x219 << 2)
    ctx->pc = 0x188A08u;
    {
        const bool branch_taken_0x188a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a08) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188A10u;
    // 0x188a10: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x188a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x188a14: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x188a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x188a18: 0x14600215  bnez        $v1, . + 4 + (0x215 << 2)
    ctx->pc = 0x188A18u;
    {
        const bool branch_taken_0x188a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A18u;
        // 0x188a1c: 0x30c30001  andi        $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a18) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188A20u;
    // 0x188a20: 0x14600213  bnez        $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x188A20u;
    {
        const bool branch_taken_0x188a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a20) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188A28u;
    // 0x188a28: 0x30e30100  andi        $v1, $a3, 0x100
    ctx->pc = 0x188a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x188a2c: 0x14600210  bnez        $v1, . + 4 + (0x210 << 2)
    ctx->pc = 0x188A2Cu;
    {
        const bool branch_taken_0x188a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a2c) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188A34u;
    // 0x188a34: 0x8ea60128  lw          $a2, 0x128($s5)
    ctx->pc = 0x188a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x188a38: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188a3c: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x188a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188a40: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x188a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a44: 0xe4201440  swc1        $f0, 0x1440($at)
    ctx->pc = 0x188a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841440u, _value); } while (0); }
    // 0x188a48: 0x8ea60128  lw          $a2, 0x128($s5)
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x188a4c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188a50: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x188a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a54: 0xe4201444  swc1        $f0, 0x1444($at)
    ctx->pc = 0x188a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841444u, _value); } while (0); }
    // 0x188a58: 0x8ea60128  lw          $a2, 0x128($s5)
    ctx->pc = 0x188a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x188a5c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188a60: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x188a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a64: 0xe4201448  swc1        $f0, 0x1448($at)
    ctx->pc = 0x188a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841448u, _value); } while (0); }
    // 0x188a68: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x188a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x188a6c: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x188a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x188a70: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188A70u;
    {
        const bool branch_taken_0x188a70 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x188A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A70u;
        // 0x188a74: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a70) {
            ctx->pc = 0x188A84u;
            goto label_188a84;
        }
    }
    ctx->pc = 0x188A78u;
    // 0x188a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188a7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188A7Cu;
    {
        const bool branch_taken_0x188a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A7Cu;
        // 0x188a80: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a7c) {
            ctx->pc = 0x188A9Cu;
            goto label_188a9c;
        }
    }
    ctx->pc = 0x188A84u;
label_188a84:
    // 0x188a84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x188a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x188a88: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x188a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x188a8c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188a8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188a90: 0x0  nop
    ctx->pc = 0x188a90u;
    // NOP
    // 0x188a94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x188a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188a98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x188a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_188a9c:
    // 0x188a9c: 0x8f878674  lw          $a3, -0x798C($gp)
    ctx->pc = 0x188a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188aa0: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x188aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x188aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188aa8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188aac: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x188aacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188ab0: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x188AB0u;
    {
        const bool branch_taken_0x188ab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x188AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AB0u;
        // 0x188ab4: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ab0) {
            ctx->pc = 0x188AC8u;
            goto label_188ac8;
        }
    }
    ctx->pc = 0x188AB8u;
    // 0x188ab8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x188ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188abc: 0x14c3005c  bne         $a2, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x188ABCu;
    {
        const bool branch_taken_0x188abc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x188abc) {
            ctx->pc = 0x188C30u;
            goto label_188c30;
        }
    }
    ctx->pc = 0x188AC4u;
    // 0x188ac4: 0x0  nop
    ctx->pc = 0x188ac4u;
    // NOP
label_188ac8:
    // 0x188ac8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188acc: 0xc4221440  lwc1        $f2, 0x1440($at)
    ctx->pc = 0x188accu;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188ad0: 0x8f858674  lw          $a1, -0x798C($gp)
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188ad4: 0x24030202  addiu       $v1, $zero, 0x202
    ctx->pc = 0x188ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x188ad8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188adc: 0xc4211444  lwc1        $f1, 0x1444($at)
    ctx->pc = 0x188adcu;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ae0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x188ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188ae4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188ae8: 0xc4201448  lwc1        $f0, 0x1448($at)
    ctx->pc = 0x188ae8u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188aec: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x188aecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x188af0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x188af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x188af4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x188af4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x188af8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188afc: 0xe4221430  swc1        $f2, 0x1430($at)
    ctx->pc = 0x188afcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841430u, _value); } while (0); }
    // 0x188b00: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x188b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188b04: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188b08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x188b08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x188b0c: 0xe4211434  swc1        $f1, 0x1434($at)
    ctx->pc = 0x188b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841434u, _value); } while (0); }
    // 0x188b10: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x188b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188b14: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188b18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188b1c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188B1Cu;
    {
        const bool branch_taken_0x188b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B1Cu;
        // 0x188b20: 0xe4201438  swc1        $f0, 0x1438($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 5176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b1c) {
            ctx->pc = 0x188B30u;
            goto label_188b30;
        }
    }
    ctx->pc = 0x188B24u;
    // 0x188b24: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x188b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x188b28: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x188B28u;
    {
        const bool branch_taken_0x188b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188b28) {
            ctx->pc = 0x188BD8u;
            goto label_188bd8;
        }
    }
    ctx->pc = 0x188B30u;
label_188b30:
    // 0x188b30: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x188b34: 0x2442d750  addiu       $v0, $v0, -0x28B0
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956880));
    // 0x188b38: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x188b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x188b3c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x188b3cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40D750u));
    // 0x188b40: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x188b44: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x188b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x188b48: 0x24c61440  addiu       $a2, $a2, 0x1440
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5184));
    // 0x188b4c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x188B4Cu;
    SET_GPR_U32(ctx, 31, 0x188B54u);
    ctx->pc = 0x188B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B4Cu;
    // 0x188b50: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x188B4Cu, 0x188B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B54u;
label_188b54:
    // 0x188b54: 0xc7a40280  lwc1        $f4, 0x280($sp)
    ctx->pc = 0x188b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188b58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188b5c: 0xc7a30288  lwc1        $f3, 0x288($sp)
    ctx->pc = 0x188b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188b60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x188b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188b64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188b68: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x188b6c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x188b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x188b70: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x188b70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x188b74: 0x460318dc  madd.s      $f3, $f3, $f3
    ctx->pc = 0x188b74u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x188b78: 0x460300c4  c1          0x300C4
    ctx->pc = 0x188b78u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[3]);
    // 0x188b7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188b80: 0x0  nop
    ctx->pc = 0x188b80u;
    // NOP
    // 0x188b84: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x188b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x188b88: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x188b88u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x188b8c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x188b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188b90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188B90u;
    {
        const bool branch_taken_0x188b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188b90) {
            ctx->pc = 0x188BA0u;
            goto label_188ba0;
        }
    }
    ctx->pc = 0x188B98u;
    // 0x188b98: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x188b98u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x188b9c: 0x0  nop
    ctx->pc = 0x188b9cu;
    // NOP
label_188ba0:
    // 0x188ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188ba4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x188ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188ba8: 0x8f848674  lw          $a0, -0x798C($gp)
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188bac: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188bb0: 0x460410c1  sub.s       $f3, $f2, $f4
    ctx->pc = 0x188bb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x188bb4: 0x3c03c440  lui         $v1, 0xC440
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50240 << 16));
    // 0x188bb8: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x188bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188bbc: 0xc4211448  lwc1        $f1, 0x1448($at)
    ctx->pc = 0x188bbcu;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188bc4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x188bc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x188bc8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188bcc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x188bccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x188bd0: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x188bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
    // 0x188bd4: 0xe4201438  swc1        $f0, 0x1438($at)
    ctx->pc = 0x188bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841438u, _value); } while (0); }
label_188bd8:
    // 0x188bd8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188bdc: 0xc4251440  lwc1        $f5, 0x1440($at)
    ctx->pc = 0x188bdcu;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x188be0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188be4: 0xc4241430  lwc1        $f4, 0x1430($at)
    ctx->pc = 0x188be4u;
    { uint32_t bits = FAST_READ32(0x841430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188be8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188bec: 0xc4231444  lwc1        $f3, 0x1444($at)
    ctx->pc = 0x188becu;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188bf0: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x188bf0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x188bf4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188bf8: 0xc4221434  lwc1        $f2, 0x1434($at)
    ctx->pc = 0x188bf8u;
    { uint32_t bits = FAST_READ32(0x841434u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188bfc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c00: 0xc4211448  lwc1        $f1, 0x1448($at)
    ctx->pc = 0x188c00u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c04: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x188c04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x188c08: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c0c: 0xc4201438  lwc1        $f0, 0x1438($at)
    ctx->pc = 0x188c0cu;
    { uint32_t bits = FAST_READ32(0x841438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c10: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c14: 0xe4241450  swc1        $f4, 0x1450($at)
    ctx->pc = 0x188c14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841450u, _value); } while (0); }
    // 0x188c18: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c1c: 0xe4221454  swc1        $f2, 0x1454($at)
    ctx->pc = 0x188c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841454u, _value); } while (0); }
    // 0x188c20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188c24: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c28: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x188C28u;
    {
        const bool branch_taken_0x188c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C28u;
        // 0x188c2c: 0xe4201458  swc1        $f0, 0x1458($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 5208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c28) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188C30u;
label_188c30:
    // 0x188c30: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c34: 0xc4221440  lwc1        $f2, 0x1440($at)
    ctx->pc = 0x188c34u;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188c38: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x188c3c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x188c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c40: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x188c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x188c44: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c48: 0xc4211444  lwc1        $f1, 0x1444($at)
    ctx->pc = 0x188c48u;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c4c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c50: 0xc4231448  lwc1        $f3, 0x1448($at)
    ctx->pc = 0x188c50u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188c54: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c58: 0xe4201430  swc1        $f0, 0x1430($at)
    ctx->pc = 0x188c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841430u, _value); } while (0); }
    // 0x188c5c: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x188c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x188c60: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c64: 0xc4201430  lwc1        $f0, 0x1430($at)
    ctx->pc = 0x188c64u;
    { uint32_t bits = FAST_READ32(0x841430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c68: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x188c68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x188c6c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c70: 0xe4241434  swc1        $f4, 0x1434($at)
    ctx->pc = 0x188c70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841434u, _value); } while (0); }
    // 0x188c74: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x188c74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x188c78: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c7c: 0xc4201434  lwc1        $f0, 0x1434($at)
    ctx->pc = 0x188c7cu;
    { uint32_t bits = FAST_READ32(0x841434u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c80: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x188c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188c84: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c88: 0xe4241438  swc1        $f4, 0x1438($at)
    ctx->pc = 0x188c88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841438u, _value); } while (0); }
    // 0x188c8c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c90: 0xe4221450  swc1        $f2, 0x1450($at)
    ctx->pc = 0x188c90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841450u, _value); } while (0); }
    // 0x188c94: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188c98: 0xc4221438  lwc1        $f2, 0x1438($at)
    ctx->pc = 0x188c98u;
    { uint32_t bits = FAST_READ32(0x841438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188c9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x188c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188ca0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188ca4: 0xc4201450  lwc1        $f0, 0x1450($at)
    ctx->pc = 0x188ca4u;
    { uint32_t bits = FAST_READ32(0x841450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ca8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x188ca8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x188cac: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188cb0: 0xe4211454  swc1        $f1, 0x1454($at)
    ctx->pc = 0x188cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841454u, _value); } while (0); }
    // 0x188cb4: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x188cb4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x188cb8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x188cbc: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x188cbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x188cc0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x188cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x188cc4: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x188cc4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x188cc8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x188cc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x188ccc: 0xe4231458  swc1        $f3, 0x1458($at)
    ctx->pc = 0x188cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841458u, _value); } while (0); }
    // 0x188cd0: 0xc04b946  jal         func_12E518
    ctx->pc = 0x188CD0u;
    SET_GPR_U32(ctx, 31, 0x188CD8u);
    ctx->pc = 0x188CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CD0u;
    // 0x188cd4: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x188CD0u, 0x188CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CD8u;
label_188cd8:
    // 0x188cd8: 0xc047b76  jal         func_11EDD8
    ctx->pc = 0x188CD8u;
    SET_GPR_U32(ctx, 31, 0x188CE0u);
    ctx->pc = 0x188CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CD8u;
    // 0x188cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDD8u, 0x188CD8u, 0x188CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CE0u;
label_188ce0:
    // 0x188ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ce4: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x188ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188ce8: 0xc04b946  jal         func_12E518
    ctx->pc = 0x188CE8u;
    SET_GPR_U32(ctx, 31, 0x188CF0u);
    ctx->pc = 0x188CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CE8u;
    // 0x188cec: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x188CE8u, 0x188CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CF0u;
label_188cf0:
    // 0x188cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cf4: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x188CF4u;
    SET_GPR_U32(ctx, 31, 0x188CFCu);
    ctx->pc = 0x188CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CF4u;
    // 0x188cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x188CF4u, 0x188CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CFCu;
label_188cfc:
    // 0x188cfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d00: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x188d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188d04: 0xc04b946  jal         func_12E518
    ctx->pc = 0x188D04u;
    SET_GPR_U32(ctx, 31, 0x188D0Cu);
    ctx->pc = 0x188D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D04u;
    // 0x188d08: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x188D04u, 0x188D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D0Cu;
label_188d0c:
    // 0x188d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d10: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x188D10u;
    SET_GPR_U32(ctx, 31, 0x188D18u);
    ctx->pc = 0x188D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D10u;
    // 0x188d14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x188D10u, 0x188D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D18u;
label_188d18:
    // 0x188d18: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x188d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x188d1c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x188d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x188d20: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x188d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
    // 0x188d24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x188d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x188d28: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x188d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x188d2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d30: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x188D30u;
    SET_GPR_U32(ctx, 31, 0x188D38u);
    ctx->pc = 0x188D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D30u;
    // 0x188d34: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x188D30u, 0x188D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D38u;
label_188d38:
    // 0x188d38: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x188D38u;
    SET_GPR_U32(ctx, 31, 0x188D40u);
    ctx->pc = 0x188D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D38u;
    // 0x188d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x188D38u, 0x188D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D40u;
label_188d40:
    // 0x188d40: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x188d40u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x188d44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d48: 0x0  nop
    ctx->pc = 0x188d48u;
    // NOP
    // 0x188d4c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x188d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188D50u;
    {
        const bool branch_taken_0x188d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188d50) {
            ctx->pc = 0x188D60u;
            goto label_188d60;
        }
    }
    ctx->pc = 0x188D58u;
    // 0x188d58: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x188d58u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x188d5c: 0x0  nop
    ctx->pc = 0x188d5cu;
    // NOP
label_188d60:
    // 0x188d60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188d64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d68: 0x0  nop
    ctx->pc = 0x188d68u;
    // NOP
    // 0x188d6c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x188d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x188D70u;
    {
        const bool branch_taken_0x188d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188d70) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D78u;
    // 0x188d78: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x188d78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x188d7c: 0x0  nop
    ctx->pc = 0x188d7cu;
    // NOP
label_188d80:
    // 0x188d80: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x188d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x188d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x188d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d8c: 0x4601b582  mul.s       $f22, $f22, $f1
    ctx->pc = 0x188d8cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x188d90: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x188d90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d94: 0x45010136  bc1t        . + 4 + (0x136 << 2)
    ctx->pc = 0x188D94u;
    {
        const bool branch_taken_0x188d94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188d94) {
            ctx->pc = 0x189270u;
            goto label_189270;
        }
    }
    ctx->pc = 0x188D9Cu;
    // 0x188d9c: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x188d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188da0: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x188da4: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x188da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x188dacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x188db0: 0x24a51430  addiu       $a1, $a1, 0x1430
    ctx->pc = 0x188db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5168));
    // 0x188db4: 0x24c61440  addiu       $a2, $a2, 0x1440
    ctx->pc = 0x188db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5184));
    // 0x188db8: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188dbc: 0xc062fcc  jal         func_18BF30
    ctx->pc = 0x188DBCu;
    SET_GPR_U32(ctx, 31, 0x188DC4u);
    ctx->pc = 0x188DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DBCu;
    // 0x188dc0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BF30u, 0x188DBCu, 0x188DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DC4u;
label_188dc4:
    // 0x188dc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188dc8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x188dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x188dcc: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x188dccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x188dd0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188dd4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x188dd8: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x188dd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188ddc: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x188ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x188de0: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x188de0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188de4: 0xc041290  jal         func_104A40
    ctx->pc = 0x188DE4u;
    SET_GPR_U32(ctx, 31, 0x188DECu);
    ctx->pc = 0x188DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DE4u;
    // 0x188de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x188DE4u, 0x188DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DECu;
label_188dec:
    // 0x188dec: 0xc041294  jal         func_104A50
    ctx->pc = 0x188DECu;
    SET_GPR_U32(ctx, 31, 0x188DF4u);
    ctx->pc = 0x188DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DECu;
    // 0x188df0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x188DECu, 0x188DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DF4u;
label_188df4:
    // 0x188df4: 0x8e850360  lw          $a1, 0x360($s4)
    ctx->pc = 0x188df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
    // 0x188df8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188dfc: 0xc041306  jal         func_104C18
    ctx->pc = 0x188DFCu;
    SET_GPR_U32(ctx, 31, 0x188E04u);
    ctx->pc = 0x188E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DFCu;
    // 0x188e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188DFCu, 0x188E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E04u;
label_188e04:
    // 0x188e04: 0x8e850364  lw          $a1, 0x364($s4)
    ctx->pc = 0x188e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 868)));
    // 0x188e08: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e0c: 0xc041306  jal         func_104C18
    ctx->pc = 0x188E0Cu;
    SET_GPR_U32(ctx, 31, 0x188E14u);
    ctx->pc = 0x188E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E0Cu;
    // 0x188e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188E0Cu, 0x188E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E14u;
label_188e14:
    // 0x188e14: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x188e18: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x188e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188e1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188e20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E20u;
    {
        const bool branch_taken_0x188e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E20u;
        // 0x188e24: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e20) {
            ctx->pc = 0x188E30u;
            goto label_188e30;
        }
    }
    ctx->pc = 0x188E28u;
    // 0x188e28: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x188E28u;
    {
        const bool branch_taken_0x188e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188e28) {
            ctx->pc = 0x188F68u;
            goto label_188f68;
        }
    }
    ctx->pc = 0x188E30u;
label_188e30:
    // 0x188e30: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x188e34: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x188e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x188e38: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e3c: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x188e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x188e40: 0xc041306  jal         func_104C18
    ctx->pc = 0x188E40u;
    SET_GPR_U32(ctx, 31, 0x188E48u);
    ctx->pc = 0x188E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E40u;
    // 0x188e44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188E40u, 0x188E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E48u;
label_188e48:
    // 0x188e48: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188e50: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188E50u;
    SET_GPR_U32(ctx, 31, 0x188E58u);
    ctx->pc = 0x188E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E50u;
    // 0x188e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188E50u, 0x188E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E58u;
label_188e58:
    // 0x188e58: 0x8fbe02b0  lw          $fp, 0x2B0($sp)
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188e5c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e64: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x188E64u;
    SET_GPR_U32(ctx, 31, 0x188E6Cu);
    ctx->pc = 0x188E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E64u;
    // 0x188e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x188E64u, 0x188E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E6Cu;
label_188e6c:
    // 0x188e6c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188e74: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188E74u;
    SET_GPR_U32(ctx, 31, 0x188E7Cu);
    ctx->pc = 0x188E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E74u;
    // 0x188e78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188E74u, 0x188E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E7Cu;
label_188e7c:
    // 0x188e7c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188e80: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e88: 0xc041338  jal         func_104CE0
    ctx->pc = 0x188E88u;
    SET_GPR_U32(ctx, 31, 0x188E90u);
    ctx->pc = 0x188E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E88u;
    // 0x188e8c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x188E88u, 0x188E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E90u;
label_188e90:
    // 0x188e90: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188e94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188e98: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188E98u;
    SET_GPR_U32(ctx, 31, 0x188EA0u);
    ctx->pc = 0x188E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E98u;
    // 0x188e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188E98u, 0x188EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EA0u;
label_188ea0:
    // 0x188ea0: 0xc041298  jal         func_104A60
    ctx->pc = 0x188EA0u;
    SET_GPR_U32(ctx, 31, 0x188EA8u);
    ctx->pc = 0x188EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EA0u;
    // 0x188ea4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x188EA0u, 0x188EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EA8u;
label_188ea8:
    // 0x188ea8: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x188eac: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x188eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x188eb0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x188eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x188eb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ebc: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x188ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x188ec0: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x188ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x188ec4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x188ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x188ec8: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x188ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x188ecc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x188eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x188ed0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x188ed4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188ed8: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x188ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x188edc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x188edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x188ee0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x188ee4: 0xc0a77a8  jal         func_29DEA0
    ctx->pc = 0x188EE4u;
    SET_GPR_U32(ctx, 31, 0x188EECu);
    ctx->pc = 0x188EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EE4u;
    // 0x188ee8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DEA0u, 0x188EE4u, 0x188EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EECu;
label_188eec:
    // 0x188eec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188ef0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x188ef4: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x188ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x188ef8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188efc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x188efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x188f00: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x188f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188f04: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x188f08: 0xc041290  jal         func_104A40
    ctx->pc = 0x188F08u;
    SET_GPR_U32(ctx, 31, 0x188F10u);
    ctx->pc = 0x188F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F08u;
    // 0x188f0c: 0x432824  and         $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x188F08u, 0x188F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F10u;
label_188f10:
    // 0x188f10: 0xc041294  jal         func_104A50
    ctx->pc = 0x188F10u;
    SET_GPR_U32(ctx, 31, 0x188F18u);
    ctx->pc = 0x188F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F10u;
    // 0x188f14: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x188F10u, 0x188F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F18u;
label_188f18:
    // 0x188f18: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x188f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188f1c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x188f20: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f28: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x188f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x188f2c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x188f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x188f30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x188f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x188f34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x188f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188f38: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x188f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x188f3c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x188F3Cu;
    SET_GPR_U32(ctx, 31, 0x188F44u);
    ctx->pc = 0x188F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F3Cu;
    // 0x188f40: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x188F3Cu, 0x188F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F44u;
label_188f44:
    // 0x188f44: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x188f48: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188f4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x188f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x188f50: 0x8c4502f0  lw          $a1, 0x2F0($v0)
    ctx->pc = 0x188f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x188f54: 0xc041306  jal         func_104C18
    ctx->pc = 0x188F54u;
    SET_GPR_U32(ctx, 31, 0x188F5Cu);
    ctx->pc = 0x188F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F54u;
    // 0x188f58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188F54u, 0x188F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F5Cu;
label_188f5c:
    // 0x188f5c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x188F5Cu;
    {
        const bool branch_taken_0x188f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f5c) {
            ctx->pc = 0x189098u;
            goto label_189098;
        }
    }
    ctx->pc = 0x188F64u;
    // 0x188f64: 0x0  nop
    ctx->pc = 0x188f64u;
    // NOP
label_188f68:
    // 0x188f68: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x188f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x188f6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x188f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x188f70: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188f74: 0x8c4502c0  lw          $a1, 0x2C0($v0)
    ctx->pc = 0x188f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x188f78: 0xc041306  jal         func_104C18
    ctx->pc = 0x188F78u;
    SET_GPR_U32(ctx, 31, 0x188F80u);
    ctx->pc = 0x188F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F78u;
    // 0x188f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x188F78u, 0x188F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F80u;
label_188f80:
    // 0x188f80: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188f84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188f88: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188F88u;
    SET_GPR_U32(ctx, 31, 0x188F90u);
    ctx->pc = 0x188F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F88u;
    // 0x188f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188F88u, 0x188F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F90u;
label_188f90:
    // 0x188f90: 0x8fbe02b0  lw          $fp, 0x2B0($sp)
    ctx->pc = 0x188f90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188f94: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f9c: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x188F9Cu;
    SET_GPR_U32(ctx, 31, 0x188FA4u);
    ctx->pc = 0x188FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F9Cu;
    // 0x188fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x188F9Cu, 0x188FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FA4u;
label_188fa4:
    // 0x188fa4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188fa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188fac: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188FACu;
    SET_GPR_U32(ctx, 31, 0x188FB4u);
    ctx->pc = 0x188FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FACu;
    // 0x188fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188FACu, 0x188FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FB4u;
label_188fb4:
    // 0x188fb4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x188fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x188fb8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188fc0: 0xc041338  jal         func_104CE0
    ctx->pc = 0x188FC0u;
    SET_GPR_U32(ctx, 31, 0x188FC8u);
    ctx->pc = 0x188FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FC0u;
    // 0x188fc4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x188FC0u, 0x188FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FC8u;
label_188fc8:
    // 0x188fc8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x188fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x188fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188fd0: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x188FD0u;
    SET_GPR_U32(ctx, 31, 0x188FD8u);
    ctx->pc = 0x188FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FD0u;
    // 0x188fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x188FD0u, 0x188FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FD8u;
label_188fd8:
    // 0x188fd8: 0xc041298  jal         func_104A60
    ctx->pc = 0x188FD8u;
    SET_GPR_U32(ctx, 31, 0x188FE0u);
    ctx->pc = 0x188FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FD8u;
    // 0x188fdc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x188FD8u, 0x188FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FE0u;
label_188fe0:
    // 0x188fe0: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x188fe4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x188fe8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x188fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x188fec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x188ff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ff4: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x188ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x188ff8: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x188ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x188ffc: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x188ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x189000: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x189000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x189004: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x189004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189008: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x189008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18900c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189010: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x189010u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x189014: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x189014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x189018: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x189018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18901c: 0xc0a77a8  jal         func_29DEA0
    ctx->pc = 0x18901Cu;
    SET_GPR_U32(ctx, 31, 0x189024u);
    ctx->pc = 0x189020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18901Cu;
    // 0x189020: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DEA0u, 0x18901Cu, 0x189024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189024u;
label_189024:
    // 0x189024: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x189024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x189028: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x189028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18902c: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x189030: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189034: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x189034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x189038: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x189038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18903c: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x18903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x189040: 0xc041290  jal         func_104A40
    ctx->pc = 0x189040u;
    SET_GPR_U32(ctx, 31, 0x189048u);
    ctx->pc = 0x189044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189040u;
    // 0x189044: 0x432824  and         $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x189040u, 0x189048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189048u;
label_189048:
    // 0x189048: 0xc041294  jal         func_104A50
    ctx->pc = 0x189048u;
    SET_GPR_U32(ctx, 31, 0x189050u);
    ctx->pc = 0x18904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189048u;
    // 0x18904c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x189048u, 0x189050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189050u;
label_189050:
    // 0x189050: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x189050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x189054: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x189054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x189058: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18905c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18905cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189060: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x189060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x189064: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x189064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x189068: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x189068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18906c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189070: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x189070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x189074: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x189074u;
    SET_GPR_U32(ctx, 31, 0x18907Cu);
    ctx->pc = 0x189078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189074u;
    // 0x189078: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x189074u, 0x18907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18907Cu;
label_18907c:
    // 0x18907c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x189080: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189084: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x189088: 0x8c4502e0  lw          $a1, 0x2E0($v0)
    ctx->pc = 0x189088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x18908c: 0xc041306  jal         func_104C18
    ctx->pc = 0x18908Cu;
    SET_GPR_U32(ctx, 31, 0x189094u);
    ctx->pc = 0x189090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18908Cu;
    // 0x189090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18908Cu, 0x189094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189094u;
label_189094:
    // 0x189094: 0x0  nop
    ctx->pc = 0x189094u;
    // NOP
label_189098:
    // 0x189098: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18909c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18909Cu;
    SET_GPR_U32(ctx, 31, 0x1890A4u);
    ctx->pc = 0x1890A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18909Cu;
    // 0x1890a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18909Cu, 0x1890A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890A4u;
label_1890a4:
    // 0x1890a4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1890a8: 0xc041386  jal         func_104E18
    ctx->pc = 0x1890A8u;
    SET_GPR_U32(ctx, 31, 0x1890B0u);
    ctx->pc = 0x1890ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890A8u;
    // 0x1890ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x1890A8u, 0x1890B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890B0u;
label_1890b0:
    // 0x1890b0: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x1890b0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1890b4: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x1890b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1890b8: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1890b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1890bc: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x1890bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1890c0: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1890c4: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x1890c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x1890c8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1890c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1890cc: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x1890ccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x1890d0: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1890d4: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x1890d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1890d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1890d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1890dc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1890dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1890e0: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x1890e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x1890e4: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x1890e4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1890e8: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x1890e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1890ec: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x1890ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x1890f0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1890f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1890f4: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x1890f4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x1890f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1890f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1890fc: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x1890fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x189100: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x189100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x189104: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x189104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x189108: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x189108u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18910c: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18910cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x189110: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x189110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x189114: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x189114u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x189118: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x189118u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18911c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189120: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x189120u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x189124: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x189124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x189128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18912c: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18912cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x189130: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x189130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x189134: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x189134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x189138: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x189138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18913c: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18913cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x189140: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189144: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x189144u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x189148: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x189148u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18914c: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18914Cu;
    SET_GPR_U32(ctx, 31, 0x189154u);
    ctx->pc = 0x189150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18914Cu;
    // 0x189150: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18914Cu, 0x189154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189154u;
label_189154:
    // 0x189154: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x189154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x189158: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18915c: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x18915cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x189160: 0xdc460040  ld          $a2, 0x40($v0)
    ctx->pc = 0x189160u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x189164: 0xc041418  jal         func_105060
    ctx->pc = 0x189164u;
    SET_GPR_U32(ctx, 31, 0x18916Cu);
    ctx->pc = 0x189168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189164u;
    // 0x189168: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189164u, 0x18916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18916Cu;
label_18916c:
    // 0x18916c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18916Cu;
    SET_GPR_U32(ctx, 31, 0x189174u);
    ctx->pc = 0x189170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18916Cu;
    // 0x189170: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18916Cu, 0x189174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189174u;
label_189174:
    // 0x189174: 0xc04139c  jal         func_104E70
    ctx->pc = 0x189174u;
    SET_GPR_U32(ctx, 31, 0x18917Cu);
    ctx->pc = 0x189178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189174u;
    // 0x189178: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x189174u, 0x18917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18917Cu;
label_18917c:
    // 0x18917c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18917Cu;
    {
        const bool branch_taken_0x18917c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18917Cu;
        // 0x189180: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18917c) {
            ctx->pc = 0x1891F8u;
            goto label_1891f8;
        }
    }
    ctx->pc = 0x189184u;
    // 0x189184: 0x0  nop
    ctx->pc = 0x189184u;
    // NOP
label_189188:
    // 0x189188: 0x8e82031c  lw          $v0, 0x31C($s4)
    ctx->pc = 0x189188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
    // 0x18918c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18918Cu;
    {
        const bool branch_taken_0x18918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18918c) {
            ctx->pc = 0x1891C8u;
            goto label_1891c8;
        }
    }
    ctx->pc = 0x189194u;
    // 0x189194: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x189194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x189198: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18919c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1891a0: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1891a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1891a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1891a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1891a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1891ac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1891acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1891b0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1891b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1891b4: 0xc05f45c  jal         func_17D170
    ctx->pc = 0x1891B4u;
    SET_GPR_U32(ctx, 31, 0x1891BCu);
    ctx->pc = 0x1891B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891B4u;
    // 0x1891b8: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D170u, 0x1891B4u, 0x1891BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891BCu;
label_1891bc:
    // 0x1891bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1891BCu;
    {
        const bool branch_taken_0x1891bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891bc) {
            ctx->pc = 0x1891F0u;
            goto label_1891f0;
        }
    }
    ctx->pc = 0x1891C4u;
    // 0x1891c4: 0x0  nop
    ctx->pc = 0x1891c4u;
    // NOP
label_1891c8:
    // 0x1891c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1891c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1891cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1891ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1891d0: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1891d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1891d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1891d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1891d8: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1891d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1891dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1891e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1891e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1891e4: 0xc05f45c  jal         func_17D170
    ctx->pc = 0x1891E4u;
    SET_GPR_U32(ctx, 31, 0x1891ECu);
    ctx->pc = 0x1891E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891E4u;
    // 0x1891e8: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D170u, 0x1891E4u, 0x1891ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891ECu;
label_1891ec:
    // 0x1891ec: 0x0  nop
    ctx->pc = 0x1891ecu;
    // NOP
label_1891f0:
    // 0x1891f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1891f4: 0x0  nop
    ctx->pc = 0x1891f4u;
    // NOP
label_1891f8:
    // 0x1891f8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1891fc: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x1891fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x189200: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x189200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189204: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x189204u;
    {
        const bool branch_taken_0x189204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189204u;
        // 0x189208: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189204) {
            ctx->pc = 0x189188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189188;
        }
    }
    ctx->pc = 0x18920Cu;
    // 0x18920c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189210: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x189210u;
    SET_GPR_U32(ctx, 31, 0x189218u);
    ctx->pc = 0x189214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189210u;
    // 0x189214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x189210u, 0x189218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189218u;
label_189218:
    // 0x189218: 0x8fb002b0  lw          $s0, 0x2B0($sp)
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18921c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189220: 0xc041338  jal         func_104CE0
    ctx->pc = 0x189220u;
    SET_GPR_U32(ctx, 31, 0x189228u);
    ctx->pc = 0x189224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189220u;
    // 0x189224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x189220u, 0x189228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189228u;
label_189228:
    // 0x189228: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18922c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189230: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x189230u;
    SET_GPR_U32(ctx, 31, 0x189238u);
    ctx->pc = 0x189234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189230u;
    // 0x189234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x189230u, 0x189238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189238u;
label_189238:
    // 0x189238: 0xc041298  jal         func_104A60
    ctx->pc = 0x189238u;
    SET_GPR_U32(ctx, 31, 0x189240u);
    ctx->pc = 0x18923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189238u;
    // 0x18923c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x189238u, 0x189240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189240u;
label_189240:
    // 0x189240: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x189244: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x189248: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18924c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x189250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x189254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189258: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x189258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18925c: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x18925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x189260: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x189260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x189264: 0xc061c60  jal         func_187180
    ctx->pc = 0x189264u;
    SET_GPR_U32(ctx, 31, 0x18926Cu);
    ctx->pc = 0x189268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189264u;
    // 0x189268: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x189264u, 0x18926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18926Cu;
label_18926c:
    // 0x18926c: 0x0  nop
    ctx->pc = 0x18926cu;
    // NOP
label_189270:
    // 0x189270: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x189270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x189274: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189278: 0x1000fd8d  b           . + 4 + (-0x273 << 2)
    ctx->pc = 0x189278u;
    {
        const bool branch_taken_0x189278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189278u;
        // 0x18927c: 0xaf838678  sw          $v1, -0x7988($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189278) {
            ctx->pc = 0x1888B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1888b0;
        }
    }
    ctx->pc = 0x189280u;
label_189280:
    // 0x189280: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x189284: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x189288: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x189288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18928c: 0x10600150  beqz        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x18928Cu;
    {
        const bool branch_taken_0x18928c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18928c) {
            ctx->pc = 0x1897D0u;
            goto label_1897d0;
        }
    }
    ctx->pc = 0x189294u;
    // 0x189294: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x189294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189298: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18929c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1892a0: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x1892a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1892a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1892a8: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x1892ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1892acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892b0: 0x24a51430  addiu       $a1, $a1, 0x1430
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5168));
    // 0x1892b4: 0x24c61440  addiu       $a2, $a2, 0x1440
    ctx->pc = 0x1892b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5184));
    // 0x1892b8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1892b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1892bc: 0xe4201430  swc1        $f0, 0x1430($at)
    ctx->pc = 0x1892bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841430u, _value); } while (0); }
    // 0x1892c0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1892c4: 0xc4221430  lwc1        $f2, 0x1430($at)
    ctx->pc = 0x1892c4u;
    { uint32_t bits = FAST_READ32(0x841430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1892c8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1892c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1892cc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1892d0: 0xe4201434  swc1        $f0, 0x1434($at)
    ctx->pc = 0x1892d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841434u, _value); } while (0); }
    // 0x1892d4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1892d8: 0xc4211434  lwc1        $f1, 0x1434($at)
    ctx->pc = 0x1892d8u;
    { uint32_t bits = FAST_READ32(0x841434u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1892dc: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1892dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1892e0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1892e4: 0xe4201438  swc1        $f0, 0x1438($at)
    ctx->pc = 0x1892e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841438u, _value); } while (0); }
    // 0x1892e8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1892ec: 0xc4201438  lwc1        $f0, 0x1438($at)
    ctx->pc = 0x1892ecu;
    { uint32_t bits = FAST_READ32(0x841438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1892f0: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x1892f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1892f4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1892f8: 0xe4231440  swc1        $f3, 0x1440($at)
    ctx->pc = 0x1892f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841440u, _value); } while (0); }
    // 0x1892fc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1892fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x189300: 0xc4231440  lwc1        $f3, 0x1440($at)
    ctx->pc = 0x189300u;
    { uint32_t bits = FAST_READ32(0x841440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189304: 0xc4e40018  lwc1        $f4, 0x18($a3)
    ctx->pc = 0x189304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x189308: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x189308u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18930c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x189310: 0xe4241444  swc1        $f4, 0x1444($at)
    ctx->pc = 0x189310u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841444u, _value); } while (0); }
    // 0x189314: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x189314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x189318: 0xc4221444  lwc1        $f2, 0x1444($at)
    ctx->pc = 0x189318u;
    { uint32_t bits = FAST_READ32(0x841444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18931c: 0xc4e4001c  lwc1        $f4, 0x1C($a3)
    ctx->pc = 0x18931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x189320: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x189324: 0xe4241448  swc1        $f4, 0x1448($at)
    ctx->pc = 0x189324u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841448u, _value); } while (0); }
    // 0x189328: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18932c: 0xe4231450  swc1        $f3, 0x1450($at)
    ctx->pc = 0x18932cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841450u, _value); } while (0); }
    // 0x189330: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x189330u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x189334: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x189334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x189338: 0xc4211448  lwc1        $f1, 0x1448($at)
    ctx->pc = 0x189338u;
    { uint32_t bits = FAST_READ32(0x841448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18933c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x189340: 0xe4221454  swc1        $f2, 0x1454($at)
    ctx->pc = 0x189340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841454u, _value); } while (0); }
    // 0x189344: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189348: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18934c: 0xe4201458  swc1        $f0, 0x1458($at)
    ctx->pc = 0x18934cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x841458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x841458u, _value); } while (0); }
    // 0x189350: 0xc4ec0020  lwc1        $f12, 0x20($a3)
    ctx->pc = 0x189350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x189354: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x189358: 0xc062e58  jal         func_18B960
    ctx->pc = 0x189358u;
    SET_GPR_U32(ctx, 31, 0x189360u);
    ctx->pc = 0x18935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189358u;
    // 0x18935c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B960u, 0x189358u, 0x189360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189360u;
label_189360:
    // 0x189360: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x189364: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189368: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x189368u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18936c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189370: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x189374: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x189374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189378: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x189378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x18937c: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189380: 0xc041290  jal         func_104A40
    ctx->pc = 0x189380u;
    SET_GPR_U32(ctx, 31, 0x189388u);
    ctx->pc = 0x189384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189380u;
    // 0x189384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x189380u, 0x189388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189388u;
label_189388:
    // 0x189388: 0xc041294  jal         func_104A50
    ctx->pc = 0x189388u;
    SET_GPR_U32(ctx, 31, 0x189390u);
    ctx->pc = 0x18938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189388u;
    // 0x18938c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x189388u, 0x189390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189390u;
label_189390:
    // 0x189390: 0x8e850360  lw          $a1, 0x360($s4)
    ctx->pc = 0x189390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
    // 0x189394: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189398: 0xc041306  jal         func_104C18
    ctx->pc = 0x189398u;
    SET_GPR_U32(ctx, 31, 0x1893A0u);
    ctx->pc = 0x18939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189398u;
    // 0x18939c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x189398u, 0x1893A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893A0u;
label_1893a0:
    // 0x1893a0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1893a4: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x1893A4u;
    SET_GPR_U32(ctx, 31, 0x1893ACu);
    ctx->pc = 0x1893A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893A4u;
    // 0x1893a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x1893A4u, 0x1893ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893ACu;
label_1893ac:
    // 0x1893ac: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1893b0: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x1893B0u;
    SET_GPR_U32(ctx, 31, 0x1893B8u);
    ctx->pc = 0x1893B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893B0u;
    // 0x1893b4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x1893B0u, 0x1893B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893B8u;
label_1893b8:
    // 0x1893b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1893bc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x1893BCu;
    SET_GPR_U32(ctx, 31, 0x1893C4u);
    ctx->pc = 0x1893C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893BCu;
    // 0x1893c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x1893BCu, 0x1893C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893C4u;
label_1893c4:
    // 0x1893c4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1893c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1893c8: 0xc041386  jal         func_104E18
    ctx->pc = 0x1893C8u;
    SET_GPR_U32(ctx, 31, 0x1893D0u);
    ctx->pc = 0x1893CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893C8u;
    // 0x1893cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x1893C8u, 0x1893D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893D0u;
label_1893d0:
    // 0x1893d0: 0x97ac0270  lhu         $t4, 0x270($sp)
    ctx->pc = 0x1893d0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1893d4: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x1893d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1893d8: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1893d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1893dc: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x1893dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1893e0: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x1893e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1893e4: 0x93a60277  lbu         $a2, 0x277($sp)
    ctx->pc = 0x1893e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 631)));
    // 0x1893e8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1893e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1893ec: 0x93aa0275  lbu         $t2, 0x275($sp)
    ctx->pc = 0x1893ecu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 629)));
    // 0x1893f0: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x1893f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1893f4: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x1893f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1893f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1893f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1893fc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x189400: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x189400u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x189404: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x189404u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x189408: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x189408u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18940c: 0xa7ab0270  sh          $t3, 0x270($sp)
    ctx->pc = 0x18940cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 624), (uint16_t)GPR_U32(ctx, 11));
    // 0x189410: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x189410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x189414: 0x93ab0271  lbu         $t3, 0x271($sp)
    ctx->pc = 0x189414u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 625)));
    // 0x189418: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x189418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18941c: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18941cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x189420: 0xa3a40277  sb          $a0, 0x277($sp)
    ctx->pc = 0x189420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 631), (uint8_t)GPR_U32(ctx, 4));
    // 0x189424: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x189424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x189428: 0x93aa0277  lbu         $t2, 0x277($sp)
    ctx->pc = 0x189428u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 631)));
    // 0x18942c: 0xa3a70275  sb          $a3, 0x275($sp)
    ctx->pc = 0x18942cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 629), (uint8_t)GPR_U32(ctx, 7));
    // 0x189430: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x189434: 0x93a70278  lbu         $a3, 0x278($sp)
    ctx->pc = 0x189434u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x189438: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x189438u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18943c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189440: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x189440u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x189444: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x189444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x189448: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18944c: 0xa3a20271  sb          $v0, 0x271($sp)
    ctx->pc = 0x18944cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 625), (uint8_t)GPR_U32(ctx, 2));
    // 0x189450: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x189450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x189454: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x189454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x189458: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x189458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18945c: 0xa3a30277  sb          $v1, 0x277($sp)
    ctx->pc = 0x18945cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 631), (uint8_t)GPR_U32(ctx, 3));
    // 0x189460: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189464: 0xa3a20278  sb          $v0, 0x278($sp)
    ctx->pc = 0x189464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 632), (uint8_t)GPR_U32(ctx, 2));
    // 0x189468: 0x7ba50270  lq          $a1, 0x270($sp)
    ctx->pc = 0x189468u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x18946c: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18946Cu;
    SET_GPR_U32(ctx, 31, 0x189474u);
    ctx->pc = 0x189470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18946Cu;
    // 0x189470: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18946Cu, 0x189474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189474u;
label_189474:
    // 0x189474: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x189474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x189478: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x189478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18947c: 0x90450024  lbu         $a1, 0x24($v0)
    ctx->pc = 0x18947cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x189480: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x189480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x189484: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x189484u;
    SET_GPR_U32(ctx, 31, 0x18948Cu);
    ctx->pc = 0x189488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189484u;
    // 0x189488: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x189484u, 0x18948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18948Cu;
label_18948c:
    // 0x18948c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x18948cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189490: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189494: 0xc041418  jal         func_105060
    ctx->pc = 0x189494u;
    SET_GPR_U32(ctx, 31, 0x18949Cu);
    ctx->pc = 0x189498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189494u;
    // 0x189498: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189494u, 0x18949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18949Cu;
label_18949c:
    // 0x18949c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1894a0: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1894a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1894a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1894a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1894a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1894A8u;
    {
        const bool branch_taken_0x1894a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894A8u;
        // 0x1894ac: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894a8) {
            ctx->pc = 0x1894B8u;
            goto label_1894b8;
        }
    }
    ctx->pc = 0x1894B0u;
    // 0x1894b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1894B0u;
    {
        const bool branch_taken_0x1894b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B0u;
        // 0x1894b4: 0x34430040  ori         $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b0) {
            ctx->pc = 0x1894C0u;
            goto label_1894c0;
        }
    }
    ctx->pc = 0x1894B8u;
label_1894b8:
    // 0x1894b8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1894b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1894bc: 0x0  nop
    ctx->pc = 0x1894bcu;
    // NOP
label_1894c0:
    // 0x1894c0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1894c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1894c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1894c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1894c8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1894c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1894cc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1894ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1894d0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1894d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1894d4: 0xc041418  jal         func_105060
    ctx->pc = 0x1894D4u;
    SET_GPR_U32(ctx, 31, 0x1894DCu);
    ctx->pc = 0x1894D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894D4u;
    // 0x1894d8: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1894D4u, 0x1894DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894DCu;
label_1894dc:
    // 0x1894dc: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1894e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1894e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1894e4: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x1894e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1894e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1894e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1894ec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1894ECu;
    {
        const bool branch_taken_0x1894ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0x41c02  srl         $v1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894ec) {
            ctx->pc = 0x189580u;
            goto label_189580;
        }
    }
    ctx->pc = 0x1894F4u;
    // 0x1894f4: 0x41502  srl         $v0, $a0, 20
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 20));
    // 0x1894f8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1894f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1894fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1894fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x189500: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x189504: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x189504u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x189508: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x18950c: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x18950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x189510: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x189510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x189514: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x189514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x189518: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x189518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18951c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x189520: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x189520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x189524: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x189524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x189528: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x189528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18952c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x189530: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x189530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x189534: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x189534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x189538: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x189538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x18953c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x18953cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x189540: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x189540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189544: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x189544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x189548: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x189548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x18954c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18954cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x189550: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x189550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x189554: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x189554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x189558: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x189558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x18955c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x189560: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x189560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x189564: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189568: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x189568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18956c: 0xc041418  jal         func_105060
    ctx->pc = 0x18956Cu;
    SET_GPR_U32(ctx, 31, 0x189574u);
    ctx->pc = 0x189570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18956Cu;
    // 0x189570: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18956Cu, 0x189574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189574u;
label_189574:
    // 0x189574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x189574u;
    {
        const bool branch_taken_0x189574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189574) {
            ctx->pc = 0x189590u;
            goto label_189590;
        }
    }
    ctx->pc = 0x18957Cu;
    // 0x18957c: 0x0  nop
    ctx->pc = 0x18957cu;
    // NOP
label_189580:
    // 0x189580: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189584: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189588: 0xc041418  jal         func_105060
    ctx->pc = 0x189588u;
    SET_GPR_U32(ctx, 31, 0x189590u);
    ctx->pc = 0x18958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189588u;
    // 0x18958c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189588u, 0x189590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189590u;
label_189590:
    // 0x189590: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x189590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x189594: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x189594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x189598: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x189598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x18959c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x18959cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1895a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1895A0u;
    {
        const bool branch_taken_0x1895a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1895a0) {
            ctx->pc = 0x1895D0u;
            goto label_1895d0;
        }
    }
    ctx->pc = 0x1895A8u;
    // 0x1895a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1895A8u;
    {
        const bool branch_taken_0x1895a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895a8) {
            ctx->pc = 0x1895B8u;
            goto label_1895b8;
        }
    }
    ctx->pc = 0x1895B0u;
    // 0x1895b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1895B0u;
    {
        const bool branch_taken_0x1895b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895b0) {
            ctx->pc = 0x1895E0u;
            goto label_1895e0;
        }
    }
    ctx->pc = 0x1895B8u;
label_1895b8:
    // 0x1895b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1895b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1895bc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1895c0: 0xc041418  jal         func_105060
    ctx->pc = 0x1895C0u;
    SET_GPR_U32(ctx, 31, 0x1895C8u);
    ctx->pc = 0x1895C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895C0u;
    // 0x1895c4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1895C0u, 0x1895C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895C8u;
label_1895c8:
    // 0x1895c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1895C8u;
    {
        const bool branch_taken_0x1895c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895c8) {
            ctx->pc = 0x1895E0u;
            goto label_1895e0;
        }
    }
    ctx->pc = 0x1895D0u;
label_1895d0:
    // 0x1895d0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1895d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1895d4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1895d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1895d8: 0xc041418  jal         func_105060
    ctx->pc = 0x1895D8u;
    SET_GPR_U32(ctx, 31, 0x1895E0u);
    ctx->pc = 0x1895DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895D8u;
    // 0x1895dc: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1895D8u, 0x1895E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895E0u;
label_1895e0:
    // 0x1895e0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1895e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1895e4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1895e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1895e8: 0xc041418  jal         func_105060
    ctx->pc = 0x1895E8u;
    SET_GPR_U32(ctx, 31, 0x1895F0u);
    ctx->pc = 0x1895ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895E8u;
    // 0x1895ec: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1895E8u, 0x1895F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895F0u;
label_1895f0:
    // 0x1895f0: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x1895F0u;
    SET_GPR_U32(ctx, 31, 0x1895F8u);
    ctx->pc = 0x1895F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895F0u;
    // 0x1895f4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x1895F0u, 0x1895F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895F8u;
label_1895f8:
    // 0x1895f8: 0xc04139c  jal         func_104E70
    ctx->pc = 0x1895F8u;
    SET_GPR_U32(ctx, 31, 0x189600u);
    ctx->pc = 0x1895FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895F8u;
    // 0x1895fc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x1895F8u, 0x189600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189600u;
label_189600:
    // 0x189600: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x189600u;
    {
        const bool branch_taken_0x189600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189600u;
        // 0x189604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189600) {
            ctx->pc = 0x189678u;
            goto label_189678;
        }
    }
    ctx->pc = 0x189608u;
label_189608:
    // 0x189608: 0x8e82031c  lw          $v0, 0x31C($s4)
    ctx->pc = 0x189608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
    // 0x18960c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18960Cu;
    {
        const bool branch_taken_0x18960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18960c) {
            ctx->pc = 0x189648u;
            goto label_189648;
        }
    }
    ctx->pc = 0x189614u;
    // 0x189614: 0x8f828674  lw          $v0, -0x798C($gp)
    ctx->pc = 0x189614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x189618: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x189618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18961c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x189620: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x189620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189624: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x189628: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18962c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x189630: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x189630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189634: 0xc05f45c  jal         func_17D170
    ctx->pc = 0x189634u;
    SET_GPR_U32(ctx, 31, 0x18963Cu);
    ctx->pc = 0x189638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189634u;
    // 0x189638: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D170u, 0x189634u, 0x18963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18963Cu;
label_18963c:
    // 0x18963c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18963Cu;
    {
        const bool branch_taken_0x18963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18963c) {
            ctx->pc = 0x189670u;
            goto label_189670;
        }
    }
    ctx->pc = 0x189644u;
    // 0x189644: 0x0  nop
    ctx->pc = 0x189644u;
    // NOP
label_189648:
    // 0x189648: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x189648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18964c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189650: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189654: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x189654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x189658: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x18965c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189660: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x189660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x189664: 0xc05f45c  jal         func_17D170
    ctx->pc = 0x189664u;
    SET_GPR_U32(ctx, 31, 0x18966Cu);
    ctx->pc = 0x189668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189664u;
    // 0x189668: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D170u, 0x189664u, 0x18966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18966Cu;
label_18966c:
    // 0x18966c: 0x0  nop
    ctx->pc = 0x18966cu;
    // NOP
label_189670:
    // 0x189670: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x189674: 0x0  nop
    ctx->pc = 0x189674u;
    // NOP
label_189678:
    // 0x189678: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x189678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x18967c: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x18967cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x189680: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x189680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189684: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x189684u;
    {
        const bool branch_taken_0x189684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189684u;
        // 0x189688: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189684) {
            ctx->pc = 0x189608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189608;
        }
    }
    ctx->pc = 0x18968Cu;
    // 0x18968c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18968Cu;
    SET_GPR_U32(ctx, 31, 0x189694u);
    ctx->pc = 0x189690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18968Cu;
    // 0x189690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18968Cu, 0x189694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189694u;
label_189694:
    // 0x189694: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189698: 0xc041386  jal         func_104E18
    ctx->pc = 0x189698u;
    SET_GPR_U32(ctx, 31, 0x1896A0u);
    ctx->pc = 0x18969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189698u;
    // 0x18969c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x189698u, 0x1896A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896A0u;
label_1896a0:
    // 0x1896a0: 0x97ac0270  lhu         $t4, 0x270($sp)
    ctx->pc = 0x1896a0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1896a4: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x1896a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1896a8: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1896a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1896ac: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x1896acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1896b0: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x1896b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1896b4: 0x93a60277  lbu         $a2, 0x277($sp)
    ctx->pc = 0x1896b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 631)));
    // 0x1896b8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1896b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1896bc: 0x93aa0275  lbu         $t2, 0x275($sp)
    ctx->pc = 0x1896bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 629)));
    // 0x1896c0: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x1896c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1896c4: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x1896c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1896c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1896c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1896cc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1896ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1896d0: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x1896d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x1896d4: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x1896d4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1896d8: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x1896d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1896dc: 0xa7ab0270  sh          $t3, 0x270($sp)
    ctx->pc = 0x1896dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 624), (uint16_t)GPR_U32(ctx, 11));
    // 0x1896e0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1896e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1896e4: 0x93ab0271  lbu         $t3, 0x271($sp)
    ctx->pc = 0x1896e4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 625)));
    // 0x1896e8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1896e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1896ec: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x1896ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1896f0: 0xa3a40277  sb          $a0, 0x277($sp)
    ctx->pc = 0x1896f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 631), (uint8_t)GPR_U32(ctx, 4));
    // 0x1896f4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1896f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1896f8: 0x93aa0277  lbu         $t2, 0x277($sp)
    ctx->pc = 0x1896f8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 631)));
    // 0x1896fc: 0xa3a70275  sb          $a3, 0x275($sp)
    ctx->pc = 0x1896fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 629), (uint8_t)GPR_U32(ctx, 7));
    // 0x189700: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x189700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x189704: 0x93a70278  lbu         $a3, 0x278($sp)
    ctx->pc = 0x189704u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x189708: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x189708u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18970c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189710: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x189710u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x189714: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x189714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x189718: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18971c: 0xa3a20271  sb          $v0, 0x271($sp)
    ctx->pc = 0x18971cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 625), (uint8_t)GPR_U32(ctx, 2));
    // 0x189720: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x189720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x189724: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x189724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x189728: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x189728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18972c: 0xa3a30277  sb          $v1, 0x277($sp)
    ctx->pc = 0x18972cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 631), (uint8_t)GPR_U32(ctx, 3));
    // 0x189730: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189734: 0xa3a20278  sb          $v0, 0x278($sp)
    ctx->pc = 0x189734u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 632), (uint8_t)GPR_U32(ctx, 2));
    // 0x189738: 0x7ba50270  lq          $a1, 0x270($sp)
    ctx->pc = 0x189738u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x18973c: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18973Cu;
    SET_GPR_U32(ctx, 31, 0x189744u);
    ctx->pc = 0x189740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18973Cu;
    // 0x189740: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18973Cu, 0x189744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189744u;
label_189744:
    // 0x189744: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x189744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x189748: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18974c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x189750: 0xc041418  jal         func_105060
    ctx->pc = 0x189750u;
    SET_GPR_U32(ctx, 31, 0x189758u);
    ctx->pc = 0x189754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189750u;
    // 0x189754: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189750u, 0x189758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189758u;
label_189758:
    // 0x189758: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x189758u;
    SET_GPR_U32(ctx, 31, 0x189760u);
    ctx->pc = 0x18975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189758u;
    // 0x18975c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x189758u, 0x189760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189760u;
label_189760:
    // 0x189760: 0xc04139c  jal         func_104E70
    ctx->pc = 0x189760u;
    SET_GPR_U32(ctx, 31, 0x189768u);
    ctx->pc = 0x189764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189760u;
    // 0x189764: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x189760u, 0x189768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189768u;
label_189768:
    // 0x189768: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18976c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189770: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x189770u;
    SET_GPR_U32(ctx, 31, 0x189778u);
    ctx->pc = 0x189774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189770u;
    // 0x189774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x189770u, 0x189778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189778u;
label_189778:
    // 0x189778: 0x8fb002b0  lw          $s0, 0x2B0($sp)
    ctx->pc = 0x189778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18977c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189780: 0xc041338  jal         func_104CE0
    ctx->pc = 0x189780u;
    SET_GPR_U32(ctx, 31, 0x189788u);
    ctx->pc = 0x189784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189780u;
    // 0x189784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x189780u, 0x189788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189788u;
label_189788:
    // 0x189788: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18978c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189790: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x189790u;
    SET_GPR_U32(ctx, 31, 0x189798u);
    ctx->pc = 0x189794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189790u;
    // 0x189794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x189790u, 0x189798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189798u;
label_189798:
    // 0x189798: 0xc041298  jal         func_104A60
    ctx->pc = 0x189798u;
    SET_GPR_U32(ctx, 31, 0x1897A0u);
    ctx->pc = 0x18979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189798u;
    // 0x18979c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x189798u, 0x1897A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897A0u;
label_1897a0:
    // 0x1897a0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1897a4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1897a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1897a8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1897ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1897acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1897b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1897b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1897b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1897b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897bc: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1897bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1897c0: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x1897c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x1897c4: 0xc061c60  jal         func_187180
    ctx->pc = 0x1897C4u;
    SET_GPR_U32(ctx, 31, 0x1897CCu);
    ctx->pc = 0x1897C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897C4u;
    // 0x1897c8: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1897C4u, 0x1897CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897CCu;
label_1897cc:
    // 0x1897cc: 0x0  nop
    ctx->pc = 0x1897ccu;
    // NOP
label_1897d0:
    // 0x1897d0: 0x8f848674  lw          $a0, -0x798C($gp)
    ctx->pc = 0x1897d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1897d4: 0x8f838670  lw          $v1, -0x7990($gp)
    ctx->pc = 0x1897d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x1897d8: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x1897d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1897dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1897dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1897e0: 0xaf848674  sw          $a0, -0x798C($gp)
    ctx->pc = 0x1897e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 4));
    // 0x1897e4: 0xaf838670  sw          $v1, -0x7990($gp)
    ctx->pc = 0x1897e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 3));
label_1897e8:
    // 0x1897e8: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x1897e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1897ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1897ECu;
    {
        const bool branch_taken_0x1897ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897ec) {
            ctx->pc = 0x189800u;
            goto label_189800;
        }
    }
    ctx->pc = 0x1897F4u;
    // 0x1897f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1897f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1897f8: 0x1460f9dd  bnez        $v1, . + 4 + (-0x623 << 2)
    ctx->pc = 0x1897F8u;
    {
        const bool branch_taken_0x1897f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1897f8) {
            ctx->pc = 0x187F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f70;
        }
    }
    ctx->pc = 0x189800u;
label_189800:
    // 0x189800: 0x8e830318  lw          $v1, 0x318($s4)
    ctx->pc = 0x189800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
    // 0x189804: 0x10600724  beqz        $v1, . + 4 + (0x724 << 2)
    ctx->pc = 0x189804u;
    {
        const bool branch_taken_0x189804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x189808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189804u;
        // 0x189808: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189804) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x18980Cu;
    // 0x18980c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x189810: 0x8c24cee0  lw          $a0, -0x3120($at)
    ctx->pc = 0x189810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954720)));
    // 0x189814: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x189818: 0x1460071f  bnez        $v1, . + 4 + (0x71F << 2)
    ctx->pc = 0x189818u;
    {
        const bool branch_taken_0x189818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189818) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x189820u;
    // 0x189820: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x189820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x189824: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x189824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189828: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x189828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18982c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x189830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189834: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x189834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x189838: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x189838u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18983c: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x18983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x189840: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x189840u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189844: 0xc041290  jal         func_104A40
    ctx->pc = 0x189844u;
    SET_GPR_U32(ctx, 31, 0x18984Cu);
    ctx->pc = 0x189848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189844u;
    // 0x189848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x189844u, 0x18984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18984Cu;
label_18984c:
    // 0x18984c: 0xc041294  jal         func_104A50
    ctx->pc = 0x18984Cu;
    SET_GPR_U32(ctx, 31, 0x189854u);
    ctx->pc = 0x189850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18984Cu;
    // 0x189850: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18984Cu, 0x189854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189854u;
label_189854:
    // 0x189854: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189858: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x189858u;
    SET_GPR_U32(ctx, 31, 0x189860u);
    ctx->pc = 0x18985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189858u;
    // 0x18985c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x189858u, 0x189860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189860u;
label_189860:
    // 0x189860: 0x100006f1  b           . + 4 + (0x6F1 << 2)
    ctx->pc = 0x189860u;
    {
        const bool branch_taken_0x189860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189860u;
        // 0x189864: 0x8e900318  lw          $s0, 0x318($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189860) {
            ctx->pc = 0x18B428u;
            goto label_18b428;
        }
    }
    ctx->pc = 0x189868u;
label_189868:
    // 0x189868: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18986c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x18986cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x189870: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x189870u;
    SET_GPR_U32(ctx, 31, 0x189878u);
    ctx->pc = 0x189874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189870u;
    // 0x189874: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x189870u, 0x189878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189878u;
label_189878:
    // 0x189878: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18987c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18987Cu;
    SET_GPR_U32(ctx, 31, 0x189884u);
    ctx->pc = 0x189880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18987Cu;
    // 0x189880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18987Cu, 0x189884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189884u;
label_189884:
    // 0x189884: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x189888: 0x24020504  addiu       $v0, $zero, 0x504
    ctx->pc = 0x189888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x18988c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x18988cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x189890: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189890u;
    {
        const bool branch_taken_0x189890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189890u;
        // 0x189894: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189890) {
            ctx->pc = 0x1898A0u;
            goto label_1898a0;
        }
    }
    ctx->pc = 0x189898u;
    // 0x189898: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x189898u;
    {
        const bool branch_taken_0x189898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189898) {
            ctx->pc = 0x189AA0u;
            goto label_189aa0;
        }
    }
    ctx->pc = 0x1898A0u;
label_1898a0:
    // 0x1898a0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1898a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1898a4: 0xc4216ca0  lwc1        $f1, 0x6CA0($at)
    ctx->pc = 0x1898a4u;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1898a8: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x1898a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x1898ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1898acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1898b0: 0x8e06015c  lw          $a2, 0x15C($s0)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x1898b4: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1898b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1898b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1898bc: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1898BCu;
    {
        const bool branch_taken_0x1898bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1898C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898BCu;
        // 0x1898c0: 0x8e020158  lw          $v0, 0x158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898bc) {
            ctx->pc = 0x1899B8u;
            goto label_1899b8;
        }
    }
    ctx->pc = 0x1898C4u;
    // 0x1898c4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1898c8: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x1898cc: 0xc4216ca4  lwc1        $f1, 0x6CA4($at)
    ctx->pc = 0x1898ccu;
    { uint32_t bits = FAST_READ32(0x696CA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1898d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1898d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1898d4: 0x0  nop
    ctx->pc = 0x1898d4u;
    // NOP
    // 0x1898d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1898d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1898dc: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x1898DCu;
    {
        const bool branch_taken_0x1898dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898DCu;
        // 0x1898e0: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898dc) {
            ctx->pc = 0x1899B8u;
            goto label_1899b8;
        }
    }
    ctx->pc = 0x1898E4u;
    // 0x1898e4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1898e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1898e8: 0xc4216ca8  lwc1        $f1, 0x6CA8($at)
    ctx->pc = 0x1898e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1898ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1898ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1898f0: 0x0  nop
    ctx->pc = 0x1898f0u;
    // NOP
    // 0x1898f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1898f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1898f8: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1898F8u;
    {
        const bool branch_taken_0x1898f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1898f8) {
            ctx->pc = 0x1899B8u;
            goto label_1899b8;
        }
    }
    ctx->pc = 0x189900u;
    // 0x189900: 0x16200061  bnez        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x189900u;
    {
        const bool branch_taken_0x189900 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x189904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189900u;
        // 0x189904: 0x2409002a  addiu       $t1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189900) {
            ctx->pc = 0x189A88u;
            goto label_189a88;
        }
    }
    ctx->pc = 0x189908u;
    // 0x189908: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189908u;
    {
        const bool branch_taken_0x189908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189908u;
        // 0x18990c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189908) {
            ctx->pc = 0x189948u;
            goto label_189948;
        }
    }
    ctx->pc = 0x189910u;
label_189910:
    // 0x189910: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x189910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x189914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189914u;
    {
        const bool branch_taken_0x189914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189914u;
        // 0x189918: 0x1252018  mult        $a0, $t1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189914) {
            ctx->pc = 0x189938u;
            goto label_189938;
        }
    }
    ctx->pc = 0x18991Cu;
    // 0x18991c: 0x0  nop
    ctx->pc = 0x18991cu;
    // NOP
label_189920:
    // 0x189920: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x189920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x189924: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189928: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18992c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189930: 0xa4670006  sh          $a3, 0x6($v1)
    ctx->pc = 0x189930u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x189934: 0x0  nop
    ctx->pc = 0x189934u;
    // NOP
label_189938:
    // 0x189938: 0x29030019  slti        $v1, $t0, 0x19
    ctx->pc = 0x189938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x18993c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18993Cu;
    {
        const bool branch_taken_0x18993c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18993c) {
            ctx->pc = 0x189920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189920;
        }
    }
    ctx->pc = 0x189944u;
    // 0x189944: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x189944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_189948:
    // 0x189948: 0x2923002e  slti        $v1, $t1, 0x2E
    ctx->pc = 0x189948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x18994c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18994Cu;
    {
        const bool branch_taken_0x18994c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18994Cu;
        // 0x189950: 0x24080029  addiu       $t0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18994c) {
            ctx->pc = 0x189910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189910;
        }
    }
    ctx->pc = 0x189954u;
    // 0x189954: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x189954u;
    {
        const bool branch_taken_0x189954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189954) {
            ctx->pc = 0x1899A0u;
            goto label_1899a0;
        }
    }
    ctx->pc = 0x18995Cu;
    // 0x18995c: 0x0  nop
    ctx->pc = 0x18995cu;
    // NOP
label_189960:
    // 0x189960: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x189964: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x189964u;
    {
        const bool branch_taken_0x189964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189964u;
        // 0x189968: 0x1052018  mult        $a0, $t0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189964) {
            ctx->pc = 0x189990u;
            goto label_189990;
        }
    }
    ctx->pc = 0x18996Cu;
    // 0x18996c: 0x0  nop
    ctx->pc = 0x18996cu;
    // NOP
label_189970:
    // 0x189970: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x189974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189978: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x189978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18997c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x18997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x189980: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189984: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x189988: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x189988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x18998c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18998cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_189990:
    // 0x189990: 0x28e20019  slti        $v0, $a3, 0x19
    ctx->pc = 0x189990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x189994: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x189994u;
    {
        const bool branch_taken_0x189994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189994) {
            ctx->pc = 0x189970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189970;
        }
    }
    ctx->pc = 0x18999Cu;
    // 0x18999c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18999cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1899a0:
    // 0x1899a0: 0x2902002c  slti        $v0, $t0, 0x2C
    ctx->pc = 0x1899a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x1899a4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1899A4u;
    {
        const bool branch_taken_0x1899a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1899a4) {
            ctx->pc = 0x189960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189960;
        }
    }
    ctx->pc = 0x1899ACu;
    // 0x1899ac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1899ACu;
    {
        const bool branch_taken_0x1899ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899ac) {
            ctx->pc = 0x189A88u;
            goto label_189a88;
        }
    }
    ctx->pc = 0x1899B4u;
    // 0x1899b4: 0x0  nop
    ctx->pc = 0x1899b4u;
    // NOP
label_1899b8:
    // 0x1899b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1899b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1899bc: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1899BCu;
    {
        const bool branch_taken_0x1899bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1899bc) {
            ctx->pc = 0x1899D0u;
            goto label_1899d0;
        }
    }
    ctx->pc = 0x1899C4u;
    // 0x1899c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1899C4u;
    {
        const bool branch_taken_0x1899c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899C4u;
        // 0x1899c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899c4) {
            ctx->pc = 0x189A88u;
            goto label_189a88;
        }
    }
    ctx->pc = 0x1899CCu;
    // 0x1899cc: 0x0  nop
    ctx->pc = 0x1899ccu;
    // NOP
label_1899d0:
    // 0x1899d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1899D0u;
    {
        const bool branch_taken_0x1899d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899D0u;
        // 0x1899d4: 0x2408002a  addiu       $t0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899d0) {
            ctx->pc = 0x189A10u;
            goto label_189a10;
        }
    }
    ctx->pc = 0x1899D8u;
label_1899d8:
    // 0x1899d8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1899d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1899dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1899DCu;
    {
        const bool branch_taken_0x1899dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899DCu;
        // 0x1899e0: 0x1052018  mult        $a0, $t0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899dc) {
            ctx->pc = 0x189A00u;
            goto label_189a00;
        }
    }
    ctx->pc = 0x1899E4u;
    // 0x1899e4: 0x0  nop
    ctx->pc = 0x1899e4u;
    // NOP
label_1899e8:
    // 0x1899e8: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x1899e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1899ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1899ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1899f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1899f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1899f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1899f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1899f8: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x1899f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1899fc: 0x0  nop
    ctx->pc = 0x1899fcu;
    // NOP
label_189a00:
    // 0x189a00: 0x28e30019  slti        $v1, $a3, 0x19
    ctx->pc = 0x189a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x189a04: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x189A04u;
    {
        const bool branch_taken_0x189a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a04) {
            ctx->pc = 0x1899E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1899e8;
        }
    }
    ctx->pc = 0x189A0Cu;
    // 0x189a0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_189a10:
    // 0x189a10: 0x2903002e  slti        $v1, $t0, 0x2E
    ctx->pc = 0x189a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x189a14: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x189A14u;
    {
        const bool branch_taken_0x189a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A14u;
        // 0x189a18: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a14) {
            ctx->pc = 0x1899D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1899d8;
        }
    }
    ctx->pc = 0x189A1Cu;
    // 0x189a1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x189A1Cu;
    {
        const bool branch_taken_0x189a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A1Cu;
        // 0x189a20: 0x3c0a8000  lui         $t2, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a1c) {
            ctx->pc = 0x189A78u;
            goto label_189a78;
        }
    }
    ctx->pc = 0x189A24u;
    // 0x189a24: 0x0  nop
    ctx->pc = 0x189a24u;
    // NOP
label_189a28:
    // 0x189a28: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x189a2c: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x189a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x189a30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x189A30u;
    {
        const bool branch_taken_0x189a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A30u;
        // 0x189a34: 0x70854018  mult1       $t0, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a30) {
            ctx->pc = 0x189A68u;
            goto label_189a68;
        }
    }
    ctx->pc = 0x189A38u;
label_189a38:
    // 0x189a38: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x189a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189a3c: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x189a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x189a40: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x189a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x189a44: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x189a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x189a48: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x189a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x189a4c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x189a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x189a50: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x189a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x189a54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x189a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x189a58: 0x9487c  dsll32      $t1, $t1, 1
    ctx->pc = 0x189a58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 1));
    // 0x189a5c: 0x9487e  dsrl32      $t1, $t1, 1
    ctx->pc = 0x189a5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 1));
    // 0x189a60: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x189a60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x189a64: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x189a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
label_189a68:
    // 0x189a68: 0x28670019  slti        $a3, $v1, 0x19
    ctx->pc = 0x189a68u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x189a6c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x189A6Cu;
    {
        const bool branch_taken_0x189a6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a6c) {
            ctx->pc = 0x189A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189a38;
        }
    }
    ctx->pc = 0x189A74u;
    // 0x189a74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_189a78:
    // 0x189a78: 0x2882002f  slti        $v0, $a0, 0x2F
    ctx->pc = 0x189a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x189a7c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x189A7Cu;
    {
        const bool branch_taken_0x189a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a7c) {
            ctx->pc = 0x189A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189a28;
        }
    }
    ctx->pc = 0x189A84u;
    // 0x189a84: 0x0  nop
    ctx->pc = 0x189a84u;
    // NOP
label_189a88:
    // 0x189a88: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x189a8c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x189A8Cu;
    {
        const bool branch_taken_0x189a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a8c) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189A94u;
    // 0x189a94: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x189A94u;
    {
        const bool branch_taken_0x189a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A94u;
        // 0x189a98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a94) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189A9Cu;
    // 0x189a9c: 0x0  nop
    ctx->pc = 0x189a9cu;
    // NOP
label_189aa0:
    // 0x189aa0: 0x24020503  addiu       $v0, $zero, 0x503
    ctx->pc = 0x189aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x189aa4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189AA4u;
    {
        const bool branch_taken_0x189aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA4u;
        // 0x189aa8: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189aa4) {
            ctx->pc = 0x189AB8u;
            goto label_189ab8;
        }
    }
    ctx->pc = 0x189AACu;
    // 0x189aac: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x189AACu;
    {
        const bool branch_taken_0x189aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189aac) {
            ctx->pc = 0x189B38u;
            goto label_189b38;
        }
    }
    ctx->pc = 0x189AB4u;
    // 0x189ab4: 0x0  nop
    ctx->pc = 0x189ab4u;
    // NOP
label_189ab8:
    // 0x189ab8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x189abc: 0xc4216ca0  lwc1        $f1, 0x6CA0($at)
    ctx->pc = 0x189abcu;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ac0: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x189ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x189ac4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x189ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x189ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189acc: 0x0  nop
    ctx->pc = 0x189accu;
    // NOP
    // 0x189ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189ad4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x189AD4u;
    {
        const bool branch_taken_0x189ad4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x189AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AD4u;
        // 0x189ad8: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ad4) {
            ctx->pc = 0x189B08u;
            goto label_189b08;
        }
    }
    ctx->pc = 0x189ADCu;
    // 0x189adc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x189adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x189ae0: 0xc4216ca8  lwc1        $f1, 0x6CA8($at)
    ctx->pc = 0x189ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189ae8: 0x0  nop
    ctx->pc = 0x189ae8u;
    // NOP
    // 0x189aec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189af0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x189AF0u;
    {
        const bool branch_taken_0x189af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AF0u;
        // 0x189af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189af0) {
            ctx->pc = 0x189B08u;
            goto label_189b08;
        }
    }
    ctx->pc = 0x189AF8u;
    // 0x189af8: 0x16220027  bne         $s1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x189AF8u;
    {
        const bool branch_taken_0x189af8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x189af8) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B00u;
    // 0x189b00: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x189B00u;
    {
        const bool branch_taken_0x189b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B00u;
        // 0x189b04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b00) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B08u;
label_189b08:
    // 0x189b08: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x189b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x189b0c: 0xc4216ca8  lwc1        $f1, 0x6CA8($at)
    ctx->pc = 0x189b0cu;
    { uint32_t bits = FAST_READ32(0x696CA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189b10: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x189b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b18: 0x0  nop
    ctx->pc = 0x189b18u;
    // NOP
    // 0x189b1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189b20: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x189B20u;
    {
        const bool branch_taken_0x189b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189b20) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B28u;
    // 0x189b28: 0x1620001b  bnez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x189B28u;
    {
        const bool branch_taken_0x189b28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x189b28) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B30u;
    // 0x189b30: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x189B30u;
    {
        const bool branch_taken_0x189b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B30u;
        // 0x189b34: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b30) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B38u;
label_189b38:
    // 0x189b38: 0x24020805  addiu       $v0, $zero, 0x805
    ctx->pc = 0x189b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x189b3c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189B3Cu;
    {
        const bool branch_taken_0x189b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B3Cu;
        // 0x189b40: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b3c) {
            ctx->pc = 0x189B90u;
            goto label_189b90;
        }
    }
    ctx->pc = 0x189B44u;
    // 0x189b44: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x189b48: 0xc4216ca8  lwc1        $f1, 0x6CA8($at)
    ctx->pc = 0x189b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189b4c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x189b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x189b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b54: 0x0  nop
    ctx->pc = 0x189b54u;
    // NOP
    // 0x189b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189b5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189B5Cu;
    {
        const bool branch_taken_0x189b5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B5Cu;
        // 0x189b60: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b5c) {
            ctx->pc = 0x189B78u;
            goto label_189b78;
        }
    }
    ctx->pc = 0x189B64u;
    // 0x189b64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x189B64u;
    {
        const bool branch_taken_0x189b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189b64) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B6Cu;
    // 0x189b6c: 0x1000062c  b           . + 4 + (0x62C << 2)
    ctx->pc = 0x189B6Cu;
    {
        const bool branch_taken_0x189b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b6c) {
            ctx->pc = 0x18B420u;
            goto label_18b420;
        }
    }
    ctx->pc = 0x189B74u;
    // 0x189b74: 0x0  nop
    ctx->pc = 0x189b74u;
    // NOP
label_189b78:
    // 0x189b78: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x189b78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x189b7c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x189B7Cu;
    {
        const bool branch_taken_0x189b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b7c) {
            ctx->pc = 0x189B98u;
            goto label_189b98;
        }
    }
    ctx->pc = 0x189B84u;
    // 0x189b84: 0x10000626  b           . + 4 + (0x626 << 2)
    ctx->pc = 0x189B84u;
    {
        const bool branch_taken_0x189b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b84) {
            ctx->pc = 0x18B420u;
            goto label_18b420;
        }
    }
    ctx->pc = 0x189B8Cu;
    // 0x189b8c: 0x0  nop
    ctx->pc = 0x189b8cu;
    // NOP
label_189b90:
    // 0x189b90: 0x8e140168  lw          $s4, 0x168($s0)
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x189b94: 0x0  nop
    ctx->pc = 0x189b94u;
    // NOP
label_189b98:
    // 0x189b98: 0x128001a7  beqz        $s4, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x189B98u;
    {
        const bool branch_taken_0x189b98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b98) {
            ctx->pc = 0x18A238u;
            goto label_18a238;
        }
    }
    ctx->pc = 0x189BA0u;
    // 0x189ba0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x189ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189ba4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189ba8: 0x1062012d  beq         $v1, $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x189BA8u;
    {
        const bool branch_taken_0x189ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BA8u;
        // 0x189bac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ba8) {
            ctx->pc = 0x18A060u;
            goto label_18a060;
        }
    }
    ctx->pc = 0x189BB0u;
    // 0x189bb0: 0x106200b7  beq         $v1, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x189BB0u;
    {
        const bool branch_taken_0x189bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189bb0) {
            ctx->pc = 0x189E90u;
            goto label_189e90;
        }
    }
    ctx->pc = 0x189BB8u;
    // 0x189bb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x189bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x189bbc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x189BBCu;
    {
        const bool branch_taken_0x189bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BBCu;
        // 0x189bc0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bbc) {
            ctx->pc = 0x189BE0u;
            goto label_189be0;
        }
    }
    ctx->pc = 0x189BC4u;
    // 0x189bc4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189BC4u;
    {
        const bool branch_taken_0x189bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189bc4) {
            ctx->pc = 0x189BE0u;
            goto label_189be0;
        }
    }
    ctx->pc = 0x189BCCu;
    // 0x189bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189bd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189BD0u;
    {
        const bool branch_taken_0x189bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189bd0) {
            ctx->pc = 0x189BE0u;
            goto label_189be0;
        }
    }
    ctx->pc = 0x189BD8u;
    // 0x189bd8: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x189BD8u;
    {
        const bool branch_taken_0x189bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189bd8) {
            ctx->pc = 0x18A238u;
            goto label_18a238;
        }
    }
    ctx->pc = 0x189BE0u;
label_189be0:
    // 0x189be0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x189be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x189be4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189be8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189bec: 0x8c45016c  lw          $a1, 0x16C($v0)
    ctx->pc = 0x189becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x189bf0: 0xc041306  jal         func_104C18
    ctx->pc = 0x189BF0u;
    SET_GPR_U32(ctx, 31, 0x189BF8u);
    ctx->pc = 0x189BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BF0u;
    // 0x189bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x189BF0u, 0x189BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BF8u;
label_189bf8:
    // 0x189bf8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x189bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x189bfc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189c00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189c04: 0x8c450174  lw          $a1, 0x174($v0)
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x189c08: 0xc041306  jal         func_104C18
    ctx->pc = 0x189C08u;
    SET_GPR_U32(ctx, 31, 0x189C10u);
    ctx->pc = 0x189C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C08u;
    // 0x189c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x189C08u, 0x189C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C10u;
label_189c10:
    // 0x189c10: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189c14: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x189C14u;
    SET_GPR_U32(ctx, 31, 0x189C1Cu);
    ctx->pc = 0x189C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C14u;
    // 0x189c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x189C14u, 0x189C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C1Cu;
label_189c1c:
    // 0x189c1c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x189c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189c20: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189c24: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x189c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x189c28: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x189c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x189c2c: 0xc04134e  jal         func_104D38
    ctx->pc = 0x189C2Cu;
    SET_GPR_U32(ctx, 31, 0x189C34u);
    ctx->pc = 0x189C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C2Cu;
    // 0x189c30: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x189C2Cu, 0x189C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C34u;
label_189c34:
    // 0x189c34: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x189c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189c38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189c3c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189C3Cu;
    {
        const bool branch_taken_0x189c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x189C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C3Cu;
        // 0x189c40: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c3c) {
            ctx->pc = 0x189C58u;
            goto label_189c58;
        }
    }
    ctx->pc = 0x189C44u;
    // 0x189c44: 0xc041404  jal         func_105010
    ctx->pc = 0x189C44u;
    SET_GPR_U32(ctx, 31, 0x189C4Cu);
    ctx->pc = 0x189C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C44u;
    // 0x189c48: 0x70002e28  paddub      $a1, $zero, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x189C44u, 0x189C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C4Cu;
label_189c4c:
    // 0x189c4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x189C4Cu;
    {
        const bool branch_taken_0x189c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189c4c) {
            ctx->pc = 0x189C68u;
            goto label_189c68;
        }
    }
    ctx->pc = 0x189C54u;
    // 0x189c54: 0x0  nop
    ctx->pc = 0x189c54u;
    // NOP
label_189c58:
    // 0x189c58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x189c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x189c5c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189c60: 0xc041404  jal         func_105010
    ctx->pc = 0x189C60u;
    SET_GPR_U32(ctx, 31, 0x189C68u);
    ctx->pc = 0x189C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C60u;
    // 0x189c64: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x189C60u, 0x189C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C68u;
label_189c68:
    // 0x189c68: 0xc041372  jal         func_104DC8
    ctx->pc = 0x189C68u;
    SET_GPR_U32(ctx, 31, 0x189C70u);
    ctx->pc = 0x189C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C68u;
    // 0x189c6c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x189C68u, 0x189C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C70u;
label_189c70:
    // 0x189c70: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189c74: 0xc041386  jal         func_104E18
    ctx->pc = 0x189C74u;
    SET_GPR_U32(ctx, 31, 0x189C7Cu);
    ctx->pc = 0x189C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C74u;
    // 0x189c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x189C74u, 0x189C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C7Cu;
label_189c7c:
    // 0x189c7c: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x189c7cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x189c80: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x189c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x189c84: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x189c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x189c88: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x189c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x189c8c: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x189c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x189c90: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x189c90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x189c94: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x189c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189c98: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x189c98u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x189c9c: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x189c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x189ca0: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x189ca0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x189ca4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x189ca8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x189ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x189cac: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x189cacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x189cb0: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x189cb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x189cb4: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x189cb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x189cb8: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x189cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x189cbc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x189cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x189cc0: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x189cc0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x189cc4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x189cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x189cc8: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x189cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x189ccc: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x189cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x189cd0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x189cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x189cd4: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x189cd4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x189cd8: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x189cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x189cdc: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x189ce0: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x189ce0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x189ce4: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x189ce4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x189ce8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x189ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189cec: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x189cecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x189cf0: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x189cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x189cf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189cf8: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x189cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x189cfc: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x189cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x189d00: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x189d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x189d04: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x189d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x189d08: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x189d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x189d0c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189d10: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x189d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d14: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x189d14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x189d18: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x189D18u;
    SET_GPR_U32(ctx, 31, 0x189D20u);
    ctx->pc = 0x189D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D18u;
    // 0x189d1c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x189D18u, 0x189D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D20u;
label_189d20:
    // 0x189d20: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x189d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189d24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x189d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x189d28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189D28u;
    {
        const bool branch_taken_0x189d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x189D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D28u;
        // 0x189d2c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d28) {
            ctx->pc = 0x189D50u;
            goto label_189d50;
        }
    }
    ctx->pc = 0x189D30u;
    // 0x189d30: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x189d34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x189d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189d38: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189d3c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189d40: 0xc041418  jal         func_105060
    ctx->pc = 0x189D40u;
    SET_GPR_U32(ctx, 31, 0x189D48u);
    ctx->pc = 0x189D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D40u;
    // 0x189d44: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189D40u, 0x189D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D48u;
label_189d48:
    // 0x189d48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189D48u;
    {
        const bool branch_taken_0x189d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d48) {
            ctx->pc = 0x189D60u;
            goto label_189d60;
        }
    }
    ctx->pc = 0x189D50u;
label_189d50:
    // 0x189d50: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189d54: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189d58: 0xc041418  jal         func_105060
    ctx->pc = 0x189D58u;
    SET_GPR_U32(ctx, 31, 0x189D60u);
    ctx->pc = 0x189D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D58u;
    // 0x189d5c: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189D58u, 0x189D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D60u;
label_189d60:
    // 0x189d60: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x189D60u;
    SET_GPR_U32(ctx, 31, 0x189D68u);
    ctx->pc = 0x189D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D60u;
    // 0x189d64: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x189D60u, 0x189D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D68u;
label_189d68:
    // 0x189d68: 0xc04139c  jal         func_104E70
    ctx->pc = 0x189D68u;
    SET_GPR_U32(ctx, 31, 0x189D70u);
    ctx->pc = 0x189D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D68u;
    // 0x189d6c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x189D68u, 0x189D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D70u;
label_189d70:
    // 0x189d70: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x189d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x189d74: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189d78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189d7c: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x189d80: 0xc041306  jal         func_104C18
    ctx->pc = 0x189D80u;
    SET_GPR_U32(ctx, 31, 0x189D88u);
    ctx->pc = 0x189D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D80u;
    // 0x189d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x189D80u, 0x189D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D88u;
label_189d88:
    // 0x189d88: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x189d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x189d8c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189d90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189d94: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x189d98: 0xc041306  jal         func_104C18
    ctx->pc = 0x189D98u;
    SET_GPR_U32(ctx, 31, 0x189DA0u);
    ctx->pc = 0x189D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D98u;
    // 0x189d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x189D98u, 0x189DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DA0u;
label_189da0:
    // 0x189da0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189da4: 0xc041386  jal         func_104E18
    ctx->pc = 0x189DA4u;
    SET_GPR_U32(ctx, 31, 0x189DACu);
    ctx->pc = 0x189DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DA4u;
    // 0x189da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x189DA4u, 0x189DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DACu;
label_189dac:
    // 0x189dac: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x189dacu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x189db0: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x189db4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x189db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x189db8: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x189db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x189dbc: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x189dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x189dc0: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x189dc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x189dc4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x189dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189dc8: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x189dc8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x189dcc: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x189dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x189dd0: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x189dd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x189dd4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x189dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x189dd8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x189dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x189ddc: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x189ddcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x189de0: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x189de0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x189de4: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x189de4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x189de8: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x189de8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x189dec: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x189decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x189df0: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x189df0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x189df4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x189df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x189df8: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x189df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x189dfc: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x189dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x189e00: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x189e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x189e04: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x189e04u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x189e08: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x189e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x189e0c: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x189e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x189e10: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x189e10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x189e14: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x189e14u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x189e18: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189e1c: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x189e1cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x189e20: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x189e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x189e24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189e28: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x189e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x189e2c: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x189e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x189e30: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x189e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x189e34: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x189e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x189e38: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x189e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x189e3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189e40: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x189e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x189e44: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x189e44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x189e48: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x189E48u;
    SET_GPR_U32(ctx, 31, 0x189E50u);
    ctx->pc = 0x189E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E48u;
    // 0x189e4c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x189E48u, 0x189E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E50u;
label_189e50:
    // 0x189e50: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x189E50u;
    SET_GPR_U32(ctx, 31, 0x189E58u);
    ctx->pc = 0x189E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E50u;
    // 0x189e54: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x189E50u, 0x189E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E58u;
label_189e58:
    // 0x189e58: 0xc04139c  jal         func_104E70
    ctx->pc = 0x189E58u;
    SET_GPR_U32(ctx, 31, 0x189E60u);
    ctx->pc = 0x189E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E58u;
    // 0x189e5c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x189E58u, 0x189E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E60u;
label_189e60:
    // 0x189e60: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189e64: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x189E64u;
    SET_GPR_U32(ctx, 31, 0x189E6Cu);
    ctx->pc = 0x189E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E64u;
    // 0x189e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x189E64u, 0x189E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E6Cu;
label_189e6c:
    // 0x189e6c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189e70: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x189E70u;
    SET_GPR_U32(ctx, 31, 0x189E78u);
    ctx->pc = 0x189E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E70u;
    // 0x189e74: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x189E70u, 0x189E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E78u;
label_189e78:
    // 0x189e78: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189e7c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x189E7Cu;
    SET_GPR_U32(ctx, 31, 0x189E84u);
    ctx->pc = 0x189E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E7Cu;
    // 0x189e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x189E7Cu, 0x189E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E84u;
label_189e84:
    // 0x189e84: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x189E84u;
    {
        const bool branch_taken_0x189e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e84) {
            ctx->pc = 0x18A238u;
            goto label_18a238;
        }
    }
    ctx->pc = 0x189E8Cu;
    // 0x189e8c: 0x0  nop
    ctx->pc = 0x189e8cu;
    // NOP
label_189e90:
    // 0x189e90: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189e94: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x189E94u;
    SET_GPR_U32(ctx, 31, 0x189E9Cu);
    ctx->pc = 0x189E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E94u;
    // 0x189e98: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x189E94u, 0x189E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E9Cu;
label_189e9c:
    // 0x189e9c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189ea0: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x189EA0u;
    SET_GPR_U32(ctx, 31, 0x189EA8u);
    ctx->pc = 0x189EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EA0u;
    // 0x189ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x189EA0u, 0x189EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EA8u;
label_189ea8:
    // 0x189ea8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189eac: 0xc041386  jal         func_104E18
    ctx->pc = 0x189EACu;
    SET_GPR_U32(ctx, 31, 0x189EB4u);
    ctx->pc = 0x189EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EACu;
    // 0x189eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x189EACu, 0x189EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EB4u;
label_189eb4:
    // 0x189eb4: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x189eb4u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x189eb8: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x189eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x189ebc: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x189ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x189ec0: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x189ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x189ec4: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x189ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x189ec8: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x189ec8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x189ecc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x189eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189ed0: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x189ed0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x189ed4: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x189ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x189ed8: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x189ed8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x189edc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x189edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x189ee0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x189ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x189ee4: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x189ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x189ee8: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x189ee8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x189eec: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x189eecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x189ef0: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x189ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x189ef4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x189ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x189ef8: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x189ef8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x189efc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x189efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x189f00: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x189f00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x189f04: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x189f04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x189f08: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x189f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x189f0c: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x189f0cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x189f10: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x189f10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x189f14: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x189f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x189f18: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x189f18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x189f1c: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x189f1cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x189f20: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x189f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189f24: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x189f24u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x189f28: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x189f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x189f2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189f30: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x189f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x189f34: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x189f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x189f38: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x189f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x189f3c: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x189f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x189f40: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x189f40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x189f44: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189f48: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x189f48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x189f4c: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x189f4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x189f50: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x189F50u;
    SET_GPR_U32(ctx, 31, 0x189F58u);
    ctx->pc = 0x189F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F50u;
    // 0x189f54: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x189F50u, 0x189F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F58u;
label_189f58:
    // 0x189f58: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x189f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x189f5c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x189f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x189f60: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x189f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x189f64: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x189f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x189f68: 0x3323c  dsll32      $a2, $v1, 8
    ctx->pc = 0x189f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 8));
    // 0x189f6c: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x189f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x189f70: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x189F70u;
    SET_GPR_U32(ctx, 31, 0x189F78u);
    ctx->pc = 0x189F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F70u;
    // 0x189f74: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x189F70u, 0x189F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F78u;
label_189f78:
    // 0x189f78: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x189f78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f7c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189f80: 0xc041418  jal         func_105060
    ctx->pc = 0x189F80u;
    SET_GPR_U32(ctx, 31, 0x189F88u);
    ctx->pc = 0x189F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F80u;
    // 0x189f84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189F80u, 0x189F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F88u;
label_189f88:
    // 0x189f88: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189f8c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189f90: 0xc041418  jal         func_105060
    ctx->pc = 0x189F90u;
    SET_GPR_U32(ctx, 31, 0x189F98u);
    ctx->pc = 0x189F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F90u;
    // 0x189f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189F90u, 0x189F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F98u;
label_189f98:
    // 0x189f98: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189f9c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x189f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x189fa0: 0xc041418  jal         func_105060
    ctx->pc = 0x189FA0u;
    SET_GPR_U32(ctx, 31, 0x189FA8u);
    ctx->pc = 0x189FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FA0u;
    // 0x189fa4: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189FA0u, 0x189FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FA8u;
label_189fa8:
    // 0x189fa8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189fac: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x189facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189fb0: 0xc041418  jal         func_105060
    ctx->pc = 0x189FB0u;
    SET_GPR_U32(ctx, 31, 0x189FB8u);
    ctx->pc = 0x189FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FB0u;
    // 0x189fb4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x189FB0u, 0x189FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FB8u;
label_189fb8:
    // 0x189fb8: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x189FB8u;
    SET_GPR_U32(ctx, 31, 0x189FC0u);
    ctx->pc = 0x189FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FB8u;
    // 0x189fbc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x189FB8u, 0x189FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FC0u;
label_189fc0:
    // 0x189fc0: 0xc04139c  jal         func_104E70
    ctx->pc = 0x189FC0u;
    SET_GPR_U32(ctx, 31, 0x189FC8u);
    ctx->pc = 0x189FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FC0u;
    // 0x189fc4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x189FC0u, 0x189FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FC8u;
label_189fc8:
    // 0x189fc8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189fcc: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x189FCCu;
    SET_GPR_U32(ctx, 31, 0x189FD4u);
    ctx->pc = 0x189FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FCCu;
    // 0x189fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x189FCCu, 0x189FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FD4u;
label_189fd4:
    // 0x189fd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189fd8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189fdc: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x189fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x189fe0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x189fe4: 0xc04134e  jal         func_104D38
    ctx->pc = 0x189FE4u;
    SET_GPR_U32(ctx, 31, 0x189FECu);
    ctx->pc = 0x189FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FE4u;
    // 0x189fe8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x189FE4u, 0x189FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FECu;
label_189fec:
    // 0x189fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189ff0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x189ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x189ff4: 0xc041404  jal         func_105010
    ctx->pc = 0x189FF4u;
    SET_GPR_U32(ctx, 31, 0x189FFCu);
    ctx->pc = 0x189FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FF4u;
    // 0x189ff8: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x189FF4u, 0x189FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FFCu;
label_189ffc:
    // 0x189ffc: 0xc041372  jal         func_104DC8
    ctx->pc = 0x189FFCu;
    SET_GPR_U32(ctx, 31, 0x18A004u);
    ctx->pc = 0x18A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FFCu;
    // 0x18a000: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x189FFCu, 0x18A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A004u;
label_18a004:
    // 0x18a004: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a008: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a00c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a010: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18a010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18a014: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A014u;
    SET_GPR_U32(ctx, 31, 0x18A01Cu);
    ctx->pc = 0x18A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A014u;
    // 0x18a018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A014u, 0x18A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A01Cu;
label_18a01c:
    // 0x18a01c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a020: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a024: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a028: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18a02c: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A02Cu;
    SET_GPR_U32(ctx, 31, 0x18A034u);
    ctx->pc = 0x18A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A02Cu;
    // 0x18a030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A02Cu, 0x18A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A034u;
label_18a034:
    // 0x18a034: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a038: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18A038u;
    SET_GPR_U32(ctx, 31, 0x18A040u);
    ctx->pc = 0x18A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A038u;
    // 0x18a03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18A038u, 0x18A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A040u;
label_18a040:
    // 0x18a040: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a044: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A044u;
    SET_GPR_U32(ctx, 31, 0x18A04Cu);
    ctx->pc = 0x18A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A044u;
    // 0x18a048: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A044u, 0x18A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A04Cu;
label_18a04c:
    // 0x18a04c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a050: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A050u;
    SET_GPR_U32(ctx, 31, 0x18A058u);
    ctx->pc = 0x18A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A050u;
    // 0x18a054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A050u, 0x18A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A058u;
label_18a058:
    // 0x18a058: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x18A058u;
    {
        const bool branch_taken_0x18a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a058) {
            ctx->pc = 0x18A238u;
            goto label_18a238;
        }
    }
    ctx->pc = 0x18A060u;
label_18a060:
    // 0x18a060: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a064: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A064u;
    SET_GPR_U32(ctx, 31, 0x18A06Cu);
    ctx->pc = 0x18A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A064u;
    // 0x18a068: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A064u, 0x18A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A06Cu;
label_18a06c:
    // 0x18a06c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a070: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A070u;
    SET_GPR_U32(ctx, 31, 0x18A078u);
    ctx->pc = 0x18A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A070u;
    // 0x18a074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A070u, 0x18A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A078u;
label_18a078:
    // 0x18a078: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a07c: 0xc041386  jal         func_104E18
    ctx->pc = 0x18A07Cu;
    SET_GPR_U32(ctx, 31, 0x18A084u);
    ctx->pc = 0x18A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A07Cu;
    // 0x18a080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18A07Cu, 0x18A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A084u;
label_18a084:
    // 0x18a084: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18a084u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a088: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18a088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18a08c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18a08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18a090: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18a090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18a094: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18a094u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18a098: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18a098u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a09c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18a0a0: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18a0a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18a0a4: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18a0a8: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18a0a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18a0ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a0b0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18a0b4: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18a0b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18a0b8: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18a0b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18a0bc: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18a0bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18a0c0: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18a0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18a0c4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18a0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18a0c8: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18a0c8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18a0cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18a0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18a0d0: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18a0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18a0d4: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18a0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18a0d8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18a0d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18a0dc: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18a0dcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a0e0: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18a0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18a0e4: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18a0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18a0e8: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18a0e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18a0ec: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18a0ecu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18a0f0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a0f4: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18a0f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18a0f8: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18a0fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a100: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18a100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a104: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18a108: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18a108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18a10c: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18a10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18a110: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18a110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a114: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18a118: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18a118u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a11c: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18a11cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a120: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18A120u;
    SET_GPR_U32(ctx, 31, 0x18A128u);
    ctx->pc = 0x18A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A120u;
    // 0x18a124: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18A120u, 0x18A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A128u;
label_18a128:
    // 0x18a128: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x18a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18a12c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18a130: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x18a134: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x18a134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x18a138: 0x3323c  dsll32      $a2, $v1, 8
    ctx->pc = 0x18a138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 8));
    // 0x18a13c: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x18a13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x18a140: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x18A140u;
    SET_GPR_U32(ctx, 31, 0x18A148u);
    ctx->pc = 0x18A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A140u;
    // 0x18a144: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x18A140u, 0x18A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A148u;
label_18a148:
    // 0x18a148: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x18a148u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a14c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a150: 0xc041418  jal         func_105060
    ctx->pc = 0x18A150u;
    SET_GPR_U32(ctx, 31, 0x18A158u);
    ctx->pc = 0x18A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A150u;
    // 0x18a154: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A150u, 0x18A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A158u;
label_18a158:
    // 0x18a158: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a15c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a160: 0xc041418  jal         func_105060
    ctx->pc = 0x18A160u;
    SET_GPR_U32(ctx, 31, 0x18A168u);
    ctx->pc = 0x18A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A160u;
    // 0x18a164: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A160u, 0x18A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A168u;
label_18a168:
    // 0x18a168: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a16c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a170: 0xc041418  jal         func_105060
    ctx->pc = 0x18A170u;
    SET_GPR_U32(ctx, 31, 0x18A178u);
    ctx->pc = 0x18A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A170u;
    // 0x18a174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A170u, 0x18A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A178u;
label_18a178:
    // 0x18a178: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a17c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18a180: 0xc041418  jal         func_105060
    ctx->pc = 0x18A180u;
    SET_GPR_U32(ctx, 31, 0x18A188u);
    ctx->pc = 0x18A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A180u;
    // 0x18a184: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A180u, 0x18A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A188u;
label_18a188:
    // 0x18a188: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a18c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18a190: 0xc041418  jal         func_105060
    ctx->pc = 0x18A190u;
    SET_GPR_U32(ctx, 31, 0x18A198u);
    ctx->pc = 0x18A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A190u;
    // 0x18a194: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A190u, 0x18A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A198u;
label_18a198:
    // 0x18a198: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18A198u;
    SET_GPR_U32(ctx, 31, 0x18A1A0u);
    ctx->pc = 0x18A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A198u;
    // 0x18a19c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18A198u, 0x18A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1A0u;
label_18a1a0:
    // 0x18a1a0: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18A1A0u;
    SET_GPR_U32(ctx, 31, 0x18A1A8u);
    ctx->pc = 0x18A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1A0u;
    // 0x18a1a4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18A1A0u, 0x18A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1A8u;
label_18a1a8:
    // 0x18a1a8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a1ac: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18A1ACu;
    SET_GPR_U32(ctx, 31, 0x18A1B4u);
    ctx->pc = 0x18A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1ACu;
    // 0x18a1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18A1ACu, 0x18A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1B4u;
label_18a1b4:
    // 0x18a1b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18a1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a1b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a1bc: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x18a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x18a1c0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x18a1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18a1c4: 0xc04134e  jal         func_104D38
    ctx->pc = 0x18A1C4u;
    SET_GPR_U32(ctx, 31, 0x18A1CCu);
    ctx->pc = 0x18A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1C4u;
    // 0x18a1c8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x18A1C4u, 0x18A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1CCu;
label_18a1cc:
    // 0x18a1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a1d0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a1d4: 0xc041404  jal         func_105010
    ctx->pc = 0x18A1D4u;
    SET_GPR_U32(ctx, 31, 0x18A1DCu);
    ctx->pc = 0x18A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1D4u;
    // 0x18a1d8: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x18A1D4u, 0x18A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1DCu;
label_18a1dc:
    // 0x18a1dc: 0xc041372  jal         func_104DC8
    ctx->pc = 0x18A1DCu;
    SET_GPR_U32(ctx, 31, 0x18A1E4u);
    ctx->pc = 0x18A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1DCu;
    // 0x18a1e0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x18A1DCu, 0x18A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1E4u;
label_18a1e4:
    // 0x18a1e4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a1e8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a1ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a1f0: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18a1f4: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A1F4u;
    SET_GPR_U32(ctx, 31, 0x18A1FCu);
    ctx->pc = 0x18A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1F4u;
    // 0x18a1f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A1F4u, 0x18A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1FCu;
label_18a1fc:
    // 0x18a1fc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a200: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a208: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18a20c: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A20Cu;
    SET_GPR_U32(ctx, 31, 0x18A214u);
    ctx->pc = 0x18A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A20Cu;
    // 0x18a210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A20Cu, 0x18A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A214u;
label_18a214:
    // 0x18a214: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a218: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18A218u;
    SET_GPR_U32(ctx, 31, 0x18A220u);
    ctx->pc = 0x18A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A218u;
    // 0x18a21c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18A218u, 0x18A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A220u;
label_18a220:
    // 0x18a220: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a224: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A224u;
    SET_GPR_U32(ctx, 31, 0x18A22Cu);
    ctx->pc = 0x18A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A224u;
    // 0x18a228: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A224u, 0x18A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A22Cu;
label_18a22c:
    // 0x18a22c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a230: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A230u;
    SET_GPR_U32(ctx, 31, 0x18A238u);
    ctx->pc = 0x18A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A230u;
    // 0x18a234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A230u, 0x18A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A238u;
label_18a238:
    // 0x18a238: 0x12800473  beqz        $s4, . + 4 + (0x473 << 2)
    ctx->pc = 0x18A238u;
    {
        const bool branch_taken_0x18a238 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a238) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18A240u;
    // 0x18a240: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x18a240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x18a244: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x18a244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18a248: 0x1020046f  beqz        $at, . + 4 + (0x46F << 2)
    ctx->pc = 0x18A248u;
    {
        const bool branch_taken_0x18a248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A248u;
        // 0x18a24c: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a248) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18A250u;
    // 0x18a250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a254: 0x24635660  addiu       $v1, $v1, 0x5660
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22112));
    // 0x18a258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a25c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a260: 0x400008  jr          $v0
    ctx->pc = 0x18A260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A268u: goto label_18a268;
            case 0x18A410u: goto label_18a410;
            case 0x18A5E0u: goto label_18a5e0;
            case 0x18A780u: goto label_18a780;
            case 0x18B240u: goto label_18b240;
            case 0x18B408u: goto label_18b408;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18A268u;
label_18a268:
    // 0x18a268: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a26c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A26Cu;
    SET_GPR_U32(ctx, 31, 0x18A274u);
    ctx->pc = 0x18A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A26Cu;
    // 0x18a270: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A26Cu, 0x18A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A274u;
label_18a274:
    // 0x18a274: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a278: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A278u;
    SET_GPR_U32(ctx, 31, 0x18A280u);
    ctx->pc = 0x18A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A278u;
    // 0x18a27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A278u, 0x18A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A280u;
label_18a280:
    // 0x18a280: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a284: 0xc041386  jal         func_104E18
    ctx->pc = 0x18A284u;
    SET_GPR_U32(ctx, 31, 0x18A28Cu);
    ctx->pc = 0x18A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A284u;
    // 0x18a288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18A284u, 0x18A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A28Cu;
label_18a28c:
    // 0x18a28c: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18a28cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a290: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18a290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18a294: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18a294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18a298: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18a298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18a29c: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18a29cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18a2a0: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18a2a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a2a4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18a2a8: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18a2a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18a2ac: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18a2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18a2b0: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18a2b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18a2b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a2b8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18a2bc: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18a2bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18a2c0: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18a2c0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18a2c4: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18a2c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18a2c8: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18a2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18a2cc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18a2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18a2d0: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18a2d0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18a2d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18a2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18a2d8: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18a2d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18a2dc: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18a2e0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18a2e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18a2e4: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18a2e4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a2e8: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18a2ec: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18a2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18a2f0: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18a2f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18a2f4: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18a2f4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18a2f8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a2fc: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18a2fcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18a300: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18a304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a308: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18a308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a30c: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18a310: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18a310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18a314: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18a318: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18a318u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a31c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18a320: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18a320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a324: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18a324u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a328: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18A328u;
    SET_GPR_U32(ctx, 31, 0x18A330u);
    ctx->pc = 0x18A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A328u;
    // 0x18a32c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18A328u, 0x18A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A330u;
label_18a330:
    // 0x18a330: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x18a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18a334: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18a334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18a338: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x18a338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x18a33c: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x18a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x18a340: 0x3323c  dsll32      $a2, $v1, 8
    ctx->pc = 0x18a340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 8));
    // 0x18a344: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x18a344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x18a348: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x18A348u;
    SET_GPR_U32(ctx, 31, 0x18A350u);
    ctx->pc = 0x18A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A348u;
    // 0x18a34c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x18A348u, 0x18A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A350u;
label_18a350:
    // 0x18a350: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x18a350u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a354: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a358: 0xc041418  jal         func_105060
    ctx->pc = 0x18A358u;
    SET_GPR_U32(ctx, 31, 0x18A360u);
    ctx->pc = 0x18A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A358u;
    // 0x18a35c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A358u, 0x18A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A360u;
label_18a360:
    // 0x18a360: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a364: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18a364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a368: 0xc041418  jal         func_105060
    ctx->pc = 0x18A368u;
    SET_GPR_U32(ctx, 31, 0x18A370u);
    ctx->pc = 0x18A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A368u;
    // 0x18a36c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A368u, 0x18A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A370u;
label_18a370:
    // 0x18a370: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a374: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18a378: 0xc041418  jal         func_105060
    ctx->pc = 0x18A378u;
    SET_GPR_U32(ctx, 31, 0x18A380u);
    ctx->pc = 0x18A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A378u;
    // 0x18a37c: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A378u, 0x18A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A380u;
label_18a380:
    // 0x18a380: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a384: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18a388: 0xc041418  jal         func_105060
    ctx->pc = 0x18A388u;
    SET_GPR_U32(ctx, 31, 0x18A390u);
    ctx->pc = 0x18A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A388u;
    // 0x18a38c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A388u, 0x18A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A390u;
label_18a390:
    // 0x18a390: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18A390u;
    SET_GPR_U32(ctx, 31, 0x18A398u);
    ctx->pc = 0x18A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A390u;
    // 0x18a394: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18A390u, 0x18A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A398u;
label_18a398:
    // 0x18a398: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18A398u;
    SET_GPR_U32(ctx, 31, 0x18A3A0u);
    ctx->pc = 0x18A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A398u;
    // 0x18a39c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18A398u, 0x18A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3A0u;
label_18a3a0:
    // 0x18a3a0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a3a4: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18A3A4u;
    SET_GPR_U32(ctx, 31, 0x18A3ACu);
    ctx->pc = 0x18A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3A4u;
    // 0x18a3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18A3A4u, 0x18A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3ACu;
label_18a3ac:
    // 0x18a3ac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18a3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a3b0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a3b4: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x18a3b8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x18a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18a3bc: 0xc04134e  jal         func_104D38
    ctx->pc = 0x18A3BCu;
    SET_GPR_U32(ctx, 31, 0x18A3C4u);
    ctx->pc = 0x18A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3BCu;
    // 0x18a3c0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x18A3BCu, 0x18A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3C4u;
label_18a3c4:
    // 0x18a3c4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a3c8: 0xc041404  jal         func_105010
    ctx->pc = 0x18A3C8u;
    SET_GPR_U32(ctx, 31, 0x18A3D0u);
    ctx->pc = 0x18A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3C8u;
    // 0x18a3cc: 0x70002e28  paddub      $a1, $zero, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x18A3C8u, 0x18A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3D0u;
label_18a3d0:
    // 0x18a3d0: 0xc041372  jal         func_104DC8
    ctx->pc = 0x18A3D0u;
    SET_GPR_U32(ctx, 31, 0x18A3D8u);
    ctx->pc = 0x18A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3D0u;
    // 0x18a3d4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x18A3D0u, 0x18A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3D8u;
label_18a3d8:
    // 0x18a3d8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a3dc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a3e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a3e4: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18a3e8: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A3E8u;
    SET_GPR_U32(ctx, 31, 0x18A3F0u);
    ctx->pc = 0x18A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3E8u;
    // 0x18a3ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A3E8u, 0x18A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3F0u;
label_18a3f0:
    // 0x18a3f0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a3f4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a3f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a3fc: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18a400: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A400u;
    SET_GPR_U32(ctx, 31, 0x18A408u);
    ctx->pc = 0x18A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A400u;
    // 0x18a404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A400u, 0x18A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A408u;
label_18a408:
    // 0x18a408: 0x100003ff  b           . + 4 + (0x3FF << 2)
    ctx->pc = 0x18A408u;
    {
        const bool branch_taken_0x18a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a408) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18A410u;
label_18a410:
    // 0x18a410: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a414: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A414u;
    SET_GPR_U32(ctx, 31, 0x18A41Cu);
    ctx->pc = 0x18A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A414u;
    // 0x18a418: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A414u, 0x18A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A41Cu;
label_18a41c:
    // 0x18a41c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a420: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A420u;
    SET_GPR_U32(ctx, 31, 0x18A428u);
    ctx->pc = 0x18A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A420u;
    // 0x18a424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A420u, 0x18A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A428u;
label_18a428:
    // 0x18a428: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a42c: 0xc041386  jal         func_104E18
    ctx->pc = 0x18A42Cu;
    SET_GPR_U32(ctx, 31, 0x18A434u);
    ctx->pc = 0x18A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A42Cu;
    // 0x18a430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18A42Cu, 0x18A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A434u;
label_18a434:
    // 0x18a434: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18a434u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a438: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18a438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18a43c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18a43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18a440: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18a440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18a444: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18a448: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18a448u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a44c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18a450: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18a450u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18a454: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18a458: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18a458u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18a45c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a460: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18a464: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18a464u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18a468: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18a468u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18a46c: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18a46cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18a470: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18a470u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18a474: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18a474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18a478: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18a478u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18a47c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18a47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18a480: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18a480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18a484: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18a484u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18a488: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18a488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18a48c: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18a48cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a490: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18a490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18a494: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18a494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18a498: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18a498u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18a49c: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18a49cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18a4a0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a4a4: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18a4a4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18a4a8: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18a4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18a4ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a4b0: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18a4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a4b4: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18a4b8: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18a4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18a4bc: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18a4c0: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18a4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a4c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18a4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18a4c8: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a4cc: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18a4ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a4d0: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18A4D0u;
    SET_GPR_U32(ctx, 31, 0x18A4D8u);
    ctx->pc = 0x18A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4D0u;
    // 0x18a4d4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18A4D0u, 0x18A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4D8u;
label_18a4d8:
    // 0x18a4d8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x18a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18a4dc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18a4e0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x18a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x18a4e4: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x18a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x18a4e8: 0x3323c  dsll32      $a2, $v1, 8
    ctx->pc = 0x18a4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 8));
    // 0x18a4ec: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x18a4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x18a4f0: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x18A4F0u;
    SET_GPR_U32(ctx, 31, 0x18A4F8u);
    ctx->pc = 0x18A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4F0u;
    // 0x18a4f4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x18A4F0u, 0x18A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4F8u;
label_18a4f8:
    // 0x18a4f8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x18a4f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a4fc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a500: 0xc041418  jal         func_105060
    ctx->pc = 0x18A500u;
    SET_GPR_U32(ctx, 31, 0x18A508u);
    ctx->pc = 0x18A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A500u;
    // 0x18a504: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A500u, 0x18A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A508u;
label_18a508:
    // 0x18a508: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a50c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a510: 0xc041418  jal         func_105060
    ctx->pc = 0x18A510u;
    SET_GPR_U32(ctx, 31, 0x18A518u);
    ctx->pc = 0x18A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A510u;
    // 0x18a514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A510u, 0x18A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A518u;
label_18a518:
    // 0x18a518: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a51c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18a520: 0xc041418  jal         func_105060
    ctx->pc = 0x18A520u;
    SET_GPR_U32(ctx, 31, 0x18A528u);
    ctx->pc = 0x18A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A520u;
    // 0x18a524: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A520u, 0x18A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A528u;
label_18a528:
    // 0x18a528: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a52c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18a530: 0xc041418  jal         func_105060
    ctx->pc = 0x18A530u;
    SET_GPR_U32(ctx, 31, 0x18A538u);
    ctx->pc = 0x18A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A530u;
    // 0x18a534: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A530u, 0x18A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A538u;
label_18a538:
    // 0x18a538: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18A538u;
    SET_GPR_U32(ctx, 31, 0x18A540u);
    ctx->pc = 0x18A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A538u;
    // 0x18a53c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18A538u, 0x18A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A540u;
label_18a540:
    // 0x18a540: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18A540u;
    SET_GPR_U32(ctx, 31, 0x18A548u);
    ctx->pc = 0x18A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A540u;
    // 0x18a544: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18A540u, 0x18A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A548u;
label_18a548:
    // 0x18a548: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a54c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18A54Cu;
    SET_GPR_U32(ctx, 31, 0x18A554u);
    ctx->pc = 0x18A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A54Cu;
    // 0x18a550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18A54Cu, 0x18A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A554u;
label_18a554:
    // 0x18a554: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a558: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a55c: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x18a560: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18a564: 0xc04134e  jal         func_104D38
    ctx->pc = 0x18A564u;
    SET_GPR_U32(ctx, 31, 0x18A56Cu);
    ctx->pc = 0x18A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A564u;
    // 0x18a568: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x18A564u, 0x18A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A56Cu;
label_18a56c:
    // 0x18a56c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a570: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a574: 0xc041404  jal         func_105010
    ctx->pc = 0x18A574u;
    SET_GPR_U32(ctx, 31, 0x18A57Cu);
    ctx->pc = 0x18A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A574u;
    // 0x18a578: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x18A574u, 0x18A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A57Cu;
label_18a57c:
    // 0x18a57c: 0xc041372  jal         func_104DC8
    ctx->pc = 0x18A57Cu;
    SET_GPR_U32(ctx, 31, 0x18A584u);
    ctx->pc = 0x18A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A57Cu;
    // 0x18a580: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x18A57Cu, 0x18A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A584u;
label_18a584:
    // 0x18a584: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a588: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a58c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a590: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18a594: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A594u;
    SET_GPR_U32(ctx, 31, 0x18A59Cu);
    ctx->pc = 0x18A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A594u;
    // 0x18a598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A594u, 0x18A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A59Cu;
label_18a59c:
    // 0x18a59c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a5a0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a5a8: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18a5ac: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A5ACu;
    SET_GPR_U32(ctx, 31, 0x18A5B4u);
    ctx->pc = 0x18A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5ACu;
    // 0x18a5b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A5ACu, 0x18A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5B4u;
label_18a5b4:
    // 0x18a5b4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5b8: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18A5B8u;
    SET_GPR_U32(ctx, 31, 0x18A5C0u);
    ctx->pc = 0x18A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5B8u;
    // 0x18a5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18A5B8u, 0x18A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5C0u;
label_18a5c0:
    // 0x18a5c0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5c4: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A5C4u;
    SET_GPR_U32(ctx, 31, 0x18A5CCu);
    ctx->pc = 0x18A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5C4u;
    // 0x18a5c8: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A5C4u, 0x18A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5CCu;
label_18a5cc:
    // 0x18a5cc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5d0: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A5D0u;
    SET_GPR_U32(ctx, 31, 0x18A5D8u);
    ctx->pc = 0x18A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5D0u;
    // 0x18a5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A5D0u, 0x18A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5D8u;
label_18a5d8:
    // 0x18a5d8: 0x1000038b  b           . + 4 + (0x38B << 2)
    ctx->pc = 0x18A5D8u;
    {
        const bool branch_taken_0x18a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5d8) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18A5E0u;
label_18a5e0:
    // 0x18a5e0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5e4: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A5E4u;
    SET_GPR_U32(ctx, 31, 0x18A5ECu);
    ctx->pc = 0x18A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5E4u;
    // 0x18a5e8: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A5E4u, 0x18A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5ECu;
label_18a5ec:
    // 0x18a5ec: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5f0: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A5F0u;
    SET_GPR_U32(ctx, 31, 0x18A5F8u);
    ctx->pc = 0x18A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5F0u;
    // 0x18a5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A5F0u, 0x18A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5F8u;
label_18a5f8:
    // 0x18a5f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a5fc: 0xc041386  jal         func_104E18
    ctx->pc = 0x18A5FCu;
    SET_GPR_U32(ctx, 31, 0x18A604u);
    ctx->pc = 0x18A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5FCu;
    // 0x18a600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18A5FCu, 0x18A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A604u;
label_18a604:
    // 0x18a604: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18a604u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a608: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18a608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18a60c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18a60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18a610: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18a610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18a614: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18a614u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18a618: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18a618u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a61c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18a620: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18a620u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18a624: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18a624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18a628: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18a628u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18a62c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a630: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18a634: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18a634u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18a638: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18a638u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18a63c: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18a63cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18a640: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18a640u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18a644: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18a644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18a648: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18a648u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18a64c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18a64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18a650: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18a650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18a654: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18a654u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18a658: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18a658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18a65c: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18a65cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a660: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18a660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18a664: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18a664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18a668: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18a668u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18a66c: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18a66cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18a670: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a674: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18a674u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18a678: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18a67c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a680: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18a680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a684: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18a688: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18a688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18a68c: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18a690: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18a690u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a694: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18a698: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18a698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a69c: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18a69cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a6a0: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18A6A0u;
    SET_GPR_U32(ctx, 31, 0x18A6A8u);
    ctx->pc = 0x18A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6A0u;
    // 0x18a6a4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18A6A0u, 0x18A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6A8u;
label_18a6a8:
    // 0x18a6a8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18a6ac: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18a6b0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x18a6b4: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x18a6b8: 0x3323c  dsll32      $a2, $v1, 8
    ctx->pc = 0x18a6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 8));
    // 0x18a6bc: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x18a6bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x18a6c0: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x18A6C0u;
    SET_GPR_U32(ctx, 31, 0x18A6C8u);
    ctx->pc = 0x18A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6C0u;
    // 0x18a6c4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x18A6C0u, 0x18A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6C8u;
label_18a6c8:
    // 0x18a6c8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x18a6c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a6cc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a6d0: 0xc041418  jal         func_105060
    ctx->pc = 0x18A6D0u;
    SET_GPR_U32(ctx, 31, 0x18A6D8u);
    ctx->pc = 0x18A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6D0u;
    // 0x18a6d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A6D0u, 0x18A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6D8u;
label_18a6d8:
    // 0x18a6d8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a6dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a6e0: 0xc041418  jal         func_105060
    ctx->pc = 0x18A6E0u;
    SET_GPR_U32(ctx, 31, 0x18A6E8u);
    ctx->pc = 0x18A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6E0u;
    // 0x18a6e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A6E0u, 0x18A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6E8u;
label_18a6e8:
    // 0x18a6e8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a6ec: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18a6f0: 0xc041418  jal         func_105060
    ctx->pc = 0x18A6F0u;
    SET_GPR_U32(ctx, 31, 0x18A6F8u);
    ctx->pc = 0x18A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6F0u;
    // 0x18a6f4: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A6F0u, 0x18A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6F8u;
label_18a6f8:
    // 0x18a6f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a6fc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18a700: 0xc041418  jal         func_105060
    ctx->pc = 0x18A700u;
    SET_GPR_U32(ctx, 31, 0x18A708u);
    ctx->pc = 0x18A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A700u;
    // 0x18a704: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A700u, 0x18A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A708u;
label_18a708:
    // 0x18a708: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18A708u;
    SET_GPR_U32(ctx, 31, 0x18A710u);
    ctx->pc = 0x18A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A708u;
    // 0x18a70c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18A708u, 0x18A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A710u;
label_18a710:
    // 0x18a710: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18A710u;
    SET_GPR_U32(ctx, 31, 0x18A718u);
    ctx->pc = 0x18A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A710u;
    // 0x18a714: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18A710u, 0x18A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A718u;
label_18a718:
    // 0x18a718: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18a718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a71c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a720: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x18a724: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x18a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18a728: 0xc04134e  jal         func_104D38
    ctx->pc = 0x18A728u;
    SET_GPR_U32(ctx, 31, 0x18A730u);
    ctx->pc = 0x18A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A728u;
    // 0x18a72c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x18A728u, 0x18A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A730u;
label_18a730:
    // 0x18a730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a734: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a738: 0xc041404  jal         func_105010
    ctx->pc = 0x18A738u;
    SET_GPR_U32(ctx, 31, 0x18A740u);
    ctx->pc = 0x18A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A738u;
    // 0x18a73c: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x18A738u, 0x18A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A740u;
label_18a740:
    // 0x18a740: 0xc041372  jal         func_104DC8
    ctx->pc = 0x18A740u;
    SET_GPR_U32(ctx, 31, 0x18A748u);
    ctx->pc = 0x18A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A740u;
    // 0x18a744: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x18A740u, 0x18A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A748u;
label_18a748:
    // 0x18a748: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a74c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a750: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a754: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18a758: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A758u;
    SET_GPR_U32(ctx, 31, 0x18A760u);
    ctx->pc = 0x18A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A758u;
    // 0x18a75c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A758u, 0x18A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A760u;
label_18a760:
    // 0x18a760: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18a764: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a768: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a76c: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18a770: 0xc041306  jal         func_104C18
    ctx->pc = 0x18A770u;
    SET_GPR_U32(ctx, 31, 0x18A778u);
    ctx->pc = 0x18A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A770u;
    // 0x18a774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18A770u, 0x18A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A778u;
label_18a778:
    // 0x18a778: 0x10000323  b           . + 4 + (0x323 << 2)
    ctx->pc = 0x18A778u;
    {
        const bool branch_taken_0x18a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a778) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18A780u;
label_18a780:
    // 0x18a780: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a784: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A784u;
    SET_GPR_U32(ctx, 31, 0x18A78Cu);
    ctx->pc = 0x18A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A784u;
    // 0x18a788: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A784u, 0x18A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A78Cu;
label_18a78c:
    // 0x18a78c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a790: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18A790u;
    SET_GPR_U32(ctx, 31, 0x18A798u);
    ctx->pc = 0x18A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A790u;
    // 0x18a794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18A790u, 0x18A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A798u;
label_18a798:
    // 0x18a798: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a79c: 0xc041386  jal         func_104E18
    ctx->pc = 0x18A79Cu;
    SET_GPR_U32(ctx, 31, 0x18A7A4u);
    ctx->pc = 0x18A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A79Cu;
    // 0x18a7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18A79Cu, 0x18A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7A4u;
label_18a7a4:
    // 0x18a7a4: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18a7a4u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a7a8: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18a7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18a7ac: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18a7b0: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18a7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18a7b4: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18a7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18a7b8: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18a7b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a7bc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18a7c0: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18a7c0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18a7c4: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18a7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18a7c8: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18a7c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18a7cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a7d0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18a7d4: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18a7d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18a7d8: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18a7d8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18a7dc: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18a7dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18a7e0: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18a7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18a7e4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18a7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18a7e8: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18a7e8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18a7ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18a7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18a7f0: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18a7f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18a7f4: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18a7f8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18a7f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18a7fc: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18a7fcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18a800: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18a800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18a804: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18a808: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18a808u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18a80c: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18a80cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18a810: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a814: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18a814u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18a818: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18a818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18a81c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a820: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18a820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a824: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18a828: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18a828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18a82c: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18a830: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18a830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a834: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18a834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18a838: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18a838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a83c: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18a83cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18a840: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18A840u;
    SET_GPR_U32(ctx, 31, 0x18A848u);
    ctx->pc = 0x18A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A840u;
    // 0x18a844: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18A840u, 0x18A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A848u;
label_18a848:
    // 0x18a848: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x18a84c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a850: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18a854: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18a858: 0xc041418  jal         func_105060
    ctx->pc = 0x18A858u;
    SET_GPR_U32(ctx, 31, 0x18A860u);
    ctx->pc = 0x18A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A858u;
    // 0x18a85c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A858u, 0x18A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A860u;
label_18a860:
    // 0x18a860: 0x3c020a04  lui         $v0, 0xA04
    ctx->pc = 0x18a860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2564 << 16));
    // 0x18a864: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a868: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18a868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18a86c: 0xc041418  jal         func_105060
    ctx->pc = 0x18A86Cu;
    SET_GPR_U32(ctx, 31, 0x18A874u);
    ctx->pc = 0x18A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A86Cu;
    // 0x18a870: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A86Cu, 0x18A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A874u;
label_18a874:
    // 0x18a874: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x18a878: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a87c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18a880: 0xc041418  jal         func_105060
    ctx->pc = 0x18A880u;
    SET_GPR_U32(ctx, 31, 0x18A888u);
    ctx->pc = 0x18A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A880u;
    // 0x18a884: 0x34460003  ori         $a2, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A880u, 0x18A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A888u;
label_18a888:
    // 0x18a888: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18a88c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a890: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18a894: 0xc041418  jal         func_105060
    ctx->pc = 0x18A894u;
    SET_GPR_U32(ctx, 31, 0x18A89Cu);
    ctx->pc = 0x18A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A894u;
    // 0x18a898: 0x34460088  ori         $a2, $v0, 0x88 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)136);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A894u, 0x18A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A89Cu;
label_18a89c:
    // 0x18a89c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18A89Cu;
    {
        const bool branch_taken_0x18a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A89Cu;
        // 0x18a8a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a89c) {
            ctx->pc = 0x18A928u;
            goto label_18a928;
        }
    }
    ctx->pc = 0x18A8A4u;
    // 0x18a8a4: 0x0  nop
    ctx->pc = 0x18a8a4u;
    // NOP
label_18a8a8:
    // 0x18a8a8: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x18a8ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18a8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18a8b0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x18a8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x18a8b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18a8b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18a8b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18a8b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18a8bc: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18a8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18a8c0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18a8c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x18a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x18a8c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18a8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18a8cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18a8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18a8d0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a8d4: 0xc041418  jal         func_105060
    ctx->pc = 0x18A8D4u;
    SET_GPR_U32(ctx, 31, 0x18A8DCu);
    ctx->pc = 0x18A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8D4u;
    // 0x18a8d8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A8D4u, 0x18A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8DCu;
label_18a8dc:
    // 0x18a8dc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8e4: 0xc041418  jal         func_105060
    ctx->pc = 0x18A8E4u;
    SET_GPR_U32(ctx, 31, 0x18A8ECu);
    ctx->pc = 0x18A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8E4u;
    // 0x18a8e8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A8E4u, 0x18A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8ECu;
label_18a8ec:
    // 0x18a8ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8f0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a8f4: 0xc041418  jal         func_105060
    ctx->pc = 0x18A8F4u;
    SET_GPR_U32(ctx, 31, 0x18A8FCu);
    ctx->pc = 0x18A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8F4u;
    // 0x18a8f8: 0x5303c  dsll32      $a2, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A8F4u, 0x18A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8FCu;
label_18a8fc:
    // 0x18a8fc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a900: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18a904: 0xc041418  jal         func_105060
    ctx->pc = 0x18A904u;
    SET_GPR_U32(ctx, 31, 0x18A90Cu);
    ctx->pc = 0x18A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A904u;
    // 0x18a908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A904u, 0x18A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A90Cu;
label_18a90c:
    // 0x18a90c: 0x3402fff0  ori         $v0, $zero, 0xFFF0
    ctx->pc = 0x18a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x18a910: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a914: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18a914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18a918: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a91c: 0xc041418  jal         func_105060
    ctx->pc = 0x18A91Cu;
    SET_GPR_U32(ctx, 31, 0x18A924u);
    ctx->pc = 0x18A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A91Cu;
    // 0x18a920: 0x3446fff0  ori         $a2, $v0, 0xFFF0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A91Cu, 0x18A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A924u;
label_18a924:
    // 0x18a924: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x18a924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_18a928:
    // 0x18a928: 0x2a820100  slti        $v0, $s4, 0x100
    ctx->pc = 0x18a928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18a92c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x18A92Cu;
    {
        const bool branch_taken_0x18a92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A92Cu;
        // 0x18a930: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a92c) {
            ctx->pc = 0x18A8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a8a8;
        }
    }
    ctx->pc = 0x18A934u;
    // 0x18a934: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18a938: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18a938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18a93c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a940: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18a944: 0xc041418  jal         func_105060
    ctx->pc = 0x18A944u;
    SET_GPR_U32(ctx, 31, 0x18A94Cu);
    ctx->pc = 0x18A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A944u;
    // 0x18a948: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A944u, 0x18A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A94Cu;
label_18a94c:
    // 0x18a94c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18a950: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a954: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18a958: 0xc041418  jal         func_105060
    ctx->pc = 0x18A958u;
    SET_GPR_U32(ctx, 31, 0x18A960u);
    ctx->pc = 0x18A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A958u;
    // 0x18a95c: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A958u, 0x18A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A960u;
label_18a960:
    // 0x18a960: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a964: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18a968: 0xc041418  jal         func_105060
    ctx->pc = 0x18A968u;
    SET_GPR_U32(ctx, 31, 0x18A970u);
    ctx->pc = 0x18A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A968u;
    // 0x18a96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18A968u, 0x18A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A970u;
label_18a970:
    // 0x18a970: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18A970u;
    SET_GPR_U32(ctx, 31, 0x18A978u);
    ctx->pc = 0x18A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A970u;
    // 0x18a974: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18A970u, 0x18A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A978u;
label_18a978:
    // 0x18a978: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18A978u;
    SET_GPR_U32(ctx, 31, 0x18A980u);
    ctx->pc = 0x18A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A978u;
    // 0x18a97c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18A978u, 0x18A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A980u;
label_18a980:
    // 0x18a980: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a984: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a988: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18A988u;
    SET_GPR_U32(ctx, 31, 0x18A990u);
    ctx->pc = 0x18A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A988u;
    // 0x18a98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18A988u, 0x18A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A990u;
label_18a990:
    // 0x18a990: 0x8fbe02b0  lw          $fp, 0x2B0($sp)
    ctx->pc = 0x18a990u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18a994: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a99c: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x18A99Cu;
    SET_GPR_U32(ctx, 31, 0x18A9A4u);
    ctx->pc = 0x18A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A99Cu;
    // 0x18a9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x18A99Cu, 0x18A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9A4u;
label_18a9a4:
    // 0x18a9a4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18a9a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a9ac: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18A9ACu;
    SET_GPR_U32(ctx, 31, 0x18A9B4u);
    ctx->pc = 0x18A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9ACu;
    // 0x18a9b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18A9ACu, 0x18A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9B4u;
label_18a9b4:
    // 0x18a9b4: 0xc041298  jal         func_104A60
    ctx->pc = 0x18A9B4u;
    SET_GPR_U32(ctx, 31, 0x18A9BCu);
    ctx->pc = 0x18A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9B4u;
    // 0x18a9b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18A9B4u, 0x18A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9BCu;
label_18a9bc:
    // 0x18a9bc: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x18a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18a9c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18a9c4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18a9c8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18a9cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18a9d0: 0xc04150c  jal         func_105430
    ctx->pc = 0x18A9D0u;
    SET_GPR_U32(ctx, 31, 0x18A9D8u);
    ctx->pc = 0x18A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9D0u;
    // 0x18a9d4: 0xac22fc90  sw          $v0, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18A9D0u, 0x18A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9D8u;
label_18a9d8:
    // 0x18a9d8: 0xc04150c  jal         func_105430
    ctx->pc = 0x18A9D8u;
    SET_GPR_U32(ctx, 31, 0x18A9E0u);
    ctx->pc = 0x18A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9D8u;
    // 0x18a9dc: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18A9D8u, 0x18A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9E0u;
label_18a9e0:
    // 0x18a9e0: 0xc04150c  jal         func_105430
    ctx->pc = 0x18A9E0u;
    SET_GPR_U32(ctx, 31, 0x18A9E8u);
    ctx->pc = 0x18A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9E0u;
    // 0x18a9e4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18A9E0u, 0x18A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9E8u;
label_18a9e8:
    // 0x18a9e8: 0x3c0244f0  lui         $v0, 0x44F0
    ctx->pc = 0x18a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17648 << 16));
    // 0x18a9ec: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x18a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x18a9f0: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x18a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x18a9f4: 0x3c03c500  lui         $v1, 0xC500
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50432 << 16));
    // 0x18a9f8: 0x3c0244f9  lui         $v0, 0x44F9
    ctx->pc = 0x18a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17657 << 16));
    // 0x18a9fc: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x18a9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x18aa00: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x18aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
    // 0x18aa04: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x18aa08: 0xafa40204  sw          $a0, 0x204($sp)
    ctx->pc = 0x18aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 4));
    // 0x18aa0c: 0x24e76a20  addiu       $a3, $a3, 0x6A20
    ctx->pc = 0x18aa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27168));
    // 0x18aa10: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x18aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    // 0x18aa14: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x18aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x18aa18: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x18aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x18aa1c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x18aa1cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696A20u));
    // 0x18aa20: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x18aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x18aa24: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x18aa24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x18aa28: 0x24846a20  addiu       $a0, $a0, 0x6A20
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    // 0x18aa2c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x18aa30: 0x24c66a20  addiu       $a2, $a2, 0x6A20
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27168));
    // 0x18aa34: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18aa38: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x18aa38u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696A30u));
    // 0x18aa3c: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x18aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
    // 0x18aa40: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x18aa40u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696A40u));
    // 0x18aa44: 0x7d020020  sq          $v0, 0x20($t0)
    ctx->pc = 0x18aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 2));
    // 0x18aa48: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x18aa48u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696A50u));
    // 0x18aa4c: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AA4Cu;
    SET_GPR_U32(ctx, 31, 0x18AA54u);
    ctx->pc = 0x18AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA4Cu;
    // 0x18aa50: 0x7d020030  sq          $v0, 0x30($t0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AA4Cu, 0x18AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA54u;
label_18aa54:
    // 0x18aa54: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x18aa58: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x18aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18aa5c: 0x24846a20  addiu       $a0, $a0, 0x6A20
    ctx->pc = 0x18aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    // 0x18aa60: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AA60u;
    SET_GPR_U32(ctx, 31, 0x18AA68u);
    ctx->pc = 0x18AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA60u;
    // 0x18aa64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AA60u, 0x18AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA68u;
label_18aa68:
    // 0x18aa68: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x18aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x18aa6c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x18aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x18aa70: 0x24846a20  addiu       $a0, $a0, 0x6A20
    ctx->pc = 0x18aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    // 0x18aa74: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AA74u;
    SET_GPR_U32(ctx, 31, 0x18AA7Cu);
    ctx->pc = 0x18AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA74u;
    // 0x18aa78: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AA74u, 0x18AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA7Cu;
label_18aa7c:
    // 0x18aa7c: 0xc0720b8  jal         func_1C82E0
    ctx->pc = 0x18AA7Cu;
    SET_GPR_U32(ctx, 31, 0x18AA84u);
    ctx->pc = 0x1C82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C82E0u, 0x18AA7Cu, 0x18AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA84u;
label_18aa84:
    // 0x18aa84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18aa84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa88: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x18aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x18aa8c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x18aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x18aa90: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x18aa94: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18aa98: 0x24c66a20  addiu       $a2, $a2, 0x6A20
    ctx->pc = 0x18aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27168));
    // 0x18aa9c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x18aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x18aaa0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18aaa4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x18aaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aaa8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18aaa8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696A20u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696A20u, _value); } while (0);
    // 0x18aaac: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x18aaacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18aab0: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x18aab0u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696A30u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696A30u, _value); } while (0);
    // 0x18aab4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x18aab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18aab8: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x18aab8u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696A40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696A40u, _value); } while (0);
    // 0x18aabc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x18aabcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18aac0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18AAC0u;
    SET_GPR_U32(ctx, 31, 0x18AAC8u);
    ctx->pc = 0x18AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAC0u;
    // 0x18aac4: 0x7cc20030  sq          $v0, 0x30($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18AAC0u, 0x18AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAC8u;
label_18aac8:
    // 0x18aac8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18aacc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18aaccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aad0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x18aad4: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18AAD4u;
    SET_GPR_U32(ctx, 31, 0x18AADCu);
    ctx->pc = 0x18AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAD4u;
    // 0x18aad8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18AAD4u, 0x18AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AADCu;
label_18aadc:
    // 0x18aadc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x18aadcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aae0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18aae4: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18aae8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18aaec: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18aaf0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18aaf4: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x18aaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18aaf8: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x18aafc: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x18aafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18ab00: 0xc041290  jal         func_104A40
    ctx->pc = 0x18AB00u;
    SET_GPR_U32(ctx, 31, 0x18AB08u);
    ctx->pc = 0x18AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB00u;
    // 0x18ab04: 0xafc50004  sw          $a1, 0x4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18AB00u, 0x18AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB08u;
label_18ab08:
    // 0x18ab08: 0xc041294  jal         func_104A50
    ctx->pc = 0x18AB08u;
    SET_GPR_U32(ctx, 31, 0x18AB10u);
    ctx->pc = 0x18AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB08u;
    // 0x18ab0c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18AB08u, 0x18AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB10u;
label_18ab10:
    // 0x18ab10: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ab14: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18AB14u;
    SET_GPR_U32(ctx, 31, 0x18AB1Cu);
    ctx->pc = 0x18AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB14u;
    // 0x18ab18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18AB14u, 0x18AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB1Cu;
label_18ab1c:
    // 0x18ab1c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AB1Cu;
    {
        const bool branch_taken_0x18ab1c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB1Cu;
        // 0x18ab20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab1c) {
            ctx->pc = 0x18AB30u;
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AB24u;
    // 0x18ab24: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ab28: 0xc041306  jal         func_104C18
    ctx->pc = 0x18AB28u;
    SET_GPR_U32(ctx, 31, 0x18AB30u);
    ctx->pc = 0x18AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB28u;
    // 0x18ab2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18AB28u, 0x18AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB30u;
label_18ab30:
    // 0x18ab30: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x18ab34: 0x94226ac4  lhu         $v0, 0x6AC4($at)
    ctx->pc = 0x18ab34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x18ab38: 0x24030204  addiu       $v1, $zero, 0x204
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x18ab3c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x18AB3Cu;
    {
        const bool branch_taken_0x18ab3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB3Cu;
        // 0x18ab40: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab3c) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB44u;
    // 0x18ab44: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x18AB44u;
    {
        const bool branch_taken_0x18ab44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ab44) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB4Cu;
    // 0x18ab4c: 0x2403050a  addiu       $v1, $zero, 0x50A
    ctx->pc = 0x18ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x18ab50: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x18AB50u;
    {
        const bool branch_taken_0x18ab50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB50u;
        // 0x18ab54: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab50) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB58u;
    // 0x18ab58: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18AB58u;
    {
        const bool branch_taken_0x18ab58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ab58) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB60u;
    // 0x18ab60: 0x24030702  addiu       $v1, $zero, 0x702
    ctx->pc = 0x18ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    // 0x18ab64: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18AB64u;
    {
        const bool branch_taken_0x18ab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB64u;
        // 0x18ab68: 0x24030715  addiu       $v1, $zero, 0x715 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1813));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab64) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB6Cu;
    // 0x18ab6c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18AB6Cu;
    {
        const bool branch_taken_0x18ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ab6c) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB74u;
    // 0x18ab74: 0x24030716  addiu       $v1, $zero, 0x716
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1814));
    // 0x18ab78: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x18AB78u;
    {
        const bool branch_taken_0x18ab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB78u;
        // 0x18ab7c: 0x24030110  addiu       $v1, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab78) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB80u;
    // 0x18ab80: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18AB80u;
    {
        const bool branch_taken_0x18ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ab80) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB88u;
    // 0x18ab88: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x18ab8c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18AB8Cu;
    {
        const bool branch_taken_0x18ab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB8Cu;
        // 0x18ab90: 0x24030712  addiu       $v1, $zero, 0x712 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab8c) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB94u;
    // 0x18ab94: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18AB94u;
    {
        const bool branch_taken_0x18ab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ab94) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18AB9Cu;
    // 0x18ab9c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18aba0: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18ABA0u;
    {
        const bool branch_taken_0x18aba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABA0u;
        // 0x18aba4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aba0) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18ABA8u;
    // 0x18aba8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18ABA8u;
    {
        const bool branch_taken_0x18aba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18aba8) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18ABB0u;
    // 0x18abb0: 0x2403070b  addiu       $v1, $zero, 0x70B
    ctx->pc = 0x18abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1803));
    // 0x18abb4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18ABB4u;
    {
        const bool branch_taken_0x18abb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABB4u;
        // 0x18abb8: 0x24030708  addiu       $v1, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abb4) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18ABBCu;
    // 0x18abbc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18ABBCu;
    {
        const bool branch_taken_0x18abbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18abbc) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18ABC4u;
    // 0x18abc4: 0x24030718  addiu       $v1, $zero, 0x718
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1816));
    // 0x18abc8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABC8u;
    {
        const bool branch_taken_0x18abc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC8u;
        // 0x18abcc: 0x2403071b  addiu       $v1, $zero, 0x71B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1819));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abc8) {
            ctx->pc = 0x18ABD8u;
            goto label_18abd8;
        }
    }
    ctx->pc = 0x18ABD0u;
    // 0x18abd0: 0x144300f9  bne         $v0, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x18ABD0u;
    {
        const bool branch_taken_0x18abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18abd0) {
            ctx->pc = 0x18AFB8u;
            goto label_18afb8;
        }
    }
    ctx->pc = 0x18ABD8u;
label_18abd8:
    // 0x18abd8: 0xc04150c  jal         func_105430
    ctx->pc = 0x18ABD8u;
    SET_GPR_U32(ctx, 31, 0x18ABE0u);
    ctx->pc = 0x18ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABD8u;
    // 0x18abdc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18ABD8u, 0x18ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABE0u;
label_18abe0:
    // 0x18abe0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x18abe4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18abe8: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x18abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x18abec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18abf0: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x18abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18abf4: 0x3a640001  xori        $a0, $s3, 0x1
    ctx->pc = 0x18abf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x18abf8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18abfc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x18abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x18ac00: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac04: 0x24426700  addiu       $v0, $v0, 0x6700
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26368));
    // 0x18ac08: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ac0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac10: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ac14: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18ac18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18ac1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18ac1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18ac20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ac24: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x18ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x18ac28: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AC28u;
    SET_GPR_U32(ctx, 31, 0x18AC30u);
    ctx->pc = 0x18AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC28u;
    // 0x18ac2c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AC28u, 0x18AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC30u;
label_18ac30:
    // 0x18ac30: 0x3a650001  xori        $a1, $s3, 0x1
    ctx->pc = 0x18ac30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x18ac34: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x18ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x18ac38: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18ac3c: 0x24426700  addiu       $v0, $v0, 0x6700
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26368));
    // 0x18ac40: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ac44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18ac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ac4c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x18ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18ac50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ac54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18ac58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ac5c: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AC5Cu;
    SET_GPR_U32(ctx, 31, 0x18AC64u);
    ctx->pc = 0x18AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC5Cu;
    // 0x18ac60: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AC5Cu, 0x18AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC64u;
label_18ac64:
    // 0x18ac64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac68: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x18ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x18ac6c: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AC6Cu;
    SET_GPR_U32(ctx, 31, 0x18AC74u);
    ctx->pc = 0x18AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC6Cu;
    // 0x18ac70: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AC6Cu, 0x18AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC74u;
label_18ac74:
    // 0x18ac74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac78: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x18ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18ac7c: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AC7Cu;
    SET_GPR_U32(ctx, 31, 0x18AC84u);
    ctx->pc = 0x18AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC7Cu;
    // 0x18ac80: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AC7Cu, 0x18AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC84u;
label_18ac84:
    // 0x18ac84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac88: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x18ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x18ac8c: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AC8Cu;
    SET_GPR_U32(ctx, 31, 0x18AC94u);
    ctx->pc = 0x18AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC8Cu;
    // 0x18ac90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AC8Cu, 0x18AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC94u;
label_18ac94:
    // 0x18ac94: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ac98: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18AC98u;
    SET_GPR_U32(ctx, 31, 0x18ACA0u);
    ctx->pc = 0x18AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC98u;
    // 0x18ac9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18AC98u, 0x18ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACA0u;
label_18aca0:
    // 0x18aca0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18aca4: 0xc041386  jal         func_104E18
    ctx->pc = 0x18ACA4u;
    SET_GPR_U32(ctx, 31, 0x18ACACu);
    ctx->pc = 0x18ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACA4u;
    // 0x18aca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18ACA4u, 0x18ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACACu;
label_18acac:
    // 0x18acac: 0x97aa0160  lhu         $t2, 0x160($sp)
    ctx->pc = 0x18acacu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18acb0: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x18acb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18acb4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18acb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18acb8: 0x93ab0165  lbu         $t3, 0x165($sp)
    ctx->pc = 0x18acb8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 357)));
    // 0x18acbc: 0x44980  sll         $t1, $a0, 6
    ctx->pc = 0x18acbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18acc0: 0x93a70167  lbu         $a3, 0x167($sp)
    ctx->pc = 0x18acc0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 359)));
    // 0x18acc4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18acc8: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18accc: 0x300c7fff  andi        $t4, $zero, 0x7FFF
    ctx->pc = 0x18acccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18acd0: 0x2408ffbf  addiu       $t0, $zero, -0x41
    ctx->pc = 0x18acd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18acd4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18acd8: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18acd8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18acdc: 0x1465024  and         $t2, $t2, $a2
    ctx->pc = 0x18acdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x18ace0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ace4: 0x14c6025  or          $t4, $t2, $t4
    ctx->pc = 0x18ace4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x18ace8: 0x1682824  and         $a1, $t3, $t0
    ctx->pc = 0x18ace8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x18acec: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x18acecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x18acf0: 0xa94025  or          $t0, $a1, $t1
    ctx->pc = 0x18acf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x18acf4: 0xa7ac0160  sh          $t4, 0x160($sp)
    ctx->pc = 0x18acf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 352), (uint16_t)GPR_U32(ctx, 12));
    // 0x18acf8: 0x93a50161  lbu         $a1, 0x161($sp)
    ctx->pc = 0x18acf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 353)));
    // 0x18acfc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x18acfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x18ad00: 0xa3a40167  sb          $a0, 0x167($sp)
    ctx->pc = 0x18ad00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 359), (uint8_t)GPR_U32(ctx, 4));
    // 0x18ad04: 0x2409ff0f  addiu       $t1, $zero, -0xF1
    ctx->pc = 0x18ad04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18ad08: 0xa3a80165  sb          $t0, 0x165($sp)
    ctx->pc = 0x18ad08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 357), (uint8_t)GPR_U32(ctx, 8));
    // 0x18ad0c: 0x640a0010  daddiu      $t2, $zero, 0x10
    ctx->pc = 0x18ad0cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18ad10: 0x93ab0167  lbu         $t3, 0x167($sp)
    ctx->pc = 0x18ad10u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 359)));
    // 0x18ad14: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x18ad14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18ad18: 0x93a80168  lbu         $t0, 0x168($sp)
    ctx->pc = 0x18ad18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x18ad1c: 0x6407000e  daddiu      $a3, $zero, 0xE
    ctx->pc = 0x18ad1cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18ad20: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x18ad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x18ad24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18ad28: 0xa3a20161  sb          $v0, 0x161($sp)
    ctx->pc = 0x18ad28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 353), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ad2c: 0x1691024  and         $v0, $t3, $t1
    ctx->pc = 0x18ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x18ad30: 0x4a1825  or          $v1, $v0, $t2
    ctx->pc = 0x18ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x18ad34: 0x1061024  and         $v0, $t0, $a2
    ctx->pc = 0x18ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x18ad38: 0xa3a30167  sb          $v1, 0x167($sp)
    ctx->pc = 0x18ad38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 359), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ad3c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18ad40: 0xa3a20168  sb          $v0, 0x168($sp)
    ctx->pc = 0x18ad40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 360), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ad44: 0x7ba50160  lq          $a1, 0x160($sp)
    ctx->pc = 0x18ad44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18ad48: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18AD48u;
    SET_GPR_U32(ctx, 31, 0x18AD50u);
    ctx->pc = 0x18AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD48u;
    // 0x18ad4c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18AD48u, 0x18AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD50u;
label_18ad50:
    // 0x18ad50: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18AD50u;
    SET_GPR_U32(ctx, 31, 0x18AD58u);
    ctx->pc = 0x18AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD50u;
    // 0x18ad54: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18AD50u, 0x18AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD58u;
label_18ad58:
    // 0x18ad58: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18AD58u;
    SET_GPR_U32(ctx, 31, 0x18AD60u);
    ctx->pc = 0x18AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD58u;
    // 0x18ad5c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18AD58u, 0x18AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD60u;
label_18ad60:
    // 0x18ad60: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18ad64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18ad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad68: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18ad68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18ad6c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ad70: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18ad74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18ad74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ad78: 0x344803f0  ori         $t0, $v0, 0x3F0
    ctx->pc = 0x18ad78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x18ad7c: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18AD7Cu;
    SET_GPR_U32(ctx, 31, 0x18AD84u);
    ctx->pc = 0x18AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD7Cu;
    // 0x18ad80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18AD7Cu, 0x18AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD84u;
label_18ad84:
    // 0x18ad84: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18ad88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18ad88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad8c: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18ad8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18ad90: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ad94: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18ad98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18ad98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ad9c: 0x344803f4  ori         $t0, $v0, 0x3F4
    ctx->pc = 0x18ad9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1012);
    // 0x18ada0: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18ADA0u;
    SET_GPR_U32(ctx, 31, 0x18ADA8u);
    ctx->pc = 0x18ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADA0u;
    // 0x18ada4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18ADA0u, 0x18ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADA8u;
label_18ada8:
    // 0x18ada8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18adac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18adb0: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18ADB0u;
    SET_GPR_U32(ctx, 31, 0x18ADB8u);
    ctx->pc = 0x18ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADB0u;
    // 0x18adb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18ADB0u, 0x18ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADB8u;
label_18adb8:
    // 0x18adb8: 0x8fb502b0  lw          $s5, 0x2B0($sp)
    ctx->pc = 0x18adb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18adbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18ADBCu;
    {
        const bool branch_taken_0x18adbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADBCu;
        // 0x18adc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adbc) {
            ctx->pc = 0x18ADF0u;
            goto label_18adf0;
        }
    }
    ctx->pc = 0x18ADC4u;
    // 0x18adc4: 0x0  nop
    ctx->pc = 0x18adc4u;
    // NOP
label_18adc8:
    // 0x18adc8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x18adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18adcc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18add0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18add0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18add4: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x18ADD4u;
    SET_GPR_U32(ctx, 31, 0x18ADDCu);
    ctx->pc = 0x18ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADD4u;
    // 0x18add8: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x18ADD4u, 0x18ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADDCu;
label_18addc:
    // 0x18addc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18addcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ade0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ade4: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18ADE4u;
    SET_GPR_U32(ctx, 31, 0x18ADECu);
    ctx->pc = 0x18ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADE4u;
    // 0x18ade8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18ADE4u, 0x18ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADECu;
label_18adec:
    // 0x18adec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18adecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_18adf0:
    // 0x18adf0: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x18adf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18adf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18ADF4u;
    {
        const bool branch_taken_0x18adf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF4u;
        // 0x18adf8: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adf4) {
            ctx->pc = 0x18ADC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18adc8;
        }
    }
    ctx->pc = 0x18ADFCu;
    // 0x18adfc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18ADFCu;
    SET_GPR_U32(ctx, 31, 0x18AE04u);
    ctx->pc = 0x18AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADFCu;
    // 0x18ae00: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18ADFCu, 0x18AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE04u;
label_18ae04:
    // 0x18ae04: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ae08: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18AE08u;
    SET_GPR_U32(ctx, 31, 0x18AE10u);
    ctx->pc = 0x18AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE08u;
    // 0x18ae0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18AE08u, 0x18AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE10u;
label_18ae10:
    // 0x18ae10: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x18ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x18ae14: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x18ae18: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ae1c: 0x24636700  addiu       $v1, $v1, 0x6700
    ctx->pc = 0x18ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26368));
    // 0x18ae20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ae24: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ae28: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ae2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ae30: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18ae34: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x18ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18ae38: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18ae38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18ae3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ae40: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18ae44: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x18ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x18ae48: 0x344803f0  ori         $t0, $v0, 0x3F0
    ctx->pc = 0x18ae48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x18ae4c: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18AE4Cu;
    SET_GPR_U32(ctx, 31, 0x18AE54u);
    ctx->pc = 0x18AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE4Cu;
    // 0x18ae50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18AE4Cu, 0x18AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE54u;
label_18ae54:
    // 0x18ae54: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x18ae58: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x18ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x18ae5c: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x18ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ae60: 0x24636700  addiu       $v1, $v1, 0x6700
    ctx->pc = 0x18ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26368));
    // 0x18ae64: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ae68: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ae6c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x18ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ae70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ae74: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18ae78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18ae7c: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18ae7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18ae80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ae84: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18ae88: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x18ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x18ae8c: 0x344803f4  ori         $t0, $v0, 0x3F4
    ctx->pc = 0x18ae8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1012);
    // 0x18ae90: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18AE90u;
    SET_GPR_U32(ctx, 31, 0x18AE98u);
    ctx->pc = 0x18AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE90u;
    // 0x18ae94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18AE90u, 0x18AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE98u;
label_18ae98:
    // 0x18ae98: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18ae9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18aea0: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18AEA0u;
    SET_GPR_U32(ctx, 31, 0x18AEA8u);
    ctx->pc = 0x18AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEA0u;
    // 0x18aea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18AEA0u, 0x18AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEA8u;
label_18aea8:
    // 0x18aea8: 0x8fb402b0  lw          $s4, 0x2B0($sp)
    ctx->pc = 0x18aea8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18aeac: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18aeb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18aeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aeb4: 0xc0412c4  jal         func_104B10
    ctx->pc = 0x18AEB4u;
    SET_GPR_U32(ctx, 31, 0x18AEBCu);
    ctx->pc = 0x18AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEB4u;
    // 0x18aeb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B10u, 0x18AEB4u, 0x18AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEBCu;
label_18aebc:
    // 0x18aebc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18aec0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18aec4: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18AEC4u;
    SET_GPR_U32(ctx, 31, 0x18AECCu);
    ctx->pc = 0x18AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEC4u;
    // 0x18aec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18AEC4u, 0x18AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AECCu;
label_18aecc:
    // 0x18aecc: 0xc041298  jal         func_104A60
    ctx->pc = 0x18AECCu;
    SET_GPR_U32(ctx, 31, 0x18AED4u);
    ctx->pc = 0x18AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AECCu;
    // 0x18aed0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18AECCu, 0x18AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AED4u;
label_18aed4:
    // 0x18aed4: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x18aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18aed8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x18aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x18aedc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18aee0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x18aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x18aee4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18aee8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18aee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18aeec: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x18aeecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x18aef0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x18aef4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x18aef8: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x18aefc: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x18aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x18af00: 0x24846ba0  addiu       $a0, $a0, 0x6BA0
    ctx->pc = 0x18af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
    // 0x18af04: 0x24a56ba0  addiu       $a1, $a1, 0x6BA0
    ctx->pc = 0x18af04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27552));
    // 0x18af08: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x18af08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18af0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x18af0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696BA0u));
    // 0x18af10: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18af10u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18af14: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x18af14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696BB0u));
    // 0x18af18: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x18af18u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x18af1c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x18af1cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696BC0u));
    // 0x18af20: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x18af20u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x18af24: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x18af24u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696BD0u));
    // 0x18af28: 0xc04144e  jal         func_105138
    ctx->pc = 0x18AF28u;
    SET_GPR_U32(ctx, 31, 0x18AF30u);
    ctx->pc = 0x18AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF28u;
    // 0x18af2c: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18AF28u, 0x18AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF30u;
label_18af30:
    // 0x18af30: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x18af34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af38: 0x248495c0  addiu       $a0, $a0, -0x6A40
    ctx->pc = 0x18af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940096));
    // 0x18af3c: 0xc059be0  jal         func_166F80
    ctx->pc = 0x18AF3Cu;
    SET_GPR_U32(ctx, 31, 0x18AF44u);
    ctx->pc = 0x18AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF3Cu;
    // 0x18af40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166F80u, 0x18AF3Cu, 0x18AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF44u;
label_18af44:
    // 0x18af44: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x18af44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x18af48: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x18af48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x18af4c: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x18af4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x18af50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18af50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18af54: 0x24e76ba0  addiu       $a3, $a3, 0x6BA0
    ctx->pc = 0x18af54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27552));
    // 0x18af58: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18af5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18af60: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18af60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18af64: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x18af64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18af68: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x18af68u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696BA0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696BA0u, _value); } while (0);
    // 0x18af6c: 0x78c50010  lq          $a1, 0x10($a2)
    ctx->pc = 0x18af6cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18af70: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x18af70u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696BB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696BB0u, _value); } while (0);
    // 0x18af74: 0x78c50020  lq          $a1, 0x20($a2)
    ctx->pc = 0x18af74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x18af78: 0x7ce50020  sq          $a1, 0x20($a3)
    ctx->pc = 0x18af78u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696BC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696BC0u, _value); } while (0);
    // 0x18af7c: 0x78c50030  lq          $a1, 0x30($a2)
    ctx->pc = 0x18af7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x18af80: 0x7ce50030  sq          $a1, 0x30($a3)
    ctx->pc = 0x18af80u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x696BD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x696BD0u, _value); } while (0);
    // 0x18af84: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x18af84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18af88: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x18af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x18af8c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18af90: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x18af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x18af94: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x18af94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18af98: 0xc041290  jal         func_104A40
    ctx->pc = 0x18AF98u;
    SET_GPR_U32(ctx, 31, 0x18AFA0u);
    ctx->pc = 0x18AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF98u;
    // 0x18af9c: 0xae850004  sw          $a1, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18AF98u, 0x18AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA0u;
label_18afa0:
    // 0x18afa0: 0xc041294  jal         func_104A50
    ctx->pc = 0x18AFA0u;
    SET_GPR_U32(ctx, 31, 0x18AFA8u);
    ctx->pc = 0x18AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFA0u;
    // 0x18afa4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18AFA0u, 0x18AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA8u;
label_18afa8:
    // 0x18afa8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18afac: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18AFACu;
    SET_GPR_U32(ctx, 31, 0x18AFB4u);
    ctx->pc = 0x18AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFACu;
    // 0x18afb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18AFACu, 0x18AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFB4u;
label_18afb4:
    // 0x18afb4: 0x0  nop
    ctx->pc = 0x18afb4u;
    // NOP
label_18afb8:
    // 0x18afb8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18afbc: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18AFBCu;
    SET_GPR_U32(ctx, 31, 0x18AFC4u);
    ctx->pc = 0x18AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFBCu;
    // 0x18afc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18AFBCu, 0x18AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFC4u;
label_18afc4:
    // 0x18afc4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18afc8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18AFC8u;
    SET_GPR_U32(ctx, 31, 0x18AFD0u);
    ctx->pc = 0x18AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFC8u;
    // 0x18afcc: 0x3c051300  lui         $a1, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18AFC8u, 0x18AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFD0u;
label_18afd0:
    // 0x18afd0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18afd4: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18AFD4u;
    SET_GPR_U32(ctx, 31, 0x18AFDCu);
    ctx->pc = 0x18AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFD4u;
    // 0x18afd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18AFD4u, 0x18AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFDCu;
label_18afdc:
    // 0x18afdc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18afe0: 0xc041386  jal         func_104E18
    ctx->pc = 0x18AFE0u;
    SET_GPR_U32(ctx, 31, 0x18AFE8u);
    ctx->pc = 0x18AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFE0u;
    // 0x18afe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18AFE0u, 0x18AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFE8u;
label_18afe8:
    // 0x18afe8: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18afe8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18afec: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18afecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18aff0: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18aff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18aff4: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18aff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18aff8: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18aff8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18affc: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18affcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18b000: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18b004: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18b004u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18b008: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18b00c: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18b00cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18b010: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18b014: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18b018: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18b018u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18b01c: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18b01cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18b020: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18b020u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18b024: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18b024u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18b028: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18b028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18b02c: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18b02cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18b030: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18b030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18b034: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18b034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18b038: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18b038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b03c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18b03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18b040: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18b040u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18b044: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18b044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18b048: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18b048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18b04c: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18b04cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18b050: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18b050u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18b054: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18b054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18b058: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18b058u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18b05c: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18b060: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b064: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18b064u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b068: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18b068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18b06c: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18b06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18b070: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18b074: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18b074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b078: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18b078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18b07c: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18b07cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b080: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18b080u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18b084: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18B084u;
    SET_GPR_U32(ctx, 31, 0x18B08Cu);
    ctx->pc = 0x18B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B084u;
    // 0x18b088: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18B084u, 0x18B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B08Cu;
label_18b08c:
    // 0x18b08c: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x18b090: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x18b094: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18b098: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x18b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x18b09c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b0a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b0a4: 0xc041418  jal         func_105060
    ctx->pc = 0x18B0A4u;
    SET_GPR_U32(ctx, 31, 0x18B0ACu);
    ctx->pc = 0x18B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0A4u;
    // 0x18b0a8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B0A4u, 0x18B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0ACu;
label_18b0ac:
    // 0x18b0ac: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x18b0b0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b0b4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18b0b8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18b0bc: 0xc041418  jal         func_105060
    ctx->pc = 0x18B0BCu;
    SET_GPR_U32(ctx, 31, 0x18B0C4u);
    ctx->pc = 0x18B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0BCu;
    // 0x18b0c0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B0BCu, 0x18B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0C4u;
label_18b0c4:
    // 0x18b0c4: 0x3402e0a1  ori         $v0, $zero, 0xE0A1
    ctx->pc = 0x18b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57505);
    // 0x18b0c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18b0cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18b0d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18b0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18b0d4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18b0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18b0d8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b0dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18b0e0: 0xc041418  jal         func_105060
    ctx->pc = 0x18B0E0u;
    SET_GPR_U32(ctx, 31, 0x18B0E8u);
    ctx->pc = 0x18B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0E0u;
    // 0x18b0e4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B0E0u, 0x18B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0E8u;
label_18b0e8:
    // 0x18b0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b0ec: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B0ECu;
    {
        const bool branch_taken_0x18b0ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0ECu;
        // 0x18b0f0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0ec) {
            ctx->pc = 0x18B100u;
            goto label_18b100;
        }
    }
    ctx->pc = 0x18B0F4u;
    // 0x18b0f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B0F4u;
    {
        const bool branch_taken_0x18b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0F4u;
        // 0x18b0f8: 0x34430040  ori         $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0f4) {
            ctx->pc = 0x18B108u;
            goto label_18b108;
        }
    }
    ctx->pc = 0x18B0FCu;
    // 0x18b0fc: 0x0  nop
    ctx->pc = 0x18b0fcu;
    // NOP
label_18b100:
    // 0x18b100: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x18b104: 0x0  nop
    ctx->pc = 0x18b104u;
    // NOP
label_18b108:
    // 0x18b108: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x18b10c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18b10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18b110: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b114: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x18b114u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x18b118: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x18b118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18b11c: 0xc041418  jal         func_105060
    ctx->pc = 0x18B11Cu;
    SET_GPR_U32(ctx, 31, 0x18B124u);
    ctx->pc = 0x18B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B11Cu;
    // 0x18b120: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B11Cu, 0x18B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B124u;
label_18b124:
    // 0x18b124: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18b124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18b128: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b12c: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x18b130: 0xdc460040  ld          $a2, 0x40($v0)
    ctx->pc = 0x18b130u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18b134: 0xc041418  jal         func_105060
    ctx->pc = 0x18B134u;
    SET_GPR_U32(ctx, 31, 0x18B13Cu);
    ctx->pc = 0x18B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B134u;
    // 0x18b138: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B134u, 0x18B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B13Cu;
label_18b13c:
    // 0x18b13c: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18b140: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x18b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x18b144: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18b148: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b14c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18b150: 0xc041418  jal         func_105060
    ctx->pc = 0x18B150u;
    SET_GPR_U32(ctx, 31, 0x18B158u);
    ctx->pc = 0x18B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B150u;
    // 0x18b154: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B150u, 0x18B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B158u;
label_18b158:
    // 0x18b158: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18b158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18b15c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b160: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18b164: 0xc041418  jal         func_105060
    ctx->pc = 0x18B164u;
    SET_GPR_U32(ctx, 31, 0x18B16Cu);
    ctx->pc = 0x18B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B164u;
    // 0x18b168: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B164u, 0x18B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B16Cu;
label_18b16c:
    // 0x18b16c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18b170: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b174: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18b174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18b178: 0xc041418  jal         func_105060
    ctx->pc = 0x18B178u;
    SET_GPR_U32(ctx, 31, 0x18B180u);
    ctx->pc = 0x18B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B178u;
    // 0x18b17c: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B178u, 0x18B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B180u;
label_18b180:
    // 0x18b180: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b184: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18b188: 0xc041418  jal         func_105060
    ctx->pc = 0x18B188u;
    SET_GPR_U32(ctx, 31, 0x18B190u);
    ctx->pc = 0x18B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B188u;
    // 0x18b18c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B188u, 0x18B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B190u;
label_18b190:
    // 0x18b190: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18b194: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b198: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18b19c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18b1a0: 0xc041418  jal         func_105060
    ctx->pc = 0x18B1A0u;
    SET_GPR_U32(ctx, 31, 0x18B1A8u);
    ctx->pc = 0x18B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1A0u;
    // 0x18b1a4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B1A0u, 0x18B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1A8u;
label_18b1a8:
    // 0x18b1a8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b1ac: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18b1b0: 0xc041418  jal         func_105060
    ctx->pc = 0x18B1B0u;
    SET_GPR_U32(ctx, 31, 0x18B1B8u);
    ctx->pc = 0x18B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1B0u;
    // 0x18b1b4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B1B0u, 0x18B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1B8u;
label_18b1b8:
    // 0x18b1b8: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18B1B8u;
    SET_GPR_U32(ctx, 31, 0x18B1C0u);
    ctx->pc = 0x18B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1B8u;
    // 0x18b1bc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18B1B8u, 0x18B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1C0u;
label_18b1c0:
    // 0x18b1c0: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18B1C0u;
    SET_GPR_U32(ctx, 31, 0x18B1C8u);
    ctx->pc = 0x18B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1C0u;
    // 0x18b1c4: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18B1C0u, 0x18B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1C8u;
label_18b1c8:
    // 0x18b1c8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b1cc: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18B1CCu;
    SET_GPR_U32(ctx, 31, 0x18B1D4u);
    ctx->pc = 0x18B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1CCu;
    // 0x18b1d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18B1CCu, 0x18B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1D4u;
label_18b1d4:
    // 0x18b1d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b1d8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b1dc: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x18b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x18b1e0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18b1e4: 0xc04134e  jal         func_104D38
    ctx->pc = 0x18B1E4u;
    SET_GPR_U32(ctx, 31, 0x18B1ECu);
    ctx->pc = 0x18B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1E4u;
    // 0x18b1e8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x18B1E4u, 0x18B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1ECu;
label_18b1ec:
    // 0x18b1ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18b1f0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b1f4: 0xc041404  jal         func_105010
    ctx->pc = 0x18B1F4u;
    SET_GPR_U32(ctx, 31, 0x18B1FCu);
    ctx->pc = 0x18B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1F4u;
    // 0x18b1f8: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x18B1F4u, 0x18B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1FCu;
label_18b1fc:
    // 0x18b1fc: 0xc041372  jal         func_104DC8
    ctx->pc = 0x18B1FCu;
    SET_GPR_U32(ctx, 31, 0x18B204u);
    ctx->pc = 0x18B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1FCu;
    // 0x18b200: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x18B1FCu, 0x18B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B204u;
label_18b204:
    // 0x18b204: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18b204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18b208: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b20c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b210: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18b210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18b214: 0xc041306  jal         func_104C18
    ctx->pc = 0x18B214u;
    SET_GPR_U32(ctx, 31, 0x18B21Cu);
    ctx->pc = 0x18B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B214u;
    // 0x18b218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18B214u, 0x18B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B21Cu;
label_18b21c:
    // 0x18b21c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18b220: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b224: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b228: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18b22c: 0xc041306  jal         func_104C18
    ctx->pc = 0x18B22Cu;
    SET_GPR_U32(ctx, 31, 0x18B234u);
    ctx->pc = 0x18B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B22Cu;
    // 0x18b230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18B22Cu, 0x18B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B234u;
label_18b234:
    // 0x18b234: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x18B234u;
    {
        const bool branch_taken_0x18b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b234) {
            ctx->pc = 0x18B408u;
            goto label_18b408;
        }
    }
    ctx->pc = 0x18B23Cu;
    // 0x18b23c: 0x0  nop
    ctx->pc = 0x18b23cu;
    // NOP
label_18b240:
    // 0x18b240: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b244: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18B244u;
    SET_GPR_U32(ctx, 31, 0x18B24Cu);
    ctx->pc = 0x18B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B244u;
    // 0x18b248: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18B244u, 0x18B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B24Cu;
label_18b24c:
    // 0x18b24c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b250: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18B250u;
    SET_GPR_U32(ctx, 31, 0x18B258u);
    ctx->pc = 0x18B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B250u;
    // 0x18b254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18B250u, 0x18B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B258u;
label_18b258:
    // 0x18b258: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b25c: 0xc041386  jal         func_104E18
    ctx->pc = 0x18B25Cu;
    SET_GPR_U32(ctx, 31, 0x18B264u);
    ctx->pc = 0x18B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B25Cu;
    // 0x18b260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18B25Cu, 0x18B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B264u;
label_18b264:
    // 0x18b264: 0x97ac02a0  lhu         $t4, 0x2A0($sp)
    ctx->pc = 0x18b264u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18b268: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18b26c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18b270: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x18b270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18b274: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x18b278: 0x93a602a7  lbu         $a2, 0x2A7($sp)
    ctx->pc = 0x18b278u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18b27c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18b280: 0x93aa02a5  lbu         $t2, 0x2A5($sp)
    ctx->pc = 0x18b280u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 677)));
    // 0x18b284: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x18b284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18b288: 0x300b7fff  andi        $t3, $zero, 0x7FFF
    ctx->pc = 0x18b288u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18b28c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18b290: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18b294: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x18b294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x18b298: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x18b298u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18b29c: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x18b29cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x18b2a0: 0xa7ab02a0  sh          $t3, 0x2A0($sp)
    ctx->pc = 0x18b2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 672), (uint16_t)GPR_U32(ctx, 11));
    // 0x18b2a4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x18b2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x18b2a8: 0x93ab02a1  lbu         $t3, 0x2A1($sp)
    ctx->pc = 0x18b2a8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
    // 0x18b2ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18b2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18b2b0: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x18b2b4: 0xa3a402a7  sb          $a0, 0x2A7($sp)
    ctx->pc = 0x18b2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b2b8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x18b2b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x18b2bc: 0x93aa02a7  lbu         $t2, 0x2A7($sp)
    ctx->pc = 0x18b2bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 679)));
    // 0x18b2c0: 0xa3a702a5  sb          $a3, 0x2A5($sp)
    ctx->pc = 0x18b2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 677), (uint8_t)GPR_U32(ctx, 7));
    // 0x18b2c4: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x18b2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18b2c8: 0x93a702a8  lbu         $a3, 0x2A8($sp)
    ctx->pc = 0x18b2c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x18b2cc: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x18b2ccu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18b2d0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x18b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18b2d4: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x18b2d4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18b2d8: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x18b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x18b2dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b2e0: 0xa3a202a1  sb          $v0, 0x2A1($sp)
    ctx->pc = 0x18b2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b2e4: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x18b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18b2e8: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x18b2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18b2ec: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x18b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x18b2f0: 0xa3a302a7  sb          $v1, 0x2A7($sp)
    ctx->pc = 0x18b2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b2f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18b2f8: 0xa3a202a8  sb          $v0, 0x2A8($sp)
    ctx->pc = 0x18b2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b2fc: 0x7ba502a0  lq          $a1, 0x2A0($sp)
    ctx->pc = 0x18b2fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x18b300: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18B300u;
    SET_GPR_U32(ctx, 31, 0x18B308u);
    ctx->pc = 0x18B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B300u;
    // 0x18b304: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18B300u, 0x18B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B308u;
label_18b308:
    // 0x18b308: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x18b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18b30c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18b310: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x18b314: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x18b318: 0x3323c  dsll32      $a2, $v1, 8
    ctx->pc = 0x18b318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 8));
    // 0x18b31c: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x18b31cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x18b320: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x18B320u;
    SET_GPR_U32(ctx, 31, 0x18B328u);
    ctx->pc = 0x18B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B320u;
    // 0x18b324: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x18B320u, 0x18B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B328u;
label_18b328:
    // 0x18b328: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x18b328u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b32c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b330: 0xc041418  jal         func_105060
    ctx->pc = 0x18B330u;
    SET_GPR_U32(ctx, 31, 0x18B338u);
    ctx->pc = 0x18B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B330u;
    // 0x18b334: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B330u, 0x18B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B338u;
label_18b338:
    // 0x18b338: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b33c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b340: 0xc041418  jal         func_105060
    ctx->pc = 0x18B340u;
    SET_GPR_U32(ctx, 31, 0x18B348u);
    ctx->pc = 0x18B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B340u;
    // 0x18b344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B340u, 0x18B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B348u;
label_18b348:
    // 0x18b348: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b34c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18b350: 0xc041418  jal         func_105060
    ctx->pc = 0x18B350u;
    SET_GPR_U32(ctx, 31, 0x18B358u);
    ctx->pc = 0x18B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B350u;
    // 0x18b354: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B350u, 0x18B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B358u;
label_18b358:
    // 0x18b358: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b35c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18b360: 0xc041418  jal         func_105060
    ctx->pc = 0x18B360u;
    SET_GPR_U32(ctx, 31, 0x18B368u);
    ctx->pc = 0x18B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B360u;
    // 0x18b364: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18B360u, 0x18B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B368u;
label_18b368:
    // 0x18b368: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18B368u;
    SET_GPR_U32(ctx, 31, 0x18B370u);
    ctx->pc = 0x18B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B368u;
    // 0x18b36c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18B368u, 0x18B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B370u;
label_18b370:
    // 0x18b370: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18B370u;
    SET_GPR_U32(ctx, 31, 0x18B378u);
    ctx->pc = 0x18B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B370u;
    // 0x18b374: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18B370u, 0x18B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B378u;
label_18b378:
    // 0x18b378: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b37c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18B37Cu;
    SET_GPR_U32(ctx, 31, 0x18B384u);
    ctx->pc = 0x18B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B37Cu;
    // 0x18b380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18B37Cu, 0x18B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B384u;
label_18b384:
    // 0x18b384: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18b384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b388: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b38c: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x18b38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x18b390: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x18b390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18b394: 0xc04134e  jal         func_104D38
    ctx->pc = 0x18B394u;
    SET_GPR_U32(ctx, 31, 0x18B39Cu);
    ctx->pc = 0x18B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B394u;
    // 0x18b398: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x18B394u, 0x18B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B39Cu;
label_18b39c:
    // 0x18b39c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b3a0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b3a4: 0xc041404  jal         func_105010
    ctx->pc = 0x18B3A4u;
    SET_GPR_U32(ctx, 31, 0x18B3ACu);
    ctx->pc = 0x18B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3A4u;
    // 0x18b3a8: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x18B3A4u, 0x18B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3ACu;
label_18b3ac:
    // 0x18b3ac: 0xc041372  jal         func_104DC8
    ctx->pc = 0x18B3ACu;
    SET_GPR_U32(ctx, 31, 0x18B3B4u);
    ctx->pc = 0x18B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3ACu;
    // 0x18b3b0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x18B3ACu, 0x18B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3B4u;
label_18b3b4:
    // 0x18b3b4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18b3b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b3bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b3c0: 0x8c45017c  lw          $a1, 0x17C($v0)
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x18b3c4: 0xc041306  jal         func_104C18
    ctx->pc = 0x18B3C4u;
    SET_GPR_U32(ctx, 31, 0x18B3CCu);
    ctx->pc = 0x18B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3C4u;
    // 0x18b3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18B3C4u, 0x18B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3CCu;
label_18b3cc:
    // 0x18b3cc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18b3d0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b3d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b3d8: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x18b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18b3dc: 0xc041306  jal         func_104C18
    ctx->pc = 0x18B3DCu;
    SET_GPR_U32(ctx, 31, 0x18B3E4u);
    ctx->pc = 0x18B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3DCu;
    // 0x18b3e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18B3DCu, 0x18B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3E4u;
label_18b3e4:
    // 0x18b3e4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b3e8: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18B3E8u;
    SET_GPR_U32(ctx, 31, 0x18B3F0u);
    ctx->pc = 0x18B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3E8u;
    // 0x18b3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18B3E8u, 0x18B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3F0u;
label_18b3f0:
    // 0x18b3f0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b3f4: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18B3F4u;
    SET_GPR_U32(ctx, 31, 0x18B3FCu);
    ctx->pc = 0x18B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3F4u;
    // 0x18b3f8: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18B3F4u, 0x18B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3FCu;
label_18b3fc:
    // 0x18b3fc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b400: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18B400u;
    SET_GPR_U32(ctx, 31, 0x18B408u);
    ctx->pc = 0x18B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B400u;
    // 0x18b404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18B400u, 0x18B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B408u;
label_18b408:
    // 0x18b408: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x18b408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x18b40c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b410: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b414: 0x8c45018c  lw          $a1, 0x18C($v0)
    ctx->pc = 0x18b414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x18b418: 0xc041306  jal         func_104C18
    ctx->pc = 0x18B418u;
    SET_GPR_U32(ctx, 31, 0x18B420u);
    ctx->pc = 0x18B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B418u;
    // 0x18b41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x18B418u, 0x18B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B420u;
label_18b420:
    // 0x18b420: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x18b420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x18b424: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18b428:
    // 0x18b428: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b42c: 0x1440f90e  bnez        $v0, . + 4 + (-0x6F2 << 2)
    ctx->pc = 0x18B42Cu;
    {
        const bool branch_taken_0x18b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B42Cu;
        // 0x18b430: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b42c) {
            ctx->pc = 0x189868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189868;
        }
    }
    ctx->pc = 0x18B434u;
    // 0x18b434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18b434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b438: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18B438u;
    SET_GPR_U32(ctx, 31, 0x18B440u);
    ctx->pc = 0x18B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B438u;
    // 0x18b43c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18B438u, 0x18B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B440u;
label_18b440:
    // 0x18b440: 0x8fb002b0  lw          $s0, 0x2B0($sp)
    ctx->pc = 0x18b440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x18b444: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b448: 0xc041338  jal         func_104CE0
    ctx->pc = 0x18B448u;
    SET_GPR_U32(ctx, 31, 0x18B450u);
    ctx->pc = 0x18B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B448u;
    // 0x18b44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x18B448u, 0x18B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B450u;
label_18b450:
    // 0x18b450: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x18b450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x18b454: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b458: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18B458u;
    SET_GPR_U32(ctx, 31, 0x18B460u);
    ctx->pc = 0x18B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B458u;
    // 0x18b45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18B458u, 0x18B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B460u;
label_18b460:
    // 0x18b460: 0xc041298  jal         func_104A60
    ctx->pc = 0x18B460u;
    SET_GPR_U32(ctx, 31, 0x18B468u);
    ctx->pc = 0x18B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B460u;
    // 0x18b464: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18B460u, 0x18B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B468u;
label_18b468:
    // 0x18b468: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x18b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18b46c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18b470: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18b474: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18b474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18b478: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18b47c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18b47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b484: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x18b484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b488: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x18b488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x18b48c: 0xc061c60  jal         func_187180
    ctx->pc = 0x18B48Cu;
    SET_GPR_U32(ctx, 31, 0x18B494u);
    ctx->pc = 0x18B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B48Cu;
    // 0x18b490: 0xac22fc90  sw          $v0, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x18B48Cu, 0x18B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B494u;
label_18b494:
    // 0x18b494: 0x0  nop
    ctx->pc = 0x18b494u;
    // NOP
label_18b498:
    // 0x18b498: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18b498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18b49c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x18b49cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18b4a0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18b4a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x18b4a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b4a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18b4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18b4ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18b4acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b4b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b4b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18b4b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b4b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18b4b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b4bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18b4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b4c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18b4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18b4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4CCu;
        // 0x18b4d0: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B4D4u;
}
