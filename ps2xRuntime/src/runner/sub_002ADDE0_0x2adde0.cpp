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

// Function: sub_002ADDE0
// Address: 0x2adde0 - 0x2ae374
void sub_002ADDE0_0x2adde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADDE0_0x2adde0");
#endif

    switch (ctx->pc) {
        case 0x2adde0u: goto label_2adde0;
        case 0x2adde4u: goto label_2adde4;
        case 0x2adde8u: goto label_2adde8;
        case 0x2addecu: goto label_2addec;
        case 0x2addf0u: goto label_2addf0;
        case 0x2addf4u: goto label_2addf4;
        case 0x2addf8u: goto label_2addf8;
        case 0x2addfcu: goto label_2addfc;
        case 0x2ade00u: goto label_2ade00;
        case 0x2ade04u: goto label_2ade04;
        case 0x2ade08u: goto label_2ade08;
        case 0x2ade0cu: goto label_2ade0c;
        case 0x2ade10u: goto label_2ade10;
        case 0x2ade14u: goto label_2ade14;
        case 0x2ade18u: goto label_2ade18;
        case 0x2ade1cu: goto label_2ade1c;
        case 0x2ade20u: goto label_2ade20;
        case 0x2ade24u: goto label_2ade24;
        case 0x2ade28u: goto label_2ade28;
        case 0x2ade2cu: goto label_2ade2c;
        case 0x2ade30u: goto label_2ade30;
        case 0x2ade34u: goto label_2ade34;
        case 0x2ade38u: goto label_2ade38;
        case 0x2ade3cu: goto label_2ade3c;
        case 0x2ade40u: goto label_2ade40;
        case 0x2ade44u: goto label_2ade44;
        case 0x2ade48u: goto label_2ade48;
        case 0x2ade4cu: goto label_2ade4c;
        case 0x2ade50u: goto label_2ade50;
        case 0x2ade54u: goto label_2ade54;
        case 0x2ade58u: goto label_2ade58;
        case 0x2ade5cu: goto label_2ade5c;
        case 0x2ade60u: goto label_2ade60;
        case 0x2ade64u: goto label_2ade64;
        case 0x2ade68u: goto label_2ade68;
        case 0x2ade6cu: goto label_2ade6c;
        case 0x2ade70u: goto label_2ade70;
        case 0x2ade74u: goto label_2ade74;
        case 0x2ade78u: goto label_2ade78;
        case 0x2ade7cu: goto label_2ade7c;
        case 0x2ade80u: goto label_2ade80;
        case 0x2ade84u: goto label_2ade84;
        case 0x2ade88u: goto label_2ade88;
        case 0x2ade8cu: goto label_2ade8c;
        case 0x2ade90u: goto label_2ade90;
        case 0x2ade94u: goto label_2ade94;
        case 0x2ade98u: goto label_2ade98;
        case 0x2ade9cu: goto label_2ade9c;
        case 0x2adea0u: goto label_2adea0;
        case 0x2adea4u: goto label_2adea4;
        case 0x2adea8u: goto label_2adea8;
        case 0x2adeacu: goto label_2adeac;
        case 0x2adeb0u: goto label_2adeb0;
        case 0x2adeb4u: goto label_2adeb4;
        case 0x2adeb8u: goto label_2adeb8;
        case 0x2adebcu: goto label_2adebc;
        case 0x2adec0u: goto label_2adec0;
        case 0x2adec4u: goto label_2adec4;
        case 0x2adec8u: goto label_2adec8;
        case 0x2adeccu: goto label_2adecc;
        case 0x2aded0u: goto label_2aded0;
        case 0x2aded4u: goto label_2aded4;
        case 0x2aded8u: goto label_2aded8;
        case 0x2adedcu: goto label_2adedc;
        case 0x2adee0u: goto label_2adee0;
        case 0x2adee4u: goto label_2adee4;
        case 0x2adee8u: goto label_2adee8;
        case 0x2adeecu: goto label_2adeec;
        case 0x2adef0u: goto label_2adef0;
        case 0x2adef4u: goto label_2adef4;
        case 0x2adef8u: goto label_2adef8;
        case 0x2adefcu: goto label_2adefc;
        case 0x2adf00u: goto label_2adf00;
        case 0x2adf04u: goto label_2adf04;
        case 0x2adf08u: goto label_2adf08;
        case 0x2adf0cu: goto label_2adf0c;
        case 0x2adf10u: goto label_2adf10;
        case 0x2adf14u: goto label_2adf14;
        case 0x2adf18u: goto label_2adf18;
        case 0x2adf1cu: goto label_2adf1c;
        case 0x2adf20u: goto label_2adf20;
        case 0x2adf24u: goto label_2adf24;
        case 0x2adf28u: goto label_2adf28;
        case 0x2adf2cu: goto label_2adf2c;
        case 0x2adf30u: goto label_2adf30;
        case 0x2adf34u: goto label_2adf34;
        case 0x2adf38u: goto label_2adf38;
        case 0x2adf3cu: goto label_2adf3c;
        case 0x2adf40u: goto label_2adf40;
        case 0x2adf44u: goto label_2adf44;
        case 0x2adf48u: goto label_2adf48;
        case 0x2adf4cu: goto label_2adf4c;
        case 0x2adf50u: goto label_2adf50;
        case 0x2adf54u: goto label_2adf54;
        case 0x2adf58u: goto label_2adf58;
        case 0x2adf5cu: goto label_2adf5c;
        case 0x2adf60u: goto label_2adf60;
        case 0x2adf64u: goto label_2adf64;
        case 0x2adf68u: goto label_2adf68;
        case 0x2adf6cu: goto label_2adf6c;
        case 0x2adf70u: goto label_2adf70;
        case 0x2adf74u: goto label_2adf74;
        case 0x2adf78u: goto label_2adf78;
        case 0x2adf7cu: goto label_2adf7c;
        case 0x2adf80u: goto label_2adf80;
        case 0x2adf84u: goto label_2adf84;
        case 0x2adf88u: goto label_2adf88;
        case 0x2adf8cu: goto label_2adf8c;
        case 0x2adf90u: goto label_2adf90;
        case 0x2adf94u: goto label_2adf94;
        case 0x2adf98u: goto label_2adf98;
        case 0x2adf9cu: goto label_2adf9c;
        case 0x2adfa0u: goto label_2adfa0;
        case 0x2adfa4u: goto label_2adfa4;
        case 0x2adfa8u: goto label_2adfa8;
        case 0x2adfacu: goto label_2adfac;
        case 0x2adfb0u: goto label_2adfb0;
        case 0x2adfb4u: goto label_2adfb4;
        case 0x2adfb8u: goto label_2adfb8;
        case 0x2adfbcu: goto label_2adfbc;
        case 0x2adfc0u: goto label_2adfc0;
        case 0x2adfc4u: goto label_2adfc4;
        case 0x2adfc8u: goto label_2adfc8;
        case 0x2adfccu: goto label_2adfcc;
        case 0x2adfd0u: goto label_2adfd0;
        case 0x2adfd4u: goto label_2adfd4;
        case 0x2adfd8u: goto label_2adfd8;
        case 0x2adfdcu: goto label_2adfdc;
        case 0x2adfe0u: goto label_2adfe0;
        case 0x2adfe4u: goto label_2adfe4;
        case 0x2adfe8u: goto label_2adfe8;
        case 0x2adfecu: goto label_2adfec;
        case 0x2adff0u: goto label_2adff0;
        case 0x2adff4u: goto label_2adff4;
        case 0x2adff8u: goto label_2adff8;
        case 0x2adffcu: goto label_2adffc;
        case 0x2ae000u: goto label_2ae000;
        case 0x2ae004u: goto label_2ae004;
        case 0x2ae008u: goto label_2ae008;
        case 0x2ae00cu: goto label_2ae00c;
        case 0x2ae010u: goto label_2ae010;
        case 0x2ae014u: goto label_2ae014;
        case 0x2ae018u: goto label_2ae018;
        case 0x2ae01cu: goto label_2ae01c;
        case 0x2ae020u: goto label_2ae020;
        case 0x2ae024u: goto label_2ae024;
        case 0x2ae028u: goto label_2ae028;
        case 0x2ae02cu: goto label_2ae02c;
        case 0x2ae030u: goto label_2ae030;
        case 0x2ae034u: goto label_2ae034;
        case 0x2ae038u: goto label_2ae038;
        case 0x2ae03cu: goto label_2ae03c;
        case 0x2ae040u: goto label_2ae040;
        case 0x2ae044u: goto label_2ae044;
        case 0x2ae048u: goto label_2ae048;
        case 0x2ae04cu: goto label_2ae04c;
        case 0x2ae050u: goto label_2ae050;
        case 0x2ae054u: goto label_2ae054;
        case 0x2ae058u: goto label_2ae058;
        case 0x2ae05cu: goto label_2ae05c;
        case 0x2ae060u: goto label_2ae060;
        case 0x2ae064u: goto label_2ae064;
        case 0x2ae068u: goto label_2ae068;
        case 0x2ae06cu: goto label_2ae06c;
        case 0x2ae070u: goto label_2ae070;
        case 0x2ae074u: goto label_2ae074;
        case 0x2ae078u: goto label_2ae078;
        case 0x2ae07cu: goto label_2ae07c;
        case 0x2ae080u: goto label_2ae080;
        case 0x2ae084u: goto label_2ae084;
        case 0x2ae088u: goto label_2ae088;
        case 0x2ae08cu: goto label_2ae08c;
        case 0x2ae090u: goto label_2ae090;
        case 0x2ae094u: goto label_2ae094;
        case 0x2ae098u: goto label_2ae098;
        case 0x2ae09cu: goto label_2ae09c;
        case 0x2ae0a0u: goto label_2ae0a0;
        case 0x2ae0a4u: goto label_2ae0a4;
        case 0x2ae0a8u: goto label_2ae0a8;
        case 0x2ae0acu: goto label_2ae0ac;
        case 0x2ae0b0u: goto label_2ae0b0;
        case 0x2ae0b4u: goto label_2ae0b4;
        case 0x2ae0b8u: goto label_2ae0b8;
        case 0x2ae0bcu: goto label_2ae0bc;
        case 0x2ae0c0u: goto label_2ae0c0;
        case 0x2ae0c4u: goto label_2ae0c4;
        case 0x2ae0c8u: goto label_2ae0c8;
        case 0x2ae0ccu: goto label_2ae0cc;
        case 0x2ae0d0u: goto label_2ae0d0;
        case 0x2ae0d4u: goto label_2ae0d4;
        case 0x2ae0d8u: goto label_2ae0d8;
        case 0x2ae0dcu: goto label_2ae0dc;
        case 0x2ae0e0u: goto label_2ae0e0;
        case 0x2ae0e4u: goto label_2ae0e4;
        case 0x2ae0e8u: goto label_2ae0e8;
        case 0x2ae0ecu: goto label_2ae0ec;
        case 0x2ae0f0u: goto label_2ae0f0;
        case 0x2ae0f4u: goto label_2ae0f4;
        case 0x2ae0f8u: goto label_2ae0f8;
        case 0x2ae0fcu: goto label_2ae0fc;
        case 0x2ae100u: goto label_2ae100;
        case 0x2ae104u: goto label_2ae104;
        case 0x2ae108u: goto label_2ae108;
        case 0x2ae10cu: goto label_2ae10c;
        case 0x2ae110u: goto label_2ae110;
        case 0x2ae114u: goto label_2ae114;
        case 0x2ae118u: goto label_2ae118;
        case 0x2ae11cu: goto label_2ae11c;
        case 0x2ae120u: goto label_2ae120;
        case 0x2ae124u: goto label_2ae124;
        case 0x2ae128u: goto label_2ae128;
        case 0x2ae12cu: goto label_2ae12c;
        case 0x2ae130u: goto label_2ae130;
        case 0x2ae134u: goto label_2ae134;
        case 0x2ae138u: goto label_2ae138;
        case 0x2ae13cu: goto label_2ae13c;
        case 0x2ae140u: goto label_2ae140;
        case 0x2ae144u: goto label_2ae144;
        case 0x2ae148u: goto label_2ae148;
        case 0x2ae14cu: goto label_2ae14c;
        case 0x2ae150u: goto label_2ae150;
        case 0x2ae154u: goto label_2ae154;
        case 0x2ae158u: goto label_2ae158;
        case 0x2ae15cu: goto label_2ae15c;
        case 0x2ae160u: goto label_2ae160;
        case 0x2ae164u: goto label_2ae164;
        case 0x2ae168u: goto label_2ae168;
        case 0x2ae16cu: goto label_2ae16c;
        case 0x2ae170u: goto label_2ae170;
        case 0x2ae174u: goto label_2ae174;
        case 0x2ae178u: goto label_2ae178;
        case 0x2ae17cu: goto label_2ae17c;
        case 0x2ae180u: goto label_2ae180;
        case 0x2ae184u: goto label_2ae184;
        case 0x2ae188u: goto label_2ae188;
        case 0x2ae18cu: goto label_2ae18c;
        case 0x2ae190u: goto label_2ae190;
        case 0x2ae194u: goto label_2ae194;
        case 0x2ae198u: goto label_2ae198;
        case 0x2ae19cu: goto label_2ae19c;
        case 0x2ae1a0u: goto label_2ae1a0;
        case 0x2ae1a4u: goto label_2ae1a4;
        case 0x2ae1a8u: goto label_2ae1a8;
        case 0x2ae1acu: goto label_2ae1ac;
        case 0x2ae1b0u: goto label_2ae1b0;
        case 0x2ae1b4u: goto label_2ae1b4;
        case 0x2ae1b8u: goto label_2ae1b8;
        case 0x2ae1bcu: goto label_2ae1bc;
        case 0x2ae1c0u: goto label_2ae1c0;
        case 0x2ae1c4u: goto label_2ae1c4;
        case 0x2ae1c8u: goto label_2ae1c8;
        case 0x2ae1ccu: goto label_2ae1cc;
        case 0x2ae1d0u: goto label_2ae1d0;
        case 0x2ae1d4u: goto label_2ae1d4;
        case 0x2ae1d8u: goto label_2ae1d8;
        case 0x2ae1dcu: goto label_2ae1dc;
        case 0x2ae1e0u: goto label_2ae1e0;
        case 0x2ae1e4u: goto label_2ae1e4;
        case 0x2ae1e8u: goto label_2ae1e8;
        case 0x2ae1ecu: goto label_2ae1ec;
        case 0x2ae1f0u: goto label_2ae1f0;
        case 0x2ae1f4u: goto label_2ae1f4;
        case 0x2ae1f8u: goto label_2ae1f8;
        case 0x2ae1fcu: goto label_2ae1fc;
        case 0x2ae200u: goto label_2ae200;
        case 0x2ae204u: goto label_2ae204;
        case 0x2ae208u: goto label_2ae208;
        case 0x2ae20cu: goto label_2ae20c;
        case 0x2ae210u: goto label_2ae210;
        case 0x2ae214u: goto label_2ae214;
        case 0x2ae218u: goto label_2ae218;
        case 0x2ae21cu: goto label_2ae21c;
        case 0x2ae220u: goto label_2ae220;
        case 0x2ae224u: goto label_2ae224;
        case 0x2ae228u: goto label_2ae228;
        case 0x2ae22cu: goto label_2ae22c;
        case 0x2ae230u: goto label_2ae230;
        case 0x2ae234u: goto label_2ae234;
        case 0x2ae238u: goto label_2ae238;
        case 0x2ae23cu: goto label_2ae23c;
        case 0x2ae240u: goto label_2ae240;
        case 0x2ae244u: goto label_2ae244;
        case 0x2ae248u: goto label_2ae248;
        case 0x2ae24cu: goto label_2ae24c;
        case 0x2ae250u: goto label_2ae250;
        case 0x2ae254u: goto label_2ae254;
        case 0x2ae258u: goto label_2ae258;
        case 0x2ae25cu: goto label_2ae25c;
        case 0x2ae260u: goto label_2ae260;
        case 0x2ae264u: goto label_2ae264;
        case 0x2ae268u: goto label_2ae268;
        case 0x2ae26cu: goto label_2ae26c;
        case 0x2ae270u: goto label_2ae270;
        case 0x2ae274u: goto label_2ae274;
        case 0x2ae278u: goto label_2ae278;
        case 0x2ae27cu: goto label_2ae27c;
        case 0x2ae280u: goto label_2ae280;
        case 0x2ae284u: goto label_2ae284;
        case 0x2ae288u: goto label_2ae288;
        case 0x2ae28cu: goto label_2ae28c;
        case 0x2ae290u: goto label_2ae290;
        case 0x2ae294u: goto label_2ae294;
        case 0x2ae298u: goto label_2ae298;
        case 0x2ae29cu: goto label_2ae29c;
        case 0x2ae2a0u: goto label_2ae2a0;
        case 0x2ae2a4u: goto label_2ae2a4;
        case 0x2ae2a8u: goto label_2ae2a8;
        case 0x2ae2acu: goto label_2ae2ac;
        case 0x2ae2b0u: goto label_2ae2b0;
        case 0x2ae2b4u: goto label_2ae2b4;
        case 0x2ae2b8u: goto label_2ae2b8;
        case 0x2ae2bcu: goto label_2ae2bc;
        case 0x2ae2c0u: goto label_2ae2c0;
        case 0x2ae2c4u: goto label_2ae2c4;
        case 0x2ae2c8u: goto label_2ae2c8;
        case 0x2ae2ccu: goto label_2ae2cc;
        case 0x2ae2d0u: goto label_2ae2d0;
        case 0x2ae2d4u: goto label_2ae2d4;
        case 0x2ae2d8u: goto label_2ae2d8;
        case 0x2ae2dcu: goto label_2ae2dc;
        case 0x2ae2e0u: goto label_2ae2e0;
        case 0x2ae2e4u: goto label_2ae2e4;
        case 0x2ae2e8u: goto label_2ae2e8;
        case 0x2ae2ecu: goto label_2ae2ec;
        case 0x2ae2f0u: goto label_2ae2f0;
        case 0x2ae2f4u: goto label_2ae2f4;
        case 0x2ae2f8u: goto label_2ae2f8;
        case 0x2ae2fcu: goto label_2ae2fc;
        case 0x2ae300u: goto label_2ae300;
        case 0x2ae304u: goto label_2ae304;
        case 0x2ae308u: goto label_2ae308;
        case 0x2ae30cu: goto label_2ae30c;
        case 0x2ae310u: goto label_2ae310;
        case 0x2ae314u: goto label_2ae314;
        case 0x2ae318u: goto label_2ae318;
        case 0x2ae31cu: goto label_2ae31c;
        case 0x2ae320u: goto label_2ae320;
        case 0x2ae324u: goto label_2ae324;
        case 0x2ae328u: goto label_2ae328;
        case 0x2ae32cu: goto label_2ae32c;
        case 0x2ae330u: goto label_2ae330;
        case 0x2ae334u: goto label_2ae334;
        case 0x2ae338u: goto label_2ae338;
        case 0x2ae33cu: goto label_2ae33c;
        case 0x2ae340u: goto label_2ae340;
        case 0x2ae344u: goto label_2ae344;
        case 0x2ae348u: goto label_2ae348;
        case 0x2ae34cu: goto label_2ae34c;
        case 0x2ae350u: goto label_2ae350;
        case 0x2ae354u: goto label_2ae354;
        case 0x2ae358u: goto label_2ae358;
        case 0x2ae35cu: goto label_2ae35c;
        case 0x2ae360u: goto label_2ae360;
        case 0x2ae364u: goto label_2ae364;
        case 0x2ae368u: goto label_2ae368;
        case 0x2ae36cu: goto label_2ae36c;
        case 0x2ae370u: goto label_2ae370;
        default: break;
    }

    ctx->pc = 0x2adde0u;

