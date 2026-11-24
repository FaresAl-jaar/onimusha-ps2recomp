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

// Function: sub_001EE940
// Address: 0x1ee940 - 0x1eef20
void sub_001EE940_0x1ee940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE940_0x1ee940");
#endif

    switch (ctx->pc) {
        case 0x1ee940u: goto label_1ee940;
        case 0x1ee944u: goto label_1ee944;
        case 0x1ee948u: goto label_1ee948;
        case 0x1ee94cu: goto label_1ee94c;
        case 0x1ee950u: goto label_1ee950;
        case 0x1ee954u: goto label_1ee954;
        case 0x1ee958u: goto label_1ee958;
        case 0x1ee95cu: goto label_1ee95c;
        case 0x1ee960u: goto label_1ee960;
        case 0x1ee964u: goto label_1ee964;
        case 0x1ee968u: goto label_1ee968;
        case 0x1ee96cu: goto label_1ee96c;
        case 0x1ee970u: goto label_1ee970;
        case 0x1ee974u: goto label_1ee974;
        case 0x1ee978u: goto label_1ee978;
        case 0x1ee97cu: goto label_1ee97c;
        case 0x1ee980u: goto label_1ee980;
        case 0x1ee984u: goto label_1ee984;
        case 0x1ee988u: goto label_1ee988;
        case 0x1ee98cu: goto label_1ee98c;
        case 0x1ee990u: goto label_1ee990;
        case 0x1ee994u: goto label_1ee994;
        case 0x1ee998u: goto label_1ee998;
        case 0x1ee99cu: goto label_1ee99c;
        case 0x1ee9a0u: goto label_1ee9a0;
        case 0x1ee9a4u: goto label_1ee9a4;
        case 0x1ee9a8u: goto label_1ee9a8;
        case 0x1ee9acu: goto label_1ee9ac;
        case 0x1ee9b0u: goto label_1ee9b0;
        case 0x1ee9b4u: goto label_1ee9b4;
        case 0x1ee9b8u: goto label_1ee9b8;
        case 0x1ee9bcu: goto label_1ee9bc;
        case 0x1ee9c0u: goto label_1ee9c0;
        case 0x1ee9c4u: goto label_1ee9c4;
        case 0x1ee9c8u: goto label_1ee9c8;
        case 0x1ee9ccu: goto label_1ee9cc;
        case 0x1ee9d0u: goto label_1ee9d0;
        case 0x1ee9d4u: goto label_1ee9d4;
        case 0x1ee9d8u: goto label_1ee9d8;
        case 0x1ee9dcu: goto label_1ee9dc;
        case 0x1ee9e0u: goto label_1ee9e0;
        case 0x1ee9e4u: goto label_1ee9e4;
        case 0x1ee9e8u: goto label_1ee9e8;
        case 0x1ee9ecu: goto label_1ee9ec;
        case 0x1ee9f0u: goto label_1ee9f0;
        case 0x1ee9f4u: goto label_1ee9f4;
        case 0x1ee9f8u: goto label_1ee9f8;
        case 0x1ee9fcu: goto label_1ee9fc;
        case 0x1eea00u: goto label_1eea00;
        case 0x1eea04u: goto label_1eea04;
        case 0x1eea08u: goto label_1eea08;
        case 0x1eea0cu: goto label_1eea0c;
        case 0x1eea10u: goto label_1eea10;
        case 0x1eea14u: goto label_1eea14;
        case 0x1eea18u: goto label_1eea18;
        case 0x1eea1cu: goto label_1eea1c;
        case 0x1eea20u: goto label_1eea20;
        case 0x1eea24u: goto label_1eea24;
        case 0x1eea28u: goto label_1eea28;
        case 0x1eea2cu: goto label_1eea2c;
        case 0x1eea30u: goto label_1eea30;
        case 0x1eea34u: goto label_1eea34;
        case 0x1eea38u: goto label_1eea38;
        case 0x1eea3cu: goto label_1eea3c;
        case 0x1eea40u: goto label_1eea40;
        case 0x1eea44u: goto label_1eea44;
        case 0x1eea48u: goto label_1eea48;
        case 0x1eea4cu: goto label_1eea4c;
        case 0x1eea50u: goto label_1eea50;
        case 0x1eea54u: goto label_1eea54;
        case 0x1eea58u: goto label_1eea58;
        case 0x1eea5cu: goto label_1eea5c;
        case 0x1eea60u: goto label_1eea60;
        case 0x1eea64u: goto label_1eea64;
        case 0x1eea68u: goto label_1eea68;
        case 0x1eea6cu: goto label_1eea6c;
        case 0x1eea70u: goto label_1eea70;
        case 0x1eea74u: goto label_1eea74;
        case 0x1eea78u: goto label_1eea78;
        case 0x1eea7cu: goto label_1eea7c;
        case 0x1eea80u: goto label_1eea80;
        case 0x1eea84u: goto label_1eea84;
        case 0x1eea88u: goto label_1eea88;
        case 0x1eea8cu: goto label_1eea8c;
        case 0x1eea90u: goto label_1eea90;
        case 0x1eea94u: goto label_1eea94;
        case 0x1eea98u: goto label_1eea98;
        case 0x1eea9cu: goto label_1eea9c;
        case 0x1eeaa0u: goto label_1eeaa0;
        case 0x1eeaa4u: goto label_1eeaa4;
        case 0x1eeaa8u: goto label_1eeaa8;
        case 0x1eeaacu: goto label_1eeaac;
        case 0x1eeab0u: goto label_1eeab0;
        case 0x1eeab4u: goto label_1eeab4;
        case 0x1eeab8u: goto label_1eeab8;
        case 0x1eeabcu: goto label_1eeabc;
        case 0x1eeac0u: goto label_1eeac0;
        case 0x1eeac4u: goto label_1eeac4;
        case 0x1eeac8u: goto label_1eeac8;
        case 0x1eeaccu: goto label_1eeacc;
        case 0x1eead0u: goto label_1eead0;
        case 0x1eead4u: goto label_1eead4;
        case 0x1eead8u: goto label_1eead8;
        case 0x1eeadcu: goto label_1eeadc;
        case 0x1eeae0u: goto label_1eeae0;
        case 0x1eeae4u: goto label_1eeae4;
        case 0x1eeae8u: goto label_1eeae8;
        case 0x1eeaecu: goto label_1eeaec;
        case 0x1eeaf0u: goto label_1eeaf0;
        case 0x1eeaf4u: goto label_1eeaf4;
        case 0x1eeaf8u: goto label_1eeaf8;
        case 0x1eeafcu: goto label_1eeafc;
        case 0x1eeb00u: goto label_1eeb00;
        case 0x1eeb04u: goto label_1eeb04;
        case 0x1eeb08u: goto label_1eeb08;
        case 0x1eeb0cu: goto label_1eeb0c;
        case 0x1eeb10u: goto label_1eeb10;
        case 0x1eeb14u: goto label_1eeb14;
        case 0x1eeb18u: goto label_1eeb18;
        case 0x1eeb1cu: goto label_1eeb1c;
        case 0x1eeb20u: goto label_1eeb20;
        case 0x1eeb24u: goto label_1eeb24;
        case 0x1eeb28u: goto label_1eeb28;
        case 0x1eeb2cu: goto label_1eeb2c;
        case 0x1eeb30u: goto label_1eeb30;
        case 0x1eeb34u: goto label_1eeb34;
        case 0x1eeb38u: goto label_1eeb38;
        case 0x1eeb3cu: goto label_1eeb3c;
        case 0x1eeb40u: goto label_1eeb40;
        case 0x1eeb44u: goto label_1eeb44;
        case 0x1eeb48u: goto label_1eeb48;
        case 0x1eeb4cu: goto label_1eeb4c;
        case 0x1eeb50u: goto label_1eeb50;
        case 0x1eeb54u: goto label_1eeb54;
        case 0x1eeb58u: goto label_1eeb58;
        case 0x1eeb5cu: goto label_1eeb5c;
        case 0x1eeb60u: goto label_1eeb60;
        case 0x1eeb64u: goto label_1eeb64;
        case 0x1eeb68u: goto label_1eeb68;
        case 0x1eeb6cu: goto label_1eeb6c;
        case 0x1eeb70u: goto label_1eeb70;
        case 0x1eeb74u: goto label_1eeb74;
        case 0x1eeb78u: goto label_1eeb78;
        case 0x1eeb7cu: goto label_1eeb7c;
        case 0x1eeb80u: goto label_1eeb80;
        case 0x1eeb84u: goto label_1eeb84;
        case 0x1eeb88u: goto label_1eeb88;
        case 0x1eeb8cu: goto label_1eeb8c;
        case 0x1eeb90u: goto label_1eeb90;
        case 0x1eeb94u: goto label_1eeb94;
        case 0x1eeb98u: goto label_1eeb98;
        case 0x1eeb9cu: goto label_1eeb9c;
        case 0x1eeba0u: goto label_1eeba0;
        case 0x1eeba4u: goto label_1eeba4;
        case 0x1eeba8u: goto label_1eeba8;
        case 0x1eebacu: goto label_1eebac;
        case 0x1eebb0u: goto label_1eebb0;
        case 0x1eebb4u: goto label_1eebb4;
        case 0x1eebb8u: goto label_1eebb8;
        case 0x1eebbcu: goto label_1eebbc;
        case 0x1eebc0u: goto label_1eebc0;
        case 0x1eebc4u: goto label_1eebc4;
        case 0x1eebc8u: goto label_1eebc8;
        case 0x1eebccu: goto label_1eebcc;
        case 0x1eebd0u: goto label_1eebd0;
        case 0x1eebd4u: goto label_1eebd4;
        case 0x1eebd8u: goto label_1eebd8;
        case 0x1eebdcu: goto label_1eebdc;
        case 0x1eebe0u: goto label_1eebe0;
        case 0x1eebe4u: goto label_1eebe4;
        case 0x1eebe8u: goto label_1eebe8;
        case 0x1eebecu: goto label_1eebec;
        case 0x1eebf0u: goto label_1eebf0;
        case 0x1eebf4u: goto label_1eebf4;
        case 0x1eebf8u: goto label_1eebf8;
        case 0x1eebfcu: goto label_1eebfc;
        case 0x1eec00u: goto label_1eec00;
        case 0x1eec04u: goto label_1eec04;
        case 0x1eec08u: goto label_1eec08;
        case 0x1eec0cu: goto label_1eec0c;
        case 0x1eec10u: goto label_1eec10;
        case 0x1eec14u: goto label_1eec14;
        case 0x1eec18u: goto label_1eec18;
        case 0x1eec1cu: goto label_1eec1c;
        case 0x1eec20u: goto label_1eec20;
        case 0x1eec24u: goto label_1eec24;
        case 0x1eec28u: goto label_1eec28;
        case 0x1eec2cu: goto label_1eec2c;
        case 0x1eec30u: goto label_1eec30;
        case 0x1eec34u: goto label_1eec34;
        case 0x1eec38u: goto label_1eec38;
        case 0x1eec3cu: goto label_1eec3c;
        case 0x1eec40u: goto label_1eec40;
        case 0x1eec44u: goto label_1eec44;
        case 0x1eec48u: goto label_1eec48;
        case 0x1eec4cu: goto label_1eec4c;
        case 0x1eec50u: goto label_1eec50;
        case 0x1eec54u: goto label_1eec54;
        case 0x1eec58u: goto label_1eec58;
        case 0x1eec5cu: goto label_1eec5c;
        case 0x1eec60u: goto label_1eec60;
        case 0x1eec64u: goto label_1eec64;
        case 0x1eec68u: goto label_1eec68;
        case 0x1eec6cu: goto label_1eec6c;
        case 0x1eec70u: goto label_1eec70;
        case 0x1eec74u: goto label_1eec74;
        case 0x1eec78u: goto label_1eec78;
        case 0x1eec7cu: goto label_1eec7c;
        case 0x1eec80u: goto label_1eec80;
        case 0x1eec84u: goto label_1eec84;
        case 0x1eec88u: goto label_1eec88;
        case 0x1eec8cu: goto label_1eec8c;
        case 0x1eec90u: goto label_1eec90;
        case 0x1eec94u: goto label_1eec94;
        case 0x1eec98u: goto label_1eec98;
        case 0x1eec9cu: goto label_1eec9c;
        case 0x1eeca0u: goto label_1eeca0;
        case 0x1eeca4u: goto label_1eeca4;
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecacu: goto label_1eecac;
        case 0x1eecb0u: goto label_1eecb0;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecb8u: goto label_1eecb8;
        case 0x1eecbcu: goto label_1eecbc;
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eecc4u: goto label_1eecc4;
        case 0x1eecc8u: goto label_1eecc8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eecd0u: goto label_1eecd0;
        case 0x1eecd4u: goto label_1eecd4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eecdcu: goto label_1eecdc;
        case 0x1eece0u: goto label_1eece0;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eece8u: goto label_1eece8;
        case 0x1eececu: goto label_1eecec;
        case 0x1eecf0u: goto label_1eecf0;
        case 0x1eecf4u: goto label_1eecf4;
        case 0x1eecf8u: goto label_1eecf8;
        case 0x1eecfcu: goto label_1eecfc;
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed04u: goto label_1eed04;
        case 0x1eed08u: goto label_1eed08;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed10u: goto label_1eed10;
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed20u: goto label_1eed20;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed28u: goto label_1eed28;
        case 0x1eed2cu: goto label_1eed2c;
        case 0x1eed30u: goto label_1eed30;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed3cu: goto label_1eed3c;
        case 0x1eed40u: goto label_1eed40;
        case 0x1eed44u: goto label_1eed44;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed4cu: goto label_1eed4c;
        case 0x1eed50u: goto label_1eed50;
        case 0x1eed54u: goto label_1eed54;
        case 0x1eed58u: goto label_1eed58;
        case 0x1eed5cu: goto label_1eed5c;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed64u: goto label_1eed64;
        case 0x1eed68u: goto label_1eed68;
        case 0x1eed6cu: goto label_1eed6c;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed74u: goto label_1eed74;
        case 0x1eed78u: goto label_1eed78;
        case 0x1eed7cu: goto label_1eed7c;
        case 0x1eed80u: goto label_1eed80;
        case 0x1eed84u: goto label_1eed84;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eed9cu: goto label_1eed9c;
        case 0x1eeda0u: goto label_1eeda0;
        case 0x1eeda4u: goto label_1eeda4;
        case 0x1eeda8u: goto label_1eeda8;
        case 0x1eedacu: goto label_1eedac;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eedbcu: goto label_1eedbc;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedc4u: goto label_1eedc4;
        case 0x1eedc8u: goto label_1eedc8;
        case 0x1eedccu: goto label_1eedcc;
        case 0x1eedd0u: goto label_1eedd0;
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eeddcu: goto label_1eeddc;
        case 0x1eede0u: goto label_1eede0;
        case 0x1eede4u: goto label_1eede4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedecu: goto label_1eedec;
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        case 0x1eee08u: goto label_1eee08;
        case 0x1eee0cu: goto label_1eee0c;
        case 0x1eee10u: goto label_1eee10;
        case 0x1eee14u: goto label_1eee14;
        case 0x1eee18u: goto label_1eee18;
        case 0x1eee1cu: goto label_1eee1c;
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        case 0x1eee54u: goto label_1eee54;
        case 0x1eee58u: goto label_1eee58;
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee60u: goto label_1eee60;
        case 0x1eee64u: goto label_1eee64;
        case 0x1eee68u: goto label_1eee68;
        case 0x1eee6cu: goto label_1eee6c;
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee7cu: goto label_1eee7c;
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee84u: goto label_1eee84;
        case 0x1eee88u: goto label_1eee88;
        case 0x1eee8cu: goto label_1eee8c;
        case 0x1eee90u: goto label_1eee90;
        case 0x1eee94u: goto label_1eee94;
        case 0x1eee98u: goto label_1eee98;
        case 0x1eee9cu: goto label_1eee9c;
        case 0x1eeea0u: goto label_1eeea0;
        case 0x1eeea4u: goto label_1eeea4;
        case 0x1eeea8u: goto label_1eeea8;
        case 0x1eeeacu: goto label_1eeeac;
        case 0x1eeeb0u: goto label_1eeeb0;
        case 0x1eeeb4u: goto label_1eeeb4;
        case 0x1eeeb8u: goto label_1eeeb8;
        case 0x1eeebcu: goto label_1eeebc;
        case 0x1eeec0u: goto label_1eeec0;
        case 0x1eeec4u: goto label_1eeec4;
        case 0x1eeec8u: goto label_1eeec8;
        case 0x1eeeccu: goto label_1eeecc;
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeed4u: goto label_1eeed4;
        case 0x1eeed8u: goto label_1eeed8;
        case 0x1eeedcu: goto label_1eeedc;
        case 0x1eeee0u: goto label_1eeee0;
        case 0x1eeee4u: goto label_1eeee4;
        case 0x1eeee8u: goto label_1eeee8;
        case 0x1eeeecu: goto label_1eeeec;
        case 0x1eeef0u: goto label_1eeef0;
        case 0x1eeef4u: goto label_1eeef4;
        case 0x1eeef8u: goto label_1eeef8;
        case 0x1eeefcu: goto label_1eeefc;
        case 0x1eef00u: goto label_1eef00;
        case 0x1eef04u: goto label_1eef04;
        case 0x1eef08u: goto label_1eef08;
        case 0x1eef0cu: goto label_1eef0c;
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef14u: goto label_1eef14;
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef1cu: goto label_1eef1c;
        default: break;
    }

    ctx->pc = 0x1ee940u;

