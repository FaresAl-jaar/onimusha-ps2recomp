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

// Function: sub_003CAC90
// Address: 0x3cac90 - 0x3cb26c
void sub_003CAC90_0x3cac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAC90_0x3cac90");
#endif

    switch (ctx->pc) {
        case 0x3cac90u: goto label_3cac90;
        case 0x3cac94u: goto label_3cac94;
        case 0x3cac98u: goto label_3cac98;
        case 0x3cac9cu: goto label_3cac9c;
        case 0x3caca0u: goto label_3caca0;
        case 0x3caca4u: goto label_3caca4;
        case 0x3caca8u: goto label_3caca8;
        case 0x3cacacu: goto label_3cacac;
        case 0x3cacb0u: goto label_3cacb0;
        case 0x3cacb4u: goto label_3cacb4;
        case 0x3cacb8u: goto label_3cacb8;
        case 0x3cacbcu: goto label_3cacbc;
        case 0x3cacc0u: goto label_3cacc0;
        case 0x3cacc4u: goto label_3cacc4;
        case 0x3cacc8u: goto label_3cacc8;
        case 0x3cacccu: goto label_3caccc;
        case 0x3cacd0u: goto label_3cacd0;
        case 0x3cacd4u: goto label_3cacd4;
        case 0x3cacd8u: goto label_3cacd8;
        case 0x3cacdcu: goto label_3cacdc;
        case 0x3cace0u: goto label_3cace0;
        case 0x3cace4u: goto label_3cace4;
        case 0x3cace8u: goto label_3cace8;
        case 0x3cacecu: goto label_3cacec;
        case 0x3cacf0u: goto label_3cacf0;
        case 0x3cacf4u: goto label_3cacf4;
        case 0x3cacf8u: goto label_3cacf8;
        case 0x3cacfcu: goto label_3cacfc;
        case 0x3cad00u: goto label_3cad00;
        case 0x3cad04u: goto label_3cad04;
        case 0x3cad08u: goto label_3cad08;
        case 0x3cad0cu: goto label_3cad0c;
        case 0x3cad10u: goto label_3cad10;
        case 0x3cad14u: goto label_3cad14;
        case 0x3cad18u: goto label_3cad18;
        case 0x3cad1cu: goto label_3cad1c;
        case 0x3cad20u: goto label_3cad20;
        case 0x3cad24u: goto label_3cad24;
        case 0x3cad28u: goto label_3cad28;
        case 0x3cad2cu: goto label_3cad2c;
        case 0x3cad30u: goto label_3cad30;
        case 0x3cad34u: goto label_3cad34;
        case 0x3cad38u: goto label_3cad38;
        case 0x3cad3cu: goto label_3cad3c;
        case 0x3cad40u: goto label_3cad40;
        case 0x3cad44u: goto label_3cad44;
        case 0x3cad48u: goto label_3cad48;
        case 0x3cad4cu: goto label_3cad4c;
        case 0x3cad50u: goto label_3cad50;
        case 0x3cad54u: goto label_3cad54;
        case 0x3cad58u: goto label_3cad58;
        case 0x3cad5cu: goto label_3cad5c;
        case 0x3cad60u: goto label_3cad60;
        case 0x3cad64u: goto label_3cad64;
        case 0x3cad68u: goto label_3cad68;
        case 0x3cad6cu: goto label_3cad6c;
        case 0x3cad70u: goto label_3cad70;
        case 0x3cad74u: goto label_3cad74;
        case 0x3cad78u: goto label_3cad78;
        case 0x3cad7cu: goto label_3cad7c;
        case 0x3cad80u: goto label_3cad80;
        case 0x3cad84u: goto label_3cad84;
        case 0x3cad88u: goto label_3cad88;
        case 0x3cad8cu: goto label_3cad8c;
        case 0x3cad90u: goto label_3cad90;
        case 0x3cad94u: goto label_3cad94;
        case 0x3cad98u: goto label_3cad98;
        case 0x3cad9cu: goto label_3cad9c;
        case 0x3cada0u: goto label_3cada0;
        case 0x3cada4u: goto label_3cada4;
        case 0x3cada8u: goto label_3cada8;
        case 0x3cadacu: goto label_3cadac;
        case 0x3cadb0u: goto label_3cadb0;
        case 0x3cadb4u: goto label_3cadb4;
        case 0x3cadb8u: goto label_3cadb8;
        case 0x3cadbcu: goto label_3cadbc;
        case 0x3cadc0u: goto label_3cadc0;
        case 0x3cadc4u: goto label_3cadc4;
        case 0x3cadc8u: goto label_3cadc8;
        case 0x3cadccu: goto label_3cadcc;
        case 0x3cadd0u: goto label_3cadd0;
        case 0x3cadd4u: goto label_3cadd4;
        case 0x3cadd8u: goto label_3cadd8;
        case 0x3caddcu: goto label_3caddc;
        case 0x3cade0u: goto label_3cade0;
        case 0x3cade4u: goto label_3cade4;
        case 0x3cade8u: goto label_3cade8;
        case 0x3cadecu: goto label_3cadec;
        case 0x3cadf0u: goto label_3cadf0;
        case 0x3cadf4u: goto label_3cadf4;
        case 0x3cadf8u: goto label_3cadf8;
        case 0x3cadfcu: goto label_3cadfc;
        case 0x3cae00u: goto label_3cae00;
        case 0x3cae04u: goto label_3cae04;
        case 0x3cae08u: goto label_3cae08;
        case 0x3cae0cu: goto label_3cae0c;
        case 0x3cae10u: goto label_3cae10;
        case 0x3cae14u: goto label_3cae14;
        case 0x3cae18u: goto label_3cae18;
        case 0x3cae1cu: goto label_3cae1c;
        case 0x3cae20u: goto label_3cae20;
        case 0x3cae24u: goto label_3cae24;
        case 0x3cae28u: goto label_3cae28;
        case 0x3cae2cu: goto label_3cae2c;
        case 0x3cae30u: goto label_3cae30;
        case 0x3cae34u: goto label_3cae34;
        case 0x3cae38u: goto label_3cae38;
        case 0x3cae3cu: goto label_3cae3c;
        case 0x3cae40u: goto label_3cae40;
        case 0x3cae44u: goto label_3cae44;
        case 0x3cae48u: goto label_3cae48;
        case 0x3cae4cu: goto label_3cae4c;
        case 0x3cae50u: goto label_3cae50;
        case 0x3cae54u: goto label_3cae54;
        case 0x3cae58u: goto label_3cae58;
        case 0x3cae5cu: goto label_3cae5c;
        case 0x3cae60u: goto label_3cae60;
        case 0x3cae64u: goto label_3cae64;
        case 0x3cae68u: goto label_3cae68;
        case 0x3cae6cu: goto label_3cae6c;
        case 0x3cae70u: goto label_3cae70;
        case 0x3cae74u: goto label_3cae74;
        case 0x3cae78u: goto label_3cae78;
        case 0x3cae7cu: goto label_3cae7c;
        case 0x3cae80u: goto label_3cae80;
        case 0x3cae84u: goto label_3cae84;
        case 0x3cae88u: goto label_3cae88;
        case 0x3cae8cu: goto label_3cae8c;
        case 0x3cae90u: goto label_3cae90;
        case 0x3cae94u: goto label_3cae94;
        case 0x3cae98u: goto label_3cae98;
        case 0x3cae9cu: goto label_3cae9c;
        case 0x3caea0u: goto label_3caea0;
        case 0x3caea4u: goto label_3caea4;
        case 0x3caea8u: goto label_3caea8;
        case 0x3caeacu: goto label_3caeac;
        case 0x3caeb0u: goto label_3caeb0;
        case 0x3caeb4u: goto label_3caeb4;
        case 0x3caeb8u: goto label_3caeb8;
        case 0x3caebcu: goto label_3caebc;
        case 0x3caec0u: goto label_3caec0;
        case 0x3caec4u: goto label_3caec4;
        case 0x3caec8u: goto label_3caec8;
        case 0x3caeccu: goto label_3caecc;
        case 0x3caed0u: goto label_3caed0;
        case 0x3caed4u: goto label_3caed4;
        case 0x3caed8u: goto label_3caed8;
        case 0x3caedcu: goto label_3caedc;
        case 0x3caee0u: goto label_3caee0;
        case 0x3caee4u: goto label_3caee4;
        case 0x3caee8u: goto label_3caee8;
        case 0x3caeecu: goto label_3caeec;
        case 0x3caef0u: goto label_3caef0;
        case 0x3caef4u: goto label_3caef4;
        case 0x3caef8u: goto label_3caef8;
        case 0x3caefcu: goto label_3caefc;
        case 0x3caf00u: goto label_3caf00;
        case 0x3caf04u: goto label_3caf04;
        case 0x3caf08u: goto label_3caf08;
        case 0x3caf0cu: goto label_3caf0c;
        case 0x3caf10u: goto label_3caf10;
        case 0x3caf14u: goto label_3caf14;
        case 0x3caf18u: goto label_3caf18;
        case 0x3caf1cu: goto label_3caf1c;
        case 0x3caf20u: goto label_3caf20;
        case 0x3caf24u: goto label_3caf24;
        case 0x3caf28u: goto label_3caf28;
        case 0x3caf2cu: goto label_3caf2c;
        case 0x3caf30u: goto label_3caf30;
        case 0x3caf34u: goto label_3caf34;
        case 0x3caf38u: goto label_3caf38;
        case 0x3caf3cu: goto label_3caf3c;
        case 0x3caf40u: goto label_3caf40;
        case 0x3caf44u: goto label_3caf44;
        case 0x3caf48u: goto label_3caf48;
        case 0x3caf4cu: goto label_3caf4c;
        case 0x3caf50u: goto label_3caf50;
        case 0x3caf54u: goto label_3caf54;
        case 0x3caf58u: goto label_3caf58;
        case 0x3caf5cu: goto label_3caf5c;
        case 0x3caf60u: goto label_3caf60;
        case 0x3caf64u: goto label_3caf64;
        case 0x3caf68u: goto label_3caf68;
        case 0x3caf6cu: goto label_3caf6c;
        case 0x3caf70u: goto label_3caf70;
        case 0x3caf74u: goto label_3caf74;
        case 0x3caf78u: goto label_3caf78;
        case 0x3caf7cu: goto label_3caf7c;
        case 0x3caf80u: goto label_3caf80;
        case 0x3caf84u: goto label_3caf84;
        case 0x3caf88u: goto label_3caf88;
        case 0x3caf8cu: goto label_3caf8c;
        case 0x3caf90u: goto label_3caf90;
        case 0x3caf94u: goto label_3caf94;
        case 0x3caf98u: goto label_3caf98;
        case 0x3caf9cu: goto label_3caf9c;
        case 0x3cafa0u: goto label_3cafa0;
        case 0x3cafa4u: goto label_3cafa4;
        case 0x3cafa8u: goto label_3cafa8;
        case 0x3cafacu: goto label_3cafac;
        case 0x3cafb0u: goto label_3cafb0;
        case 0x3cafb4u: goto label_3cafb4;
        case 0x3cafb8u: goto label_3cafb8;
        case 0x3cafbcu: goto label_3cafbc;
        case 0x3cafc0u: goto label_3cafc0;
        case 0x3cafc4u: goto label_3cafc4;
        case 0x3cafc8u: goto label_3cafc8;
        case 0x3cafccu: goto label_3cafcc;
        case 0x3cafd0u: goto label_3cafd0;
        case 0x3cafd4u: goto label_3cafd4;
        case 0x3cafd8u: goto label_3cafd8;
        case 0x3cafdcu: goto label_3cafdc;
        case 0x3cafe0u: goto label_3cafe0;
        case 0x3cafe4u: goto label_3cafe4;
        case 0x3cafe8u: goto label_3cafe8;
        case 0x3cafecu: goto label_3cafec;
        case 0x3caff0u: goto label_3caff0;
        case 0x3caff4u: goto label_3caff4;
        case 0x3caff8u: goto label_3caff8;
        case 0x3caffcu: goto label_3caffc;
        case 0x3cb000u: goto label_3cb000;
        case 0x3cb004u: goto label_3cb004;
        case 0x3cb008u: goto label_3cb008;
        case 0x3cb00cu: goto label_3cb00c;
        case 0x3cb010u: goto label_3cb010;
        case 0x3cb014u: goto label_3cb014;
        case 0x3cb018u: goto label_3cb018;
        case 0x3cb01cu: goto label_3cb01c;
        case 0x3cb020u: goto label_3cb020;
        case 0x3cb024u: goto label_3cb024;
        case 0x3cb028u: goto label_3cb028;
        case 0x3cb02cu: goto label_3cb02c;
        case 0x3cb030u: goto label_3cb030;
        case 0x3cb034u: goto label_3cb034;
        case 0x3cb038u: goto label_3cb038;
        case 0x3cb03cu: goto label_3cb03c;
        case 0x3cb040u: goto label_3cb040;
        case 0x3cb044u: goto label_3cb044;
        case 0x3cb048u: goto label_3cb048;
        case 0x3cb04cu: goto label_3cb04c;
        case 0x3cb050u: goto label_3cb050;
        case 0x3cb054u: goto label_3cb054;
        case 0x3cb058u: goto label_3cb058;
        case 0x3cb05cu: goto label_3cb05c;
        case 0x3cb060u: goto label_3cb060;
        case 0x3cb064u: goto label_3cb064;
        case 0x3cb068u: goto label_3cb068;
        case 0x3cb06cu: goto label_3cb06c;
        case 0x3cb070u: goto label_3cb070;
        case 0x3cb074u: goto label_3cb074;
        case 0x3cb078u: goto label_3cb078;
        case 0x3cb07cu: goto label_3cb07c;
        case 0x3cb080u: goto label_3cb080;
        case 0x3cb084u: goto label_3cb084;
        case 0x3cb088u: goto label_3cb088;
        case 0x3cb08cu: goto label_3cb08c;
        case 0x3cb090u: goto label_3cb090;
        case 0x3cb094u: goto label_3cb094;
        case 0x3cb098u: goto label_3cb098;
        case 0x3cb09cu: goto label_3cb09c;
        case 0x3cb0a0u: goto label_3cb0a0;
        case 0x3cb0a4u: goto label_3cb0a4;
        case 0x3cb0a8u: goto label_3cb0a8;
        case 0x3cb0acu: goto label_3cb0ac;
        case 0x3cb0b0u: goto label_3cb0b0;
        case 0x3cb0b4u: goto label_3cb0b4;
        case 0x3cb0b8u: goto label_3cb0b8;
        case 0x3cb0bcu: goto label_3cb0bc;
        case 0x3cb0c0u: goto label_3cb0c0;
        case 0x3cb0c4u: goto label_3cb0c4;
        case 0x3cb0c8u: goto label_3cb0c8;
        case 0x3cb0ccu: goto label_3cb0cc;
        case 0x3cb0d0u: goto label_3cb0d0;
        case 0x3cb0d4u: goto label_3cb0d4;
        case 0x3cb0d8u: goto label_3cb0d8;
        case 0x3cb0dcu: goto label_3cb0dc;
        case 0x3cb0e0u: goto label_3cb0e0;
        case 0x3cb0e4u: goto label_3cb0e4;
        case 0x3cb0e8u: goto label_3cb0e8;
        case 0x3cb0ecu: goto label_3cb0ec;
        case 0x3cb0f0u: goto label_3cb0f0;
        case 0x3cb0f4u: goto label_3cb0f4;
        case 0x3cb0f8u: goto label_3cb0f8;
        case 0x3cb0fcu: goto label_3cb0fc;
        case 0x3cb100u: goto label_3cb100;
        case 0x3cb104u: goto label_3cb104;
        case 0x3cb108u: goto label_3cb108;
        case 0x3cb10cu: goto label_3cb10c;
        case 0x3cb110u: goto label_3cb110;
        case 0x3cb114u: goto label_3cb114;
        case 0x3cb118u: goto label_3cb118;
        case 0x3cb11cu: goto label_3cb11c;
        case 0x3cb120u: goto label_3cb120;
        case 0x3cb124u: goto label_3cb124;
        case 0x3cb128u: goto label_3cb128;
        case 0x3cb12cu: goto label_3cb12c;
        case 0x3cb130u: goto label_3cb130;
        case 0x3cb134u: goto label_3cb134;
        case 0x3cb138u: goto label_3cb138;
        case 0x3cb13cu: goto label_3cb13c;
        case 0x3cb140u: goto label_3cb140;
        case 0x3cb144u: goto label_3cb144;
        case 0x3cb148u: goto label_3cb148;
        case 0x3cb14cu: goto label_3cb14c;
        case 0x3cb150u: goto label_3cb150;
        case 0x3cb154u: goto label_3cb154;
        case 0x3cb158u: goto label_3cb158;
        case 0x3cb15cu: goto label_3cb15c;
        case 0x3cb160u: goto label_3cb160;
        case 0x3cb164u: goto label_3cb164;
        case 0x3cb168u: goto label_3cb168;
        case 0x3cb16cu: goto label_3cb16c;
        case 0x3cb170u: goto label_3cb170;
        case 0x3cb174u: goto label_3cb174;
        case 0x3cb178u: goto label_3cb178;
        case 0x3cb17cu: goto label_3cb17c;
        case 0x3cb180u: goto label_3cb180;
        case 0x3cb184u: goto label_3cb184;
        case 0x3cb188u: goto label_3cb188;
        case 0x3cb18cu: goto label_3cb18c;
        case 0x3cb190u: goto label_3cb190;
        case 0x3cb194u: goto label_3cb194;
        case 0x3cb198u: goto label_3cb198;
        case 0x3cb19cu: goto label_3cb19c;
        case 0x3cb1a0u: goto label_3cb1a0;
        case 0x3cb1a4u: goto label_3cb1a4;
        case 0x3cb1a8u: goto label_3cb1a8;
        case 0x3cb1acu: goto label_3cb1ac;
        case 0x3cb1b0u: goto label_3cb1b0;
        case 0x3cb1b4u: goto label_3cb1b4;
        case 0x3cb1b8u: goto label_3cb1b8;
        case 0x3cb1bcu: goto label_3cb1bc;
        case 0x3cb1c0u: goto label_3cb1c0;
        case 0x3cb1c4u: goto label_3cb1c4;
        case 0x3cb1c8u: goto label_3cb1c8;
        case 0x3cb1ccu: goto label_3cb1cc;
        case 0x3cb1d0u: goto label_3cb1d0;
        case 0x3cb1d4u: goto label_3cb1d4;
        case 0x3cb1d8u: goto label_3cb1d8;
        case 0x3cb1dcu: goto label_3cb1dc;
        case 0x3cb1e0u: goto label_3cb1e0;
        case 0x3cb1e4u: goto label_3cb1e4;
        case 0x3cb1e8u: goto label_3cb1e8;
        case 0x3cb1ecu: goto label_3cb1ec;
        case 0x3cb1f0u: goto label_3cb1f0;
        case 0x3cb1f4u: goto label_3cb1f4;
        case 0x3cb1f8u: goto label_3cb1f8;
        case 0x3cb1fcu: goto label_3cb1fc;
        case 0x3cb200u: goto label_3cb200;
        case 0x3cb204u: goto label_3cb204;
        case 0x3cb208u: goto label_3cb208;
        case 0x3cb20cu: goto label_3cb20c;
        case 0x3cb210u: goto label_3cb210;
        case 0x3cb214u: goto label_3cb214;
        case 0x3cb218u: goto label_3cb218;
        case 0x3cb21cu: goto label_3cb21c;
        case 0x3cb220u: goto label_3cb220;
        case 0x3cb224u: goto label_3cb224;
        case 0x3cb228u: goto label_3cb228;
        case 0x3cb22cu: goto label_3cb22c;
        case 0x3cb230u: goto label_3cb230;
        case 0x3cb234u: goto label_3cb234;
        case 0x3cb238u: goto label_3cb238;
        case 0x3cb23cu: goto label_3cb23c;
        case 0x3cb240u: goto label_3cb240;
        case 0x3cb244u: goto label_3cb244;
        case 0x3cb248u: goto label_3cb248;
        case 0x3cb24cu: goto label_3cb24c;
        case 0x3cb250u: goto label_3cb250;
        case 0x3cb254u: goto label_3cb254;
        case 0x3cb258u: goto label_3cb258;
        case 0x3cb25cu: goto label_3cb25c;
        case 0x3cb260u: goto label_3cb260;
        case 0x3cb264u: goto label_3cb264;
        case 0x3cb268u: goto label_3cb268;
        default: break;
    }

    ctx->pc = 0x3cac90u;