label_2adde0:
    // 0x2adde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2adde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2adde4:
    // 0x2adde4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2adde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_2adde8:
    // 0x2adde8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2adde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2addec:
    // 0x2addec: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2addecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2addf0:
    // 0x2addf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2addf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2addf4:
    // 0x2addf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2addf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2addf8:
    // 0x2addf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2addf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2addfc:
    // 0x2addfc: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2addfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade00:
    // 0x2ade00: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2ade00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
label_2ade04:
    // 0x2ade04: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade08:
    // 0x2ade08: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ade08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade0c:
    // 0x2ade0c: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x2ade0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_2ade10:
    // 0x2ade10: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade14:
    // 0x2ade14: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ade14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade18:
    // 0x2ade18: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x2ade18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_2ade1c:
    // 0x2ade1c: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade20:
    // 0x2ade20: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ade20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade24:
    // 0x2ade24: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x2ade24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
label_2ade28:
    // 0x2ade28: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade2c:
    // 0x2ade2c: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade30:
    // 0x2ade30: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2ade30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_2ade34:
    // 0x2ade34: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade38:
    // 0x2ade38: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade3c:
    // 0x2ade3c: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x2ade3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
label_2ade40:
    // 0x2ade40: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade44:
    // 0x2ade44: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ade44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ade48:
    // 0x2ade48: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x2ade48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
