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

// Function: sub_0010FDC8
// Address: 0x10fdc8 - 0x110adc
void sub_0010FDC8_0x10fdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FDC8_0x10fdc8");
#endif

    switch (ctx->pc) {
        case 0x10fdc8u: goto label_10fdc8;
        case 0x10fdccu: goto label_10fdcc;
        case 0x10fdd0u: goto label_10fdd0;
        case 0x10fdd4u: goto label_10fdd4;
        case 0x10fdd8u: goto label_10fdd8;
        case 0x10fddcu: goto label_10fddc;
        case 0x10fde0u: goto label_10fde0;
        case 0x10fde4u: goto label_10fde4;
        case 0x10fde8u: goto label_10fde8;
        case 0x10fdecu: goto label_10fdec;
        case 0x10fdf0u: goto label_10fdf0;
        case 0x10fdf4u: goto label_10fdf4;
        case 0x10fdf8u: goto label_10fdf8;
        case 0x10fdfcu: goto label_10fdfc;
        case 0x10fe00u: goto label_10fe00;
        case 0x10fe04u: goto label_10fe04;
        case 0x10fe08u: goto label_10fe08;
        case 0x10fe0cu: goto label_10fe0c;
        case 0x10fe10u: goto label_10fe10;
        case 0x10fe14u: goto label_10fe14;
        case 0x10fe18u: goto label_10fe18;
        case 0x10fe1cu: goto label_10fe1c;
        case 0x10fe20u: goto label_10fe20;
        case 0x10fe24u: goto label_10fe24;
        case 0x10fe28u: goto label_10fe28;
        case 0x10fe2cu: goto label_10fe2c;
        case 0x10fe30u: goto label_10fe30;
        case 0x10fe34u: goto label_10fe34;
        case 0x10fe38u: goto label_10fe38;
        case 0x10fe3cu: goto label_10fe3c;
        case 0x10fe40u: goto label_10fe40;
        case 0x10fe44u: goto label_10fe44;
        case 0x10fe48u: goto label_10fe48;
        case 0x10fe4cu: goto label_10fe4c;
        case 0x10fe50u: goto label_10fe50;
        case 0x10fe54u: goto label_10fe54;
        case 0x10fe58u: goto label_10fe58;
        case 0x10fe5cu: goto label_10fe5c;
        case 0x10fe60u: goto label_10fe60;
        case 0x10fe64u: goto label_10fe64;
        case 0x10fe68u: goto label_10fe68;
        case 0x10fe6cu: goto label_10fe6c;
        case 0x10fe70u: goto label_10fe70;
        case 0x10fe74u: goto label_10fe74;
        case 0x10fe78u: goto label_10fe78;
        case 0x10fe7cu: goto label_10fe7c;
        case 0x10fe80u: goto label_10fe80;
        case 0x10fe84u: goto label_10fe84;
        case 0x10fe88u: goto label_10fe88;
        case 0x10fe8cu: goto label_10fe8c;
        case 0x10fe90u: goto label_10fe90;
        case 0x10fe94u: goto label_10fe94;
        case 0x10fe98u: goto label_10fe98;
        case 0x10fe9cu: goto label_10fe9c;
        case 0x10fea0u: goto label_10fea0;
        case 0x10fea4u: goto label_10fea4;
        case 0x10fea8u: goto label_10fea8;
        case 0x10feacu: goto label_10feac;
        case 0x10feb0u: goto label_10feb0;
        case 0x10feb4u: goto label_10feb4;
        case 0x10feb8u: goto label_10feb8;
        case 0x10febcu: goto label_10febc;
        case 0x10fec0u: goto label_10fec0;
        case 0x10fec4u: goto label_10fec4;
        case 0x10fec8u: goto label_10fec8;
        case 0x10feccu: goto label_10fecc;
        case 0x10fed0u: goto label_10fed0;
        case 0x10fed4u: goto label_10fed4;
        case 0x10fed8u: goto label_10fed8;
        case 0x10fedcu: goto label_10fedc;
        case 0x10fee0u: goto label_10fee0;
        case 0x10fee4u: goto label_10fee4;
        case 0x10fee8u: goto label_10fee8;
        case 0x10feecu: goto label_10feec;
        case 0x10fef0u: goto label_10fef0;
        case 0x10fef4u: goto label_10fef4;
        case 0x10fef8u: goto label_10fef8;
        case 0x10fefcu: goto label_10fefc;
        case 0x10ff00u: goto label_10ff00;
        case 0x10ff04u: goto label_10ff04;
        case 0x10ff08u: goto label_10ff08;
        case 0x10ff0cu: goto label_10ff0c;
        case 0x10ff10u: goto label_10ff10;
        case 0x10ff14u: goto label_10ff14;
        case 0x10ff18u: goto label_10ff18;
        case 0x10ff1cu: goto label_10ff1c;
        case 0x10ff20u: goto label_10ff20;
        case 0x10ff24u: goto label_10ff24;
        case 0x10ff28u: goto label_10ff28;
        case 0x10ff2cu: goto label_10ff2c;
        case 0x10ff30u: goto label_10ff30;
        case 0x10ff34u: goto label_10ff34;
        case 0x10ff38u: goto label_10ff38;
        case 0x10ff3cu: goto label_10ff3c;
        case 0x10ff40u: goto label_10ff40;
        case 0x10ff44u: goto label_10ff44;
        case 0x10ff48u: goto label_10ff48;
        case 0x10ff4cu: goto label_10ff4c;
        case 0x10ff50u: goto label_10ff50;
        case 0x10ff54u: goto label_10ff54;
        case 0x10ff58u: goto label_10ff58;
        case 0x10ff5cu: goto label_10ff5c;
        case 0x10ff60u: goto label_10ff60;
        case 0x10ff64u: goto label_10ff64;
        case 0x10ff68u: goto label_10ff68;
        case 0x10ff6cu: goto label_10ff6c;
        case 0x10ff70u: goto label_10ff70;
        case 0x10ff74u: goto label_10ff74;
        case 0x10ff78u: goto label_10ff78;
        case 0x10ff7cu: goto label_10ff7c;
        case 0x10ff80u: goto label_10ff80;
        case 0x10ff84u: goto label_10ff84;
        case 0x10ff88u: goto label_10ff88;
        case 0x10ff8cu: goto label_10ff8c;
        case 0x10ff90u: goto label_10ff90;
        case 0x10ff94u: goto label_10ff94;
        case 0x10ff98u: goto label_10ff98;
        case 0x10ff9cu: goto label_10ff9c;
        case 0x10ffa0u: goto label_10ffa0;
        case 0x10ffa4u: goto label_10ffa4;
        case 0x10ffa8u: goto label_10ffa8;
        case 0x10ffacu: goto label_10ffac;
        case 0x10ffb0u: goto label_10ffb0;
        case 0x10ffb4u: goto label_10ffb4;
        case 0x10ffb8u: goto label_10ffb8;
        case 0x10ffbcu: goto label_10ffbc;
        case 0x10ffc0u: goto label_10ffc0;
        case 0x10ffc4u: goto label_10ffc4;
        case 0x10ffc8u: goto label_10ffc8;
        case 0x10ffccu: goto label_10ffcc;
        case 0x10ffd0u: goto label_10ffd0;
        case 0x10ffd4u: goto label_10ffd4;
        case 0x10ffd8u: goto label_10ffd8;
        case 0x10ffdcu: goto label_10ffdc;
        case 0x10ffe0u: goto label_10ffe0;
        case 0x10ffe4u: goto label_10ffe4;
        case 0x10ffe8u: goto label_10ffe8;
        case 0x10ffecu: goto label_10ffec;
        case 0x10fff0u: goto label_10fff0;
        case 0x10fff4u: goto label_10fff4;
        case 0x10fff8u: goto label_10fff8;
        case 0x10fffcu: goto label_10fffc;
        case 0x110000u: goto label_110000;
        case 0x110004u: goto label_110004;
        case 0x110008u: goto label_110008;
        case 0x11000cu: goto label_11000c;
        case 0x110010u: goto label_110010;
        case 0x110014u: goto label_110014;
        case 0x110018u: goto label_110018;
        case 0x11001cu: goto label_11001c;
        case 0x110020u: goto label_110020;
        case 0x110024u: goto label_110024;
        case 0x110028u: goto label_110028;
        case 0x11002cu: goto label_11002c;
        case 0x110030u: goto label_110030;
        case 0x110034u: goto label_110034;
        case 0x110038u: goto label_110038;
        case 0x11003cu: goto label_11003c;
        case 0x110040u: goto label_110040;
        case 0x110044u: goto label_110044;
        case 0x110048u: goto label_110048;
        case 0x11004cu: goto label_11004c;
        case 0x110050u: goto label_110050;
        case 0x110054u: goto label_110054;
        case 0x110058u: goto label_110058;
        case 0x11005cu: goto label_11005c;
        case 0x110060u: goto label_110060;
        case 0x110064u: goto label_110064;
        case 0x110068u: goto label_110068;
        case 0x11006cu: goto label_11006c;
        case 0x110070u: goto label_110070;
        case 0x110074u: goto label_110074;
        case 0x110078u: goto label_110078;
        case 0x11007cu: goto label_11007c;
        case 0x110080u: goto label_110080;
        case 0x110084u: goto label_110084;
        case 0x110088u: goto label_110088;
        case 0x11008cu: goto label_11008c;
        case 0x110090u: goto label_110090;
        case 0x110094u: goto label_110094;
        case 0x110098u: goto label_110098;
        case 0x11009cu: goto label_11009c;
        case 0x1100a0u: goto label_1100a0;
        case 0x1100a4u: goto label_1100a4;
        case 0x1100a8u: goto label_1100a8;
        case 0x1100acu: goto label_1100ac;
        case 0x1100b0u: goto label_1100b0;
        case 0x1100b4u: goto label_1100b4;
        case 0x1100b8u: goto label_1100b8;
        case 0x1100bcu: goto label_1100bc;
        case 0x1100c0u: goto label_1100c0;
        case 0x1100c4u: goto label_1100c4;
        case 0x1100c8u: goto label_1100c8;
        case 0x1100ccu: goto label_1100cc;
        case 0x1100d0u: goto label_1100d0;
        case 0x1100d4u: goto label_1100d4;
        case 0x1100d8u: goto label_1100d8;
        case 0x1100dcu: goto label_1100dc;
        case 0x1100e0u: goto label_1100e0;
        case 0x1100e4u: goto label_1100e4;
        case 0x1100e8u: goto label_1100e8;
        case 0x1100ecu: goto label_1100ec;
        case 0x1100f0u: goto label_1100f0;
        case 0x1100f4u: goto label_1100f4;
        case 0x1100f8u: goto label_1100f8;
        case 0x1100fcu: goto label_1100fc;
        case 0x110100u: goto label_110100;
        case 0x110104u: goto label_110104;
        case 0x110108u: goto label_110108;
        case 0x11010cu: goto label_11010c;
        case 0x110110u: goto label_110110;
        case 0x110114u: goto label_110114;
        case 0x110118u: goto label_110118;
        case 0x11011cu: goto label_11011c;
        case 0x110120u: goto label_110120;
        case 0x110124u: goto label_110124;
        case 0x110128u: goto label_110128;
        case 0x11012cu: goto label_11012c;
        case 0x110130u: goto label_110130;
        case 0x110134u: goto label_110134;
        case 0x110138u: goto label_110138;
        case 0x11013cu: goto label_11013c;
        case 0x110140u: goto label_110140;
        case 0x110144u: goto label_110144;
        case 0x110148u: goto label_110148;
        case 0x11014cu: goto label_11014c;
        case 0x110150u: goto label_110150;
        case 0x110154u: goto label_110154;
        case 0x110158u: goto label_110158;
        case 0x11015cu: goto label_11015c;
        case 0x110160u: goto label_110160;
        case 0x110164u: goto label_110164;
        case 0x110168u: goto label_110168;
        case 0x11016cu: goto label_11016c;
        case 0x110170u: goto label_110170;
        case 0x110174u: goto label_110174;
        case 0x110178u: goto label_110178;
        case 0x11017cu: goto label_11017c;
        case 0x110180u: goto label_110180;
        case 0x110184u: goto label_110184;
        case 0x110188u: goto label_110188;
        case 0x11018cu: goto label_11018c;
        case 0x110190u: goto label_110190;
        case 0x110194u: goto label_110194;
        case 0x110198u: goto label_110198;
        case 0x11019cu: goto label_11019c;
        case 0x1101a0u: goto label_1101a0;
        case 0x1101a4u: goto label_1101a4;
        case 0x1101a8u: goto label_1101a8;
        case 0x1101acu: goto label_1101ac;
        case 0x1101b0u: goto label_1101b0;
        case 0x1101b4u: goto label_1101b4;
        case 0x1101b8u: goto label_1101b8;
        case 0x1101bcu: goto label_1101bc;
        case 0x1101c0u: goto label_1101c0;
        case 0x1101c4u: goto label_1101c4;
        case 0x1101c8u: goto label_1101c8;
        case 0x1101ccu: goto label_1101cc;
        case 0x1101d0u: goto label_1101d0;
        case 0x1101d4u: goto label_1101d4;
        case 0x1101d8u: goto label_1101d8;
        case 0x1101dcu: goto label_1101dc;
        case 0x1101e0u: goto label_1101e0;
        case 0x1101e4u: goto label_1101e4;
        case 0x1101e8u: goto label_1101e8;
        case 0x1101ecu: goto label_1101ec;
        case 0x1101f0u: goto label_1101f0;
        case 0x1101f4u: goto label_1101f4;
        case 0x1101f8u: goto label_1101f8;
        case 0x1101fcu: goto label_1101fc;
        case 0x110200u: goto label_110200;
        case 0x110204u: goto label_110204;
        case 0x110208u: goto label_110208;
        case 0x11020cu: goto label_11020c;
        case 0x110210u: goto label_110210;
        case 0x110214u: goto label_110214;
        case 0x110218u: goto label_110218;
        case 0x11021cu: goto label_11021c;
        case 0x110220u: goto label_110220;
        case 0x110224u: goto label_110224;
        case 0x110228u: goto label_110228;
        case 0x11022cu: goto label_11022c;
        case 0x110230u: goto label_110230;
        case 0x110234u: goto label_110234;
        case 0x110238u: goto label_110238;
        case 0x11023cu: goto label_11023c;
        case 0x110240u: goto label_110240;
        case 0x110244u: goto label_110244;
        case 0x110248u: goto label_110248;
        case 0x11024cu: goto label_11024c;
        case 0x110250u: goto label_110250;
        case 0x110254u: goto label_110254;
        case 0x110258u: goto label_110258;
        case 0x11025cu: goto label_11025c;
        case 0x110260u: goto label_110260;
        case 0x110264u: goto label_110264;
        case 0x110268u: goto label_110268;
        case 0x11026cu: goto label_11026c;
        case 0x110270u: goto label_110270;
        case 0x110274u: goto label_110274;
        case 0x110278u: goto label_110278;
        case 0x11027cu: goto label_11027c;
        case 0x110280u: goto label_110280;
        case 0x110284u: goto label_110284;
        case 0x110288u: goto label_110288;
        case 0x11028cu: goto label_11028c;
        case 0x110290u: goto label_110290;
        case 0x110294u: goto label_110294;
        case 0x110298u: goto label_110298;
        case 0x11029cu: goto label_11029c;
        case 0x1102a0u: goto label_1102a0;
        case 0x1102a4u: goto label_1102a4;
        case 0x1102a8u: goto label_1102a8;
        case 0x1102acu: goto label_1102ac;
        case 0x1102b0u: goto label_1102b0;
        case 0x1102b4u: goto label_1102b4;
        case 0x1102b8u: goto label_1102b8;
        case 0x1102bcu: goto label_1102bc;
        case 0x1102c0u: goto label_1102c0;
        case 0x1102c4u: goto label_1102c4;
        case 0x1102c8u: goto label_1102c8;
        case 0x1102ccu: goto label_1102cc;
        case 0x1102d0u: goto label_1102d0;
        case 0x1102d4u: goto label_1102d4;
        case 0x1102d8u: goto label_1102d8;
        case 0x1102dcu: goto label_1102dc;
        case 0x1102e0u: goto label_1102e0;
        case 0x1102e4u: goto label_1102e4;
        case 0x1102e8u: goto label_1102e8;
        case 0x1102ecu: goto label_1102ec;
        case 0x1102f0u: goto label_1102f0;
        case 0x1102f4u: goto label_1102f4;
        case 0x1102f8u: goto label_1102f8;
        case 0x1102fcu: goto label_1102fc;
        case 0x110300u: goto label_110300;
        case 0x110304u: goto label_110304;
        case 0x110308u: goto label_110308;
        case 0x11030cu: goto label_11030c;
        case 0x110310u: goto label_110310;
        case 0x110314u: goto label_110314;
        case 0x110318u: goto label_110318;
        case 0x11031cu: goto label_11031c;
        case 0x110320u: goto label_110320;
        case 0x110324u: goto label_110324;
        case 0x110328u: goto label_110328;
        case 0x11032cu: goto label_11032c;
        case 0x110330u: goto label_110330;
        case 0x110334u: goto label_110334;
        case 0x110338u: goto label_110338;
        case 0x11033cu: goto label_11033c;
        case 0x110340u: goto label_110340;
        case 0x110344u: goto label_110344;
        case 0x110348u: goto label_110348;
        case 0x11034cu: goto label_11034c;
        case 0x110350u: goto label_110350;
        case 0x110354u: goto label_110354;
        case 0x110358u: goto label_110358;
        case 0x11035cu: goto label_11035c;
        case 0x110360u: goto label_110360;
        case 0x110364u: goto label_110364;
        case 0x110368u: goto label_110368;
        case 0x11036cu: goto label_11036c;
        case 0x110370u: goto label_110370;
        case 0x110374u: goto label_110374;
        case 0x110378u: goto label_110378;
        case 0x11037cu: goto label_11037c;
        case 0x110380u: goto label_110380;
        case 0x110384u: goto label_110384;
        case 0x110388u: goto label_110388;
        case 0x11038cu: goto label_11038c;
        case 0x110390u: goto label_110390;
        case 0x110394u: goto label_110394;
        case 0x110398u: goto label_110398;
        case 0x11039cu: goto label_11039c;
        case 0x1103a0u: goto label_1103a0;
        case 0x1103a4u: goto label_1103a4;
        case 0x1103a8u: goto label_1103a8;
        case 0x1103acu: goto label_1103ac;
        case 0x1103b0u: goto label_1103b0;
        case 0x1103b4u: goto label_1103b4;
        case 0x1103b8u: goto label_1103b8;
        case 0x1103bcu: goto label_1103bc;
        case 0x1103c0u: goto label_1103c0;
        case 0x1103c4u: goto label_1103c4;
        case 0x1103c8u: goto label_1103c8;
        case 0x1103ccu: goto label_1103cc;
        case 0x1103d0u: goto label_1103d0;
        case 0x1103d4u: goto label_1103d4;
        case 0x1103d8u: goto label_1103d8;
        case 0x1103dcu: goto label_1103dc;
        case 0x1103e0u: goto label_1103e0;
        case 0x1103e4u: goto label_1103e4;
        case 0x1103e8u: goto label_1103e8;
        case 0x1103ecu: goto label_1103ec;
        case 0x1103f0u: goto label_1103f0;
        case 0x1103f4u: goto label_1103f4;
        case 0x1103f8u: goto label_1103f8;
        case 0x1103fcu: goto label_1103fc;
        case 0x110400u: goto label_110400;
        case 0x110404u: goto label_110404;
        case 0x110408u: goto label_110408;
        case 0x11040cu: goto label_11040c;
        case 0x110410u: goto label_110410;
        case 0x110414u: goto label_110414;
        case 0x110418u: goto label_110418;
        case 0x11041cu: goto label_11041c;
        case 0x110420u: goto label_110420;
        case 0x110424u: goto label_110424;
        case 0x110428u: goto label_110428;
        case 0x11042cu: goto label_11042c;
        case 0x110430u: goto label_110430;
        case 0x110434u: goto label_110434;
        case 0x110438u: goto label_110438;
        case 0x11043cu: goto label_11043c;
        case 0x110440u: goto label_110440;
        case 0x110444u: goto label_110444;
        case 0x110448u: goto label_110448;
        case 0x11044cu: goto label_11044c;
        case 0x110450u: goto label_110450;
        case 0x110454u: goto label_110454;
        case 0x110458u: goto label_110458;
        case 0x11045cu: goto label_11045c;
        case 0x110460u: goto label_110460;
        case 0x110464u: goto label_110464;
        case 0x110468u: goto label_110468;
        case 0x11046cu: goto label_11046c;
        case 0x110470u: goto label_110470;
        case 0x110474u: goto label_110474;
        case 0x110478u: goto label_110478;
        case 0x11047cu: goto label_11047c;
        case 0x110480u: goto label_110480;
        case 0x110484u: goto label_110484;
        case 0x110488u: goto label_110488;
        case 0x11048cu: goto label_11048c;
        case 0x110490u: goto label_110490;
        case 0x110494u: goto label_110494;
        case 0x110498u: goto label_110498;
        case 0x11049cu: goto label_11049c;
        case 0x1104a0u: goto label_1104a0;
        case 0x1104a4u: goto label_1104a4;
        case 0x1104a8u: goto label_1104a8;
        case 0x1104acu: goto label_1104ac;
        case 0x1104b0u: goto label_1104b0;
        case 0x1104b4u: goto label_1104b4;
        case 0x1104b8u: goto label_1104b8;
        case 0x1104bcu: goto label_1104bc;
        case 0x1104c0u: goto label_1104c0;
        case 0x1104c4u: goto label_1104c4;
        case 0x1104c8u: goto label_1104c8;
        case 0x1104ccu: goto label_1104cc;
        case 0x1104d0u: goto label_1104d0;
        case 0x1104d4u: goto label_1104d4;
        case 0x1104d8u: goto label_1104d8;
        case 0x1104dcu: goto label_1104dc;
        case 0x1104e0u: goto label_1104e0;
        case 0x1104e4u: goto label_1104e4;
        case 0x1104e8u: goto label_1104e8;
        case 0x1104ecu: goto label_1104ec;
        case 0x1104f0u: goto label_1104f0;
        case 0x1104f4u: goto label_1104f4;
        case 0x1104f8u: goto label_1104f8;
        case 0x1104fcu: goto label_1104fc;
        case 0x110500u: goto label_110500;
        case 0x110504u: goto label_110504;
        case 0x110508u: goto label_110508;
        case 0x11050cu: goto label_11050c;
        case 0x110510u: goto label_110510;
        case 0x110514u: goto label_110514;
        case 0x110518u: goto label_110518;
        case 0x11051cu: goto label_11051c;
        case 0x110520u: goto label_110520;
        case 0x110524u: goto label_110524;
        case 0x110528u: goto label_110528;
        case 0x11052cu: goto label_11052c;
        case 0x110530u: goto label_110530;
        case 0x110534u: goto label_110534;
        case 0x110538u: goto label_110538;
        case 0x11053cu: goto label_11053c;
        case 0x110540u: goto label_110540;
        case 0x110544u: goto label_110544;
        case 0x110548u: goto label_110548;
        case 0x11054cu: goto label_11054c;
        case 0x110550u: goto label_110550;
        case 0x110554u: goto label_110554;
        case 0x110558u: goto label_110558;
        case 0x11055cu: goto label_11055c;
        case 0x110560u: goto label_110560;
        case 0x110564u: goto label_110564;
        case 0x110568u: goto label_110568;
        case 0x11056cu: goto label_11056c;
        case 0x110570u: goto label_110570;
        case 0x110574u: goto label_110574;
        case 0x110578u: goto label_110578;
        case 0x11057cu: goto label_11057c;
        case 0x110580u: goto label_110580;
        case 0x110584u: goto label_110584;
        case 0x110588u: goto label_110588;
        case 0x11058cu: goto label_11058c;
        case 0x110590u: goto label_110590;
        case 0x110594u: goto label_110594;
        case 0x110598u: goto label_110598;
        case 0x11059cu: goto label_11059c;
        case 0x1105a0u: goto label_1105a0;
        case 0x1105a4u: goto label_1105a4;
        case 0x1105a8u: goto label_1105a8;
        case 0x1105acu: goto label_1105ac;
        case 0x1105b0u: goto label_1105b0;
        case 0x1105b4u: goto label_1105b4;
        case 0x1105b8u: goto label_1105b8;
        case 0x1105bcu: goto label_1105bc;
        case 0x1105c0u: goto label_1105c0;
        case 0x1105c4u: goto label_1105c4;
        case 0x1105c8u: goto label_1105c8;
        case 0x1105ccu: goto label_1105cc;
        case 0x1105d0u: goto label_1105d0;
        case 0x1105d4u: goto label_1105d4;
        case 0x1105d8u: goto label_1105d8;
        case 0x1105dcu: goto label_1105dc;
        case 0x1105e0u: goto label_1105e0;
        case 0x1105e4u: goto label_1105e4;
        case 0x1105e8u: goto label_1105e8;
        case 0x1105ecu: goto label_1105ec;
        case 0x1105f0u: goto label_1105f0;
        case 0x1105f4u: goto label_1105f4;
        case 0x1105f8u: goto label_1105f8;
        case 0x1105fcu: goto label_1105fc;
        case 0x110600u: goto label_110600;
        case 0x110604u: goto label_110604;
        case 0x110608u: goto label_110608;
        case 0x11060cu: goto label_11060c;
        case 0x110610u: goto label_110610;
        case 0x110614u: goto label_110614;
        case 0x110618u: goto label_110618;
        case 0x11061cu: goto label_11061c;
        case 0x110620u: goto label_110620;
        case 0x110624u: goto label_110624;
        case 0x110628u: goto label_110628;
        case 0x11062cu: goto label_11062c;
        case 0x110630u: goto label_110630;
        case 0x110634u: goto label_110634;
        case 0x110638u: goto label_110638;
        case 0x11063cu: goto label_11063c;
        case 0x110640u: goto label_110640;
        case 0x110644u: goto label_110644;
        case 0x110648u: goto label_110648;
        case 0x11064cu: goto label_11064c;
        case 0x110650u: goto label_110650;
        case 0x110654u: goto label_110654;
        case 0x110658u: goto label_110658;
        case 0x11065cu: goto label_11065c;
        case 0x110660u: goto label_110660;
        case 0x110664u: goto label_110664;
        case 0x110668u: goto label_110668;
        case 0x11066cu: goto label_11066c;
        case 0x110670u: goto label_110670;
        case 0x110674u: goto label_110674;
        case 0x110678u: goto label_110678;
        case 0x11067cu: goto label_11067c;
        case 0x110680u: goto label_110680;
        case 0x110684u: goto label_110684;
        case 0x110688u: goto label_110688;
        case 0x11068cu: goto label_11068c;
        case 0x110690u: goto label_110690;
        case 0x110694u: goto label_110694;
        case 0x110698u: goto label_110698;
        case 0x11069cu: goto label_11069c;
        case 0x1106a0u: goto label_1106a0;
        case 0x1106a4u: goto label_1106a4;
        case 0x1106a8u: goto label_1106a8;
        case 0x1106acu: goto label_1106ac;
        case 0x1106b0u: goto label_1106b0;
        case 0x1106b4u: goto label_1106b4;
        case 0x1106b8u: goto label_1106b8;
        case 0x1106bcu: goto label_1106bc;
        case 0x1106c0u: goto label_1106c0;
        case 0x1106c4u: goto label_1106c4;
        case 0x1106c8u: goto label_1106c8;
        case 0x1106ccu: goto label_1106cc;
        case 0x1106d0u: goto label_1106d0;
        case 0x1106d4u: goto label_1106d4;
        case 0x1106d8u: goto label_1106d8;
        case 0x1106dcu: goto label_1106dc;
        case 0x1106e0u: goto label_1106e0;
        case 0x1106e4u: goto label_1106e4;
        case 0x1106e8u: goto label_1106e8;
        case 0x1106ecu: goto label_1106ec;
        case 0x1106f0u: goto label_1106f0;
        case 0x1106f4u: goto label_1106f4;
        case 0x1106f8u: goto label_1106f8;
        case 0x1106fcu: goto label_1106fc;
        case 0x110700u: goto label_110700;
        case 0x110704u: goto label_110704;
        case 0x110708u: goto label_110708;
        case 0x11070cu: goto label_11070c;
        case 0x110710u: goto label_110710;
        case 0x110714u: goto label_110714;
        case 0x110718u: goto label_110718;
        case 0x11071cu: goto label_11071c;
        case 0x110720u: goto label_110720;
        case 0x110724u: goto label_110724;
        case 0x110728u: goto label_110728;
        case 0x11072cu: goto label_11072c;
        case 0x110730u: goto label_110730;
        case 0x110734u: goto label_110734;
        case 0x110738u: goto label_110738;
        case 0x11073cu: goto label_11073c;
        case 0x110740u: goto label_110740;
        case 0x110744u: goto label_110744;
        case 0x110748u: goto label_110748;
        case 0x11074cu: goto label_11074c;
        case 0x110750u: goto label_110750;
        case 0x110754u: goto label_110754;
        case 0x110758u: goto label_110758;
        case 0x11075cu: goto label_11075c;
        case 0x110760u: goto label_110760;
        case 0x110764u: goto label_110764;
        case 0x110768u: goto label_110768;
        case 0x11076cu: goto label_11076c;
        case 0x110770u: goto label_110770;
        case 0x110774u: goto label_110774;
        case 0x110778u: goto label_110778;
        case 0x11077cu: goto label_11077c;
        case 0x110780u: goto label_110780;
        case 0x110784u: goto label_110784;
        case 0x110788u: goto label_110788;
        case 0x11078cu: goto label_11078c;
        case 0x110790u: goto label_110790;
        case 0x110794u: goto label_110794;
        case 0x110798u: goto label_110798;
        case 0x11079cu: goto label_11079c;
        case 0x1107a0u: goto label_1107a0;
        case 0x1107a4u: goto label_1107a4;
        case 0x1107a8u: goto label_1107a8;
        case 0x1107acu: goto label_1107ac;
        case 0x1107b0u: goto label_1107b0;
        case 0x1107b4u: goto label_1107b4;
        case 0x1107b8u: goto label_1107b8;
        case 0x1107bcu: goto label_1107bc;
        case 0x1107c0u: goto label_1107c0;
        case 0x1107c4u: goto label_1107c4;
        case 0x1107c8u: goto label_1107c8;
        case 0x1107ccu: goto label_1107cc;
        case 0x1107d0u: goto label_1107d0;
        case 0x1107d4u: goto label_1107d4;
        case 0x1107d8u: goto label_1107d8;
        case 0x1107dcu: goto label_1107dc;
        case 0x1107e0u: goto label_1107e0;
        case 0x1107e4u: goto label_1107e4;
        case 0x1107e8u: goto label_1107e8;
        case 0x1107ecu: goto label_1107ec;
        case 0x1107f0u: goto label_1107f0;
        case 0x1107f4u: goto label_1107f4;
        case 0x1107f8u: goto label_1107f8;
        case 0x1107fcu: goto label_1107fc;
        case 0x110800u: goto label_110800;
        case 0x110804u: goto label_110804;
        case 0x110808u: goto label_110808;
        case 0x11080cu: goto label_11080c;
        case 0x110810u: goto label_110810;
        case 0x110814u: goto label_110814;
        case 0x110818u: goto label_110818;
        case 0x11081cu: goto label_11081c;
        case 0x110820u: goto label_110820;
        case 0x110824u: goto label_110824;
        case 0x110828u: goto label_110828;
        case 0x11082cu: goto label_11082c;
        case 0x110830u: goto label_110830;
        case 0x110834u: goto label_110834;
        case 0x110838u: goto label_110838;
        case 0x11083cu: goto label_11083c;
        case 0x110840u: goto label_110840;
        case 0x110844u: goto label_110844;
        case 0x110848u: goto label_110848;
        case 0x11084cu: goto label_11084c;
        case 0x110850u: goto label_110850;
        case 0x110854u: goto label_110854;
        case 0x110858u: goto label_110858;
        case 0x11085cu: goto label_11085c;
        case 0x110860u: goto label_110860;
        case 0x110864u: goto label_110864;
        case 0x110868u: goto label_110868;
        case 0x11086cu: goto label_11086c;
        case 0x110870u: goto label_110870;
        case 0x110874u: goto label_110874;
        case 0x110878u: goto label_110878;
        case 0x11087cu: goto label_11087c;
        case 0x110880u: goto label_110880;
        case 0x110884u: goto label_110884;
        case 0x110888u: goto label_110888;
        case 0x11088cu: goto label_11088c;
        case 0x110890u: goto label_110890;
        case 0x110894u: goto label_110894;
        case 0x110898u: goto label_110898;
        case 0x11089cu: goto label_11089c;
        case 0x1108a0u: goto label_1108a0;
        case 0x1108a4u: goto label_1108a4;
        case 0x1108a8u: goto label_1108a8;
        case 0x1108acu: goto label_1108ac;
        case 0x1108b0u: goto label_1108b0;
        case 0x1108b4u: goto label_1108b4;
        case 0x1108b8u: goto label_1108b8;
        case 0x1108bcu: goto label_1108bc;
        case 0x1108c0u: goto label_1108c0;
        case 0x1108c4u: goto label_1108c4;
        case 0x1108c8u: goto label_1108c8;
        case 0x1108ccu: goto label_1108cc;
        case 0x1108d0u: goto label_1108d0;
        case 0x1108d4u: goto label_1108d4;
        case 0x1108d8u: goto label_1108d8;
        case 0x1108dcu: goto label_1108dc;
        case 0x1108e0u: goto label_1108e0;
        case 0x1108e4u: goto label_1108e4;
        case 0x1108e8u: goto label_1108e8;
        case 0x1108ecu: goto label_1108ec;
        case 0x1108f0u: goto label_1108f0;
        case 0x1108f4u: goto label_1108f4;
        case 0x1108f8u: goto label_1108f8;
        case 0x1108fcu: goto label_1108fc;
        case 0x110900u: goto label_110900;
        case 0x110904u: goto label_110904;
        case 0x110908u: goto label_110908;
        case 0x11090cu: goto label_11090c;
        case 0x110910u: goto label_110910;
        case 0x110914u: goto label_110914;
        case 0x110918u: goto label_110918;
        case 0x11091cu: goto label_11091c;
        case 0x110920u: goto label_110920;
        case 0x110924u: goto label_110924;
        case 0x110928u: goto label_110928;
        case 0x11092cu: goto label_11092c;
        case 0x110930u: goto label_110930;
        case 0x110934u: goto label_110934;
        case 0x110938u: goto label_110938;
        case 0x11093cu: goto label_11093c;
        case 0x110940u: goto label_110940;
        case 0x110944u: goto label_110944;
        case 0x110948u: goto label_110948;
        case 0x11094cu: goto label_11094c;
        case 0x110950u: goto label_110950;
        case 0x110954u: goto label_110954;
        case 0x110958u: goto label_110958;
        case 0x11095cu: goto label_11095c;
        case 0x110960u: goto label_110960;
        case 0x110964u: goto label_110964;
        case 0x110968u: goto label_110968;
        case 0x11096cu: goto label_11096c;
        case 0x110970u: goto label_110970;
        case 0x110974u: goto label_110974;
        case 0x110978u: goto label_110978;
        case 0x11097cu: goto label_11097c;
        case 0x110980u: goto label_110980;
        case 0x110984u: goto label_110984;
        case 0x110988u: goto label_110988;
        case 0x11098cu: goto label_11098c;
        case 0x110990u: goto label_110990;
        case 0x110994u: goto label_110994;
        case 0x110998u: goto label_110998;
        case 0x11099cu: goto label_11099c;
        case 0x1109a0u: goto label_1109a0;
        case 0x1109a4u: goto label_1109a4;
        case 0x1109a8u: goto label_1109a8;
        case 0x1109acu: goto label_1109ac;
        case 0x1109b0u: goto label_1109b0;
        case 0x1109b4u: goto label_1109b4;
        case 0x1109b8u: goto label_1109b8;
        case 0x1109bcu: goto label_1109bc;
        case 0x1109c0u: goto label_1109c0;
        case 0x1109c4u: goto label_1109c4;
        case 0x1109c8u: goto label_1109c8;
        case 0x1109ccu: goto label_1109cc;
        case 0x1109d0u: goto label_1109d0;
        case 0x1109d4u: goto label_1109d4;
        case 0x1109d8u: goto label_1109d8;
        case 0x1109dcu: goto label_1109dc;
        case 0x1109e0u: goto label_1109e0;
        case 0x1109e4u: goto label_1109e4;
        case 0x1109e8u: goto label_1109e8;
        case 0x1109ecu: goto label_1109ec;
        case 0x1109f0u: goto label_1109f0;
        case 0x1109f4u: goto label_1109f4;
        case 0x1109f8u: goto label_1109f8;
        case 0x1109fcu: goto label_1109fc;
        case 0x110a00u: goto label_110a00;
        case 0x110a04u: goto label_110a04;
        case 0x110a08u: goto label_110a08;
        case 0x110a0cu: goto label_110a0c;
        case 0x110a10u: goto label_110a10;
        case 0x110a14u: goto label_110a14;
        case 0x110a18u: goto label_110a18;
        case 0x110a1cu: goto label_110a1c;
        case 0x110a20u: goto label_110a20;
        case 0x110a24u: goto label_110a24;
        case 0x110a28u: goto label_110a28;
        case 0x110a2cu: goto label_110a2c;
        case 0x110a30u: goto label_110a30;
        case 0x110a34u: goto label_110a34;
        case 0x110a38u: goto label_110a38;
        case 0x110a3cu: goto label_110a3c;
        case 0x110a40u: goto label_110a40;
        case 0x110a44u: goto label_110a44;
        case 0x110a48u: goto label_110a48;
        case 0x110a4cu: goto label_110a4c;
        case 0x110a50u: goto label_110a50;
        case 0x110a54u: goto label_110a54;
        case 0x110a58u: goto label_110a58;
        case 0x110a5cu: goto label_110a5c;
        case 0x110a60u: goto label_110a60;
        case 0x110a64u: goto label_110a64;
        case 0x110a68u: goto label_110a68;
        case 0x110a6cu: goto label_110a6c;
        case 0x110a70u: goto label_110a70;
        case 0x110a74u: goto label_110a74;
        case 0x110a78u: goto label_110a78;
        case 0x110a7cu: goto label_110a7c;
        case 0x110a80u: goto label_110a80;
        case 0x110a84u: goto label_110a84;
        case 0x110a88u: goto label_110a88;
        case 0x110a8cu: goto label_110a8c;
        case 0x110a90u: goto label_110a90;
        case 0x110a94u: goto label_110a94;
        case 0x110a98u: goto label_110a98;
        case 0x110a9cu: goto label_110a9c;
        case 0x110aa0u: goto label_110aa0;
        case 0x110aa4u: goto label_110aa4;
        case 0x110aa8u: goto label_110aa8;
        case 0x110aacu: goto label_110aac;
        case 0x110ab0u: goto label_110ab0;
        case 0x110ab4u: goto label_110ab4;
        case 0x110ab8u: goto label_110ab8;
        case 0x110abcu: goto label_110abc;
        case 0x110ac0u: goto label_110ac0;
        case 0x110ac4u: goto label_110ac4;
        case 0x110ac8u: goto label_110ac8;
        case 0x110accu: goto label_110acc;
        case 0x110ad0u: goto label_110ad0;
        case 0x110ad4u: goto label_110ad4;
        case 0x110ad8u: goto label_110ad8;
        default: break;
    }

    ctx->pc = 0x10fdc8u;

