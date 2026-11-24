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

// Function: sub_001FFBA8
// Address: 0x1ffba8 - 0x200190
void sub_001FFBA8_0x1ffba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFBA8_0x1ffba8");
#endif

    switch (ctx->pc) {
        case 0x1ffba8u: goto label_1ffba8;
        case 0x1ffbacu: goto label_1ffbac;
        case 0x1ffbb0u: goto label_1ffbb0;
        case 0x1ffbb4u: goto label_1ffbb4;
        case 0x1ffbb8u: goto label_1ffbb8;
        case 0x1ffbbcu: goto label_1ffbbc;
        case 0x1ffbc0u: goto label_1ffbc0;
        case 0x1ffbc4u: goto label_1ffbc4;
        case 0x1ffbc8u: goto label_1ffbc8;
        case 0x1ffbccu: goto label_1ffbcc;
        case 0x1ffbd0u: goto label_1ffbd0;
        case 0x1ffbd4u: goto label_1ffbd4;
        case 0x1ffbd8u: goto label_1ffbd8;
        case 0x1ffbdcu: goto label_1ffbdc;
        case 0x1ffbe0u: goto label_1ffbe0;
        case 0x1ffbe4u: goto label_1ffbe4;
        case 0x1ffbe8u: goto label_1ffbe8;
        case 0x1ffbecu: goto label_1ffbec;
        case 0x1ffbf0u: goto label_1ffbf0;
        case 0x1ffbf4u: goto label_1ffbf4;
        case 0x1ffbf8u: goto label_1ffbf8;
        case 0x1ffbfcu: goto label_1ffbfc;
        case 0x1ffc00u: goto label_1ffc00;
        case 0x1ffc04u: goto label_1ffc04;
        case 0x1ffc08u: goto label_1ffc08;
        case 0x1ffc0cu: goto label_1ffc0c;
        case 0x1ffc10u: goto label_1ffc10;
        case 0x1ffc14u: goto label_1ffc14;
        case 0x1ffc18u: goto label_1ffc18;
        case 0x1ffc1cu: goto label_1ffc1c;
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc24u: goto label_1ffc24;
        case 0x1ffc28u: goto label_1ffc28;
        case 0x1ffc2cu: goto label_1ffc2c;
        case 0x1ffc30u: goto label_1ffc30;
        case 0x1ffc34u: goto label_1ffc34;
        case 0x1ffc38u: goto label_1ffc38;
        case 0x1ffc3cu: goto label_1ffc3c;
        case 0x1ffc40u: goto label_1ffc40;
        case 0x1ffc44u: goto label_1ffc44;
        case 0x1ffc48u: goto label_1ffc48;
        case 0x1ffc4cu: goto label_1ffc4c;
        case 0x1ffc50u: goto label_1ffc50;
        case 0x1ffc54u: goto label_1ffc54;
        case 0x1ffc58u: goto label_1ffc58;
        case 0x1ffc5cu: goto label_1ffc5c;
        case 0x1ffc60u: goto label_1ffc60;
        case 0x1ffc64u: goto label_1ffc64;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffc6cu: goto label_1ffc6c;
        case 0x1ffc70u: goto label_1ffc70;
        case 0x1ffc74u: goto label_1ffc74;
        case 0x1ffc78u: goto label_1ffc78;
        case 0x1ffc7cu: goto label_1ffc7c;
        case 0x1ffc80u: goto label_1ffc80;
        case 0x1ffc84u: goto label_1ffc84;
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffc8cu: goto label_1ffc8c;
        case 0x1ffc90u: goto label_1ffc90;
        case 0x1ffc94u: goto label_1ffc94;
        case 0x1ffc98u: goto label_1ffc98;
        case 0x1ffc9cu: goto label_1ffc9c;
        case 0x1ffca0u: goto label_1ffca0;
        case 0x1ffca4u: goto label_1ffca4;
        case 0x1ffca8u: goto label_1ffca8;
        case 0x1ffcacu: goto label_1ffcac;
        case 0x1ffcb0u: goto label_1ffcb0;
        case 0x1ffcb4u: goto label_1ffcb4;
        case 0x1ffcb8u: goto label_1ffcb8;
        case 0x1ffcbcu: goto label_1ffcbc;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcc4u: goto label_1ffcc4;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffcccu: goto label_1ffccc;
        case 0x1ffcd0u: goto label_1ffcd0;
        case 0x1ffcd4u: goto label_1ffcd4;
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffcdcu: goto label_1ffcdc;
        case 0x1ffce0u: goto label_1ffce0;
        case 0x1ffce4u: goto label_1ffce4;
        case 0x1ffce8u: goto label_1ffce8;
        case 0x1ffcecu: goto label_1ffcec;
        case 0x1ffcf0u: goto label_1ffcf0;
        case 0x1ffcf4u: goto label_1ffcf4;
        case 0x1ffcf8u: goto label_1ffcf8;
        case 0x1ffcfcu: goto label_1ffcfc;
        case 0x1ffd00u: goto label_1ffd00;
        case 0x1ffd04u: goto label_1ffd04;
        case 0x1ffd08u: goto label_1ffd08;
        case 0x1ffd0cu: goto label_1ffd0c;
        case 0x1ffd10u: goto label_1ffd10;
        case 0x1ffd14u: goto label_1ffd14;
        case 0x1ffd18u: goto label_1ffd18;
        case 0x1ffd1cu: goto label_1ffd1c;
        case 0x1ffd20u: goto label_1ffd20;
        case 0x1ffd24u: goto label_1ffd24;
        case 0x1ffd28u: goto label_1ffd28;
        case 0x1ffd2cu: goto label_1ffd2c;
        case 0x1ffd30u: goto label_1ffd30;
        case 0x1ffd34u: goto label_1ffd34;
        case 0x1ffd38u: goto label_1ffd38;
        case 0x1ffd3cu: goto label_1ffd3c;
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd44u: goto label_1ffd44;
        case 0x1ffd48u: goto label_1ffd48;
        case 0x1ffd4cu: goto label_1ffd4c;
        case 0x1ffd50u: goto label_1ffd50;
        case 0x1ffd54u: goto label_1ffd54;
        case 0x1ffd58u: goto label_1ffd58;
        case 0x1ffd5cu: goto label_1ffd5c;
        case 0x1ffd60u: goto label_1ffd60;
        case 0x1ffd64u: goto label_1ffd64;
        case 0x1ffd68u: goto label_1ffd68;
        case 0x1ffd6cu: goto label_1ffd6c;
        case 0x1ffd70u: goto label_1ffd70;
        case 0x1ffd74u: goto label_1ffd74;
        case 0x1ffd78u: goto label_1ffd78;
        case 0x1ffd7cu: goto label_1ffd7c;
        case 0x1ffd80u: goto label_1ffd80;
        case 0x1ffd84u: goto label_1ffd84;
        case 0x1ffd88u: goto label_1ffd88;
        case 0x1ffd8cu: goto label_1ffd8c;
        case 0x1ffd90u: goto label_1ffd90;
        case 0x1ffd94u: goto label_1ffd94;
        case 0x1ffd98u: goto label_1ffd98;
        case 0x1ffd9cu: goto label_1ffd9c;
        case 0x1ffda0u: goto label_1ffda0;
        case 0x1ffda4u: goto label_1ffda4;
        case 0x1ffda8u: goto label_1ffda8;
        case 0x1ffdacu: goto label_1ffdac;
        case 0x1ffdb0u: goto label_1ffdb0;
        case 0x1ffdb4u: goto label_1ffdb4;
        case 0x1ffdb8u: goto label_1ffdb8;
        case 0x1ffdbcu: goto label_1ffdbc;
        case 0x1ffdc0u: goto label_1ffdc0;
        case 0x1ffdc4u: goto label_1ffdc4;
        case 0x1ffdc8u: goto label_1ffdc8;
        case 0x1ffdccu: goto label_1ffdcc;
        case 0x1ffdd0u: goto label_1ffdd0;
        case 0x1ffdd4u: goto label_1ffdd4;
        case 0x1ffdd8u: goto label_1ffdd8;
        case 0x1ffddcu: goto label_1ffddc;
        case 0x1ffde0u: goto label_1ffde0;
        case 0x1ffde4u: goto label_1ffde4;
        case 0x1ffde8u: goto label_1ffde8;
        case 0x1ffdecu: goto label_1ffdec;
        case 0x1ffdf0u: goto label_1ffdf0;
        case 0x1ffdf4u: goto label_1ffdf4;
        case 0x1ffdf8u: goto label_1ffdf8;
        case 0x1ffdfcu: goto label_1ffdfc;
        case 0x1ffe00u: goto label_1ffe00;
        case 0x1ffe04u: goto label_1ffe04;
        case 0x1ffe08u: goto label_1ffe08;
        case 0x1ffe0cu: goto label_1ffe0c;
        case 0x1ffe10u: goto label_1ffe10;
        case 0x1ffe14u: goto label_1ffe14;
        case 0x1ffe18u: goto label_1ffe18;
        case 0x1ffe1cu: goto label_1ffe1c;
        case 0x1ffe20u: goto label_1ffe20;
        case 0x1ffe24u: goto label_1ffe24;
        case 0x1ffe28u: goto label_1ffe28;
        case 0x1ffe2cu: goto label_1ffe2c;
        case 0x1ffe30u: goto label_1ffe30;
        case 0x1ffe34u: goto label_1ffe34;
        case 0x1ffe38u: goto label_1ffe38;
        case 0x1ffe3cu: goto label_1ffe3c;
        case 0x1ffe40u: goto label_1ffe40;
        case 0x1ffe44u: goto label_1ffe44;
        case 0x1ffe48u: goto label_1ffe48;
        case 0x1ffe4cu: goto label_1ffe4c;
        case 0x1ffe50u: goto label_1ffe50;
        case 0x1ffe54u: goto label_1ffe54;
        case 0x1ffe58u: goto label_1ffe58;
        case 0x1ffe5cu: goto label_1ffe5c;
        case 0x1ffe60u: goto label_1ffe60;
        case 0x1ffe64u: goto label_1ffe64;
        case 0x1ffe68u: goto label_1ffe68;
        case 0x1ffe6cu: goto label_1ffe6c;
        case 0x1ffe70u: goto label_1ffe70;
        case 0x1ffe74u: goto label_1ffe74;
        case 0x1ffe78u: goto label_1ffe78;
        case 0x1ffe7cu: goto label_1ffe7c;
        case 0x1ffe80u: goto label_1ffe80;
        case 0x1ffe84u: goto label_1ffe84;
        case 0x1ffe88u: goto label_1ffe88;
        case 0x1ffe8cu: goto label_1ffe8c;
        case 0x1ffe90u: goto label_1ffe90;
        case 0x1ffe94u: goto label_1ffe94;
        case 0x1ffe98u: goto label_1ffe98;
        case 0x1ffe9cu: goto label_1ffe9c;
        case 0x1ffea0u: goto label_1ffea0;
        case 0x1ffea4u: goto label_1ffea4;
        case 0x1ffea8u: goto label_1ffea8;
        case 0x1ffeacu: goto label_1ffeac;
        case 0x1ffeb0u: goto label_1ffeb0;
        case 0x1ffeb4u: goto label_1ffeb4;
        case 0x1ffeb8u: goto label_1ffeb8;
        case 0x1ffebcu: goto label_1ffebc;
        case 0x1ffec0u: goto label_1ffec0;
        case 0x1ffec4u: goto label_1ffec4;
        case 0x1ffec8u: goto label_1ffec8;
        case 0x1ffeccu: goto label_1ffecc;
        case 0x1ffed0u: goto label_1ffed0;
        case 0x1ffed4u: goto label_1ffed4;
        case 0x1ffed8u: goto label_1ffed8;
        case 0x1ffedcu: goto label_1ffedc;
        case 0x1ffee0u: goto label_1ffee0;
        case 0x1ffee4u: goto label_1ffee4;
        case 0x1ffee8u: goto label_1ffee8;
        case 0x1ffeecu: goto label_1ffeec;
        case 0x1ffef0u: goto label_1ffef0;
        case 0x1ffef4u: goto label_1ffef4;
        case 0x1ffef8u: goto label_1ffef8;
        case 0x1ffefcu: goto label_1ffefc;
        case 0x1fff00u: goto label_1fff00;
        case 0x1fff04u: goto label_1fff04;
        case 0x1fff08u: goto label_1fff08;
        case 0x1fff0cu: goto label_1fff0c;
        case 0x1fff10u: goto label_1fff10;
        case 0x1fff14u: goto label_1fff14;
        case 0x1fff18u: goto label_1fff18;
        case 0x1fff1cu: goto label_1fff1c;
        case 0x1fff20u: goto label_1fff20;
        case 0x1fff24u: goto label_1fff24;
        case 0x1fff28u: goto label_1fff28;
        case 0x1fff2cu: goto label_1fff2c;
        case 0x1fff30u: goto label_1fff30;
        case 0x1fff34u: goto label_1fff34;
        case 0x1fff38u: goto label_1fff38;
        case 0x1fff3cu: goto label_1fff3c;
        case 0x1fff40u: goto label_1fff40;
        case 0x1fff44u: goto label_1fff44;
        case 0x1fff48u: goto label_1fff48;
        case 0x1fff4cu: goto label_1fff4c;
        case 0x1fff50u: goto label_1fff50;
        case 0x1fff54u: goto label_1fff54;
        case 0x1fff58u: goto label_1fff58;
        case 0x1fff5cu: goto label_1fff5c;
        case 0x1fff60u: goto label_1fff60;
        case 0x1fff64u: goto label_1fff64;
        case 0x1fff68u: goto label_1fff68;
        case 0x1fff6cu: goto label_1fff6c;
        case 0x1fff70u: goto label_1fff70;
        case 0x1fff74u: goto label_1fff74;
        case 0x1fff78u: goto label_1fff78;
        case 0x1fff7cu: goto label_1fff7c;
        case 0x1fff80u: goto label_1fff80;
        case 0x1fff84u: goto label_1fff84;
        case 0x1fff88u: goto label_1fff88;
        case 0x1fff8cu: goto label_1fff8c;
        case 0x1fff90u: goto label_1fff90;
        case 0x1fff94u: goto label_1fff94;
        case 0x1fff98u: goto label_1fff98;
        case 0x1fff9cu: goto label_1fff9c;
        case 0x1fffa0u: goto label_1fffa0;
        case 0x1fffa4u: goto label_1fffa4;
        case 0x1fffa8u: goto label_1fffa8;
        case 0x1fffacu: goto label_1fffac;
        case 0x1fffb0u: goto label_1fffb0;
        case 0x1fffb4u: goto label_1fffb4;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1fffbcu: goto label_1fffbc;
        case 0x1fffc0u: goto label_1fffc0;
        case 0x1fffc4u: goto label_1fffc4;
        case 0x1fffc8u: goto label_1fffc8;
        case 0x1fffccu: goto label_1fffcc;
        case 0x1fffd0u: goto label_1fffd0;
        case 0x1fffd4u: goto label_1fffd4;
        case 0x1fffd8u: goto label_1fffd8;
        case 0x1fffdcu: goto label_1fffdc;
        case 0x1fffe0u: goto label_1fffe0;
        case 0x1fffe4u: goto label_1fffe4;
        case 0x1fffe8u: goto label_1fffe8;
        case 0x1fffecu: goto label_1fffec;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x1ffff4u: goto label_1ffff4;
        case 0x1ffff8u: goto label_1ffff8;
        case 0x1ffffcu: goto label_1ffffc;
        case 0x200000u: goto label_200000;
        case 0x200004u: goto label_200004;
        case 0x200008u: goto label_200008;
        case 0x20000cu: goto label_20000c;
        case 0x200010u: goto label_200010;
        case 0x200014u: goto label_200014;
        case 0x200018u: goto label_200018;
        case 0x20001cu: goto label_20001c;
        case 0x200020u: goto label_200020;
        case 0x200024u: goto label_200024;
        case 0x200028u: goto label_200028;
        case 0x20002cu: goto label_20002c;
        case 0x200030u: goto label_200030;
        case 0x200034u: goto label_200034;
        case 0x200038u: goto label_200038;
        case 0x20003cu: goto label_20003c;
        case 0x200040u: goto label_200040;
        case 0x200044u: goto label_200044;
        case 0x200048u: goto label_200048;
        case 0x20004cu: goto label_20004c;
        case 0x200050u: goto label_200050;
        case 0x200054u: goto label_200054;
        case 0x200058u: goto label_200058;
        case 0x20005cu: goto label_20005c;
        case 0x200060u: goto label_200060;
        case 0x200064u: goto label_200064;
        case 0x200068u: goto label_200068;
        case 0x20006cu: goto label_20006c;
        case 0x200070u: goto label_200070;
        case 0x200074u: goto label_200074;
        case 0x200078u: goto label_200078;
        case 0x20007cu: goto label_20007c;
        case 0x200080u: goto label_200080;
        case 0x200084u: goto label_200084;
        case 0x200088u: goto label_200088;
        case 0x20008cu: goto label_20008c;
        case 0x200090u: goto label_200090;
        case 0x200094u: goto label_200094;
        case 0x200098u: goto label_200098;
        case 0x20009cu: goto label_20009c;
        case 0x2000a0u: goto label_2000a0;
        case 0x2000a4u: goto label_2000a4;
        case 0x2000a8u: goto label_2000a8;
        case 0x2000acu: goto label_2000ac;
        case 0x2000b0u: goto label_2000b0;
        case 0x2000b4u: goto label_2000b4;
        case 0x2000b8u: goto label_2000b8;
        case 0x2000bcu: goto label_2000bc;
        case 0x2000c0u: goto label_2000c0;
        case 0x2000c4u: goto label_2000c4;
        case 0x2000c8u: goto label_2000c8;
        case 0x2000ccu: goto label_2000cc;
        case 0x2000d0u: goto label_2000d0;
        case 0x2000d4u: goto label_2000d4;
        case 0x2000d8u: goto label_2000d8;
        case 0x2000dcu: goto label_2000dc;
        case 0x2000e0u: goto label_2000e0;
        case 0x2000e4u: goto label_2000e4;
        case 0x2000e8u: goto label_2000e8;
        case 0x2000ecu: goto label_2000ec;
        case 0x2000f0u: goto label_2000f0;
        case 0x2000f4u: goto label_2000f4;
        case 0x2000f8u: goto label_2000f8;
        case 0x2000fcu: goto label_2000fc;
        case 0x200100u: goto label_200100;
        case 0x200104u: goto label_200104;
        case 0x200108u: goto label_200108;
        case 0x20010cu: goto label_20010c;
        case 0x200110u: goto label_200110;
        case 0x200114u: goto label_200114;
        case 0x200118u: goto label_200118;
        case 0x20011cu: goto label_20011c;
        case 0x200120u: goto label_200120;
        case 0x200124u: goto label_200124;
        case 0x200128u: goto label_200128;
        case 0x20012cu: goto label_20012c;
        case 0x200130u: goto label_200130;
        case 0x200134u: goto label_200134;
        case 0x200138u: goto label_200138;
        case 0x20013cu: goto label_20013c;
        case 0x200140u: goto label_200140;
        case 0x200144u: goto label_200144;
        case 0x200148u: goto label_200148;
        case 0x20014cu: goto label_20014c;
        case 0x200150u: goto label_200150;
        case 0x200154u: goto label_200154;
        case 0x200158u: goto label_200158;
        case 0x20015cu: goto label_20015c;
        case 0x200160u: goto label_200160;
        case 0x200164u: goto label_200164;
        case 0x200168u: goto label_200168;
        case 0x20016cu: goto label_20016c;
        case 0x200170u: goto label_200170;
        case 0x200174u: goto label_200174;
        case 0x200178u: goto label_200178;
        case 0x20017cu: goto label_20017c;
        case 0x200180u: goto label_200180;
        case 0x200184u: goto label_200184;
        case 0x200188u: goto label_200188;
        case 0x20018cu: goto label_20018c;
        default: break;
    }

    ctx->pc = 0x1ffba8u;

