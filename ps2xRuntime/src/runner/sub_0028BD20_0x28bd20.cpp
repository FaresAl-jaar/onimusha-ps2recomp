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

// Function: sub_0028BD20
// Address: 0x28bd20 - 0x28c488
void sub_0028BD20_0x28bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BD20_0x28bd20");
#endif

    switch (ctx->pc) {
        case 0x28bd20u: goto label_28bd20;
        case 0x28bd24u: goto label_28bd24;
        case 0x28bd28u: goto label_28bd28;
        case 0x28bd2cu: goto label_28bd2c;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd3cu: goto label_28bd3c;
        case 0x28bd40u: goto label_28bd40;
        case 0x28bd44u: goto label_28bd44;
        case 0x28bd48u: goto label_28bd48;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bea8u: goto label_28bea8;
        case 0x28beacu: goto label_28beac;
        case 0x28beb0u: goto label_28beb0;
        case 0x28beb4u: goto label_28beb4;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bebcu: goto label_28bebc;
        case 0x28bec0u: goto label_28bec0;
        case 0x28bec4u: goto label_28bec4;
        case 0x28bec8u: goto label_28bec8;
        case 0x28beccu: goto label_28becc;
        case 0x28bed0u: goto label_28bed0;
        case 0x28bed4u: goto label_28bed4;
        case 0x28bed8u: goto label_28bed8;
        case 0x28bedcu: goto label_28bedc;
        case 0x28bee0u: goto label_28bee0;
        case 0x28bee4u: goto label_28bee4;
        case 0x28bee8u: goto label_28bee8;
        case 0x28beecu: goto label_28beec;
        case 0x28bef0u: goto label_28bef0;
        case 0x28bef4u: goto label_28bef4;
        case 0x28bef8u: goto label_28bef8;
        case 0x28befcu: goto label_28befc;
        case 0x28bf00u: goto label_28bf00;
        case 0x28bf04u: goto label_28bf04;
        case 0x28bf08u: goto label_28bf08;
        case 0x28bf0cu: goto label_28bf0c;
        case 0x28bf10u: goto label_28bf10;
        case 0x28bf14u: goto label_28bf14;
        case 0x28bf18u: goto label_28bf18;
        case 0x28bf1cu: goto label_28bf1c;
        case 0x28bf20u: goto label_28bf20;
        case 0x28bf24u: goto label_28bf24;
        case 0x28bf28u: goto label_28bf28;
        case 0x28bf2cu: goto label_28bf2c;
        case 0x28bf30u: goto label_28bf30;
        case 0x28bf34u: goto label_28bf34;
        case 0x28bf38u: goto label_28bf38;
        case 0x28bf3cu: goto label_28bf3c;
        case 0x28bf40u: goto label_28bf40;
        case 0x28bf44u: goto label_28bf44;
        case 0x28bf48u: goto label_28bf48;
        case 0x28bf4cu: goto label_28bf4c;
        case 0x28bf50u: goto label_28bf50;
        case 0x28bf54u: goto label_28bf54;
        case 0x28bf58u: goto label_28bf58;
        case 0x28bf5cu: goto label_28bf5c;
        case 0x28bf60u: goto label_28bf60;
        case 0x28bf64u: goto label_28bf64;
        case 0x28bf68u: goto label_28bf68;
        case 0x28bf6cu: goto label_28bf6c;
        case 0x28bf70u: goto label_28bf70;
        case 0x28bf74u: goto label_28bf74;
        case 0x28bf78u: goto label_28bf78;
        case 0x28bf7cu: goto label_28bf7c;
        case 0x28bf80u: goto label_28bf80;
        case 0x28bf84u: goto label_28bf84;
        case 0x28bf88u: goto label_28bf88;
        case 0x28bf8cu: goto label_28bf8c;
        case 0x28bf90u: goto label_28bf90;
        case 0x28bf94u: goto label_28bf94;
        case 0x28bf98u: goto label_28bf98;
        case 0x28bf9cu: goto label_28bf9c;
        case 0x28bfa0u: goto label_28bfa0;
        case 0x28bfa4u: goto label_28bfa4;
        case 0x28bfa8u: goto label_28bfa8;
        case 0x28bfacu: goto label_28bfac;
        case 0x28bfb0u: goto label_28bfb0;
        case 0x28bfb4u: goto label_28bfb4;
        case 0x28bfb8u: goto label_28bfb8;
        case 0x28bfbcu: goto label_28bfbc;
        case 0x28bfc0u: goto label_28bfc0;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bfc8u: goto label_28bfc8;
        case 0x28bfccu: goto label_28bfcc;
        case 0x28bfd0u: goto label_28bfd0;
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28bfdcu: goto label_28bfdc;
        case 0x28bfe0u: goto label_28bfe0;
        case 0x28bfe4u: goto label_28bfe4;
        case 0x28bfe8u: goto label_28bfe8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28bff0u: goto label_28bff0;
        case 0x28bff4u: goto label_28bff4;
        case 0x28bff8u: goto label_28bff8;
        case 0x28bffcu: goto label_28bffc;
        case 0x28c000u: goto label_28c000;
        case 0x28c004u: goto label_28c004;
        case 0x28c008u: goto label_28c008;
        case 0x28c00cu: goto label_28c00c;
        case 0x28c010u: goto label_28c010;
        case 0x28c014u: goto label_28c014;
        case 0x28c018u: goto label_28c018;
        case 0x28c01cu: goto label_28c01c;
        case 0x28c020u: goto label_28c020;
        case 0x28c024u: goto label_28c024;
        case 0x28c028u: goto label_28c028;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c030u: goto label_28c030;
        case 0x28c034u: goto label_28c034;
        case 0x28c038u: goto label_28c038;
        case 0x28c03cu: goto label_28c03c;
        case 0x28c040u: goto label_28c040;
        case 0x28c044u: goto label_28c044;
        case 0x28c048u: goto label_28c048;
        case 0x28c04cu: goto label_28c04c;
        case 0x28c050u: goto label_28c050;
        case 0x28c054u: goto label_28c054;
        case 0x28c058u: goto label_28c058;
        case 0x28c05cu: goto label_28c05c;
        case 0x28c060u: goto label_28c060;
        case 0x28c064u: goto label_28c064;
        case 0x28c068u: goto label_28c068;
        case 0x28c06cu: goto label_28c06c;
        case 0x28c070u: goto label_28c070;
        case 0x28c074u: goto label_28c074;
        case 0x28c078u: goto label_28c078;
        case 0x28c07cu: goto label_28c07c;
        case 0x28c080u: goto label_28c080;
        case 0x28c084u: goto label_28c084;
        case 0x28c088u: goto label_28c088;
        case 0x28c08cu: goto label_28c08c;
        case 0x28c090u: goto label_28c090;
        case 0x28c094u: goto label_28c094;
        case 0x28c098u: goto label_28c098;
        case 0x28c09cu: goto label_28c09c;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0acu: goto label_28c0ac;
        case 0x28c0b0u: goto label_28c0b0;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0b8u: goto label_28c0b8;
        case 0x28c0bcu: goto label_28c0bc;
        case 0x28c0c0u: goto label_28c0c0;
        case 0x28c0c4u: goto label_28c0c4;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0ccu: goto label_28c0cc;
        case 0x28c0d0u: goto label_28c0d0;
        case 0x28c0d4u: goto label_28c0d4;
        case 0x28c0d8u: goto label_28c0d8;
        case 0x28c0dcu: goto label_28c0dc;
        case 0x28c0e0u: goto label_28c0e0;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c0ecu: goto label_28c0ec;
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c0f4u: goto label_28c0f4;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c0fcu: goto label_28c0fc;
        case 0x28c100u: goto label_28c100;
        case 0x28c104u: goto label_28c104;
        case 0x28c108u: goto label_28c108;
        case 0x28c10cu: goto label_28c10c;
        case 0x28c110u: goto label_28c110;
        case 0x28c114u: goto label_28c114;
        case 0x28c118u: goto label_28c118;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c120u: goto label_28c120;
        case 0x28c124u: goto label_28c124;
        case 0x28c128u: goto label_28c128;
        case 0x28c12cu: goto label_28c12c;
        case 0x28c130u: goto label_28c130;
        case 0x28c134u: goto label_28c134;
        case 0x28c138u: goto label_28c138;
        case 0x28c13cu: goto label_28c13c;
        case 0x28c140u: goto label_28c140;
        case 0x28c144u: goto label_28c144;
        case 0x28c148u: goto label_28c148;
        case 0x28c14cu: goto label_28c14c;
        case 0x28c150u: goto label_28c150;
        case 0x28c154u: goto label_28c154;
        case 0x28c158u: goto label_28c158;
        case 0x28c15cu: goto label_28c15c;
        case 0x28c160u: goto label_28c160;
        case 0x28c164u: goto label_28c164;
        case 0x28c168u: goto label_28c168;
        case 0x28c16cu: goto label_28c16c;
        case 0x28c170u: goto label_28c170;
        case 0x28c174u: goto label_28c174;
        case 0x28c178u: goto label_28c178;
        case 0x28c17cu: goto label_28c17c;
        case 0x28c180u: goto label_28c180;
        case 0x28c184u: goto label_28c184;
        case 0x28c188u: goto label_28c188;
        case 0x28c18cu: goto label_28c18c;
        case 0x28c190u: goto label_28c190;
        case 0x28c194u: goto label_28c194;
        case 0x28c198u: goto label_28c198;
        case 0x28c19cu: goto label_28c19c;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c1c8u: goto label_28c1c8;
        case 0x28c1ccu: goto label_28c1cc;
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        case 0x28c428u: goto label_28c428;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c430u: goto label_28c430;
        case 0x28c434u: goto label_28c434;
        case 0x28c438u: goto label_28c438;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c440u: goto label_28c440;
        case 0x28c444u: goto label_28c444;
        case 0x28c448u: goto label_28c448;
        case 0x28c44cu: goto label_28c44c;
        case 0x28c450u: goto label_28c450;
        case 0x28c454u: goto label_28c454;
        case 0x28c458u: goto label_28c458;
        case 0x28c45cu: goto label_28c45c;
        case 0x28c460u: goto label_28c460;
        case 0x28c464u: goto label_28c464;
        case 0x28c468u: goto label_28c468;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c470u: goto label_28c470;
        case 0x28c474u: goto label_28c474;
        case 0x28c478u: goto label_28c478;
        case 0x28c47cu: goto label_28c47c;
        case 0x28c480u: goto label_28c480;
        case 0x28c484u: goto label_28c484;
        default: break;
    }

    ctx->pc = 0x28bd20u;