label_1ee940:
    // 0x1ee940: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ee940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ee944:
    // 0x1ee944: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ee944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ee948:
    // 0x1ee948: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ee948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ee94c:
    // 0x1ee94c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ee94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ee950:
    // 0x1ee950: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ee950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ee954:
    // 0x1ee954: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ee954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ee958:
    // 0x1ee958: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ee958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee95c:
    // 0x1ee95c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ee960:
    // 0x1ee960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ee964:
    // 0x1ee964: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ee968:
    // 0x1ee968: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ee968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee96c:
    // 0x1ee96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee970:
    // 0x1ee970: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ee970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee974:
    // 0x1ee974: 0xc07bc10  jal         func_1EF040
label_1ee978:
    if (ctx->pc == 0x1EE978u) {
        ctx->pc = 0x1EE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE974u;
        // 0x1ee978: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE97Cu;
        goto label_1ee97c;
    }
    ctx->pc = 0x1EE974u;
    SET_GPR_U32(ctx, 31, 0x1EE97Cu);
    ctx->pc = 0x1EE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE974u;
    // 0x1ee978: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x1EE974u, 0x1EE97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE97Cu;
label_1ee97c:
    // 0x1ee97c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ee980:
    if (ctx->pc == 0x1EE980u) {
        ctx->pc = 0x1EE984u;
        goto label_1ee984;
    }
    ctx->pc = 0x1EE97Cu;
    {
        const bool branch_taken_0x1ee97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee97c) {
            ctx->pc = 0x1EE990u;
            goto label_1ee990;
        }
    }
    ctx->pc = 0x1EE984u;