label_1ffba8:
    // 0x1ffba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ffba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ffbac:
    // 0x1ffbac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ffbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffbb0:
    // 0x1ffbb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ffbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ffbb4:
    // 0x1ffbb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ffbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbb8:
    // 0x1ffbb8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ffbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ffbbc:
    // 0x1ffbbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbc0:
    // 0x1ffbc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ffbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ffbc4:
    // 0x1ffbc4: 0x2612038c  addiu       $s2, $s0, 0x38C
    ctx->pc = 0x1ffbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
label_1ffbc8:
    // 0x1ffbc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ffbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1ffbcc:
    // 0x1ffbcc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1ffbccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1ffbd0:
    // 0x1ffbd0: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x1ffbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
label_1ffbd4:
    // 0x1ffbd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffbd8:
    // 0x1ffbd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ffbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ffbdc:
    // 0x1ffbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ffbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbe0:
    // 0x1ffbe0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ffbe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1ffbe4:
    // 0x1ffbe4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ffbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1ffbe8:
    // 0x1ffbe8: 0x40f809  jalr        $v0
label_1ffbec:
    if (ctx->pc == 0x1FFBECu) {
        ctx->pc = 0x1FFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBE8u;
        // 0x1ffbec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFBF0u;
        goto label_1ffbf0;
    }
    ctx->pc = 0x1FFBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFBF0u);
        ctx->pc = 0x1FFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBE8u;
        // 0x1ffbec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFBE8u, 0x1FFBF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFBF0u;