label_10fdc8:
    // 0x10fdc8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_10fdcc:
    // 0x10fdcc: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x10fdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_10fdd0:
    // 0x10fdd0: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x10fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_10fdd4:
    // 0x10fdd4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x10fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_10fdd8:
    // 0x10fdd8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x10fdd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10fddc:
    // 0x10fddc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_10fde0:
    // 0x10fde0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x10fde0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10fde4:
    // 0x10fde4: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x10fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_10fde8:
    // 0x10fde8: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x10fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_10fdec:
    // 0x10fdec: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x10fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_10fdf0:
    // 0x10fdf0: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x10fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_10fdf4:
    // 0x10fdf4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x10fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_10fdf8:
    // 0x10fdf8: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x10fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_10fdfc:
    // 0x10fdfc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x10fdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_10fe00:
    // 0x10fe00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_10fe04:
    // 0x10fe04: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x10fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_10fe08:
    // 0x10fe08: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x10fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_10fe0c:
    // 0x10fe0c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10fe0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10fe10:
    // 0x10fe10: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x10fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_10fe14:
    // 0x10fe14: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10fe14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10fe18:
    // 0x10fe18: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_10fe1c:
    if (ctx->pc == 0x10FE1Cu) {
        ctx->pc = 0x10FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE18u;
        // 0x10fe1c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE20u;
        goto label_10fe20;
    }
    ctx->pc = 0x10FE18u;
    {
        const bool branch_taken_0x10fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE18u;
        // 0x10fe1c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe18) {
            ctx->pc = 0x110A8Cu;
            goto label_110a8c;
        }
    }
    ctx->pc = 0x10FE20u;