label_28bd20:
    // 0x28bd20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x28bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_28bd24:
    // 0x28bd24: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x28bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_28bd28:
    // 0x28bd28: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x28bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_28bd2c:
    // 0x28bd2c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x28bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_28bd30:
    // 0x28bd30: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x28bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_28bd34:
    // 0x28bd34: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x28bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_28bd38:
    // 0x28bd38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_28bd3c:
    // 0x28bd3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28bd3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28bd40:
    // 0x28bd40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_28bd44:
    // 0x28bd44: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_28bd48:
    // 0x28bd48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_28bd4c:
    // 0x28bd4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28bd50:
    // 0x28bd50: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x28bd50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28bd54:
    // 0x28bd54: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x28bd54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_28bd58:
    // 0x28bd58: 0x90860051  lbu         $a2, 0x51($a0)
    ctx->pc = 0x28bd58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
label_28bd5c:
    // 0x28bd5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28bd60:
    // 0x28bd60: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
label_28bd64:
    if (ctx->pc == 0x28BD64u) {
        ctx->pc = 0x28BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD60u;
        // 0x28bd64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD68u;
        goto label_28bd68;
    }
    ctx->pc = 0x28BD60u;
    {
        const bool branch_taken_0x28bd60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x28BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD60u;
        // 0x28bd64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd60) {
            ctx->pc = 0x28BD90u;
            goto label_28bd90;
        }
    }
    ctx->pc = 0x28BD68u;
label_28bd68:
    // 0x28bd68: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_28bd6c:
    if (ctx->pc == 0x28BD6Cu) {
        ctx->pc = 0x28BD70u;
        goto label_28bd70;
    }
    ctx->pc = 0x28BD68u;
    {
        const bool branch_taken_0x28bd68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28bd68) {
            ctx->pc = 0x28BD78u;
            goto label_28bd78;
        }
    }
    ctx->pc = 0x28BD70u;
label_28bd70:
    // 0x28bd70: 0x10000187  b           . + 4 + (0x187 << 2)
label_28bd74:
    if (ctx->pc == 0x28BD74u) {
        ctx->pc = 0x28BD78u;
        goto label_28bd78;
    }
    ctx->pc = 0x28BD70u;
    {
        const bool branch_taken_0x28bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bd70) {
            ctx->pc = 0x28C390u;
            goto label_28c390;
        }
    }
    ctx->pc = 0x28BD78u;
label_28bd78:
    // 0x28bd78: 0xa2a40051  sb          $a0, 0x51($s5)
    ctx->pc = 0x28bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 81), (uint8_t)GPR_U32(ctx, 4));
label_28bd7c:
    // 0x28bd7c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_28bd80:
    if (ctx->pc == 0x28BD80u) {
        ctx->pc = 0x28BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD7Cu;
        // 0x28bd80: 0xa6a00054  sh          $zero, 0x54($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD84u;
        goto label_28bd84;
    }
    ctx->pc = 0x28BD7Cu;
    {
        const bool branch_taken_0x28bd7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD7Cu;
        // 0x28bd80: 0xa6a00054  sh          $zero, 0x54($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd7c) {
            ctx->pc = 0x28BD90u;
            goto label_28bd90;
        }
    }
    ctx->pc = 0x28BD84u;
label_28bd84:
    // 0x28bd84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28bd88:
    // 0x28bd88: 0xa0a300f0  sb          $v1, 0xF0($a1)
    ctx->pc = 0x28bd88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 240), (uint8_t)GPR_U32(ctx, 3));
label_28bd8c:
    // 0x28bd8c: 0x0  nop
    ctx->pc = 0x28bd8cu;
    // NOP
label_28bd90:
    // 0x28bd90: 0x10a00175  beqz        $a1, . + 4 + (0x175 << 2)
label_28bd94:
    if (ctx->pc == 0x28BD94u) {
        ctx->pc = 0x28BD98u;
        goto label_28bd98;
    }
    ctx->pc = 0x28BD90u;
    {
        const bool branch_taken_0x28bd90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bd90) {
            ctx->pc = 0x28C368u;
            goto label_28c368;
        }
    }
    ctx->pc = 0x28BD98u;
label_28bd98:
    // 0x28bd98: 0x90a400f0  lbu         $a0, 0xF0($a1)
    ctx->pc = 0x28bd98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 240)));
label_28bd9c:
    // 0x28bd9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28bda0:
    // 0x28bda0: 0x1083016d  beq         $a0, $v1, . + 4 + (0x16D << 2)
label_28bda4:
    if (ctx->pc == 0x28BDA4u) {
        ctx->pc = 0x28BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA0u;
        // 0x28bda4: 0x24be00f0  addiu       $fp, $a1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDA8u;
        goto label_28bda8;
    }
    ctx->pc = 0x28BDA0u;
    {
        const bool branch_taken_0x28bda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA0u;
        // 0x28bda4: 0x24be00f0  addiu       $fp, $a1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bda0) {
            ctx->pc = 0x28C358u;
            goto label_28c358;
        }
    }
    ctx->pc = 0x28BDA8u;
label_28bda8:
    // 0x28bda8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28bdac:
    // 0x28bdac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_28bdb0:
    if (ctx->pc == 0x28BDB0u) {
        ctx->pc = 0x28BDB4u;
        goto label_28bdb4;
    }
    ctx->pc = 0x28BDACu;
    {
        const bool branch_taken_0x28bdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28bdac) {
            ctx->pc = 0x28BDC0u;
            goto label_28bdc0;
        }
    }
    ctx->pc = 0x28BDB4u;
label_28bdb4:
    // 0x28bdb4: 0x1000016c  b           . + 4 + (0x16C << 2)
label_28bdb8:
    if (ctx->pc == 0x28BDB8u) {
        ctx->pc = 0x28BDBCu;
        goto label_28bdbc;
    }
    ctx->pc = 0x28BDB4u;
    {
        const bool branch_taken_0x28bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bdb4) {
            ctx->pc = 0x28C368u;
            goto label_28c368;
        }
    }
    ctx->pc = 0x28BDBCu;
label_28bdbc:
    // 0x28bdbc: 0x0  nop
    ctx->pc = 0x28bdbcu;
    // NOP
label_28bdc0:
    // 0x28bdc0: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x28bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_28bdc4:
    // 0x28bdc4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x28bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_28bdc8:
    // 0x28bdc8: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_28bdcc:
    // 0x28bdcc: 0x3c033f26  lui         $v1, 0x3F26
    ctx->pc = 0x28bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16166 << 16));
label_28bdd0:
    // 0x28bdd0: 0x87c60002  lh          $a2, 0x2($fp)
    ctx->pc = 0x28bdd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_28bdd4:
    // 0x28bdd4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x28bdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_28bdd8:
    // 0x28bdd8: 0x87c50006  lh          $a1, 0x6($fp)
    ctx->pc = 0x28bdd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
label_28bddc:
    // 0x28bddc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28bddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bde0:
    // 0x28bde0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x28bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_28bde4:
    // 0x28bde4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28bde4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bde8:
    // 0x28bde8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x28bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_28bdec:
    // 0x28bdec: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x28bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_28bdf0:
    // 0x28bdf0: 0x8c940128  lw          $s4, 0x128($a0)
    ctx->pc = 0x28bdf0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_28bdf4:
    // 0x28bdf4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x28bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28bdf8:
    // 0x28bdf8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28bdf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28bdfc:
    // 0x28bdfc: 0x0  nop
    ctx->pc = 0x28bdfcu;
    // NOP
label_28be00:
    // 0x28be00: 0x46801520  cvt.s.w     $f20, $f2
    ctx->pc = 0x28be00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_28be04:
    // 0x28be04: 0xc62018  mult        $a0, $a2, $a2
    ctx->pc = 0x28be04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_28be08:
    // 0x28be08: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28be08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_28be0c:
    // 0x28be0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28be0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28be10:
    // 0x28be10: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x28be10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28be14:
    // 0x28be14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28be14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28be18:
    // 0x28be18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28be18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28be1c:
    // 0x28be1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28be1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28be20:
    // 0x28be20: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