label_2ade4c:
    // 0x2ade4c: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ade4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ade50:
    // 0x2ade50: 0x8c26fe84  lw          $a2, -0x17C($at)
    ctx->pc = 0x2ade50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966916)));
label_2ade54:
    // 0x2ade54: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2ade54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2ade58:
    // 0x2ade58: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2ade58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_2ade5c:
    // 0x2ade5c: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x2ade5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
label_2ade60:
    // 0x2ade60: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2ade60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2ade64:
    // 0x2ade64: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2ade64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2ade68:
    // 0x2ade68: 0x1020013d  beqz        $at, . + 4 + (0x13D << 2)
label_2ade6c:
    if (ctx->pc == 0x2ADE6Cu) {
        ctx->pc = 0x2ADE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE68u;
        // 0x2ade6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADE70u;
        goto label_2ade70;
    }
    ctx->pc = 0x2ADE68u;
    {
        const bool branch_taken_0x2ade68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE68u;
        // 0x2ade6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade68) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2ADE70u;
label_2ade70:
    // 0x2ade70: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2ade70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_2ade74:
    // 0x2ade74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ade78:
    // 0x2ade78: 0x24c67040  addiu       $a2, $a2, 0x7040
    ctx->pc = 0x2ade78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28736));
label_2ade7c:
    // 0x2ade7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ade7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ade80:
    // 0x2ade80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ade80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ade84:
    // 0x2ade84: 0x600008  jr          $v1
