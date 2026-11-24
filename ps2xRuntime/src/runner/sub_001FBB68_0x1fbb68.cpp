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

// Function: sub_001FBB68
// Address: 0x1fbb68 - 0x1fc3d4
void sub_001FBB68_0x1fbb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBB68_0x1fbb68");
#endif

    switch (ctx->pc) {
        case 0x1fbb68u: goto label_1fbb68;
        case 0x1fbb6cu: goto label_1fbb6c;
        case 0x1fbb70u: goto label_1fbb70;
        case 0x1fbb74u: goto label_1fbb74;
        case 0x1fbb78u: goto label_1fbb78;
        case 0x1fbb7cu: goto label_1fbb7c;
        case 0x1fbb80u: goto label_1fbb80;
        case 0x1fbb84u: goto label_1fbb84;
        case 0x1fbb88u: goto label_1fbb88;
        case 0x1fbb8cu: goto label_1fbb8c;
        case 0x1fbb90u: goto label_1fbb90;
        case 0x1fbb94u: goto label_1fbb94;
        case 0x1fbb98u: goto label_1fbb98;
        case 0x1fbb9cu: goto label_1fbb9c;
        case 0x1fbba0u: goto label_1fbba0;
        case 0x1fbba4u: goto label_1fbba4;
        case 0x1fbba8u: goto label_1fbba8;
        case 0x1fbbacu: goto label_1fbbac;
        case 0x1fbbb0u: goto label_1fbbb0;
        case 0x1fbbb4u: goto label_1fbbb4;
        case 0x1fbbb8u: goto label_1fbbb8;
        case 0x1fbbbcu: goto label_1fbbbc;
        case 0x1fbbc0u: goto label_1fbbc0;
        case 0x1fbbc4u: goto label_1fbbc4;
        case 0x1fbbc8u: goto label_1fbbc8;
        case 0x1fbbccu: goto label_1fbbcc;
        case 0x1fbbd0u: goto label_1fbbd0;
        case 0x1fbbd4u: goto label_1fbbd4;
        case 0x1fbbd8u: goto label_1fbbd8;
        case 0x1fbbdcu: goto label_1fbbdc;
        case 0x1fbbe0u: goto label_1fbbe0;
        case 0x1fbbe4u: goto label_1fbbe4;
        case 0x1fbbe8u: goto label_1fbbe8;
        case 0x1fbbecu: goto label_1fbbec;
        case 0x1fbbf0u: goto label_1fbbf0;
        case 0x1fbbf4u: goto label_1fbbf4;
        case 0x1fbbf8u: goto label_1fbbf8;
        case 0x1fbbfcu: goto label_1fbbfc;
        case 0x1fbc00u: goto label_1fbc00;
        case 0x1fbc04u: goto label_1fbc04;
        case 0x1fbc08u: goto label_1fbc08;
        case 0x1fbc0cu: goto label_1fbc0c;
        case 0x1fbc10u: goto label_1fbc10;
        case 0x1fbc14u: goto label_1fbc14;
        case 0x1fbc18u: goto label_1fbc18;
        case 0x1fbc1cu: goto label_1fbc1c;
        case 0x1fbc20u: goto label_1fbc20;
        case 0x1fbc24u: goto label_1fbc24;
        case 0x1fbc28u: goto label_1fbc28;
        case 0x1fbc2cu: goto label_1fbc2c;
        case 0x1fbc30u: goto label_1fbc30;
        case 0x1fbc34u: goto label_1fbc34;
        case 0x1fbc38u: goto label_1fbc38;
        case 0x1fbc3cu: goto label_1fbc3c;
        case 0x1fbc40u: goto label_1fbc40;
        case 0x1fbc44u: goto label_1fbc44;
        case 0x1fbc48u: goto label_1fbc48;
        case 0x1fbc4cu: goto label_1fbc4c;
        case 0x1fbc50u: goto label_1fbc50;
        case 0x1fbc54u: goto label_1fbc54;
        case 0x1fbc58u: goto label_1fbc58;
        case 0x1fbc5cu: goto label_1fbc5c;
        case 0x1fbc60u: goto label_1fbc60;
        case 0x1fbc64u: goto label_1fbc64;
        case 0x1fbc68u: goto label_1fbc68;
        case 0x1fbc6cu: goto label_1fbc6c;
        case 0x1fbc70u: goto label_1fbc70;
        case 0x1fbc74u: goto label_1fbc74;
        case 0x1fbc78u: goto label_1fbc78;
        case 0x1fbc7cu: goto label_1fbc7c;
        case 0x1fbc80u: goto label_1fbc80;
        case 0x1fbc84u: goto label_1fbc84;
        case 0x1fbc88u: goto label_1fbc88;
        case 0x1fbc8cu: goto label_1fbc8c;
        case 0x1fbc90u: goto label_1fbc90;
        case 0x1fbc94u: goto label_1fbc94;
        case 0x1fbc98u: goto label_1fbc98;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbca0u: goto label_1fbca0;
        case 0x1fbca4u: goto label_1fbca4;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcacu: goto label_1fbcac;
        case 0x1fbcb0u: goto label_1fbcb0;
        case 0x1fbcb4u: goto label_1fbcb4;
        case 0x1fbcb8u: goto label_1fbcb8;
        case 0x1fbcbcu: goto label_1fbcbc;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcc4u: goto label_1fbcc4;
        case 0x1fbcc8u: goto label_1fbcc8;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbcd0u: goto label_1fbcd0;
        case 0x1fbcd4u: goto label_1fbcd4;
        case 0x1fbcd8u: goto label_1fbcd8;
        case 0x1fbcdcu: goto label_1fbcdc;
        case 0x1fbce0u: goto label_1fbce0;
        case 0x1fbce4u: goto label_1fbce4;
        case 0x1fbce8u: goto label_1fbce8;
        case 0x1fbcecu: goto label_1fbcec;
        case 0x1fbcf0u: goto label_1fbcf0;
        case 0x1fbcf4u: goto label_1fbcf4;
        case 0x1fbcf8u: goto label_1fbcf8;
        case 0x1fbcfcu: goto label_1fbcfc;
        case 0x1fbd00u: goto label_1fbd00;
        case 0x1fbd04u: goto label_1fbd04;
        case 0x1fbd08u: goto label_1fbd08;
        case 0x1fbd0cu: goto label_1fbd0c;
        case 0x1fbd10u: goto label_1fbd10;
        case 0x1fbd14u: goto label_1fbd14;
        case 0x1fbd18u: goto label_1fbd18;
        case 0x1fbd1cu: goto label_1fbd1c;
        case 0x1fbd20u: goto label_1fbd20;
        case 0x1fbd24u: goto label_1fbd24;
        case 0x1fbd28u: goto label_1fbd28;
        case 0x1fbd2cu: goto label_1fbd2c;
        case 0x1fbd30u: goto label_1fbd30;
        case 0x1fbd34u: goto label_1fbd34;
        case 0x1fbd38u: goto label_1fbd38;
        case 0x1fbd3cu: goto label_1fbd3c;
        case 0x1fbd40u: goto label_1fbd40;
        case 0x1fbd44u: goto label_1fbd44;
        case 0x1fbd48u: goto label_1fbd48;
        case 0x1fbd4cu: goto label_1fbd4c;
        case 0x1fbd50u: goto label_1fbd50;
        case 0x1fbd54u: goto label_1fbd54;
        case 0x1fbd58u: goto label_1fbd58;
        case 0x1fbd5cu: goto label_1fbd5c;
        case 0x1fbd60u: goto label_1fbd60;
        case 0x1fbd64u: goto label_1fbd64;
        case 0x1fbd68u: goto label_1fbd68;
        case 0x1fbd6cu: goto label_1fbd6c;
        case 0x1fbd70u: goto label_1fbd70;
        case 0x1fbd74u: goto label_1fbd74;
        case 0x1fbd78u: goto label_1fbd78;
        case 0x1fbd7cu: goto label_1fbd7c;
        case 0x1fbd80u: goto label_1fbd80;
        case 0x1fbd84u: goto label_1fbd84;
        case 0x1fbd88u: goto label_1fbd88;
        case 0x1fbd8cu: goto label_1fbd8c;
        case 0x1fbd90u: goto label_1fbd90;
        case 0x1fbd94u: goto label_1fbd94;
        case 0x1fbd98u: goto label_1fbd98;
        case 0x1fbd9cu: goto label_1fbd9c;
        case 0x1fbda0u: goto label_1fbda0;
        case 0x1fbda4u: goto label_1fbda4;
        case 0x1fbda8u: goto label_1fbda8;
        case 0x1fbdacu: goto label_1fbdac;
        case 0x1fbdb0u: goto label_1fbdb0;
        case 0x1fbdb4u: goto label_1fbdb4;
        case 0x1fbdb8u: goto label_1fbdb8;
        case 0x1fbdbcu: goto label_1fbdbc;
        case 0x1fbdc0u: goto label_1fbdc0;
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbdc8u: goto label_1fbdc8;
        case 0x1fbdccu: goto label_1fbdcc;
        case 0x1fbdd0u: goto label_1fbdd0;
        case 0x1fbdd4u: goto label_1fbdd4;
        case 0x1fbdd8u: goto label_1fbdd8;
        case 0x1fbddcu: goto label_1fbddc;
        case 0x1fbde0u: goto label_1fbde0;
        case 0x1fbde4u: goto label_1fbde4;
        case 0x1fbde8u: goto label_1fbde8;
        case 0x1fbdecu: goto label_1fbdec;
        case 0x1fbdf0u: goto label_1fbdf0;
        case 0x1fbdf4u: goto label_1fbdf4;
        case 0x1fbdf8u: goto label_1fbdf8;
        case 0x1fbdfcu: goto label_1fbdfc;
        case 0x1fbe00u: goto label_1fbe00;
        case 0x1fbe04u: goto label_1fbe04;
        case 0x1fbe08u: goto label_1fbe08;
        case 0x1fbe0cu: goto label_1fbe0c;
        case 0x1fbe10u: goto label_1fbe10;
        case 0x1fbe14u: goto label_1fbe14;
        case 0x1fbe18u: goto label_1fbe18;
        case 0x1fbe1cu: goto label_1fbe1c;
        case 0x1fbe20u: goto label_1fbe20;
        case 0x1fbe24u: goto label_1fbe24;
        case 0x1fbe28u: goto label_1fbe28;
        case 0x1fbe2cu: goto label_1fbe2c;
        case 0x1fbe30u: goto label_1fbe30;
        case 0x1fbe34u: goto label_1fbe34;
        case 0x1fbe38u: goto label_1fbe38;
        case 0x1fbe3cu: goto label_1fbe3c;
        case 0x1fbe40u: goto label_1fbe40;
        case 0x1fbe44u: goto label_1fbe44;
        case 0x1fbe48u: goto label_1fbe48;
        case 0x1fbe4cu: goto label_1fbe4c;
        case 0x1fbe50u: goto label_1fbe50;
        case 0x1fbe54u: goto label_1fbe54;
        case 0x1fbe58u: goto label_1fbe58;
        case 0x1fbe5cu: goto label_1fbe5c;
        case 0x1fbe60u: goto label_1fbe60;
        case 0x1fbe64u: goto label_1fbe64;
        case 0x1fbe68u: goto label_1fbe68;
        case 0x1fbe6cu: goto label_1fbe6c;
        case 0x1fbe70u: goto label_1fbe70;
        case 0x1fbe74u: goto label_1fbe74;
        case 0x1fbe78u: goto label_1fbe78;
        case 0x1fbe7cu: goto label_1fbe7c;
        case 0x1fbe80u: goto label_1fbe80;
        case 0x1fbe84u: goto label_1fbe84;
        case 0x1fbe88u: goto label_1fbe88;
        case 0x1fbe8cu: goto label_1fbe8c;
        case 0x1fbe90u: goto label_1fbe90;
        case 0x1fbe94u: goto label_1fbe94;
        case 0x1fbe98u: goto label_1fbe98;
        case 0x1fbe9cu: goto label_1fbe9c;
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbea4u: goto label_1fbea4;
        case 0x1fbea8u: goto label_1fbea8;
        case 0x1fbeacu: goto label_1fbeac;
        case 0x1fbeb0u: goto label_1fbeb0;
        case 0x1fbeb4u: goto label_1fbeb4;
        case 0x1fbeb8u: goto label_1fbeb8;
        case 0x1fbebcu: goto label_1fbebc;
        case 0x1fbec0u: goto label_1fbec0;
        case 0x1fbec4u: goto label_1fbec4;
        case 0x1fbec8u: goto label_1fbec8;
        case 0x1fbeccu: goto label_1fbecc;
        case 0x1fbed0u: goto label_1fbed0;
        case 0x1fbed4u: goto label_1fbed4;
        case 0x1fbed8u: goto label_1fbed8;
        case 0x1fbedcu: goto label_1fbedc;
        case 0x1fbee0u: goto label_1fbee0;
        case 0x1fbee4u: goto label_1fbee4;
        case 0x1fbee8u: goto label_1fbee8;
        case 0x1fbeecu: goto label_1fbeec;
        case 0x1fbef0u: goto label_1fbef0;
        case 0x1fbef4u: goto label_1fbef4;
        case 0x1fbef8u: goto label_1fbef8;
        case 0x1fbefcu: goto label_1fbefc;
        case 0x1fbf00u: goto label_1fbf00;
        case 0x1fbf04u: goto label_1fbf04;
        case 0x1fbf08u: goto label_1fbf08;
        case 0x1fbf0cu: goto label_1fbf0c;
        case 0x1fbf10u: goto label_1fbf10;
        case 0x1fbf14u: goto label_1fbf14;
        case 0x1fbf18u: goto label_1fbf18;
        case 0x1fbf1cu: goto label_1fbf1c;
        case 0x1fbf20u: goto label_1fbf20;
        case 0x1fbf24u: goto label_1fbf24;
        case 0x1fbf28u: goto label_1fbf28;
        case 0x1fbf2cu: goto label_1fbf2c;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf34u: goto label_1fbf34;
        case 0x1fbf38u: goto label_1fbf38;
        case 0x1fbf3cu: goto label_1fbf3c;
        case 0x1fbf40u: goto label_1fbf40;
        case 0x1fbf44u: goto label_1fbf44;
        case 0x1fbf48u: goto label_1fbf48;
        case 0x1fbf4cu: goto label_1fbf4c;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf54u: goto label_1fbf54;
        case 0x1fbf58u: goto label_1fbf58;
        case 0x1fbf5cu: goto label_1fbf5c;
        case 0x1fbf60u: goto label_1fbf60;
        case 0x1fbf64u: goto label_1fbf64;
        case 0x1fbf68u: goto label_1fbf68;
        case 0x1fbf6cu: goto label_1fbf6c;
        case 0x1fbf70u: goto label_1fbf70;
        case 0x1fbf74u: goto label_1fbf74;
        case 0x1fbf78u: goto label_1fbf78;
        case 0x1fbf7cu: goto label_1fbf7c;
        case 0x1fbf80u: goto label_1fbf80;
        case 0x1fbf84u: goto label_1fbf84;
        case 0x1fbf88u: goto label_1fbf88;
        case 0x1fbf8cu: goto label_1fbf8c;
        case 0x1fbf90u: goto label_1fbf90;
        case 0x1fbf94u: goto label_1fbf94;
        case 0x1fbf98u: goto label_1fbf98;
        case 0x1fbf9cu: goto label_1fbf9c;
        case 0x1fbfa0u: goto label_1fbfa0;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfa8u: goto label_1fbfa8;
        case 0x1fbfacu: goto label_1fbfac;
        case 0x1fbfb0u: goto label_1fbfb0;
        case 0x1fbfb4u: goto label_1fbfb4;
        case 0x1fbfb8u: goto label_1fbfb8;
        case 0x1fbfbcu: goto label_1fbfbc;
        case 0x1fbfc0u: goto label_1fbfc0;
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbfc8u: goto label_1fbfc8;
        case 0x1fbfccu: goto label_1fbfcc;
        case 0x1fbfd0u: goto label_1fbfd0;
        case 0x1fbfd4u: goto label_1fbfd4;
        case 0x1fbfd8u: goto label_1fbfd8;
        case 0x1fbfdcu: goto label_1fbfdc;
        case 0x1fbfe0u: goto label_1fbfe0;
        case 0x1fbfe4u: goto label_1fbfe4;
        case 0x1fbfe8u: goto label_1fbfe8;
        case 0x1fbfecu: goto label_1fbfec;
        case 0x1fbff0u: goto label_1fbff0;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fbff8u: goto label_1fbff8;
        case 0x1fbffcu: goto label_1fbffc;
        case 0x1fc000u: goto label_1fc000;
        case 0x1fc004u: goto label_1fc004;
        case 0x1fc008u: goto label_1fc008;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc010u: goto label_1fc010;
        case 0x1fc014u: goto label_1fc014;
        case 0x1fc018u: goto label_1fc018;
        case 0x1fc01cu: goto label_1fc01c;
        case 0x1fc020u: goto label_1fc020;
        case 0x1fc024u: goto label_1fc024;
        case 0x1fc028u: goto label_1fc028;
        case 0x1fc02cu: goto label_1fc02c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc034u: goto label_1fc034;
        case 0x1fc038u: goto label_1fc038;
        case 0x1fc03cu: goto label_1fc03c;
        case 0x1fc040u: goto label_1fc040;
        case 0x1fc044u: goto label_1fc044;
        case 0x1fc048u: goto label_1fc048;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc058u: goto label_1fc058;
        case 0x1fc05cu: goto label_1fc05c;
        case 0x1fc060u: goto label_1fc060;
        case 0x1fc064u: goto label_1fc064;
        case 0x1fc068u: goto label_1fc068;
        case 0x1fc06cu: goto label_1fc06c;
        case 0x1fc070u: goto label_1fc070;
        case 0x1fc074u: goto label_1fc074;
        case 0x1fc078u: goto label_1fc078;
        case 0x1fc07cu: goto label_1fc07c;
        case 0x1fc080u: goto label_1fc080;
        case 0x1fc084u: goto label_1fc084;
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc094u: goto label_1fc094;
        case 0x1fc098u: goto label_1fc098;
        case 0x1fc09cu: goto label_1fc09c;
        case 0x1fc0a0u: goto label_1fc0a0;
        case 0x1fc0a4u: goto label_1fc0a4;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0acu: goto label_1fc0ac;
        case 0x1fc0b0u: goto label_1fc0b0;
        case 0x1fc0b4u: goto label_1fc0b4;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0bcu: goto label_1fc0bc;
        case 0x1fc0c0u: goto label_1fc0c0;
        case 0x1fc0c4u: goto label_1fc0c4;
        case 0x1fc0c8u: goto label_1fc0c8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0d0u: goto label_1fc0d0;
        case 0x1fc0d4u: goto label_1fc0d4;
        case 0x1fc0d8u: goto label_1fc0d8;
        case 0x1fc0dcu: goto label_1fc0dc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0e4u: goto label_1fc0e4;
        case 0x1fc0e8u: goto label_1fc0e8;
        case 0x1fc0ecu: goto label_1fc0ec;
        case 0x1fc0f0u: goto label_1fc0f0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc0f8u: goto label_1fc0f8;
        case 0x1fc0fcu: goto label_1fc0fc;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc104u: goto label_1fc104;
        case 0x1fc108u: goto label_1fc108;
        case 0x1fc10cu: goto label_1fc10c;
        case 0x1fc110u: goto label_1fc110;
        case 0x1fc114u: goto label_1fc114;
        case 0x1fc118u: goto label_1fc118;
        case 0x1fc11cu: goto label_1fc11c;
        case 0x1fc120u: goto label_1fc120;
        case 0x1fc124u: goto label_1fc124;
        case 0x1fc128u: goto label_1fc128;
        case 0x1fc12cu: goto label_1fc12c;
        case 0x1fc130u: goto label_1fc130;
        case 0x1fc134u: goto label_1fc134;
        case 0x1fc138u: goto label_1fc138;
        case 0x1fc13cu: goto label_1fc13c;
        case 0x1fc140u: goto label_1fc140;
        case 0x1fc144u: goto label_1fc144;
        case 0x1fc148u: goto label_1fc148;
        case 0x1fc14cu: goto label_1fc14c;
        case 0x1fc150u: goto label_1fc150;
        case 0x1fc154u: goto label_1fc154;
        case 0x1fc158u: goto label_1fc158;
        case 0x1fc15cu: goto label_1fc15c;
        case 0x1fc160u: goto label_1fc160;
        case 0x1fc164u: goto label_1fc164;
        case 0x1fc168u: goto label_1fc168;
        case 0x1fc16cu: goto label_1fc16c;
        case 0x1fc170u: goto label_1fc170;
        case 0x1fc174u: goto label_1fc174;
        case 0x1fc178u: goto label_1fc178;
        case 0x1fc17cu: goto label_1fc17c;
        case 0x1fc180u: goto label_1fc180;
        case 0x1fc184u: goto label_1fc184;
        case 0x1fc188u: goto label_1fc188;
        case 0x1fc18cu: goto label_1fc18c;
        case 0x1fc190u: goto label_1fc190;
        case 0x1fc194u: goto label_1fc194;
        case 0x1fc198u: goto label_1fc198;
        case 0x1fc19cu: goto label_1fc19c;
        case 0x1fc1a0u: goto label_1fc1a0;
        case 0x1fc1a4u: goto label_1fc1a4;
        case 0x1fc1a8u: goto label_1fc1a8;
        case 0x1fc1acu: goto label_1fc1ac;
        case 0x1fc1b0u: goto label_1fc1b0;
        case 0x1fc1b4u: goto label_1fc1b4;
        case 0x1fc1b8u: goto label_1fc1b8;
        case 0x1fc1bcu: goto label_1fc1bc;
        case 0x1fc1c0u: goto label_1fc1c0;
        case 0x1fc1c4u: goto label_1fc1c4;
        case 0x1fc1c8u: goto label_1fc1c8;
        case 0x1fc1ccu: goto label_1fc1cc;
        case 0x1fc1d0u: goto label_1fc1d0;
        case 0x1fc1d4u: goto label_1fc1d4;
        case 0x1fc1d8u: goto label_1fc1d8;
        case 0x1fc1dcu: goto label_1fc1dc;
        case 0x1fc1e0u: goto label_1fc1e0;
        case 0x1fc1e4u: goto label_1fc1e4;
        case 0x1fc1e8u: goto label_1fc1e8;
        case 0x1fc1ecu: goto label_1fc1ec;
        case 0x1fc1f0u: goto label_1fc1f0;
        case 0x1fc1f4u: goto label_1fc1f4;
        case 0x1fc1f8u: goto label_1fc1f8;
        case 0x1fc1fcu: goto label_1fc1fc;
        case 0x1fc200u: goto label_1fc200;
        case 0x1fc204u: goto label_1fc204;
        case 0x1fc208u: goto label_1fc208;
        case 0x1fc20cu: goto label_1fc20c;
        case 0x1fc210u: goto label_1fc210;
        case 0x1fc214u: goto label_1fc214;
        case 0x1fc218u: goto label_1fc218;
        case 0x1fc21cu: goto label_1fc21c;
        case 0x1fc220u: goto label_1fc220;
        case 0x1fc224u: goto label_1fc224;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc22cu: goto label_1fc22c;
        case 0x1fc230u: goto label_1fc230;
        case 0x1fc234u: goto label_1fc234;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc23cu: goto label_1fc23c;
        case 0x1fc240u: goto label_1fc240;
        case 0x1fc244u: goto label_1fc244;
        case 0x1fc248u: goto label_1fc248;
        case 0x1fc24cu: goto label_1fc24c;
        case 0x1fc250u: goto label_1fc250;
        case 0x1fc254u: goto label_1fc254;
        case 0x1fc258u: goto label_1fc258;
        case 0x1fc25cu: goto label_1fc25c;
        case 0x1fc260u: goto label_1fc260;
        case 0x1fc264u: goto label_1fc264;
        case 0x1fc268u: goto label_1fc268;
        case 0x1fc26cu: goto label_1fc26c;
        case 0x1fc270u: goto label_1fc270;
        case 0x1fc274u: goto label_1fc274;
        case 0x1fc278u: goto label_1fc278;
        case 0x1fc27cu: goto label_1fc27c;
        case 0x1fc280u: goto label_1fc280;
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc288u: goto label_1fc288;
        case 0x1fc28cu: goto label_1fc28c;
        case 0x1fc290u: goto label_1fc290;
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc298u: goto label_1fc298;
        case 0x1fc29cu: goto label_1fc29c;
        case 0x1fc2a0u: goto label_1fc2a0;
        case 0x1fc2a4u: goto label_1fc2a4;
        case 0x1fc2a8u: goto label_1fc2a8;
        case 0x1fc2acu: goto label_1fc2ac;
        case 0x1fc2b0u: goto label_1fc2b0;
        case 0x1fc2b4u: goto label_1fc2b4;
        case 0x1fc2b8u: goto label_1fc2b8;
        case 0x1fc2bcu: goto label_1fc2bc;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc2c4u: goto label_1fc2c4;
        case 0x1fc2c8u: goto label_1fc2c8;
        case 0x1fc2ccu: goto label_1fc2cc;
        case 0x1fc2d0u: goto label_1fc2d0;
        case 0x1fc2d4u: goto label_1fc2d4;
        case 0x1fc2d8u: goto label_1fc2d8;
        case 0x1fc2dcu: goto label_1fc2dc;
        case 0x1fc2e0u: goto label_1fc2e0;
        case 0x1fc2e4u: goto label_1fc2e4;
        case 0x1fc2e8u: goto label_1fc2e8;
        case 0x1fc2ecu: goto label_1fc2ec;
        case 0x1fc2f0u: goto label_1fc2f0;
        case 0x1fc2f4u: goto label_1fc2f4;
        case 0x1fc2f8u: goto label_1fc2f8;
        case 0x1fc2fcu: goto label_1fc2fc;
        case 0x1fc300u: goto label_1fc300;
        case 0x1fc304u: goto label_1fc304;
        case 0x1fc308u: goto label_1fc308;
        case 0x1fc30cu: goto label_1fc30c;
        case 0x1fc310u: goto label_1fc310;
        case 0x1fc314u: goto label_1fc314;
        case 0x1fc318u: goto label_1fc318;
        case 0x1fc31cu: goto label_1fc31c;
        case 0x1fc320u: goto label_1fc320;
        case 0x1fc324u: goto label_1fc324;
        case 0x1fc328u: goto label_1fc328;
        case 0x1fc32cu: goto label_1fc32c;
        case 0x1fc330u: goto label_1fc330;
        case 0x1fc334u: goto label_1fc334;
        case 0x1fc338u: goto label_1fc338;
        case 0x1fc33cu: goto label_1fc33c;
        case 0x1fc340u: goto label_1fc340;
        case 0x1fc344u: goto label_1fc344;
        case 0x1fc348u: goto label_1fc348;
        case 0x1fc34cu: goto label_1fc34c;
        case 0x1fc350u: goto label_1fc350;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc358u: goto label_1fc358;
        case 0x1fc35cu: goto label_1fc35c;
        case 0x1fc360u: goto label_1fc360;
        case 0x1fc364u: goto label_1fc364;
        case 0x1fc368u: goto label_1fc368;
        case 0x1fc36cu: goto label_1fc36c;
        case 0x1fc370u: goto label_1fc370;
        case 0x1fc374u: goto label_1fc374;
        case 0x1fc378u: goto label_1fc378;
        case 0x1fc37cu: goto label_1fc37c;
        case 0x1fc380u: goto label_1fc380;
        case 0x1fc384u: goto label_1fc384;
        case 0x1fc388u: goto label_1fc388;
        case 0x1fc38cu: goto label_1fc38c;
        case 0x1fc390u: goto label_1fc390;
        case 0x1fc394u: goto label_1fc394;
        case 0x1fc398u: goto label_1fc398;
        case 0x1fc39cu: goto label_1fc39c;
        case 0x1fc3a0u: goto label_1fc3a0;
        case 0x1fc3a4u: goto label_1fc3a4;
        case 0x1fc3a8u: goto label_1fc3a8;
        case 0x1fc3acu: goto label_1fc3ac;
        case 0x1fc3b0u: goto label_1fc3b0;
        case 0x1fc3b4u: goto label_1fc3b4;
        case 0x1fc3b8u: goto label_1fc3b8;
        case 0x1fc3bcu: goto label_1fc3bc;
        case 0x1fc3c0u: goto label_1fc3c0;
        case 0x1fc3c4u: goto label_1fc3c4;
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3ccu: goto label_1fc3cc;
        case 0x1fc3d0u: goto label_1fc3d0;
        default: break;
    }

    ctx->pc = 0x1fbb68u;