label_3cac90:
    // 0x3cac90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cac94:
    // 0x3cac94: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3cac98:
    // 0x3cac98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3cac9c:
    // 0x3cac9c: 0x2463e3e0  addiu       $v1, $v1, -0x1C20
    ctx->pc = 0x3cac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960096));
label_3caca0:
    // 0x3caca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3caca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3caca4:
    // 0x3caca4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x3caca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3caca8:
    // 0x3caca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3caca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cacac:
    // 0x3cacac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3cacacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cacb0:
    // 0x3cacb0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3cacb0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3cacb4:
    // 0x3cacb4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3cacb8:
    // 0x3cacb8: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3cacb8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_3cacbc:
    // 0x3cacbc: 0x2463e3f0  addiu       $v1, $v1, -0x1C10
    ctx->pc = 0x3cacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960112));
label_3cacc0:
    // 0x3cacc0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3cacc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3cacc4:
    // 0x3cacc4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3cacc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_3cacc8:
    // 0x3cacc8: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3cacc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_3caccc:
    // 0x3caccc: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3cacccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3cacd0:
    // 0x3cacd0: 0x10200161  beqz        $at, . + 4 + (0x161 << 2)
label_3cacd4:
    if (ctx->pc == 0x3CACD4u) {
        ctx->pc = 0x3CACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACD0u;
        // 0x3cacd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACD8u;
        goto label_3cacd8;
    }
    ctx->pc = 0x3CACD0u;
    {
        const bool branch_taken_0x3cacd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACD0u;
        // 0x3cacd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cacd0) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CACD8u;
label_3cacd8:
    // 0x3cacd8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3cacd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
label_3cacdc:
    // 0x3cacdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3cace0:
    // 0x3cace0: 0x24a52f70  addiu       $a1, $a1, 0x2F70
    ctx->pc = 0x3cace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12144));