label_2ade88:
    if (ctx->pc == 0x2ADE88u) {
        ctx->pc = 0x2ADE8Cu;
        goto label_2ade8c;
    }
    ctx->pc = 0x2ADE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADE90u: goto label_2ade90;
            case 0x2ADEF0u: goto label_2adef0;
            case 0x2AE000u: goto label_2ae000;
            case 0x2AE128u: goto label_2ae128;
            case 0x2AE250u: goto label_2ae250;
            case 0x2AE2A8u: goto label_2ae2a8;
            case 0x2AE300u: goto label_2ae300;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ADE8Cu;
label_2ade8c:
    // 0x2ade8c: 0x0  nop
    ctx->pc = 0x2ade8cu;
    // NOP
label_2ade90:
    // 0x2ade90: 0x862708a0  lh          $a3, 0x8A0($s1)
    ctx->pc = 0x2ade90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2208)));
label_2ade94:
    // 0x2ade94: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ade98:
    // 0x2ade98: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2ade98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2ade9c:
    // 0x2ade9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ade9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2adea0:
    // 0x2adea0: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x2adea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
label_2adea4:
    // 0x2adea4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2adea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2adea8:
    // 0x2adea8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2adea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2adeac:
    // 0x2adeac: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2adeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2adeb0:
    // 0x2adeb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2adeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2adeb4:
    // 0x2adeb4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2adeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2adeb8:
    // 0x2adeb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2adeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adebc:
    // 0x2adebc: 0xa62700c2  sh          $a3, 0xC2($s1)
    ctx->pc = 0x2adebcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 7));
label_2adec0:
    // 0x2adec0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2adec0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2adec4:
    // 0x2adec4: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2adec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2adec8:
    // 0x2adec8: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2adec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2adecc:
    // 0x2adecc: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2adeccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
label_2aded0:
    // 0x2aded0: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2aded0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
label_2aded4:
    // 0x2aded4: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2aded4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2aded8:
    // 0x2aded8: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x2aded8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
label_2adedc:
    // 0x2adedc: 0x8e2308c4  lw          $v1, 0x8C4($s1)
    ctx->pc = 0x2adedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
label_2adee0:
    // 0x2adee0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2adee4:
    if (ctx->pc == 0x2ADEE4u) {
        ctx->pc = 0x2ADEE8u;
        goto label_2adee8;
    }
    ctx->pc = 0x2ADEE0u;
    {
        const bool branch_taken_0x2adee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adee0) {
            ctx->pc = 0x2ADEF0u;
            goto label_2adef0;
        }
    }
    ctx->pc = 0x2ADEE8u;
label_2adee8:
    // 0x2adee8: 0x60f809  jalr        $v1
label_2adeec:
    if (ctx->pc == 0x2ADEECu) {
        ctx->pc = 0x2ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEE8u;
        // 0x2adeec: 0x8e2508b4  lw          $a1, 0x8B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADEF0u;
        goto label_2adef0;
    }
    ctx->pc = 0x2ADEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ADEF0u);
        ctx->pc = 0x2ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEE8u;
        // 0x2adeec: 0x8e2508b4  lw          $a1, 0x8B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADEE8u, 0x2ADEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ADEF0u;
label_2adef0:
    // 0x2adef0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2adef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2adef4:
    // 0x2adef4: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
label_2adef8:
    if (ctx->pc == 0x2ADEF8u) {
        ctx->pc = 0x2ADEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEF4u;
        // 0x2adef8: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADEFCu;
        goto label_2adefc;
    }
    ctx->pc = 0x2ADEF4u;
    {
        const bool branch_taken_0x2adef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEF4u;
        // 0x2adef8: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adef4) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2ADEFCu;
label_2adefc:
    // 0x2adefc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2adf00:
    // 0x2adf00: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x2adf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2adf04:
    // 0x2adf04: 0x24847011  addiu       $a0, $a0, 0x7011
    ctx->pc = 0x2adf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28689));
label_2adf08:
    // 0x2adf08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2adf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2adf0c:
    // 0x2adf0c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2adf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2adf10:
    // 0x2adf10: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x2adf10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2adf14:
    // 0x2adf14: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2adf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2adf18:
    // 0x2adf18: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x2adf18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2adf1c:
    // 0x2adf1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2adf20:
    // 0x2adf20: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2adf20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2adf24:
    // 0x2adf24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2adf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2adf28:
    // 0x2adf28: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2adf28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2adf2c:
    // 0x2adf2c: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2adf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
label_2adf30:
    // 0x2adf30: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2adf30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2adf34:
    // 0x2adf34: 0xae2507ec  sw          $a1, 0x7EC($s1)
    ctx->pc = 0x2adf34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 5));
label_2adf38:
    // 0x2adf38: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x2adf38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