label_28be24:
    if (ctx->pc == 0x28BE24u) {
        ctx->pc = 0x28BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE20u;
        // 0x28be24: 0x46801d60  cvt.s.w     $f21, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE28u;
        goto label_28be28;
    }
    ctx->pc = 0x28BE20u;
    {
        const bool branch_taken_0x28be20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE20u;
        // 0x28be24: 0x46801d60  cvt.s.w     $f21, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be20) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BE28u;
label_28be28:
    // 0x28be28: 0x86a50054  lh          $a1, 0x54($s5)
    ctx->pc = 0x28be28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 84)));
label_28be2c:
    // 0x28be2c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x28be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_28be30:
    // 0x28be30: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x28be30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28be34:
    // 0x28be34: 0x0  nop
    ctx->pc = 0x28be34u;
    // NOP
label_28be38:
    // 0x28be38: 0x0  nop
    ctx->pc = 0x28be38u;
    // NOP
label_28be3c:
    // 0x28be3c: 0x1810  mfhi        $v1
    ctx->pc = 0x28be3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_28be40:
    // 0x28be40: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
label_28be44:
    if (ctx->pc == 0x28BE44u) {
        ctx->pc = 0x28BE48u;
        goto label_28be48;
    }
    ctx->pc = 0x28BE40u;
    {
        const bool branch_taken_0x28be40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28be40) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BE48u;
label_28be48:
    // 0x28be48: 0x92a40071  lbu         $a0, 0x71($s5)
    ctx->pc = 0x28be48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 113)));
label_28be4c:
    // 0x28be4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28be50:
    // 0x28be50: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_28be54:
    if (ctx->pc == 0x28BE54u) {
        ctx->pc = 0x28BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE50u;
        // 0x28be54: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE58u;
        goto label_28be58;
    }
    ctx->pc = 0x28BE50u;
    {
        const bool branch_taken_0x28be50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE50u;
        // 0x28be54: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be50) {
            ctx->pc = 0x28BFA0u;
            goto label_28bfa0;
        }
    }
    ctx->pc = 0x28BE58u;
label_28be58:
    // 0x28be58: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_28be5c:
    if (ctx->pc == 0x28BE5Cu) {
        ctx->pc = 0x28BE60u;
        goto label_28be60;
    }
    ctx->pc = 0x28BE58u;
    {
        const bool branch_taken_0x28be58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28be58) {
            ctx->pc = 0x28BF58u;
            goto label_28bf58;
        }
    }
    ctx->pc = 0x28BE60u;
label_28be60:
    // 0x28be60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28be64:
    // 0x28be64: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
label_28be68:
    if (ctx->pc == 0x28BE68u) {
        ctx->pc = 0x28BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE64u;
        // 0x28be68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE6Cu;
        goto label_28be6c;
    }
    ctx->pc = 0x28BE64u;
    {
        const bool branch_taken_0x28be64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE64u;
        // 0x28be68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be64) {
            ctx->pc = 0x28BF10u;
            goto label_28bf10;
        }
    }
    ctx->pc = 0x28BE6Cu;
label_28be6c:
    // 0x28be6c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_28be70:
    if (ctx->pc == 0x28BE70u) {
        ctx->pc = 0x28BE74u;
        goto label_28be74;
    }
    ctx->pc = 0x28BE6Cu;
    {
        const bool branch_taken_0x28be6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28be6c) {
            ctx->pc = 0x28BEC8u;
            goto label_28bec8;
        }
    }
    ctx->pc = 0x28BE74u;
label_28be74:
    // 0x28be74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28be78:
    if (ctx->pc == 0x28BE78u) {
        ctx->pc = 0x28BE7Cu;
        goto label_28be7c;
    }
    ctx->pc = 0x28BE74u;
    {
        const bool branch_taken_0x28be74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be74) {
            ctx->pc = 0x28BE88u;
            goto label_28be88;
        }
    }
    ctx->pc = 0x28BE7Cu;
label_28be7c:
    // 0x28be7c: 0x10000058  b           . + 4 + (0x58 << 2)
label_28be80:
    if (ctx->pc == 0x28BE80u) {
        ctx->pc = 0x28BE84u;
        goto label_28be84;
    }
    ctx->pc = 0x28BE7Cu;
    {
        const bool branch_taken_0x28be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be7c) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BE84u;
label_28be84:
    // 0x28be84: 0x0  nop
    ctx->pc = 0x28be84u;
    // NOP
label_28be88:
    // 0x28be88: 0x86a30082  lh          $v1, 0x82($s5)
    ctx->pc = 0x28be88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 130)));
label_28be8c:
    // 0x28be8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x28be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_28be90:
    // 0x28be90: 0x3c024d00  lui         $v0, 0x4D00
    ctx->pc = 0x28be90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
label_28be94:
    // 0x28be94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x28be94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_28be98:
    // 0x28be98: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x28be98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_28be9c:
    // 0x28be9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28be9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bea0:
    // 0x28bea0: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x28bea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_28bea4:
    // 0x28bea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bea8:
    // 0x28bea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28bea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28beac:
    // 0x28beac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28beacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28beb0:
    // 0x28beb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28beb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28beb4:
    // 0x28beb4: 0xc05e9e8  jal         func_17A7A0
label_28beb8:
    if (ctx->pc == 0x28BEB8u) {
        ctx->pc = 0x28BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEB4u;
        // 0x28beb8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEBCu;
        goto label_28bebc;
    }
    ctx->pc = 0x28BEB4u;
    SET_GPR_U32(ctx, 31, 0x28BEBCu);
    ctx->pc = 0x28BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEB4u;
    // 0x28beb8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x28BEB4u, 0x28BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEBCu;
label_28bebc:
    // 0x28bebc: 0x10000048  b           . + 4 + (0x48 << 2)
label_28bec0:
    if (ctx->pc == 0x28BEC0u) {
        ctx->pc = 0x28BEC4u;
        goto label_28bec4;
    }
    ctx->pc = 0x28BEBCu;
    {
        const bool branch_taken_0x28bebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bebc) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BEC4u;
label_28bec4:
    // 0x28bec4: 0x0  nop
    ctx->pc = 0x28bec4u;
    // NOP
label_28bec8:
    // 0x28bec8: 0x14a00045  bnez        $a1, . + 4 + (0x45 << 2)
label_28becc:
    if (ctx->pc == 0x28BECCu) {
        ctx->pc = 0x28BED0u;
        goto label_28bed0;
    }
    ctx->pc = 0x28BEC8u;
    {
        const bool branch_taken_0x28bec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bec8) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BED0u;
label_28bed0:
    // 0x28bed0: 0x86a30082  lh          $v1, 0x82($s5)
    ctx->pc = 0x28bed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 130)));
label_28bed4:
    // 0x28bed4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_28bed8:
    // 0x28bed8: 0x3c026200  lui         $v0, 0x6200
    ctx->pc = 0x28bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25088 << 16));
label_28bedc:
    // 0x28bedc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_28bee0:
    // 0x28bee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bee4:
    // 0x28bee4: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x28bee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_28bee8:
    // 0x28bee8: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x28bee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_28beec:
    // 0x28beec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28beecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bef0:
    // 0x28bef0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28bef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bef4:
    // 0x28bef4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bef4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bef8:
    // 0x28bef8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28bef8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28befc:
    // 0x28befc: 0xc05e9e8  jal         func_17A7A0
label_28bf00:
    if (ctx->pc == 0x28BF00u) {
        ctx->pc = 0x28BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEFCu;
        // 0x28bf00: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF04u;
        goto label_28bf04;
    }
    ctx->pc = 0x28BEFCu;
    SET_GPR_U32(ctx, 31, 0x28BF04u);
    ctx->pc = 0x28BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEFCu;
    // 0x28bf00: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x28BEFCu, 0x28BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF04u;
label_28bf04:
    // 0x28bf04: 0x10000036  b           . + 4 + (0x36 << 2)
label_28bf08:
    if (ctx->pc == 0x28BF08u) {
        ctx->pc = 0x28BF0Cu;
        goto label_28bf0c;
    }
    ctx->pc = 0x28BF04u;
    {
        const bool branch_taken_0x28bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf04) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BF0Cu;
label_28bf0c:
    // 0x28bf0c: 0x0  nop
    ctx->pc = 0x28bf0cu;
    // NOP
label_28bf10:
    // 0x28bf10: 0x14a00033  bnez        $a1, . + 4 + (0x33 << 2)
label_28bf14:
    if (ctx->pc == 0x28BF14u) {
        ctx->pc = 0x28BF18u;
        goto label_28bf18;
    }
    ctx->pc = 0x28BF10u;
    {
        const bool branch_taken_0x28bf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bf10) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BF18u;
label_28bf18:
    // 0x28bf18: 0x86a30082  lh          $v1, 0x82($s5)
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 130)));
label_28bf1c:
    // 0x28bf1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_28bf20:
    // 0x28bf20: 0x3c025f00  lui         $v0, 0x5F00
    ctx->pc = 0x28bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24320 << 16));