label_1ffbf0:
    // 0x1ffbf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ffbf4:
    // 0x1ffbf4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1ffbf8:
    // 0x1ffbf8: 0x260901d0  addiu       $t1, $s0, 0x1D0
    ctx->pc = 0x1ffbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_1ffbfc:
    // 0x1ffbfc: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x1ffbfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ffc00:
    // 0x1ffc00: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1ffc04:
    // 0x1ffc04: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1ffc04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1ffc08:
    // 0x1ffc08: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1ffc08u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc0c:
    // 0x1ffc0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc10:
    // 0x1ffc10: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc14:
    // 0x1ffc14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc18:
    // 0x1ffc18: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffc18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffc1c:
    // 0x1ffc1c: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1ffc1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc20:
    // 0x1ffc20: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffc20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffc24:
    // 0x1ffc24: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc28:
    // 0x1ffc28: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffc28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffc2c:
    // 0x1ffc2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc30:
    // 0x1ffc30: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1ffc30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1ffc34:
    // 0x1ffc34: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1ffc34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ffc38:
    // 0x1ffc38: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffc38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffc3c:
    // 0x1ffc3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc40:
    // 0x1ffc40: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffc40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffc44:
    // 0x1ffc44: 0x38a30000  xori        $v1, $a1, 0x0
    ctx->pc = 0x1ffc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