label_3cace4:
    // 0x3cace4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3cace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3cace8:
    // 0x3cace8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cacec:
    // 0x3cacec: 0x600008  jr          $v1
label_3cacf0:
    if (ctx->pc == 0x3CACF0u) {
        ctx->pc = 0x3CACF4u;
        goto label_3cacf4;
    }
    ctx->pc = 0x3CACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CACF8u: goto label_3cacf8;
            case 0x3CAE10u: goto label_3cae10;
            case 0x3CAEE8u: goto label_3caee8;
            case 0x3CAFF8u: goto label_3caff8;
            case 0x3CB178u: goto label_3cb178;
            case 0x3CB1D0u: goto label_3cb1d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CACECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CACF4u;
label_3cacf4:
    // 0x3cacf4: 0x0  nop
    ctx->pc = 0x3cacf4u;
    // NOP
label_3cacf8:
    // 0x3cacf8: 0xc06039c  jal         func_180E70
label_3cacfc:
    if (ctx->pc == 0x3CACFCu) {
        ctx->pc = 0x3CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACF8u;
        // 0x3cacfc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAD00u;
        goto label_3cad00;
    }
    ctx->pc = 0x3CACF8u;
    SET_GPR_U32(ctx, 31, 0x3CAD00u);
    ctx->pc = 0x3CACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CACF8u;
    // 0x3cacfc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x3CACF8u, 0x3CAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAD00u;