label_1fbb68:
    // 0x1fbb68: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1fbb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1fbb6c:
    // 0x1fbb6c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1fbb6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbb70:
    // 0x1fbb70: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1fbb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
label_1fbb74:
    // 0x1fbb74: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1fbb78:
    // 0x1fbb78: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x1fbb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
label_1fbb7c:
    // 0x1fbb7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fbb7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fbb80:
    // 0x1fbb80: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1fbb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_1fbb84:
    // 0x1fbb84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fbb84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbb88:
    // 0x1fbb88: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1fbb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_1fbb8c:
    // 0x1fbb8c: 0x25620004  addiu       $v0, $t3, 0x4
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_1fbb90:
    // 0x1fbb90: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x1fbb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_1fbb94:
    // 0x1fbb94: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x1fbb94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1fbb98:
    // 0x1fbb98: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1fbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
label_1fbb9c:
    // 0x1fbb9c: 0x1681823  subu        $v1, $t3, $t0
    ctx->pc = 0x1fbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_1fbba0:
    // 0x1fbba0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1fbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1fbba4:
    // 0x1fbba4: 0x26910028  addiu       $s1, $s4, 0x28
    ctx->pc = 0x1fbba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_1fbba8:
    // 0x1fbba8: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbac:
    // 0x1fbbac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbb0:
    // 0x1fbbb0: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1fbbb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbb4:
    // 0x1fbbb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbb8:
    // 0x1fbbb8: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1fbbb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbbc:
    // 0x1fbbbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbc0:
    // 0x1fbbc0: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x1fbbc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbc4:
    // 0x1fbbc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbc8:
    // 0x1fbbc8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbbc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbcc:
    // 0x1fbbcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbd0:
    // 0x1fbbd0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbbd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbd4:
    // 0x1fbbd4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbd8:
    // 0x1fbbd8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1fbbd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1fbbdc:
    // 0x1fbbdc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbbe0:
    // 0x1fbbe0: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1fbbe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_1fbbe4:
    // 0x1fbbe4: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1fbbe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbbe8:
    // 0x1fbbe8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbbe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbbec:
    // 0x1fbbec: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1fbbecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1fbbf0:
    // 0x1fbbf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbbf4:
    // 0x1fbbf4: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1fbbf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_1fbbf8:
    // 0x1fbbf8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbbfc:
    // 0x1fbbfc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbbfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbc00:
    // 0x1fbc00: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1fbc00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fbc04:
    // 0x1fbc04: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1fbc04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1fbc08:
    // 0x1fbc08: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1fbc08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1fbc0c:
    // 0x1fbc0c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbc10:
    // 0x1fbc10: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1fbc10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_1fbc14:
    // 0x1fbc14: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1fbc14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_1fbc18:
    // 0x1fbc18: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbc18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbc1c:
    // 0x1fbc1c: 0xa94804  sllv        $t1, $t1, $a1
    ctx->pc = 0x1fbc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