label_10fe20:
    // 0x10fe20: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x10fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10fe24:
    // 0x10fe24: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x10fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_10fe28:
    // 0x10fe28: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10fe2c:
    // 0x10fe2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x10fe2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fe30:
    // 0x10fe30: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x10fe30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_10fe34:
    // 0x10fe34: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x10fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_10fe38:
    // 0x10fe38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fe38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fe3c:
    // 0x10fe3c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x10fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_10fe40:
    // 0x10fe40: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_10fe44:
    if (ctx->pc == 0x10FE44u) {
        ctx->pc = 0x10FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE40u;
        // 0x10fe44: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE48u;
        goto label_10fe48;
    }
    ctx->pc = 0x10FE40u;
    {
        const bool branch_taken_0x10fe40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE40u;
        // 0x10fe44: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe40) {
            ctx->pc = 0x110A44u;
            goto label_110a44;
        }
    }
    ctx->pc = 0x10FE48u;
label_10fe48:
    // 0x10fe48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10fe48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10fe4c:
    // 0x10fe4c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10fe4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10fe50:
    // 0x10fe50: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x10fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_10fe54:
    // 0x10fe54: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10fe58:
    // 0x10fe58: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x10fe58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_10fe5c:
    // 0x10fe5c: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x10fe5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_10fe60:
    // 0x10fe60: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_10fe64:
    if (ctx->pc == 0x10FE64u) {
        ctx->pc = 0x10FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE60u;
        // 0x10fe64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE68u;
        goto label_10fe68;
    }
    ctx->pc = 0x10FE60u;
    {
        const bool branch_taken_0x10fe60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE60u;
        // 0x10fe64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe60) {
            ctx->pc = 0x110594u;
            goto label_110594;
        }
    }
    ctx->pc = 0x10FE68u;
label_10fe68:
    // 0x10fe68: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x10fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_10fe6c:
    // 0x10fe6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10fe70:
    // 0x10fe70: 0x244224e0  addiu       $v0, $v0, 0x24E0
    ctx->pc = 0x10fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9440));
label_10fe74:
    // 0x10fe74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10fe78:
    // 0x10fe78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10fe7c:
    // 0x10fe7c: 0x800008  jr          $a0
label_10fe80:
    if (ctx->pc == 0x10FE80u) {
        ctx->pc = 0x10FE84u;
        goto label_10fe84;
    }
    ctx->pc = 0x10FE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FE84u: goto label_10fe84;
            case 0x10FE8Cu: goto label_10fe8c;
            case 0x10FE94u: goto label_10fe94;
            case 0x10FE9Cu: goto label_10fe9c;
            case 0x10FEE4u: goto label_10fee4;
            case 0x10FF6Cu: goto label_10ff6c;
            case 0x10FF74u: goto label_10ff74;
            case 0x10FF7Cu: goto label_10ff7c;
            case 0x10FF84u: goto label_10ff84;
            case 0x10FF8Cu: goto label_10ff8c;
            case 0x110040u: goto label_110040;
            case 0x11006Cu: goto label_11006c;
            case 0x11012Cu: goto label_11012c;
            case 0x110244u: goto label_110244;
            case 0x110308u: goto label_110308;
            case 0x11036Cu: goto label_11036c;
            case 0x1104B0u: goto label_1104b0;
            case 0x1104E8u: goto label_1104e8;
            case 0x110594u: goto label_110594;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FE84u;
label_10fe84:
    // 0x10fe84: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_10fe88:
    if (ctx->pc == 0x10FE88u) {
        ctx->pc = 0x10FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE84u;
        // 0x10fe88: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE8Cu;
        goto label_10fe8c;
    }
    ctx->pc = 0x10FE84u;
    {
        const bool branch_taken_0x10fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE84u;
        // 0x10fe88: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe84) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FE8Cu;
label_10fe8c:
    // 0x10fe8c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_10fe90:
    if (ctx->pc == 0x10FE90u) {
        ctx->pc = 0x10FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE8Cu;
        // 0x10fe90: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE94u;
        goto label_10fe94;
    }
    ctx->pc = 0x10FE8Cu;
    {
        const bool branch_taken_0x10fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE8Cu;
        // 0x10fe90: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe8c) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FE94u;
label_10fe94:
    // 0x10fe94: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_10fe98:
    if (ctx->pc == 0x10FE98u) {
        ctx->pc = 0x10FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE94u;
        // 0x10fe98: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FE9Cu;
        goto label_10fe9c;
    }
    ctx->pc = 0x10FE94u;
    {
        const bool branch_taken_0x10fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE94u;
        // 0x10fe98: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe94) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FE9Cu;
label_10fe9c:
    // 0x10fe9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fea0:
    // 0x10fea0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10fea4:
    // 0x10fea4: 0x0  nop
    ctx->pc = 0x10fea4u;
    // NOP
label_10fea8:
    // 0x10fea8: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x10fea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10feac:
    // 0x10feac: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x10feacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10feb0:
    // 0x10feb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10feb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10feb4:
    // 0x10feb4: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10feb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_10feb8:
    // 0x10feb8: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10feb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10febc:
    // 0x10febc: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x10febcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_10fec0:
    // 0x10fec0: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10fec4:
    // 0x10fec4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10fec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10fec8:
    // 0x10fec8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_10fecc:
    if (ctx->pc == 0x10FECCu) {
        ctx->pc = 0x10FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEC8u;
        // 0x10fecc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FED0u;
        goto label_10fed0;
    }
    ctx->pc = 0x10FEC8u;
    {
        const bool branch_taken_0x10fec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEC8u;
        // 0x10fecc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fec8) {
            ctx->pc = 0x10FEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fea8;
        }
    }
    ctx->pc = 0x10FED0u;
label_10fed0:
    // 0x10fed0: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x10fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_10fed4:
    // 0x10fed4: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_10fed8:
    if (ctx->pc == 0x10FED8u) {
        ctx->pc = 0x10FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FED4u;
        // 0x10fed8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FEDCu;
        goto label_10fedc;
    }
    ctx->pc = 0x10FED4u;
    {
        const bool branch_taken_0x10fed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FED4u;
        // 0x10fed8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fed4) {
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x10FEDCu;
label_10fedc:
    // 0x10fedc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_10fee0:
    if (ctx->pc == 0x10FEE0u) {
        ctx->pc = 0x10FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEDCu;
        // 0x10fee0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FEE4u;
        goto label_10fee4;
    }
    ctx->pc = 0x10FEDCu;
    {
        const bool branch_taken_0x10fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEDCu;
        // 0x10fee0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fedc) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FEE4u;
label_10fee4:
    // 0x10fee4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10fee4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10fee8:
    // 0x10fee8: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x10fee8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_10feec:
    // 0x10feec: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x10feecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10fef0:
    // 0x10fef0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x10fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_10fef4:
    // 0x10fef4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_10fef8:
    if (ctx->pc == 0x10FEF8u) {
        ctx->pc = 0x10FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEF4u;
        // 0x10fef8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FEFCu;
        goto label_10fefc;
    }
    ctx->pc = 0x10FEF4u;
    {
        const bool branch_taken_0x10fef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEF4u;
        // 0x10fef8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fef4) {
            ctx->pc = 0x10FF18u;
            goto label_10ff18;
        }
    }
    ctx->pc = 0x10FEFCu;
label_10fefc:
    // 0x10fefc: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10fefcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10ff00:
    // 0x10ff00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10ff04:
    // 0x10ff04: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x10ff04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10ff08:
    // 0x10ff08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10ff08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ff0c:
    // 0x10ff0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10ff0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10ff10:
    // 0x10ff10: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_10ff14:
    if (ctx->pc == 0x10FF14u) {
        ctx->pc = 0x10FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF10u;
        // 0x10ff14: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF18u;
        goto label_10ff18;
    }
    ctx->pc = 0x10FF10u;
    {
        const bool branch_taken_0x10ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF10u;
        // 0x10ff14: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff10) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FF18u;
label_10ff18:
    // 0x10ff18: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10ff1c:
    // 0x10ff1c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10ff1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10ff20:
    // 0x10ff20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10ff24:
    if (ctx->pc == 0x10FF24u) {
        ctx->pc = 0x10FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF20u;
        // 0x10ff24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF28u;
        goto label_10ff28;
    }
    ctx->pc = 0x10FF20u;
    {
        const bool branch_taken_0x10ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF20u;
        // 0x10ff24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff20) {
            ctx->pc = 0x10FF58u;
            goto label_10ff58;
        }
    }
    ctx->pc = 0x10FF28u;
label_10ff28:
    // 0x10ff28: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x10ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10ff2c:
    // 0x10ff2c: 0x0  nop
    ctx->pc = 0x10ff2cu;
    // NOP
label_10ff30:
    // 0x10ff30: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x10ff30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10ff34:
    // 0x10ff34: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x10ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10ff38:
    // 0x10ff38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x10ff38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ff3c:
    // 0x10ff3c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10ff3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_10ff40:
    // 0x10ff40: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x10ff40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_10ff44:
    // 0x10ff44: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_10ff48:
    // 0x10ff48: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x10ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_10ff4c:
    // 0x10ff4c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x10ff4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_10ff50:
    // 0x10ff50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_10ff54:
    if (ctx->pc == 0x10FF54u) {
        ctx->pc = 0x10FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF50u;
        // 0x10ff54: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF58u;
        goto label_10ff58;
    }
    ctx->pc = 0x10FF50u;
    {
        const bool branch_taken_0x10ff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF50u;
        // 0x10ff54: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff50) {
            ctx->pc = 0x10FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ff30;
        }
    }
    ctx->pc = 0x10FF58u;
label_10ff58:
    // 0x10ff58: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10ff5c:
    // 0x10ff5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10ff5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ff60:
    // 0x10ff60: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x10ff60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10ff64:
    // 0x10ff64: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_10ff68:
    if (ctx->pc == 0x10FF68u) {
        ctx->pc = 0x10FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF64u;
        // 0x10ff68: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF6Cu;
        goto label_10ff6c;
    }
    ctx->pc = 0x10FF64u;
    {
        const bool branch_taken_0x10ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF64u;
        // 0x10ff68: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff64) {
            ctx->pc = 0x10FED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fed4;
        }
    }
    ctx->pc = 0x10FF6Cu;
label_10ff6c:
    // 0x10ff6c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_10ff70:
    if (ctx->pc == 0x10FF70u) {
        ctx->pc = 0x10FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF6Cu;
        // 0x10ff70: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF74u;
        goto label_10ff74;
    }
    ctx->pc = 0x10FF6Cu;
    {
        const bool branch_taken_0x10ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF6Cu;
        // 0x10ff70: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff6c) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FF74u;
label_10ff74:
    // 0x10ff74: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_10ff78:
    if (ctx->pc == 0x10FF78u) {
        ctx->pc = 0x10FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF74u;
        // 0x10ff78: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF7Cu;
        goto label_10ff7c;
    }
    ctx->pc = 0x10FF74u;
    {
        const bool branch_taken_0x10ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF74u;
        // 0x10ff78: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff74) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FF7Cu;
label_10ff7c:
    // 0x10ff7c: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_10ff80:
    if (ctx->pc == 0x10FF80u) {
        ctx->pc = 0x10FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF7Cu;
        // 0x10ff80: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF84u;
        goto label_10ff84;
    }
    ctx->pc = 0x10FF7Cu;
    {
        const bool branch_taken_0x10ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF7Cu;
        // 0x10ff80: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff7c) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FF84u;
label_10ff84:
    // 0x10ff84: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_10ff88:
    if (ctx->pc == 0x10FF88u) {
        ctx->pc = 0x10FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF84u;
        // 0x10ff88: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF8Cu;
        goto label_10ff8c;
    }
    ctx->pc = 0x10FF84u;
    {
        const bool branch_taken_0x10ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF84u;
        // 0x10ff88: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff84) {
            ctx->pc = 0x10FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FF8Cu;
label_10ff8c:
    // 0x10ff8c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x10ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_10ff90:
    // 0x10ff90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10ff94:
    if (ctx->pc == 0x10FF94u) {
        ctx->pc = 0x10FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF90u;
        // 0x10ff94: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FF98u;
        goto label_10ff98;
    }
    ctx->pc = 0x10FF90u;
    {
        const bool branch_taken_0x10ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF90u;
        // 0x10ff94: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff90) {
            ctx->pc = 0x10FFA4u;
            goto label_10ffa4;
        }
    }
    ctx->pc = 0x10FF98u;
label_10ff98:
    // 0x10ff98: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x10ff98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_10ff9c:
    // 0x10ff9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_10ffa0:
    if (ctx->pc == 0x10FFA0u) {
        ctx->pc = 0x10FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF9Cu;
        // 0x10ffa0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFA4u;
        goto label_10ffa4;
    }
    ctx->pc = 0x10FF9Cu;
    {
        const bool branch_taken_0x10ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF9Cu;
        // 0x10ffa0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff9c) {
            ctx->pc = 0x10FFB8u;
            goto label_10ffb8;
        }
    }
    ctx->pc = 0x10FFA4u;
label_10ffa4:
    // 0x10ffa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ffa8:
    if (ctx->pc == 0x10FFA8u) {
        ctx->pc = 0x10FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFA4u;
        // 0x10ffa8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFACu;
        goto label_10ffac;
    }
    ctx->pc = 0x10FFA4u;
    {
        const bool branch_taken_0x10ffa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFA4u;
        // 0x10ffa8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffa4) {
            ctx->pc = 0x10FFB4u;
            goto label_10ffb4;
        }
    }
    ctx->pc = 0x10FFACu;
label_10ffac:
    // 0x10ffac: 0x10000002  b           . + 4 + (0x2 << 2)
label_10ffb0:
    if (ctx->pc == 0x10FFB0u) {
        ctx->pc = 0x10FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFACu;
        // 0x10ffb0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFB4u;
        goto label_10ffb4;
    }
    ctx->pc = 0x10FFACu;
    {
        const bool branch_taken_0x10ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFACu;
        // 0x10ffb0: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffac) {
            ctx->pc = 0x10FFB8u;
            goto label_10ffb8;
        }
    }
    ctx->pc = 0x10FFB4u;
label_10ffb4:
    // 0x10ffb4: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x10ffb4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_10ffb8:
    // 0x10ffb8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_10ffbc:
    if (ctx->pc == 0x10FFBCu) {
        ctx->pc = 0x10FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB8u;
        // 0x10ffbc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFC0u;
        goto label_10ffc0;
    }
    ctx->pc = 0x10FFB8u;
    {
        const bool branch_taken_0x10ffb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB8u;
        // 0x10ffbc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffb8) {
            ctx->pc = 0x10FFE8u;
            goto label_10ffe8;
        }
    }
    ctx->pc = 0x10FFC0u;
