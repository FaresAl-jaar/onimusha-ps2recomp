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

// Function: sub_001DBC90
// Address: 0x1dbc90 - 0x1dc330
void sub_001DBC90_0x1dbc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBC90_0x1dbc90");
#endif

    switch (ctx->pc) {
        case 0x1dbc90u: goto label_1dbc90;
        case 0x1dbc94u: goto label_1dbc94;
        case 0x1dbc98u: goto label_1dbc98;
        case 0x1dbc9cu: goto label_1dbc9c;
        case 0x1dbca0u: goto label_1dbca0;
        case 0x1dbca4u: goto label_1dbca4;
        case 0x1dbca8u: goto label_1dbca8;
        case 0x1dbcacu: goto label_1dbcac;
        case 0x1dbcb0u: goto label_1dbcb0;
        case 0x1dbcb4u: goto label_1dbcb4;
        case 0x1dbcb8u: goto label_1dbcb8;
        case 0x1dbcbcu: goto label_1dbcbc;
        case 0x1dbcc0u: goto label_1dbcc0;
        case 0x1dbcc4u: goto label_1dbcc4;
        case 0x1dbcc8u: goto label_1dbcc8;
        case 0x1dbcccu: goto label_1dbccc;
        case 0x1dbcd0u: goto label_1dbcd0;
        case 0x1dbcd4u: goto label_1dbcd4;
        case 0x1dbcd8u: goto label_1dbcd8;
        case 0x1dbcdcu: goto label_1dbcdc;
        case 0x1dbce0u: goto label_1dbce0;
        case 0x1dbce4u: goto label_1dbce4;
        case 0x1dbce8u: goto label_1dbce8;
        case 0x1dbcecu: goto label_1dbcec;
        case 0x1dbcf0u: goto label_1dbcf0;
        case 0x1dbcf4u: goto label_1dbcf4;
        case 0x1dbcf8u: goto label_1dbcf8;
        case 0x1dbcfcu: goto label_1dbcfc;
        case 0x1dbd00u: goto label_1dbd00;
        case 0x1dbd04u: goto label_1dbd04;
        case 0x1dbd08u: goto label_1dbd08;
        case 0x1dbd0cu: goto label_1dbd0c;
        case 0x1dbd10u: goto label_1dbd10;
        case 0x1dbd14u: goto label_1dbd14;
        case 0x1dbd18u: goto label_1dbd18;
        case 0x1dbd1cu: goto label_1dbd1c;
        case 0x1dbd20u: goto label_1dbd20;
        case 0x1dbd24u: goto label_1dbd24;
        case 0x1dbd28u: goto label_1dbd28;
        case 0x1dbd2cu: goto label_1dbd2c;
        case 0x1dbd30u: goto label_1dbd30;
        case 0x1dbd34u: goto label_1dbd34;
        case 0x1dbd38u: goto label_1dbd38;
        case 0x1dbd3cu: goto label_1dbd3c;
        case 0x1dbd40u: goto label_1dbd40;
        case 0x1dbd44u: goto label_1dbd44;
        case 0x1dbd48u: goto label_1dbd48;
        case 0x1dbd4cu: goto label_1dbd4c;
        case 0x1dbd50u: goto label_1dbd50;
        case 0x1dbd54u: goto label_1dbd54;
        case 0x1dbd58u: goto label_1dbd58;
        case 0x1dbd5cu: goto label_1dbd5c;
        case 0x1dbd60u: goto label_1dbd60;
        case 0x1dbd64u: goto label_1dbd64;
        case 0x1dbd68u: goto label_1dbd68;
        case 0x1dbd6cu: goto label_1dbd6c;
        case 0x1dbd70u: goto label_1dbd70;
        case 0x1dbd74u: goto label_1dbd74;
        case 0x1dbd78u: goto label_1dbd78;
        case 0x1dbd7cu: goto label_1dbd7c;
        case 0x1dbd80u: goto label_1dbd80;
        case 0x1dbd84u: goto label_1dbd84;
        case 0x1dbd88u: goto label_1dbd88;
        case 0x1dbd8cu: goto label_1dbd8c;
        case 0x1dbd90u: goto label_1dbd90;
        case 0x1dbd94u: goto label_1dbd94;
        case 0x1dbd98u: goto label_1dbd98;
        case 0x1dbd9cu: goto label_1dbd9c;
        case 0x1dbda0u: goto label_1dbda0;
        case 0x1dbda4u: goto label_1dbda4;
        case 0x1dbda8u: goto label_1dbda8;
        case 0x1dbdacu: goto label_1dbdac;
        case 0x1dbdb0u: goto label_1dbdb0;
        case 0x1dbdb4u: goto label_1dbdb4;
        case 0x1dbdb8u: goto label_1dbdb8;
        case 0x1dbdbcu: goto label_1dbdbc;
        case 0x1dbdc0u: goto label_1dbdc0;
        case 0x1dbdc4u: goto label_1dbdc4;
        case 0x1dbdc8u: goto label_1dbdc8;
        case 0x1dbdccu: goto label_1dbdcc;
        case 0x1dbdd0u: goto label_1dbdd0;
        case 0x1dbdd4u: goto label_1dbdd4;
        case 0x1dbdd8u: goto label_1dbdd8;
        case 0x1dbddcu: goto label_1dbddc;
        case 0x1dbde0u: goto label_1dbde0;
        case 0x1dbde4u: goto label_1dbde4;
        case 0x1dbde8u: goto label_1dbde8;
        case 0x1dbdecu: goto label_1dbdec;
        case 0x1dbdf0u: goto label_1dbdf0;
        case 0x1dbdf4u: goto label_1dbdf4;
        case 0x1dbdf8u: goto label_1dbdf8;
        case 0x1dbdfcu: goto label_1dbdfc;
        case 0x1dbe00u: goto label_1dbe00;
        case 0x1dbe04u: goto label_1dbe04;
        case 0x1dbe08u: goto label_1dbe08;
        case 0x1dbe0cu: goto label_1dbe0c;
        case 0x1dbe10u: goto label_1dbe10;
        case 0x1dbe14u: goto label_1dbe14;
        case 0x1dbe18u: goto label_1dbe18;
        case 0x1dbe1cu: goto label_1dbe1c;
        case 0x1dbe20u: goto label_1dbe20;
        case 0x1dbe24u: goto label_1dbe24;
        case 0x1dbe28u: goto label_1dbe28;
        case 0x1dbe2cu: goto label_1dbe2c;
        case 0x1dbe30u: goto label_1dbe30;
        case 0x1dbe34u: goto label_1dbe34;
        case 0x1dbe38u: goto label_1dbe38;
        case 0x1dbe3cu: goto label_1dbe3c;
        case 0x1dbe40u: goto label_1dbe40;
        case 0x1dbe44u: goto label_1dbe44;
        case 0x1dbe48u: goto label_1dbe48;
        case 0x1dbe4cu: goto label_1dbe4c;
        case 0x1dbe50u: goto label_1dbe50;
        case 0x1dbe54u: goto label_1dbe54;
        case 0x1dbe58u: goto label_1dbe58;
        case 0x1dbe5cu: goto label_1dbe5c;
        case 0x1dbe60u: goto label_1dbe60;
        case 0x1dbe64u: goto label_1dbe64;
        case 0x1dbe68u: goto label_1dbe68;
        case 0x1dbe6cu: goto label_1dbe6c;
        case 0x1dbe70u: goto label_1dbe70;
        case 0x1dbe74u: goto label_1dbe74;
        case 0x1dbe78u: goto label_1dbe78;
        case 0x1dbe7cu: goto label_1dbe7c;
        case 0x1dbe80u: goto label_1dbe80;
        case 0x1dbe84u: goto label_1dbe84;
        case 0x1dbe88u: goto label_1dbe88;
        case 0x1dbe8cu: goto label_1dbe8c;
        case 0x1dbe90u: goto label_1dbe90;
        case 0x1dbe94u: goto label_1dbe94;
        case 0x1dbe98u: goto label_1dbe98;
        case 0x1dbe9cu: goto label_1dbe9c;
        case 0x1dbea0u: goto label_1dbea0;
        case 0x1dbea4u: goto label_1dbea4;
        case 0x1dbea8u: goto label_1dbea8;
        case 0x1dbeacu: goto label_1dbeac;
        case 0x1dbeb0u: goto label_1dbeb0;
        case 0x1dbeb4u: goto label_1dbeb4;
        case 0x1dbeb8u: goto label_1dbeb8;
        case 0x1dbebcu: goto label_1dbebc;
        case 0x1dbec0u: goto label_1dbec0;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbec8u: goto label_1dbec8;
        case 0x1dbeccu: goto label_1dbecc;
        case 0x1dbed0u: goto label_1dbed0;
        case 0x1dbed4u: goto label_1dbed4;
        case 0x1dbed8u: goto label_1dbed8;
        case 0x1dbedcu: goto label_1dbedc;
        case 0x1dbee0u: goto label_1dbee0;
        case 0x1dbee4u: goto label_1dbee4;
        case 0x1dbee8u: goto label_1dbee8;
        case 0x1dbeecu: goto label_1dbeec;
        case 0x1dbef0u: goto label_1dbef0;
        case 0x1dbef4u: goto label_1dbef4;
        case 0x1dbef8u: goto label_1dbef8;
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf00u: goto label_1dbf00;
        case 0x1dbf04u: goto label_1dbf04;
        case 0x1dbf08u: goto label_1dbf08;
        case 0x1dbf0cu: goto label_1dbf0c;
        case 0x1dbf10u: goto label_1dbf10;
        case 0x1dbf14u: goto label_1dbf14;
        case 0x1dbf18u: goto label_1dbf18;
        case 0x1dbf1cu: goto label_1dbf1c;
        case 0x1dbf20u: goto label_1dbf20;
        case 0x1dbf24u: goto label_1dbf24;
        case 0x1dbf28u: goto label_1dbf28;
        case 0x1dbf2cu: goto label_1dbf2c;
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        case 0x1dc00cu: goto label_1dc00c;
        case 0x1dc010u: goto label_1dc010;
        case 0x1dc014u: goto label_1dc014;
        case 0x1dc018u: goto label_1dc018;
        case 0x1dc01cu: goto label_1dc01c;
        case 0x1dc020u: goto label_1dc020;
        case 0x1dc024u: goto label_1dc024;
        case 0x1dc028u: goto label_1dc028;
        case 0x1dc02cu: goto label_1dc02c;
        case 0x1dc030u: goto label_1dc030;
        case 0x1dc034u: goto label_1dc034;
        case 0x1dc038u: goto label_1dc038;
        case 0x1dc03cu: goto label_1dc03c;
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc044u: goto label_1dc044;
        case 0x1dc048u: goto label_1dc048;
        case 0x1dc04cu: goto label_1dc04c;
        case 0x1dc050u: goto label_1dc050;
        case 0x1dc054u: goto label_1dc054;
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc05cu: goto label_1dc05c;
        case 0x1dc060u: goto label_1dc060;
        case 0x1dc064u: goto label_1dc064;
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc06cu: goto label_1dc06c;
        case 0x1dc070u: goto label_1dc070;
        case 0x1dc074u: goto label_1dc074;
        case 0x1dc078u: goto label_1dc078;
        case 0x1dc07cu: goto label_1dc07c;
        case 0x1dc080u: goto label_1dc080;
        case 0x1dc084u: goto label_1dc084;
        case 0x1dc088u: goto label_1dc088;
        case 0x1dc08cu: goto label_1dc08c;
        case 0x1dc090u: goto label_1dc090;
        case 0x1dc094u: goto label_1dc094;
        case 0x1dc098u: goto label_1dc098;
        case 0x1dc09cu: goto label_1dc09c;
        case 0x1dc0a0u: goto label_1dc0a0;
        case 0x1dc0a4u: goto label_1dc0a4;
        case 0x1dc0a8u: goto label_1dc0a8;
        case 0x1dc0acu: goto label_1dc0ac;
        case 0x1dc0b0u: goto label_1dc0b0;
        case 0x1dc0b4u: goto label_1dc0b4;
        case 0x1dc0b8u: goto label_1dc0b8;
        case 0x1dc0bcu: goto label_1dc0bc;
        case 0x1dc0c0u: goto label_1dc0c0;
        case 0x1dc0c4u: goto label_1dc0c4;
        case 0x1dc0c8u: goto label_1dc0c8;
        case 0x1dc0ccu: goto label_1dc0cc;
        case 0x1dc0d0u: goto label_1dc0d0;
        case 0x1dc0d4u: goto label_1dc0d4;
        case 0x1dc0d8u: goto label_1dc0d8;
        case 0x1dc0dcu: goto label_1dc0dc;
        case 0x1dc0e0u: goto label_1dc0e0;
        case 0x1dc0e4u: goto label_1dc0e4;
        case 0x1dc0e8u: goto label_1dc0e8;
        case 0x1dc0ecu: goto label_1dc0ec;
        case 0x1dc0f0u: goto label_1dc0f0;
        case 0x1dc0f4u: goto label_1dc0f4;
        case 0x1dc0f8u: goto label_1dc0f8;
        case 0x1dc0fcu: goto label_1dc0fc;
        case 0x1dc100u: goto label_1dc100;
        case 0x1dc104u: goto label_1dc104;
        case 0x1dc108u: goto label_1dc108;
        case 0x1dc10cu: goto label_1dc10c;
        case 0x1dc110u: goto label_1dc110;
        case 0x1dc114u: goto label_1dc114;
        case 0x1dc118u: goto label_1dc118;
        case 0x1dc11cu: goto label_1dc11c;
        case 0x1dc120u: goto label_1dc120;
        case 0x1dc124u: goto label_1dc124;
        case 0x1dc128u: goto label_1dc128;
        case 0x1dc12cu: goto label_1dc12c;
        case 0x1dc130u: goto label_1dc130;
        case 0x1dc134u: goto label_1dc134;
        case 0x1dc138u: goto label_1dc138;
        case 0x1dc13cu: goto label_1dc13c;
        case 0x1dc140u: goto label_1dc140;
        case 0x1dc144u: goto label_1dc144;
        case 0x1dc148u: goto label_1dc148;
        case 0x1dc14cu: goto label_1dc14c;
        case 0x1dc150u: goto label_1dc150;
        case 0x1dc154u: goto label_1dc154;
        case 0x1dc158u: goto label_1dc158;
        case 0x1dc15cu: goto label_1dc15c;
        case 0x1dc160u: goto label_1dc160;
        case 0x1dc164u: goto label_1dc164;
        case 0x1dc168u: goto label_1dc168;
        case 0x1dc16cu: goto label_1dc16c;
        case 0x1dc170u: goto label_1dc170;
        case 0x1dc174u: goto label_1dc174;
        case 0x1dc178u: goto label_1dc178;
        case 0x1dc17cu: goto label_1dc17c;
        case 0x1dc180u: goto label_1dc180;
        case 0x1dc184u: goto label_1dc184;
        case 0x1dc188u: goto label_1dc188;
        case 0x1dc18cu: goto label_1dc18c;
        case 0x1dc190u: goto label_1dc190;
        case 0x1dc194u: goto label_1dc194;
        case 0x1dc198u: goto label_1dc198;
        case 0x1dc19cu: goto label_1dc19c;
        case 0x1dc1a0u: goto label_1dc1a0;
        case 0x1dc1a4u: goto label_1dc1a4;
        case 0x1dc1a8u: goto label_1dc1a8;
        case 0x1dc1acu: goto label_1dc1ac;
        case 0x1dc1b0u: goto label_1dc1b0;
        case 0x1dc1b4u: goto label_1dc1b4;
        case 0x1dc1b8u: goto label_1dc1b8;
        case 0x1dc1bcu: goto label_1dc1bc;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1c4u: goto label_1dc1c4;
        case 0x1dc1c8u: goto label_1dc1c8;
        case 0x1dc1ccu: goto label_1dc1cc;
        case 0x1dc1d0u: goto label_1dc1d0;
        case 0x1dc1d4u: goto label_1dc1d4;
        case 0x1dc1d8u: goto label_1dc1d8;
        case 0x1dc1dcu: goto label_1dc1dc;
        case 0x1dc1e0u: goto label_1dc1e0;
        case 0x1dc1e4u: goto label_1dc1e4;
        case 0x1dc1e8u: goto label_1dc1e8;
        case 0x1dc1ecu: goto label_1dc1ec;
        case 0x1dc1f0u: goto label_1dc1f0;
        case 0x1dc1f4u: goto label_1dc1f4;
        case 0x1dc1f8u: goto label_1dc1f8;
        case 0x1dc1fcu: goto label_1dc1fc;
        case 0x1dc200u: goto label_1dc200;
        case 0x1dc204u: goto label_1dc204;
        case 0x1dc208u: goto label_1dc208;
        case 0x1dc20cu: goto label_1dc20c;
        case 0x1dc210u: goto label_1dc210;
        case 0x1dc214u: goto label_1dc214;
        case 0x1dc218u: goto label_1dc218;
        case 0x1dc21cu: goto label_1dc21c;
        case 0x1dc220u: goto label_1dc220;
        case 0x1dc224u: goto label_1dc224;
        case 0x1dc228u: goto label_1dc228;
        case 0x1dc22cu: goto label_1dc22c;
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc234u: goto label_1dc234;
        case 0x1dc238u: goto label_1dc238;
        case 0x1dc23cu: goto label_1dc23c;
        case 0x1dc240u: goto label_1dc240;
        case 0x1dc244u: goto label_1dc244;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc24cu: goto label_1dc24c;
        case 0x1dc250u: goto label_1dc250;
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc25cu: goto label_1dc25c;
        case 0x1dc260u: goto label_1dc260;
        case 0x1dc264u: goto label_1dc264;
        case 0x1dc268u: goto label_1dc268;
        case 0x1dc26cu: goto label_1dc26c;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc274u: goto label_1dc274;
        case 0x1dc278u: goto label_1dc278;
        case 0x1dc27cu: goto label_1dc27c;
        case 0x1dc280u: goto label_1dc280;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc288u: goto label_1dc288;
        case 0x1dc28cu: goto label_1dc28c;
        case 0x1dc290u: goto label_1dc290;
        case 0x1dc294u: goto label_1dc294;
        case 0x1dc298u: goto label_1dc298;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2a0u: goto label_1dc2a0;
        case 0x1dc2a4u: goto label_1dc2a4;
        case 0x1dc2a8u: goto label_1dc2a8;
        case 0x1dc2acu: goto label_1dc2ac;
        case 0x1dc2b0u: goto label_1dc2b0;
        case 0x1dc2b4u: goto label_1dc2b4;
        case 0x1dc2b8u: goto label_1dc2b8;
        case 0x1dc2bcu: goto label_1dc2bc;
        case 0x1dc2c0u: goto label_1dc2c0;
        case 0x1dc2c4u: goto label_1dc2c4;
        case 0x1dc2c8u: goto label_1dc2c8;
        case 0x1dc2ccu: goto label_1dc2cc;
        case 0x1dc2d0u: goto label_1dc2d0;
        case 0x1dc2d4u: goto label_1dc2d4;
        case 0x1dc2d8u: goto label_1dc2d8;
        case 0x1dc2dcu: goto label_1dc2dc;
        case 0x1dc2e0u: goto label_1dc2e0;
        case 0x1dc2e4u: goto label_1dc2e4;
        case 0x1dc2e8u: goto label_1dc2e8;
        case 0x1dc2ecu: goto label_1dc2ec;
        case 0x1dc2f0u: goto label_1dc2f0;
        case 0x1dc2f4u: goto label_1dc2f4;
        case 0x1dc2f8u: goto label_1dc2f8;
        case 0x1dc2fcu: goto label_1dc2fc;
        case 0x1dc300u: goto label_1dc300;
        case 0x1dc304u: goto label_1dc304;
        case 0x1dc308u: goto label_1dc308;
        case 0x1dc30cu: goto label_1dc30c;
        case 0x1dc310u: goto label_1dc310;
        case 0x1dc314u: goto label_1dc314;
        case 0x1dc318u: goto label_1dc318;
        case 0x1dc31cu: goto label_1dc31c;
        case 0x1dc320u: goto label_1dc320;
        case 0x1dc324u: goto label_1dc324;
        case 0x1dc328u: goto label_1dc328;
        case 0x1dc32cu: goto label_1dc32c;
        default: break;
    }

    ctx->pc = 0x1dbc90u;