label_2adf3c:
    // 0x2adf3c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2adf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2adf40:
    // 0x2adf40: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_2adf44:
    if (ctx->pc == 0x2ADF44u) {
        ctx->pc = 0x2ADF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF40u;
        // 0x2adf44: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF48u;
        goto label_2adf48;
    }
    ctx->pc = 0x2ADF40u;
    {
        const bool branch_taken_0x2adf40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF40u;
        // 0x2adf44: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf40) {
            ctx->pc = 0x2ADF58u;
            goto label_2adf58;
        }
    }
    ctx->pc = 0x2ADF48u;
label_2adf48:
    // 0x2adf48: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2adf48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_2adf4c:
    // 0x2adf4c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2adf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
label_2adf50:
    // 0x2adf50: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2adf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_2adf54:
    // 0x2adf54: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x2adf54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
label_2adf58:
    // 0x2adf58: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x2adf58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_2adf5c:
    // 0x2adf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2adf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adf60:
    // 0x2adf60: 0x148300ff  bne         $a0, $v1, . + 4 + (0xFF << 2)
label_2adf64:
    if (ctx->pc == 0x2ADF64u) {
        ctx->pc = 0x2ADF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF60u;
        // 0x2adf64: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF68u;
        goto label_2adf68;
    }
    ctx->pc = 0x2ADF60u;
    {
        const bool branch_taken_0x2adf60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF60u;
        // 0x2adf64: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf60) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2ADF68u;
label_2adf68:
    // 0x2adf68: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2adf6c:
    if (ctx->pc == 0x2ADF6Cu) {
        ctx->pc = 0x2ADF70u;
        goto label_2adf70;
    }
    ctx->pc = 0x2ADF68u;
    {
        const bool branch_taken_0x2adf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf68) {
            ctx->pc = 0x2ADFC0u;
            goto label_2adfc0;
        }
    }
    ctx->pc = 0x2ADF70u;
label_2adf70:
    // 0x2adf70: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_2adf74:
    // 0x2adf74: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2adf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_2adf78:
    // 0x2adf78: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2adf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_2adf7c:
    // 0x2adf7c: 0xc0967cc  jal         func_259F30
label_2adf80:
    if (ctx->pc == 0x2ADF80u) {
        ctx->pc = 0x2ADF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF7Cu;
        // 0x2adf80: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF84u;
        goto label_2adf84;
    }
    ctx->pc = 0x2ADF7Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF84u);
    ctx->pc = 0x2ADF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF7Cu;
    // 0x2adf80: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2ADF7Cu, 0x2ADF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF84u;
label_2adf84:
    // 0x2adf84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2adf88:
    // 0x2adf88: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2adf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_2adf8c:
    // 0x2adf8c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2adf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2adf90:
    // 0x2adf90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2adf90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2adf94:
    // 0x2adf94: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2adf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_2adf98:
    // 0x2adf98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2adf98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2adf9c:
    // 0x2adf9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2adfa0:
    // 0x2adfa0: 0x0  nop
    ctx->pc = 0x2adfa0u;
    // NOP
label_2adfa4:
    // 0x2adfa4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2adfa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2adfa8:
    // 0x2adfa8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2adfa8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2adfac:
    // 0x2adfac: 0x0  nop
    ctx->pc = 0x2adfacu;
    // NOP
label_2adfb0:
    // 0x2adfb0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_2adfb4:
    // 0x2adfb4: 0x100000ea  b           . + 4 + (0xEA << 2)
label_2adfb8:
    if (ctx->pc == 0x2ADFB8u) {
        ctx->pc = 0x2ADFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFB4u;
        // 0x2adfb8: 0xe420fde4  swc1        $f0, -0x21C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFBCu;
        goto label_2adfbc;
    }
    ctx->pc = 0x2ADFB4u;
    {
        const bool branch_taken_0x2adfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFB4u;
        // 0x2adfb8: 0xe420fde4  swc1        $f0, -0x21C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfb4) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2ADFBCu;
label_2adfbc:
    // 0x2adfbc: 0x0  nop
    ctx->pc = 0x2adfbcu;
    // NOP
label_2adfc0:
    // 0x2adfc0: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x2adfc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_2adfc4:
    // 0x2adfc4: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x2adfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_2adfc8:
    // 0x2adfc8: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2adfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_2adfcc:
    // 0x2adfcc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x2adfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2adfd0:
    // 0x2adfd0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2adfd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2adfd4:
    // 0x2adfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2adfd8:
    // 0x2adfd8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2adfd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2adfdc:
    // 0x2adfdc: 0x0  nop
    ctx->pc = 0x2adfdcu;
    // NOP
label_2adfe0:
    // 0x2adfe0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2adfe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2adfe4:
    // 0x2adfe4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2adfe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2adfe8:
    // 0x2adfe8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2adfe8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2adfec:
    // 0x2adfec: 0x0  nop
    ctx->pc = 0x2adfecu;
    // NOP
label_2adff0:
    // 0x2adff0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2adff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_2adff4:
    // 0x2adff4: 0x100000da  b           . + 4 + (0xDA << 2)
label_2adff8:
    if (ctx->pc == 0x2ADFF8u) {
        ctx->pc = 0x2ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFF4u;
        // 0x2adff8: 0xe420fde4  swc1        $f0, -0x21C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFFCu;
        goto label_2adffc;
    }
    ctx->pc = 0x2ADFF4u;
    {
        const bool branch_taken_0x2adff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFF4u;
        // 0x2adff8: 0xe420fde4  swc1        $f0, -0x21C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adff4) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2ADFFCu;
label_2adffc:
    // 0x2adffc: 0x0  nop
    ctx->pc = 0x2adffcu;
    // NOP
label_2ae000:
    // 0x2ae000: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ae000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ae004:
    // 0x2ae004: 0x106000d6  beqz        $v1, . + 4 + (0xD6 << 2)
label_2ae008:
    if (ctx->pc == 0x2AE008u) {
        ctx->pc = 0x2AE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE004u;
        // 0x2ae008: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE00Cu;
        goto label_2ae00c;
    }
    ctx->pc = 0x2AE004u;
    {
        const bool branch_taken_0x2ae004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE004u;
        // 0x2ae008: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae004) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE00Cu;
label_2ae00c:
    // 0x2ae00c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2ae00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ae010:
    // 0x2ae010: 0x24637030  addiu       $v1, $v1, 0x7030
    ctx->pc = 0x2ae010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28720));
label_2ae014:
    // 0x2ae014: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ae014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ae018:
    // 0x2ae018: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ae018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae01c:
    // 0x2ae01c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2ae01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2ae020:
    // 0x2ae020: 0xc6230894  lwc1        $f3, 0x894($s1)
    ctx->pc = 0x2ae020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2ae024:
    // 0x2ae024: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2ae024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ae028:
    // 0x2ae028: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ae028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ae02c:
    // 0x2ae02c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2ae02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2ae030:
    // 0x2ae030: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2ae030u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2ae034:
    // 0x2ae034: 0x24637028  addiu       $v1, $v1, 0x7028
    ctx->pc = 0x2ae034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28712));