label_1ffc48:
    // 0x1ffc48: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x1ffc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1ffc4c:
    // 0x1ffc4c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ffc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc50:
    // 0x1ffc50: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1ffc50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc54:
    // 0x1ffc54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc58:
    // 0x1ffc58: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x1ffc58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1ffc5c:
    // 0x1ffc5c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc60:
    // 0x1ffc60: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffc60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffc64:
    // 0x1ffc64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc68:
    // 0x1ffc68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1ffc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc6c:
    // 0x1ffc6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc70:
    // 0x1ffc70: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffc70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffc74:
    // 0x1ffc74: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffc78:
    // 0x1ffc78: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffc78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffc7c:
    // 0x1ffc7c: 0x28a40016  slti        $a0, $a1, 0x16
    ctx->pc = 0x1ffc7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_1ffc80:
    // 0x1ffc80: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ffc80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1ffc84:
    // 0x1ffc84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffc84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffc88:
    // 0x1ffc88: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffc88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffc8c:
    // 0x1ffc8c: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
label_1ffc90:
    if (ctx->pc == 0x1FFC90u) {
        ctx->pc = 0x1FFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC8Cu;
        // 0x1ffc90: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC94u;
        goto label_1ffc94;
    }
    ctx->pc = 0x1FFC8Cu;
    {
        const bool branch_taken_0x1ffc8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC8Cu;
        // 0x1ffc90: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc8c) {
            ctx->pc = 0x1FFD08u;
            goto label_1ffd08;
        }
    }
    ctx->pc = 0x1FFC94u;
label_1ffc94:
    // 0x1ffc94: 0x24a5ffea  addiu       $a1, $a1, -0x16
    ctx->pc = 0x1ffc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967274));
label_1ffc98:
    // 0x1ffc98: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1ffc9c:
    if (ctx->pc == 0x1FFC9Cu) {
        ctx->pc = 0x1FFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC98u;
        // 0x1ffc9c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFCA0u;
        goto label_1ffca0;
    }
    ctx->pc = 0x1FFC98u;
    {
        const bool branch_taken_0x1ffc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC98u;
        // 0x1ffc9c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc98) {
            ctx->pc = 0x1FFCC0u;
            goto label_1ffcc0;
        }
    }
    ctx->pc = 0x1FFCA0u;
label_1ffca0:
    // 0x1ffca0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ffca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ffca4:
    // 0x1ffca4: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1ffca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1ffca8:
    // 0x1ffca8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ffca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ffcac:
    // 0x1ffcac: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x1ffcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1ffcb0:
    // 0x1ffcb0: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1ffcb4:
    // 0x1ffcb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ffcb8:
    if (ctx->pc == 0x1FFCB8u) {
        ctx->pc = 0x1FFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCB4u;
        // 0x1ffcb8: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFCBCu;
        goto label_1ffcbc;
    }
    ctx->pc = 0x1FFCB4u;
    {
        const bool branch_taken_0x1ffcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCB4u;
        // 0x1ffcb8: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcb4) {
            ctx->pc = 0x1FFCCCu;
            goto label_1ffccc;
        }
    }
    ctx->pc = 0x1FFCBCu;
label_1ffcbc:
    // 0x1ffcbc: 0x0  nop
    ctx->pc = 0x1ffcbcu;
    // NOP
label_1ffcc0:
    // 0x1ffcc0: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1ffcc4:
    // 0x1ffcc4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ffcc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcc8:
    // 0x1ffcc8: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x1ffcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_1ffccc:
    // 0x1ffccc: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1ffcccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffcd0:
    // 0x1ffcd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffcd4:
    // 0x1ffcd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffcd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffcd8:
    // 0x1ffcd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffcdc:
    // 0x1ffcdc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffce0:
    // 0x1ffce0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1ffce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffce4:
    // 0x1ffce4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffce8:
    // 0x1ffce8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffcec:
    // 0x1ffcec: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffcecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffcf0:
    // 0x1ffcf0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffcf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffcf4:
    // 0x1ffcf4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ffcf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1ffcf8:
    // 0x1ffcf8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffcf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffcfc:
    // 0x1ffcfc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffd00:
    // 0x1ffd00: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ffd04:
    if (ctx->pc == 0x1FFD04u) {
        ctx->pc = 0x1FFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD00u;
        // 0x1ffd04: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD08u;
        goto label_1ffd08;
    }
    ctx->pc = 0x1FFD00u;
    {
        const bool branch_taken_0x1ffd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD00u;
        // 0x1ffd04: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd00) {
            ctx->pc = 0x1FFD18u;
            goto label_1ffd18;
        }
    }
    ctx->pc = 0x1FFD08u;
label_1ffd08:
    // 0x1ffd08: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x1ffd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1ffd0c:
    // 0x1ffd0c: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x1ffd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_1ffd10:
    // 0x1ffd10: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x1ffd10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_1ffd14:
    // 0x1ffd14: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x1ffd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1ffd18:
    // 0x1ffd18: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1ffd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_1ffd1c:
    // 0x1ffd1c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1ffd20:
    if (ctx->pc == 0x1FFD20u) {
        ctx->pc = 0x1FFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD1Cu;
        // 0x1ffd20: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD24u;
        goto label_1ffd24;
    }
    ctx->pc = 0x1FFD1Cu;
    {
        const bool branch_taken_0x1ffd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD1Cu;
        // 0x1ffd20: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd1c) {
            ctx->pc = 0x1FFD88u;
            goto label_1ffd88;
        }
    }
    ctx->pc = 0x1FFD24u;
label_1ffd24:
    // 0x1ffd24: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_1ffd28:
    // 0x1ffd28: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1ffd2c:
    if (ctx->pc == 0x1FFD2Cu) {
        ctx->pc = 0x1FFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD28u;
        // 0x1ffd2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD30u;
        goto label_1ffd30;
    }
    ctx->pc = 0x1FFD28u;
    {
        const bool branch_taken_0x1ffd28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD28u;
        // 0x1ffd2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd28) {
            ctx->pc = 0x1FFD48u;
            goto label_1ffd48;
        }
    }
    ctx->pc = 0x1FFD30u;