label_28bf24:
    // 0x28bf24: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x28bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_28bf28:
    // 0x28bf28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bf28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf2c:
    // 0x28bf2c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x28bf2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_28bf30:
    // 0x28bf30: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_28bf34:
    // 0x28bf34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bf34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf38:
    // 0x28bf38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28bf38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf3c:
    // 0x28bf3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bf3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf40:
    // 0x28bf40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28bf40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf44:
    // 0x28bf44: 0xc05e9e8  jal         func_17A7A0
label_28bf48:
    if (ctx->pc == 0x28BF48u) {
        ctx->pc = 0x28BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF44u;
        // 0x28bf48: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF4Cu;
        goto label_28bf4c;
    }
    ctx->pc = 0x28BF44u;
    SET_GPR_U32(ctx, 31, 0x28BF4Cu);
    ctx->pc = 0x28BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF44u;
    // 0x28bf48: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x28BF44u, 0x28BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF4Cu;
label_28bf4c:
    // 0x28bf4c: 0x10000024  b           . + 4 + (0x24 << 2)
label_28bf50:
    if (ctx->pc == 0x28BF50u) {
        ctx->pc = 0x28BF54u;
        goto label_28bf54;
    }
    ctx->pc = 0x28BF4Cu;
    {
        const bool branch_taken_0x28bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf4c) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BF54u;
label_28bf54:
    // 0x28bf54: 0x0  nop
    ctx->pc = 0x28bf54u;
    // NOP
label_28bf58:
    // 0x28bf58: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
label_28bf5c:
    if (ctx->pc == 0x28BF5Cu) {
        ctx->pc = 0x28BF60u;
        goto label_28bf60;
    }
    ctx->pc = 0x28BF58u;
    {
        const bool branch_taken_0x28bf58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bf58) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BF60u;
label_28bf60:
    // 0x28bf60: 0x86a30082  lh          $v1, 0x82($s5)
    ctx->pc = 0x28bf60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 130)));
label_28bf64:
    // 0x28bf64: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x28bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_28bf68:
    // 0x28bf68: 0x3c026100  lui         $v0, 0x6100
    ctx->pc = 0x28bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24832 << 16));
label_28bf6c:
    // 0x28bf6c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_28bf70:
    // 0x28bf70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf74:
    // 0x28bf74: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x28bf74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_28bf78:
    // 0x28bf78: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_28bf7c:
    // 0x28bf7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bf7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf80:
    // 0x28bf80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28bf80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf84:
    // 0x28bf84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bf84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf88:
    // 0x28bf88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28bf88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf8c:
    // 0x28bf8c: 0xc05e9e8  jal         func_17A7A0
label_28bf90:
    if (ctx->pc == 0x28BF90u) {
        ctx->pc = 0x28BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF8Cu;
        // 0x28bf90: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF94u;
        goto label_28bf94;
    }
    ctx->pc = 0x28BF8Cu;
    SET_GPR_U32(ctx, 31, 0x28BF94u);
    ctx->pc = 0x28BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF8Cu;
    // 0x28bf90: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x28BF8Cu, 0x28BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF94u;
label_28bf94:
    // 0x28bf94: 0x10000012  b           . + 4 + (0x12 << 2)
label_28bf98:
    if (ctx->pc == 0x28BF98u) {
        ctx->pc = 0x28BF9Cu;
        goto label_28bf9c;
    }
    ctx->pc = 0x28BF94u;
    {
        const bool branch_taken_0x28bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf94) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BF9Cu;
label_28bf9c:
    // 0x28bf9c: 0x0  nop
    ctx->pc = 0x28bf9cu;
    // NOP
label_28bfa0:
    // 0x28bfa0: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
label_28bfa4:
    if (ctx->pc == 0x28BFA4u) {
        ctx->pc = 0x28BFA8u;
        goto label_28bfa8;
    }
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BFE0u;
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28BFA8u;
label_28bfa8:
    // 0x28bfa8: 0x86a30082  lh          $v1, 0x82($s5)
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 130)));
label_28bfac:
    // 0x28bfac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x28bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_28bfb0:
    // 0x28bfb0: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x28bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_28bfb4:
    // 0x28bfb4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x28bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_28bfb8:
    // 0x28bfb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bfbc:
    // 0x28bfbc: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x28bfbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_28bfc0:
    // 0x28bfc0: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x28bfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_28bfc4:
    // 0x28bfc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bfc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bfc8:
    // 0x28bfc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28bfc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bfcc:
    // 0x28bfcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bfccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bfd0:
    // 0x28bfd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28bfd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bfd4:
    // 0x28bfd4: 0xc05e9e8  jal         func_17A7A0
label_28bfd8:
    if (ctx->pc == 0x28BFD8u) {
        ctx->pc = 0x28BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD4u;
        // 0x28bfd8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFDCu;
        goto label_28bfdc;
    }
    ctx->pc = 0x28BFD4u;
    SET_GPR_U32(ctx, 31, 0x28BFDCu);
    ctx->pc = 0x28BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFD4u;
    // 0x28bfd8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x28BFD4u, 0x28BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFDCu;
label_28bfdc:
    // 0x28bfdc: 0x0  nop
    ctx->pc = 0x28bfdcu;
    // NOP
label_28bfe0:
    // 0x28bfe0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28bfe4:
    // 0x28bfe4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x28bfe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28bfe8:
    // 0x28bfe8: 0x102000df  beqz        $at, . + 4 + (0xDF << 2)
label_28bfec:
    if (ctx->pc == 0x28BFECu) {
        ctx->pc = 0x28BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE8u;
        // 0x28bfec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFF0u;
        goto label_28bff0;
    }
    ctx->pc = 0x28BFE8u;
    {
        const bool branch_taken_0x28bfe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE8u;
        // 0x28bfec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfe8) {
            ctx->pc = 0x28C368u;
            goto label_28c368;
        }
    }
    ctx->pc = 0x28BFF0u;
label_28bff0:
    // 0x28bff0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28bff4:
    // 0x28bff4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x28bff4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28bff8:
    // 0x28bff8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x28bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28bffc:
    // 0x28bffc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x28bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_28c000:
    // 0x28c000: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28c000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_28c004:
    // 0x28c004: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x28c004u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_28c008:
    // 0x28c008: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x28c008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28c00c:
    // 0x28c00c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x28c00cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_28c010:
    // 0x28c010: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x28c010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_28c014:
    // 0x28c014: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28c018:
    // 0x28c018: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x28c018u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28c01c:
    // 0x28c01c: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
label_28c020:
    if (ctx->pc == 0x28C020u) {
        ctx->pc = 0x28C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C01Cu;
        // 0x28c020: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C024u;
        goto label_28c024;
    }
    ctx->pc = 0x28C01Cu;
    {
        const bool branch_taken_0x28c01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C01Cu;
        // 0x28c020: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c01c) {
            ctx->pc = 0x28C338u;
            goto label_28c338;
        }
    }
    ctx->pc = 0x28C024u;
label_28c024:
    // 0x28c024: 0x0  nop
    ctx->pc = 0x28c024u;
    // NOP
label_28c028:
    // 0x28c028: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x28c028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28c02c:
    // 0x28c02c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x28c02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_28c030:
    // 0x28c030: 0x146000b9  bnez        $v1, . + 4 + (0xB9 << 2)
label_28c034:
    if (ctx->pc == 0x28C034u) {
        ctx->pc = 0x28C038u;
        goto label_28c038;
    }
    ctx->pc = 0x28C030u;
    {
        const bool branch_taken_0x28c030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c030) {
            ctx->pc = 0x28C318u;
            goto label_28c318;
        }
    }
    ctx->pc = 0x28C038u;
label_28c038:
    // 0x28c038: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c03c:
    // 0x28c03c: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x28c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_28c040:
    // 0x28c040: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x28c040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_28c044:
    // 0x28c044: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28c048:
    // 0x28c048: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x28c048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_28c04c:
    // 0x28c04c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x28c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c050:
    // 0x28c050: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28c050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28c054:
    // 0x28c054: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x28c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c058:
    // 0x28c058: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x28c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_28c05c:
    // 0x28c05c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28c05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28c060:
    // 0x28c060: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x28c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_28c064:
    // 0x28c064: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x28c064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_28c068:
    // 0x28c068: 0x92a50070  lbu         $a1, 0x70($s5)
    ctx->pc = 0x28c068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 112)));
label_28c06c:
    // 0x28c06c: 0x10a40030  beq         $a1, $a0, . + 4 + (0x30 << 2)
label_28c070:
    if (ctx->pc == 0x28C070u) {
        ctx->pc = 0x28C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C06Cu;
        // 0x28c070: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C074u;
        goto label_28c074;
    }
    ctx->pc = 0x28C06Cu;
    {
        const bool branch_taken_0x28c06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x28C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C06Cu;
        // 0x28c070: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c06c) {
            ctx->pc = 0x28C130u;
            goto label_28c130;
        }
    }
    ctx->pc = 0x28C074u;
label_28c074:
    // 0x28c074: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