label_2ae038:
    // 0x2ae038: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ae03c:
    // 0x2ae03c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ae03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae040:
    // 0x2ae040: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2ae040u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2ae044:
    // 0x2ae044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ae044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae048:
    // 0x2ae048: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2ae04c:
    if (ctx->pc == 0x2AE04Cu) {
        ctx->pc = 0x2AE050u;
        goto label_2ae050;
    }
    ctx->pc = 0x2AE048u;
    {
        const bool branch_taken_0x2ae048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae048) {
            ctx->pc = 0x2AE098u;
            goto label_2ae098;
        }
    }
    ctx->pc = 0x2AE050u;
label_2ae050:
    // 0x2ae050: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ae050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ae054:
    // 0x2ae054: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2ae054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2ae058:
    // 0x2ae058: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ae058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ae05c:
    // 0x2ae05c: 0x24a57014  addiu       $a1, $a1, 0x7014
    ctx->pc = 0x2ae05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28692));
label_2ae060:
    // 0x2ae060: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2ae060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ae064:
    // 0x2ae064: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ae064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ae068:
    // 0x2ae068: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ae068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ae06c:
    // 0x2ae06c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ae06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ae070:
    // 0x2ae070: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ae070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ae074:
    // 0x2ae074: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ae074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ae078:
    // 0x2ae078: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae07c:
    // 0x2ae07c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae07cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae080:
    // 0x2ae080: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ae080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
label_2ae084:
    // 0x2ae084: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ae084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ae088:
    // 0x2ae088: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ae088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2ae08c:
    // 0x2ae08c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2ae090:
    if (ctx->pc == 0x2AE090u) {
        ctx->pc = 0x2AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE08Cu;
        // 0x2ae090: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE094u;
        goto label_2ae094;
    }
    ctx->pc = 0x2AE08Cu;
    {
        const bool branch_taken_0x2ae08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE08Cu;
        // 0x2ae090: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae08c) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE094u;
label_2ae094:
    // 0x2ae094: 0x0  nop
    ctx->pc = 0x2ae094u;
    // NOP
label_2ae098:
    // 0x2ae098: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2ae09c:
    if (ctx->pc == 0x2AE09Cu) {
        ctx->pc = 0x2AE0A0u;
        goto label_2ae0a0;
    }
    ctx->pc = 0x2AE098u;
    {
        const bool branch_taken_0x2ae098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae098) {
            ctx->pc = 0x2AE0C0u;
            goto label_2ae0c0;
        }
    }
    ctx->pc = 0x2AE0A0u;
label_2ae0a0:
    // 0x2ae0a0: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2ae0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae0a4:
    // 0x2ae0a4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ae0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2ae0a8:
    // 0x2ae0a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae0ac:
    // 0x2ae0ac: 0x0  nop
    ctx->pc = 0x2ae0acu;
    // NOP
label_2ae0b0:
    // 0x2ae0b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ae0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ae0b4:
    // 0x2ae0b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ae0b8:
    if (ctx->pc == 0x2AE0B8u) {
        ctx->pc = 0x2AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0B4u;
        // 0x2ae0b8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0BCu;
        goto label_2ae0bc;
    }
    ctx->pc = 0x2AE0B4u;
    {
        const bool branch_taken_0x2ae0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0B4u;
        // 0x2ae0b8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0b4) {
            ctx->pc = 0x2AE0D8u;
            goto label_2ae0d8;
        }
    }
    ctx->pc = 0x2AE0BCu;
label_2ae0bc:
    // 0x2ae0bc: 0x0  nop
    ctx->pc = 0x2ae0bcu;
    // NOP
label_2ae0c0:
    // 0x2ae0c0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ae0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2ae0c4:
    // 0x2ae0c4: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2ae0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae0c8:
    // 0x2ae0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae0cc:
    // 0x2ae0cc: 0x0  nop
    ctx->pc = 0x2ae0ccu;
    // NOP
label_2ae0d0:
    // 0x2ae0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ae0d4:
    // 0x2ae0d4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2ae0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2ae0d8:
    // 0x2ae0d8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ae0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ae0dc:
    // 0x2ae0dc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2ae0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae0e0:
    // 0x2ae0e0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ae0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ae0e4:
    // 0x2ae0e4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2ae0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2ae0e8:
    // 0x2ae0e8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2ae0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ae0ec:
    // 0x2ae0ec: 0x24a57012  addiu       $a1, $a1, 0x7012
    ctx->pc = 0x2ae0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28690));
label_2ae0f0:
    // 0x2ae0f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ae0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ae0f4:
    // 0x2ae0f4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ae0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ae0f8:
    // 0x2ae0f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ae0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ae0fc:
    // 0x2ae0fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ae0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ae100:
    // 0x2ae100: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2ae100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_2ae104:
    // 0x2ae104: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ae104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ae108:
    // 0x2ae108: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae10c:
    // 0x2ae10c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae10cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae110:
    // 0x2ae110: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ae110u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
label_2ae114:
    // 0x2ae114: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ae114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ae118:
    // 0x2ae118: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ae118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2ae11c:
    // 0x2ae11c: 0x10000090  b           . + 4 + (0x90 << 2)
label_2ae120:
    if (ctx->pc == 0x2AE120u) {
        ctx->pc = 0x2AE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE11Cu;
        // 0x2ae120: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE124u;
        goto label_2ae124;
    }
    ctx->pc = 0x2AE11Cu;
    {
        const bool branch_taken_0x2ae11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE11Cu;
        // 0x2ae120: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae11c) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE124u;
label_2ae124:
    // 0x2ae124: 0x0  nop
    ctx->pc = 0x2ae124u;
    // NOP
label_2ae128:
    // 0x2ae128: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ae128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ae12c:
    // 0x2ae12c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_2ae130:
    if (ctx->pc == 0x2AE130u) {
        ctx->pc = 0x2AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE12Cu;
        // 0x2ae130: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE134u;
        goto label_2ae134;
    }
    ctx->pc = 0x2AE12Cu;
    {
        const bool branch_taken_0x2ae12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE12Cu;
        // 0x2ae130: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae12c) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE134u;
label_2ae134:
    // 0x2ae134: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2ae134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ae138:
    // 0x2ae138: 0x24637030  addiu       $v1, $v1, 0x7030
    ctx->pc = 0x2ae138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28720));
label_2ae13c:
    // 0x2ae13c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ae13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ae140:
    // 0x2ae140: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ae140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae144:
    // 0x2ae144: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2ae144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2ae148:
    // 0x2ae148: 0xc6230894  lwc1        $f3, 0x894($s1)
    ctx->pc = 0x2ae148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2ae14c:
    // 0x2ae14c: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2ae14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ae150:
    // 0x2ae150: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ae150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ae154:
    // 0x2ae154: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2ae154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2ae158:
    // 0x2ae158: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2ae158u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2ae15c:
    // 0x2ae15c: 0x24637028  addiu       $v1, $v1, 0x7028
    ctx->pc = 0x2ae15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28712));