label_10ffc0:
    // 0x10ffc0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x10ffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_10ffc4:
    // 0x10ffc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10ffc8:
    if (ctx->pc == 0x10FFC8u) {
        ctx->pc = 0x10FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFC4u;
        // 0x10ffc8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFCCu;
        goto label_10ffcc;
    }
    ctx->pc = 0x10FFC4u;
    {
        const bool branch_taken_0x10ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFC4u;
        // 0x10ffc8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffc4) {
            ctx->pc = 0x10FFD4u;
            goto label_10ffd4;
        }
    }
    ctx->pc = 0x10FFCCu;
label_10ffcc:
    // 0x10ffcc: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_10ffd0:
    if (ctx->pc == 0x10FFD0u) {
        ctx->pc = 0x10FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFCCu;
        // 0x10ffd0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFD4u;
        goto label_10ffd4;
    }
    ctx->pc = 0x10FFCCu;
    {
        const bool branch_taken_0x10ffcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFCCu;
        // 0x10ffd0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffcc) {
            ctx->pc = 0x11002Cu;
            goto label_11002c;
        }
    }
    ctx->pc = 0x10FFD4u;
label_10ffd4:
    // 0x10ffd4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ffd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ffd8:
    // 0x10ffd8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x10ffd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_10ffdc:
    // 0x10ffdc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10ffdcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10ffe0:
    // 0x10ffe0: 0x10000013  b           . + 4 + (0x13 << 2)
label_10ffe4:
    if (ctx->pc == 0x10FFE4u) {
        ctx->pc = 0x10FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFE0u;
        // 0x10ffe4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FFE8u;
        goto label_10ffe8;
    }
    ctx->pc = 0x10FFE0u;
    {
        const bool branch_taken_0x10ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFE0u;
        // 0x10ffe4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffe0) {
            ctx->pc = 0x110030u;
            goto label_110030;
        }
    }
    ctx->pc = 0x10FFE8u;
label_10ffe8:
    // 0x10ffe8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x10ffe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_10ffec:
    // 0x10ffec: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x10ffecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_10fff0:
    // 0x10fff0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x10fff0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_10fff4:
    // 0x10fff4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x10fff4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_10fff8:
    // 0x10fff8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x10fff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_10fffc:
    // 0x10fffc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x10fffcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_110000:
    // 0x110000: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x110000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_110004:
    // 0x110004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x110004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_110008:
    // 0x110008: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x110008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_11000c:
    // 0x11000c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x11000cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_110010:
    // 0x110010: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_110014:
    if (ctx->pc == 0x110014u) {
        ctx->pc = 0x110018u;
        goto label_110018;
    }
    ctx->pc = 0x110010u;
    {
        const bool branch_taken_0x110010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x110010) {
            ctx->pc = 0x10FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fff8;
        }
    }
    ctx->pc = 0x110018u;
label_110018:
    // 0x110018: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_11001c:
    if (ctx->pc == 0x11001Cu) {
        ctx->pc = 0x11001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110018u;
        // 0x11001c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110020u;
        goto label_110020;
    }
    ctx->pc = 0x110018u;
    {
        const bool branch_taken_0x110018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110018u;
        // 0x11001c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110018) {
            ctx->pc = 0x110034u;
            goto label_110034;
        }
    }
    ctx->pc = 0x110020u;
label_110020:
    // 0x110020: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x110020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_110024:
    // 0x110024: 0x10000003  b           . + 4 + (0x3 << 2)
label_110028:
    if (ctx->pc == 0x110028u) {
        ctx->pc = 0x110028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110024u;
        // 0x110028: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11002Cu;
        goto label_11002c;
    }
    ctx->pc = 0x110024u;
    {
        const bool branch_taken_0x110024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110024u;
        // 0x110028: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110024) {
            ctx->pc = 0x110034u;
            goto label_110034;
        }
    }
    ctx->pc = 0x11002Cu;
label_11002c:
    // 0x11002c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x11002cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110030:
    // 0x110030: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110030u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110034:
    // 0x110034: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x110034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_110038:
    // 0x110038: 0x10000162  b           . + 4 + (0x162 << 2)
label_11003c:
    if (ctx->pc == 0x11003Cu) {
        ctx->pc = 0x11003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110038u;
        // 0x11003c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110040u;
        goto label_110040;
    }
    ctx->pc = 0x110038u;
    {
        const bool branch_taken_0x110038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110038u;
        // 0x11003c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110038) {
            ctx->pc = 0x1105C4u;
            goto label_1105c4;
        }
    }
    ctx->pc = 0x110040u;
label_110040:
    // 0x110040: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_110044:
    // 0x110044: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x110044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_110048:
    // 0x110048: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_11004c:
    if (ctx->pc == 0x11004Cu) {
        ctx->pc = 0x11004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110048u;
        // 0x11004c: 0x244424b0  addiu       $a0, $v0, 0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110050u;
        goto label_110050;
    }
    ctx->pc = 0x110048u;
    {
        const bool branch_taken_0x110048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110048u;
        // 0x11004c: 0x244424b0  addiu       $a0, $v0, 0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110048) {
            ctx->pc = 0x110094u;
            goto label_110094;
        }
    }
    ctx->pc = 0x110050u;
label_110050:
    // 0x110050: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x110050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_110054:
    // 0x110054: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x110054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_110058:
    // 0x110058: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x110058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_11005c:
    // 0x11005c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_110060:
    // 0x110060: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x110060u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_110064:
    // 0x110064: 0x1000000b  b           . + 4 + (0xB << 2)
label_110068:
    if (ctx->pc == 0x110068u) {
        ctx->pc = 0x110068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110064u;
        // 0x110068: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11006Cu;
        goto label_11006c;
    }
    ctx->pc = 0x110064u;
    {
        const bool branch_taken_0x110064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110064u;
        // 0x110068: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110064) {
            ctx->pc = 0x110094u;
            goto label_110094;
        }
    }
    ctx->pc = 0x11006Cu;
label_11006c:
    // 0x11006c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x11006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_110070:
    // 0x110070: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x110070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_110074:
    // 0x110074: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_110078:
    if (ctx->pc == 0x110078u) {
        ctx->pc = 0x110078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110074u;
        // 0x110078: 0x244424c8  addiu       $a0, $v0, 0x24C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11007Cu;
        goto label_11007c;
    }
    ctx->pc = 0x110074u;
    {
        const bool branch_taken_0x110074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110074u;
        // 0x110078: 0x244424c8  addiu       $a0, $v0, 0x24C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110074) {
            ctx->pc = 0x110094u;
            goto label_110094;
        }
    }
    ctx->pc = 0x11007Cu;
label_11007c:
    // 0x11007c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x11007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_110080:
    // 0x110080: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x110080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_110084:
    // 0x110084: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x110084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_110088:
    // 0x110088: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x110088u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_11008c:
    // 0x11008c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x11008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_110090:
    // 0x110090: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x110090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_110094:
    // 0x110094: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x110094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_110098:
    // 0x110098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11009c:
    if (ctx->pc == 0x11009Cu) {
        ctx->pc = 0x11009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110098u;
        // 0x11009c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100A0u;
        goto label_1100a0;
    }
    ctx->pc = 0x110098u;
    {
        const bool branch_taken_0x110098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110098u;
        // 0x11009c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110098) {
            ctx->pc = 0x1100ACu;
            goto label_1100ac;
        }
    }
    ctx->pc = 0x1100A0u;
label_1100a0:
    // 0x1100a0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1100a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1100a4:
    // 0x1100a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1100a8:
    if (ctx->pc == 0x1100A8u) {
        ctx->pc = 0x1100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100A4u;
        // 0x1100a8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100ACu;
        goto label_1100ac;
    }
    ctx->pc = 0x1100A4u;
    {
        const bool branch_taken_0x1100a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100A4u;
        // 0x1100a8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100a4) {
            ctx->pc = 0x1100C0u;
            goto label_1100c0;
        }
    }
    ctx->pc = 0x1100ACu;
label_1100ac:
    // 0x1100ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1100b0:
    if (ctx->pc == 0x1100B0u) {
        ctx->pc = 0x1100B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100ACu;
        // 0x1100b0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100B4u;
        goto label_1100b4;
    }
    ctx->pc = 0x1100ACu;
    {
        const bool branch_taken_0x1100ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100ACu;
        // 0x1100b0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100ac) {
            ctx->pc = 0x1100BCu;
            goto label_1100bc;
        }
    }
    ctx->pc = 0x1100B4u;
label_1100b4:
    // 0x1100b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1100b8:
    if (ctx->pc == 0x1100B8u) {
        ctx->pc = 0x1100B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100B4u;
        // 0x1100b8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100BCu;
        goto label_1100bc;
    }
    ctx->pc = 0x1100B4u;
    {
        const bool branch_taken_0x1100b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100B4u;
        // 0x1100b8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100b4) {
            ctx->pc = 0x1100C0u;
            goto label_1100c0;
        }
    }
    ctx->pc = 0x1100BCu;
label_1100bc:
    // 0x1100bc: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x1100bcu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_1100c0:
    // 0x1100c0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_1100c4:
    if (ctx->pc == 0x1100C4u) {
        ctx->pc = 0x1100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100C0u;
        // 0x1100c4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100C8u;
        goto label_1100c8;
    }
    ctx->pc = 0x1100C0u;
    {
        const bool branch_taken_0x1100c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100C0u;
        // 0x1100c4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100c0) {
            ctx->pc = 0x1100F4u;
            goto label_1100f4;
        }
    }
    ctx->pc = 0x1100C8u;
label_1100c8:
    // 0x1100c8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x1100c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_1100cc:
    // 0x1100cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1100d0:
    if (ctx->pc == 0x1100D0u) {
        ctx->pc = 0x1100D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100CCu;
        // 0x1100d0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100D4u;
        goto label_1100d4;
    }
    ctx->pc = 0x1100CCu;
    {
        const bool branch_taken_0x1100cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100CCu;
        // 0x1100d0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100cc) {
            ctx->pc = 0x1100DCu;
            goto label_1100dc;
        }
    }
    ctx->pc = 0x1100D4u;
label_1100d4:
    // 0x1100d4: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_1100d8:
    if (ctx->pc == 0x1100D8u) {
        ctx->pc = 0x1100D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100D4u;
        // 0x1100d8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100DCu;
        goto label_1100dc;
    }
    ctx->pc = 0x1100D4u;
    {
        const bool branch_taken_0x1100d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100D4u;
        // 0x1100d8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100d4) {
            ctx->pc = 0x1102F0u;
            goto label_1102f0;
        }
    }
    ctx->pc = 0x1100DCu;
label_1100dc:
    // 0x1100dc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1100e0:
    // 0x1100e0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1100e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1100e4:
    // 0x1100e4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1100e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1100e8:
    // 0x1100e8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1100e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1100ec:
    // 0x1100ec: 0x10000081  b           . + 4 + (0x81 << 2)
label_1100f0:
    if (ctx->pc == 0x1100F0u) {
        ctx->pc = 0x1100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100ECu;
        // 0x1100f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1100F4u;
        goto label_1100f4;
    }
    ctx->pc = 0x1100ECu;
    {
        const bool branch_taken_0x1100ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100ECu;
        // 0x1100f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1100ec) {
            ctx->pc = 0x1102F4u;
            goto label_1102f4;
        }
    }
    ctx->pc = 0x1100F4u;
label_1100f4:
    // 0x1100f4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1100f8:
    // 0x1100f8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1100f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1100fc:
    // 0x1100fc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1100fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110100:
    // 0x110100: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x110100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_110104:
    // 0x110104: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x110104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_110108:
    // 0x110108: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x110108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_11010c:
    // 0x11010c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x11010cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_110110:
    // 0x110110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x110110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110114:
    // 0x110114: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x110114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_110118:
    // 0x110118: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x110118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_11011c:
    // 0x11011c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_110120:
    if (ctx->pc == 0x110120u) {
        ctx->pc = 0x110120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11011Cu;
        // 0x110120: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110124u;
        goto label_110124;
    }
    ctx->pc = 0x11011Cu;
    {
        const bool branch_taken_0x11011c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11011Cu;
        // 0x110120: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11011c) {
            ctx->pc = 0x110100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110100;
        }
    }
    ctx->pc = 0x110124u;
label_110124:
    // 0x110124: 0x10000075  b           . + 4 + (0x75 << 2)
label_110128:
    if (ctx->pc == 0x110128u) {
        ctx->pc = 0x110128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110124u;
        // 0x110128: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11012Cu;
        goto label_11012c;
    }
    ctx->pc = 0x110124u;
    {
        const bool branch_taken_0x110124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110124u;
        // 0x110128: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110124) {
            ctx->pc = 0x1102FCu;
            goto label_1102fc;
        }
    }
    ctx->pc = 0x11012Cu;
label_11012c:
    // 0x11012c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x11012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_110130:
    // 0x110130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_110134:
    if (ctx->pc == 0x110134u) {
        ctx->pc = 0x110134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110130u;
        // 0x110134: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110138u;
        goto label_110138;
    }
    ctx->pc = 0x110130u;
    {
        const bool branch_taken_0x110130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110130u;
        // 0x110134: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110130) {
            ctx->pc = 0x110144u;
            goto label_110144;
        }
    }
    ctx->pc = 0x110138u;
label_110138:
    // 0x110138: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x110138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_11013c:
    // 0x11013c: 0x10000006  b           . + 4 + (0x6 << 2)
label_110140:
    if (ctx->pc == 0x110140u) {
        ctx->pc = 0x110140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11013Cu;
        // 0x110140: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110144u;
        goto label_110144;
    }
    ctx->pc = 0x11013Cu;
    {
        const bool branch_taken_0x11013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11013Cu;
        // 0x110140: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11013c) {
            ctx->pc = 0x110158u;
            goto label_110158;
        }
    }
    ctx->pc = 0x110144u;
label_110144:
    // 0x110144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_110148:
    if (ctx->pc == 0x110148u) {
        ctx->pc = 0x110148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110144u;
        // 0x110148: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11014Cu;
        goto label_11014c;
    }
    ctx->pc = 0x110144u;
    {
        const bool branch_taken_0x110144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110144u;
        // 0x110148: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110144) {
            ctx->pc = 0x110154u;
            goto label_110154;
        }
    }
    ctx->pc = 0x11014Cu;
label_11014c:
    // 0x11014c: 0x10000002  b           . + 4 + (0x2 << 2)
label_110150:
    if (ctx->pc == 0x110150u) {
        ctx->pc = 0x110150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11014Cu;
        // 0x110150: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110154u;
        goto label_110154;
    }
    ctx->pc = 0x11014Cu;
    {
        const bool branch_taken_0x11014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11014Cu;
        // 0x110150: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11014c) {
            ctx->pc = 0x110158u;
            goto label_110158;
        }
    }
    ctx->pc = 0x110154u;
label_110154:
    // 0x110154: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x110154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_110158:
    // 0x110158: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_11015c:
    if (ctx->pc == 0x11015Cu) {
        ctx->pc = 0x11015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110158u;
        // 0x11015c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110160u;
        goto label_110160;
    }
    ctx->pc = 0x110158u;
    {
        const bool branch_taken_0x110158 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x11015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110158u;
        // 0x11015c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110158) {
            ctx->pc = 0x110190u;
            goto label_110190;
        }
    }
    ctx->pc = 0x110160u;
label_110160:
    // 0x110160: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x110160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_110164:
    // 0x110164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_110168:
    if (ctx->pc == 0x110168u) {
        ctx->pc = 0x110168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110164u;
        // 0x110168: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11016Cu;
        goto label_11016c;
    }
    ctx->pc = 0x110164u;
    {
        const bool branch_taken_0x110164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110164u;
        // 0x110168: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110164) {
            ctx->pc = 0x110178u;
            goto label_110178;
        }
    }
    ctx->pc = 0x11016Cu;
label_11016c:
    // 0x11016c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110170:
    // 0x110170: 0x1000000a  b           . + 4 + (0xA << 2)
label_110174:
    if (ctx->pc == 0x110174u) {
        ctx->pc = 0x110174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110170u;
        // 0x110174: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110178u;
        goto label_110178;
    }
    ctx->pc = 0x110170u;
    {
        const bool branch_taken_0x110170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110170u;
        // 0x110174: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110170) {
            ctx->pc = 0x11019Cu;
            goto label_11019c;
        }
    }
    ctx->pc = 0x110178u;
label_110178:
    // 0x110178: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x110178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_11017c:
    // 0x11017c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_110180:
    if (ctx->pc == 0x110180u) {
        ctx->pc = 0x110180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11017Cu;
        // 0x110180: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110184u;
        goto label_110184;
    }
    ctx->pc = 0x11017Cu;
    {
        const bool branch_taken_0x11017c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11017Cu;
        // 0x110180: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11017c) {
            ctx->pc = 0x1101A0u;
            goto label_1101a0;
        }
    }
    ctx->pc = 0x110184u;
label_110184:
    // 0x110184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x110184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110188:
    // 0x110188: 0x10000004  b           . + 4 + (0x4 << 2)
label_11018c:
    if (ctx->pc == 0x11018Cu) {
        ctx->pc = 0x11018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110188u;
        // 0x11018c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110190u;
        goto label_110190;
    }
    ctx->pc = 0x110188u;
    {
        const bool branch_taken_0x110188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110188u;
        // 0x11018c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110188) {
            ctx->pc = 0x11019Cu;
            goto label_11019c;
        }
    }
    ctx->pc = 0x110190u;