label_1fbc20:
    // 0x1fbc20: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1fbc24:
    if (ctx->pc == 0x1FBC24u) {
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC20u;
        // 0x1fbc24: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC28u;
        goto label_1fbc28;
    }
    ctx->pc = 0x1FBC20u;
    {
        const bool branch_taken_0x1fbc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC20u;
        // 0x1fbc24: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc20) {
            ctx->pc = 0x1FBC98u;
            goto label_1fbc98;
        }
    }
    ctx->pc = 0x1FBC28u;
label_1fbc28:
    // 0x1fbc28: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1fbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_1fbc2c:
    // 0x1fbc2c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1fbc30:
    if (ctx->pc == 0x1FBC30u) {
        ctx->pc = 0x1FBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC2Cu;
        // 0x1fbc30: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC34u;
        goto label_1fbc34;
    }
    ctx->pc = 0x1FBC2Cu;
    {
        const bool branch_taken_0x1fbc2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC2Cu;
        // 0x1fbc30: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc2c) {
            ctx->pc = 0x1FBC50u;
            goto label_1fbc50;
        }
    }
    ctx->pc = 0x1FBC34u;
label_1fbc34:
    // 0x1fbc34: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fbc38:
    // 0x1fbc38: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fbc3c:
    // 0x1fbc3c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fbc3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fbc40:
    // 0x1fbc40: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1fbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1fbc44:
    // 0x1fbc44: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fbc44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fbc48:
    // 0x1fbc48: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbc4c:
    if (ctx->pc == 0x1FBC4Cu) {
        ctx->pc = 0x1FBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC48u;
        // 0x1fbc4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC50u;
        goto label_1fbc50;
    }
    ctx->pc = 0x1FBC48u;
    {
        const bool branch_taken_0x1fbc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC48u;
        // 0x1fbc4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc48) {
            ctx->pc = 0x1FBC5Cu;
            goto label_1fbc5c;
        }
    }
    ctx->pc = 0x1FBC50u;