label_2ae160:
    // 0x2ae160: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ae164:
    // 0x2ae164: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ae164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae168:
    // 0x2ae168: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2ae168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2ae16c:
    // 0x2ae16c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ae16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae170:
    // 0x2ae170: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2ae174:
    if (ctx->pc == 0x2AE174u) {
        ctx->pc = 0x2AE178u;
        goto label_2ae178;
    }
    ctx->pc = 0x2AE170u;
    {
        const bool branch_taken_0x2ae170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae170) {
            ctx->pc = 0x2AE1C0u;
            goto label_2ae1c0;
        }
    }
    ctx->pc = 0x2AE178u;
label_2ae178:
    // 0x2ae178: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ae178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ae17c:
    // 0x2ae17c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2ae17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2ae180:
    // 0x2ae180: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ae184:
    // 0x2ae184: 0x24a57013  addiu       $a1, $a1, 0x7013
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28691));
label_2ae188:
    // 0x2ae188: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2ae188u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ae18c:
    // 0x2ae18c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ae18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ae190:
    // 0x2ae190: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ae190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ae194:
    // 0x2ae194: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ae194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ae198:
    // 0x2ae198: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ae198u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ae19c:
    // 0x2ae19c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ae19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ae1a0:
    // 0x2ae1a0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae1a4:
    // 0x2ae1a4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae1a8:
    // 0x2ae1a8: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ae1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
label_2ae1ac:
    // 0x2ae1ac: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ae1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ae1b0:
    // 0x2ae1b0: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ae1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2ae1b4:
    // 0x2ae1b4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2ae1b8:
    if (ctx->pc == 0x2AE1B8u) {
        ctx->pc = 0x2AE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1B4u;
        // 0x2ae1b8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1BCu;
        goto label_2ae1bc;
    }
    ctx->pc = 0x2AE1B4u;
    {
        const bool branch_taken_0x2ae1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1B4u;
        // 0x2ae1b8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1b4) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE1BCu;
label_2ae1bc:
    // 0x2ae1bc: 0x0  nop
    ctx->pc = 0x2ae1bcu;
    // NOP
label_2ae1c0:
    // 0x2ae1c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2ae1c4:
    if (ctx->pc == 0x2AE1C4u) {
        ctx->pc = 0x2AE1C8u;
        goto label_2ae1c8;
    }
    ctx->pc = 0x2AE1C0u;
    {
        const bool branch_taken_0x2ae1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae1c0) {
            ctx->pc = 0x2AE1E8u;
            goto label_2ae1e8;
        }
    }
    ctx->pc = 0x2AE1C8u;
label_2ae1c8:
    // 0x2ae1c8: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2ae1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae1cc:
    // 0x2ae1cc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ae1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2ae1d0:
    // 0x2ae1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae1d4:
    // 0x2ae1d4: 0x0  nop
    ctx->pc = 0x2ae1d4u;
    // NOP
label_2ae1d8:
    // 0x2ae1d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ae1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ae1dc:
    // 0x2ae1dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ae1e0:
    if (ctx->pc == 0x2AE1E0u) {
        ctx->pc = 0x2AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1DCu;
        // 0x2ae1e0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1E4u;
        goto label_2ae1e4;
    }
    ctx->pc = 0x2AE1DCu;
    {
        const bool branch_taken_0x2ae1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1DCu;
        // 0x2ae1e0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1dc) {
            ctx->pc = 0x2AE200u;
            goto label_2ae200;
        }
    }
    ctx->pc = 0x2AE1E4u;
label_2ae1e4:
    // 0x2ae1e4: 0x0  nop
    ctx->pc = 0x2ae1e4u;
    // NOP
label_2ae1e8:
    // 0x2ae1e8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ae1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2ae1ec:
    // 0x2ae1ec: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2ae1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae1f0:
    // 0x2ae1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae1f4:
    // 0x2ae1f4: 0x0  nop
    ctx->pc = 0x2ae1f4u;
    // NOP
label_2ae1f8:
    // 0x2ae1f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ae1fc:
    // 0x2ae1fc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2ae1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2ae200:
    // 0x2ae200: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ae200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ae204:
    // 0x2ae204: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2ae204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae208:
    // 0x2ae208: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ae208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ae20c:
    // 0x2ae20c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2ae20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2ae210:
    // 0x2ae210: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2ae210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ae214:
    // 0x2ae214: 0x24a57011  addiu       $a1, $a1, 0x7011
    ctx->pc = 0x2ae214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28689));
label_2ae218:
    // 0x2ae218: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ae218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ae21c:
    // 0x2ae21c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ae21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ae220:
    // 0x2ae220: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ae220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ae224:
    // 0x2ae224: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ae224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ae228:
    // 0x2ae228: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2ae228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_2ae22c:
    // 0x2ae22c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ae22cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2ae230:
    // 0x2ae230: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae234:
    // 0x2ae234: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae238:
    // 0x2ae238: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ae238u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
label_2ae23c:
    // 0x2ae23c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ae23cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ae240:
    // 0x2ae240: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ae240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2ae244:
    // 0x2ae244: 0x10000046  b           . + 4 + (0x46 << 2)
label_2ae248:
    if (ctx->pc == 0x2AE248u) {
        ctx->pc = 0x2AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE244u;
        // 0x2ae248: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE24Cu;
        goto label_2ae24c;
    }
    ctx->pc = 0x2AE244u;
    {
        const bool branch_taken_0x2ae244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE244u;
        // 0x2ae248: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae244) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE24Cu;
label_2ae24c:
    // 0x2ae24c: 0x0  nop
    ctx->pc = 0x2ae24cu;
    // NOP
label_2ae250:
    // 0x2ae250: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ae250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ae254:
    // 0x2ae254: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_2ae258:
    if (ctx->pc == 0x2AE258u) {
        ctx->pc = 0x2AE25Cu;
        goto label_2ae25c;
    }
    ctx->pc = 0x2AE254u;
    {
        const bool branch_taken_0x2ae254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae254) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE25Cu;
label_2ae25c:
    // 0x2ae25c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2ae25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ae260:
    // 0x2ae260: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2ae260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_2ae264:
    // 0x2ae264: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2ae264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ae268:
    // 0x2ae268: 0x24c67015  addiu       $a2, $a2, 0x7015
    ctx->pc = 0x2ae268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28693));
label_2ae26c:
    // 0x2ae26c: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x2ae26cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2ae270:
    // 0x2ae270: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ae270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2ae274:
    // 0x2ae274: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2ae274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2ae278:
    // 0x2ae278: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2ae278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2ae27c:
    // 0x2ae27c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2ae27cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2ae280:
    // 0x2ae280: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ae280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ae284:
    // 0x2ae284: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae288:
    // 0x2ae288: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae28c:
    // 0x2ae28c: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ae28cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
label_2ae290:
    // 0x2ae290: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ae290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ae294:
    // 0x2ae294: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ae294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2ae298:
    // 0x2ae298: 0xc0ab6d0  jal         func_2ADB40