label_1dbc90:
    // 0x1dbc90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dbc94:
    // 0x1dbc94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dbc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1dbc98:
    // 0x1dbc98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dbc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dbc9c:
    // 0x1dbc9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dbc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dbca0:
    // 0x1dbca0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dbca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbca4:
    // 0x1dbca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dbca8:
    // 0x1dbca8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dbca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcac:
    // 0x1dbcac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dbcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dbcb0:
    // 0x1dbcb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dbcb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcb4:
    // 0x1dbcb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dbcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dbcb8:
    // 0x1dbcb8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1dbcb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcbc:
    // 0x1dbcbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1dbcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1dbcc0:
    // 0x1dbcc0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_1dbcc4:
    // 0x1dbcc4: 0x2c41001a  sltiu       $at, $v0, 0x1A
    ctx->pc = 0x1dbcc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_1dbcc8:
    // 0x1dbcc8: 0x10200175  beqz        $at, . + 4 + (0x175 << 2)
label_1dbccc:
    if (ctx->pc == 0x1DBCCCu) {
        ctx->pc = 0x1DBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCC8u;
        // 0x1dbccc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCD0u;
        goto label_1dbcd0;
    }
    ctx->pc = 0x1DBCC8u;
    {
        const bool branch_taken_0x1dbcc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCC8u;
        // 0x1dbccc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcc8) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBCD0u;
label_1dbcd0:
    // 0x1dbcd0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1dbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_1dbcd4:
    // 0x1dbcd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dbcd8:
    // 0x1dbcd8: 0x24635cf0  addiu       $v1, $v1, 0x5CF0
    ctx->pc = 0x1dbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23792));