label_3cad00:
    // 0x3cad00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3cad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cad04:
    // 0x3cad04: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3cad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3cad08:
    // 0x3cad08: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_3cad0c:
    if (ctx->pc == 0x3CAD0Cu) {
        ctx->pc = 0x3CAD10u;
        goto label_3cad10;
    }
    ctx->pc = 0x3CAD08u;
    {
        const bool branch_taken_0x3cad08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3cad08) {
            ctx->pc = 0x3CAD30u;
            goto label_3cad30;
        }
    }
    ctx->pc = 0x3CAD10u;
label_3cad10:
    // 0x3cad10: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3cad10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3cad14:
    // 0x3cad14: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cad14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cad18:
    // 0x3cad18: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3cad18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3cad1c:
    // 0x3cad1c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cad20:
    // 0x3cad20: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x3cad20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
label_3cad24:
    // 0x3cad24: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cad24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3cad28:
    // 0x3cad28: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x3cad28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_3cad2c:
    // 0x3cad2c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3cad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_3cad30:
    // 0x3cad30: 0x92232b31  lbu         $v1, 0x2B31($s1)
    ctx->pc = 0x3cad30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11057)));
label_3cad34:
    // 0x3cad34: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_3cad38:
    if (ctx->pc == 0x3CAD38u) {
        ctx->pc = 0x3CAD3Cu;
        goto label_3cad3c;
    }
    ctx->pc = 0x3CAD34u;
    {
        const bool branch_taken_0x3cad34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cad34) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CAD3Cu;
label_3cad3c:
    // 0x3cad3c: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3cad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_3cad40:
    // 0x3cad40: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3cad40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_3cad44:
    // 0x3cad44: 0xc07cce0  jal         func_1F3380
label_3cad48:
    if (ctx->pc == 0x3CAD48u) {
        ctx->pc = 0x3CAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAD44u;
        // 0x3cad48: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAD4Cu;
        goto label_3cad4c;
    }
    ctx->pc = 0x3CAD44u;
    SET_GPR_U32(ctx, 31, 0x3CAD4Cu);
    ctx->pc = 0x3CAD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAD44u;
    // 0x3cad48: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3CAD44u, 0x3CAD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAD4Cu;
label_3cad4c:
    // 0x3cad4c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3cad4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_3cad50:
    // 0x3cad50: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3cad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_3cad54:
    // 0x3cad54: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3cad54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_3cad58:
    // 0x3cad58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cad58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3cad5c:
    // 0x3cad5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cad60:
    // 0x3cad60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cad64:
    // 0x3cad64: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3cad68:
    if (ctx->pc == 0x3CAD68u) {
        ctx->pc = 0x3CAD6Cu;
        goto label_3cad6c;
    }
    ctx->pc = 0x3CAD64u;
    {
        const bool branch_taken_0x3cad64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cad64) {
            ctx->pc = 0x3CADB0u;
            goto label_3cadb0;
        }
    }
    ctx->pc = 0x3CAD6Cu;
label_3cad6c:
    // 0x3cad6c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3cad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cad70:
    // 0x3cad70: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x3cad70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
label_3cad74:
    // 0x3cad74: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3cad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_3cad78:
    // 0x3cad78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cad78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cad7c:
    // 0x3cad7c: 0x0  nop
    ctx->pc = 0x3cad7cu;
    // NOP
label_3cad80:
    // 0x3cad80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cad80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cad84:
    // 0x3cad84: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3cad88:
    if (ctx->pc == 0x3CAD88u) {
        ctx->pc = 0x3CAD8Cu;
        goto label_3cad8c;
    }
    ctx->pc = 0x3CAD84u;
    {
        const bool branch_taken_0x3cad84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cad84) {
            ctx->pc = 0x3CADB0u;
            goto label_3cadb0;
        }
    }
    ctx->pc = 0x3CAD8Cu;
label_3cad8c:
    // 0x3cad8c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3cad8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cad90:
    // 0x3cad90: 0x7e230870  sq          $v1, 0x870($s1)
    ctx->pc = 0x3cad90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2160), GPR_VEC(ctx, 3));
label_3cad94:
    // 0x3cad94: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3cad94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cad98:
    // 0x3cad98: 0x7e230880  sq          $v1, 0x880($s1)
    ctx->pc = 0x3cad98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2176), GPR_VEC(ctx, 3));
label_3cad9c:
    // 0x3cad9c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3cad9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cada0:
    // 0x3cada0: 0x7e230890  sq          $v1, 0x890($s1)
    ctx->pc = 0x3cada0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 3));
label_3cada4:
    // 0x3cada4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3cada8:
    if (ctx->pc == 0x3CADA8u) {
        ctx->pc = 0x3CADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADA4u;
        // 0x3cada8: 0xa620082a  sh          $zero, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CADACu;
        goto label_3cadac;
    }
    ctx->pc = 0x3CADA4u;
    {
        const bool branch_taken_0x3cada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADA4u;
        // 0x3cada8: 0xa620082a  sh          $zero, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cada4) {
            ctx->pc = 0x3CADD0u;
            goto label_3cadd0;
        }
    }
    ctx->pc = 0x3CADACu;
label_3cadac:
    // 0x3cadac: 0x0  nop
    ctx->pc = 0x3cadacu;
    // NOP
label_3cadb0:
    // 0x3cadb0: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x3cadb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cadb4:
    // 0x3cadb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cadb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cadb8:
    // 0x3cadb8: 0x7e240870  sq          $a0, 0x870($s1)
    ctx->pc = 0x3cadb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2160), GPR_VEC(ctx, 4));
label_3cadbc:
    // 0x3cadbc: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x3cadbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cadc0:
    // 0x3cadc0: 0x7e240880  sq          $a0, 0x880($s1)
    ctx->pc = 0x3cadc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2176), GPR_VEC(ctx, 4));
label_3cadc4:
    // 0x3cadc4: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x3cadc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cadc8:
    // 0x3cadc8: 0x7e240890  sq          $a0, 0x890($s1)
    ctx->pc = 0x3cadc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 4));
label_3cadcc:
    // 0x3cadcc: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3cadccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
label_3cadd0:
    // 0x3cadd0: 0xa6202b32  sh          $zero, 0x2B32($s1)
    ctx->pc = 0x3cadd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 0));
label_3cadd4:
    // 0x3cadd4: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x3cadd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3cadd8:
    // 0x3cadd8: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3cadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_3caddc:
    // 0x3caddc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3caddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cade0:
    // 0x3cade0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cade0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3cade4:
    // 0x3cade4: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
label_3cade8:
    // 0x3cade8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cadec:
    // 0x3cadec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3cadecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3cadf0:
    // 0x3cadf0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3cadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3cadf4:
    // 0x3cadf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cadf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3cadf8:
    // 0x3cadf8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3cadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3cadfc:
    // 0x3cadfc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cadfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cae00:
    // 0x3cae00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cae00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cae04:
    // 0x3cae04: 0xe6202b28  swc1        $f0, 0x2B28($s1)
    ctx->pc = 0x3cae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11048), bits); }
label_3cae08:
    // 0x3cae08: 0x10000113  b           . + 4 + (0x113 << 2)