label_2ae29c:
    if (ctx->pc == 0x2AE29Cu) {
        ctx->pc = 0x2AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE298u;
        // 0x2ae29c: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE2A0u;
        goto label_2ae2a0;
    }
    ctx->pc = 0x2AE298u;
    SET_GPR_U32(ctx, 31, 0x2AE2A0u);
    ctx->pc = 0x2AE29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE298u;
    // 0x2ae29c: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB40u, 0x2AE298u, 0x2AE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2A0u;
label_2ae2a0:
    // 0x2ae2a0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2ae2a4:
    if (ctx->pc == 0x2AE2A4u) {
        ctx->pc = 0x2AE2A8u;
        goto label_2ae2a8;
    }
    ctx->pc = 0x2AE2A0u;
    {
        const bool branch_taken_0x2ae2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae2a0) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE2A8u;
label_2ae2a8:
    // 0x2ae2a8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ae2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ae2ac:
    // 0x2ae2ac: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_2ae2b0:
    if (ctx->pc == 0x2AE2B0u) {
        ctx->pc = 0x2AE2B4u;
        goto label_2ae2b4;
    }
    ctx->pc = 0x2AE2ACu;
    {
        const bool branch_taken_0x2ae2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae2ac) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE2B4u;
label_2ae2b4:
    // 0x2ae2b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2ae2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ae2b8:
    // 0x2ae2b8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2ae2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_2ae2bc:
    // 0x2ae2bc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2ae2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ae2c0:
    // 0x2ae2c0: 0x24c67015  addiu       $a2, $a2, 0x7015
    ctx->pc = 0x2ae2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28693));
label_2ae2c4:
    // 0x2ae2c4: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x2ae2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2ae2c8:
    // 0x2ae2c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ae2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2ae2cc:
    // 0x2ae2cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2ae2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2ae2d0:
    // 0x2ae2d0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2ae2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2ae2d4:
    // 0x2ae2d4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2ae2d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2ae2d8:
    // 0x2ae2d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ae2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ae2dc:
    // 0x2ae2dc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae2e0:
    // 0x2ae2e0: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae2e4:
    // 0x2ae2e4: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ae2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
label_2ae2e8:
    // 0x2ae2e8: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ae2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ae2ec:
    // 0x2ae2ec: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ae2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2ae2f0:
    // 0x2ae2f0: 0xc0ab6d0  jal         func_2ADB40
label_2ae2f4:
    if (ctx->pc == 0x2AE2F4u) {
        ctx->pc = 0x2AE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2F0u;
        // 0x2ae2f4: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE2F8u;
        goto label_2ae2f8;
    }
    ctx->pc = 0x2AE2F0u;
    SET_GPR_U32(ctx, 31, 0x2AE2F8u);
    ctx->pc = 0x2AE2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2F0u;
    // 0x2ae2f4: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADB40u, 0x2AE2F0u, 0x2AE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2F8u;
label_2ae2f8:
    // 0x2ae2f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2ae2fc:
    if (ctx->pc == 0x2AE2FCu) {
        ctx->pc = 0x2AE300u;
        goto label_2ae300;
    }
    ctx->pc = 0x2AE2F8u;
    {
        const bool branch_taken_0x2ae2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae2f8) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE300u;
label_2ae300:
    // 0x2ae300: 0xc0a6c74  jal         func_29B1D0
label_2ae304:
    if (ctx->pc == 0x2AE304u) {
        ctx->pc = 0x2AE308u;
        goto label_2ae308;
    }
    ctx->pc = 0x2AE300u;
    SET_GPR_U32(ctx, 31, 0x2AE308u);
    ctx->pc = 0x29B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B1D0u, 0x2AE300u, 0x2AE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE308u;
label_2ae308:
    // 0x2ae308: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ae308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ae30c:
    // 0x2ae30c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2ae310:
    if (ctx->pc == 0x2AE310u) {
        ctx->pc = 0x2AE314u;
        goto label_2ae314;
    }
    ctx->pc = 0x2AE30Cu;
    {
        const bool branch_taken_0x2ae30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae30c) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE314u;
label_2ae314:
    // 0x2ae314: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ae314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ae318:
    // 0x2ae318: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ae318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ae31c:
    // 0x2ae31c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ae31cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ae320:
    // 0x2ae320: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ae320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ae324:
    // 0x2ae324: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2ae324u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2ae328:
    // 0x2ae328: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ae328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ae32c:
    // 0x2ae32c: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2ae32cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2ae330:
    // 0x2ae330: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ae330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ae334:
    // 0x2ae334: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ae334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2ae338:
    // 0x2ae338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae33c:
    // 0x2ae33c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2ae33cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2ae340:
    // 0x2ae340: 0x8e2308c4  lw          $v1, 0x8C4($s1)
    ctx->pc = 0x2ae340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
label_2ae344:
    // 0x2ae344: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ae348:
    if (ctx->pc == 0x2AE348u) {
        ctx->pc = 0x2AE34Cu;
        goto label_2ae34c;
    }
    ctx->pc = 0x2AE344u;
    {
        const bool branch_taken_0x2ae344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae344) {
            ctx->pc = 0x2AE358u;
            goto label_2ae358;
        }
    }
    ctx->pc = 0x2AE34Cu;
label_2ae34c:
    // 0x2ae34c: 0x8e2508b4  lw          $a1, 0x8B4($s1)
    ctx->pc = 0x2ae34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2228)));
label_2ae350:
    // 0x2ae350: 0x60f809  jalr        $v1
label_2ae354:
    if (ctx->pc == 0x2AE354u) {
        ctx->pc = 0x2AE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE350u;
        // 0x2ae354: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE358u;
        goto label_2ae358;
    }
    ctx->pc = 0x2AE350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AE358u);
        ctx->pc = 0x2AE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE350u;
        // 0x2ae354: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE350u, 0x2AE358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE358u;
label_2ae358:
    // 0x2ae358: 0x10000001  b           . + 4 + (0x1 << 2)
label_2ae35c:
    if (ctx->pc == 0x2AE35Cu) {
        ctx->pc = 0x2AE360u;
        goto label_2ae360;
    }
    ctx->pc = 0x2AE358u;
    {
        const bool branch_taken_0x2ae358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae358) {
            ctx->pc = 0x2AE360u;
            goto label_2ae360;
        }
    }
    ctx->pc = 0x2AE360u;
label_2ae360:
    // 0x2ae360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ae360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae364:
    // 0x2ae364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ae364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ae368:
    // 0x2ae368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ae368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ae36c:
    // 0x2ae36c: 0x3e00008  jr          $ra
label_2ae370:
    if (ctx->pc == 0x2AE370u) {
        ctx->pc = 0x2AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE36Cu;
        // 0x2ae370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE374u;
        goto label_fallthrough_0x2ae36c;
    }
    ctx->pc = 0x2AE36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE36Cu;
        // 0x2ae370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ae36c:
    ctx->pc = 0x2AE374u;
}