label_110190:
    // 0x110190: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x110190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_110194:
    // 0x110194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x110194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110198:
    // 0x110198: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x110198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_11019c:
    // 0x11019c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x11019cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_1101a0:
    // 0x1101a0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_1101a4:
    if (ctx->pc == 0x1101A4u) {
        ctx->pc = 0x1101A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A0u;
        // 0x1101a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101A8u;
        goto label_1101a8;
    }
    ctx->pc = 0x1101A0u;
    {
        const bool branch_taken_0x1101a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1101A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A0u;
        // 0x1101a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101a0) {
            ctx->pc = 0x1101D4u;
            goto label_1101d4;
        }
    }
    ctx->pc = 0x1101A8u;
label_1101a8:
    // 0x1101a8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x1101a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_1101ac:
    // 0x1101ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1101b0:
    if (ctx->pc == 0x1101B0u) {
        ctx->pc = 0x1101B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101ACu;
        // 0x1101b0: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101B4u;
        goto label_1101b4;
    }
    ctx->pc = 0x1101ACu;
    {
        const bool branch_taken_0x1101ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101ACu;
        // 0x1101b0: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101ac) {
            ctx->pc = 0x1101BCu;
            goto label_1101bc;
        }
    }
    ctx->pc = 0x1101B4u;
label_1101b4:
    // 0x1101b4: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_1101b8:
    if (ctx->pc == 0x1101B8u) {
        ctx->pc = 0x1101B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101B4u;
        // 0x1101b8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101BCu;
        goto label_1101bc;
    }
    ctx->pc = 0x1101B4u;
    {
        const bool branch_taken_0x1101b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101B4u;
        // 0x1101b8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101b4) {
            ctx->pc = 0x110230u;
            goto label_110230;
        }
    }
    ctx->pc = 0x1101BCu;
label_1101bc:
    // 0x1101bc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1101bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1101c0:
    // 0x1101c0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1101c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1101c4:
    // 0x1101c4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1101c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1101c8:
    // 0x1101c8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1101cc:
    // 0x1101cc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1101d0:
    if (ctx->pc == 0x1101D0u) {
        ctx->pc = 0x1101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101CCu;
        // 0x1101d0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101D4u;
        goto label_1101d4;
    }
    ctx->pc = 0x1101CCu;
    {
        const bool branch_taken_0x1101cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101CCu;
        // 0x1101d0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101cc) {
            ctx->pc = 0x110234u;
            goto label_110234;
        }
    }
    ctx->pc = 0x1101D4u;
label_1101d4:
    // 0x1101d4: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x1101d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_1101d8:
    // 0x1101d8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1101d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1101dc:
    // 0x1101dc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1101dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1101e0:
    // 0x1101e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_1101e4:
    if (ctx->pc == 0x1101E4u) {
        ctx->pc = 0x1101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E0u;
        // 0x1101e4: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1101E8u;
        goto label_1101e8;
    }
    ctx->pc = 0x1101E0u;
    {
        const bool branch_taken_0x1101e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101E0u;
        // 0x1101e4: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101e0) {
            ctx->pc = 0x110230u;
            goto label_110230;
        }
    }
    ctx->pc = 0x1101E8u;
label_1101e8:
    // 0x1101e8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1101ec:
    // 0x1101ec: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1101ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1101f0:
    // 0x1101f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1101f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1101f4:
    // 0x1101f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1101f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1101f8:
    // 0x1101f8: 0xc04b398  jal         func_12CE60
label_1101fc:
    if (ctx->pc == 0x1101FCu) {
        ctx->pc = 0x1101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101F8u;
        // 0x1101fc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110200u;
        goto label_110200;
    }
    ctx->pc = 0x1101F8u;
    SET_GPR_U32(ctx, 31, 0x110200u);
    ctx->pc = 0x1101FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101F8u;
    // 0x1101fc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE60u, 0x1101F8u, 0x110200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110200u;
label_110200:
    // 0x110200: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x110200u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_110204:
    // 0x110204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110208:
    // 0x110208: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x110208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11020c:
    // 0x11020c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_110210:
    // 0x110210: 0xc04b1a2  jal         func_12C688
label_110214:
    if (ctx->pc == 0x110214u) {
        ctx->pc = 0x110214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110210u;
        // 0x110214: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110218u;
        goto label_110218;
    }
    ctx->pc = 0x110210u;
    SET_GPR_U32(ctx, 31, 0x110218u);
    ctx->pc = 0x110214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110210u;
    // 0x110214: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x110210u, 0x110218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110218u;
label_110218:
    // 0x110218: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x110218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_11021c:
    // 0x11021c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11021cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110220:
    // 0x110220: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_110224:
    if (ctx->pc == 0x110224u) {
        ctx->pc = 0x110224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110220u;
        // 0x110224: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110228u;
        goto label_110228;
    }
    ctx->pc = 0x110220u;
    {
        const bool branch_taken_0x110220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110220u;
        // 0x110224: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110220) {
            ctx->pc = 0x1101F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1101f0;
        }
    }
    ctx->pc = 0x110228u;
label_110228:
    // 0x110228: 0x10000004  b           . + 4 + (0x4 << 2)
label_11022c:
    if (ctx->pc == 0x11022Cu) {
        ctx->pc = 0x11022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110228u;
        // 0x11022c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110230u;
        goto label_110230;
    }
    ctx->pc = 0x110228u;
    {
        const bool branch_taken_0x110228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110228u;
        // 0x11022c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110228) {
            ctx->pc = 0x11023Cu;
            goto label_11023c;
        }
    }
    ctx->pc = 0x110230u;
label_110230:
    // 0x110230: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x110230u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110234:
    // 0x110234: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110234u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110238:
    // 0x110238: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x110238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_11023c:
    // 0x11023c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_110240:
    if (ctx->pc == 0x110240u) {
        ctx->pc = 0x110240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11023Cu;
        // 0x110240: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110244u;
        goto label_110244;
    }
    ctx->pc = 0x11023Cu;
    {
        const bool branch_taken_0x11023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11023Cu;
        // 0x110240: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11023c) {
            ctx->pc = 0x1105C4u;
            goto label_1105c4;
        }
    }
    ctx->pc = 0x110244u;
label_110244:
    // 0x110244: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x110244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_110248:
    // 0x110248: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11024c:
    if (ctx->pc == 0x11024Cu) {
        ctx->pc = 0x11024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110248u;
        // 0x11024c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110250u;
        goto label_110250;
    }
    ctx->pc = 0x110248u;
    {
        const bool branch_taken_0x110248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110248u;
        // 0x11024c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110248) {
            ctx->pc = 0x11025Cu;
            goto label_11025c;
        }
    }
    ctx->pc = 0x110250u;
label_110250:
    // 0x110250: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x110250u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_110254:
    // 0x110254: 0x10000006  b           . + 4 + (0x6 << 2)
label_110258:
    if (ctx->pc == 0x110258u) {
        ctx->pc = 0x110258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110254u;
        // 0x110258: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11025Cu;
        goto label_11025c;
    }
    ctx->pc = 0x110254u;
    {
        const bool branch_taken_0x110254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110254u;
        // 0x110258: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110254) {
            ctx->pc = 0x110270u;
            goto label_110270;
        }
    }
    ctx->pc = 0x11025Cu;
label_11025c:
    // 0x11025c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_110260:
    if (ctx->pc == 0x110260u) {
        ctx->pc = 0x110260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11025Cu;
        // 0x110260: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110264u;
        goto label_110264;
    }
    ctx->pc = 0x11025Cu;
    {
        const bool branch_taken_0x11025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11025Cu;
        // 0x110260: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11025c) {
            ctx->pc = 0x11026Cu;
            goto label_11026c;
        }
    }
    ctx->pc = 0x110264u;
label_110264:
    // 0x110264: 0x10000002  b           . + 4 + (0x2 << 2)
label_110268:
    if (ctx->pc == 0x110268u) {
        ctx->pc = 0x110268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110264u;
        // 0x110268: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11026Cu;
        goto label_11026c;
    }
    ctx->pc = 0x110264u;
    {
        const bool branch_taken_0x110264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110264u;
        // 0x110268: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110264) {
            ctx->pc = 0x110270u;
            goto label_110270;
        }
    }
    ctx->pc = 0x11026Cu;
label_11026c:
    // 0x11026c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x11026cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_110270:
    // 0x110270: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_110274:
    if (ctx->pc == 0x110274u) {
        ctx->pc = 0x110274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110270u;
        // 0x110274: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110278u;
        goto label_110278;
    }
    ctx->pc = 0x110270u;
    {
        const bool branch_taken_0x110270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110270u;
        // 0x110274: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110270) {
            ctx->pc = 0x1102A0u;
            goto label_1102a0;
        }
    }
    ctx->pc = 0x110278u;
label_110278:
    // 0x110278: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x110278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_11027c:
    // 0x11027c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_110280:
    if (ctx->pc == 0x110280u) {
        ctx->pc = 0x110280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11027Cu;
        // 0x110280: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110284u;
        goto label_110284;
    }
    ctx->pc = 0x11027Cu;
    {
        const bool branch_taken_0x11027c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11027Cu;
        // 0x110280: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11027c) {
            ctx->pc = 0x11028Cu;
            goto label_11028c;
        }
    }
    ctx->pc = 0x110284u;
label_110284:
    // 0x110284: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_110288:
    if (ctx->pc == 0x110288u) {
        ctx->pc = 0x110288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110284u;
        // 0x110288: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11028Cu;
        goto label_11028c;
    }
    ctx->pc = 0x110284u;
    {
        const bool branch_taken_0x110284 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x110288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110284u;
        // 0x110288: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110284) {
            ctx->pc = 0x1102F0u;
            goto label_1102f0;
        }
    }
    ctx->pc = 0x11028Cu;
label_11028c:
    // 0x11028c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11028cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110290:
    // 0x110290: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x110290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_110294:
    // 0x110294: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110298:
    // 0x110298: 0x10000016  b           . + 4 + (0x16 << 2)
label_11029c:
    if (ctx->pc == 0x11029Cu) {
        ctx->pc = 0x11029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110298u;
        // 0x11029c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102A0u;
        goto label_1102a0;
    }
    ctx->pc = 0x110298u;
    {
        const bool branch_taken_0x110298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110298u;
        // 0x11029c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110298) {
            ctx->pc = 0x1102F4u;
            goto label_1102f4;
        }
    }
    ctx->pc = 0x1102A0u;
label_1102a0:
    // 0x1102a0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1102a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1102a4:
    // 0x1102a4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1102a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1102a8:
    // 0x1102a8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1102a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1102ac:
    // 0x1102ac: 0x0  nop
    ctx->pc = 0x1102acu;
    // NOP
label_1102b0:
    // 0x1102b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1102b4:
    // 0x1102b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1102b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1102b8:
    // 0x1102b8: 0xc04b742  jal         func_12DD08
label_1102bc:
    if (ctx->pc == 0x1102BCu) {
        ctx->pc = 0x1102BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102B8u;
        // 0x1102bc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102C0u;
        goto label_1102c0;
    }
    ctx->pc = 0x1102B8u;
    SET_GPR_U32(ctx, 31, 0x1102C0u);
    ctx->pc = 0x1102BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102B8u;
    // 0x1102bc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1102B8u, 0x1102C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102C0u;
label_1102c0:
    // 0x1102c0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1102c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1102c4:
    // 0x1102c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1102c8:
    // 0x1102c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1102c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1102cc:
    // 0x1102cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1102ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1102d0:
    // 0x1102d0: 0xc04b590  jal         func_12D640
label_1102d4:
    if (ctx->pc == 0x1102D4u) {
        ctx->pc = 0x1102D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102D0u;
        // 0x1102d4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102D8u;
        goto label_1102d8;
    }
    ctx->pc = 0x1102D0u;
    SET_GPR_U32(ctx, 31, 0x1102D8u);
    ctx->pc = 0x1102D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102D0u;
    // 0x1102d4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x1102D0u, 0x1102D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102D8u;
label_1102d8:
    // 0x1102d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1102d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1102dc:
    // 0x1102dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1102dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1102e0:
    // 0x1102e0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_1102e4:
    if (ctx->pc == 0x1102E4u) {
        ctx->pc = 0x1102E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102E0u;
        // 0x1102e4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102E8u;
        goto label_1102e8;
    }
    ctx->pc = 0x1102E0u;
    {
        const bool branch_taken_0x1102e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1102E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102E0u;
        // 0x1102e4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102e0) {
            ctx->pc = 0x1102B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1102b0;
        }
    }
    ctx->pc = 0x1102E8u;
label_1102e8:
    // 0x1102e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1102ec:
    if (ctx->pc == 0x1102ECu) {
        ctx->pc = 0x1102ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102E8u;
        // 0x1102ec: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1102F0u;
        goto label_1102f0;
    }
    ctx->pc = 0x1102E8u;
    {
        const bool branch_taken_0x1102e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102E8u;
        // 0x1102ec: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102e8) {
            ctx->pc = 0x1102FCu;
            goto label_1102fc;
        }
    }
    ctx->pc = 0x1102F0u;
label_1102f0:
    // 0x1102f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1102f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1102f4:
    // 0x1102f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1102f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1102f8:
    // 0x1102f8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1102f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1102fc:
    // 0x1102fc: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x1102fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_110300:
    // 0x110300: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_110304:
    if (ctx->pc == 0x110304u) {
        ctx->pc = 0x110304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110300u;
        // 0x110304: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110308u;
        goto label_110308;
    }
    ctx->pc = 0x110300u;
    {
        const bool branch_taken_0x110300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110300u;
        // 0x110304: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110300) {
            ctx->pc = 0x1105C8u;
            goto label_1105c8;
        }
    }
    ctx->pc = 0x110308u;
label_110308:
    // 0x110308: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x110308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_11030c:
    // 0x11030c: 0xc04bc02  jal         func_12F008
label_110310:
    if (ctx->pc == 0x110310u) {
        ctx->pc = 0x110310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11030Cu;
        // 0x110310: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110314u;
        goto label_110314;
    }
    ctx->pc = 0x11030Cu;
    SET_GPR_U32(ctx, 31, 0x110314u);
    ctx->pc = 0x110310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11030Cu;
    // 0x110310: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x11030Cu, 0x110314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110314u;
label_110314:
    // 0x110314: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x110314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_110318:
    // 0x110318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x110318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11031c:
    // 0x11031c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x11031cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_110320:
    // 0x110320: 0x0  nop
    ctx->pc = 0x110320u;
    // NOP
label_110324:
    // 0x110324: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_110328:
    if (ctx->pc == 0x110328u) {
        ctx->pc = 0x110328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110324u;
        // 0x110328: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11032Cu;
        goto label_11032c;
    }
    ctx->pc = 0x110324u;
    {
        const bool branch_taken_0x110324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x110328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110324u;
        // 0x110328: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110324) {
            ctx->pc = 0x11033Cu;
            goto label_11033c;
        }
    }
    ctx->pc = 0x11032Cu;
label_11032c:
    // 0x11032c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x11032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_110330:
    // 0x110330: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_110334:
    // 0x110334: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_110338:
    if (ctx->pc == 0x110338u) {
        ctx->pc = 0x110338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110334u;
        // 0x110338: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11033Cu;
        goto label_11033c;
    }
    ctx->pc = 0x110334u;
    {
        const bool branch_taken_0x110334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110334u;
        // 0x110338: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110334) {
            ctx->pc = 0x110A54u;
            goto label_110a54;
        }
    }
    ctx->pc = 0x11033Cu;
label_11033c:
    // 0x11033c: 0xc04b946  jal         func_12E518
label_110340:
    if (ctx->pc == 0x110340u) {
        ctx->pc = 0x110340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11033Cu;
        // 0x110340: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110344u;
        goto label_110344;
    }
    ctx->pc = 0x11033Cu;
    SET_GPR_U32(ctx, 31, 0x110344u);
    ctx->pc = 0x110340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11033Cu;
    // 0x110340: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x11033Cu, 0x110344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110344u;
label_110344:
    // 0x110344: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x110344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110348:
    // 0x110348: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11034c:
    // 0x11034c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x11034cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110350:
    // 0x110350: 0xc043efc  jal         func_10FBF0
label_110354:
    if (ctx->pc == 0x110354u) {
        ctx->pc = 0x110354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110350u;
        // 0x110354: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110358u;
        goto label_110358;
    }
    ctx->pc = 0x110350u;
    SET_GPR_U32(ctx, 31, 0x110358u);
    ctx->pc = 0x110354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110350u;
    // 0x110354: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBF0u, 0x110350u, 0x110358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110358u;
label_110358:
    // 0x110358: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11035c:
    // 0x11035c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11035cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_110360:
    // 0x110360: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x110360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_110364:
    // 0x110364: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_110368:
    if (ctx->pc == 0x110368u) {
        ctx->pc = 0x110368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110364u;
        // 0x110368: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11036Cu;
        goto label_11036c;
    }
    ctx->pc = 0x110364u;
    {
        const bool branch_taken_0x110364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110364u;
        // 0x110368: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110364) {
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x11036Cu;
label_11036c:
    // 0x11036c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x11036cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_110370:
    // 0x110370: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x110370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_110374:
    // 0x110374: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_110378:
    if (ctx->pc == 0x110378u) {
        ctx->pc = 0x110378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110374u;
        // 0x110378: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11037Cu;
        goto label_11037c;
    }
    ctx->pc = 0x110374u;
    {
        const bool branch_taken_0x110374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110374u;
        // 0x110378: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110374) {
            ctx->pc = 0x110400u;
            goto label_110400;
        }
    }
    ctx->pc = 0x11037Cu;
label_11037c:
    // 0x11037c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x11037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110380:
    // 0x110380: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_110384:
    // 0x110384: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_110388:
    // 0x110388: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_11038c:
    // 0x11038c: 0x60f809  jalr        $v1
label_110390:
    if (ctx->pc == 0x110390u) {
        ctx->pc = 0x110390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11038Cu;
        // 0x110390: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110394u;
        goto label_110394;
    }
    ctx->pc = 0x11038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110394u);
        ctx->pc = 0x110390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11038Cu;
        // 0x110390: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11038Cu, 0x110394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110394u;