label_1dbcdc:
    // 0x1dbcdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dbce0:
    // 0x1dbce0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbce4:
    // 0x1dbce4: 0x400008  jr          $v0
label_1dbce8:
    if (ctx->pc == 0x1DBCE8u) {
        ctx->pc = 0x1DBCECu;
        goto label_1dbcec;
    }
    ctx->pc = 0x1DBCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBCF0u: goto label_1dbcf0;
            case 0x1DBD28u: goto label_1dbd28;
            case 0x1DBD60u: goto label_1dbd60;
            case 0x1DBD98u: goto label_1dbd98;
            case 0x1DBDD0u: goto label_1dbdd0;
            case 0x1DBE08u: goto label_1dbe08;
            case 0x1DBE40u: goto label_1dbe40;
            case 0x1DBE78u: goto label_1dbe78;
            case 0x1DBEB0u: goto label_1dbeb0;
            case 0x1DBEE8u: goto label_1dbee8;
            case 0x1DBF20u: goto label_1dbf20;
            case 0x1DBF58u: goto label_1dbf58;
            case 0x1DBF90u: goto label_1dbf90;
            case 0x1DBFC8u: goto label_1dbfc8;
            case 0x1DC000u: goto label_1dc000;
            case 0x1DC038u: goto label_1dc038;
            case 0x1DC070u: goto label_1dc070;
            case 0x1DC0A8u: goto label_1dc0a8;
            case 0x1DC0E0u: goto label_1dc0e0;
            case 0x1DC118u: goto label_1dc118;
            case 0x1DC150u: goto label_1dc150;
            case 0x1DC188u: goto label_1dc188;
            case 0x1DC1C0u: goto label_1dc1c0;
            case 0x1DC1F8u: goto label_1dc1f8;
            case 0x1DC230u: goto label_1dc230;
            case 0x1DC268u: goto label_1dc268;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DBCECu;
label_1dbcec:
    // 0x1dbcec: 0x0  nop
    ctx->pc = 0x1dbcecu;
    // NOP
label_1dbcf0:
    // 0x1dbcf0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcf4:
    // 0x1dbcf4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcf8:
    // 0x1dbcf8: 0xc096c88  jal         func_25B220
label_1dbcfc:
    if (ctx->pc == 0x1DBCFCu) {
        ctx->pc = 0x1DBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCF8u;
        // 0x1dbcfc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD00u;
        goto label_1dbd00;
    }
    ctx->pc = 0x1DBCF8u;
    SET_GPR_U32(ctx, 31, 0x1DBD00u);
    ctx->pc = 0x1DBCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCF8u;
    // 0x1dbcfc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBCF8u, 0x1DBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD00u;
label_1dbd00:
    // 0x1dbd00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbd04:
    if (ctx->pc == 0x1DBD04u) {
        ctx->pc = 0x1DBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD00u;
        // 0x1dbd04: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD08u;
        goto label_1dbd08;
    }
    ctx->pc = 0x1DBD00u;
    {
        const bool branch_taken_0x1dbd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD00u;
        // 0x1dbd04: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd00) {
            ctx->pc = 0x1DBD20u;
            goto label_1dbd20;
        }
    }
    ctx->pc = 0x1DBD08u;
label_1dbd08:
    // 0x1dbd08: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbd0c:
    // 0x1dbd0c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbd10:
    // 0x1dbd10: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x1dbd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
label_1dbd14:
    // 0x1dbd14: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbd18:
    // 0x1dbd18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbd1c:
    // 0x1dbd1c: 0x0  nop
    ctx->pc = 0x1dbd1cu;
    // NOP
label_1dbd20:
    // 0x1dbd20: 0x1000015f  b           . + 4 + (0x15F << 2)
label_1dbd24:
    if (ctx->pc == 0x1DBD24u) {
        ctx->pc = 0x1DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD20u;
        // 0x1dbd24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD28u;
        goto label_1dbd28;
    }
    ctx->pc = 0x1DBD20u;
    {
        const bool branch_taken_0x1dbd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD20u;
        // 0x1dbd24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd20) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBD28u;
label_1dbd28:
    // 0x1dbd28: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd2c:
    // 0x1dbd2c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd30:
    // 0x1dbd30: 0xc096c88  jal         func_25B220
label_1dbd34:
    if (ctx->pc == 0x1DBD34u) {
        ctx->pc = 0x1DBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD30u;
        // 0x1dbd34: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD38u;
        goto label_1dbd38;
    }
    ctx->pc = 0x1DBD30u;
    SET_GPR_U32(ctx, 31, 0x1DBD38u);
    ctx->pc = 0x1DBD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD30u;
    // 0x1dbd34: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBD30u, 0x1DBD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD38u;
label_1dbd38:
    // 0x1dbd38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbd3c:
    if (ctx->pc == 0x1DBD3Cu) {
        ctx->pc = 0x1DBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD38u;
        // 0x1dbd3c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD40u;
        goto label_1dbd40;
    }
    ctx->pc = 0x1DBD38u;
    {
        const bool branch_taken_0x1dbd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD38u;
        // 0x1dbd3c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd38) {
            ctx->pc = 0x1DBD58u;
            goto label_1dbd58;
        }
    }
    ctx->pc = 0x1DBD40u;
label_1dbd40:
    // 0x1dbd40: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbd44:
    // 0x1dbd44: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbd48:
    // 0x1dbd48: 0x24636730  addiu       $v1, $v1, 0x6730
    ctx->pc = 0x1dbd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26416));
label_1dbd4c:
    // 0x1dbd4c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbd50:
    // 0x1dbd50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbd50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbd54:
    // 0x1dbd54: 0x0  nop
    ctx->pc = 0x1dbd54u;
    // NOP
label_1dbd58:
    // 0x1dbd58: 0x10000151  b           . + 4 + (0x151 << 2)
label_1dbd5c:
    if (ctx->pc == 0x1DBD5Cu) {
        ctx->pc = 0x1DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD58u;
        // 0x1dbd5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD60u;
        goto label_1dbd60;
    }
    ctx->pc = 0x1DBD58u;
    {
        const bool branch_taken_0x1dbd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD58u;
        // 0x1dbd5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd58) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBD60u;
label_1dbd60:
    // 0x1dbd60: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd64:
    // 0x1dbd64: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd68:
    // 0x1dbd68: 0xc096c88  jal         func_25B220
label_1dbd6c:
    if (ctx->pc == 0x1DBD6Cu) {
        ctx->pc = 0x1DBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD68u;
        // 0x1dbd6c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD70u;
        goto label_1dbd70;
    }
    ctx->pc = 0x1DBD68u;
    SET_GPR_U32(ctx, 31, 0x1DBD70u);
    ctx->pc = 0x1DBD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD68u;
    // 0x1dbd6c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBD68u, 0x1DBD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD70u;
label_1dbd70:
    // 0x1dbd70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbd74:
    if (ctx->pc == 0x1DBD74u) {
        ctx->pc = 0x1DBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD70u;
        // 0x1dbd74: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD78u;
        goto label_1dbd78;
    }
    ctx->pc = 0x1DBD70u;
    {
        const bool branch_taken_0x1dbd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD70u;
        // 0x1dbd74: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd70) {
            ctx->pc = 0x1DBD90u;
            goto label_1dbd90;
        }
    }
    ctx->pc = 0x1DBD78u;
label_1dbd78:
    // 0x1dbd78: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbd7c:
    // 0x1dbd7c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbd80:
    // 0x1dbd80: 0x246366f0  addiu       $v1, $v1, 0x66F0
    ctx->pc = 0x1dbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26352));
label_1dbd84:
    // 0x1dbd84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbd88:
    // 0x1dbd88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbd8c:
    // 0x1dbd8c: 0x0  nop
    ctx->pc = 0x1dbd8cu;
    // NOP
label_1dbd90:
    // 0x1dbd90: 0x10000143  b           . + 4 + (0x143 << 2)
label_1dbd94:
    if (ctx->pc == 0x1DBD94u) {
        ctx->pc = 0x1DBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD90u;
        // 0x1dbd94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD98u;
        goto label_1dbd98;
    }
    ctx->pc = 0x1DBD90u;
    {
        const bool branch_taken_0x1dbd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD90u;
        // 0x1dbd94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd90) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBD98u;
label_1dbd98:
    // 0x1dbd98: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd9c:
    // 0x1dbd9c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbda0:
    // 0x1dbda0: 0xc096c88  jal         func_25B220
label_1dbda4:
    if (ctx->pc == 0x1DBDA4u) {
        ctx->pc = 0x1DBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDA0u;
        // 0x1dbda4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDA8u;
        goto label_1dbda8;
    }
    ctx->pc = 0x1DBDA0u;
    SET_GPR_U32(ctx, 31, 0x1DBDA8u);
    ctx->pc = 0x1DBDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDA0u;
    // 0x1dbda4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBDA0u, 0x1DBDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDA8u;
label_1dbda8:
    // 0x1dbda8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbdac:
    if (ctx->pc == 0x1DBDACu) {
        ctx->pc = 0x1DBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDA8u;
        // 0x1dbdac: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDB0u;
        goto label_1dbdb0;
    }
    ctx->pc = 0x1DBDA8u;
    {
        const bool branch_taken_0x1dbda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDA8u;
        // 0x1dbdac: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbda8) {
            ctx->pc = 0x1DBDC8u;
            goto label_1dbdc8;
        }
    }
    ctx->pc = 0x1DBDB0u;