label_1fbc50:
    // 0x1fbc50: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1fbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1fbc54:
    // 0x1fbc54: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbc54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbc58:
    // 0x1fbc58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fbc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fbc5c:
    // 0x1fbc5c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbc5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbc60:
    // 0x1fbc60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbc64:
    // 0x1fbc64: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbc68:
    // 0x1fbc68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbc6c:
    // 0x1fbc6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbc70:
    // 0x1fbc70: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbc74:
    // 0x1fbc74: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbc74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbc78:
    // 0x1fbc78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbc7c:
    // 0x1fbc7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbc80:
    // 0x1fbc80: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbc84:
    // 0x1fbc84: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbc84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbc88:
    // 0x1fbc88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbc8c:
    // 0x1fbc8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbc90:
    // 0x1fbc90: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fbc94:
    if (ctx->pc == 0x1FBC94u) {
        ctx->pc = 0x1FBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC90u;
        // 0x1fbc94: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC98u;
        goto label_1fbc98;
    }
    ctx->pc = 0x1FBC90u;
    {
        const bool branch_taken_0x1fbc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC90u;
        // 0x1fbc94: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc90) {
            ctx->pc = 0x1FBCA8u;
            goto label_1fbca8;
        }
    }
    ctx->pc = 0x1FBC98u;
label_1fbc98:
    // 0x1fbc98: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1fbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1fbc9c:
    // 0x1fbc9c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1fbc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_1fbca0:
    // 0x1fbca0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fbca4:
    // 0x1fbca4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1fbca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1fbca8:
    // 0x1fbca8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbcac:
    // 0x1fbcac: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fbcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fbcb0:
    // 0x1fbcb0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1fbcb4:
    if (ctx->pc == 0x1FBCB4u) {
        ctx->pc = 0x1FBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCB0u;
        // 0x1fbcb4: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBCB8u;
        goto label_1fbcb8;
    }
    ctx->pc = 0x1FBCB0u;
    {
        const bool branch_taken_0x1fbcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbcb0) {
            ctx->pc = 0x1FBCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBCB0u;
            // 0x1fbcb4: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBCF8u;
            goto label_1fbcf8;
        }
    }
    ctx->pc = 0x1FBCB8u;
label_1fbcb8:
    // 0x1fbcb8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fbcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1fbcbc:
    // 0x1fbcbc: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fbcbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fbcc0:
    // 0x1fbcc0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbcc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbcc4:
    // 0x1fbcc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbcc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbcc8:
    // 0x1fbcc8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbcc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbccc:
    // 0x1fbccc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbcccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbcd0:
    // 0x1fbcd0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbcd4:
    // 0x1fbcd4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbcd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbcd8:
    // 0x1fbcd8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbcd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbcdc:
    // 0x1fbcdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbce0:
    // 0x1fbce0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbce4:
    // 0x1fbce4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbce8:
    // 0x1fbce8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbcec:
    // 0x1fbcec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbcecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbcf0:
    // 0x1fbcf0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbcf4:
    // 0x1fbcf4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbcf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbcf8:
    // 0x1fbcf8: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1fbcf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_1fbcfc:
    // 0x1fbcfc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1fbd00:
    if (ctx->pc == 0x1FBD00u) {
        ctx->pc = 0x1FBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCFCu;
        // 0x1fbd00: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD04u;
        goto label_1fbd04;
    }
    ctx->pc = 0x1FBCFCu;
    {
        const bool branch_taken_0x1fbcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCFCu;
        // 0x1fbd00: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcfc) {
            ctx->pc = 0x1FBD78u;
            goto label_1fbd78;
        }
    }
    ctx->pc = 0x1FBD04u;
label_1fbd04:
    // 0x1fbd04: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x1fbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
label_1fbd08:
    // 0x1fbd08: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1fbd0c:
    if (ctx->pc == 0x1FBD0Cu) {
        ctx->pc = 0x1FBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD08u;
        // 0x1fbd0c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD10u;
        goto label_1fbd10;
    }
    ctx->pc = 0x1FBD08u;
    {
        const bool branch_taken_0x1fbd08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD08u;
        // 0x1fbd0c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd08) {
            ctx->pc = 0x1FBD30u;
            goto label_1fbd30;
        }
    }
    ctx->pc = 0x1FBD10u;
label_1fbd10:
    // 0x1fbd10: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fbd14:
    // 0x1fbd14: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fbd18:
    // 0x1fbd18: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fbd18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fbd1c:
    // 0x1fbd1c: 0x91a82  srl         $v1, $t1, 10
    ctx->pc = 0x1fbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_1fbd20:
    // 0x1fbd20: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fbd20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fbd24:
    // 0x1fbd24: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fbd28:
    if (ctx->pc == 0x1FBD28u) {
        ctx->pc = 0x1FBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD24u;
        // 0x1fbd28: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD2Cu;
        goto label_1fbd2c;
    }
    ctx->pc = 0x1FBD24u;
    {
        const bool branch_taken_0x1fbd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD24u;
        // 0x1fbd28: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd24) {
            ctx->pc = 0x1FBD3Cu;
            goto label_1fbd3c;
        }
    }
    ctx->pc = 0x1FBD2Cu;
label_1fbd2c:
    // 0x1fbd2c: 0x0  nop
    ctx->pc = 0x1fbd2cu;
    // NOP
label_1fbd30:
    // 0x1fbd30: 0x91282  srl         $v0, $t1, 10
    ctx->pc = 0x1fbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_1fbd34:
    // 0x1fbd34: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbd34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd38:
    // 0x1fbd38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fbd3c:
    // 0x1fbd3c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbd3cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbd40:
    // 0x1fbd40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbd44:
    // 0x1fbd44: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbd48:
    // 0x1fbd48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbd4c:
    // 0x1fbd4c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbd50:
    // 0x1fbd50: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbd54:
    // 0x1fbd54: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbd54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbd58:
    // 0x1fbd58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbd5c:
    // 0x1fbd5c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbd60:
    // 0x1fbd60: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbd60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbd64:
    // 0x1fbd64: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbd64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbd68:
    // 0x1fbd68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbd6c:
    // 0x1fbd6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbd70:
    // 0x1fbd70: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbd74:
    if (ctx->pc == 0x1FBD74u) {
        ctx->pc = 0x1FBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD70u;
        // 0x1fbd74: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD78u;
        goto label_1fbd78;
    }
    ctx->pc = 0x1FBD70u;
    {
        const bool branch_taken_0x1fbd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD70u;
        // 0x1fbd74: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd70) {
            ctx->pc = 0x1FBD84u;
            goto label_1fbd84;
        }
    }
    ctx->pc = 0x1FBD78u;
label_1fbd78:
    // 0x1fbd78: 0x94d80  sll         $t1, $t1, 22
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_1fbd7c:
    // 0x1fbd7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fbd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fbd80:
    // 0x1fbd80: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x1fbd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