label_1ffd30:
    // 0x1ffd30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ffd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ffd34:
    // 0x1ffd34: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1ffd38:
    // 0x1ffd38: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ffd38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ffd3c:
    // 0x1ffd3c: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x1ffd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_1ffd40:
    // 0x1ffd40: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ffd44:
    if (ctx->pc == 0x1FFD44u) {
        ctx->pc = 0x1FFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD40u;
        // 0x1ffd44: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD48u;
        goto label_1ffd48;
    }
    ctx->pc = 0x1FFD40u;
    {
        const bool branch_taken_0x1ffd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD40u;
        // 0x1ffd44: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd40) {
            ctx->pc = 0x1FFD4Cu;
            goto label_1ffd4c;
        }
    }
    ctx->pc = 0x1FFD48u;
label_1ffd48:
    // 0x1ffd48: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ffd48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd4c:
    // 0x1ffd4c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1ffd4cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffd50:
    // 0x1ffd50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffd50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffd54:
    // 0x1ffd54: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffd58:
    // 0x1ffd58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffd5c:
    // 0x1ffd5c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffd60:
    // 0x1ffd60: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1ffd60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffd64:
    // 0x1ffd64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffd64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffd68:
    // 0x1ffd68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffd6c:
    // 0x1ffd6c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffd70:
    // 0x1ffd70: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffd70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffd74:
    // 0x1ffd74: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ffd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1ffd78:
    // 0x1ffd78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffd7c:
    // 0x1ffd7c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffd80:
    // 0x1ffd80: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ffd84:
    if (ctx->pc == 0x1FFD84u) {
        ctx->pc = 0x1FFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD80u;
        // 0x1ffd84: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD88u;
        goto label_1ffd88;
    }
    ctx->pc = 0x1FFD80u;
    {
        const bool branch_taken_0x1ffd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD80u;
        // 0x1ffd84: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd80) {
            ctx->pc = 0x1FFD90u;
            goto label_1ffd90;
        }
    }
    ctx->pc = 0x1FFD88u;
label_1ffd88:
    // 0x1ffd88: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1ffd8c:
    // 0x1ffd8c: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1ffd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1ffd90:
    // 0x1ffd90: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1ffd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ffd94:
    // 0x1ffd94: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1ffd98:
    if (ctx->pc == 0x1FFD98u) {
        ctx->pc = 0x1FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD94u;
        // 0x1ffd98: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD9Cu;
        goto label_1ffd9c;
    }
    ctx->pc = 0x1FFD94u;
    {
        const bool branch_taken_0x1ffd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD94u;
        // 0x1ffd98: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd94) {
            ctx->pc = 0x1FFE10u;
            goto label_1ffe10;
        }
    }
    ctx->pc = 0x1FFD9Cu;
label_1ffd9c:
    // 0x1ffd9c: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1ffd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_1ffda0:
    // 0x1ffda0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1ffda4:
    if (ctx->pc == 0x1FFDA4u) {
        ctx->pc = 0x1FFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDA0u;
        // 0x1ffda4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDA8u;
        goto label_1ffda8;
    }
    ctx->pc = 0x1FFDA0u;
    {
        const bool branch_taken_0x1ffda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDA0u;
        // 0x1ffda4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffda0) {
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FFDA8u;
label_1ffda8:
    // 0x1ffda8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ffda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ffdac:
    // 0x1ffdac: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1ffdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1ffdb0:
    // 0x1ffdb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ffdb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1ffdb4:
    // 0x1ffdb4: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x1ffdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1ffdb8:
    // 0x1ffdb8: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x1ffdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1ffdbc:
    // 0x1ffdbc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ffdc0:
    if (ctx->pc == 0x1FFDC0u) {
        ctx->pc = 0x1FFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDBCu;
        // 0x1ffdc0: 0xae0302bc  sw          $v1, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDC4u;
        goto label_1ffdc4;
    }
    ctx->pc = 0x1FFDBCu;
    {
        const bool branch_taken_0x1ffdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDBCu;
        // 0x1ffdc0: 0xae0302bc  sw          $v1, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdbc) {
            ctx->pc = 0x1FFDD4u;
            goto label_1ffdd4;
        }
    }
    ctx->pc = 0x1FFDC4u;
label_1ffdc4:
    // 0x1ffdc4: 0x0  nop
    ctx->pc = 0x1ffdc4u;
    // NOP
label_1ffdc8:
    // 0x1ffdc8: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1ffdcc:
    // 0x1ffdcc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ffdccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdd0:
    // 0x1ffdd0: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x1ffdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
label_1ffdd4:
    // 0x1ffdd4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffdd8:
    // 0x1ffdd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffddc:
    // 0x1ffddc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffde0:
    // 0x1ffde0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffde4:
    // 0x1ffde4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffde4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffde8:
    // 0x1ffde8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1ffde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffdec:
    // 0x1ffdec: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffdecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffdf0:
    // 0x1ffdf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffdf4:
    // 0x1ffdf4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffdf8:
    // 0x1ffdf8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffdf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffdfc:
    // 0x1ffdfc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ffdfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1ffe00:
    // 0x1ffe00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffe04:
    // 0x1ffe04: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffe04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffe08:
    // 0x1ffe08: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ffe0c:
    if (ctx->pc == 0x1FFE0Cu) {
        ctx->pc = 0x1FFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE08u;
        // 0x1ffe0c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE10u;
        goto label_1ffe10;
    }
    ctx->pc = 0x1FFE08u;
    {
        const bool branch_taken_0x1ffe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE08u;
        // 0x1ffe0c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe08) {
            ctx->pc = 0x1FFE20u;
            goto label_1ffe20;
        }
    }
    ctx->pc = 0x1FFE10u;
label_1ffe10:
    // 0x1ffe10: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1ffe14:
    // 0x1ffe14: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1ffe18:
    // 0x1ffe18: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x1ffe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
label_1ffe1c:
    // 0x1ffe1c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ffe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ffe20:
    // 0x1ffe20: 0x8d2a0018  lw          $t2, 0x18($t1)
    ctx->pc = 0x1ffe20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_1ffe24:
    // 0x1ffe24: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x1ffe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_1ffe28:
    // 0x1ffe28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ffe28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ffe2c:
    // 0x1ffe2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ffe30:
    if (ctx->pc == 0x1FFE30u) {
        ctx->pc = 0x1FFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE2Cu;
        // 0x1ffe30: 0x8e0203fc  lw          $v0, 0x3FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE34u;
        goto label_1ffe34;
    }
    ctx->pc = 0x1FFE2Cu;
    {
        const bool branch_taken_0x1ffe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE2Cu;
        // 0x1ffe30: 0x8e0203fc  lw          $v0, 0x3FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe2c) {
            ctx->pc = 0x1FFE50u;
            goto label_1ffe50;
        }
    }
    ctx->pc = 0x1FFE34u;
label_1ffe34:
    // 0x1ffe34: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x1ffe34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