label_110394:
    // 0x110394: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110398:
    // 0x110398: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x110398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_11039c:
    // 0x11039c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1103a0:
    // 0x1103a0: 0x60f809  jalr        $v1
label_1103a4:
    if (ctx->pc == 0x1103A4u) {
        ctx->pc = 0x1103A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103A0u;
        // 0x1103a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103A8u;
        goto label_1103a8;
    }
    ctx->pc = 0x1103A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1103A8u);
        ctx->pc = 0x1103A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103A0u;
        // 0x1103a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103A0u, 0x1103A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1103A8u;
label_1103a8:
    // 0x1103a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1103a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1103ac:
    // 0x1103ac: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x1103acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_1103b0:
    // 0x1103b0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1103b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1103b4:
    // 0x1103b4: 0x60f809  jalr        $v1
label_1103b8:
    if (ctx->pc == 0x1103B8u) {
        ctx->pc = 0x1103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103B4u;
        // 0x1103b8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103BCu;
        goto label_1103bc;
    }
    ctx->pc = 0x1103B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1103BCu);
        ctx->pc = 0x1103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103B4u;
        // 0x1103b8: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103B4u, 0x1103BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1103BCu;
label_1103bc:
    // 0x1103bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1103bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1103c0:
    // 0x1103c0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x1103c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1103c4:
    // 0x1103c4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1103c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1103c8:
    // 0x1103c8: 0x60f809  jalr        $v1
label_1103cc:
    if (ctx->pc == 0x1103CCu) {
        ctx->pc = 0x1103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C8u;
        // 0x1103cc: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103D0u;
        goto label_1103d0;
    }
    ctx->pc = 0x1103C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1103D0u);
        ctx->pc = 0x1103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C8u;
        // 0x1103cc: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103C8u, 0x1103D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1103D0u;
label_1103d0:
    // 0x1103d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1103d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1103d4:
    // 0x1103d4: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x1103d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1103d8:
    // 0x1103d8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1103d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1103dc:
    // 0x1103dc: 0x60f809  jalr        $v1
label_1103e0:
    if (ctx->pc == 0x1103E0u) {
        ctx->pc = 0x1103E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103DCu;
        // 0x1103e0: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103E4u;
        goto label_1103e4;
    }
    ctx->pc = 0x1103DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1103E4u);
        ctx->pc = 0x1103E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103DCu;
        // 0x1103e0: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103DCu, 0x1103E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1103E4u;
label_1103e4:
    // 0x1103e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1103e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1103e8:
    // 0x1103e8: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1103e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1103ec:
    // 0x1103ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1103ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1103f0:
    // 0x1103f0: 0x60f809  jalr        $v1
label_1103f4:
    if (ctx->pc == 0x1103F4u) {
        ctx->pc = 0x1103F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F0u;
        // 0x1103f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1103F8u;
        goto label_1103f8;
    }
    ctx->pc = 0x1103F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1103F8u);
        ctx->pc = 0x1103F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F0u;
        // 0x1103f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1103F0u, 0x1103F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1103F8u;
label_1103f8:
    // 0x1103f8: 0x1000019e  b           . + 4 + (0x19E << 2)
label_1103fc:
    if (ctx->pc == 0x1103FCu) {
        ctx->pc = 0x1103FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F8u;
        // 0x1103fc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110400u;
        goto label_110400;
    }
    ctx->pc = 0x1103F8u;
    {
        const bool branch_taken_0x1103f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103F8u;
        // 0x1103fc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103f8) {
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x110400u;
label_110400:
    // 0x110400: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_110404:
    if (ctx->pc == 0x110404u) {
        ctx->pc = 0x110404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110400u;
        // 0x110404: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110408u;
        goto label_110408;
    }
    ctx->pc = 0x110400u;
    {
        const bool branch_taken_0x110400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110400u;
        // 0x110404: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110400) {
            ctx->pc = 0x110460u;
            goto label_110460;
        }
    }
    ctx->pc = 0x110408u;
label_110408:
    // 0x110408: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_11040c:
    if (ctx->pc == 0x11040Cu) {
        ctx->pc = 0x11040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110408u;
        // 0x11040c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110410u;
        goto label_110410;
    }
    ctx->pc = 0x110408u;
    {
        const bool branch_taken_0x110408 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x11040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110408u;
        // 0x11040c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110408) {
            ctx->pc = 0x11044Cu;
            goto label_11044c;
        }
    }
    ctx->pc = 0x110410u;
label_110410:
    // 0x110410: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x110410u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_110414:
    // 0x110414: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_110418:
    if (ctx->pc == 0x110418u) {
        ctx->pc = 0x110418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110414u;
        // 0x110418: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11041Cu;
        goto label_11041c;
    }
    ctx->pc = 0x110414u;
    {
        const bool branch_taken_0x110414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110414u;
        // 0x110418: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110414) {
            ctx->pc = 0x11044Cu;
            goto label_11044c;
        }
    }
    ctx->pc = 0x11041Cu;
label_11041c:
    // 0x11041c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11041cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110420:
    // 0x110420: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x110420u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110424:
    // 0x110424: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110424u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110428:
    // 0x110428: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11042c:
    // 0x11042c: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x11042cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_110430:
    // 0x110430: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_110434:
    if (ctx->pc == 0x110434u) {
        ctx->pc = 0x110434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110430u;
        // 0x110434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110438u;
        goto label_110438;
    }
    ctx->pc = 0x110430u;
    {
        const bool branch_taken_0x110430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110430u;
        // 0x110434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110430) {
            ctx->pc = 0x1104A8u;
            goto label_1104a8;
        }
    }
    ctx->pc = 0x110438u;
label_110438:
    // 0x110438: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x110438u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11043c:
    // 0x11043c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_110440:
    if (ctx->pc == 0x110440u) {
        ctx->pc = 0x110440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11043Cu;
        // 0x110440: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110444u;
        goto label_110444;
    }
    ctx->pc = 0x11043Cu;
    {
        const bool branch_taken_0x11043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11043Cu;
        // 0x110440: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11043c) {
            ctx->pc = 0x110428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110428;
        }
    }
    ctx->pc = 0x110444u;
label_110444:
    // 0x110444: 0x10000060  b           . + 4 + (0x60 << 2)
label_110448:
    if (ctx->pc == 0x110448u) {
        ctx->pc = 0x110448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110444u;
        // 0x110448: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11044Cu;
        goto label_11044c;
    }
    ctx->pc = 0x110444u;
    {
        const bool branch_taken_0x110444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110444u;
        // 0x110448: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110444) {
            ctx->pc = 0x1105C8u;
            goto label_1105c8;
        }
    }
    ctx->pc = 0x11044Cu;
label_11044c:
    // 0x11044c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11044cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110450:
    // 0x110450: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x110450u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110454:
    // 0x110454: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110454u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110458:
    // 0x110458: 0x10000013  b           . + 4 + (0x13 << 2)
label_11045c:
    if (ctx->pc == 0x11045Cu) {
        ctx->pc = 0x11045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110458u;
        // 0x11045c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110460u;
        goto label_110460;
    }
    ctx->pc = 0x110458u;
    {
        const bool branch_taken_0x110458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110458u;
        // 0x11045c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110458) {
            ctx->pc = 0x1104A8u;
            goto label_1104a8;
        }
    }
    ctx->pc = 0x110460u;
label_110460:
    // 0x110460: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x110460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_110464:
    // 0x110464: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_110468:
    if (ctx->pc == 0x110468u) {
        ctx->pc = 0x110468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110464u;
        // 0x110468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11046Cu;
        goto label_11046c;
    }
    ctx->pc = 0x110464u;
    {
        const bool branch_taken_0x110464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110464u;
        // 0x110468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110464) {
            ctx->pc = 0x11049Cu;
            goto label_11049c;
        }
    }
    ctx->pc = 0x11046Cu;
label_11046c:
    // 0x11046c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11046cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110470:
    // 0x110470: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x110470u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110474:
    // 0x110474: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110474u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110478:
    // 0x110478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11047c:
    // 0x11047c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_110480:
    // 0x110480: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x110480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_110484:
    // 0x110484: 0x0  nop
    ctx->pc = 0x110484u;
    // NOP
label_110488:
    // 0x110488: 0x0  nop
    ctx->pc = 0x110488u;
    // NOP
label_11048c:
    // 0x11048c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_110490:
    if (ctx->pc == 0x110490u) {
        ctx->pc = 0x110494u;
        goto label_110494;
    }
    ctx->pc = 0x11048Cu;
    {
        const bool branch_taken_0x11048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11048c) {
            ctx->pc = 0x110478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110478;
        }
    }
    ctx->pc = 0x110494u;
label_110494:
    // 0x110494: 0x1000004c  b           . + 4 + (0x4C << 2)
label_110498:
    if (ctx->pc == 0x110498u) {
        ctx->pc = 0x110498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110494u;
        // 0x110498: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11049Cu;
        goto label_11049c;
    }
    ctx->pc = 0x110494u;
    {
        const bool branch_taken_0x110494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110494u;
        // 0x110498: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110494) {
            ctx->pc = 0x1105C8u;
            goto label_1105c8;
        }
    }
    ctx->pc = 0x11049Cu;
label_11049c:
    // 0x11049c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x11049cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1104a0:
    // 0x1104a0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1104a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1104a4:
    // 0x1104a4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1104a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1104a8:
    // 0x1104a8: 0x10000047  b           . + 4 + (0x47 << 2)
label_1104ac:
    if (ctx->pc == 0x1104ACu) {
        ctx->pc = 0x1104ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104A8u;
        // 0x1104ac: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1104B0u;
        goto label_1104b0;
    }
    ctx->pc = 0x1104A8u;
    {
        const bool branch_taken_0x1104a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104A8u;
        // 0x1104ac: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104a8) {
            ctx->pc = 0x1105C8u;
            goto label_1105c8;
        }
    }
    ctx->pc = 0x1104B0u;
label_1104b0:
    // 0x1104b0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1104b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1104b4:
    // 0x1104b4: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x1104b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1104b8:
    // 0x1104b8: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x1104b8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_1104bc:
    // 0x1104bc: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x1104bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_1104c0:
    // 0x1104c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1104c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1104c4:
    // 0x1104c4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1104c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1104c8:
    // 0x1104c8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1104c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1104cc:
    // 0x1104cc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1104ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1104d0:
    // 0x1104d0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1104d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1104d4:
    // 0x1104d4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1104d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1104d8:
    // 0x1104d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1104d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1104dc:
    // 0x1104dc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1104dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1104e0:
    // 0x1104e0: 0x10000038  b           . + 4 + (0x38 << 2)
label_1104e4:
    if (ctx->pc == 0x1104E4u) {
        ctx->pc = 0x1104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104E0u;
        // 0x1104e4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1104E8u;
        goto label_1104e8;
    }
    ctx->pc = 0x1104E0u;
    {
        const bool branch_taken_0x1104e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104E0u;
        // 0x1104e4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104e0) {
            ctx->pc = 0x1105C4u;
            goto label_1105c4;
        }
    }
    ctx->pc = 0x1104E8u;
label_1104e8:
    // 0x1104e8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1104e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1104ec:
    // 0x1104ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1104ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1104f0:
    // 0x1104f0: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x1104f0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_1104f4:
    // 0x1104f4: 0x244424b0  addiu       $a0, $v0, 0x24B0
    ctx->pc = 0x1104f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9392));
label_1104f8:
    // 0x1104f8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_1104fc:
    if (ctx->pc == 0x1104FCu) {
        ctx->pc = 0x1104FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104F8u;
        // 0x1104fc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110500u;
        goto label_110500;
    }
    ctx->pc = 0x1104F8u;
    {
        const bool branch_taken_0x1104f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1104FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104F8u;
        // 0x1104fc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104f8) {
            ctx->pc = 0x110528u;
            goto label_110528;
        }
    }
    ctx->pc = 0x110500u;
label_110500:
    // 0x110500: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x110500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_110504:
    // 0x110504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_110508:
    if (ctx->pc == 0x110508u) {
        ctx->pc = 0x110508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110504u;
        // 0x110508: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11050Cu;
        goto label_11050c;
    }
    ctx->pc = 0x110504u;
    {
        const bool branch_taken_0x110504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110504u;
        // 0x110508: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110504) {
            ctx->pc = 0x110514u;
            goto label_110514;
        }
    }
    ctx->pc = 0x11050Cu;
label_11050c:
    // 0x11050c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_110510:
    if (ctx->pc == 0x110510u) {
        ctx->pc = 0x110510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11050Cu;
        // 0x110510: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110514u;
        goto label_110514;
    }
    ctx->pc = 0x11050Cu;
    {
        const bool branch_taken_0x11050c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x110510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11050Cu;
        // 0x110510: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11050c) {
            ctx->pc = 0x110564u;
            goto label_110564;
        }
    }
    ctx->pc = 0x110514u;
label_110514:
    // 0x110514: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x110514u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110518:
    // 0x110518: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x110518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_11051c:
    // 0x11051c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x11051cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110520:
    // 0x110520: 0x10000011  b           . + 4 + (0x11 << 2)
label_110524:
    if (ctx->pc == 0x110524u) {
        ctx->pc = 0x110524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110520u;
        // 0x110524: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110528u;
        goto label_110528;
    }
    ctx->pc = 0x110520u;
    {
        const bool branch_taken_0x110520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110520u;
        // 0x110524: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110520) {
            ctx->pc = 0x110568u;
            goto label_110568;
        }
    }
    ctx->pc = 0x110528u;
label_110528:
    // 0x110528: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x110528u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_11052c:
    // 0x11052c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x11052cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110530:
    // 0x110530: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110530u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_110534:
    // 0x110534: 0x0  nop
    ctx->pc = 0x110534u;
    // NOP
label_110538:
    // 0x110538: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x110538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_11053c:
    // 0x11053c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_110540:
    // 0x110540: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x110540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_110544:
    // 0x110544: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x110544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_110548:
    // 0x110548: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x110548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11054c:
    // 0x11054c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11054cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_110550:
    // 0x110550: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x110550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_110554:
    // 0x110554: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_110558:
    if (ctx->pc == 0x110558u) {
        ctx->pc = 0x110558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110554u;
        // 0x110558: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11055Cu;
        goto label_11055c;
    }
    ctx->pc = 0x110554u;
    {
        const bool branch_taken_0x110554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110554u;
        // 0x110558: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110554) {
            ctx->pc = 0x110538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110538;
        }
    }
    ctx->pc = 0x11055Cu;
label_11055c:
    // 0x11055c: 0x10000004  b           . + 4 + (0x4 << 2)
label_110560:
    if (ctx->pc == 0x110560u) {
        ctx->pc = 0x110560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11055Cu;
        // 0x110560: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110564u;
        goto label_110564;
    }
    ctx->pc = 0x11055Cu;
    {
        const bool branch_taken_0x11055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11055Cu;
        // 0x110560: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11055c) {
            ctx->pc = 0x110570u;
            goto label_110570;
        }
    }
    ctx->pc = 0x110564u;
label_110564:
    // 0x110564: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x110564u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_110568:
    // 0x110568: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x110568u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_11056c:
    // 0x11056c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x11056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_110570:
    // 0x110570: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x110570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_110574:
    // 0x110574: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x110574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_110578:
    // 0x110578: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11057c:
    // 0x11057c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_110580:
    // 0x110580: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x110580u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_110584:
    // 0x110584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_110588:
    // 0x110588: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x110588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_11058c:
    // 0x11058c: 0x1000000e  b           . + 4 + (0xE << 2)
label_110590:
    if (ctx->pc == 0x110590u) {
        ctx->pc = 0x110590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11058Cu;
        // 0x110590: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110594u;
        goto label_110594;
    }
    ctx->pc = 0x11058Cu;
    {
        const bool branch_taken_0x11058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11058Cu;
        // 0x110590: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11058c) {
            ctx->pc = 0x1105C8u;
            goto label_1105c8;
        }
    }
    ctx->pc = 0x110594u;
label_110594:
    // 0x110594: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x110594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_110598:
    // 0x110598: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_11059c:
    if (ctx->pc == 0x11059Cu) {
        ctx->pc = 0x11059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110598u;
        // 0x11059c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1105A0u;
        goto label_1105a0;
    }
    ctx->pc = 0x110598u;
    {
        const bool branch_taken_0x110598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110598u;
        // 0x11059c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110598) {
            ctx->pc = 0x110A70u;
            goto label_110a70;
        }
    }
    ctx->pc = 0x1105A0u;
label_1105a0:
    // 0x1105a0: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x1105a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_1105a4:
    // 0x1105a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1105a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1105a8:
    // 0x1105a8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x1105a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1105ac:
    // 0x1105ac: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x1105acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_1105b0:
    // 0x1105b0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x1105b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_1105b4:
    // 0x1105b4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1105b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1105b8:
    // 0x1105b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1105b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1105bc:
    // 0x1105bc: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x1105bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1105c0:
    // 0x1105c0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x1105c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1105c4:
    // 0x1105c4: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x1105c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1105c8:
    // 0x1105c8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1105c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1105cc:
    // 0x1105cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1105ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1105d0:
    // 0x1105d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1105d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1105d4:
    // 0x1105d4: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x1105d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1105d8:
    // 0x1105d8: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x1105d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1105dc:
    // 0x1105dc: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x1105dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1105e0:
    // 0x1105e0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1105e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1105e4:
    // 0x1105e4: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x1105e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1105e8:
    // 0x1105e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1105e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1105ec:
    // 0x1105ec: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1105ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1105f0:
    // 0x1105f0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1105f4:
    if (ctx->pc == 0x1105F4u) {
        ctx->pc = 0x1105F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105F0u;
        // 0x1105f4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1105F8u;
        goto label_1105f8;
    }
    ctx->pc = 0x1105F0u;
    {
        const bool branch_taken_0x1105f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105F0u;
        // 0x1105f4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105f0) {
            ctx->pc = 0x110614u;
            goto label_110614;
        }
    }
    ctx->pc = 0x1105F8u;
label_1105f8:
    // 0x1105f8: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x1105f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_1105fc:
    // 0x1105fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_110600:
    if (ctx->pc == 0x110600u) {
        ctx->pc = 0x110600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105FCu;
        // 0x110600: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110604u;
        goto label_110604;
    }
    ctx->pc = 0x1105FCu;
    {
        const bool branch_taken_0x1105fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105FCu;
        // 0x110600: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105fc) {
            ctx->pc = 0x110634u;
            goto label_110634;
        }
    }
    ctx->pc = 0x110604u;