label_1fbd84:
    // 0x1fbd84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbd88:
    // 0x1fbd88: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fbd88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fbd8c:
    // 0x1fbd8c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1fbd90:
    if (ctx->pc == 0x1FBD90u) {
        ctx->pc = 0x1FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD8Cu;
        // 0x1fbd90: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD94u;
        goto label_1fbd94;
    }
    ctx->pc = 0x1FBD8Cu;
    {
        const bool branch_taken_0x1fbd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd8c) {
            ctx->pc = 0x1FBD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD8Cu;
            // 0x1fbd90: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBDD4u;
            goto label_1fbdd4;
        }
    }
    ctx->pc = 0x1FBD94u;
label_1fbd94:
    // 0x1fbd94: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1fbd98:
    // 0x1fbd98: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fbd98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fbd9c:
    // 0x1fbd9c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbd9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbda0:
    // 0x1fbda0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbda0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbda4:
    // 0x1fbda4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbda8:
    // 0x1fbda8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbdac:
    // 0x1fbdac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbdb0:
    // 0x1fbdb0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbdb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbdb4:
    // 0x1fbdb4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbdb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbdb8:
    // 0x1fbdb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbdbc:
    // 0x1fbdbc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbdc0:
    // 0x1fbdc0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbdc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbdc4:
    // 0x1fbdc4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbdc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbdc8:
    // 0x1fbdc8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbdcc:
    // 0x1fbdcc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbdccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbdd0:
    // 0x1fbdd0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbdd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbdd4:
    // 0x1fbdd4: 0x28a2001a  slti        $v0, $a1, 0x1A
    ctx->pc = 0x1fbdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_1fbdd8:
    // 0x1fbdd8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1fbddc:
    if (ctx->pc == 0x1FBDDCu) {
        ctx->pc = 0x1FBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDD8u;
        // 0x1fbddc: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDE0u;
        goto label_1fbde0;
    }
    ctx->pc = 0x1FBDD8u;
    {
        const bool branch_taken_0x1fbdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDD8u;
        // 0x1fbddc: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdd8) {
            ctx->pc = 0x1FBE50u;
            goto label_1fbe50;
        }
    }
    ctx->pc = 0x1FBDE0u;
label_1fbde0:
    // 0x1fbde0: 0x24a5ffe6  addiu       $a1, $a1, -0x1A
    ctx->pc = 0x1fbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967270));
label_1fbde4:
    // 0x1fbde4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1fbde8:
    if (ctx->pc == 0x1FBDE8u) {
        ctx->pc = 0x1FBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDE4u;
        // 0x1fbde8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDECu;
        goto label_1fbdec;
    }
    ctx->pc = 0x1FBDE4u;
    {
        const bool branch_taken_0x1fbde4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDE4u;
        // 0x1fbde8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbde4) {
            ctx->pc = 0x1FBE08u;
            goto label_1fbe08;
        }
    }
    ctx->pc = 0x1FBDECu;
label_1fbdec:
    // 0x1fbdec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fbdf0:
    // 0x1fbdf0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fbdf4:
    // 0x1fbdf4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fbdf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fbdf8:
    // 0x1fbdf8: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1fbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_1fbdfc:
    // 0x1fbdfc: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fbdfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fbe00:
    // 0x1fbe00: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbe04:
    if (ctx->pc == 0x1FBE04u) {
        ctx->pc = 0x1FBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE00u;
        // 0x1fbe04: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE08u;
        goto label_1fbe08;
    }
    ctx->pc = 0x1FBE00u;
    {
        const bool branch_taken_0x1fbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE00u;
        // 0x1fbe04: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe00) {
            ctx->pc = 0x1FBE14u;
            goto label_1fbe14;
        }
    }
    ctx->pc = 0x1FBE08u;
label_1fbe08:
    // 0x1fbe08: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1fbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_1fbe0c:
    // 0x1fbe0c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbe0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe10:
    // 0x1fbe10: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1fbe10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1fbe14:
    // 0x1fbe14: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbe14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe18:
    // 0x1fbe18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe1c:
    // 0x1fbe1c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbe1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe20:
    // 0x1fbe20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe24:
    // 0x1fbe24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbe24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbe28:
    // 0x1fbe28: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbe28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe2c:
    // 0x1fbe2c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbe2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbe30:
    // 0x1fbe30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe34:
    // 0x1fbe34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbe34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbe38:
    // 0x1fbe38: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbe38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe3c:
    // 0x1fbe3c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbe3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbe40:
    // 0x1fbe40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe44:
    // 0x1fbe44: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbe44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbe48:
    // 0x1fbe48: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbe4c:
    if (ctx->pc == 0x1FBE4Cu) {
        ctx->pc = 0x1FBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE48u;
        // 0x1fbe4c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE50u;
        goto label_1fbe50;
    }
    ctx->pc = 0x1FBE48u;
    {
        const bool branch_taken_0x1fbe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE48u;
        // 0x1fbe4c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe48) {
            ctx->pc = 0x1FBE5Cu;
            goto label_1fbe5c;
        }
    }
    ctx->pc = 0x1FBE50u;
label_1fbe50:
    // 0x1fbe50: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1fbe50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1fbe54:
    // 0x1fbe54: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1fbe54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1fbe58:
    // 0x1fbe58: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1fbe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1fbe5c:
    // 0x1fbe5c: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1fbe60:
    // 0x1fbe60: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fbe64:
    // 0x1fbe64: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_1fbe68:
    if (ctx->pc == 0x1FBE68u) {
        ctx->pc = 0x1FBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE64u;
        // 0x1fbe68: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE6Cu;
        goto label_1fbe6c;
    }
    ctx->pc = 0x1FBE64u;
    {
        const bool branch_taken_0x1fbe64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE64u;
        // 0x1fbe68: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe64) {
            ctx->pc = 0x1FBEB0u;
            goto label_1fbeb0;
        }
    }
    ctx->pc = 0x1FBE6Cu;
label_1fbe6c:
    // 0x1fbe6c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbe6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe70:
    // 0x1fbe70: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbe70u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe74:
    // 0x1fbe74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe78:
    // 0x1fbe78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe7c:
    // 0x1fbe7c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbe7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe80:
    // 0x1fbe80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe84:
    // 0x1fbe84: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbe84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbe88:
    // 0x1fbe88: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbe88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe8c:
    // 0x1fbe8c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbe8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbe90:
    // 0x1fbe90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbe94:
    // 0x1fbe94: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbe94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbe98:
    // 0x1fbe98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbe98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe9c:
    // 0x1fbe9c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbe9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbea0:
    // 0x1fbea0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbea4:
    // 0x1fbea4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbea4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbea8:
    // 0x1fbea8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fbeac:
    if (ctx->pc == 0x1FBEACu) {
        ctx->pc = 0x1FBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEA8u;
        // 0x1fbeac: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBEB0u;
        goto label_1fbeb0;
    }
    ctx->pc = 0x1FBEA8u;
    {
        const bool branch_taken_0x1fbea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEA8u;
        // 0x1fbeac: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbea8) {
            ctx->pc = 0x1FBEB8u;
            goto label_1fbeb8;
        }
    }
    ctx->pc = 0x1FBEB0u;
label_1fbeb0:
    // 0x1fbeb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbeb4:
    // 0x1fbeb4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fbeb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1fbeb8:
    // 0x1fbeb8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1fbebc:
    // 0x1fbebc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fbec0:
    // 0x1fbec0: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1fbec4:
    if (ctx->pc == 0x1FBEC4u) {
        ctx->pc = 0x1FBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEC0u;
        // 0x1fbec4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBEC8u;
        goto label_1fbec8;
    }
    ctx->pc = 0x1FBEC0u;
    {
        const bool branch_taken_0x1fbec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEC0u;
        // 0x1fbec4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbec0) {
            ctx->pc = 0x1FBF10u;
            goto label_1fbf10;
        }
    }
    ctx->pc = 0x1FBEC8u;
label_1fbec8:
    // 0x1fbec8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbecc:
    // 0x1fbecc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbeccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbed0:
    // 0x1fbed0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbed4:
    // 0x1fbed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbed8:
    // 0x1fbed8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbedc:
    // 0x1fbedc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbee0:
    // 0x1fbee0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbee4:
    // 0x1fbee4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbee8:
    // 0x1fbee8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbeec:
    // 0x1fbeec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbef0:
    // 0x1fbef0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbef0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbef4:
    // 0x1fbef4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbef8:
    // 0x1fbef8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbefc:
    // 0x1fbefc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbf00:
    // 0x1fbf00: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbf04:
    // 0x1fbf04: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbf08:
    if (ctx->pc == 0x1FBF08u) {
        ctx->pc = 0x1FBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF04u;
        // 0x1fbf08: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF0Cu;
        goto label_1fbf0c;
    }
    ctx->pc = 0x1FBF04u;
    {
        const bool branch_taken_0x1fbf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF04u;
        // 0x1fbf08: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf04) {
            ctx->pc = 0x1FBF18u;
            goto label_1fbf18;
        }
    }
    ctx->pc = 0x1FBF0Cu;
label_1fbf0c:
    // 0x1fbf0c: 0x0  nop
    ctx->pc = 0x1fbf0cu;
    // NOP
label_1fbf10:
    // 0x1fbf10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbf14:
    // 0x1fbf14: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fbf14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1fbf18:
    // 0x1fbf18: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1fbf1c:
    // 0x1fbf1c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fbf20:
    // 0x1fbf20: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1fbf24:
    if (ctx->pc == 0x1FBF24u) {
        ctx->pc = 0x1FBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF20u;
        // 0x1fbf24: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF28u;
        goto label_1fbf28;
    }
    ctx->pc = 0x1FBF20u;
    {
        const bool branch_taken_0x1fbf20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF20u;
        // 0x1fbf24: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf20) {
            ctx->pc = 0x1FBF70u;
            goto label_1fbf70;
        }
    }
    ctx->pc = 0x1FBF28u;