label_1ee984:
    // 0x1ee984: 0x1000015a  b           . + 4 + (0x15A << 2)
label_1ee988:
    if (ctx->pc == 0x1EE988u) {
        ctx->pc = 0x1EE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE984u;
        // 0x1ee988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE98Cu;
        goto label_1ee98c;
    }
    ctx->pc = 0x1EE984u;
    {
        const bool branch_taken_0x1ee984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE984u;
        // 0x1ee988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee984) {
            ctx->pc = 0x1EEEF0u;
            goto label_1eeef0;
        }
    }
    ctx->pc = 0x1EE98Cu;
label_1ee98c:
    // 0x1ee98c: 0x0  nop
    ctx->pc = 0x1ee98cu;
    // NOP
label_1ee990:
    // 0x1ee990: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ee994:
    // 0x1ee994: 0x9263001a  lbu         $v1, 0x1A($s3)
    ctx->pc = 0x1ee994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
label_1ee998:
    // 0x1ee998: 0x9262001b  lbu         $v0, 0x1B($s3)
    ctx->pc = 0x1ee998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
label_1ee99c:
    // 0x1ee99c: 0x86640012  lh          $a0, 0x12($s3)
    ctx->pc = 0x1ee99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_1ee9a0:
    // 0x1ee9a0: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1ee9a4:
    // 0x1ee9a4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1ee9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1ee9a8:
    // 0x1ee9a8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1ee9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1ee9ac:
    // 0x1ee9ac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1ee9acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ee9b0:
    // 0x1ee9b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ee9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ee9b4:
    // 0x1ee9b4: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x1ee9b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ee9b8:
    // 0x1ee9b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ee9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1ee9bc:
    // 0x1ee9bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ee9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ee9c0:
    // 0x1ee9c0: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_1ee9c4:
    if (ctx->pc == 0x1EE9C4u) {
        ctx->pc = 0x1EE9C8u;
        goto label_1ee9c8;
    }
    ctx->pc = 0x1EE9C0u;
    {
        const bool branch_taken_0x1ee9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9c0) {
            ctx->pc = 0x1EECC8u;
            goto label_1eecc8;
        }
    }
    ctx->pc = 0x1EE9C8u;
label_1ee9c8:
    // 0x1ee9c8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ee9cc:
    // 0x1ee9cc: 0x86620010  lh          $v0, 0x10($s3)
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_1ee9d0:
    // 0x1ee9d0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ee9d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee9d4:
    // 0x1ee9d4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1ee9d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee9d8:
    // 0x1ee9d8: 0x142000bb  bnez        $at, . + 4 + (0xBB << 2)
label_1ee9dc:
    if (ctx->pc == 0x1EE9DCu) {
        ctx->pc = 0x1EE9E0u;
        goto label_1ee9e0;
    }
    ctx->pc = 0x1EE9D8u;
    {
        const bool branch_taken_0x1ee9d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9d8) {
            ctx->pc = 0x1EECC8u;
            goto label_1eecc8;
        }
    }
    ctx->pc = 0x1EE9E0u;
label_1ee9e0:
    // 0x1ee9e0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1ee9e4:
    // 0x1ee9e4: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1ee9e8:
    // 0x1ee9e8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ee9e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ee9ec:
    // 0x1ee9ec: 0x102000ac  beqz        $at, . + 4 + (0xAC << 2)
label_1ee9f0:
    if (ctx->pc == 0x1EE9F0u) {
        ctx->pc = 0x1EE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9ECu;
        // 0x1ee9f0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE9F4u;
        goto label_1ee9f4;
    }
    ctx->pc = 0x1EE9ECu;
    {
        const bool branch_taken_0x1ee9ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9ECu;
        // 0x1ee9f0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9ec) {
            ctx->pc = 0x1EECA0u;
            goto label_1eeca0;
        }
    }
    ctx->pc = 0x1EE9F4u;
label_1ee9f4:
    // 0x1ee9f4: 0x0  nop
    ctx->pc = 0x1ee9f4u;
    // NOP
label_1ee9f8:
    // 0x1ee9f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1ee9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee9fc:
    // 0x1ee9fc: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1eea00:
    // 0x1eea00: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
label_1eea04:
    if (ctx->pc == 0x1EEA04u) {
        ctx->pc = 0x1EEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA00u;
        // 0x1eea04: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA08u;
        goto label_1eea08;
    }
    ctx->pc = 0x1EEA00u;
    {
        const bool branch_taken_0x1eea00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA00u;
        // 0x1eea04: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea00) {
            ctx->pc = 0x1EEC30u;
            goto label_1eec30;
        }
    }
    ctx->pc = 0x1EEA08u;
label_1eea08:
    // 0x1eea08: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_1eea0c:
    if (ctx->pc == 0x1EEA0Cu) {
        ctx->pc = 0x1EEA10u;
        goto label_1eea10;
    }
    ctx->pc = 0x1EEA08u;
    {
        const bool branch_taken_0x1eea08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eea08) {
            ctx->pc = 0x1EEB38u;
            goto label_1eeb38;
        }
    }
    ctx->pc = 0x1EEA10u;
label_1eea10:
    // 0x1eea10: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x1eea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_1eea14:
    // 0x1eea14: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1eea18:
    if (ctx->pc == 0x1EEA18u) {
        ctx->pc = 0x1EEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA14u;
        // 0x1eea18: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA1Cu;
        goto label_1eea1c;
    }
    ctx->pc = 0x1EEA14u;
    {
        const bool branch_taken_0x1eea14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA14u;
        // 0x1eea18: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea14) {
            ctx->pc = 0x1EEA68u;
            goto label_1eea68;
        }
    }
    ctx->pc = 0x1EEA1Cu;