label_110604:
    // 0x110604: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x110604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_110608:
    // 0x110608: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x110608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_11060c:
    // 0x11060c: 0x10000008  b           . + 4 + (0x8 << 2)
label_110610:
    if (ctx->pc == 0x110610u) {
        ctx->pc = 0x110610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11060Cu;
        // 0x110610: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110614u;
        goto label_110614;
    }
    ctx->pc = 0x11060Cu;
    {
        const bool branch_taken_0x11060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11060Cu;
        // 0x110610: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11060c) {
            ctx->pc = 0x110630u;
            goto label_110630;
        }
    }
    ctx->pc = 0x110614u;
label_110614:
    // 0x110614: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x110614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_110618:
    // 0x110618: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11061c:
    // 0x11061c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_110620:
    if (ctx->pc == 0x110620u) {
        ctx->pc = 0x110620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11061Cu;
        // 0x110620: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110624u;
        goto label_110624;
    }
    ctx->pc = 0x11061Cu;
    {
        const bool branch_taken_0x11061c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x110620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11061Cu;
        // 0x110620: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11061c) {
            ctx->pc = 0x110634u;
            goto label_110634;
        }
    }
    ctx->pc = 0x110624u;
label_110624:
    // 0x110624: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x110624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_110628:
    // 0x110628: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x110628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_11062c:
    // 0x11062c: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x11062cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_110630:
    // 0x110630: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x110630u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_110634:
    // 0x110634: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_110638:
    if (ctx->pc == 0x110638u) {
        ctx->pc = 0x110638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110634u;
        // 0x110638: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11063Cu;
        goto label_11063c;
    }
    ctx->pc = 0x110634u;
    {
        const bool branch_taken_0x110634 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x110638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110634u;
        // 0x110638: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110634) {
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x11063Cu;
label_11063c:
    // 0x11063c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_110640:
    if (ctx->pc == 0x110640u) {
        ctx->pc = 0x110640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11063Cu;
        // 0x110640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110644u;
        goto label_110644;
    }
    ctx->pc = 0x11063Cu;
    {
        const bool branch_taken_0x11063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11063Cu;
        // 0x110640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11063c) {
            ctx->pc = 0x110694u;
            goto label_110694;
        }
    }
    ctx->pc = 0x110644u;
label_110644:
    // 0x110644: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x110644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_110648:
    // 0x110648: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110648u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_11064c:
    // 0x11064c: 0x0  nop
    ctx->pc = 0x11064cu;
    // NOP
label_110650:
    // 0x110650: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x110650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_110654:
    // 0x110654: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110658:
    // 0x110658: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x110658u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11065c:
    // 0x11065c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11065cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_110660:
    // 0x110660: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_110664:
    // 0x110664: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110668:
    // 0x110668: 0x60f809  jalr        $v1
label_11066c:
    if (ctx->pc == 0x11066Cu) {
        ctx->pc = 0x11066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110668u;
        // 0x11066c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110670u;
        goto label_110670;
    }
    ctx->pc = 0x110668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110670u);
        ctx->pc = 0x11066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110668u;
        // 0x11066c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110668u, 0x110670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110670u;
label_110670:
    // 0x110670: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_110674:
    // 0x110674: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_110678:
    // 0x110678: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11067c:
    // 0x11067c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x11067cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_110680:
    // 0x110680: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x110680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_110684:
    // 0x110684: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_110688:
    if (ctx->pc == 0x110688u) {
        ctx->pc = 0x110688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110684u;
        // 0x110688: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11068Cu;
        goto label_11068c;
    }
    ctx->pc = 0x110684u;
    {
        const bool branch_taken_0x110684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110684u;
        // 0x110688: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110684) {
            ctx->pc = 0x110650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110650;
        }
    }
    ctx->pc = 0x11068Cu;
label_11068c:
    // 0x11068c: 0x10000002  b           . + 4 + (0x2 << 2)
label_110690:
    if (ctx->pc == 0x110690u) {
        ctx->pc = 0x110694u;
        goto label_110694;
    }
    ctx->pc = 0x11068Cu;
    {
        const bool branch_taken_0x11068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11068c) {
            ctx->pc = 0x110698u;
            goto label_110698;
        }
    }
    ctx->pc = 0x110694u;
label_110694:
    // 0x110694: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110694u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110698:
    // 0x110698: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_11069c:
    if (ctx->pc == 0x11069Cu) {
        ctx->pc = 0x1106A0u;
        goto label_1106a0;
    }
    ctx->pc = 0x110698u;
    {
        const bool branch_taken_0x110698 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x110698) {
            ctx->pc = 0x1106D0u;
            goto label_1106d0;
        }
    }
    ctx->pc = 0x1106A0u;
label_1106a0:
    // 0x1106a0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1106a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1106a4:
    // 0x1106a4: 0x0  nop
    ctx->pc = 0x1106a4u;
    // NOP
label_1106a8:
    // 0x1106a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1106a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1106ac:
    // 0x1106ac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1106acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1106b0:
    // 0x1106b0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1106b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1106b4:
    // 0x1106b4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1106b8:
    // 0x1106b8: 0x60f809  jalr        $v1
label_1106bc:
    if (ctx->pc == 0x1106BCu) {
        ctx->pc = 0x1106BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106B8u;
        // 0x1106bc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106C0u;
        goto label_1106c0;
    }
    ctx->pc = 0x1106B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1106C0u);
        ctx->pc = 0x1106BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106B8u;
        // 0x1106bc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1106B8u, 0x1106C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1106C0u;
label_1106c0:
    // 0x1106c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1106c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1106c4:
    // 0x1106c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1106c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1106c8:
    // 0x1106c8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_1106cc:
    if (ctx->pc == 0x1106CCu) {
        ctx->pc = 0x1106CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106C8u;
        // 0x1106cc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106D0u;
        goto label_1106d0;
    }
    ctx->pc = 0x1106C8u;
    {
        const bool branch_taken_0x1106c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1106CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106C8u;
        // 0x1106cc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106c8) {
            ctx->pc = 0x1106A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1106a8;
        }
    }
    ctx->pc = 0x1106D0u;
label_1106d0:
    // 0x1106d0: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_1106d4:
    if (ctx->pc == 0x1106D4u) {
        ctx->pc = 0x1106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106D0u;
        // 0x1106d4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106D8u;
        goto label_1106d8;
    }
    ctx->pc = 0x1106D0u;
    {
        const bool branch_taken_0x1106d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106D0u;
        // 0x1106d4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106d0) {
            ctx->pc = 0x110708u;
            goto label_110708;
        }
    }
    ctx->pc = 0x1106D8u;
label_1106d8:
    // 0x1106d8: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1106dc:
    // 0x1106dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1106dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1106e0:
    // 0x1106e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1106e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1106e4:
    // 0x1106e4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1106e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1106e8:
    // 0x1106e8: 0x60f809  jalr        $v1
label_1106ec:
    if (ctx->pc == 0x1106ECu) {
        ctx->pc = 0x1106ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106E8u;
        // 0x1106ec: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1106F0u;
        goto label_1106f0;
    }
    ctx->pc = 0x1106E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1106F0u);
        ctx->pc = 0x1106ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106E8u;
        // 0x1106ec: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1106E8u, 0x1106F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1106F0u;
label_1106f0:
    // 0x1106f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1106f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1106f4:
    // 0x1106f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1106f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1106f8:
    // 0x1106f8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1106f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1106fc:
    // 0x1106fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_110700:
    if (ctx->pc == 0x110700u) {
        ctx->pc = 0x110700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106FCu;
        // 0x110700: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110704u;
        goto label_110704;
    }
    ctx->pc = 0x1106FCu;
    {
        const bool branch_taken_0x1106fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106FCu;
        // 0x110700: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106fc) {
            ctx->pc = 0x1106D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1106d8;
        }
    }
    ctx->pc = 0x110704u;
label_110704:
    // 0x110704: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_110708:
    // 0x110708: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_11070c:
    if (ctx->pc == 0x11070Cu) {
        ctx->pc = 0x11070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110708u;
        // 0x11070c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110710u;
        goto label_110710;
    }
    ctx->pc = 0x110708u;
    {
        const bool branch_taken_0x110708 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x11070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110708u;
        // 0x11070c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110708) {
            ctx->pc = 0x110364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110364;
        }
    }
    ctx->pc = 0x110710u;
label_110710:
    // 0x110710: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110714:
    // 0x110714: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x110714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_110718:
    // 0x110718: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_11071c:
    // 0x11071c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110720:
    // 0x110720: 0x60f809  jalr        $v1
label_110724:
    if (ctx->pc == 0x110724u) {
        ctx->pc = 0x110724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110720u;
        // 0x110724: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110728u;
        goto label_110728;
    }
    ctx->pc = 0x110720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110728u);
        ctx->pc = 0x110724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110720u;
        // 0x110724: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110720u, 0x110728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110728u;
label_110728:
    // 0x110728: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11072c:
    // 0x11072c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110730:
    // 0x110730: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_110734:
    if (ctx->pc == 0x110734u) {
        ctx->pc = 0x110734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110730u;
        // 0x110734: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110738u;
        goto label_110738;
    }
    ctx->pc = 0x110730u;
    {
        const bool branch_taken_0x110730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110730u;
        // 0x110734: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110730) {
            ctx->pc = 0x110710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110710;
        }
    }
    ctx->pc = 0x110738u;
label_110738:
    // 0x110738: 0x100000ce  b           . + 4 + (0xCE << 2)
label_11073c:
    if (ctx->pc == 0x11073Cu) {
        ctx->pc = 0x11073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110738u;
        // 0x11073c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110740u;
        goto label_110740;
    }
    ctx->pc = 0x110738u;
    {
        const bool branch_taken_0x110738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110738u;
        // 0x11073c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110738) {
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x110740u;
label_110740:
    // 0x110740: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x110740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_110744:
    // 0x110744: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_110748:
    if (ctx->pc == 0x110748u) {
        ctx->pc = 0x110748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110744u;
        // 0x110748: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11074Cu;
        goto label_11074c;
    }
    ctx->pc = 0x110744u;
    {
        const bool branch_taken_0x110744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110744u;
        // 0x110748: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110744) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x11074Cu;
label_11074c:
    // 0x11074c: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_110750:
    if (ctx->pc == 0x110750u) {
        ctx->pc = 0x110750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11074Cu;
        // 0x110750: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110754u;
        goto label_110754;
    }
    ctx->pc = 0x11074Cu;
    {
        const bool branch_taken_0x11074c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x110750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11074Cu;
        // 0x110750: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11074c) {
            ctx->pc = 0x110808u;
            goto label_110808;
        }
    }
    ctx->pc = 0x110754u;
label_110754:
    // 0x110754: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x110754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_110758:
    // 0x110758: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_11075c:
    if (ctx->pc == 0x11075Cu) {
        ctx->pc = 0x11075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110758u;
        // 0x11075c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110760u;
        goto label_110760;
    }
    ctx->pc = 0x110758u;
    {
        const bool branch_taken_0x110758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110758u;
        // 0x11075c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110758) {
            ctx->pc = 0x1107B4u;
            goto label_1107b4;
        }
    }
    ctx->pc = 0x110760u;
label_110760:
    // 0x110760: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x110760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_110764:
    // 0x110764: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110764u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110768:
    // 0x110768: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x110768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_11076c:
    // 0x11076c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x11076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110770:
    // 0x110770: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x110770u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_110774:
    // 0x110774: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_110778:
    // 0x110778: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_11077c:
    // 0x11077c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110780:
    // 0x110780: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x110780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_110784:
    // 0x110784: 0x60f809  jalr        $v1
label_110788:
    if (ctx->pc == 0x110788u) {
        ctx->pc = 0x110788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110784u;
        // 0x110788: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11078Cu;
        goto label_11078c;
    }
    ctx->pc = 0x110784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11078Cu);
        ctx->pc = 0x110788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110784u;
        // 0x110788: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110784u, 0x11078Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11078Cu;
label_11078c:
    // 0x11078c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x11078cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_110790:
    // 0x110790: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x110790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_110794:
    // 0x110794: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110798:
    // 0x110798: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x110798u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11079c:
    // 0x11079c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x11079cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_1107a0:
    // 0x1107a0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1107a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1107a4:
    // 0x1107a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1107a8:
    if (ctx->pc == 0x1107A8u) {
        ctx->pc = 0x1107A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107A4u;
        // 0x1107a8: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107ACu;
        goto label_1107ac;
    }
    ctx->pc = 0x1107A4u;
    {
        const bool branch_taken_0x1107a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1107A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107A4u;
        // 0x1107a8: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107a4) {
            ctx->pc = 0x110768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110768;
        }
    }
    ctx->pc = 0x1107ACu;
label_1107ac:
    // 0x1107ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1107b0:
    if (ctx->pc == 0x1107B0u) {
        ctx->pc = 0x1107B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107ACu;
        // 0x1107b0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107B4u;
        goto label_1107b4;
    }
    ctx->pc = 0x1107ACu;
    {
        const bool branch_taken_0x1107ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107ACu;
        // 0x1107b0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107ac) {
            ctx->pc = 0x1107BCu;
            goto label_1107bc;
        }
    }
    ctx->pc = 0x1107B4u;
label_1107b4:
    // 0x1107b4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x1107b4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1107b8:
    // 0x1107b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1107b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1107bc:
    // 0x1107bc: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_1107c0:
    if (ctx->pc == 0x1107C0u) {
        ctx->pc = 0x1107C4u;
        goto label_1107c4;
    }
    ctx->pc = 0x1107BCu;
    {
        const bool branch_taken_0x1107bc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1107bc) {
            ctx->pc = 0x1108B4u;
            goto label_1108b4;
        }
    }
    ctx->pc = 0x1107C4u;
label_1107c4:
    // 0x1107c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1107c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1107c8:
    // 0x1107c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1107c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1107cc:
    // 0x1107cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1107ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1107d0:
    // 0x1107d0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1107d4:
    // 0x1107d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1107d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1107d8:
    // 0x1107d8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1107d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1107dc:
    // 0x1107dc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x1107dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_1107e0:
    // 0x1107e0: 0x60f809  jalr        $v1
label_1107e4:
    if (ctx->pc == 0x1107E4u) {
        ctx->pc = 0x1107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107E0u;
        // 0x1107e4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1107E8u;
        goto label_1107e8;
    }
    ctx->pc = 0x1107E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1107E8u);
        ctx->pc = 0x1107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107E0u;
        // 0x1107e4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1107E0u, 0x1107E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1107E8u;
label_1107e8:
    // 0x1107e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1107e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1107ec:
    // 0x1107ec: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x1107ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1107f0:
    // 0x1107f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1107f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1107f4:
    // 0x1107f4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x1107f4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1107f8:
    // 0x1107f8: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_1107fc:
    if (ctx->pc == 0x1107FCu) {
        ctx->pc = 0x1107FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107F8u;
        // 0x1107fc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110800u;
        goto label_110800;
    }
    ctx->pc = 0x1107F8u;
    {
        const bool branch_taken_0x1107f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1107FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107F8u;
        // 0x1107fc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107f8) {
            ctx->pc = 0x1107C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1107c8;
        }
    }
    ctx->pc = 0x110800u;
label_110800:
    // 0x110800: 0x1000002c  b           . + 4 + (0x2C << 2)
label_110804:
    if (ctx->pc == 0x110804u) {
        ctx->pc = 0x110808u;
        goto label_110808;
    }
    ctx->pc = 0x110800u;
    {
        const bool branch_taken_0x110800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110800) {
            ctx->pc = 0x1108B4u;
            goto label_1108b4;
        }
    }
    ctx->pc = 0x110808u;
label_110808:
    // 0x110808: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_11080c:
    if (ctx->pc == 0x11080Cu) {
        ctx->pc = 0x11080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110808u;
        // 0x11080c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110810u;
        goto label_110810;
    }
    ctx->pc = 0x110808u;
    {
        const bool branch_taken_0x110808 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x11080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110808u;
        // 0x11080c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110808) {
            ctx->pc = 0x110860u;
            goto label_110860;
        }
    }
    ctx->pc = 0x110810u;
label_110810:
    // 0x110810: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110810u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110814:
    // 0x110814: 0x0  nop
    ctx->pc = 0x110814u;
    // NOP
label_110818:
    // 0x110818: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11081c:
    // 0x11081c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x11081cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_110820:
    // 0x110820: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_110824:
    // 0x110824: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_110828:
    // 0x110828: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_11082c:
    // 0x11082c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x11082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_110830:
    // 0x110830: 0x60f809  jalr        $v1
label_110834:
    if (ctx->pc == 0x110834u) {
        ctx->pc = 0x110834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110830u;
        // 0x110834: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110838u;
        goto label_110838;
    }
    ctx->pc = 0x110830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110838u);
        ctx->pc = 0x110834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110830u;
        // 0x110834: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110830u, 0x110838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110838u;
label_110838:
    // 0x110838: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11083c:
    // 0x11083c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x11083cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_110840:
    // 0x110840: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110844:
    // 0x110844: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x110844u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_110848:
    // 0x110848: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x110848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_11084c:
    // 0x11084c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x11084cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_110850:
    // 0x110850: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_110854:
    if (ctx->pc == 0x110854u) {
        ctx->pc = 0x110854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110850u;
        // 0x110854: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110858u;
        goto label_110858;
    }
    ctx->pc = 0x110850u;
    {
        const bool branch_taken_0x110850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110850u;
        // 0x110854: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110850) {
            ctx->pc = 0x110818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110818;
        }
    }
    ctx->pc = 0x110858u;
label_110858:
    // 0x110858: 0x10000003  b           . + 4 + (0x3 << 2)
label_11085c:
    if (ctx->pc == 0x11085Cu) {
        ctx->pc = 0x11085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110858u;
        // 0x11085c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110860u;
        goto label_110860;
    }
    ctx->pc = 0x110858u;
    {
        const bool branch_taken_0x110858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110858u;
        // 0x11085c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110858) {
            ctx->pc = 0x110868u;
            goto label_110868;
        }
    }
    ctx->pc = 0x110860u;