label_1fbf28:
    // 0x1fbf28: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbf28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf2c:
    // 0x1fbf2c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbf2cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbf30:
    // 0x1fbf30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbf30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbf34:
    // 0x1fbf34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf38:
    // 0x1fbf38: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbf38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbf3c:
    // 0x1fbf3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbf40:
    // 0x1fbf40: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbf40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbf44:
    // 0x1fbf44: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbf44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbf48:
    // 0x1fbf48: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbf48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbf4c:
    // 0x1fbf4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbf50:
    // 0x1fbf50: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbf50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbf54:
    // 0x1fbf54: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbf58:
    // 0x1fbf58: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbf58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbf5c:
    // 0x1fbf5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbf60:
    // 0x1fbf60: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbf64:
    // 0x1fbf64: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbf68:
    if (ctx->pc == 0x1FBF68u) {
        ctx->pc = 0x1FBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF64u;
        // 0x1fbf68: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF6Cu;
        goto label_1fbf6c;
    }
    ctx->pc = 0x1FBF64u;
    {
        const bool branch_taken_0x1fbf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF64u;
        // 0x1fbf68: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf64) {
            ctx->pc = 0x1FBF78u;
            goto label_1fbf78;
        }
    }
    ctx->pc = 0x1FBF6Cu;
label_1fbf6c:
    // 0x1fbf6c: 0x0  nop
    ctx->pc = 0x1fbf6cu;
    // NOP
label_1fbf70:
    // 0x1fbf70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbf74:
    // 0x1fbf74: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fbf74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1fbf78:
    // 0x1fbf78: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1fbf7c:
    // 0x1fbf7c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fbf80:
    // 0x1fbf80: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1fbf84:
    if (ctx->pc == 0x1FBF84u) {
        ctx->pc = 0x1FBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF80u;
        // 0x1fbf84: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF88u;
        goto label_1fbf88;
    }
    ctx->pc = 0x1FBF80u;
    {
        const bool branch_taken_0x1fbf80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF80u;
        // 0x1fbf84: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf80) {
            ctx->pc = 0x1FBFD0u;
            goto label_1fbfd0;
        }
    }
    ctx->pc = 0x1FBF88u;
label_1fbf88:
    // 0x1fbf88: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fbf88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf8c:
    // 0x1fbf8c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbf8cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbf90:
    // 0x1fbf90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbf94:
    // 0x1fbf94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf98:
    // 0x1fbf98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbf98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbf9c:
    // 0x1fbf9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbf9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbfa0:
    // 0x1fbfa0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbfa4:
    // 0x1fbfa4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fbfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbfa8:
    // 0x1fbfa8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fbfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fbfac:
    // 0x1fbfac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbfb0:
    // 0x1fbfb0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbfb4:
    // 0x1fbfb4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbfb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbfb8:
    // 0x1fbfb8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fbfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fbfbc:
    // 0x1fbfbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbfbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbfc0:
    // 0x1fbfc0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fbfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fbfc4:
    // 0x1fbfc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fbfc8:
    if (ctx->pc == 0x1FBFC8u) {
        ctx->pc = 0x1FBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFC4u;
        // 0x1fbfc8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBFCCu;
        goto label_1fbfcc;
    }
    ctx->pc = 0x1FBFC4u;
    {
        const bool branch_taken_0x1fbfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFC4u;
        // 0x1fbfc8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfc4) {
            ctx->pc = 0x1FBFD8u;
            goto label_1fbfd8;
        }
    }
    ctx->pc = 0x1FBFCCu;
label_1fbfcc:
    // 0x1fbfcc: 0x0  nop
    ctx->pc = 0x1fbfccu;
    // NOP
label_1fbfd0:
    // 0x1fbfd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbfd4:
    // 0x1fbfd4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fbfd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1fbfd8:
    // 0x1fbfd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fbfdc:
    // 0x1fbfdc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fbfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fbfe0:
    // 0x1fbfe0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1fbfe4:
    if (ctx->pc == 0x1FBFE4u) {
        ctx->pc = 0x1FBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFE0u;
        // 0x1fbfe4: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBFE8u;
        goto label_1fbfe8;
    }
    ctx->pc = 0x1FBFE0u;
    {
        const bool branch_taken_0x1fbfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbfe0) {
            ctx->pc = 0x1FBFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBFE0u;
            // 0x1fbfe4: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC028u;
            goto label_1fc028;
        }
    }
    ctx->pc = 0x1FBFE8u;
label_1fbfe8:
    // 0x1fbfe8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1fbfec:
    // 0x1fbfec: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fbfecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fbff0:
    // 0x1fbff0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fbff0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbff4:
    // 0x1fbff4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fbff8:
    // 0x1fbff8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fbff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbffc:
    // 0x1fbffc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fbffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc000:
    // 0x1fc000: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc000u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc004:
    // 0x1fc004: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc008:
    // 0x1fc008: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc00c:
    // 0x1fc00c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc010:
    // 0x1fc010: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc010u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc014:
    // 0x1fc014: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc018:
    // 0x1fc018: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc01c:
    // 0x1fc01c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc020:
    // 0x1fc020: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc024:
    // 0x1fc024: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc028:
    // 0x1fc028: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x1fc028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
label_1fc02c:
    // 0x1fc02c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1fc030:
    if (ctx->pc == 0x1FC030u) {
        ctx->pc = 0x1FC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC02Cu;
        // 0x1fc030: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC034u;
        goto label_1fc034;
    }
    ctx->pc = 0x1FC02Cu;
    {
        const bool branch_taken_0x1fc02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC02Cu;
        // 0x1fc030: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc02c) {
            ctx->pc = 0x1FC0A8u;
            goto label_1fc0a8;
        }
    }
    ctx->pc = 0x1FC034u;
label_1fc034:
    // 0x1fc034: 0x24a5ffe5  addiu       $a1, $a1, -0x1B
    ctx->pc = 0x1fc034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967269));
label_1fc038:
    // 0x1fc038: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1fc03c:
    if (ctx->pc == 0x1FC03Cu) {
        ctx->pc = 0x1FC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC038u;
        // 0x1fc03c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC040u;
        goto label_1fc040;
    }
    ctx->pc = 0x1FC038u;
    {
        const bool branch_taken_0x1fc038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC038u;
        // 0x1fc03c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc038) {
            ctx->pc = 0x1FC060u;
            goto label_1fc060;
        }
    }
    ctx->pc = 0x1FC040u;
label_1fc040:
    // 0x1fc040: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fc040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fc044:
    // 0x1fc044: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fc044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fc048:
    // 0x1fc048: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fc048u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fc04c:
    // 0x1fc04c: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x1fc04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_1fc050:
    // 0x1fc050: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fc054:
    // 0x1fc054: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fc058:
    if (ctx->pc == 0x1FC058u) {
        ctx->pc = 0x1FC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC054u;
        // 0x1fc058: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC05Cu;
        goto label_1fc05c;
    }
    ctx->pc = 0x1FC054u;
    {
        const bool branch_taken_0x1fc054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC054u;
        // 0x1fc058: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc054) {
            ctx->pc = 0x1FC06Cu;
            goto label_1fc06c;
        }
    }
    ctx->pc = 0x1FC05Cu;
label_1fc05c:
    // 0x1fc05c: 0x0  nop
    ctx->pc = 0x1fc05cu;
    // NOP
label_1fc060:
    // 0x1fc060: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x1fc060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_1fc064:
    // 0x1fc064: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fc064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc068:
    // 0x1fc068: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1fc068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1fc06c:
    // 0x1fc06c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fc06cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc070:
    // 0x1fc070: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc074:
    // 0x1fc074: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc078:
    // 0x1fc078: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc07c:
    // 0x1fc07c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc07cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc080:
    // 0x1fc080: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc084:
    // 0x1fc084: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc088:
    // 0x1fc088: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc08c:
    // 0x1fc08c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc090:
    // 0x1fc090: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc094:
    // 0x1fc094: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc098:
    // 0x1fc098: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc09c:
    // 0x1fc09c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc09cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc0a0:
    // 0x1fc0a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fc0a4:
    if (ctx->pc == 0x1FC0A4u) {
        ctx->pc = 0x1FC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0A0u;
        // 0x1fc0a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0A8u;
        goto label_1fc0a8;
    }
    ctx->pc = 0x1FC0A0u;
    {
        const bool branch_taken_0x1fc0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0A0u;
        // 0x1fc0a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0a0) {
            ctx->pc = 0x1FC0B4u;
            goto label_1fc0b4;
        }
    }
    ctx->pc = 0x1FC0A8u;
label_1fc0a8:
    // 0x1fc0a8: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1fc0ac:
    // 0x1fc0ac: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1fc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1fc0b0:
    // 0x1fc0b0: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x1fc0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1fc0b4:
    // 0x1fc0b4: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1fc0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_1fc0b8:
    // 0x1fc0b8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1fc0bc:
    if (ctx->pc == 0x1FC0BCu) {
        ctx->pc = 0x1FC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0B8u;
        // 0x1fc0bc: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0C0u;
        goto label_1fc0c0;
    }
    ctx->pc = 0x1FC0B8u;
    {
        const bool branch_taken_0x1fc0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0B8u;
        // 0x1fc0bc: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0b8) {
            ctx->pc = 0x1FC128u;
            goto label_1fc128;
        }
    }
    ctx->pc = 0x1FC0C0u;
label_1fc0c0:
    // 0x1fc0c0: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_1fc0c4:
    // 0x1fc0c4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1fc0c8:
    if (ctx->pc == 0x1FC0C8u) {
        ctx->pc = 0x1FC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0C4u;
        // 0x1fc0c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0CCu;
        goto label_1fc0cc;
    }
    ctx->pc = 0x1FC0C4u;
    {
        const bool branch_taken_0x1fc0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0C4u;
        // 0x1fc0c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0c4) {
            ctx->pc = 0x1FC0E8u;
            goto label_1fc0e8;
        }
    }
    ctx->pc = 0x1FC0CCu;
label_1fc0cc:
    // 0x1fc0cc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fc0d0:
    // 0x1fc0d0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fc0d4:
    // 0x1fc0d4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fc0d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fc0d8:
    // 0x1fc0d8: 0x99602  srl         $s2, $t1, 24
    ctx->pc = 0x1fc0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_1fc0dc:
    // 0x1fc0dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fc0e0:
    if (ctx->pc == 0x1FC0E0u) {
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0E4u;
        goto label_1fc0e4;
    }
    ctx->pc = 0x1FC0DCu;
    {
        const bool branch_taken_0x1fc0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0dc) {
            ctx->pc = 0x1FC0ECu;
            goto label_1fc0ec;
        }
    }
    ctx->pc = 0x1FC0E4u;