label_28c078:
    if (ctx->pc == 0x28C078u) {
        ctx->pc = 0x28C07Cu;
        goto label_28c07c;
    }
    ctx->pc = 0x28C074u;
    {
        const bool branch_taken_0x28c074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c074) {
            ctx->pc = 0x28C0F8u;
            goto label_28c0f8;
        }
    }
    ctx->pc = 0x28C07Cu;
label_28c07c:
    // 0x28c07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c080:
    // 0x28c080: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_28c084:
    if (ctx->pc == 0x28C084u) {
        ctx->pc = 0x28C088u;
        goto label_28c088;
    }
    ctx->pc = 0x28C080u;
    {
        const bool branch_taken_0x28c080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c080) {
            ctx->pc = 0x28C0C0u;
            goto label_28c0c0;
        }
    }
    ctx->pc = 0x28C088u;
label_28c088:
    // 0x28c088: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28c08c:
    if (ctx->pc == 0x28C08Cu) {
        ctx->pc = 0x28C090u;
        goto label_28c090;
    }
    ctx->pc = 0x28C088u;
    {
        const bool branch_taken_0x28c088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c088) {
            ctx->pc = 0x28C098u;
            goto label_28c098;
        }
    }
    ctx->pc = 0x28C090u;
label_28c090:
    // 0x28c090: 0x1000002f  b           . + 4 + (0x2F << 2)
label_28c094:
    if (ctx->pc == 0x28C094u) {
        ctx->pc = 0x28C098u;
        goto label_28c098;
    }
    ctx->pc = 0x28C090u;
    {
        const bool branch_taken_0x28c090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c090) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C098u;
label_28c098:
    // 0x28c098: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28c09c:
    // 0x28c09c: 0xc076654  jal         func_1D9950
label_28c0a0:
    if (ctx->pc == 0x28C0A0u) {
        ctx->pc = 0x28C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C09Cu;
        // 0x28c0a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0A4u;
        goto label_28c0a4;
    }
    ctx->pc = 0x28C09Cu;
    SET_GPR_U32(ctx, 31, 0x28C0A4u);
    ctx->pc = 0x28C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C09Cu;
    // 0x28c0a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x28C09Cu, 0x28C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0A4u;
label_28c0a4:
    // 0x28c0a4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x28c0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c0a8:
    // 0x28c0a8: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_28c0ac:
    if (ctx->pc == 0x28C0ACu) {
        ctx->pc = 0x28C0B0u;
        goto label_28c0b0;
    }
    ctx->pc = 0x28C0A8u;
    {
        const bool branch_taken_0x28c0a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c0a8) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C0B0u;
label_28c0b0:
    // 0x28c0b0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x28c0b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28c0b4:
    // 0x28c0b4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x28c0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_28c0b8:
    // 0x28c0b8: 0x10000025  b           . + 4 + (0x25 << 2)
label_28c0bc:
    if (ctx->pc == 0x28C0BCu) {
        ctx->pc = 0x28C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0B8u;
        // 0x28c0bc: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0C0u;
        goto label_28c0c0;
    }
    ctx->pc = 0x28C0B8u;
    {
        const bool branch_taken_0x28c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0B8u;
        // 0x28c0bc: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0b8) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C0C0u;
label_28c0c0:
    // 0x28c0c0: 0xc0765d4  jal         func_1D9750
label_28c0c4:
    if (ctx->pc == 0x28C0C4u) {
        ctx->pc = 0x28C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0C0u;
        // 0x28c0c4: 0xc7ac0100  lwc1        $f12, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0C8u;
        goto label_28c0c8;
    }
    ctx->pc = 0x28C0C0u;
    SET_GPR_U32(ctx, 31, 0x28C0C8u);
    ctx->pc = 0x28C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0C0u;
    // 0x28c0c4: 0xc7ac0100  lwc1        $f12, 0x100($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9750u, 0x28C0C0u, 0x28C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0C8u;
label_28c0c8:
    // 0x28c0c8: 0x87c30002  lh          $v1, 0x2($fp)
    ctx->pc = 0x28c0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_28c0cc:
    // 0x28c0cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c0d0:
    // 0x28c0d0: 0x0  nop
    ctx->pc = 0x28c0d0u;
    // NOP
label_28c0d4:
    // 0x28c0d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28c0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28c0d8:
    // 0x28c0d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28c0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c0dc:
    // 0x28c0dc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_28c0e0:
    if (ctx->pc == 0x28C0E0u) {
        ctx->pc = 0x28C0E4u;
        goto label_28c0e4;
    }
    ctx->pc = 0x28C0DCu;
    {
        const bool branch_taken_0x28c0dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c0dc) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C0E4u;
label_28c0e4:
    // 0x28c0e4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x28c0e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28c0e8:
    // 0x28c0e8: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x28c0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_28c0ec:
    // 0x28c0ec: 0x10000018  b           . + 4 + (0x18 << 2)
label_28c0f0:
    if (ctx->pc == 0x28C0F0u) {
        ctx->pc = 0x28C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0ECu;
        // 0x28c0f0: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0F4u;
        goto label_28c0f4;
    }
    ctx->pc = 0x28C0ECu;
    {
        const bool branch_taken_0x28c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0ECu;
        // 0x28c0f0: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0ec) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C0F4u;
label_28c0f4:
    // 0x28c0f4: 0x0  nop
    ctx->pc = 0x28c0f4u;
    // NOP
label_28c0f8:
    // 0x28c0f8: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x28c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_28c0fc:
    // 0x28c0fc: 0xc0765d4  jal         func_1D9750
label_28c100:
    if (ctx->pc == 0x28C100u) {
        ctx->pc = 0x28C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0FCu;
        // 0x28c100: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C104u;
        goto label_28c104;
    }
    ctx->pc = 0x28C0FCu;
    SET_GPR_U32(ctx, 31, 0x28C104u);
    ctx->pc = 0x28C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0FCu;
    // 0x28c100: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9750u, 0x28C0FCu, 0x28C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C104u;
label_28c104:
    // 0x28c104: 0x87c30002  lh          $v1, 0x2($fp)
    ctx->pc = 0x28c104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_28c108:
    // 0x28c108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c10c:
    // 0x28c10c: 0x0  nop
    ctx->pc = 0x28c10cu;
    // NOP
label_28c110:
    // 0x28c110: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28c110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28c114:
    // 0x28c114: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28c114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c118:
    // 0x28c118: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_28c11c:
    if (ctx->pc == 0x28C11Cu) {
        ctx->pc = 0x28C120u;
        goto label_28c120;
    }
    ctx->pc = 0x28C118u;
    {
        const bool branch_taken_0x28c118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c118) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C120u;
label_28c120:
    // 0x28c120: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x28c120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28c124:
    // 0x28c124: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x28c124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_28c128:
    // 0x28c128: 0x10000009  b           . + 4 + (0x9 << 2)
label_28c12c:
    if (ctx->pc == 0x28C12Cu) {
        ctx->pc = 0x28C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C128u;
        // 0x28c12c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C130u;
        goto label_28c130;
    }
    ctx->pc = 0x28C128u;
    {
        const bool branch_taken_0x28c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C128u;
        // 0x28c12c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c128) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C130u;
label_28c130:
    // 0x28c130: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x28c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_28c134:
    // 0x28c134: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c138:
    // 0x28c138: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x28c138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c13c:
    // 0x28c13c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_28c140:
    if (ctx->pc == 0x28C140u) {
        ctx->pc = 0x28C144u;
        goto label_28c144;
    }
    ctx->pc = 0x28C13Cu;
    {
        const bool branch_taken_0x28c13c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c13c) {
            ctx->pc = 0x28C150u;
            goto label_28c150;
        }
    }
    ctx->pc = 0x28C144u;
label_28c144:
    // 0x28c144: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x28c144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28c148:
    // 0x28c148: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x28c148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_28c14c:
    // 0x28c14c: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x28c14cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_28c150:
    // 0x28c150: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x28c150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28c154:
    // 0x28c154: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x28c154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_28c158:
    // 0x28c158: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
label_28c15c:
    if (ctx->pc == 0x28C15Cu) {
        ctx->pc = 0x28C160u;
        goto label_28c160;
    }
    ctx->pc = 0x28C158u;
    {
        const bool branch_taken_0x28c158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c158) {
            ctx->pc = 0x28C318u;
            goto label_28c318;
        }
    }
    ctx->pc = 0x28C160u;
label_28c160:
    // 0x28c160: 0x86a4007a  lh          $a0, 0x7A($s5)
    ctx->pc = 0x28c160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 122)));
label_28c164:
    // 0x28c164: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c168:
    // 0x28c168: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_28c16c:
    if (ctx->pc == 0x28C16Cu) {
        ctx->pc = 0x28C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C168u;
        // 0x28c16c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C170u;
        goto label_28c170;
    }
    ctx->pc = 0x28C168u;
    {
        const bool branch_taken_0x28c168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C168u;
        // 0x28c16c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c168) {
            ctx->pc = 0x28C1C8u;
            goto label_28c1c8;
        }
    }
    ctx->pc = 0x28C170u;