label_1dbdb0:
    // 0x1dbdb0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbdb4:
    // 0x1dbdb4: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbdb8:
    // 0x1dbdb8: 0x246366b0  addiu       $v1, $v1, 0x66B0
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26288));
label_1dbdbc:
    // 0x1dbdbc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbdc0:
    // 0x1dbdc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbdc4:
    // 0x1dbdc4: 0x0  nop
    ctx->pc = 0x1dbdc4u;
    // NOP
label_1dbdc8:
    // 0x1dbdc8: 0x10000135  b           . + 4 + (0x135 << 2)
label_1dbdcc:
    if (ctx->pc == 0x1DBDCCu) {
        ctx->pc = 0x1DBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDC8u;
        // 0x1dbdcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDD0u;
        goto label_1dbdd0;
    }
    ctx->pc = 0x1DBDC8u;
    {
        const bool branch_taken_0x1dbdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDC8u;
        // 0x1dbdcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdc8) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBDD0u;
label_1dbdd0:
    // 0x1dbdd0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbdd4:
    // 0x1dbdd4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbdd8:
    // 0x1dbdd8: 0xc096c88  jal         func_25B220
label_1dbddc:
    if (ctx->pc == 0x1DBDDCu) {
        ctx->pc = 0x1DBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDD8u;
        // 0x1dbddc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDE0u;
        goto label_1dbde0;
    }
    ctx->pc = 0x1DBDD8u;
    SET_GPR_U32(ctx, 31, 0x1DBDE0u);
    ctx->pc = 0x1DBDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDD8u;
    // 0x1dbddc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBDD8u, 0x1DBDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDE0u;
label_1dbde0:
    // 0x1dbde0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbde4:
    if (ctx->pc == 0x1DBDE4u) {
        ctx->pc = 0x1DBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE0u;
        // 0x1dbde4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDE8u;
        goto label_1dbde8;
    }
    ctx->pc = 0x1DBDE0u;
    {
        const bool branch_taken_0x1dbde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE0u;
        // 0x1dbde4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbde0) {
            ctx->pc = 0x1DBE00u;
            goto label_1dbe00;
        }
    }
    ctx->pc = 0x1DBDE8u;
label_1dbde8:
    // 0x1dbde8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbdec:
    // 0x1dbdec: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbdf0:
    // 0x1dbdf0: 0x24636670  addiu       $v1, $v1, 0x6670
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26224));
label_1dbdf4:
    // 0x1dbdf4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbdf8:
    // 0x1dbdf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbdfc:
    // 0x1dbdfc: 0x0  nop
    ctx->pc = 0x1dbdfcu;
    // NOP
label_1dbe00:
    // 0x1dbe00: 0x10000127  b           . + 4 + (0x127 << 2)
label_1dbe04:
    if (ctx->pc == 0x1DBE04u) {
        ctx->pc = 0x1DBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE00u;
        // 0x1dbe04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE08u;
        goto label_1dbe08;
    }
    ctx->pc = 0x1DBE00u;
    {
        const bool branch_taken_0x1dbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE00u;
        // 0x1dbe04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe00) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBE08u;
label_1dbe08:
    // 0x1dbe08: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbe08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe0c:
    // 0x1dbe0c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbe0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe10:
    // 0x1dbe10: 0xc096c88  jal         func_25B220
label_1dbe14:
    if (ctx->pc == 0x1DBE14u) {
        ctx->pc = 0x1DBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE10u;
        // 0x1dbe14: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE18u;
        goto label_1dbe18;
    }
    ctx->pc = 0x1DBE10u;
    SET_GPR_U32(ctx, 31, 0x1DBE18u);
    ctx->pc = 0x1DBE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE10u;
    // 0x1dbe14: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBE10u, 0x1DBE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE18u;
label_1dbe18:
    // 0x1dbe18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbe1c:
    if (ctx->pc == 0x1DBE1Cu) {
        ctx->pc = 0x1DBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE18u;
        // 0x1dbe1c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE20u;
        goto label_1dbe20;
    }
    ctx->pc = 0x1DBE18u;
    {
        const bool branch_taken_0x1dbe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE18u;
        // 0x1dbe1c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe18) {
            ctx->pc = 0x1DBE38u;
            goto label_1dbe38;
        }
    }
    ctx->pc = 0x1DBE20u;
label_1dbe20:
    // 0x1dbe20: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbe24:
    // 0x1dbe24: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbe28:
    // 0x1dbe28: 0x24636630  addiu       $v1, $v1, 0x6630
    ctx->pc = 0x1dbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26160));
label_1dbe2c:
    // 0x1dbe2c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbe30:
    // 0x1dbe30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbe30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbe34:
    // 0x1dbe34: 0x0  nop
    ctx->pc = 0x1dbe34u;
    // NOP
label_1dbe38:
    // 0x1dbe38: 0x10000119  b           . + 4 + (0x119 << 2)
label_1dbe3c:
    if (ctx->pc == 0x1DBE3Cu) {
        ctx->pc = 0x1DBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE38u;
        // 0x1dbe3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE40u;
        goto label_1dbe40;
    }
    ctx->pc = 0x1DBE38u;
    {
        const bool branch_taken_0x1dbe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE38u;
        // 0x1dbe3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe38) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBE40u;
label_1dbe40:
    // 0x1dbe40: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbe40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe44:
    // 0x1dbe44: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe48:
    // 0x1dbe48: 0xc096c88  jal         func_25B220
label_1dbe4c:
    if (ctx->pc == 0x1DBE4Cu) {
        ctx->pc = 0x1DBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE48u;
        // 0x1dbe4c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE50u;
        goto label_1dbe50;
    }
    ctx->pc = 0x1DBE48u;
    SET_GPR_U32(ctx, 31, 0x1DBE50u);
    ctx->pc = 0x1DBE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE48u;
    // 0x1dbe4c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBE48u, 0x1DBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE50u;
label_1dbe50:
    // 0x1dbe50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbe54:
    if (ctx->pc == 0x1DBE54u) {
        ctx->pc = 0x1DBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE50u;
        // 0x1dbe54: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE58u;
        goto label_1dbe58;
    }
    ctx->pc = 0x1DBE50u;
    {
        const bool branch_taken_0x1dbe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE50u;
        // 0x1dbe54: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe50) {
            ctx->pc = 0x1DBE70u;
            goto label_1dbe70;
        }
    }
    ctx->pc = 0x1DBE58u;
label_1dbe58:
    // 0x1dbe58: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbe5c:
    // 0x1dbe5c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbe60:
    // 0x1dbe60: 0x246365f0  addiu       $v1, $v1, 0x65F0
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26096));
label_1dbe64:
    // 0x1dbe64: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbe68:
    // 0x1dbe68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbe6c:
    // 0x1dbe6c: 0x0  nop
    ctx->pc = 0x1dbe6cu;
    // NOP
label_1dbe70:
    // 0x1dbe70: 0x1000010b  b           . + 4 + (0x10B << 2)
label_1dbe74:
    if (ctx->pc == 0x1DBE74u) {
        ctx->pc = 0x1DBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE70u;
        // 0x1dbe74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE78u;
        goto label_1dbe78;
    }
    ctx->pc = 0x1DBE70u;
    {
        const bool branch_taken_0x1dbe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE70u;
        // 0x1dbe74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe70) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBE78u;
label_1dbe78:
    // 0x1dbe78: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe7c:
    // 0x1dbe7c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbe80:
    // 0x1dbe80: 0xc096c88  jal         func_25B220
label_1dbe84:
    if (ctx->pc == 0x1DBE84u) {
        ctx->pc = 0x1DBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE80u;
        // 0x1dbe84: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE88u;
        goto label_1dbe88;
    }
    ctx->pc = 0x1DBE80u;
    SET_GPR_U32(ctx, 31, 0x1DBE88u);
    ctx->pc = 0x1DBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE80u;
    // 0x1dbe84: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBE80u, 0x1DBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE88u;
label_1dbe88:
    // 0x1dbe88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbe8c:
    if (ctx->pc == 0x1DBE8Cu) {
        ctx->pc = 0x1DBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE88u;
        // 0x1dbe8c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBE90u;
        goto label_1dbe90;
    }
    ctx->pc = 0x1DBE88u;
    {
        const bool branch_taken_0x1dbe88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE88u;
        // 0x1dbe8c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe88) {
            ctx->pc = 0x1DBEA8u;
            goto label_1dbea8;
        }
    }
    ctx->pc = 0x1DBE90u;
label_1dbe90:
    // 0x1dbe90: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbe94:
    // 0x1dbe94: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbe98:
    // 0x1dbe98: 0x246365b0  addiu       $v1, $v1, 0x65B0
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26032));
label_1dbe9c:
    // 0x1dbe9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbea0:
    // 0x1dbea0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbea4:
    // 0x1dbea4: 0x0  nop
    ctx->pc = 0x1dbea4u;
    // NOP
label_1dbea8:
    // 0x1dbea8: 0x100000fd  b           . + 4 + (0xFD << 2)
label_1dbeac:
    if (ctx->pc == 0x1DBEACu) {
        ctx->pc = 0x1DBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEA8u;
        // 0x1dbeac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEB0u;
        goto label_1dbeb0;
    }
    ctx->pc = 0x1DBEA8u;
    {
        const bool branch_taken_0x1dbea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEA8u;
        // 0x1dbeac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbea8) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBEB0u;
label_1dbeb0:
    // 0x1dbeb0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbeb4:
    // 0x1dbeb4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbeb8:
    // 0x1dbeb8: 0xc096c88  jal         func_25B220
label_1dbebc:
    if (ctx->pc == 0x1DBEBCu) {
        ctx->pc = 0x1DBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEB8u;
        // 0x1dbebc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEC0u;
        goto label_1dbec0;
    }
    ctx->pc = 0x1DBEB8u;
    SET_GPR_U32(ctx, 31, 0x1DBEC0u);
    ctx->pc = 0x1DBEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEB8u;
    // 0x1dbebc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBEB8u, 0x1DBEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEC0u;
label_1dbec0:
    // 0x1dbec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbec4:
    if (ctx->pc == 0x1DBEC4u) {
        ctx->pc = 0x1DBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEC0u;
        // 0x1dbec4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEC8u;
        goto label_1dbec8;
    }
    ctx->pc = 0x1DBEC0u;
    {
        const bool branch_taken_0x1dbec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEC0u;
        // 0x1dbec4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbec0) {
            ctx->pc = 0x1DBEE0u;
            goto label_1dbee0;
        }
    }
    ctx->pc = 0x1DBEC8u;