label_3cae0c:
    if (ctx->pc == 0x3CAE0Cu) {
        ctx->pc = 0x3CAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE08u;
        // 0x3cae0c: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE10u;
        goto label_3cae10;
    }
    ctx->pc = 0x3CAE08u;
    {
        const bool branch_taken_0x3cae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE08u;
        // 0x3cae0c: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cae08) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CAE10u;
label_3cae10:
    // 0x3cae10: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3cae14:
    // 0x3cae14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cae14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cae18:
    // 0x3cae18: 0xc0f2a20  jal         func_3CA880
label_3cae1c:
    if (ctx->pc == 0x3CAE1Cu) {
        ctx->pc = 0x3CAE20u;
        goto label_3cae20;
    }
    ctx->pc = 0x3CAE18u;
    SET_GPR_U32(ctx, 31, 0x3CAE20u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CAE18u, 0x3CAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE20u;
label_3cae20:
    // 0x3cae20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cae24:
    // 0x3cae24: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_3cae28:
    if (ctx->pc == 0x3CAE28u) {
        ctx->pc = 0x3CAE2Cu;
        goto label_3cae2c;
    }
    ctx->pc = 0x3CAE24u;
    {
        const bool branch_taken_0x3cae24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cae24) {
            ctx->pc = 0x3CAE90u;
            goto label_3cae90;
        }
    }
    ctx->pc = 0x3CAE2Cu;
label_3cae2c:
    // 0x3cae2c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cae30:
    // 0x3cae30: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3cae30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3cae34:
    // 0x3cae34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cae34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cae38:
    // 0x3cae38: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3cae3c:
    // 0x3cae3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cae3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cae40:
    // 0x3cae40: 0x0  nop
    ctx->pc = 0x3cae40u;
    // NOP
label_3cae44:
    // 0x3cae44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cae44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3cae48:
    // 0x3cae48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cae48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cae4c:
    // 0x3cae4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3cae50:
    if (ctx->pc == 0x3CAE50u) {
        ctx->pc = 0x3CAE54u;
        goto label_3cae54;
    }
    ctx->pc = 0x3CAE4Cu;
    {
        const bool branch_taken_0x3cae4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cae4c) {
            ctx->pc = 0x3CAE64u;
            goto label_3cae64;
        }
    }
    ctx->pc = 0x3CAE54u;
label_3cae54:
    // 0x3cae54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cae54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cae58:
    // 0x3cae58: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cae58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cae5c:
    // 0x3cae5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3cae60:
    if (ctx->pc == 0x3CAE60u) {
        ctx->pc = 0x3CAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE5Cu;
        // 0x3cae60: 0x96242b32  lhu         $a0, 0x2B32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE64u;
        goto label_3cae64;
    }
    ctx->pc = 0x3CAE5Cu;
    {
        const bool branch_taken_0x3cae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE5Cu;
        // 0x3cae60: 0x96242b32  lhu         $a0, 0x2B32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cae5c) {
            ctx->pc = 0x3CAE80u;
            goto label_3cae80;
        }
    }
    ctx->pc = 0x3CAE64u;
label_3cae64:
    // 0x3cae64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cae64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cae68:
    // 0x3cae68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cae68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cae6c:
    // 0x3cae6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cae6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cae70:
    // 0x3cae70: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cae70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cae74:
    // 0x3cae74: 0x0  nop
    ctx->pc = 0x3cae74u;
    // NOP
label_3cae78:
    // 0x3cae78: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cae78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3cae7c:
    // 0x3cae7c: 0x96242b32  lhu         $a0, 0x2B32($s1)
    ctx->pc = 0x3cae7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
label_3cae80:
    // 0x3cae80: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cae84:
    // 0x3cae84: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cae84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3cae88:
    // 0x3cae88: 0x102000f3  beqz        $at, . + 4 + (0xF3 << 2)
label_3cae8c:
    if (ctx->pc == 0x3CAE8Cu) {
        ctx->pc = 0x3CAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE88u;
        // 0x3cae8c: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE90u;
        goto label_3cae90;
    }
    ctx->pc = 0x3CAE88u;
    {
        const bool branch_taken_0x3cae88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE88u;
        // 0x3cae8c: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cae88) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CAE90u;
label_3cae90:
    // 0x3cae90: 0x7a270870  lq          $a3, 0x870($s1)
    ctx->pc = 0x3cae90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 2160)));
label_3cae94:
    // 0x3cae94: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cae94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3cae98:
    // 0x3cae98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3cae98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cae9c:
    // 0x3cae9c: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
label_3caea0:
    // 0x3caea0: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x3caea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
label_3caea4:
    // 0x3caea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3caea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3caea8:
    // 0x3caea8: 0x7e270890  sq          $a3, 0x890($s1)
    ctx->pc = 0x3caea8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 7));
label_3caeac:
    // 0x3caeac: 0x7a270880  lq          $a3, 0x880($s1)
    ctx->pc = 0x3caeacu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 2176)));
label_3caeb0:
    // 0x3caeb0: 0x7e270870  sq          $a3, 0x870($s1)
    ctx->pc = 0x3caeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2160), GPR_VEC(ctx, 7));
label_3caeb4:
    // 0x3caeb4: 0xa6200828  sh          $zero, 0x828($s1)
    ctx->pc = 0x3caeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 0));
label_3caeb8:
    // 0x3caeb8: 0xa6260826  sh          $a2, 0x826($s1)
    ctx->pc = 0x3caeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 6));
label_3caebc:
    // 0x3caebc: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x3caebcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3caec0:
    // 0x3caec0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3caec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_3caec4:
    // 0x3caec4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3caec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3caec8:
    // 0x3caec8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3caec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3caecc:
    // 0x3caecc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3caeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3caed0:
    // 0x3caed0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3caed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caed4:
    // 0x3caed4: 0xe6202b28  swc1        $f0, 0x2B28($s1)
    ctx->pc = 0x3caed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11048), bits); }
label_3caed8:
    // 0x3caed8: 0xae242b24  sw          $a0, 0x2B24($s1)
    ctx->pc = 0x3caed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 4));
label_3caedc:
    // 0x3caedc: 0xa6202b32  sh          $zero, 0x2B32($s1)
    ctx->pc = 0x3caedcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 0));
label_3caee0:
    // 0x3caee0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_3caee4:
    if (ctx->pc == 0x3CAEE4u) {
        ctx->pc = 0x3CAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAEE0u;
        // 0x3caee4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAEE8u;
        goto label_3caee8;
    }
    ctx->pc = 0x3CAEE0u;
    {
        const bool branch_taken_0x3caee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAEE0u;
        // 0x3caee4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caee0) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CAEE8u;
label_3caee8:
    // 0x3caee8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3caee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3caeec:
    // 0x3caeec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3caeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3caef0:
    // 0x3caef0: 0xc0f2a20  jal         func_3CA880
label_3caef4:
    if (ctx->pc == 0x3CAEF4u) {
        ctx->pc = 0x3CAEF8u;
        goto label_3caef8;
    }
    ctx->pc = 0x3CAEF0u;
    SET_GPR_U32(ctx, 31, 0x3CAEF8u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CAEF0u, 0x3CAEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAEF8u;
label_3caef8:
    // 0x3caef8: 0x9624082a  lhu         $a0, 0x82A($s1)
    ctx->pc = 0x3caef8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
label_3caefc:
    // 0x3caefc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_3caf00:
    if (ctx->pc == 0x3CAF00u) {
        ctx->pc = 0x3CAF04u;
        goto label_3caf04;
    }
    ctx->pc = 0x3CAEFCu;
    {
        const bool branch_taken_0x3caefc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3caefc) {
            ctx->pc = 0x3CAF28u;
            goto label_3caf28;
        }
    }
    ctx->pc = 0x3CAF04u;
label_3caf04:
    // 0x3caf04: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3caf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caf08:
    // 0x3caf08: 0x3c034609  lui         $v1, 0x4609
    ctx->pc = 0x3caf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17929 << 16));