label_1eea1c:
    // 0x1eea1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1eea20:
    if (ctx->pc == 0x1EEA20u) {
        ctx->pc = 0x1EEA24u;
        goto label_1eea24;
    }
    ctx->pc = 0x1EEA1Cu;
    {
        const bool branch_taken_0x1eea1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eea1c) {
            ctx->pc = 0x1EEA38u;
            goto label_1eea38;
        }
    }
    ctx->pc = 0x1EEA24u;
label_1eea24:
    // 0x1eea24: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1eea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1eea28:
    // 0x1eea28: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
label_1eea2c:
    if (ctx->pc == 0x1EEA2Cu) {
        ctx->pc = 0x1EEA30u;
        goto label_1eea30;
    }
    ctx->pc = 0x1EEA28u;
    {
        const bool branch_taken_0x1eea28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eea28) {
            ctx->pc = 0x1EECA0u;
            goto label_1eeca0;
        }
    }
    ctx->pc = 0x1EEA30u;
label_1eea30:
    // 0x1eea30: 0x10000095  b           . + 4 + (0x95 << 2)
label_1eea34:
    if (ctx->pc == 0x1EEA34u) {
        ctx->pc = 0x1EEA38u;
        goto label_1eea38;
    }
    ctx->pc = 0x1EEA30u;
    {
        const bool branch_taken_0x1eea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eea30) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEA38u;
label_1eea38:
    // 0x1eea38: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1eea38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1eea3c:
    // 0x1eea3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eea40:
    // 0x1eea40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eea40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eea44:
    // 0x1eea44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eea48:
    // 0x1eea48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eea4c:
    // 0x1eea4c: 0x1080008e  beqz        $a0, . + 4 + (0x8E << 2)
label_1eea50:
    if (ctx->pc == 0x1EEA50u) {
        ctx->pc = 0x1EEA54u;
        goto label_1eea54;
    }
    ctx->pc = 0x1EEA4Cu;
    {
        const bool branch_taken_0x1eea4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eea4c) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEA54u;
label_1eea54:
    // 0x1eea54: 0xc076e10  jal         func_1DB840
label_1eea58:
    if (ctx->pc == 0x1EEA58u) {
        ctx->pc = 0x1EEA5Cu;
        goto label_1eea5c;
    }
    ctx->pc = 0x1EEA54u;
    SET_GPR_U32(ctx, 31, 0x1EEA5Cu);
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1EEA54u, 0x1EEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEA5Cu;
label_1eea5c:
    // 0x1eea5c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1eea60:
    if (ctx->pc == 0x1EEA60u) {
        ctx->pc = 0x1EEA64u;
        goto label_1eea64;
    }
    ctx->pc = 0x1EEA5Cu;
    {
        const bool branch_taken_0x1eea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eea5c) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEA64u;
label_1eea64:
    // 0x1eea64: 0x0  nop
    ctx->pc = 0x1eea64u;
    // NOP
label_1eea68:
    // 0x1eea68: 0x92150001  lbu         $s5, 0x1($s0)
    ctx->pc = 0x1eea68u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1eea6c:
    // 0x1eea6c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eea70:
    // 0x1eea70: 0x15a080  sll         $s4, $s5, 2
    ctx->pc = 0x1eea70u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1eea74:
    // 0x1eea74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eea78:
    // 0x1eea78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eea7c:
    // 0x1eea7c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
label_1eea80:
    if (ctx->pc == 0x1EEA80u) {
        ctx->pc = 0x1EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA7Cu;
        // 0x1eea80: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA84u;
        goto label_1eea84;
    }
    ctx->pc = 0x1EEA7Cu;
    {
        const bool branch_taken_0x1eea7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA7Cu;
        // 0x1eea80: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea7c) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEA84u;
label_1eea84:
    // 0x1eea84: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_1eea88:
    // 0x1eea88: 0xc096c88  jal         func_25B220
label_1eea8c:
    if (ctx->pc == 0x1EEA8Cu) {
        ctx->pc = 0x1EEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA88u;
        // 0x1eea8c: 0x2666001c  addiu       $a2, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA90u;
        goto label_1eea90;
    }
    ctx->pc = 0x1EEA88u;
    SET_GPR_U32(ctx, 31, 0x1EEA90u);
    ctx->pc = 0x1EEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEA88u;
    // 0x1eea8c: 0x2666001c  addiu       $a2, $s3, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1EEA88u, 0x1EEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEA90u;
label_1eea90:
    // 0x1eea90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1eea94:
    if (ctx->pc == 0x1EEA94u) {
        ctx->pc = 0x1EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA90u;
        // 0x1eea94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA98u;
        goto label_1eea98;
    }
    ctx->pc = 0x1EEA90u;
    {
        const bool branch_taken_0x1eea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA90u;
        // 0x1eea94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea90) {
            ctx->pc = 0x1EEAA0u;
            goto label_1eeaa0;
        }
    }
    ctx->pc = 0x1EEA98u;
label_1eea98:
    // 0x1eea98: 0xc076cc0  jal         func_1DB300
label_1eea9c:
    if (ctx->pc == 0x1EEA9Cu) {
        ctx->pc = 0x1EEAA0u;
        goto label_1eeaa0;
    }
    ctx->pc = 0x1EEA98u;
    SET_GPR_U32(ctx, 31, 0x1EEAA0u);
    ctx->pc = 0x1DB300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB300u, 0x1EEA98u, 0x1EEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEAA0u;
label_1eeaa0:
    // 0x1eeaa0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1eeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeaa4:
    // 0x1eeaa4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1eeaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1eeaa8:
    // 0x1eeaa8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1eeaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1eeaac:
    // 0x1eeaac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeab0:
    // 0x1eeab0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eeab4:
    // 0x1eeab4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eeab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eeab8:
    // 0x1eeab8: 0x10800073  beqz        $a0, . + 4 + (0x73 << 2)
label_1eeabc:
    if (ctx->pc == 0x1EEABCu) {
        ctx->pc = 0x1EEAC0u;
        goto label_1eeac0;
    }
    ctx->pc = 0x1EEAB8u;
    {
        const bool branch_taken_0x1eeab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeab8) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEAC0u;
label_1eeac0:
    // 0x1eeac0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1eeac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1eeac4:
    // 0x1eeac4: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1eeac8:
    // 0x1eeac8: 0x15443c  dsll32      $t0, $s5, 16
    ctx->pc = 0x1eeac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 16));
label_1eeacc:
    // 0x1eeacc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1eeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1eead0:
    // 0x1eead0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1eead0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_1eead4:
    // 0x1eead4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1eead4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eead8:
    // 0x1eead8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1eead8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eeadc:
    // 0x1eeadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eeae0:
    // 0x1eeae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eeae4:
    // 0x1eeae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eeae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eeae8:
    // 0x1eeae8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eeaec:
    // 0x1eeaec: 0xc076ce0  jal         func_1DB380
label_1eeaf0:
    if (ctx->pc == 0x1EEAF0u) {
        ctx->pc = 0x1EEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAECu;
        // 0x1eeaf0: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAF4u;
        goto label_1eeaf4;
    }
    ctx->pc = 0x1EEAECu;
    SET_GPR_U32(ctx, 31, 0x1EEAF4u);
    ctx->pc = 0x1EEAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEAECu;
    // 0x1eeaf0: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB380u, 0x1EEAECu, 0x1EEAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEAF4u;
label_1eeaf4:
    // 0x1eeaf4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_1eeaf8:
    if (ctx->pc == 0x1EEAF8u) {
        ctx->pc = 0x1EEAFCu;
        goto label_1eeafc;
    }
    ctx->pc = 0x1EEAF4u;
    {
        const bool branch_taken_0x1eeaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeaf4) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEAFCu;
label_1eeafc:
    // 0x1eeafc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeb00:
    // 0x1eeb00: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eeb04:
    // 0x1eeb04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eeb08:
    // 0x1eeb08: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
label_1eeb0c:
    if (ctx->pc == 0x1EEB0Cu) {
        ctx->pc = 0x1EEB10u;
        goto label_1eeb10;
    }
    ctx->pc = 0x1EEB08u;
    {
        const bool branch_taken_0x1eeb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb08) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEB10u;
label_1eeb10:
    // 0x1eeb10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1eeb14:
    if (ctx->pc == 0x1EEB14u) {
        ctx->pc = 0x1EEB18u;
        goto label_1eeb18;
    }
    ctx->pc = 0x1EEB10u;
    {
        const bool branch_taken_0x1eeb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb10) {
            ctx->pc = 0x1EEB28u;
            goto label_1eeb28;
        }
    }
    ctx->pc = 0x1EEB18u;