label_1dbec8:
    // 0x1dbec8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbecc:
    // 0x1dbecc: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbed0:
    // 0x1dbed0: 0x24636570  addiu       $v1, $v1, 0x6570
    ctx->pc = 0x1dbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25968));
label_1dbed4:
    // 0x1dbed4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbed8:
    // 0x1dbed8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbedc:
    // 0x1dbedc: 0x0  nop
    ctx->pc = 0x1dbedcu;
    // NOP
label_1dbee0:
    // 0x1dbee0: 0x100000ef  b           . + 4 + (0xEF << 2)
label_1dbee4:
    if (ctx->pc == 0x1DBEE4u) {
        ctx->pc = 0x1DBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEE0u;
        // 0x1dbee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEE8u;
        goto label_1dbee8;
    }
    ctx->pc = 0x1DBEE0u;
    {
        const bool branch_taken_0x1dbee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEE0u;
        // 0x1dbee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbee0) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBEE8u;
label_1dbee8:
    // 0x1dbee8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbeec:
    // 0x1dbeec: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbef0:
    // 0x1dbef0: 0xc096c88  jal         func_25B220
label_1dbef4:
    if (ctx->pc == 0x1DBEF4u) {
        ctx->pc = 0x1DBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEF0u;
        // 0x1dbef4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBEF8u;
        goto label_1dbef8;
    }
    ctx->pc = 0x1DBEF0u;
    SET_GPR_U32(ctx, 31, 0x1DBEF8u);
    ctx->pc = 0x1DBEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEF0u;
    // 0x1dbef4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBEF0u, 0x1DBEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBEF8u;
label_1dbef8:
    // 0x1dbef8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbefc:
    if (ctx->pc == 0x1DBEFCu) {
        ctx->pc = 0x1DBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEF8u;
        // 0x1dbefc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF00u;
        goto label_1dbf00;
    }
    ctx->pc = 0x1DBEF8u;
    {
        const bool branch_taken_0x1dbef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEF8u;
        // 0x1dbefc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbef8) {
            ctx->pc = 0x1DBF18u;
            goto label_1dbf18;
        }
    }
    ctx->pc = 0x1DBF00u;
label_1dbf00:
    // 0x1dbf00: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbf04:
    // 0x1dbf04: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbf08:
    // 0x1dbf08: 0x24636530  addiu       $v1, $v1, 0x6530
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25904));
label_1dbf0c:
    // 0x1dbf0c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbf10:
    // 0x1dbf10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbf14:
    // 0x1dbf14: 0x0  nop
    ctx->pc = 0x1dbf14u;
    // NOP
label_1dbf18:
    // 0x1dbf18: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_1dbf1c:
    if (ctx->pc == 0x1DBF1Cu) {
        ctx->pc = 0x1DBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF18u;
        // 0x1dbf1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF20u;
        goto label_1dbf20;
    }
    ctx->pc = 0x1DBF18u;
    {
        const bool branch_taken_0x1dbf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF18u;
        // 0x1dbf1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf18) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBF20u;
label_1dbf20:
    // 0x1dbf20: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf24:
    // 0x1dbf24: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf28:
    // 0x1dbf28: 0xc096c88  jal         func_25B220
label_1dbf2c:
    if (ctx->pc == 0x1DBF2Cu) {
        ctx->pc = 0x1DBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF28u;
        // 0x1dbf2c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF30u;
        goto label_1dbf30;
    }
    ctx->pc = 0x1DBF28u;
    SET_GPR_U32(ctx, 31, 0x1DBF30u);
    ctx->pc = 0x1DBF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF28u;
    // 0x1dbf2c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBF28u, 0x1DBF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF30u;
label_1dbf30:
    // 0x1dbf30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbf34:
    if (ctx->pc == 0x1DBF34u) {
        ctx->pc = 0x1DBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF30u;
        // 0x1dbf34: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF38u;
        goto label_1dbf38;
    }
    ctx->pc = 0x1DBF30u;
    {
        const bool branch_taken_0x1dbf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF30u;
        // 0x1dbf34: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf30) {
            ctx->pc = 0x1DBF50u;
            goto label_1dbf50;
        }
    }
    ctx->pc = 0x1DBF38u;
label_1dbf38:
    // 0x1dbf38: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbf3c:
    // 0x1dbf3c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbf40:
    // 0x1dbf40: 0x246364f0  addiu       $v1, $v1, 0x64F0
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
label_1dbf44:
    // 0x1dbf44: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbf48:
    // 0x1dbf48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbf4c:
    // 0x1dbf4c: 0x0  nop
    ctx->pc = 0x1dbf4cu;
    // NOP
label_1dbf50:
    // 0x1dbf50: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_1dbf54:
    if (ctx->pc == 0x1DBF54u) {
        ctx->pc = 0x1DBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF50u;
        // 0x1dbf54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF58u;
        goto label_1dbf58;
    }
    ctx->pc = 0x1DBF50u;
    {
        const bool branch_taken_0x1dbf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF50u;
        // 0x1dbf54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf50) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBF58u;
label_1dbf58:
    // 0x1dbf58: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf5c:
    // 0x1dbf5c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf60:
    // 0x1dbf60: 0xc096c88  jal         func_25B220
label_1dbf64:
    if (ctx->pc == 0x1DBF64u) {
        ctx->pc = 0x1DBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF60u;
        // 0x1dbf64: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF68u;
        goto label_1dbf68;
    }
    ctx->pc = 0x1DBF60u;
    SET_GPR_U32(ctx, 31, 0x1DBF68u);
    ctx->pc = 0x1DBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF60u;
    // 0x1dbf64: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBF60u, 0x1DBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF68u;
label_1dbf68:
    // 0x1dbf68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbf6c:
    if (ctx->pc == 0x1DBF6Cu) {
        ctx->pc = 0x1DBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF68u;
        // 0x1dbf6c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF70u;
        goto label_1dbf70;
    }
    ctx->pc = 0x1DBF68u;
    {
        const bool branch_taken_0x1dbf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF68u;
        // 0x1dbf6c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf68) {
            ctx->pc = 0x1DBF88u;
            goto label_1dbf88;
        }
    }
    ctx->pc = 0x1DBF70u;
label_1dbf70:
    // 0x1dbf70: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbf74:
    // 0x1dbf74: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbf78:
    // 0x1dbf78: 0x246364b0  addiu       $v1, $v1, 0x64B0
    ctx->pc = 0x1dbf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25776));
label_1dbf7c:
    // 0x1dbf7c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbf80:
    // 0x1dbf80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbf80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbf84:
    // 0x1dbf84: 0x0  nop
    ctx->pc = 0x1dbf84u;
    // NOP
label_1dbf88:
    // 0x1dbf88: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_1dbf8c:
    if (ctx->pc == 0x1DBF8Cu) {
        ctx->pc = 0x1DBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF88u;
        // 0x1dbf8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF90u;
        goto label_1dbf90;
    }
    ctx->pc = 0x1DBF88u;
    {
        const bool branch_taken_0x1dbf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF88u;
        // 0x1dbf8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf88) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBF90u;
label_1dbf90:
    // 0x1dbf90: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf94:
    // 0x1dbf94: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbf94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf98:
    // 0x1dbf98: 0xc096c88  jal         func_25B220
label_1dbf9c:
    if (ctx->pc == 0x1DBF9Cu) {
        ctx->pc = 0x1DBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF98u;
        // 0x1dbf9c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFA0u;
        goto label_1dbfa0;
    }
    ctx->pc = 0x1DBF98u;
    SET_GPR_U32(ctx, 31, 0x1DBFA0u);
    ctx->pc = 0x1DBF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF98u;
    // 0x1dbf9c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBF98u, 0x1DBFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFA0u;
label_1dbfa0:
    // 0x1dbfa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbfa4:
    if (ctx->pc == 0x1DBFA4u) {
        ctx->pc = 0x1DBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFA0u;
        // 0x1dbfa4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFA8u;
        goto label_1dbfa8;
    }
    ctx->pc = 0x1DBFA0u;
    {
        const bool branch_taken_0x1dbfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFA0u;
        // 0x1dbfa4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfa0) {
            ctx->pc = 0x1DBFC0u;
            goto label_1dbfc0;
        }
    }
    ctx->pc = 0x1DBFA8u;
label_1dbfa8:
    // 0x1dbfa8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbfac:
    // 0x1dbfac: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbfb0:
    // 0x1dbfb0: 0x24636470  addiu       $v1, $v1, 0x6470
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25712));
label_1dbfb4:
    // 0x1dbfb4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbfb8:
    // 0x1dbfb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbfbc:
    // 0x1dbfbc: 0x0  nop
    ctx->pc = 0x1dbfbcu;
    // NOP
label_1dbfc0:
    // 0x1dbfc0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1dbfc4:
    if (ctx->pc == 0x1DBFC4u) {
        ctx->pc = 0x1DBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFC0u;
        // 0x1dbfc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFC8u;
        goto label_1dbfc8;
    }
    ctx->pc = 0x1DBFC0u;
    {
        const bool branch_taken_0x1dbfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFC0u;
        // 0x1dbfc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfc0) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DBFC8u;
label_1dbfc8:
    // 0x1dbfc8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dbfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfcc:
    // 0x1dbfcc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dbfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfd0:
    // 0x1dbfd0: 0xc096c88  jal         func_25B220
label_1dbfd4:
    if (ctx->pc == 0x1DBFD4u) {
        ctx->pc = 0x1DBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD0u;
        // 0x1dbfd4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFD8u;
        goto label_1dbfd8;
    }
    ctx->pc = 0x1DBFD0u;
    SET_GPR_U32(ctx, 31, 0x1DBFD8u);
    ctx->pc = 0x1DBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFD0u;
    // 0x1dbfd4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DBFD0u, 0x1DBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFD8u;
label_1dbfd8:
    // 0x1dbfd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dbfdc:
    if (ctx->pc == 0x1DBFDCu) {
        ctx->pc = 0x1DBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD8u;
        // 0x1dbfdc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFE0u;
        goto label_1dbfe0;
    }
    ctx->pc = 0x1DBFD8u;
    {
        const bool branch_taken_0x1dbfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD8u;
        // 0x1dbfdc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfd8) {
            ctx->pc = 0x1DBFF8u;
            goto label_1dbff8;
        }
    }
    ctx->pc = 0x1DBFE0u;