label_1ffe38:
    // 0x1ffe38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ffe3c:
    // 0x1ffe3c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ffe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1ffe40:
    // 0x1ffe40: 0xae0203fc  sw          $v0, 0x3FC($s0)
    ctx->pc = 0x1ffe40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 2));
label_1ffe44:
    // 0x1ffe44: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ffe48:
    if (ctx->pc == 0x1FFE48u) {
        ctx->pc = 0x1FFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE44u;
        // 0x1ffe48: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE4Cu;
        goto label_1ffe4c;
    }
    ctx->pc = 0x1FFE44u;
    {
        const bool branch_taken_0x1ffe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE44u;
        // 0x1ffe48: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe44) {
            ctx->pc = 0x1FFE6Cu;
            goto label_1ffe6c;
        }
    }
    ctx->pc = 0x1FFE4Cu;
label_1ffe4c:
    // 0x1ffe4c: 0x0  nop
    ctx->pc = 0x1ffe4cu;
    // NOP
label_1ffe50:
    // 0x1ffe50: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_1ffe54:
    // 0x1ffe54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ffe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ffe58:
    // 0x1ffe58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ffe5c:
    // 0x1ffe5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ffe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1ffe60:
    // 0x1ffe60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ffe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ffe64:
    // 0x1ffe64: 0xae030400  sw          $v1, 0x400($s0)
    ctx->pc = 0x1ffe64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 3));
label_1ffe68:
    // 0x1ffe68: 0xad220068  sw          $v0, 0x68($t1)
    ctx->pc = 0x1ffe68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 2));
label_1ffe6c:
    // 0x1ffe6c: 0x2542fffe  addiu       $v0, $t2, -0x2
    ctx->pc = 0x1ffe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
label_1ffe70:
    // 0x1ffe70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ffe70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ffe74:
    // 0x1ffe74: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1ffe78:
    if (ctx->pc == 0x1FFE78u) {
        ctx->pc = 0x1FFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE74u;
        // 0x1ffe78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE7Cu;
        goto label_1ffe7c;
    }
    ctx->pc = 0x1FFE74u;
    {
        const bool branch_taken_0x1ffe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE74u;
        // 0x1ffe78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe74) {
            ctx->pc = 0x1FFF7Cu;
            goto label_1fff7c;
        }
    }
    ctx->pc = 0x1FFE7Cu;
label_1ffe7c:
    // 0x1ffe7c: 0x260902f0  addiu       $t1, $s0, 0x2F0
    ctx->pc = 0x1ffe7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_1ffe80:
    // 0x1ffe80: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1ffe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1ffe84:
    // 0x1ffe84: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1ffe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ffe88:
    // 0x1ffe88: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1ffe8c:
    if (ctx->pc == 0x1FFE8Cu) {
        ctx->pc = 0x1FFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE88u;
        // 0x1ffe8c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE90u;
        goto label_1ffe90;
    }
    ctx->pc = 0x1FFE88u;
    {
        const bool branch_taken_0x1ffe88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE88u;
        // 0x1ffe8c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe88) {
            ctx->pc = 0x1FFED8u;
            goto label_1ffed8;
        }
    }
    ctx->pc = 0x1FFE90u;
label_1ffe90:
    // 0x1ffe90: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ffe90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe94:
    // 0x1ffe94: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1ffe94u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffe98:
    // 0x1ffe98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffe98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffe9c:
    // 0x1ffe9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffea0:
    // 0x1ffea0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffea4:
    // 0x1ffea4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffea8:
    // 0x1ffea8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffeac:
    // 0x1ffeac: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1ffeacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffeb0:
    // 0x1ffeb0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ffeb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1ffeb4:
    // 0x1ffeb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffeb8:
    // 0x1ffeb8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffebc:
    // 0x1ffebc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1ffebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ffec0:
    // 0x1ffec0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ffec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1ffec4:
    // 0x1ffec4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ffec8:
    // 0x1ffec8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ffec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ffecc:
    // 0x1ffecc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ffed0:
    if (ctx->pc == 0x1FFED0u) {
        ctx->pc = 0x1FFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFECCu;
        // 0x1ffed0: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFED4u;
        goto label_1ffed4;
    }
    ctx->pc = 0x1FFECCu;
    {
        const bool branch_taken_0x1ffecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFECCu;
        // 0x1ffed0: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffecc) {
            ctx->pc = 0x1FFEE0u;
            goto label_1ffee0;
        }
    }
    ctx->pc = 0x1FFED4u;
label_1ffed4:
    // 0x1ffed4: 0x0  nop
    ctx->pc = 0x1ffed4u;
    // NOP
label_1ffed8:
    // 0x1ffed8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ffedc:
    // 0x1ffedc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1ffedcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1ffee0:
    // 0x1ffee0: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1ffee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_1ffee4:
    // 0x1ffee4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1ffee8:
    if (ctx->pc == 0x1FFEE8u) {
        ctx->pc = 0x1FFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEE4u;
        // 0x1ffee8: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFEECu;
        goto label_1ffeec;
    }
    ctx->pc = 0x1FFEE4u;
    {
        const bool branch_taken_0x1ffee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEE4u;
        // 0x1ffee8: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffee4) {
            ctx->pc = 0x1FFF50u;
            goto label_1fff50;
        }
    }
    ctx->pc = 0x1FFEECu;
label_1ffeec:
    // 0x1ffeec: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1ffeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_1ffef0:
    // 0x1ffef0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1ffef4:
    if (ctx->pc == 0x1FFEF4u) {
        ctx->pc = 0x1FFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEF0u;
        // 0x1ffef4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFEF8u;
        goto label_1ffef8;
    }
    ctx->pc = 0x1FFEF0u;
    {
        const bool branch_taken_0x1ffef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEF0u;
        // 0x1ffef4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffef0) {
            ctx->pc = 0x1FFF10u;
            goto label_1fff10;
        }
    }
    ctx->pc = 0x1FFEF8u;
label_1ffef8:
    // 0x1ffef8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ffef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ffefc:
    // 0x1ffefc: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1ffefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1fff00:
    // 0x1fff00: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fff00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fff04:
    // 0x1fff04: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x1fff04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_1fff08:
    // 0x1fff08: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fff0c:
    if (ctx->pc == 0x1FFF0Cu) {
        ctx->pc = 0x1FFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF08u;
        // 0x1fff0c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF10u;
        goto label_1fff10;
    }
    ctx->pc = 0x1FFF08u;
    {
        const bool branch_taken_0x1fff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF08u;
        // 0x1fff0c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff08) {
            ctx->pc = 0x1FFF14u;
            goto label_1fff14;
        }
    }
    ctx->pc = 0x1FFF10u;