label_1eeb18:
    // 0x1eeb18: 0x8c990040  lw          $t9, 0x40($a0)
    ctx->pc = 0x1eeb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1eeb1c:
    // 0x1eeb1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1eeb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1eeb20:
    // 0x1eeb20: 0x320f809  jalr        $t9
label_1eeb24:
    if (ctx->pc == 0x1EEB24u) {
        ctx->pc = 0x1EEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB20u;
        // 0x1eeb24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB28u;
        goto label_1eeb28;
    }
    ctx->pc = 0x1EEB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EEB28u);
        ctx->pc = 0x1EEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB20u;
        // 0x1eeb24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB20u, 0x1EEB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEB28u;
label_1eeb28:
    // 0x1eeb28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eeb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeb2c:
    // 0x1eeb2c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eeb30:
    // 0x1eeb30: 0x10000055  b           . + 4 + (0x55 << 2)
label_1eeb34:
    if (ctx->pc == 0x1EEB34u) {
        ctx->pc = 0x1EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB30u;
        // 0x1eeb34: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB38u;
        goto label_1eeb38;
    }
    ctx->pc = 0x1EEB30u;
    {
        const bool branch_taken_0x1eeb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB30u;
        // 0x1eeb34: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb30) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEB38u;
label_1eeb38:
    // 0x1eeb38: 0x92170002  lbu         $s7, 0x2($s0)
    ctx->pc = 0x1eeb38u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1eeb3c:
    // 0x1eeb3c: 0x92140001  lbu         $s4, 0x1($s0)
    ctx->pc = 0x1eeb3cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1eeb40:
    // 0x1eeb40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1eeb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeb44:
    // 0x1eeb44: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1eeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_1eeb48:
    // 0x1eeb48: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1eeb4c:
    // 0x1eeb4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eeb50:
    // 0x1eeb50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1eeb54:
    // 0x1eeb54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eeb58:
    // 0x1eeb58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1eeb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eeb5c:
    // 0x1eeb5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1eeb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1eeb60:
    // 0x1eeb60: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1eeb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1eeb64:
    // 0x1eeb64: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1eeb64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eeb68:
    // 0x1eeb68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eeb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1eeb6c:
    // 0x1eeb6c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_1eeb70:
    if (ctx->pc == 0x1EEB70u) {
        ctx->pc = 0x1EEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB6Cu;
        // 0x1eeb70: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB74u;
        goto label_1eeb74;
    }
    ctx->pc = 0x1EEB6Cu;
    {
        const bool branch_taken_0x1eeb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB6Cu;
        // 0x1eeb70: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb6c) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEB74u;
label_1eeb74:
    // 0x1eeb74: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_1eeb78:
    // 0x1eeb78: 0xc096c88  jal         func_25B220
label_1eeb7c:
    if (ctx->pc == 0x1EEB7Cu) {
        ctx->pc = 0x1EEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB78u;
        // 0x1eeb7c: 0x2666001c  addiu       $a2, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB80u;
        goto label_1eeb80;
    }
    ctx->pc = 0x1EEB78u;
    SET_GPR_U32(ctx, 31, 0x1EEB80u);
    ctx->pc = 0x1EEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB78u;
    // 0x1eeb7c: 0x2666001c  addiu       $a2, $s3, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1EEB78u, 0x1EEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB80u;
label_1eeb80:
    // 0x1eeb80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1eeb84:
    if (ctx->pc == 0x1EEB84u) {
        ctx->pc = 0x1EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB80u;
        // 0x1eeb84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB88u;
        goto label_1eeb88;
    }
    ctx->pc = 0x1EEB80u;
    {
        const bool branch_taken_0x1eeb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB80u;
        // 0x1eeb84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb80) {
            ctx->pc = 0x1EEB90u;
            goto label_1eeb90;
        }
    }
    ctx->pc = 0x1EEB88u;
label_1eeb88:
    // 0x1eeb88: 0xc076cc0  jal         func_1DB300
label_1eeb8c:
    if (ctx->pc == 0x1EEB8Cu) {
        ctx->pc = 0x1EEB90u;
        goto label_1eeb90;
    }
    ctx->pc = 0x1EEB88u;
    SET_GPR_U32(ctx, 31, 0x1EEB90u);
    ctx->pc = 0x1DB300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB300u, 0x1EEB88u, 0x1EEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB90u;
label_1eeb90:
    // 0x1eeb90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeb94:
    // 0x1eeb94: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1eeb98:
    // 0x1eeb98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1eeb98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1eeb9c:
    // 0x1eeb9c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eeb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeba0:
    // 0x1eeba0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eeba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eeba4:
    // 0x1eeba4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eeba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eeba8:
    // 0x1eeba8: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
label_1eebac:
    if (ctx->pc == 0x1EEBACu) {
        ctx->pc = 0x1EEBB0u;
        goto label_1eebb0;
    }
    ctx->pc = 0x1EEBA8u;
    {
        const bool branch_taken_0x1eeba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeba8) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEBB0u;
label_1eebb0:
    // 0x1eebb0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1eebb4:
    // 0x1eebb4: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1eebb8:
    // 0x1eebb8: 0x174c3c  dsll32      $t1, $s7, 16
    ctx->pc = 0x1eebb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) << (32 + 16));
label_1eebbc:
    // 0x1eebbc: 0x14443c  dsll32      $t0, $s4, 16
    ctx->pc = 0x1eebbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 16));
label_1eebc0:
    // 0x1eebc0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1eebc4:
    // 0x1eebc4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1eebc4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_1eebc8:
    // 0x1eebc8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1eebc8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_1eebcc:
    // 0x1eebcc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1eebccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eebd0:
    // 0x1eebd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eebd4:
    // 0x1eebd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eebd8:
    // 0x1eebd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eebdc:
    // 0x1eebdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eebe0:
    // 0x1eebe0: 0xc076ce0  jal         func_1DB380
label_1eebe4:
    if (ctx->pc == 0x1EEBE4u) {
        ctx->pc = 0x1EEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBE0u;
        // 0x1eebe4: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEBE8u;
        goto label_1eebe8;
    }
    ctx->pc = 0x1EEBE0u;
    SET_GPR_U32(ctx, 31, 0x1EEBE8u);
    ctx->pc = 0x1EEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEBE0u;
    // 0x1eebe4: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB380u, 0x1EEBE0u, 0x1EEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBE8u;
label_1eebe8:
    // 0x1eebe8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_1eebec:
    if (ctx->pc == 0x1EEBECu) {
        ctx->pc = 0x1EEBF0u;
        goto label_1eebf0;
    }
    ctx->pc = 0x1EEBE8u;
    {
        const bool branch_taken_0x1eebe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eebe8) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEBF0u;
label_1eebf0:
    // 0x1eebf0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eebf4:
    // 0x1eebf4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eebf8:
    // 0x1eebf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eebfc:
    // 0x1eebfc: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_1eec00:
    if (ctx->pc == 0x1EEC00u) {
        ctx->pc = 0x1EEC04u;
        goto label_1eec04;
    }
    ctx->pc = 0x1EEBFCu;
    {
        const bool branch_taken_0x1eebfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebfc) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEC04u;
label_1eec04:
    // 0x1eec04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1eec08:
    if (ctx->pc == 0x1EEC08u) {
        ctx->pc = 0x1EEC0Cu;
        goto label_1eec0c;
    }
    ctx->pc = 0x1EEC04u;
    {
        const bool branch_taken_0x1eec04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec04) {
            ctx->pc = 0x1EEC20u;
            goto label_1eec20;
        }
    }
    ctx->pc = 0x1EEC0Cu;
label_1eec0c:
    // 0x1eec0c: 0x8c990040  lw          $t9, 0x40($a0)
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1eec10:
    // 0x1eec10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1eec14:
    // 0x1eec14: 0x320f809  jalr        $t9
label_1eec18:
    if (ctx->pc == 0x1EEC18u) {
        ctx->pc = 0x1EEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC14u;
        // 0x1eec18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC1Cu;
        goto label_1eec1c;
    }
    ctx->pc = 0x1EEC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EEC1Cu);
        ctx->pc = 0x1EEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC14u;
        // 0x1eec18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC14u, 0x1EEC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEC1Cu;