label_1dbfe0:
    // 0x1dbfe0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dbfe4:
    // 0x1dbfe4: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dbfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dbfe8:
    // 0x1dbfe8: 0x24636430  addiu       $v1, $v1, 0x6430
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25648));
label_1dbfec:
    // 0x1dbfec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dbff0:
    // 0x1dbff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dbff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dbff4:
    // 0x1dbff4: 0x0  nop
    ctx->pc = 0x1dbff4u;
    // NOP
label_1dbff8:
    // 0x1dbff8: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_1dbffc:
    if (ctx->pc == 0x1DBFFCu) {
        ctx->pc = 0x1DBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFF8u;
        // 0x1dbffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC000u;
        goto label_1dc000;
    }
    ctx->pc = 0x1DBFF8u;
    {
        const bool branch_taken_0x1dbff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFF8u;
        // 0x1dbffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbff8) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC000u;
label_1dc000:
    // 0x1dc000: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc004:
    // 0x1dc004: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc008:
    // 0x1dc008: 0xc096c88  jal         func_25B220
label_1dc00c:
    if (ctx->pc == 0x1DC00Cu) {
        ctx->pc = 0x1DC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC008u;
        // 0x1dc00c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC010u;
        goto label_1dc010;
    }
    ctx->pc = 0x1DC008u;
    SET_GPR_U32(ctx, 31, 0x1DC010u);
    ctx->pc = 0x1DC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC008u;
    // 0x1dc00c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC008u, 0x1DC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC010u;
label_1dc010:
    // 0x1dc010: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc014:
    if (ctx->pc == 0x1DC014u) {
        ctx->pc = 0x1DC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC010u;
        // 0x1dc014: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC018u;
        goto label_1dc018;
    }
    ctx->pc = 0x1DC010u;
    {
        const bool branch_taken_0x1dc010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC010u;
        // 0x1dc014: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc010) {
            ctx->pc = 0x1DC030u;
            goto label_1dc030;
        }
    }
    ctx->pc = 0x1DC018u;
label_1dc018:
    // 0x1dc018: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc01c:
    // 0x1dc01c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc020:
    // 0x1dc020: 0x246363f0  addiu       $v1, $v1, 0x63F0
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25584));
label_1dc024:
    // 0x1dc024: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc028:
    // 0x1dc028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc02c:
    // 0x1dc02c: 0x0  nop
    ctx->pc = 0x1dc02cu;
    // NOP
label_1dc030:
    // 0x1dc030: 0x1000009b  b           . + 4 + (0x9B << 2)
label_1dc034:
    if (ctx->pc == 0x1DC034u) {
        ctx->pc = 0x1DC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC030u;
        // 0x1dc034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC038u;
        goto label_1dc038;
    }
    ctx->pc = 0x1DC030u;
    {
        const bool branch_taken_0x1dc030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC030u;
        // 0x1dc034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc030) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC038u;
label_1dc038:
    // 0x1dc038: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc03c:
    // 0x1dc03c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc040:
    // 0x1dc040: 0xc096c88  jal         func_25B220
label_1dc044:
    if (ctx->pc == 0x1DC044u) {
        ctx->pc = 0x1DC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC040u;
        // 0x1dc044: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC048u;
        goto label_1dc048;
    }
    ctx->pc = 0x1DC040u;
    SET_GPR_U32(ctx, 31, 0x1DC048u);
    ctx->pc = 0x1DC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC040u;
    // 0x1dc044: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC040u, 0x1DC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC048u;
label_1dc048:
    // 0x1dc048: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc04c:
    if (ctx->pc == 0x1DC04Cu) {
        ctx->pc = 0x1DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC048u;
        // 0x1dc04c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC050u;
        goto label_1dc050;
    }
    ctx->pc = 0x1DC048u;
    {
        const bool branch_taken_0x1dc048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC048u;
        // 0x1dc04c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc048) {
            ctx->pc = 0x1DC068u;
            goto label_1dc068;
        }
    }
    ctx->pc = 0x1DC050u;
label_1dc050:
    // 0x1dc050: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc054:
    // 0x1dc054: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc058:
    // 0x1dc058: 0x246363b0  addiu       $v1, $v1, 0x63B0
    ctx->pc = 0x1dc058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25520));
label_1dc05c:
    // 0x1dc05c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc060:
    // 0x1dc060: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc064:
    // 0x1dc064: 0x0  nop
    ctx->pc = 0x1dc064u;
    // NOP
label_1dc068:
    // 0x1dc068: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1dc06c:
    if (ctx->pc == 0x1DC06Cu) {
        ctx->pc = 0x1DC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC068u;
        // 0x1dc06c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC070u;
        goto label_1dc070;
    }
    ctx->pc = 0x1DC068u;
    {
        const bool branch_taken_0x1dc068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC068u;
        // 0x1dc06c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc068) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC070u;
label_1dc070:
    // 0x1dc070: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc074:
    // 0x1dc074: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc078:
    // 0x1dc078: 0xc096c88  jal         func_25B220
label_1dc07c:
    if (ctx->pc == 0x1DC07Cu) {
        ctx->pc = 0x1DC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC078u;
        // 0x1dc07c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC080u;
        goto label_1dc080;
    }
    ctx->pc = 0x1DC078u;
    SET_GPR_U32(ctx, 31, 0x1DC080u);
    ctx->pc = 0x1DC07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC078u;
    // 0x1dc07c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC078u, 0x1DC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC080u;
label_1dc080:
    // 0x1dc080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc084:
    if (ctx->pc == 0x1DC084u) {
        ctx->pc = 0x1DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC080u;
        // 0x1dc084: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC088u;
        goto label_1dc088;
    }
    ctx->pc = 0x1DC080u;
    {
        const bool branch_taken_0x1dc080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC080u;
        // 0x1dc084: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc080) {
            ctx->pc = 0x1DC0A0u;
            goto label_1dc0a0;
        }
    }
    ctx->pc = 0x1DC088u;
label_1dc088:
    // 0x1dc088: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc08c:
    // 0x1dc08c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc090:
    // 0x1dc090: 0x24636370  addiu       $v1, $v1, 0x6370
    ctx->pc = 0x1dc090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25456));
label_1dc094:
    // 0x1dc094: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc098:
    // 0x1dc098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc09c:
    // 0x1dc09c: 0x0  nop
    ctx->pc = 0x1dc09cu;
    // NOP
label_1dc0a0:
    // 0x1dc0a0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1dc0a4:
    if (ctx->pc == 0x1DC0A4u) {
        ctx->pc = 0x1DC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0A0u;
        // 0x1dc0a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0A8u;
        goto label_1dc0a8;
    }
    ctx->pc = 0x1DC0A0u;
    {
        const bool branch_taken_0x1dc0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0A0u;
        // 0x1dc0a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0a0) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC0A8u;
label_1dc0a8:
    // 0x1dc0a8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0ac:
    // 0x1dc0ac: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0b0:
    // 0x1dc0b0: 0xc096c88  jal         func_25B220
label_1dc0b4:
    if (ctx->pc == 0x1DC0B4u) {
        ctx->pc = 0x1DC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0B0u;
        // 0x1dc0b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0B8u;
        goto label_1dc0b8;
    }
    ctx->pc = 0x1DC0B0u;
    SET_GPR_U32(ctx, 31, 0x1DC0B8u);
    ctx->pc = 0x1DC0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC0B0u;
    // 0x1dc0b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC0B0u, 0x1DC0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0B8u;
label_1dc0b8:
    // 0x1dc0b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc0bc:
    if (ctx->pc == 0x1DC0BCu) {
        ctx->pc = 0x1DC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0B8u;
        // 0x1dc0bc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0C0u;
        goto label_1dc0c0;
    }
    ctx->pc = 0x1DC0B8u;
    {
        const bool branch_taken_0x1dc0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0B8u;
        // 0x1dc0bc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0b8) {
            ctx->pc = 0x1DC0D8u;
            goto label_1dc0d8;
        }
    }
    ctx->pc = 0x1DC0C0u;
label_1dc0c0:
    // 0x1dc0c0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc0c4:
    // 0x1dc0c4: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc0c8:
    // 0x1dc0c8: 0x24636330  addiu       $v1, $v1, 0x6330
    ctx->pc = 0x1dc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25392));
label_1dc0cc:
    // 0x1dc0cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc0d0:
    // 0x1dc0d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc0d4:
    // 0x1dc0d4: 0x0  nop
    ctx->pc = 0x1dc0d4u;
    // NOP
label_1dc0d8:
    // 0x1dc0d8: 0x10000071  b           . + 4 + (0x71 << 2)
label_1dc0dc:
    if (ctx->pc == 0x1DC0DCu) {
        ctx->pc = 0x1DC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0D8u;
        // 0x1dc0dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0E0u;
        goto label_1dc0e0;
    }
    ctx->pc = 0x1DC0D8u;
    {
        const bool branch_taken_0x1dc0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0D8u;
        // 0x1dc0dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0d8) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC0E0u;
label_1dc0e0:
    // 0x1dc0e0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0e4:
    // 0x1dc0e4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc0e8:
    // 0x1dc0e8: 0xc096c88  jal         func_25B220
label_1dc0ec:
    if (ctx->pc == 0x1DC0ECu) {
        ctx->pc = 0x1DC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0E8u;
        // 0x1dc0ec: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0F0u;
        goto label_1dc0f0;
    }
    ctx->pc = 0x1DC0E8u;
    SET_GPR_U32(ctx, 31, 0x1DC0F0u);
    ctx->pc = 0x1DC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC0E8u;
    // 0x1dc0ec: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC0E8u, 0x1DC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0F0u;
label_1dc0f0:
    // 0x1dc0f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc0f4:
    if (ctx->pc == 0x1DC0F4u) {
        ctx->pc = 0x1DC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0F0u;
        // 0x1dc0f4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC0F8u;
        goto label_1dc0f8;
    }
    ctx->pc = 0x1DC0F0u;
    {
        const bool branch_taken_0x1dc0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0F0u;
        // 0x1dc0f4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0f0) {
            ctx->pc = 0x1DC110u;
            goto label_1dc110;
        }
    }
    ctx->pc = 0x1DC0F8u;