label_3caf0c:
    // 0x3caf0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3caf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3caf10:
    // 0x3caf10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3caf10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3caf14:
    // 0x3caf14: 0x0  nop
    ctx->pc = 0x3caf14u;
    // NOP
label_3caf18:
    // 0x3caf18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3caf18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3caf1c:
    // 0x3caf1c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_3caf20:
    if (ctx->pc == 0x3CAF20u) {
        ctx->pc = 0x3CAF24u;
        goto label_3caf24;
    }
    ctx->pc = 0x3CAF1Cu;
    {
        const bool branch_taken_0x3caf1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3caf1c) {
            ctx->pc = 0x3CAFC0u;
            goto label_3cafc0;
        }
    }
    ctx->pc = 0x3CAF24u;
label_3caf24:
    // 0x3caf24: 0x0  nop
    ctx->pc = 0x3caf24u;
    // NOP
label_3caf28:
    // 0x3caf28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3caf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3caf2c:
    // 0x3caf2c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_3caf30:
    if (ctx->pc == 0x3CAF30u) {
        ctx->pc = 0x3CAF34u;
        goto label_3caf34;
    }
    ctx->pc = 0x3CAF2Cu;
    {
        const bool branch_taken_0x3caf2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3caf2c) {
            ctx->pc = 0x3CAF58u;
            goto label_3caf58;
        }
    }
    ctx->pc = 0x3CAF34u;
label_3caf34:
    // 0x3caf34: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3caf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caf38:
    // 0x3caf38: 0x3c0345ed  lui         $v1, 0x45ED
    ctx->pc = 0x3caf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17901 << 16));
label_3caf3c:
    // 0x3caf3c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3caf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3caf40:
    // 0x3caf40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3caf40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3caf44:
    // 0x3caf44: 0x0  nop
    ctx->pc = 0x3caf44u;
    // NOP
label_3caf48:
    // 0x3caf48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3caf48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3caf4c:
    // 0x3caf4c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_3caf50:
    if (ctx->pc == 0x3CAF50u) {
        ctx->pc = 0x3CAF54u;
        goto label_3caf54;
    }
    ctx->pc = 0x3CAF4Cu;
    {
        const bool branch_taken_0x3caf4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3caf4c) {
            ctx->pc = 0x3CAFC0u;
            goto label_3cafc0;
        }
    }
    ctx->pc = 0x3CAF54u;
label_3caf54:
    // 0x3caf54: 0x0  nop
    ctx->pc = 0x3caf54u;
    // NOP
label_3caf58:
    // 0x3caf58: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3caf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3caf5c:
    // 0x3caf5c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3caf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3caf60:
    // 0x3caf60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3caf60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3caf64:
    // 0x3caf64: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3caf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3caf68:
    // 0x3caf68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3caf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3caf6c:
    // 0x3caf6c: 0x0  nop
    ctx->pc = 0x3caf6cu;
    // NOP
label_3caf70:
    // 0x3caf70: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3caf70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3caf74:
    // 0x3caf74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3caf74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3caf78:
    // 0x3caf78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3caf7c:
    if (ctx->pc == 0x3CAF7Cu) {
        ctx->pc = 0x3CAF80u;
        goto label_3caf80;
    }
    ctx->pc = 0x3CAF78u;
    {
        const bool branch_taken_0x3caf78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3caf78) {
            ctx->pc = 0x3CAF90u;
            goto label_3caf90;
        }
    }
    ctx->pc = 0x3CAF80u;
label_3caf80:
    // 0x3caf80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3caf80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3caf84:
    // 0x3caf84: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3caf84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3caf88:
    // 0x3caf88: 0x10000008  b           . + 4 + (0x8 << 2)
label_3caf8c:
    if (ctx->pc == 0x3CAF8Cu) {
        ctx->pc = 0x3CAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF88u;
        // 0x3caf8c: 0x96242b32  lhu         $a0, 0x2B32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF90u;
        goto label_3caf90;
    }
    ctx->pc = 0x3CAF88u;
    {
        const bool branch_taken_0x3caf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF88u;
        // 0x3caf8c: 0x96242b32  lhu         $a0, 0x2B32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caf88) {
            ctx->pc = 0x3CAFACu;
            goto label_3cafac;
        }
    }
    ctx->pc = 0x3CAF90u;
label_3caf90:
    // 0x3caf90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3caf90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3caf94:
    // 0x3caf94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3caf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3caf98:
    // 0x3caf98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3caf98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3caf9c:
    // 0x3caf9c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3caf9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cafa0:
    // 0x3cafa0: 0x0  nop
    ctx->pc = 0x3cafa0u;
    // NOP
label_3cafa4:
    // 0x3cafa4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cafa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3cafa8:
    // 0x3cafa8: 0x96242b32  lhu         $a0, 0x2B32($s1)
    ctx->pc = 0x3cafa8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
label_3cafac:
    // 0x3cafac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cafacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cafb0:
    // 0x3cafb0: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cafb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3cafb4:
    // 0x3cafb4: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
label_3cafb8:
    if (ctx->pc == 0x3CAFB8u) {
        ctx->pc = 0x3CAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFB4u;
        // 0x3cafb8: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFBCu;
        goto label_3cafbc;
    }
    ctx->pc = 0x3CAFB4u;
    {
        const bool branch_taken_0x3cafb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFB4u;
        // 0x3cafb8: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafb4) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CAFBCu;
label_3cafbc:
    // 0x3cafbc: 0x0  nop
    ctx->pc = 0x3cafbcu;
    // NOP
label_3cafc0:
    // 0x3cafc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cafc4:
    // 0x3cafc4: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x3cafc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
label_3cafc8:
    // 0x3cafc8: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x3cafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_3cafcc:
    // 0x3cafcc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3cafccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3cafd0:
    // 0x3cafd0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cafd4:
    // 0x3cafd4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3cafd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3cafd8:
    // 0x3cafd8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cafdc:
    // 0x3cafdc: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3cafdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_3cafe0:
    // 0x3cafe0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3cafe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3cafe4:
    // 0x3cafe4: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x3cafe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3cafe8:
    // 0x3cafe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cafec:
    // 0x3cafec: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3cafecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_3caff0:
    // 0x3caff0: 0x10000099  b           . + 4 + (0x99 << 2)
label_3caff4:
    if (ctx->pc == 0x3CAFF4u) {
        ctx->pc = 0x3CAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFF0u;
        // 0x3caff4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFF8u;
        goto label_3caff8;
    }
    ctx->pc = 0x3CAFF0u;
    {
        const bool branch_taken_0x3caff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFF0u;
        // 0x3caff4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caff0) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CAFF8u;
label_3caff8:
    // 0x3caff8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3caff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3caffc:
    // 0x3caffc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3caffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb000:
    // 0x3cb000: 0xc0f2a20  jal         func_3CA880
label_3cb004:
    if (ctx->pc == 0x3CB004u) {
        ctx->pc = 0x3CB008u;
        goto label_3cb008;
    }
    ctx->pc = 0x3CB000u;
    SET_GPR_U32(ctx, 31, 0x3CB008u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB000u, 0x3CB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB008u;
label_3cb008:
    // 0x3cb008: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3cb008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_3cb00c:
    // 0x3cb00c: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
label_3cb010:
    if (ctx->pc == 0x3CB010u) {
        ctx->pc = 0x3CB014u;
        goto label_3cb014;
    }
    ctx->pc = 0x3CB00Cu;
    {
        const bool branch_taken_0x3cb00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb00c) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB014u;
label_3cb014:
    // 0x3cb014: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3cb014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_3cb018:
    // 0x3cb018: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_3cb01c:
    if (ctx->pc == 0x3CB01Cu) {
        ctx->pc = 0x3CB020u;
        goto label_3cb020;
    }
    ctx->pc = 0x3CB018u;
    {
        const bool branch_taken_0x3cb018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb018) {
            ctx->pc = 0x3CB148u;
            goto label_3cb148;
        }
    }
    ctx->pc = 0x3CB020u;
label_3cb020:
    // 0x3cb020: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3cb020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3cb024:
    // 0x3cb024: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3cb024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3cb028:
    // 0x3cb028: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x3cb028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_3cb02c:
    // 0x3cb02c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3cb02cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3cb030:
    // 0x3cb030: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3cb030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3cb034:
    // 0x3cb034: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3cb034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3cb038:
    // 0x3cb038: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3cb038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_3cb03c:
    // 0x3cb03c: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x3cb03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_3cb040:
    // 0x3cb040: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x3cb040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
label_3cb044:
    // 0x3cb044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cb044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb048:
    // 0x3cb048: 0xc0b2ebc  jal         func_2CBAF0
label_3cb04c:
    if (ctx->pc == 0x3CB04Cu) {
        ctx->pc = 0x3CB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB048u;
        // 0x3cb04c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB050u;
        goto label_3cb050;
    }
    ctx->pc = 0x3CB048u;
    SET_GPR_U32(ctx, 31, 0x3CB050u);
    ctx->pc = 0x3CB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB048u;
    // 0x3cb04c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3CB048u, 0x3CB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB050u;
label_3cb050:
    // 0x3cb050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb054:
    // 0x3cb054: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_3cb058:
    if (ctx->pc == 0x3CB058u) {
        ctx->pc = 0x3CB05Cu;
        goto label_3cb05c;
    }
    ctx->pc = 0x3CB054u;
    {
        const bool branch_taken_0x3cb054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb054) {
            ctx->pc = 0x3CB138u;
            goto label_3cb138;
        }
    }
    ctx->pc = 0x3CB05Cu;
label_3cb05c:
    // 0x3cb05c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3cb05cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3cb060:
    // 0x3cb060: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3cb060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3cb064:
    // 0x3cb064: 0x320f809  jalr        $t9
label_3cb068:
    if (ctx->pc == 0x3CB068u) {
        ctx->pc = 0x3CB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB064u;
        // 0x3cb068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB06Cu;
        goto label_3cb06c;
    }
    ctx->pc = 0x3CB064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CB06Cu);
        ctx->pc = 0x3CB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB064u;
        // 0x3cb068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB064u, 0x3CB06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB06Cu;