label_1eec1c:
    // 0x1eec1c: 0x0  nop
    ctx->pc = 0x1eec1cu;
    // NOP
label_1eec20:
    // 0x1eec20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eec24:
    // 0x1eec24: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eec28:
    // 0x1eec28: 0x10000017  b           . + 4 + (0x17 << 2)
label_1eec2c:
    if (ctx->pc == 0x1EEC2Cu) {
        ctx->pc = 0x1EEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC28u;
        // 0x1eec2c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC30u;
        goto label_1eec30;
    }
    ctx->pc = 0x1EEC28u;
    {
        const bool branch_taken_0x1eec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC28u;
        // 0x1eec2c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec28) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEC30u;
label_1eec30:
    // 0x1eec30: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x1eec30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1eec34:
    // 0x1eec34: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1eec34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1eec38:
    // 0x1eec38: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x1eec38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1eec3c:
    // 0x1eec3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eec40:
    // 0x1eec40: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1eec40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1eec44:
    // 0x1eec44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eec48:
    // 0x1eec48: 0xa4a025  or          $s4, $a1, $a0
    ctx->pc = 0x1eec48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1eec4c:
    // 0x1eec4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eec50:
    // 0x1eec50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eec54:
    // 0x1eec54: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1eec58:
    if (ctx->pc == 0x1EEC58u) {
        ctx->pc = 0x1EEC5Cu;
        goto label_1eec5c;
    }
    ctx->pc = 0x1EEC54u;
    {
        const bool branch_taken_0x1eec54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec54) {
            ctx->pc = 0x1EEC88u;
            goto label_1eec88;
        }
    }
    ctx->pc = 0x1EEC5Cu;
label_1eec5c:
    // 0x1eec5c: 0xc076ed8  jal         func_1DBB60
label_1eec60:
    if (ctx->pc == 0x1EEC60u) {
        ctx->pc = 0x1EEC64u;
        goto label_1eec64;
    }
    ctx->pc = 0x1EEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC64u);
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1EEC5Cu, 0x1EEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC64u;
label_1eec64:
    // 0x1eec64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1eec64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eec68:
    // 0x1eec68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1eec6c:
    // 0x1eec6c: 0xc07679c  jal         func_1D9E70
label_1eec70:
    if (ctx->pc == 0x1EEC70u) {
        ctx->pc = 0x1EEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC6Cu;
        // 0x1eec70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC74u;
        goto label_1eec74;
    }
    ctx->pc = 0x1EEC6Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC74u);
    ctx->pc = 0x1EEC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC6Cu;
    // 0x1eec70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EEC6Cu, 0x1EEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC74u;
label_1eec74:
    // 0x1eec74: 0x9265002c  lbu         $a1, 0x2C($s3)
    ctx->pc = 0x1eec74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_1eec78:
    // 0x1eec78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1eec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eec7c:
    // 0x1eec7c: 0xc0bc250  jal         func_2F0940
label_1eec80:
    if (ctx->pc == 0x1EEC80u) {
        ctx->pc = 0x1EEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC7Cu;
        // 0x1eec80: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC84u;
        goto label_1eec84;
    }
    ctx->pc = 0x1EEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC84u);
    ctx->pc = 0x1EEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC7Cu;
    // 0x1eec80: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0940u, 0x1EEC7Cu, 0x1EEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC84u;
label_1eec84:
    // 0x1eec84: 0x0  nop
    ctx->pc = 0x1eec84u;
    // NOP
label_1eec88:
    // 0x1eec88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1eec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1eec8c:
    // 0x1eec8c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1eec8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1eec90:
    // 0x1eec90: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x1eec90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_1eec94:
    // 0x1eec94: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1eec94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eec98:
    // 0x1eec98: 0x1440ff57  bnez        $v0, . + 4 + (-0xA9 << 2)
label_1eec9c:
    if (ctx->pc == 0x1EEC9Cu) {
        ctx->pc = 0x1EEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC98u;
        // 0x1eec9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECA0u;
        goto label_1eeca0;
    }
    ctx->pc = 0x1EEC98u;
    {
        const bool branch_taken_0x1eec98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC98u;
        // 0x1eec9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec98) {
            ctx->pc = 0x1EE9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee9f8;
        }
    }
    ctx->pc = 0x1EECA0u;
label_1eeca0:
    // 0x1eeca0: 0x86620012  lh          $v0, 0x12($s3)
    ctx->pc = 0x1eeca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_1eeca4:
    // 0x1eeca4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1eeca8:
    // 0x1eeca8: 0xa6620012  sh          $v0, 0x12($s3)
    ctx->pc = 0x1eeca8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 2));
label_1eecac:
    // 0x1eecac: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1eecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1eecb0:
    // 0x1eecb0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1eecb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1eecb4:
    // 0x1eecb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eecb8:
    // 0x1eecb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eecbc:
    // 0x1eecbc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1eecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1eecc0:
    // 0x1eecc0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1eecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1eecc4:
    // 0x1eecc4: 0x0  nop
    ctx->pc = 0x1eecc4u;
    // NOP
label_1eecc8:
    // 0x1eecc8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1eecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1eeccc:
    // 0x1eeccc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1eecccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eecd0:
    // 0x1eecd0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1eecd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1eecd4:
    // 0x1eecd4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1eecd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eecd8:
    // 0x1eecd8: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
label_1eecdc:
    if (ctx->pc == 0x1EECDCu) {
        ctx->pc = 0x1EECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECD8u;
        // 0x1eecdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECE0u;
        goto label_1eece0;
    }
    ctx->pc = 0x1EECD8u;
    {
        const bool branch_taken_0x1eecd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECD8u;
        // 0x1eecdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecd8) {
            ctx->pc = 0x1EEE90u;
            goto label_1eee90;
        }
    }
    ctx->pc = 0x1EECE0u;
label_1eece0:
    // 0x1eece0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eece0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eece4:
    // 0x1eece4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eece4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eece8:
    // 0x1eece8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eecec:
    // 0x1eecec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eecf0:
    // 0x1eecf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eecf4:
    // 0x1eecf4: 0x1080005e  beqz        $a0, . + 4 + (0x5E << 2)
label_1eecf8:
    if (ctx->pc == 0x1EECF8u) {
        ctx->pc = 0x1EECFCu;
        goto label_1eecfc;
    }
    ctx->pc = 0x1EECF4u;
    {
        const bool branch_taken_0x1eecf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eecf4) {
            ctx->pc = 0x1EEE70u;
            goto label_1eee70;
        }
    }
    ctx->pc = 0x1EECFCu;
label_1eecfc:
    // 0x1eecfc: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1eed00:
    // 0x1eed00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eed04:
    // 0x1eed04: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x1eed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1eed08:
    // 0x1eed08: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x1eed08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1eed0c:
    // 0x1eed0c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_1eed10:
    if (ctx->pc == 0x1EED10u) {
        ctx->pc = 0x1EED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED0Cu;
        // 0x1eed10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED14u;
        goto label_1eed14;
    }
    ctx->pc = 0x1EED0Cu;
    {
        const bool branch_taken_0x1eed0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED0Cu;
        // 0x1eed10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed0c) {
            ctx->pc = 0x1EEDA0u;
            goto label_1eeda0;
        }
    }
    ctx->pc = 0x1EED14u;
label_1eed14:
    // 0x1eed14: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1eed18:
    if (ctx->pc == 0x1EED18u) {
        ctx->pc = 0x1EED1Cu;
        goto label_1eed1c;
    }
    ctx->pc = 0x1EED14u;
    {
        const bool branch_taken_0x1eed14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eed14) {
            ctx->pc = 0x1EED48u;
            goto label_1eed48;
        }
    }
    ctx->pc = 0x1EED1Cu;
label_1eed1c:
    // 0x1eed1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1eed20:
    if (ctx->pc == 0x1EED20u) {
        ctx->pc = 0x1EED24u;
        goto label_1eed24;
    }
    ctx->pc = 0x1EED1Cu;
    {
        const bool branch_taken_0x1eed1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eed1c) {
            ctx->pc = 0x1EED30u;
            goto label_1eed30;
        }
    }
    ctx->pc = 0x1EED24u;