label_1fff10:
    // 0x1fff10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fff10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fff14:
    // 0x1fff14: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1fff14u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fff18:
    // 0x1fff18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fff18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fff1c:
    // 0x1fff1c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fff1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fff20:
    // 0x1fff20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fff20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fff24:
    // 0x1fff24: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1fff28:
    // 0x1fff28: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fff28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fff2c:
    // 0x1fff2c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1fff2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1fff30:
    // 0x1fff30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fff30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fff34:
    // 0x1fff34: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fff34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1fff38:
    // 0x1fff38: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fff38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fff3c:
    // 0x1fff3c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1fff3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1fff40:
    // 0x1fff40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fff44:
    // 0x1fff44: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1fff48:
    // 0x1fff48: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fff4c:
    if (ctx->pc == 0x1FFF4Cu) {
        ctx->pc = 0x1FFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF48u;
        // 0x1fff4c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF50u;
        goto label_1fff50;
    }
    ctx->pc = 0x1FFF48u;
    {
        const bool branch_taken_0x1fff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF48u;
        // 0x1fff4c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff48) {
            ctx->pc = 0x1FFF58u;
            goto label_1fff58;
        }
    }
    ctx->pc = 0x1FFF50u;
label_1fff50:
    // 0x1fff50: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1fff50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1fff54:
    // 0x1fff54: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1fff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1fff58:
    // 0x1fff58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1fff5c:
    // 0x1fff5c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1fff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1fff60:
    // 0x1fff60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff64:
    // 0x1fff64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1fff64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fff68:
    // 0x1fff68: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1fff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1fff6c:
    // 0x1fff6c: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x1fff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_1fff70:
    // 0x1fff70: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1fff70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1fff74:
    // 0x1fff74: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x1fff74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_1fff78:
    // 0x1fff78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fff7c:
    // 0x1fff7c: 0x55420043  bnel        $t2, $v0, . + 4 + (0x43 << 2)
label_1fff80:
    if (ctx->pc == 0x1FFF80u) {
        ctx->pc = 0x1FFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF7Cu;
        // 0x1fff80: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF84u;
        goto label_1fff84;
    }
    ctx->pc = 0x1FFF7Cu;
    {
        const bool branch_taken_0x1fff7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fff7c) {
            ctx->pc = 0x1FFF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF7Cu;
            // 0x1fff80: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20008Cu;
            goto label_20008c;
        }
    }
    ctx->pc = 0x1FFF84u;
label_1fff84:
    // 0x1fff84: 0x26090314  addiu       $t1, $s0, 0x314
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
label_1fff88:
    // 0x1fff88: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1fff8c:
    // 0x1fff8c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fff90:
    // 0x1fff90: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1fff94:
    if (ctx->pc == 0x1FFF94u) {
        ctx->pc = 0x1FFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF90u;
        // 0x1fff94: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF98u;
        goto label_1fff98;
    }
    ctx->pc = 0x1FFF90u;
    {
        const bool branch_taken_0x1fff90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF90u;
        // 0x1fff94: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff90) {
            ctx->pc = 0x1FFFE0u;
            goto label_1fffe0;
        }
    }
    ctx->pc = 0x1FFF98u;
label_1fff98:
    // 0x1fff98: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fff98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fff9c:
    // 0x1fff9c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1fff9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fffa0:
    // 0x1fffa0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fffa4:
    // 0x1fffa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fffa8:
    // 0x1fffa8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fffa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fffac:
    // 0x1fffac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fffacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fffb0:
    // 0x1fffb0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1fffb4:
    // 0x1fffb4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fffb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fffb8:
    // 0x1fffb8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1fffb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1fffbc:
    // 0x1fffbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fffbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fffc0:
    // 0x1fffc0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1fffc4:
    // 0x1fffc4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fffc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1fffc8:
    // 0x1fffc8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1fffc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1fffcc:
    // 0x1fffcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1fffd0:
    // 0x1fffd0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1fffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1fffd4:
    // 0x1fffd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fffd8:
    if (ctx->pc == 0x1FFFD8u) {
        ctx->pc = 0x1FFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFD4u;
        // 0x1fffd8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFDCu;
        goto label_1fffdc;
    }
    ctx->pc = 0x1FFFD4u;
    {
        const bool branch_taken_0x1fffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFD4u;
        // 0x1fffd8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffd4) {
            ctx->pc = 0x1FFFE8u;
            goto label_1fffe8;
        }
    }
    ctx->pc = 0x1FFFDCu;
label_1fffdc:
    // 0x1fffdc: 0x0  nop
    ctx->pc = 0x1fffdcu;
    // NOP
label_1fffe0:
    // 0x1fffe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fffe4:
    // 0x1fffe4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1fffe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1fffe8:
    // 0x1fffe8: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1fffe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_1fffec:
    // 0x1fffec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1ffff0:
    if (ctx->pc == 0x1FFFF0u) {
        ctx->pc = 0x1FFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFECu;
        // 0x1ffff0: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFF4u;
        goto label_1ffff4;
    }
    ctx->pc = 0x1FFFECu;
    {
        const bool branch_taken_0x1fffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFECu;
        // 0x1ffff0: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffec) {
            ctx->pc = 0x200060u;
            goto label_200060;
        }
    }
    ctx->pc = 0x1FFFF4u;
label_1ffff4:
    // 0x1ffff4: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1ffff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_1ffff8:
    // 0x1ffff8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1ffffc:
    if (ctx->pc == 0x1FFFFCu) {
        ctx->pc = 0x1FFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFF8u;
        // 0x1ffffc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200000u;
        goto label_200000;
    }
    ctx->pc = 0x1FFFF8u;
    {
        const bool branch_taken_0x1ffff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFF8u;
        // 0x1ffffc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffff8) {
            ctx->pc = 0x200018u;
            goto label_200018;
        }
    }
    ctx->pc = 0x200000u;
label_200000:
    // 0x200000: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_200004:
    // 0x200004: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_200008:
    // 0x200008: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x200008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_20000c:
    // 0x20000c: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x20000cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_200010:
    // 0x200010: 0x10000002  b           . + 4 + (0x2 << 2)
label_200014:
    if (ctx->pc == 0x200014u) {
        ctx->pc = 0x200014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200010u;
        // 0x200014: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200018u;
        goto label_200018;
    }
    ctx->pc = 0x200010u;
    {
        const bool branch_taken_0x200010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200010u;
        // 0x200014: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200010) {
            ctx->pc = 0x20001Cu;
            goto label_20001c;
        }
    }
    ctx->pc = 0x200018u;
label_200018:
    // 0x200018: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x200018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20001c:
    // 0x20001c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x20001cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_200020:
    // 0x200020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_200024:
    // 0x200024: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x200024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_200028:
    // 0x200028: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20002c:
    // 0x20002c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_200030:
    // 0x200030: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x200030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_200034:
    // 0x200034: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x200034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_200038:
    // 0x200038: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20003c:
    // 0x20003c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_200040:
    // 0x200040: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x200040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_200044:
    // 0x200044: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x200044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_200048:
    // 0x200048: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20004c:
    // 0x20004c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_200050:
    // 0x200050: 0x10000005  b           . + 4 + (0x5 << 2)
label_200054:
    if (ctx->pc == 0x200054u) {
        ctx->pc = 0x200054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200050u;
        // 0x200054: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200058u;
        goto label_200058;
    }
    ctx->pc = 0x200050u;
    {
        const bool branch_taken_0x200050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200050u;
        // 0x200054: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200050) {
            ctx->pc = 0x200068u;
            goto label_200068;
        }
    }
    ctx->pc = 0x200058u;
label_200058:
    // 0x200058: 0x10000031  b           . + 4 + (0x31 << 2)