label_28c170:
    // 0x28c170: 0x86a30072  lh          $v1, 0x72($s5)
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 114)));
label_28c174:
    // 0x28c174: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28c178:
    if (ctx->pc == 0x28C178u) {
        ctx->pc = 0x28C17Cu;
        goto label_28c17c;
    }
    ctx->pc = 0x28C174u;
    {
        const bool branch_taken_0x28c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c174) {
            ctx->pc = 0x28C188u;
            goto label_28c188;
        }
    }
    ctx->pc = 0x28C17Cu;
label_28c17c:
    // 0x28c17c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28c180:
    // 0x28c180: 0x10000011  b           . + 4 + (0x11 << 2)
label_28c184:
    if (ctx->pc == 0x28C184u) {
        ctx->pc = 0x28C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C180u;
        // 0x28c184: 0xa6a30072  sh          $v1, 0x72($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 114), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C188u;
        goto label_28c188;
    }
    ctx->pc = 0x28C180u;
    {
        const bool branch_taken_0x28c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C180u;
        // 0x28c184: 0xa6a30072  sh          $v1, 0x72($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 114), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c180) {
            ctx->pc = 0x28C1C8u;
            goto label_28c1c8;
        }
    }
    ctx->pc = 0x28C188u;
label_28c188:
    // 0x28c188: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x28c188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_28c18c:
    // 0x28c18c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x28c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28c190:
    // 0x28c190: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28c190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28c194:
    // 0x28c194: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28c194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_28c198:
    // 0x28c198: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x28c198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_28c19c:
    // 0x28c19c: 0xc07679c  jal         func_1D9E70
label_28c1a0:
    if (ctx->pc == 0x28C1A0u) {
        ctx->pc = 0x28C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C19Cu;
        // 0x28c1a0: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1A4u;
        goto label_28c1a4;
    }
    ctx->pc = 0x28C19Cu;
    SET_GPR_U32(ctx, 31, 0x28C1A4u);
    ctx->pc = 0x28C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C19Cu;
    // 0x28c1a0: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x28C19Cu, 0x28C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1A4u;
label_28c1a4:
    // 0x28c1a4: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c1a8:
    // 0x28c1a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c1ac:
    // 0x28c1ac: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x28c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28c1b0:
    // 0x28c1b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x28c1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_28c1b4:
    // 0x28c1b4: 0x320f809  jalr        $t9
label_28c1b8:
    if (ctx->pc == 0x28C1B8u) {
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1BCu;
        goto label_28c1bc;
    }
    ctx->pc = 0x28C1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C1BCu);
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C1B4u, 0x28C1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0x86a3007a  lh          $v1, 0x7A($s5)
    ctx->pc = 0x28c1bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 122)));
label_28c1c0:
    // 0x28c1c0: 0xa6a30072  sh          $v1, 0x72($s5)
    ctx->pc = 0x28c1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 114), (uint16_t)GPR_U32(ctx, 3));
label_28c1c4:
    // 0x28c1c4: 0x0  nop
    ctx->pc = 0x28c1c4u;
    // NOP
label_28c1c8:
    // 0x28c1c8: 0x86a4007c  lh          $a0, 0x7C($s5)
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 124)));
label_28c1cc:
    // 0x28c1cc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c1d0:
    // 0x28c1d0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_28c1d4:
    if (ctx->pc == 0x28C1D4u) {
        ctx->pc = 0x28C1D8u;
        goto label_28c1d8;
    }
    ctx->pc = 0x28C1D0u;
    {
        const bool branch_taken_0x28c1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c1d0) {
            ctx->pc = 0x28C238u;
            goto label_28c238;
        }
    }
    ctx->pc = 0x28C1D8u;
label_28c1d8:
    // 0x28c1d8: 0x86a30074  lh          $v1, 0x74($s5)
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 116)));
label_28c1dc:
    // 0x28c1dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28c1e0:
    if (ctx->pc == 0x28C1E0u) {
        ctx->pc = 0x28C1E4u;
        goto label_28c1e4;
    }
    ctx->pc = 0x28C1DCu;
    {
        const bool branch_taken_0x28c1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c1dc) {
            ctx->pc = 0x28C1F0u;
            goto label_28c1f0;
        }
    }
    ctx->pc = 0x28C1E4u;
label_28c1e4:
    // 0x28c1e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28c1e8:
    // 0x28c1e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_28c1ec:
    if (ctx->pc == 0x28C1ECu) {
        ctx->pc = 0x28C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E8u;
        // 0x28c1ec: 0xa6a30074  sh          $v1, 0x74($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 116), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1F0u;
        goto label_28c1f0;
    }
    ctx->pc = 0x28C1E8u;
    {
        const bool branch_taken_0x28c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E8u;
        // 0x28c1ec: 0xa6a30074  sh          $v1, 0x74($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 116), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e8) {
            ctx->pc = 0x28C238u;
            goto label_28c238;
        }
    }
    ctx->pc = 0x28C1F0u;
label_28c1f0:
    // 0x28c1f0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_28c1f4:
    if (ctx->pc == 0x28C1F4u) {
        ctx->pc = 0x28C1F8u;
        goto label_28c1f8;
    }
    ctx->pc = 0x28C1F0u;
    {
        const bool branch_taken_0x28c1f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c1f0) {
            ctx->pc = 0x28C218u;
            goto label_28c218;
        }
    }
    ctx->pc = 0x28C1F8u;
label_28c1f8:
    // 0x28c1f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x28c1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_28c1fc:
    // 0x28c1fc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x28c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28c200:
    // 0x28c200: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28c200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28c204:
    // 0x28c204: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28c204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_28c208:
    // 0x28c208: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x28c208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_28c20c:
    // 0x28c20c: 0xc07679c  jal         func_1D9E70
label_28c210:
    if (ctx->pc == 0x28C210u) {
        ctx->pc = 0x28C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C20Cu;
        // 0x28c210: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C214u;
        goto label_28c214;
    }
    ctx->pc = 0x28C20Cu;
    SET_GPR_U32(ctx, 31, 0x28C214u);
    ctx->pc = 0x28C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C20Cu;
    // 0x28c210: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x28C20Cu, 0x28C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C214u;
label_28c214:
    // 0x28c214: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28c214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c218:
    // 0x28c218: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c21c:
    // 0x28c21c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c220:
    // 0x28c220: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x28c220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_28c224:
    // 0x28c224: 0x320f809  jalr        $t9
label_28c228:
    if (ctx->pc == 0x28C228u) {
        ctx->pc = 0x28C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C224u;
        // 0x28c228: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C22Cu;
        goto label_28c22c;
    }
    ctx->pc = 0x28C224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C22Cu);
        ctx->pc = 0x28C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C224u;
        // 0x28c228: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C224u, 0x28C22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C22Cu;
label_28c22c:
    // 0x28c22c: 0x86a3007c  lh          $v1, 0x7C($s5)
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 124)));
label_28c230:
    // 0x28c230: 0xa6a30074  sh          $v1, 0x74($s5)
    ctx->pc = 0x28c230u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 116), (uint16_t)GPR_U32(ctx, 3));
label_28c234:
    // 0x28c234: 0x0  nop
    ctx->pc = 0x28c234u;
    // NOP
label_28c238:
    // 0x28c238: 0x86a4007e  lh          $a0, 0x7E($s5)
    ctx->pc = 0x28c238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 126)));
label_28c23c:
    // 0x28c23c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c240:
    // 0x28c240: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_28c244:
    if (ctx->pc == 0x28C244u) {
        ctx->pc = 0x28C248u;
        goto label_28c248;
    }
    ctx->pc = 0x28C240u;
    {
        const bool branch_taken_0x28c240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c240) {
            ctx->pc = 0x28C2A8u;
            goto label_28c2a8;
        }
    }
    ctx->pc = 0x28C248u;
label_28c248:
    // 0x28c248: 0x86a30076  lh          $v1, 0x76($s5)
    ctx->pc = 0x28c248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 118)));
label_28c24c:
    // 0x28c24c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28c250:
    if (ctx->pc == 0x28C250u) {
        ctx->pc = 0x28C254u;
        goto label_28c254;
    }
    ctx->pc = 0x28C24Cu;
    {
        const bool branch_taken_0x28c24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c24c) {
            ctx->pc = 0x28C260u;
            goto label_28c260;
        }
    }
    ctx->pc = 0x28C254u;
label_28c254:
    // 0x28c254: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28c258:
    // 0x28c258: 0x10000013  b           . + 4 + (0x13 << 2)
label_28c25c:
    if (ctx->pc == 0x28C25Cu) {
        ctx->pc = 0x28C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C258u;
        // 0x28c25c: 0xa6a30076  sh          $v1, 0x76($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 118), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C260u;
        goto label_28c260;
    }
    ctx->pc = 0x28C258u;
    {
        const bool branch_taken_0x28c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C258u;
        // 0x28c25c: 0xa6a30076  sh          $v1, 0x76($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 118), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c258) {
            ctx->pc = 0x28C2A8u;
            goto label_28c2a8;
        }
    }
    ctx->pc = 0x28C260u;
label_28c260:
    // 0x28c260: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_28c264:
    if (ctx->pc == 0x28C264u) {
        ctx->pc = 0x28C268u;
        goto label_28c268;
    }
    ctx->pc = 0x28C260u;
    {
        const bool branch_taken_0x28c260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c260) {
            ctx->pc = 0x28C288u;
            goto label_28c288;
        }
    }
    ctx->pc = 0x28C268u;