label_1eed24:
    // 0x1eed24: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1eed28:
    if (ctx->pc == 0x1EED28u) {
        ctx->pc = 0x1EED2Cu;
        goto label_1eed2c;
    }
    ctx->pc = 0x1EED24u;
    {
        const bool branch_taken_0x1eed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eed24) {
            ctx->pc = 0x1EEDD8u;
            goto label_1eedd8;
        }
    }
    ctx->pc = 0x1EED2Cu;
label_1eed2c:
    // 0x1eed2c: 0x0  nop
    ctx->pc = 0x1eed2cu;
    // NOP
label_1eed30:
    // 0x1eed30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eed30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eed34:
    // 0x1eed34: 0xc076e6c  jal         func_1DB9B0
label_1eed38:
    if (ctx->pc == 0x1EED38u) {
        ctx->pc = 0x1EED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED34u;
        // 0x1eed38: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED3Cu;
        goto label_1eed3c;
    }
    ctx->pc = 0x1EED34u;
    SET_GPR_U32(ctx, 31, 0x1EED3Cu);
    ctx->pc = 0x1EED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED34u;
    // 0x1eed38: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9B0u, 0x1EED34u, 0x1EED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED3Cu;
label_1eed3c:
    // 0x1eed3c: 0x10000026  b           . + 4 + (0x26 << 2)
label_1eed40:
    if (ctx->pc == 0x1EED40u) {
        ctx->pc = 0x1EED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED3Cu;
        // 0x1eed40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED44u;
        goto label_1eed44;
    }
    ctx->pc = 0x1EED3Cu;
    {
        const bool branch_taken_0x1eed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED3Cu;
        // 0x1eed40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed3c) {
            ctx->pc = 0x1EEDD8u;
            goto label_1eedd8;
        }
    }
    ctx->pc = 0x1EED44u;
label_1eed44:
    // 0x1eed44: 0x0  nop
    ctx->pc = 0x1eed44u;
    // NOP
label_1eed48:
    // 0x1eed48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eed4c:
    // 0x1eed4c: 0xc076e6c  jal         func_1DB9B0
label_1eed50:
    if (ctx->pc == 0x1EED50u) {
        ctx->pc = 0x1EED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED4Cu;
        // 0x1eed50: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED54u;
        goto label_1eed54;
    }
    ctx->pc = 0x1EED4Cu;
    SET_GPR_U32(ctx, 31, 0x1EED54u);
    ctx->pc = 0x1EED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED4Cu;
    // 0x1eed50: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9B0u, 0x1EED4Cu, 0x1EED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED54u;
label_1eed54:
    // 0x1eed54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eed54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eed58:
    // 0x1eed58: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1eed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1eed5c:
    // 0x1eed5c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eed60:
    // 0x1eed60: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_1eed64:
    // 0x1eed64: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1eed64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1eed68:
    // 0x1eed68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1eed68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eed6c:
    // 0x1eed6c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x1eed6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
label_1eed70:
    // 0x1eed70: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1eed74:
    // 0x1eed74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eed78:
    // 0x1eed78: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1eed78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1eed7c:
    // 0x1eed7c: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
label_1eed80:
    if (ctx->pc == 0x1EED80u) {
        ctx->pc = 0x1EED84u;
        goto label_1eed84;
    }
    ctx->pc = 0x1EED7Cu;
    {
        const bool branch_taken_0x1eed7c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1eed7c) {
            ctx->pc = 0x1EEDD8u;
            goto label_1eedd8;
        }
    }
    ctx->pc = 0x1EED84u;
label_1eed84:
    // 0x1eed84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eed88:
    // 0x1eed88: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eed8c:
    // 0x1eed8c: 0xc076e10  jal         func_1DB840
label_1eed90:
    if (ctx->pc == 0x1EED90u) {
        ctx->pc = 0x1EED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED8Cu;
        // 0x1eed90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED94u;
        goto label_1eed94;
    }
    ctx->pc = 0x1EED8Cu;
    SET_GPR_U32(ctx, 31, 0x1EED94u);
    ctx->pc = 0x1EED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED8Cu;
    // 0x1eed90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1EED8Cu, 0x1EED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED94u;
label_1eed94:
    // 0x1eed94: 0x10000010  b           . + 4 + (0x10 << 2)
label_1eed98:
    if (ctx->pc == 0x1EED98u) {
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED9Cu;
        goto label_1eed9c;
    }
    ctx->pc = 0x1EED94u;
    {
        const bool branch_taken_0x1eed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed94) {
            ctx->pc = 0x1EEDD8u;
            goto label_1eedd8;
        }
    }
    ctx->pc = 0x1EED9Cu;
label_1eed9c:
    // 0x1eed9c: 0x0  nop
    ctx->pc = 0x1eed9cu;
    // NOP
label_1eeda0:
    // 0x1eeda0: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x1eeda0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_1eeda4:
    // 0x1eeda4: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1eeda4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1eeda8:
    // 0x1eeda8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1eeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eedac:
    // 0x1eedac: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x1eedacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_1eedb0:
    // 0x1eedb0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1eedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1eedb4:
    // 0x1eedb4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eedb8:
    // 0x1eedb8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1eedb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1eedbc:
    // 0x1eedbc: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_1eedc0:
    if (ctx->pc == 0x1EEDC0u) {
        ctx->pc = 0x1EEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDBCu;
        // 0x1eedc0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDC4u;
        goto label_1eedc4;
    }
    ctx->pc = 0x1EEDBCu;
    {
        const bool branch_taken_0x1eedbc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1EEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDBCu;
        // 0x1eedc0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedbc) {
            ctx->pc = 0x1EEDD8u;
            goto label_1eedd8;
        }
    }
    ctx->pc = 0x1EEDC4u;
label_1eedc4:
    // 0x1eedc4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eedc8:
    // 0x1eedc8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eedcc:
    // 0x1eedcc: 0xc076e10  jal         func_1DB840
label_1eedd0:
    if (ctx->pc == 0x1EEDD0u) {
        ctx->pc = 0x1EEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDCCu;
        // 0x1eedd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDD4u;
        goto label_1eedd4;
    }
    ctx->pc = 0x1EEDCCu;
    SET_GPR_U32(ctx, 31, 0x1EEDD4u);
    ctx->pc = 0x1EEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDCCu;
    // 0x1eedd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1EEDCCu, 0x1EEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDD4u;
label_1eedd4:
    // 0x1eedd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eedd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eedd8:
    // 0x1eedd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eeddc:
    // 0x1eeddc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eede0:
    // 0x1eede0: 0xc076ed0  jal         func_1DBB40
label_1eede4:
    if (ctx->pc == 0x1EEDE4u) {
        ctx->pc = 0x1EEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE0u;
        // 0x1eede4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEDE8u;
        goto label_1eede8;
    }
    ctx->pc = 0x1EEDE0u;
    SET_GPR_U32(ctx, 31, 0x1EEDE8u);
    ctx->pc = 0x1EEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDE0u;
    // 0x1eede4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1EEDE0u, 0x1EEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDE8u;
label_1eede8:
    // 0x1eede8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1eedec:
    if (ctx->pc == 0x1EEDECu) {
        ctx->pc = 0x1EEDF0u;
        goto label_1eedf0;
    }
    ctx->pc = 0x1EEDE8u;
    {
        const bool branch_taken_0x1eede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eede8) {
            ctx->pc = 0x1EEE68u;
            goto label_1eee68;
        }
    }
    ctx->pc = 0x1EEDF0u;
label_1eedf0:
    // 0x1eedf0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1eedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1eedf4:
    // 0x1eedf4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1eedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eedf8:
    // 0x1eedf8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1eedf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1eedfc:
    // 0x1eedfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1eee00:
    if (ctx->pc == 0x1EEE00u) {
        ctx->pc = 0x1EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDFCu;
        // 0x1eee00: 0x21e3c  dsll32      $v1, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE04u;
        goto label_1eee04;
    }
    ctx->pc = 0x1EEDFCu;
    {
        const bool branch_taken_0x1eedfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDFCu;
        // 0x1eee00: 0x21e3c  dsll32      $v1, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedfc) {
            ctx->pc = 0x1EEE18u;
            goto label_1eee18;
        }
    }
    ctx->pc = 0x1EEE04u;
label_1eee04:
    // 0x1eee04: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1eee04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1eee08:
    // 0x1eee08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eee0c:
    // 0x1eee0c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1eee10:
    if (ctx->pc == 0x1EEE10u) {
        ctx->pc = 0x1EEE14u;
        goto label_1eee14;
    }
    ctx->pc = 0x1EEE0Cu;
    {
        const bool branch_taken_0x1eee0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eee0c) {
            ctx->pc = 0x1EEE68u;
            goto label_1eee68;
        }
    }
    ctx->pc = 0x1EEE14u;