label_1fc0e4:
    // 0x1fc0e4: 0x0  nop
    ctx->pc = 0x1fc0e4u;
    // NOP
label_1fc0e8:
    // 0x1fc0e8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fc0e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0ec:
    // 0x1fc0ec: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fc0ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc0f0:
    // 0x1fc0f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc0f4:
    // 0x1fc0f4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc0f8:
    // 0x1fc0f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc0fc:
    // 0x1fc0fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc100:
    // 0x1fc100: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc104:
    // 0x1fc104: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc108:
    // 0x1fc108: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc10c:
    // 0x1fc10c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc10cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc110:
    // 0x1fc110: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc114:
    // 0x1fc114: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc118:
    // 0x1fc118: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc11c:
    // 0x1fc11c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc11cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc120:
    // 0x1fc120: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fc124:
    if (ctx->pc == 0x1FC124u) {
        ctx->pc = 0x1FC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC120u;
        // 0x1fc124: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC128u;
        goto label_1fc128;
    }
    ctx->pc = 0x1FC120u;
    {
        const bool branch_taken_0x1fc120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC120u;
        // 0x1fc124: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc120) {
            ctx->pc = 0x1FC130u;
            goto label_1fc130;
        }
    }
    ctx->pc = 0x1FC128u;
label_1fc128:
    // 0x1fc128: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1fc128u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1fc12c:
    // 0x1fc12c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1fc12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1fc130:
    // 0x1fc130: 0x5210078  bgez        $t1, . + 4 + (0x78 << 2)
label_1fc134:
    if (ctx->pc == 0x1FC134u) {
        ctx->pc = 0x1FC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC130u;
        // 0x1fc134: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC138u;
        goto label_1fc138;
    }
    ctx->pc = 0x1FC130u;
    {
        const bool branch_taken_0x1fc130 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x1FC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC130u;
        // 0x1fc134: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc130) {
            ctx->pc = 0x1FC314u;
            goto label_1fc314;
        }
    }
    ctx->pc = 0x1FC138u;
label_1fc138:
    // 0x1fc138: 0x27ac0002  addiu       $t4, $sp, 0x2
    ctx->pc = 0x1fc138u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_1fc13c:
    // 0x1fc13c: 0x0  nop
    ctx->pc = 0x1fc13cu;
    // NOP
label_1fc140:
    // 0x1fc140: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1fc140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_1fc144:
    // 0x1fc144: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1fc148:
    if (ctx->pc == 0x1FC148u) {
        ctx->pc = 0x1FC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC144u;
        // 0x1fc148: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC14Cu;
        goto label_1fc14c;
    }
    ctx->pc = 0x1FC144u;
    {
        const bool branch_taken_0x1fc144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC144u;
        // 0x1fc148: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc144) {
            ctx->pc = 0x1FC1B0u;
            goto label_1fc1b0;
        }
    }
    ctx->pc = 0x1FC14Cu;
label_1fc14c:
    // 0x1fc14c: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_1fc150:
    // 0x1fc150: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1fc154:
    if (ctx->pc == 0x1FC154u) {
        ctx->pc = 0x1FC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC150u;
        // 0x1fc154: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC158u;
        goto label_1fc158;
    }
    ctx->pc = 0x1FC150u;
    {
        const bool branch_taken_0x1fc150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC150u;
        // 0x1fc154: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc150) {
            ctx->pc = 0x1FC170u;
            goto label_1fc170;
        }
    }
    ctx->pc = 0x1FC158u;
label_1fc158:
    // 0x1fc158: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fc15c:
    // 0x1fc15c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fc160:
    // 0x1fc160: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fc160u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fc164:
    // 0x1fc164: 0x93602  srl         $a2, $t1, 24
    ctx->pc = 0x1fc164u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_1fc168:
    // 0x1fc168: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fc16c:
    if (ctx->pc == 0x1FC16Cu) {
        ctx->pc = 0x1FC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC168u;
        // 0x1fc16c: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC170u;
        goto label_1fc170;
    }
    ctx->pc = 0x1FC168u;
    {
        const bool branch_taken_0x1fc168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC168u;
        // 0x1fc16c: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc168) {
            ctx->pc = 0x1FC174u;
            goto label_1fc174;
        }
    }
    ctx->pc = 0x1FC170u;
label_1fc170:
    // 0x1fc170: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fc170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc174:
    // 0x1fc174: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fc174u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc178:
    // 0x1fc178: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc17c:
    // 0x1fc17c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc180:
    // 0x1fc180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc184:
    // 0x1fc184: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc184u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc188:
    // 0x1fc188: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc18c:
    // 0x1fc18c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc18cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc190:
    // 0x1fc190: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc194:
    // 0x1fc194: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc198:
    // 0x1fc198: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc19c:
    // 0x1fc19c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc19cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc1a0:
    // 0x1fc1a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc1a4:
    // 0x1fc1a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc1a8:
    // 0x1fc1a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fc1ac:
    if (ctx->pc == 0x1FC1ACu) {
        ctx->pc = 0x1FC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A8u;
        // 0x1fc1ac: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC1B0u;
        goto label_1fc1b0;
    }
    ctx->pc = 0x1FC1A8u;
    {
        const bool branch_taken_0x1fc1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A8u;
        // 0x1fc1ac: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1a8) {
            ctx->pc = 0x1FC1B8u;
            goto label_1fc1b8;
        }
    }
    ctx->pc = 0x1FC1B0u;
label_1fc1b0:
    // 0x1fc1b0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1fc1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1fc1b4:
    // 0x1fc1b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1fc1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1fc1b8:
    // 0x1fc1b8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1fc1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1fc1bc:
    // 0x1fc1bc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fc1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fc1c0:
    // 0x1fc1c0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1fc1c4:
    if (ctx->pc == 0x1FC1C4u) {
        ctx->pc = 0x1FC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1C0u;
        // 0x1fc1c4: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC1C8u;
        goto label_1fc1c8;
    }
    ctx->pc = 0x1FC1C0u;
    {
        const bool branch_taken_0x1fc1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1c0) {
            ctx->pc = 0x1FC1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1C0u;
            // 0x1fc1c4: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC208u;
            goto label_1fc208;
        }
    }
    ctx->pc = 0x1FC1C8u;
label_1fc1c8:
    // 0x1fc1c8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1fc1cc:
    // 0x1fc1cc: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1fc1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1fc1d0:
    // 0x1fc1d0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc1d4:
    // 0x1fc1d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc1d8:
    // 0x1fc1d8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc1dc:
    // 0x1fc1dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc1e0:
    // 0x1fc1e0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc1e4:
    // 0x1fc1e4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc1e8:
    // 0x1fc1e8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc1ec:
    // 0x1fc1ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc1f0:
    // 0x1fc1f0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc1f4:
    // 0x1fc1f4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc1f8:
    // 0x1fc1f8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc1fc:
    // 0x1fc1fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc200:
    // 0x1fc200: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc204:
    // 0x1fc204: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc208:
    // 0x1fc208: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fc208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fc20c:
    // 0x1fc20c: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
label_1fc210:
    if (ctx->pc == 0x1FC210u) {
        ctx->pc = 0x1FC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC20Cu;
        // 0x1fc210: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC214u;
        goto label_1fc214;
    }
    ctx->pc = 0x1FC20Cu;
    {
        const bool branch_taken_0x1fc20c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC20Cu;
        // 0x1fc210: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc20c) {
            ctx->pc = 0x1FC258u;
            goto label_1fc258;
        }
    }
    ctx->pc = 0x1FC214u;
label_1fc214:
    // 0x1fc214: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fc214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc218:
    // 0x1fc218: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc21c:
    // 0x1fc21c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc21cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc220:
    // 0x1fc220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc224:
    // 0x1fc224: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc228:
    // 0x1fc228: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc22c:
    // 0x1fc22c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc22cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc230:
    // 0x1fc230: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc234:
    // 0x1fc234: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc238:
    // 0x1fc238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc23c:
    // 0x1fc23c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc23cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc240:
    // 0x1fc240: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc244:
    // 0x1fc244: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc248:
    // 0x1fc248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc24c:
    // 0x1fc24c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc24cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc250:
    // 0x1fc250: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fc254:
    if (ctx->pc == 0x1FC254u) {
        ctx->pc = 0x1FC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC250u;
        // 0x1fc254: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC258u;
        goto label_1fc258;
    }
    ctx->pc = 0x1FC250u;
    {
        const bool branch_taken_0x1fc250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC250u;
        // 0x1fc254: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc250) {
            ctx->pc = 0x1FC260u;
            goto label_1fc260;
        }
    }
    ctx->pc = 0x1FC258u;
label_1fc258:
    // 0x1fc258: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fc258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fc25c:
    // 0x1fc25c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1fc260:
    // 0x1fc260: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x1fc260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_1fc264:
    // 0x1fc264: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1fc268:
    if (ctx->pc == 0x1FC268u) {
        ctx->pc = 0x1FC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC264u;
        // 0x1fc268: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC26Cu;
        goto label_1fc26c;
    }
    ctx->pc = 0x1FC264u;
    {
        const bool branch_taken_0x1fc264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC264u;
        // 0x1fc268: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc264) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC26Cu;
label_1fc26c:
    // 0x1fc26c: 0x24a5ffed  addiu       $a1, $a1, -0x13
    ctx->pc = 0x1fc26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967277));
label_1fc270:
    // 0x1fc270: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1fc274:
    if (ctx->pc == 0x1FC274u) {
        ctx->pc = 0x1FC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC270u;
        // 0x1fc274: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC278u;
        goto label_1fc278;
    }
    ctx->pc = 0x1FC270u;
    {
        const bool branch_taken_0x1fc270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC270u;
        // 0x1fc274: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc270) {
            ctx->pc = 0x1FC290u;
            goto label_1fc290;
        }
    }
    ctx->pc = 0x1FC278u;