label_1dc0f8:
    // 0x1dc0f8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc0fc:
    // 0x1dc0fc: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc100:
    // 0x1dc100: 0x246362f0  addiu       $v1, $v1, 0x62F0
    ctx->pc = 0x1dc100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25328));
label_1dc104:
    // 0x1dc104: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc108:
    // 0x1dc108: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc10c:
    // 0x1dc10c: 0x0  nop
    ctx->pc = 0x1dc10cu;
    // NOP
label_1dc110:
    // 0x1dc110: 0x10000063  b           . + 4 + (0x63 << 2)
label_1dc114:
    if (ctx->pc == 0x1DC114u) {
        ctx->pc = 0x1DC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC110u;
        // 0x1dc114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC118u;
        goto label_1dc118;
    }
    ctx->pc = 0x1DC110u;
    {
        const bool branch_taken_0x1dc110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC110u;
        // 0x1dc114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc110) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC118u;
label_1dc118:
    // 0x1dc118: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc11c:
    // 0x1dc11c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc120:
    // 0x1dc120: 0xc096c88  jal         func_25B220
label_1dc124:
    if (ctx->pc == 0x1DC124u) {
        ctx->pc = 0x1DC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC120u;
        // 0x1dc124: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC128u;
        goto label_1dc128;
    }
    ctx->pc = 0x1DC120u;
    SET_GPR_U32(ctx, 31, 0x1DC128u);
    ctx->pc = 0x1DC124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC120u;
    // 0x1dc124: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC120u, 0x1DC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC128u;
label_1dc128:
    // 0x1dc128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc12c:
    if (ctx->pc == 0x1DC12Cu) {
        ctx->pc = 0x1DC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC128u;
        // 0x1dc12c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC130u;
        goto label_1dc130;
    }
    ctx->pc = 0x1DC128u;
    {
        const bool branch_taken_0x1dc128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC128u;
        // 0x1dc12c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc128) {
            ctx->pc = 0x1DC148u;
            goto label_1dc148;
        }
    }
    ctx->pc = 0x1DC130u;
label_1dc130:
    // 0x1dc130: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc134:
    // 0x1dc134: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc138:
    // 0x1dc138: 0x246362b0  addiu       $v1, $v1, 0x62B0
    ctx->pc = 0x1dc138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25264));
label_1dc13c:
    // 0x1dc13c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc140:
    // 0x1dc140: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc144:
    // 0x1dc144: 0x0  nop
    ctx->pc = 0x1dc144u;
    // NOP
label_1dc148:
    // 0x1dc148: 0x10000055  b           . + 4 + (0x55 << 2)
label_1dc14c:
    if (ctx->pc == 0x1DC14Cu) {
        ctx->pc = 0x1DC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC148u;
        // 0x1dc14c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC150u;
        goto label_1dc150;
    }
    ctx->pc = 0x1DC148u;
    {
        const bool branch_taken_0x1dc148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC148u;
        // 0x1dc14c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc148) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC150u;
label_1dc150:
    // 0x1dc150: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc154:
    // 0x1dc154: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc158:
    // 0x1dc158: 0xc096c88  jal         func_25B220
label_1dc15c:
    if (ctx->pc == 0x1DC15Cu) {
        ctx->pc = 0x1DC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC158u;
        // 0x1dc15c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC160u;
        goto label_1dc160;
    }
    ctx->pc = 0x1DC158u;
    SET_GPR_U32(ctx, 31, 0x1DC160u);
    ctx->pc = 0x1DC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC158u;
    // 0x1dc15c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC158u, 0x1DC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC160u;
label_1dc160:
    // 0x1dc160: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc164:
    if (ctx->pc == 0x1DC164u) {
        ctx->pc = 0x1DC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC160u;
        // 0x1dc164: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC168u;
        goto label_1dc168;
    }
    ctx->pc = 0x1DC160u;
    {
        const bool branch_taken_0x1dc160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC160u;
        // 0x1dc164: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc160) {
            ctx->pc = 0x1DC180u;
            goto label_1dc180;
        }
    }
    ctx->pc = 0x1DC168u;
label_1dc168:
    // 0x1dc168: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc16c:
    // 0x1dc16c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc170:
    // 0x1dc170: 0x24636270  addiu       $v1, $v1, 0x6270
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
label_1dc174:
    // 0x1dc174: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc178:
    // 0x1dc178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc17c:
    // 0x1dc17c: 0x0  nop
    ctx->pc = 0x1dc17cu;
    // NOP
label_1dc180:
    // 0x1dc180: 0x10000047  b           . + 4 + (0x47 << 2)
label_1dc184:
    if (ctx->pc == 0x1DC184u) {
        ctx->pc = 0x1DC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC180u;
        // 0x1dc184: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC188u;
        goto label_1dc188;
    }
    ctx->pc = 0x1DC180u;
    {
        const bool branch_taken_0x1dc180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC180u;
        // 0x1dc184: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc180) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC188u;
label_1dc188:
    // 0x1dc188: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc18c:
    // 0x1dc18c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc190:
    // 0x1dc190: 0xc096c88  jal         func_25B220
label_1dc194:
    if (ctx->pc == 0x1DC194u) {
        ctx->pc = 0x1DC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC190u;
        // 0x1dc194: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC198u;
        goto label_1dc198;
    }
    ctx->pc = 0x1DC190u;
    SET_GPR_U32(ctx, 31, 0x1DC198u);
    ctx->pc = 0x1DC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC190u;
    // 0x1dc194: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC190u, 0x1DC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC198u;
label_1dc198:
    // 0x1dc198: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc19c:
    if (ctx->pc == 0x1DC19Cu) {
        ctx->pc = 0x1DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC198u;
        // 0x1dc19c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1A0u;
        goto label_1dc1a0;
    }
    ctx->pc = 0x1DC198u;
    {
        const bool branch_taken_0x1dc198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC198u;
        // 0x1dc19c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc198) {
            ctx->pc = 0x1DC1B8u;
            goto label_1dc1b8;
        }
    }
    ctx->pc = 0x1DC1A0u;
label_1dc1a0:
    // 0x1dc1a0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc1a4:
    // 0x1dc1a4: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc1a8:
    // 0x1dc1a8: 0x24636230  addiu       $v1, $v1, 0x6230
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25136));
label_1dc1ac:
    // 0x1dc1ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc1b0:
    // 0x1dc1b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc1b4:
    // 0x1dc1b4: 0x0  nop
    ctx->pc = 0x1dc1b4u;
    // NOP
label_1dc1b8:
    // 0x1dc1b8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1dc1bc:
    if (ctx->pc == 0x1DC1BCu) {
        ctx->pc = 0x1DC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1B8u;
        // 0x1dc1bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1C0u;
        goto label_1dc1c0;
    }
    ctx->pc = 0x1DC1B8u;
    {
        const bool branch_taken_0x1dc1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1B8u;
        // 0x1dc1bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1b8) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC1C0u;
label_1dc1c0:
    // 0x1dc1c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1c4:
    // 0x1dc1c4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1c8:
    // 0x1dc1c8: 0xc096c88  jal         func_25B220
label_1dc1cc:
    if (ctx->pc == 0x1DC1CCu) {
        ctx->pc = 0x1DC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1C8u;
        // 0x1dc1cc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1D0u;
        goto label_1dc1d0;
    }
    ctx->pc = 0x1DC1C8u;
    SET_GPR_U32(ctx, 31, 0x1DC1D0u);
    ctx->pc = 0x1DC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC1C8u;
    // 0x1dc1cc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC1C8u, 0x1DC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1D0u;
label_1dc1d0:
    // 0x1dc1d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc1d4:
    if (ctx->pc == 0x1DC1D4u) {
        ctx->pc = 0x1DC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1D0u;
        // 0x1dc1d4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1D8u;
        goto label_1dc1d8;
    }
    ctx->pc = 0x1DC1D0u;
    {
        const bool branch_taken_0x1dc1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1D0u;
        // 0x1dc1d4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1d0) {
            ctx->pc = 0x1DC1F0u;
            goto label_1dc1f0;
        }
    }
    ctx->pc = 0x1DC1D8u;
label_1dc1d8:
    // 0x1dc1d8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc1dc:
    // 0x1dc1dc: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc1e0:
    // 0x1dc1e0: 0x246361f0  addiu       $v1, $v1, 0x61F0
    ctx->pc = 0x1dc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25072));
label_1dc1e4:
    // 0x1dc1e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc1e8:
    // 0x1dc1e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc1ec:
    // 0x1dc1ec: 0x0  nop
    ctx->pc = 0x1dc1ecu;
    // NOP
label_1dc1f0:
    // 0x1dc1f0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1dc1f4:
    if (ctx->pc == 0x1DC1F4u) {
        ctx->pc = 0x1DC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1F0u;
        // 0x1dc1f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC1F8u;
        goto label_1dc1f8;
    }
    ctx->pc = 0x1DC1F0u;
    {
        const bool branch_taken_0x1dc1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1F0u;
        // 0x1dc1f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1f0) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC1F8u;
label_1dc1f8:
    // 0x1dc1f8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1fc:
    // 0x1dc1fc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc200:
    // 0x1dc200: 0xc096c88  jal         func_25B220
label_1dc204:
    if (ctx->pc == 0x1DC204u) {
        ctx->pc = 0x1DC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC200u;
        // 0x1dc204: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC208u;
        goto label_1dc208;
    }
    ctx->pc = 0x1DC200u;
    SET_GPR_U32(ctx, 31, 0x1DC208u);
    ctx->pc = 0x1DC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC200u;
    // 0x1dc204: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC200u, 0x1DC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC208u;
label_1dc208:
    // 0x1dc208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc20c:
    if (ctx->pc == 0x1DC20Cu) {
        ctx->pc = 0x1DC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC208u;
        // 0x1dc20c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC210u;
        goto label_1dc210;
    }
    ctx->pc = 0x1DC208u;
    {
        const bool branch_taken_0x1dc208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC208u;
        // 0x1dc20c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc208) {
            ctx->pc = 0x1DC228u;
            goto label_1dc228;
        }
    }
    ctx->pc = 0x1DC210u;