label_1eee14:
    // 0x1eee14: 0x0  nop
    ctx->pc = 0x1eee14u;
    // NOP
label_1eee18:
    // 0x1eee18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eee1c:
    // 0x1eee1c: 0xc07bd18  jal         func_1EF460
label_1eee20:
    if (ctx->pc == 0x1EEE20u) {
        ctx->pc = 0x1EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE1Cu;
        // 0x1eee20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE24u;
        goto label_1eee24;
    }
    ctx->pc = 0x1EEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE24u);
    ctx->pc = 0x1EEE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE1Cu;
    // 0x1eee20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF460u, 0x1EEE1Cu, 0x1EEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE24u;
label_1eee24:
    // 0x1eee24: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1eee28:
    // 0x1eee28: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1eee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1eee2c:
    // 0x1eee2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eee30:
    // 0x1eee30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1eee34:
    if (ctx->pc == 0x1EEE34u) {
        ctx->pc = 0x1EEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE30u;
        // 0x1eee34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE38u;
        goto label_1eee38;
    }
    ctx->pc = 0x1EEE30u;
    {
        const bool branch_taken_0x1eee30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE30u;
        // 0x1eee34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee30) {
            ctx->pc = 0x1EEE48u;
            goto label_1eee48;
        }
    }
    ctx->pc = 0x1EEE38u;
label_1eee38:
    // 0x1eee38: 0xc076e6c  jal         func_1DB9B0
label_1eee3c:
    if (ctx->pc == 0x1EEE3Cu) {
        ctx->pc = 0x1EEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE38u;
        // 0x1eee3c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE40u;
        goto label_1eee40;
    }
    ctx->pc = 0x1EEE38u;
    SET_GPR_U32(ctx, 31, 0x1EEE40u);
    ctx->pc = 0x1EEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE38u;
    // 0x1eee3c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9B0u, 0x1EEE38u, 0x1EEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE40u;
label_1eee40:
    // 0x1eee40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eee40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eee44:
    // 0x1eee44: 0x0  nop
    ctx->pc = 0x1eee44u;
    // NOP
label_1eee48:
    // 0x1eee48: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1eee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1eee4c:
    // 0x1eee4c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1eee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1eee50:
    // 0x1eee50: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1eee54:
    // 0x1eee54: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1eee58:
    if (ctx->pc == 0x1EEE58u) {
        ctx->pc = 0x1EEE5Cu;
        goto label_1eee5c;
    }
    ctx->pc = 0x1EEE54u;
    {
        const bool branch_taken_0x1eee54 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1eee54) {
            ctx->pc = 0x1EEE68u;
            goto label_1eee68;
        }
    }
    ctx->pc = 0x1EEE5Cu;
label_1eee5c:
    // 0x1eee5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1eee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1eee60:
    // 0x1eee60: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1eee60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1eee64:
    // 0x1eee64: 0x0  nop
    ctx->pc = 0x1eee64u;
    // NOP
label_1eee68:
    // 0x1eee68: 0x2f1b821  addu        $s7, $s7, $s1
    ctx->pc = 0x1eee68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_1eee6c:
    // 0x1eee6c: 0x0  nop
    ctx->pc = 0x1eee6cu;
    // NOP
label_1eee70:
    // 0x1eee70: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1eee74:
    // 0x1eee74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eee74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eee78:
    // 0x1eee78: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1eee7c:
    // 0x1eee7c: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1eee7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1eee80:
    // 0x1eee80: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1eee80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eee84:
    // 0x1eee84: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_1eee88:
    if (ctx->pc == 0x1EEE88u) {
        ctx->pc = 0x1EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE84u;
        // 0x1eee88: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE8Cu;
        goto label_1eee8c;
    }
    ctx->pc = 0x1EEE84u;
    {
        const bool branch_taken_0x1eee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE84u;
        // 0x1eee88: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee84) {
            ctx->pc = 0x1EECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EEE8Cu;
label_1eee8c:
    // 0x1eee8c: 0x0  nop
    ctx->pc = 0x1eee8cu;
    // NOP
label_1eee90:
    // 0x1eee90: 0x86620010  lh          $v0, 0x10($s3)
    ctx->pc = 0x1eee90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_1eee94:
    // 0x1eee94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1eee98:
    // 0x1eee98: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x1eee98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_1eee9c:
    // 0x1eee9c: 0x86620010  lh          $v0, 0x10($s3)
    ctx->pc = 0x1eee9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
label_1eeea0:
    // 0x1eeea0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1eeea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1eeea4:
    // 0x1eeea4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1eeea8:
    if (ctx->pc == 0x1EEEA8u) {
        ctx->pc = 0x1EEEACu;
        goto label_1eeeac;
    }
    ctx->pc = 0x1EEEA4u;
    {
        const bool branch_taken_0x1eeea4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeea4) {
            ctx->pc = 0x1EEEB8u;
            goto label_1eeeb8;
        }
    }
    ctx->pc = 0x1EEEACu;
label_1eeeac:
    // 0x1eeeac: 0xa6600010  sh          $zero, 0x10($s3)
    ctx->pc = 0x1eeeacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 0));
label_1eeeb0:
    // 0x1eeeb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eeeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeeb4:
    // 0x1eeeb4: 0xa262001a  sb          $v0, 0x1A($s3)
    ctx->pc = 0x1eeeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26), (uint8_t)GPR_U32(ctx, 2));
label_1eeeb8:
    // 0x1eeeb8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1eeebc:
    // 0x1eeebc: 0x2e01026  xor         $v0, $s7, $zero
    ctx->pc = 0x1eeebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 0));
label_1eeec0:
    // 0x1eeec0: 0x86630012  lh          $v1, 0x12($s3)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_1eeec4:
    // 0x1eeec4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1eeec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eeec8:
    // 0x1eeec8: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1eeec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1eeecc:
    // 0x1eeecc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1eeeccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1eeed0:
    // 0x1eeed0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1eeed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1eeed4:
    // 0x1eeed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eeed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1eeed8:
    // 0x1eeed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1eeedc:
    if (ctx->pc == 0x1EEEDCu) {
        ctx->pc = 0x1EEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEED8u;
        // 0x1eeedc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEE0u;
        goto label_1eeee0;
    }
    ctx->pc = 0x1EEED8u;
    {
        const bool branch_taken_0x1eeed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEED8u;
        // 0x1eeedc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeed8) {
            ctx->pc = 0x1EEEE8u;
            goto label_1eeee8;
        }
    }
    ctx->pc = 0x1EEEE0u;
label_1eeee0:
    // 0x1eeee0: 0xc07ba14  jal         func_1EE850
label_1eeee4:
    if (ctx->pc == 0x1EEEE4u) {
        ctx->pc = 0x1EEEE8u;
        goto label_1eeee8;
    }
    ctx->pc = 0x1EEEE0u;
    SET_GPR_U32(ctx, 31, 0x1EEEE8u);
    ctx->pc = 0x1EE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE850u, 0x1EEEE0u, 0x1EEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEE8u;
label_1eeee8:
    // 0x1eeee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eeee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeeec:
    // 0x1eeeec: 0x0  nop
    ctx->pc = 0x1eeeecu;
    // NOP
label_1eeef0:
    // 0x1eeef0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1eeef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1eeef4:
    // 0x1eeef4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1eeef4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1eeef8:
    // 0x1eeef8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eeef8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1eeefc:
    // 0x1eeefc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eeefcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1eef00:
    // 0x1eef00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eef00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eef04:
    // 0x1eef04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eef04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eef08:
    // 0x1eef08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eef08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eef0c:
    // 0x1eef0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eef0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eef10:
    // 0x1eef10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eef10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eef14:
    // 0x1eef14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eef14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eef18:
    // 0x1eef18: 0x3e00008  jr          $ra
label_1eef1c:
    if (ctx->pc == 0x1EEF1Cu) {
        ctx->pc = 0x1EEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF18u;
        // 0x1eef1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEF20u;
        goto label_fallthrough_0x1eef18;
    }
    ctx->pc = 0x1EEF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF18u;
        // 0x1eef1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eef18:
    ctx->pc = 0x1EEF20u;
}