label_28c268:
    // 0x28c268: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x28c268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_28c26c:
    // 0x28c26c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x28c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28c270:
    // 0x28c270: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28c270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28c274:
    // 0x28c274: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28c274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_28c278:
    // 0x28c278: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x28c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_28c27c:
    // 0x28c27c: 0xc07679c  jal         func_1D9E70
label_28c280:
    if (ctx->pc == 0x28C280u) {
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C284u;
        goto label_28c284;
    }
    ctx->pc = 0x28C27Cu;
    SET_GPR_U32(ctx, 31, 0x28C284u);
    ctx->pc = 0x28C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C27Cu;
    // 0x28c280: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x28C27Cu, 0x28C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C284u;
label_28c284:
    // 0x28c284: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28c284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c288:
    // 0x28c288: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c28c:
    // 0x28c28c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28c28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c290:
    // 0x28c290: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x28c290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_28c294:
    // 0x28c294: 0x320f809  jalr        $t9
label_28c298:
    if (ctx->pc == 0x28C298u) {
        ctx->pc = 0x28C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C294u;
        // 0x28c298: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C29Cu;
        goto label_28c29c;
    }
    ctx->pc = 0x28C294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C29Cu);
        ctx->pc = 0x28C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C294u;
        // 0x28c298: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C294u, 0x28C29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C29Cu;
label_28c29c:
    // 0x28c29c: 0x86a3007e  lh          $v1, 0x7E($s5)
    ctx->pc = 0x28c29cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 126)));
label_28c2a0:
    // 0x28c2a0: 0xa6a30076  sh          $v1, 0x76($s5)
    ctx->pc = 0x28c2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 118), (uint16_t)GPR_U32(ctx, 3));
label_28c2a4:
    // 0x28c2a4: 0x0  nop
    ctx->pc = 0x28c2a4u;
    // NOP
label_28c2a8:
    // 0x28c2a8: 0x86a40080  lh          $a0, 0x80($s5)
    ctx->pc = 0x28c2a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
label_28c2ac:
    // 0x28c2ac: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c2b0:
    // 0x28c2b0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_28c2b4:
    if (ctx->pc == 0x28C2B4u) {
        ctx->pc = 0x28C2B8u;
        goto label_28c2b8;
    }
    ctx->pc = 0x28C2B0u;
    {
        const bool branch_taken_0x28c2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c2b0) {
            ctx->pc = 0x28C318u;
            goto label_28c318;
        }
    }
    ctx->pc = 0x28C2B8u;
label_28c2b8:
    // 0x28c2b8: 0x86a30078  lh          $v1, 0x78($s5)
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 120)));
label_28c2bc:
    // 0x28c2bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28c2c0:
    if (ctx->pc == 0x28C2C0u) {
        ctx->pc = 0x28C2C4u;
        goto label_28c2c4;
    }
    ctx->pc = 0x28C2BCu;
    {
        const bool branch_taken_0x28c2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c2bc) {
            ctx->pc = 0x28C2D0u;
            goto label_28c2d0;
        }
    }
    ctx->pc = 0x28C2C4u;
label_28c2c4:
    // 0x28c2c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_28c2c8:
    // 0x28c2c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_28c2cc:
    if (ctx->pc == 0x28C2CCu) {
        ctx->pc = 0x28C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C8u;
        // 0x28c2cc: 0xa6a30078  sh          $v1, 0x78($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2D0u;
        goto label_28c2d0;
    }
    ctx->pc = 0x28C2C8u;
    {
        const bool branch_taken_0x28c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C8u;
        // 0x28c2cc: 0xa6a30078  sh          $v1, 0x78($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2c8) {
            ctx->pc = 0x28C318u;
            goto label_28c318;
        }
    }
    ctx->pc = 0x28C2D0u;
label_28c2d0:
    // 0x28c2d0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_28c2d4:
    if (ctx->pc == 0x28C2D4u) {
        ctx->pc = 0x28C2D8u;
        goto label_28c2d8;
    }
    ctx->pc = 0x28C2D0u;
    {
        const bool branch_taken_0x28c2d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c2d0) {
            ctx->pc = 0x28C2F8u;
            goto label_28c2f8;
        }
    }
    ctx->pc = 0x28C2D8u;
label_28c2d8:
    // 0x28c2d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x28c2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_28c2dc:
    // 0x28c2dc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28c2e0:
    // 0x28c2e0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28c2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28c2e4:
    // 0x28c2e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28c2e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_28c2e8:
    // 0x28c2e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_28c2ec:
    // 0x28c2ec: 0xc07679c  jal         func_1D9E70
label_28c2f0:
    if (ctx->pc == 0x28C2F0u) {
        ctx->pc = 0x28C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2ECu;
        // 0x28c2f0: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2F4u;
        goto label_28c2f4;
    }
    ctx->pc = 0x28C2ECu;
    SET_GPR_U32(ctx, 31, 0x28C2F4u);
    ctx->pc = 0x28C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2ECu;
    // 0x28c2f0: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x28C2ECu, 0x28C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2F4u;
label_28c2f4:
    // 0x28c2f4: 0x0  nop
    ctx->pc = 0x28c2f4u;
    // NOP
label_28c2f8:
    // 0x28c2f8: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c2fc:
    // 0x28c2fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28c2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c300:
    // 0x28c300: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x28c300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_28c304:
    // 0x28c304: 0x320f809  jalr        $t9
label_28c308:
    if (ctx->pc == 0x28C308u) {
        ctx->pc = 0x28C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C304u;
        // 0x28c308: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C30Cu;
        goto label_28c30c;
    }
    ctx->pc = 0x28C304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C30Cu);
        ctx->pc = 0x28C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C304u;
        // 0x28c308: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C304u, 0x28C30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C30Cu;
label_28c30c:
    // 0x28c30c: 0x86a30080  lh          $v1, 0x80($s5)
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
label_28c310:
    // 0x28c310: 0xa6a30078  sh          $v1, 0x78($s5)
    ctx->pc = 0x28c310u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 3));
label_28c314:
    // 0x28c314: 0x0  nop
    ctx->pc = 0x28c314u;
    // NOP
label_28c318:
    // 0x28c318: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28c31c:
    // 0x28c31c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28c31cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28c320:
    // 0x28c320: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_28c324:
    // 0x28c324: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x28c324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_28c328:
    // 0x28c328: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x28c328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28c32c:
    // 0x28c32c: 0x1460ff3e  bnez        $v1, . + 4 + (-0xC2 << 2)
label_28c330:
    if (ctx->pc == 0x28C330u) {
        ctx->pc = 0x28C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C32Cu;
        // 0x28c330: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C334u;
        goto label_28c334;
    }
    ctx->pc = 0x28C32Cu;
    {
        const bool branch_taken_0x28c32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C32Cu;
        // 0x28c330: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c32c) {
            ctx->pc = 0x28C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c028;
        }
    }
    ctx->pc = 0x28C334u;
label_28c334:
    // 0x28c334: 0x0  nop
    ctx->pc = 0x28c334u;
    // NOP
label_28c338:
    // 0x28c338: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28c33c:
    // 0x28c33c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28c340:
    // 0x28c340: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x28c340u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28c344:
    // 0x28c344: 0x1460ff2a  bnez        $v1, . + 4 + (-0xD6 << 2)
label_28c348:
    if (ctx->pc == 0x28C348u) {
        ctx->pc = 0x28C34Cu;
        goto label_28c34c;
    }
    ctx->pc = 0x28C344u;
    {
        const bool branch_taken_0x28c344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c344) {
            ctx->pc = 0x28BFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bff0;
        }
    }
    ctx->pc = 0x28C34Cu;
label_28c34c:
    // 0x28c34c: 0x10000006  b           . + 4 + (0x6 << 2)
label_28c350:
    if (ctx->pc == 0x28C350u) {
        ctx->pc = 0x28C354u;
        goto label_28c354;
    }
    ctx->pc = 0x28C34Cu;
    {
        const bool branch_taken_0x28c34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c34c) {
            ctx->pc = 0x28C368u;
            goto label_28c368;
        }
    }
    ctx->pc = 0x28C354u;
label_28c354:
    // 0x28c354: 0x0  nop
    ctx->pc = 0x28c354u;
    // NOP
label_28c358:
    // 0x28c358: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x28c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_28c35c:
    // 0x28c35c: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x28c35cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_28c360:
    // 0x28c360: 0xc096c38  jal         func_25B0E0
label_28c364:
    if (ctx->pc == 0x28C364u) {
        ctx->pc = 0x28C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C360u;
        // 0x28c364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C368u;
        goto label_28c368;
    }
    ctx->pc = 0x28C360u;
    SET_GPR_U32(ctx, 31, 0x28C368u);
    ctx->pc = 0x28C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C360u;
    // 0x28c364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0E0u, 0x28C360u, 0x28C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C368u;
label_28c368:
    // 0x28c368: 0x92a30050  lbu         $v1, 0x50($s5)
    ctx->pc = 0x28c368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