label_1fc278:
    // 0x1fc278: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fc27c:
    // 0x1fc27c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1fc280:
    // 0x1fc280: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fc280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1fc284:
    // 0x1fc284: 0x924c2  srl         $a0, $t1, 19
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
label_1fc288:
    // 0x1fc288: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fc28c:
    if (ctx->pc == 0x1FC28Cu) {
        ctx->pc = 0x1FC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC288u;
        // 0x1fc28c: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC290u;
        goto label_1fc290;
    }
    ctx->pc = 0x1FC288u;
    {
        const bool branch_taken_0x1fc288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC288u;
        // 0x1fc28c: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc288) {
            ctx->pc = 0x1FC294u;
            goto label_1fc294;
        }
    }
    ctx->pc = 0x1FC290u;
label_1fc290:
    // 0x1fc290: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fc290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc294:
    // 0x1fc294: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc298:
    // 0x1fc298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc29c:
    // 0x1fc29c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc2a0:
    // 0x1fc2a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc2a4:
    // 0x1fc2a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc2a8:
    // 0x1fc2a8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fc2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc2ac:
    // 0x1fc2ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fc2acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fc2b0:
    // 0x1fc2b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc2b4:
    // 0x1fc2b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc2b8:
    // 0x1fc2b8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fc2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fc2bc:
    // 0x1fc2bc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fc2bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1fc2c0:
    // 0x1fc2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fc2c4:
    // 0x1fc2c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fc2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1fc2c8:
    // 0x1fc2c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fc2cc:
    if (ctx->pc == 0x1FC2CCu) {
        ctx->pc = 0x1FC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C8u;
        // 0x1fc2cc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2D0u;
        goto label_1fc2d0;
    }
    ctx->pc = 0x1FC2C8u;
    {
        const bool branch_taken_0x1fc2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C8u;
        // 0x1fc2cc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2c8) {
            ctx->pc = 0x1FC2D8u;
            goto label_1fc2d8;
        }
    }
    ctx->pc = 0x1FC2D0u;
label_1fc2d0:
    // 0x1fc2d0: 0x94b40  sll         $t1, $t1, 13
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_1fc2d4:
    // 0x1fc2d4: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_1fc2d8:
    // 0x1fc2d8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1fc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1fc2dc:
    // 0x1fc2dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc2e0:
    // 0x1fc2e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1fc2e4:
    // 0x1fc2e4: 0xa0460010  sb          $a2, 0x10($v0)
    ctx->pc = 0x1fc2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
label_1fc2e8:
    // 0x1fc2e8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1fc2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1fc2ec:
    // 0x1fc2ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc2f0:
    // 0x1fc2f0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1fc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1fc2f4:
    // 0x1fc2f4: 0xa06a0011  sb          $t2, 0x11($v1)
    ctx->pc = 0x1fc2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 10));
label_1fc2f8:
    // 0x1fc2f8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1fc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1fc2fc:
    // 0x1fc2fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc300:
    // 0x1fc300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fc304:
    // 0x1fc304: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_1fc308:
    // 0x1fc308: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1fc308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1fc30c:
    // 0x1fc30c: 0x520ff8c  bltz        $t1, . + 4 + (-0x74 << 2)
label_1fc310:
    if (ctx->pc == 0x1FC310u) {
        ctx->pc = 0x1FC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC30Cu;
        // 0x1fc310: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC314u;
        goto label_1fc314;
    }
    ctx->pc = 0x1FC30Cu;
    {
        const bool branch_taken_0x1fc30c = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x1FC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC30Cu;
        // 0x1fc310: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc30c) {
            ctx->pc = 0x1FC140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc140;
        }
    }
    ctx->pc = 0x1FC314u;
label_1fc314:
    // 0x1fc314: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1fc314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1fc318:
    // 0x1fc318: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1fc318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1fc31c:
    // 0x1fc31c: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x1fc31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1fc320:
    // 0x1fc320: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1fc324:
    // 0x1fc324: 0x8b1023  subu        $v0, $a0, $t3
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1fc328:
    // 0x1fc328: 0xc07f410  jal         func_1FD040
label_1fc32c:
    if (ctx->pc == 0x1FC32Cu) {
        ctx->pc = 0x1FC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC328u;
        // 0x1fc32c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC330u;
        goto label_1fc330;
    }
    ctx->pc = 0x1FC328u;
    SET_GPR_U32(ctx, 31, 0x1FC330u);
    ctx->pc = 0x1FC32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC328u;
    // 0x1fc32c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x1FC328u, 0x1FC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC330u;
label_1fc330:
    // 0x1fc330: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1fc334:
    if (ctx->pc == 0x1FC334u) {
        ctx->pc = 0x1FC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC330u;
        // 0x1fc334: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC338u;
        goto label_1fc338;
    }
    ctx->pc = 0x1FC330u;
    {
        const bool branch_taken_0x1fc330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc330) {
            ctx->pc = 0x1FC334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC330u;
            // 0x1fc334: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC35Cu;
            goto label_1fc35c;
        }
    }
    ctx->pc = 0x1FC338u;
label_1fc338:
    // 0x1fc338: 0xc07f410  jal         func_1FD040
label_1fc33c:
    if (ctx->pc == 0x1FC33Cu) {
        ctx->pc = 0x1FC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC338u;
        // 0x1fc33c: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC340u;
        goto label_1fc340;
    }
    ctx->pc = 0x1FC338u;
    SET_GPR_U32(ctx, 31, 0x1FC340u);
    ctx->pc = 0x1FC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC338u;
    // 0x1fc33c: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x1FC338u, 0x1FC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC340u;
label_1fc340:
    // 0x1fc340: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1fc344:
    // 0x1fc344: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1fc348:
    if (ctx->pc == 0x1FC348u) {
        ctx->pc = 0x1FC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC344u;
        // 0x1fc348: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC34Cu;
        goto label_1fc34c;
    }
    ctx->pc = 0x1FC344u;
    {
        const bool branch_taken_0x1fc344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fc344) {
            ctx->pc = 0x1FC348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC344u;
            // 0x1fc348: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC35Cu;
            goto label_1fc35c;
        }
    }
    ctx->pc = 0x1FC34Cu;
label_1fc34c:
    // 0x1fc34c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fc350:
    // 0x1fc350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fc354:
    // 0x1fc354: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fc354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1fc358:
    // 0x1fc358: 0x8e8c00e4  lw          $t4, 0xE4($s4)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1fc35c:
    // 0x1fc35c: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
label_1fc360:
    if (ctx->pc == 0x1FC360u) {
        ctx->pc = 0x1FC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC35Cu;
        // 0x1fc360: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC364u;
        goto label_1fc364;
    }
    ctx->pc = 0x1FC35Cu;
    {
        const bool branch_taken_0x1fc35c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC35Cu;
        // 0x1fc360: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc35c) {
            ctx->pc = 0x1FC3B4u;
            goto label_1fc3b4;
        }
    }
    ctx->pc = 0x1FC364u;
label_1fc364:
    // 0x1fc364: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x1fc364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_1fc368:
    // 0x1fc368: 0x922a000c  lbu         $t2, 0xC($s1)
    ctx->pc = 0x1fc368u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1fc36c:
    // 0x1fc36c: 0x1249c2  srl         $t1, $s2, 7
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_1fc370:
    // 0x1fc370: 0x92270008  lbu         $a3, 0x8($s1)
    ctx->pc = 0x1fc370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_1fc374:
    // 0x1fc374: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc378:
    // 0x1fc378: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1fc378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1fc37c:
    // 0x1fc37c: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x1fc37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_1fc380:
    // 0x1fc380: 0x9226001c  lbu         $a2, 0x1C($s1)
    ctx->pc = 0x1fc380u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_1fc384:
    // 0x1fc384: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1fc384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fc388:
    // 0x1fc388: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x1fc388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
label_1fc38c:
    // 0x1fc38c: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x1fc38cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
label_1fc390:
    // 0x1fc390: 0xa3a30006  sb          $v1, 0x6($sp)
    ctx->pc = 0x1fc390u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 3));
label_1fc394:
    // 0x1fc394: 0xa3a40007  sb          $a0, 0x7($sp)
    ctx->pc = 0x1fc394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 4));
label_1fc398:
    // 0x1fc398: 0xa3a60008  sb          $a2, 0x8($sp)
    ctx->pc = 0x1fc398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 6));
label_1fc39c:
    // 0x1fc39c: 0xa3aa0009  sb          $t2, 0x9($sp)
    ctx->pc = 0x1fc39cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 10));
label_1fc3a0:
    // 0x1fc3a0: 0xa3a9000a  sb          $t1, 0xA($sp)
    ctx->pc = 0x1fc3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 9));
label_1fc3a4:
    // 0x1fc3a4: 0xa3ab000b  sb          $t3, 0xB($sp)
    ctx->pc = 0x1fc3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 11));
label_1fc3a8:
    // 0x1fc3a8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1fc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_1fc3ac:
    // 0x1fc3ac: 0x180f809  jalr        $t4
label_1fc3b0:
    if (ctx->pc == 0x1FC3B0u) {
        ctx->pc = 0x1FC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3ACu;
        // 0x1fc3b0: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC3B4u;
        goto label_1fc3b4;
    }
    ctx->pc = 0x1FC3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x1FC3B4u);
        ctx->pc = 0x1FC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3ACu;
        // 0x1fc3b0: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3ACu, 0x1FC3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC3B4u;
label_1fc3b4:
    // 0x1fc3b4: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1fc3b8:
    // 0x1fc3b8: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1fc3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_1fc3bc:
    // 0x1fc3bc: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1fc3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1fc3c0:
    // 0x1fc3c0: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1fc3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_1fc3c4:
    // 0x1fc3c4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1fc3c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1fc3c8:
    // 0x1fc3c8: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1fc3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_1fc3cc:
    // 0x1fc3cc: 0x3e00008  jr          $ra
label_1fc3d0:
    if (ctx->pc == 0x1FC3D0u) {
        ctx->pc = 0x1FC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3CCu;
        // 0x1fc3d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC3D4u;
        goto label_fallthrough_0x1fc3cc;
    }
    ctx->pc = 0x1FC3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3CCu;
        // 0x1fc3d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc3cc:
    ctx->pc = 0x1FC3D4u;
}