label_20005c:
    if (ctx->pc == 0x20005Cu) {
        ctx->pc = 0x20005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200058u;
        // 0x20005c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200060u;
        goto label_200060;
    }
    ctx->pc = 0x200058u;
    {
        const bool branch_taken_0x200058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200058u;
        // 0x20005c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200058) {
            ctx->pc = 0x200120u;
            goto label_200120;
        }
    }
    ctx->pc = 0x200060u;
label_200060:
    // 0x200060: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_200064:
    // 0x200064: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_200068:
    // 0x200068: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20006c:
    // 0x20006c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x20006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_200070:
    // 0x200070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200074:
    // 0x200074: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_200078:
    // 0x200078: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_20007c:
    // 0x20007c: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x20007cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_200080:
    // 0x200080: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x200080u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_200084:
    // 0x200084: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x200084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_200088:
    // 0x200088: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x200088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_20008c:
    // 0x20008c: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x20008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
label_200090:
    // 0x200090: 0x1000001d  b           . + 4 + (0x1D << 2)
label_200094:
    if (ctx->pc == 0x200094u) {
        ctx->pc = 0x200094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200090u;
        // 0x200094: 0x8e09038c  lw          $t1, 0x38C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200098u;
        goto label_200098;
    }
    ctx->pc = 0x200090u;
    {
        const bool branch_taken_0x200090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200090u;
        // 0x200094: 0x8e09038c  lw          $t1, 0x38C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200090) {
            ctx->pc = 0x200108u;
            goto label_200108;
        }
    }
    ctx->pc = 0x200098u;
label_200098:
    // 0x200098: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x200098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20009c:
    // 0x20009c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2000a0:
    if (ctx->pc == 0x2000A0u) {
        ctx->pc = 0x2000A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20009Cu;
        // 0x2000a0: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000A4u;
        goto label_2000a4;
    }
    ctx->pc = 0x20009Cu;
    {
        const bool branch_taken_0x20009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20009c) {
            ctx->pc = 0x2000A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20009Cu;
            // 0x2000a0: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2000E4u;
            goto label_2000e4;
        }
    }
    ctx->pc = 0x2000A4u;
label_2000a4:
    // 0x2000a4: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x2000a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_2000a8:
    // 0x2000a8: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x2000a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_2000ac:
    // 0x2000ac: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x2000acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2000b0:
    // 0x2000b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2000b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2000b4:
    // 0x2000b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2000b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2000b8:
    // 0x2000b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2000bc:
    // 0x2000bc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2000c0:
    // 0x2000c0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x2000c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2000c4:
    // 0x2000c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2000c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2000c8:
    // 0x2000c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2000c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2000cc:
    // 0x2000cc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2000ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2000d0:
    // 0x2000d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2000d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2000d4:
    // 0x2000d4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2000d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2000d8:
    // 0x2000d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2000d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2000dc:
    // 0x2000dc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2000dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2000e0:
    // 0x2000e0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2000e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2000e4:
    // 0x2000e4: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x2000e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_2000e8:
    // 0x2000e8: 0x8e040390  lw          $a0, 0x390($s0)
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_2000ec:
    // 0x2000ec: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2000ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2000f0:
    // 0x2000f0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2000f4:
    // 0x2000f4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2000f8:
    // 0x2000f8: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2000fc:
    // 0x2000fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2000fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_200100:
    // 0x200100: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_200104:
    if (ctx->pc == 0x200104u) {
        ctx->pc = 0x200104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200100u;
        // 0x200104: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200108u;
        goto label_200108;
    }
    ctx->pc = 0x200100u;
    {
        const bool branch_taken_0x200100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200100u;
        // 0x200104: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200100) {
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x200108u;
label_200108:
    // 0x200108: 0x4e2ffe3  bltzl       $a3, . + 4 + (-0x1D << 2)
label_20010c:
    if (ctx->pc == 0x20010Cu) {
        ctx->pc = 0x20010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200108u;
        // 0x20010c: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200110u;
        goto label_200110;
    }
    ctx->pc = 0x200108u;
    {
        const bool branch_taken_0x200108 = (GPR_S64(ctx, 7) < 0);
        if (branch_taken_0x200108) {
            ctx->pc = 0x20010Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200108u;
            // 0x20010c: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200098;
        }
    }
    ctx->pc = 0x200110u;
label_200110:
    // 0x200110: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_200114:
    // 0x200114: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x200114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_200118:
    // 0x200118: 0x5040ffcf  beql        $v0, $zero, . + 4 + (-0x31 << 2)
label_20011c:
    if (ctx->pc == 0x20011Cu) {
        ctx->pc = 0x20011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200118u;
        // 0x20011c: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200120u;
        goto label_200120;
    }
    ctx->pc = 0x200118u;
    {
        const bool branch_taken_0x200118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200118) {
            ctx->pc = 0x20011Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200118u;
            // 0x20011c: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200058;
        }
    }
    ctx->pc = 0x200120u;
label_200120:
    // 0x200120: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x200120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_200124:
    // 0x200124: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x200124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200128:
    // 0x200128: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x200128u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_20012c:
    // 0x20012c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200130:
    // 0x200130: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_200134:
    // 0x200134: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x200134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200138:
    // 0x200138: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x200138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_20013c:
    // 0x20013c: 0xc094854  jal         func_252150
label_200140:
    if (ctx->pc == 0x200140u) {
        ctx->pc = 0x200140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20013Cu;
        // 0x200140: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200144u;
        goto label_200144;
    }
    ctx->pc = 0x20013Cu;
    SET_GPR_U32(ctx, 31, 0x200144u);
    ctx->pc = 0x200140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20013Cu;
    // 0x200140: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x20013Cu, 0x200144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200144u;
label_200144:
    // 0x200144: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x200144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_200148:
    // 0x200148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x200148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20014c:
    // 0x20014c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200150:
    // 0x200150: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_200154:
    // 0x200154: 0x40f809  jalr        $v0
label_200158:
    if (ctx->pc == 0x200158u) {
        ctx->pc = 0x200158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200154u;
        // 0x200158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20015Cu;
        goto label_20015c;
    }
    ctx->pc = 0x200154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20015Cu);
        ctx->pc = 0x200158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200154u;
        // 0x200158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200154u, 0x20015Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20015Cu;
label_20015c:
    // 0x20015c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_200160:
    // 0x200160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200164:
    // 0x200164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200168:
    // 0x200168: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20016c:
    // 0x20016c: 0x40f809  jalr        $v0
label_200170:
    if (ctx->pc == 0x200170u) {
        ctx->pc = 0x200170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20016Cu;
        // 0x200170: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200174u;
        goto label_200174;
    }
    ctx->pc = 0x20016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200174u);
        ctx->pc = 0x200170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20016Cu;
        // 0x200170: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20016Cu, 0x200174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200174u;
label_200174:
    // 0x200174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200178:
    // 0x200178: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20017c:
    // 0x20017c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20017cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_200180:
    // 0x200180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x200180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200184:
    // 0x200184: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x200184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_200188:
    // 0x200188: 0x3e00008  jr          $ra
label_20018c:
    if (ctx->pc == 0x20018Cu) {
        ctx->pc = 0x20018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200188u;
        // 0x20018c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200190u;
        goto label_fallthrough_0x200188;
    }
    ctx->pc = 0x200188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200188u;
        // 0x20018c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200188:
    ctx->pc = 0x200190u;
}