label_28c36c:
    // 0x28c36c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x28c36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_28c370:
    // 0x28c370: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_28c374:
    if (ctx->pc == 0x28C374u) {
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C378u;
        goto label_28c378;
    }
    ctx->pc = 0x28C370u;
    {
        const bool branch_taken_0x28c370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C370u;
        // 0x28c374: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c370) {
            ctx->pc = 0x28C380u;
            goto label_28c380;
        }
    }
    ctx->pc = 0x28C378u;
label_28c378:
    // 0x28c378: 0xc096b58  jal         func_25AD60
label_28c37c:
    if (ctx->pc == 0x28C37Cu) {
        ctx->pc = 0x28C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C378u;
        // 0x28c37c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C380u;
        goto label_28c380;
    }
    ctx->pc = 0x28C378u;
    SET_GPR_U32(ctx, 31, 0x28C380u);
    ctx->pc = 0x28C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C378u;
    // 0x28c37c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x28C378u, 0x28C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C380u;
label_28c380:
    // 0x28c380: 0x86a30054  lh          $v1, 0x54($s5)
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 84)));
label_28c384:
    // 0x28c384: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28c388:
    // 0x28c388: 0xa6a30054  sh          $v1, 0x54($s5)
    ctx->pc = 0x28c388u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 84), (uint16_t)GPR_U32(ctx, 3));
label_28c38c:
    // 0x28c38c: 0x0  nop
    ctx->pc = 0x28c38cu;
    // NOP
label_28c390:
    // 0x28c390: 0x86a4007a  lh          $a0, 0x7A($s5)
    ctx->pc = 0x28c390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 122)));
label_28c394:
    // 0x28c394: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c398:
    // 0x28c398: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_28c39c:
    if (ctx->pc == 0x28C39Cu) {
        ctx->pc = 0x28C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C398u;
        // 0x28c39c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3A0u;
        goto label_28c3a0;
    }
    ctx->pc = 0x28C398u;
    {
        const bool branch_taken_0x28c398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C398u;
        // 0x28c39c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c398) {
            ctx->pc = 0x28C3B8u;
            goto label_28c3b8;
        }
    }
    ctx->pc = 0x28C3A0u;
label_28c3a0:
    // 0x28c3a0: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c3a4:
    // 0x28c3a4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28c3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_28c3a8:
    // 0x28c3a8: 0x320f809  jalr        $t9
label_28c3ac:
    if (ctx->pc == 0x28C3ACu) {
        ctx->pc = 0x28C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3A8u;
        // 0x28c3ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3B0u;
        goto label_28c3b0;
    }
    ctx->pc = 0x28C3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C3B0u);
        ctx->pc = 0x28C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3A8u;
        // 0x28c3ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C3A8u, 0x28C3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C3B0u;
label_28c3b0:
    // 0x28c3b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c3b4:
    // 0x28c3b4: 0x0  nop
    ctx->pc = 0x28c3b4u;
    // NOP
label_28c3b8:
    // 0x28c3b8: 0x86a4007c  lh          $a0, 0x7C($s5)
    ctx->pc = 0x28c3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 124)));
label_28c3bc:
    // 0x28c3bc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c3c0:
    // 0x28c3c0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_28c3c4:
    if (ctx->pc == 0x28C3C4u) {
        ctx->pc = 0x28C3C8u;
        goto label_28c3c8;
    }
    ctx->pc = 0x28C3C0u;
    {
        const bool branch_taken_0x28c3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c3c0) {
            ctx->pc = 0x28C3E0u;
            goto label_28c3e0;
        }
    }
    ctx->pc = 0x28C3C8u;
label_28c3c8:
    // 0x28c3c8: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c3cc:
    // 0x28c3cc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x28c3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_28c3d0:
    // 0x28c3d0: 0x320f809  jalr        $t9
label_28c3d4:
    if (ctx->pc == 0x28C3D4u) {
        ctx->pc = 0x28C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3D0u;
        // 0x28c3d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3D8u;
        goto label_28c3d8;
    }
    ctx->pc = 0x28C3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C3D8u);
        ctx->pc = 0x28C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3D0u;
        // 0x28c3d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C3D0u, 0x28C3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C3D8u;
label_28c3d8:
    // 0x28c3d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c3dc:
    // 0x28c3dc: 0x0  nop
    ctx->pc = 0x28c3dcu;
    // NOP
label_28c3e0:
    // 0x28c3e0: 0x86a4007e  lh          $a0, 0x7E($s5)
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 126)));
label_28c3e4:
    // 0x28c3e4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c3e8:
    // 0x28c3e8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_28c3ec:
    if (ctx->pc == 0x28C3ECu) {
        ctx->pc = 0x28C3F0u;
        goto label_28c3f0;
    }
    ctx->pc = 0x28C3E8u;
    {
        const bool branch_taken_0x28c3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c3e8) {
            ctx->pc = 0x28C408u;
            goto label_28c408;
        }
    }
    ctx->pc = 0x28C3F0u;
label_28c3f0:
    // 0x28c3f0: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c3f4:
    // 0x28c3f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x28c3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_28c3f8:
    // 0x28c3f8: 0x320f809  jalr        $t9
label_28c3fc:
    if (ctx->pc == 0x28C3FCu) {
        ctx->pc = 0x28C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3F8u;
        // 0x28c3fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C400u;
        goto label_28c400;
    }
    ctx->pc = 0x28C3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C400u);
        ctx->pc = 0x28C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3F8u;
        // 0x28c3fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C3F8u, 0x28C400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C400u;
label_28c400:
    // 0x28c400: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c404:
    // 0x28c404: 0x0  nop
    ctx->pc = 0x28c404u;
    // NOP
label_28c408:
    // 0x28c408: 0x86a40080  lh          $a0, 0x80($s5)
    ctx->pc = 0x28c408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 128)));
label_28c40c:
    // 0x28c40c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c410:
    // 0x28c410: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_28c414:
    if (ctx->pc == 0x28C414u) {
        ctx->pc = 0x28C418u;
        goto label_28c418;
    }
    ctx->pc = 0x28C410u;
    {
        const bool branch_taken_0x28c410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c410) {
            ctx->pc = 0x28C430u;
            goto label_28c430;
        }
    }
    ctx->pc = 0x28C418u;
label_28c418:
    // 0x28c418: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x28c418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_28c41c:
    // 0x28c41c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x28c41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_28c420:
    // 0x28c420: 0x320f809  jalr        $t9
label_28c424:
    if (ctx->pc == 0x28C424u) {
        ctx->pc = 0x28C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C420u;
        // 0x28c424: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C428u;
        goto label_28c428;
    }
    ctx->pc = 0x28C420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C428u);
        ctx->pc = 0x28C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C420u;
        // 0x28c424: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C420u, 0x28C428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C428u;
label_28c428:
    // 0x28c428: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28c428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c42c:
    // 0x28c42c: 0x0  nop
    ctx->pc = 0x28c42cu;
    // NOP
label_28c430:
    // 0x28c430: 0x92a30050  lbu         $v1, 0x50($s5)
    ctx->pc = 0x28c430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
label_28c434:
    // 0x28c434: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28c434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_28c438:
    // 0x28c438: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_28c43c:
    if (ctx->pc == 0x28C43Cu) {
        ctx->pc = 0x28C440u;
        goto label_28c440;
    }
    ctx->pc = 0x28C438u;
    {
        const bool branch_taken_0x28c438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c438) {
            ctx->pc = 0x28C450u;
            goto label_28c450;
        }
    }
    ctx->pc = 0x28C440u;
label_28c440:
    // 0x28c440: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28c444:
    if (ctx->pc == 0x28C444u) {
        ctx->pc = 0x28C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C440u;
        // 0x28c444: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C448u;
        goto label_28c448;
    }
    ctx->pc = 0x28C440u;
    {
        const bool branch_taken_0x28c440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C440u;
        // 0x28c444: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c440) {
            ctx->pc = 0x28C450u;
            goto label_28c450;
        }
    }
    ctx->pc = 0x28C448u;
label_28c448:
    // 0x28c448: 0xc096b54  jal         func_25AD50
label_28c44c:
    if (ctx->pc == 0x28C44Cu) {
        ctx->pc = 0x28C450u;
        goto label_28c450;
    }
    ctx->pc = 0x28C448u;
    SET_GPR_U32(ctx, 31, 0x28C450u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x28C448u, 0x28C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C450u;
label_28c450:
    // 0x28c450: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x28c450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_28c454:
    // 0x28c454: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x28c454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28c458:
    // 0x28c458: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x28c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28c45c:
    // 0x28c45c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x28c45cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28c460:
    // 0x28c460: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x28c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28c464:
    // 0x28c464: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28c464u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28c468:
    // 0x28c468: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x28c468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28c46c:
    // 0x28c46c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28c46cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c470:
    // 0x28c470: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28c470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c474:
    // 0x28c474: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28c474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c478:
    // 0x28c478: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28c478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c47c:
    // 0x28c47c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28c47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c480:
    // 0x28c480: 0x3e00008  jr          $ra
label_28c484:
    if (ctx->pc == 0x28C484u) {
        ctx->pc = 0x28C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C480u;
        // 0x28c484: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C488u;
        goto label_fallthrough_0x28c480;
    }
    ctx->pc = 0x28C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C480u;
        // 0x28c484: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c480:
    ctx->pc = 0x28C488u;
}