label_110860:
    // 0x110860: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110860u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110864:
    // 0x110864: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x110864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_110868:
    // 0x110868: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_11086c:
    if (ctx->pc == 0x11086Cu) {
        ctx->pc = 0x11086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110868u;
        // 0x11086c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110870u;
        goto label_110870;
    }
    ctx->pc = 0x110868u;
    {
        const bool branch_taken_0x110868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110868u;
        // 0x11086c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110868) {
            ctx->pc = 0x1108B4u;
            goto label_1108b4;
        }
    }
    ctx->pc = 0x110870u;
label_110870:
    // 0x110870: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x110870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_110874:
    // 0x110874: 0x0  nop
    ctx->pc = 0x110874u;
    // NOP
label_110878:
    // 0x110878: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x110878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_11087c:
    // 0x11087c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x11087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110880:
    // 0x110880: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x110880u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_110884:
    // 0x110884: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_110888:
    // 0x110888: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_11088c:
    // 0x11088c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x11088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110890:
    // 0x110890: 0x60f809  jalr        $v1
label_110894:
    if (ctx->pc == 0x110894u) {
        ctx->pc = 0x110894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110890u;
        // 0x110894: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110898u;
        goto label_110898;
    }
    ctx->pc = 0x110890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110898u);
        ctx->pc = 0x110894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110890u;
        // 0x110894: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110890u, 0x110898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110898u;
label_110898:
    // 0x110898: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11089c:
    // 0x11089c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x11089cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1108a0:
    // 0x1108a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1108a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1108a4:
    // 0x1108a4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x1108a4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1108a8:
    // 0x1108a8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1108a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1108ac:
    // 0x1108ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1108b0:
    if (ctx->pc == 0x1108B0u) {
        ctx->pc = 0x1108B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108ACu;
        // 0x1108b0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108B4u;
        goto label_1108b4;
    }
    ctx->pc = 0x1108ACu;
    {
        const bool branch_taken_0x1108ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1108B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108ACu;
        // 0x1108b0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108ac) {
            ctx->pc = 0x110878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110878;
        }
    }
    ctx->pc = 0x1108B4u;
label_1108b4:
    // 0x1108b4: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_1108b8:
    if (ctx->pc == 0x1108B8u) {
        ctx->pc = 0x1108BCu;
        goto label_1108bc;
    }
    ctx->pc = 0x1108B4u;
    {
        const bool branch_taken_0x1108b4 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x1108b4) {
            ctx->pc = 0x1108E8u;
            goto label_1108e8;
        }
    }
    ctx->pc = 0x1108BCu;
label_1108bc:
    // 0x1108bc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1108bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1108c0:
    // 0x1108c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1108c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1108c4:
    // 0x1108c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1108c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1108c8:
    // 0x1108c8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1108c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1108cc:
    // 0x1108cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1108ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1108d0:
    // 0x1108d0: 0x60f809  jalr        $v1
label_1108d4:
    if (ctx->pc == 0x1108D4u) {
        ctx->pc = 0x1108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108D0u;
        // 0x1108d4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108D8u;
        goto label_1108d8;
    }
    ctx->pc = 0x1108D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1108D8u);
        ctx->pc = 0x1108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108D0u;
        // 0x1108d4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1108D0u, 0x1108D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1108D8u;
label_1108d8:
    // 0x1108d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1108d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1108dc:
    // 0x1108dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1108dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1108e0:
    // 0x1108e0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_1108e4:
    if (ctx->pc == 0x1108E4u) {
        ctx->pc = 0x1108E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108E0u;
        // 0x1108e4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108E8u;
        goto label_1108e8;
    }
    ctx->pc = 0x1108E0u;
    {
        const bool branch_taken_0x1108e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1108E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108E0u;
        // 0x1108e4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108e0) {
            ctx->pc = 0x1108C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1108c0;
        }
    }
    ctx->pc = 0x1108E8u;
label_1108e8:
    // 0x1108e8: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_1108ec:
    if (ctx->pc == 0x1108ECu) {
        ctx->pc = 0x1108ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108E8u;
        // 0x1108ec: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1108F0u;
        goto label_1108f0;
    }
    ctx->pc = 0x1108E8u;
    {
        const bool branch_taken_0x1108e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1108e8) {
            ctx->pc = 0x1108ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1108E8u;
            // 0x1108ec: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x1108F0u;
label_1108f0:
    // 0x1108f0: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x1108f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1108f4:
    // 0x1108f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1108f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1108f8:
    // 0x1108f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1108f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1108fc:
    // 0x1108fc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1108fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110900:
    // 0x110900: 0x60f809  jalr        $v1
label_110904:
    if (ctx->pc == 0x110904u) {
        ctx->pc = 0x110904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110900u;
        // 0x110904: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110908u;
        goto label_110908;
    }
    ctx->pc = 0x110900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110908u);
        ctx->pc = 0x110904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110900u;
        // 0x110904: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110900u, 0x110908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110908u;
label_110908:
    // 0x110908: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11090c:
    // 0x11090c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110910:
    // 0x110910: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x110910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110914:
    // 0x110914: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_110918:
    if (ctx->pc == 0x110918u) {
        ctx->pc = 0x110918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110914u;
        // 0x110918: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11091Cu;
        goto label_11091c;
    }
    ctx->pc = 0x110914u;
    {
        const bool branch_taken_0x110914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110914u;
        // 0x110918: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110914) {
            ctx->pc = 0x1108F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1108f0;
        }
    }
    ctx->pc = 0x11091Cu;
label_11091c:
    // 0x11091c: 0x10000055  b           . + 4 + (0x55 << 2)
label_110920:
    if (ctx->pc == 0x110920u) {
        ctx->pc = 0x110920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11091Cu;
        // 0x110920: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110924u;
        goto label_110924;
    }
    ctx->pc = 0x11091Cu;
    {
        const bool branch_taken_0x11091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11091Cu;
        // 0x110920: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11091c) {
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x110924u;
label_110924:
    // 0x110924: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x110924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_110928:
    // 0x110928: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_11092c:
    if (ctx->pc == 0x11092Cu) {
        ctx->pc = 0x11092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110928u;
        // 0x11092c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110930u;
        goto label_110930;
    }
    ctx->pc = 0x110928u;
    {
        const bool branch_taken_0x110928 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x11092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110928u;
        // 0x11092c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110928) {
            ctx->pc = 0x110980u;
            goto label_110980;
        }
    }
    ctx->pc = 0x110930u;
label_110930:
    // 0x110930: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110930u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110934:
    // 0x110934: 0x0  nop
    ctx->pc = 0x110934u;
    // NOP
label_110938:
    // 0x110938: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11093c:
    // 0x11093c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x11093cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_110940:
    // 0x110940: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_110944:
    // 0x110944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_110948:
    // 0x110948: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_11094c:
    // 0x11094c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x11094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_110950:
    // 0x110950: 0x60f809  jalr        $v1
label_110954:
    if (ctx->pc == 0x110954u) {
        ctx->pc = 0x110954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110950u;
        // 0x110954: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110958u;
        goto label_110958;
    }
    ctx->pc = 0x110950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110958u);
        ctx->pc = 0x110954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110950u;
        // 0x110954: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110950u, 0x110958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110958u;
label_110958:
    // 0x110958: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11095c:
    // 0x11095c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x11095cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_110960:
    // 0x110960: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110964:
    // 0x110964: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x110964u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_110968:
    // 0x110968: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x110968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_11096c:
    // 0x11096c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x11096cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_110970:
    // 0x110970: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_110974:
    if (ctx->pc == 0x110974u) {
        ctx->pc = 0x110974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110970u;
        // 0x110974: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110978u;
        goto label_110978;
    }
    ctx->pc = 0x110970u;
    {
        const bool branch_taken_0x110970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110970u;
        // 0x110974: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110970) {
            ctx->pc = 0x110938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110938;
        }
    }
    ctx->pc = 0x110978u;
label_110978:
    // 0x110978: 0x10000003  b           . + 4 + (0x3 << 2)
label_11097c:
    if (ctx->pc == 0x11097Cu) {
        ctx->pc = 0x11097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110978u;
        // 0x11097c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110980u;
        goto label_110980;
    }
    ctx->pc = 0x110978u;
    {
        const bool branch_taken_0x110978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110978u;
        // 0x11097c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110978) {
            ctx->pc = 0x110988u;
            goto label_110988;
        }
    }
    ctx->pc = 0x110980u;
label_110980:
    // 0x110980: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x110980u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110984:
    // 0x110984: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x110984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_110988:
    // 0x110988: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_11098c:
    if (ctx->pc == 0x11098Cu) {
        ctx->pc = 0x11098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110988u;
        // 0x11098c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110990u;
        goto label_110990;
    }
    ctx->pc = 0x110988u;
    {
        const bool branch_taken_0x110988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110988u;
        // 0x11098c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110988) {
            ctx->pc = 0x1109D4u;
            goto label_1109d4;
        }
    }
    ctx->pc = 0x110990u;
label_110990:
    // 0x110990: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_110994:
    // 0x110994: 0x0  nop
    ctx->pc = 0x110994u;
    // NOP
label_110998:
    // 0x110998: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x110998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_11099c:
    // 0x11099c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x11099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1109a0:
    // 0x1109a0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x1109a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1109a4:
    // 0x1109a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1109a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1109a8:
    // 0x1109a8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1109a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1109ac:
    // 0x1109ac: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1109acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1109b0:
    // 0x1109b0: 0x60f809  jalr        $v1
label_1109b4:
    if (ctx->pc == 0x1109B4u) {
        ctx->pc = 0x1109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B0u;
        // 0x1109b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109B8u;
        goto label_1109b8;
    }
    ctx->pc = 0x1109B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1109B8u);
        ctx->pc = 0x1109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B0u;
        // 0x1109b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1109B0u, 0x1109B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1109B8u;
label_1109b8:
    // 0x1109b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1109b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1109bc:
    // 0x1109bc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1109bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1109c0:
    // 0x1109c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1109c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1109c4:
    // 0x1109c4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x1109c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1109c8:
    // 0x1109c8: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1109c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1109cc:
    // 0x1109cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1109d0:
    if (ctx->pc == 0x1109D0u) {
        ctx->pc = 0x1109D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109CCu;
        // 0x1109d0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109D4u;
        goto label_1109d4;
    }
    ctx->pc = 0x1109CCu;
    {
        const bool branch_taken_0x1109cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1109D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109CCu;
        // 0x1109d0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109cc) {
            ctx->pc = 0x110998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110998;
        }
    }
    ctx->pc = 0x1109D4u;
label_1109d4:
    // 0x1109d4: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_1109d8:
    if (ctx->pc == 0x1109D8u) {
        ctx->pc = 0x1109DCu;
        goto label_1109dc;
    }
    ctx->pc = 0x1109D4u;
    {
        const bool branch_taken_0x1109d4 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x1109d4) {
            ctx->pc = 0x110A08u;
            goto label_110a08;
        }
    }
    ctx->pc = 0x1109DCu;
label_1109dc:
    // 0x1109dc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1109dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1109e0:
    // 0x1109e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1109e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1109e4:
    // 0x1109e4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1109e8:
    // 0x1109e8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1109ec:
    // 0x1109ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1109f0:
    // 0x1109f0: 0x60f809  jalr        $v1
label_1109f4:
    if (ctx->pc == 0x1109F4u) {
        ctx->pc = 0x1109F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109F0u;
        // 0x1109f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1109F8u;
        goto label_1109f8;
    }
    ctx->pc = 0x1109F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1109F8u);
        ctx->pc = 0x1109F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109F0u;
        // 0x1109f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1109F0u, 0x1109F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1109F8u;
label_1109f8:
    // 0x1109f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1109f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1109fc:
    // 0x1109fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110a00:
    // 0x110a00: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_110a04:
    if (ctx->pc == 0x110A04u) {
        ctx->pc = 0x110A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A00u;
        // 0x110a04: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A08u;
        goto label_110a08;
    }
    ctx->pc = 0x110A00u;
    {
        const bool branch_taken_0x110a00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A00u;
        // 0x110a04: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a00) {
            ctx->pc = 0x1109E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1109e0;
        }
    }
    ctx->pc = 0x110A08u;
label_110a08:
    // 0x110a08: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_110a0c:
    if (ctx->pc == 0x110A0Cu) {
        ctx->pc = 0x110A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A08u;
        // 0x110a0c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A10u;
        goto label_110a10;
    }
    ctx->pc = 0x110A08u;
    {
        const bool branch_taken_0x110a08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a08) {
            ctx->pc = 0x110A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A08u;
            // 0x110a0c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x110A10u;
label_110a10:
    // 0x110a10: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x110a10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_110a14:
    // 0x110a14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110a18:
    // 0x110a18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110a1c:
    // 0x110a1c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110a20:
    // 0x110a20: 0x60f809  jalr        $v1
label_110a24:
    if (ctx->pc == 0x110A24u) {
        ctx->pc = 0x110A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A20u;
        // 0x110a24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A28u;
        goto label_110a28;
    }
    ctx->pc = 0x110A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110A28u);
        ctx->pc = 0x110A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A20u;
        // 0x110a24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A20u, 0x110A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110A28u;
label_110a28:
    // 0x110a28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_110a2c:
    // 0x110a2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110a30:
    // 0x110a30: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x110a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_110a34:
    // 0x110a34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_110a38:
    if (ctx->pc == 0x110A38u) {
        ctx->pc = 0x110A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A34u;
        // 0x110a38: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A3Cu;
        goto label_110a3c;
    }
    ctx->pc = 0x110A34u;
    {
        const bool branch_taken_0x110a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A34u;
        // 0x110a38: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a34) {
            ctx->pc = 0x110A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110a10;
        }
    }
    ctx->pc = 0x110A3Cu;
label_110a3c:
    // 0x110a3c: 0x1000000d  b           . + 4 + (0xD << 2)
label_110a40:
    if (ctx->pc == 0x110A40u) {
        ctx->pc = 0x110A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A3Cu;
        // 0x110a40: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A44u;
        goto label_110a44;
    }
    ctx->pc = 0x110A3Cu;
    {
        const bool branch_taken_0x110a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A3Cu;
        // 0x110a40: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a3c) {
            ctx->pc = 0x110A74u;
            goto label_110a74;
        }
    }
    ctx->pc = 0x110A44u;
label_110a44:
    // 0x110a44: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_110a48:
    if (ctx->pc == 0x110A48u) {
        ctx->pc = 0x110A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A44u;
        // 0x110a48: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A4Cu;
        goto label_110a4c;
    }
    ctx->pc = 0x110A44u;
    {
        const bool branch_taken_0x110a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A44u;
        // 0x110a48: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a44) {
            ctx->pc = 0x110A70u;
            goto label_110a70;
        }
    }
    ctx->pc = 0x110A4Cu;
label_110a4c:
    // 0x110a4c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x110a4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110a50:
    // 0x110a50: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x110a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_110a54:
    // 0x110a54: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110a58:
    // 0x110a58: 0x60f809  jalr        $v1
label_110a5c:
    if (ctx->pc == 0x110A5Cu) {
        ctx->pc = 0x110A60u;
        goto label_110a60;
    }
    ctx->pc = 0x110A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110A60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A58u, 0x110A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110A60u;
label_110a60:
    // 0x110a60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x110a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_110a64:
    // 0x110a64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_110a68:
    // 0x110a68: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_110a6c:
    if (ctx->pc == 0x110A6Cu) {
        ctx->pc = 0x110A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A68u;
        // 0x110a6c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A70u;
        goto label_110a70;
    }
    ctx->pc = 0x110A68u;
    {
        const bool branch_taken_0x110a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A68u;
        // 0x110a6c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a68) {
            ctx->pc = 0x110364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110364;
        }
    }
    ctx->pc = 0x110A70u;
label_110a70:
    // 0x110a70: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x110a70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_110a74:
    // 0x110a74: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x110a74u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_110a78:
    // 0x110a78: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x110a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_110a7c:
    // 0x110a7c: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_110a80:
    if (ctx->pc == 0x110A80u) {
        ctx->pc = 0x110A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A7Cu;
        // 0x110a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A84u;
        goto label_110a84;
    }
    ctx->pc = 0x110A7Cu;
    {
        const bool branch_taken_0x110a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A7Cu;
        // 0x110a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a7c) {
            ctx->pc = 0x10FE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe28;
        }
    }
    ctx->pc = 0x110A84u;
label_110a84:
    // 0x110a84: 0x10000004  b           . + 4 + (0x4 << 2)
label_110a88:
    if (ctx->pc == 0x110A88u) {
        ctx->pc = 0x110A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A84u;
        // 0x110a88: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A8Cu;
        goto label_110a8c;
    }
    ctx->pc = 0x110A84u;
    {
        const bool branch_taken_0x110a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A84u;
        // 0x110a88: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a84) {
            ctx->pc = 0x110A98u;
            goto label_110a98;
        }
    }
    ctx->pc = 0x110A8Cu;
label_110a8c:
    // 0x110a8c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x110a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_110a90:
    // 0x110a90: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x110a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_110a94:
    // 0x110a94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x110a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_110a98:
    // 0x110a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110a9c:
    // 0x110a9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x110a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_110aa0:
    // 0x110aa0: 0x60f809  jalr        $v1
label_110aa4:
    if (ctx->pc == 0x110AA4u) {
        ctx->pc = 0x110AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA0u;
        // 0x110aa4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AA8u;
        goto label_110aa8;
    }
    ctx->pc = 0x110AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x110AA8u);
        ctx->pc = 0x110AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA0u;
        // 0x110aa4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AA0u, 0x110AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110AA8u;
label_110aa8:
    // 0x110aa8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x110aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_110aac:
    // 0x110aac: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x110aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_110ab0:
    // 0x110ab0: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x110ab0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_110ab4:
    // 0x110ab4: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x110ab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_110ab8:
    // 0x110ab8: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x110ab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_110abc:
    // 0x110abc: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x110abcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_110ac0:
    // 0x110ac0: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x110ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_110ac4:
    // 0x110ac4: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x110ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_110ac8:
    // 0x110ac8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x110ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_110acc:
    // 0x110acc: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x110accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_110ad0:
    // 0x110ad0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x110ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_110ad4:
    // 0x110ad4: 0x3e00008  jr          $ra
label_110ad8:
    if (ctx->pc == 0x110AD8u) {
        ctx->pc = 0x110AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AD4u;
        // 0x110ad8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110ADCu;
        goto label_fallthrough_0x110ad4;
    }
    ctx->pc = 0x110AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AD4u;
        // 0x110ad8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x110ad4:
    ctx->pc = 0x110ADCu;
}