label_3cb06c:
    // 0x3cb06c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3cb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3cb070:
    // 0x3cb070: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x3cb070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3cb074:
    // 0x3cb074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb078:
    // 0x3cb078: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3cb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb07c:
    // 0x3cb07c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3cb07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3cb080:
    // 0x3cb080: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3cb080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_3cb084:
    // 0x3cb084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb088:
    // 0x3cb088: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3cb088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_3cb08c:
    // 0x3cb08c: 0x78420070  lq          $v0, 0x70($v0)
    ctx->pc = 0x3cb08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 112)));
label_3cb090:
    // 0x3cb090: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb094:
    // 0x3cb094: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x3cb094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb098:
    // 0x3cb098: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3cb098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb09c:
    // 0x3cb09c: 0xc0414dc  jal         func_105370
label_3cb0a0:
    if (ctx->pc == 0x3CB0A0u) {
        ctx->pc = 0x3CB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB09Cu;
        // 0x3cb0a0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB0A4u;
        goto label_3cb0a4;
    }
    ctx->pc = 0x3CB09Cu;
    SET_GPR_U32(ctx, 31, 0x3CB0A4u);
    ctx->pc = 0x3CB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB09Cu;
    // 0x3cb0a0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3CB09Cu, 0x3CB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB0A4u;
label_3cb0a4:
    // 0x3cb0a4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3cb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3cb0a8:
    // 0x3cb0a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3cb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb0ac:
    // 0x3cb0ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cb0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0b0:
    // 0x3cb0b0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3cb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3cb0b4:
    // 0x3cb0b4: 0xc0414ca  jal         func_105328
label_3cb0b8:
    if (ctx->pc == 0x3CB0B8u) {
        ctx->pc = 0x3CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0B4u;
        // 0x3cb0b8: 0x24460070  addiu       $a2, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB0BCu;
        goto label_3cb0bc;
    }
    ctx->pc = 0x3CB0B4u;
    SET_GPR_U32(ctx, 31, 0x3CB0BCu);
    ctx->pc = 0x3CB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB0B4u;
    // 0x3cb0b8: 0x24460070  addiu       $a2, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3CB0B4u, 0x3CB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB0BCu;
label_3cb0bc:
    // 0x3cb0bc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3cb0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb0c0:
    // 0x3cb0c0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3cb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3cb0c4:
    // 0x3cb0c4: 0xc62028f0  lwc1        $f0, 0x28F0($s1)
    ctx->pc = 0x3cb0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb0c8:
    // 0x3cb0c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3cb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb0cc:
    // 0x3cb0cc: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x3cb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
label_3cb0d0:
    // 0x3cb0d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cb0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0d4:
    // 0x3cb0d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3cb0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb0d8:
    // 0x3cb0d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3cb0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3cb0dc:
    // 0x3cb0dc: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x3cb0dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3cb0e0:
    // 0x3cb0e0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3cb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3cb0e4:
    // 0x3cb0e4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3cb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3cb0e8:
    // 0x3cb0e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3cb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3cb0ec:
    // 0x3cb0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cb0f0:
    // 0x3cb0f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3cb0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cb0f4:
    // 0x3cb0f4: 0xc0b82c4  jal         func_2E0B10
label_3cb0f8:
    if (ctx->pc == 0x3CB0F8u) {
        ctx->pc = 0x3CB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0F4u;
        // 0x3cb0f8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB0FCu;
        goto label_3cb0fc;
    }
    ctx->pc = 0x3CB0F4u;
    SET_GPR_U32(ctx, 31, 0x3CB0FCu);
    ctx->pc = 0x3CB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB0F4u;
    // 0x3cb0f8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B10u, 0x3CB0F4u, 0x3CB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB0FCu;
label_3cb0fc:
    // 0x3cb0fc: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3cb0fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cb100:
    // 0x3cb100: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3cb100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3cb104:
    // 0x3cb104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb108:
    // 0x3cb108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb10c:
    // 0x3cb10c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3cb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb110:
    // 0x3cb110: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3cb110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb114:
    // 0x3cb114: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3cb114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3cb118:
    // 0x3cb118: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3cb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3cb11c:
    // 0x3cb11c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3cb11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb120:
    // 0x3cb120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3cb120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3cb124:
    // 0x3cb124: 0xc0bc938  jal         func_2F24E0
label_3cb128:
    if (ctx->pc == 0x3CB128u) {
        ctx->pc = 0x3CB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB124u;
        // 0x3cb128: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB12Cu;
        goto label_3cb12c;
    }
    ctx->pc = 0x3CB124u;
    SET_GPR_U32(ctx, 31, 0x3CB12Cu);
    ctx->pc = 0x3CB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB124u;
    // 0x3cb128: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F24E0u, 0x3CB124u, 0x3CB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB12Cu;
label_3cb12c:
    // 0x3cb12c: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x3cb12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_3cb130:
    // 0x3cb130: 0xa20307d9  sb          $v1, 0x7D9($s0)
    ctx->pc = 0x3cb130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 3));
label_3cb134:
    // 0x3cb134: 0x0  nop
    ctx->pc = 0x3cb134u;
    // NOP
label_3cb138:
    // 0x3cb138: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3cb138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_3cb13c:
    // 0x3cb13c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3cb140:
    // 0x3cb140: 0x10000045  b           . + 4 + (0x45 << 2)