label_1dc210:
    // 0x1dc210: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc214:
    // 0x1dc214: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc218:
    // 0x1dc218: 0x246361b0  addiu       $v1, $v1, 0x61B0
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25008));
label_1dc21c:
    // 0x1dc21c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc220:
    // 0x1dc220: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc224:
    // 0x1dc224: 0x0  nop
    ctx->pc = 0x1dc224u;
    // NOP
label_1dc228:
    // 0x1dc228: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1dc22c:
    if (ctx->pc == 0x1DC22Cu) {
        ctx->pc = 0x1DC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC228u;
        // 0x1dc22c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC230u;
        goto label_1dc230;
    }
    ctx->pc = 0x1DC228u;
    {
        const bool branch_taken_0x1dc228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC228u;
        // 0x1dc22c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc228) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC230u;
label_1dc230:
    // 0x1dc230: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc234:
    // 0x1dc234: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc238:
    // 0x1dc238: 0xc096c88  jal         func_25B220
label_1dc23c:
    if (ctx->pc == 0x1DC23Cu) {
        ctx->pc = 0x1DC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC238u;
        // 0x1dc23c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC240u;
        goto label_1dc240;
    }
    ctx->pc = 0x1DC238u;
    SET_GPR_U32(ctx, 31, 0x1DC240u);
    ctx->pc = 0x1DC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC238u;
    // 0x1dc23c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC238u, 0x1DC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC240u;
label_1dc240:
    // 0x1dc240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc244:
    if (ctx->pc == 0x1DC244u) {
        ctx->pc = 0x1DC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC240u;
        // 0x1dc244: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC248u;
        goto label_1dc248;
    }
    ctx->pc = 0x1DC240u;
    {
        const bool branch_taken_0x1dc240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC240u;
        // 0x1dc244: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc240) {
            ctx->pc = 0x1DC260u;
            goto label_1dc260;
        }
    }
    ctx->pc = 0x1DC248u;
label_1dc248:
    // 0x1dc248: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc24c:
    // 0x1dc24c: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc250:
    // 0x1dc250: 0x24636170  addiu       $v1, $v1, 0x6170
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24944));
label_1dc254:
    // 0x1dc254: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc258:
    // 0x1dc258: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc25c:
    // 0x1dc25c: 0x0  nop
    ctx->pc = 0x1dc25cu;
    // NOP
label_1dc260:
    // 0x1dc260: 0x1000000f  b           . + 4 + (0xF << 2)
label_1dc264:
    if (ctx->pc == 0x1DC264u) {
        ctx->pc = 0x1DC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC260u;
        // 0x1dc264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC268u;
        goto label_1dc268;
    }
    ctx->pc = 0x1DC260u;
    {
        const bool branch_taken_0x1dc260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC260u;
        // 0x1dc264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc260) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC268u;
label_1dc268:
    // 0x1dc268: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dc268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dc26c:
    // 0x1dc26c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1dc26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1dc270:
    // 0x1dc270: 0xc096c88  jal         func_25B220
label_1dc274:
    if (ctx->pc == 0x1DC274u) {
        ctx->pc = 0x1DC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC270u;
        // 0x1dc274: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC278u;
        goto label_1dc278;
    }
    ctx->pc = 0x1DC270u;
    SET_GPR_U32(ctx, 31, 0x1DC278u);
    ctx->pc = 0x1DC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC270u;
    // 0x1dc274: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1DC270u, 0x1DC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC278u;
label_1dc278:
    // 0x1dc278: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc27c:
    if (ctx->pc == 0x1DC27Cu) {
        ctx->pc = 0x1DC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC278u;
        // 0x1dc27c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC280u;
        goto label_1dc280;
    }
    ctx->pc = 0x1DC278u;
    {
        const bool branch_taken_0x1dc278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC278u;
        // 0x1dc27c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc278) {
            ctx->pc = 0x1DC298u;
            goto label_1dc298;
        }
    }
    ctx->pc = 0x1DC280u;
label_1dc280:
    // 0x1dc280: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1dc280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_1dc284:
    // 0x1dc284: 0x248460e0  addiu       $a0, $a0, 0x60E0
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24800));
label_1dc288:
    // 0x1dc288: 0x24636130  addiu       $v1, $v1, 0x6130
    ctx->pc = 0x1dc288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24880));
label_1dc28c:
    // 0x1dc28c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dc28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1dc290:
    // 0x1dc290: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dc290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1dc294:
    // 0x1dc294: 0x0  nop
    ctx->pc = 0x1dc294u;
    // NOP
label_1dc298:
    // 0x1dc298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc29c:
    // 0x1dc29c: 0x0  nop
    ctx->pc = 0x1dc29cu;
    // NOP
label_1dc2a0:
    // 0x1dc2a0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1dc2a4:
    if (ctx->pc == 0x1DC2A4u) {
        ctx->pc = 0x1DC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2A0u;
        // 0x1dc2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2A8u;
        goto label_1dc2a8;
    }
    ctx->pc = 0x1DC2A0u;
    {
        const bool branch_taken_0x1dc2a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2A0u;
        // 0x1dc2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2a0) {
            ctx->pc = 0x1DC2B0u;
            goto label_1dc2b0;
        }
    }
    ctx->pc = 0x1DC2A8u;
label_1dc2a8:
    // 0x1dc2a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1dc2ac:
    if (ctx->pc == 0x1DC2ACu) {
        ctx->pc = 0x1DC2B0u;
        goto label_1dc2b0;
    }
    ctx->pc = 0x1DC2A8u;
    {
        const bool branch_taken_0x1dc2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2a8) {
            ctx->pc = 0x1DC310u;
            goto label_1dc310;
        }
    }
    ctx->pc = 0x1DC2B0u;
label_1dc2b0:
    // 0x1dc2b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dc2b4:
    // 0x1dc2b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dc2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2b8:
    // 0x1dc2b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dc2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2bc:
    // 0x1dc2bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1dc2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2c0:
    // 0x1dc2c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1dc2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2c4:
    // 0x1dc2c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1dc2c8:
    // 0x1dc2c8: 0x320f809  jalr        $t9
label_1dc2cc:
    if (ctx->pc == 0x1DC2CCu) {
        ctx->pc = 0x1DC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2C8u;
        // 0x1dc2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2D0u;
        goto label_1dc2d0;
    }
    ctx->pc = 0x1DC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC2D0u);
        ctx->pc = 0x1DC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2C8u;
        // 0x1dc2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC2C8u, 0x1DC2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC2D0u;
label_1dc2d0:
    // 0x1dc2d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dc2d4:
    if (ctx->pc == 0x1DC2D4u) {
        ctx->pc = 0x1DC2D8u;
        goto label_1dc2d8;
    }
    ctx->pc = 0x1DC2D0u;
    {
        const bool branch_taken_0x1dc2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2d0) {
            ctx->pc = 0x1DC308u;
            goto label_1dc308;
        }
    }
    ctx->pc = 0x1DC2D8u;
label_1dc2d8:
    // 0x1dc2d8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1dc2dc:
    if (ctx->pc == 0x1DC2DCu) {
        ctx->pc = 0x1DC2E0u;
        goto label_1dc2e0;
    }
    ctx->pc = 0x1DC2D8u;
    {
        const bool branch_taken_0x1dc2d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2d8) {
            ctx->pc = 0x1DC300u;
            goto label_1dc300;
        }
    }
    ctx->pc = 0x1DC2E0u;
label_1dc2e0:
    // 0x1dc2e0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1dc2e4:
    if (ctx->pc == 0x1DC2E4u) {
        ctx->pc = 0x1DC2E8u;
        goto label_1dc2e8;
    }
    ctx->pc = 0x1DC2E0u;
    {
        const bool branch_taken_0x1dc2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2e0) {
            ctx->pc = 0x1DC300u;
            goto label_1dc300;
        }
    }
    ctx->pc = 0x1DC2E8u;
label_1dc2e8:
    // 0x1dc2e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dc2ec:
    // 0x1dc2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc2f0:
    // 0x1dc2f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1dc2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1dc2f4:
    // 0x1dc2f4: 0x320f809  jalr        $t9
label_1dc2f8:
    if (ctx->pc == 0x1DC2F8u) {
        ctx->pc = 0x1DC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2F4u;
        // 0x1dc2f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC2FCu;
        goto label_1dc2fc;
    }
    ctx->pc = 0x1DC2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC2FCu);
        ctx->pc = 0x1DC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2F4u;
        // 0x1dc2f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC2F4u, 0x1DC2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC2FCu;
label_1dc2fc:
    // 0x1dc2fc: 0x0  nop
    ctx->pc = 0x1dc2fcu;
    // NOP
label_1dc300:
    // 0x1dc300: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc304:
    if (ctx->pc == 0x1DC304u) {
        ctx->pc = 0x1DC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC300u;
        // 0x1dc304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC308u;
        goto label_1dc308;
    }
    ctx->pc = 0x1DC300u;
    {
        const bool branch_taken_0x1dc300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC300u;
        // 0x1dc304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc300) {
            ctx->pc = 0x1DC310u;
            goto label_1dc310;
        }
    }
    ctx->pc = 0x1DC308u;
label_1dc308:
    // 0x1dc308: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc30c:
    // 0x1dc30c: 0x0  nop
    ctx->pc = 0x1dc30cu;
    // NOP
label_1dc310:
    // 0x1dc310: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dc310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc314:
    // 0x1dc314: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc318:
    // 0x1dc318: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc318u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc31c:
    // 0x1dc31c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc320:
    // 0x1dc320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc324:
    // 0x1dc324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc328:
    // 0x1dc328: 0x3e00008  jr          $ra
label_1dc32c:
    if (ctx->pc == 0x1DC32Cu) {
        ctx->pc = 0x1DC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC328u;
        // 0x1dc32c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC330u;
        goto label_fallthrough_0x1dc328;
    }
    ctx->pc = 0x1DC328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC328u;
        // 0x1dc32c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc328:
    ctx->pc = 0x1DC330u;
}