label_3cb144:
    if (ctx->pc == 0x3CB144u) {
        ctx->pc = 0x3CB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB140u;
        // 0x3cb144: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB148u;
        goto label_3cb148;
    }
    ctx->pc = 0x3CB140u;
    {
        const bool branch_taken_0x3cb140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB140u;
        // 0x3cb144: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb140) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB148u;
label_3cb148:
    // 0x3cb148: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3cb148u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3cb14c:
    // 0x3cb14c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3cb14cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3cb150:
    // 0x3cb150: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x3cb150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_3cb154:
    // 0x3cb154: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3cb154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3cb158:
    // 0x3cb158: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3cb158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cb15c:
    // 0x3cb15c: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x3cb15cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
label_3cb160:
    // 0x3cb160: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cb164:
    // 0x3cb164: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3cb164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3cb168:
    // 0x3cb168: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cb16c:
    // 0x3cb16c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3cb16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_3cb170:
    // 0x3cb170: 0x10000039  b           . + 4 + (0x39 << 2)
label_3cb174:
    if (ctx->pc == 0x3CB174u) {
        ctx->pc = 0x3CB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB170u;
        // 0x3cb174: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB178u;
        goto label_3cb178;
    }
    ctx->pc = 0x3CB170u;
    {
        const bool branch_taken_0x3cb170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB170u;
        // 0x3cb174: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb170) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB178u;
label_3cb178:
    // 0x3cb178: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3cb17c:
    // 0x3cb17c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb180:
    // 0x3cb180: 0xc0f2a20  jal         func_3CA880
label_3cb184:
    if (ctx->pc == 0x3CB184u) {
        ctx->pc = 0x3CB188u;
        goto label_3cb188;
    }
    ctx->pc = 0x3CB180u;
    SET_GPR_U32(ctx, 31, 0x3CB188u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB180u, 0x3CB188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB188u;
label_3cb188:
    // 0x3cb188: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3cb188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_3cb18c:
    // 0x3cb18c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_3cb190:
    if (ctx->pc == 0x3CB190u) {
        ctx->pc = 0x3CB194u;
        goto label_3cb194;
    }
    ctx->pc = 0x3CB18Cu;
    {
        const bool branch_taken_0x3cb18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb18c) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB194u;
label_3cb194:
    // 0x3cb194: 0xa6202b32  sh          $zero, 0x2B32($s1)
    ctx->pc = 0x3cb194u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 0));
label_3cb198:
    // 0x3cb198: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cb19c:
    // 0x3cb19c: 0xae202b24  sw          $zero, 0x2B24($s1)
    ctx->pc = 0x3cb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 0));
label_3cb1a0:
    // 0x3cb1a0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3cb1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3cb1a4:
    // 0x3cb1a4: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3cb1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3cb1a8:
    // 0x3cb1a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3cb1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3cb1ac:
    // 0x3cb1ac: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3cb1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3cb1b0:
    // 0x3cb1b0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cb1b4:
    // 0x3cb1b4: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x3cb1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
label_3cb1b8:
    // 0x3cb1b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3cb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3cb1bc:
    // 0x3cb1bc: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x3cb1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3cb1c0:
    // 0x3cb1c0: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3cb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_3cb1c4:
    // 0x3cb1c4: 0x10000024  b           . + 4 + (0x24 << 2)
label_3cb1c8:
    if (ctx->pc == 0x3CB1C8u) {
        ctx->pc = 0x3CB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1C4u;
        // 0x3cb1c8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1CCu;
        goto label_3cb1cc;
    }
    ctx->pc = 0x3CB1C4u;
    {
        const bool branch_taken_0x3cb1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1C4u;
        // 0x3cb1c8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1c4) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB1CCu;
label_3cb1cc:
    // 0x3cb1cc: 0x0  nop
    ctx->pc = 0x3cb1ccu;
    // NOP
label_3cb1d0:
    // 0x3cb1d0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3cb1d4:
    // 0x3cb1d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb1d8:
    // 0x3cb1d8: 0xc0f2a20  jal         func_3CA880
label_3cb1dc:
    if (ctx->pc == 0x3CB1DCu) {
        ctx->pc = 0x3CB1E0u;
        goto label_3cb1e0;
    }
    ctx->pc = 0x3CB1D8u;
    SET_GPR_U32(ctx, 31, 0x3CB1E0u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB1D8u, 0x3CB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1E0u;
label_3cb1e0:
    // 0x3cb1e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cb1e4:
    // 0x3cb1e4: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_3cb1e8:
    if (ctx->pc == 0x3CB1E8u) {
        ctx->pc = 0x3CB1ECu;
        goto label_3cb1ec;
    }
    ctx->pc = 0x3CB1E4u;
    {
        const bool branch_taken_0x3cb1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb1e4) {
            ctx->pc = 0x3CB250u;
            goto label_3cb250;
        }
    }
    ctx->pc = 0x3CB1ECu;
label_3cb1ec:
    // 0x3cb1ec: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cb1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb1f0:
    // 0x3cb1f0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3cb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3cb1f4:
    // 0x3cb1f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cb1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cb1f8:
    // 0x3cb1f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cb1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3cb1fc:
    // 0x3cb1fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb200:
    // 0x3cb200: 0x0  nop
    ctx->pc = 0x3cb200u;
    // NOP
label_3cb204:
    // 0x3cb204: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cb204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3cb208:
    // 0x3cb208: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cb208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb20c:
    // 0x3cb20c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3cb210:
    if (ctx->pc == 0x3CB210u) {
        ctx->pc = 0x3CB214u;
        goto label_3cb214;
    }
    ctx->pc = 0x3CB20Cu;
    {
        const bool branch_taken_0x3cb20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb20c) {
            ctx->pc = 0x3CB224u;
            goto label_3cb224;
        }
    }
    ctx->pc = 0x3CB214u;
label_3cb214:
    // 0x3cb214: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cb218:
    // 0x3cb218: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cb21c:
    // 0x3cb21c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3cb220:
    if (ctx->pc == 0x3CB220u) {
        ctx->pc = 0x3CB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB21Cu;
        // 0x3cb220: 0x96242b32  lhu         $a0, 0x2B32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB224u;
        goto label_3cb224;
    }
    ctx->pc = 0x3CB21Cu;
    {
        const bool branch_taken_0x3cb21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB21Cu;
        // 0x3cb220: 0x96242b32  lhu         $a0, 0x2B32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb21c) {
            ctx->pc = 0x3CB240u;
            goto label_3cb240;
        }
    }
    ctx->pc = 0x3CB224u;
label_3cb224:
    // 0x3cb224: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cb224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb228:
    // 0x3cb228: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cb22c:
    // 0x3cb22c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb22cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cb230:
    // 0x3cb230: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cb230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cb234:
    // 0x3cb234: 0x0  nop
    ctx->pc = 0x3cb234u;
    // NOP
label_3cb238:
    // 0x3cb238: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cb238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3cb23c:
    // 0x3cb23c: 0x96242b32  lhu         $a0, 0x2B32($s1)
    ctx->pc = 0x3cb23cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
label_3cb240:
    // 0x3cb240: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cb240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cb244:
    // 0x3cb244: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cb244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3cb248:
    // 0x3cb248: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3cb24c:
    if (ctx->pc == 0x3CB24Cu) {
        ctx->pc = 0x3CB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB248u;
        // 0x3cb24c: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB250u;
        goto label_3cb250;
    }
    ctx->pc = 0x3CB248u;
    {
        const bool branch_taken_0x3cb248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB248u;
        // 0x3cb24c: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb248) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB250u;
label_3cb250:
    // 0x3cb250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb254:
    // 0x3cb254: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3cb254u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3cb258:
    // 0x3cb258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cb258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb25c:
    // 0x3cb25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cb25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb260:
    // 0x3cb260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cb260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cb264:
    // 0x3cb264: 0x3e00008  jr          $ra
label_3cb268:
    if (ctx->pc == 0x3CB268u) {
        ctx->pc = 0x3CB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB264u;
        // 0x3cb268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB26Cu;
        goto label_fallthrough_0x3cb264;
    }
    ctx->pc = 0x3CB264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB264u;
        // 0x3cb268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cb264:
    ctx->pc = 0x3CB26Cu;
}
