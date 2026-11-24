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

// Function: sub_00293F50
// Address: 0x293f50 - 0x294628
void sub_00293F50_0x293f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293F50_0x293f50");
#endif

    switch (ctx->pc) {
        case 0x293f50u: goto label_293f50;
        case 0x293f54u: goto label_293f54;
        case 0x293f58u: goto label_293f58;
        case 0x293f5cu: goto label_293f5c;
        case 0x293f60u: goto label_293f60;
        case 0x293f64u: goto label_293f64;
        case 0x293f68u: goto label_293f68;
        case 0x293f6cu: goto label_293f6c;
        case 0x293f70u: goto label_293f70;
        case 0x293f74u: goto label_293f74;
        case 0x293f78u: goto label_293f78;
        case 0x293f7cu: goto label_293f7c;
        case 0x293f80u: goto label_293f80;
        case 0x293f84u: goto label_293f84;
        case 0x293f88u: goto label_293f88;
        case 0x293f8cu: goto label_293f8c;
        case 0x293f90u: goto label_293f90;
        case 0x293f94u: goto label_293f94;
        case 0x293f98u: goto label_293f98;
        case 0x293f9cu: goto label_293f9c;
        case 0x293fa0u: goto label_293fa0;
        case 0x293fa4u: goto label_293fa4;
        case 0x293fa8u: goto label_293fa8;
        case 0x293facu: goto label_293fac;
        case 0x293fb0u: goto label_293fb0;
        case 0x293fb4u: goto label_293fb4;
        case 0x293fb8u: goto label_293fb8;
        case 0x293fbcu: goto label_293fbc;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fc4u: goto label_293fc4;
        case 0x293fc8u: goto label_293fc8;
        case 0x293fccu: goto label_293fcc;
        case 0x293fd0u: goto label_293fd0;
        case 0x293fd4u: goto label_293fd4;
        case 0x293fd8u: goto label_293fd8;
        case 0x293fdcu: goto label_293fdc;
        case 0x293fe0u: goto label_293fe0;
        case 0x293fe4u: goto label_293fe4;
        case 0x293fe8u: goto label_293fe8;
        case 0x293fecu: goto label_293fec;
        case 0x293ff0u: goto label_293ff0;
        case 0x293ff4u: goto label_293ff4;
        case 0x293ff8u: goto label_293ff8;
        case 0x293ffcu: goto label_293ffc;
        case 0x294000u: goto label_294000;
        case 0x294004u: goto label_294004;
        case 0x294008u: goto label_294008;
        case 0x29400cu: goto label_29400c;
        case 0x294010u: goto label_294010;
        case 0x294014u: goto label_294014;
        case 0x294018u: goto label_294018;
        case 0x29401cu: goto label_29401c;
        case 0x294020u: goto label_294020;
        case 0x294024u: goto label_294024;
        case 0x294028u: goto label_294028;
        case 0x29402cu: goto label_29402c;
        case 0x294030u: goto label_294030;
        case 0x294034u: goto label_294034;
        case 0x294038u: goto label_294038;
        case 0x29403cu: goto label_29403c;
        case 0x294040u: goto label_294040;
        case 0x294044u: goto label_294044;
        case 0x294048u: goto label_294048;
        case 0x29404cu: goto label_29404c;
        case 0x294050u: goto label_294050;
        case 0x294054u: goto label_294054;
        case 0x294058u: goto label_294058;
        case 0x29405cu: goto label_29405c;
        case 0x294060u: goto label_294060;
        case 0x294064u: goto label_294064;
        case 0x294068u: goto label_294068;
        case 0x29406cu: goto label_29406c;
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        case 0x294110u: goto label_294110;
        case 0x294114u: goto label_294114;
        case 0x294118u: goto label_294118;
        case 0x29411cu: goto label_29411c;
        case 0x294120u: goto label_294120;
        case 0x294124u: goto label_294124;
        case 0x294128u: goto label_294128;
        case 0x29412cu: goto label_29412c;
        case 0x294130u: goto label_294130;
        case 0x294134u: goto label_294134;
        case 0x294138u: goto label_294138;
        case 0x29413cu: goto label_29413c;
        case 0x294140u: goto label_294140;
        case 0x294144u: goto label_294144;
        case 0x294148u: goto label_294148;
        case 0x29414cu: goto label_29414c;
        case 0x294150u: goto label_294150;
        case 0x294154u: goto label_294154;
        case 0x294158u: goto label_294158;
        case 0x29415cu: goto label_29415c;
        case 0x294160u: goto label_294160;
        case 0x294164u: goto label_294164;
        case 0x294168u: goto label_294168;
        case 0x29416cu: goto label_29416c;
        case 0x294170u: goto label_294170;
        case 0x294174u: goto label_294174;
        case 0x294178u: goto label_294178;
        case 0x29417cu: goto label_29417c;
        case 0x294180u: goto label_294180;
        case 0x294184u: goto label_294184;
        case 0x294188u: goto label_294188;
        case 0x29418cu: goto label_29418c;
        case 0x294190u: goto label_294190;
        case 0x294194u: goto label_294194;
        case 0x294198u: goto label_294198;
        case 0x29419cu: goto label_29419c;
        case 0x2941a0u: goto label_2941a0;
        case 0x2941a4u: goto label_2941a4;
        case 0x2941a8u: goto label_2941a8;
        case 0x2941acu: goto label_2941ac;
        case 0x2941b0u: goto label_2941b0;
        case 0x2941b4u: goto label_2941b4;
        case 0x2941b8u: goto label_2941b8;
        case 0x2941bcu: goto label_2941bc;
        case 0x2941c0u: goto label_2941c0;
        case 0x2941c4u: goto label_2941c4;
        case 0x2941c8u: goto label_2941c8;
        case 0x2941ccu: goto label_2941cc;
        case 0x2941d0u: goto label_2941d0;
        case 0x2941d4u: goto label_2941d4;
        case 0x2941d8u: goto label_2941d8;
        case 0x2941dcu: goto label_2941dc;
        case 0x2941e0u: goto label_2941e0;
        case 0x2941e4u: goto label_2941e4;
        case 0x2941e8u: goto label_2941e8;
        case 0x2941ecu: goto label_2941ec;
        case 0x2941f0u: goto label_2941f0;
        case 0x2941f4u: goto label_2941f4;
        case 0x2941f8u: goto label_2941f8;
        case 0x2941fcu: goto label_2941fc;
        case 0x294200u: goto label_294200;
        case 0x294204u: goto label_294204;
        case 0x294208u: goto label_294208;
        case 0x29420cu: goto label_29420c;
        case 0x294210u: goto label_294210;
        case 0x294214u: goto label_294214;
        case 0x294218u: goto label_294218;
        case 0x29421cu: goto label_29421c;
        case 0x294220u: goto label_294220;
        case 0x294224u: goto label_294224;
        case 0x294228u: goto label_294228;
        case 0x29422cu: goto label_29422c;
        case 0x294230u: goto label_294230;
        case 0x294234u: goto label_294234;
        case 0x294238u: goto label_294238;
        case 0x29423cu: goto label_29423c;
        case 0x294240u: goto label_294240;
        case 0x294244u: goto label_294244;
        case 0x294248u: goto label_294248;
        case 0x29424cu: goto label_29424c;
        case 0x294250u: goto label_294250;
        case 0x294254u: goto label_294254;
        case 0x294258u: goto label_294258;
        case 0x29425cu: goto label_29425c;
        case 0x294260u: goto label_294260;
        case 0x294264u: goto label_294264;
        case 0x294268u: goto label_294268;
        case 0x29426cu: goto label_29426c;
        case 0x294270u: goto label_294270;
        case 0x294274u: goto label_294274;
        case 0x294278u: goto label_294278;
        case 0x29427cu: goto label_29427c;
        case 0x294280u: goto label_294280;
        case 0x294284u: goto label_294284;
        case 0x294288u: goto label_294288;
        case 0x29428cu: goto label_29428c;
        case 0x294290u: goto label_294290;
        case 0x294294u: goto label_294294;
        case 0x294298u: goto label_294298;
        case 0x29429cu: goto label_29429c;
        case 0x2942a0u: goto label_2942a0;
        case 0x2942a4u: goto label_2942a4;
        case 0x2942a8u: goto label_2942a8;
        case 0x2942acu: goto label_2942ac;
        case 0x2942b0u: goto label_2942b0;
        case 0x2942b4u: goto label_2942b4;
        case 0x2942b8u: goto label_2942b8;
        case 0x2942bcu: goto label_2942bc;
        case 0x2942c0u: goto label_2942c0;
        case 0x2942c4u: goto label_2942c4;
        case 0x2942c8u: goto label_2942c8;
        case 0x2942ccu: goto label_2942cc;
        case 0x2942d0u: goto label_2942d0;
        case 0x2942d4u: goto label_2942d4;
        case 0x2942d8u: goto label_2942d8;
        case 0x2942dcu: goto label_2942dc;
        case 0x2942e0u: goto label_2942e0;
        case 0x2942e4u: goto label_2942e4;
        case 0x2942e8u: goto label_2942e8;
        case 0x2942ecu: goto label_2942ec;
        case 0x2942f0u: goto label_2942f0;
        case 0x2942f4u: goto label_2942f4;
        case 0x2942f8u: goto label_2942f8;
        case 0x2942fcu: goto label_2942fc;
        case 0x294300u: goto label_294300;
        case 0x294304u: goto label_294304;
        case 0x294308u: goto label_294308;
        case 0x29430cu: goto label_29430c;
        case 0x294310u: goto label_294310;
        case 0x294314u: goto label_294314;
        case 0x294318u: goto label_294318;
        case 0x29431cu: goto label_29431c;
        case 0x294320u: goto label_294320;
        case 0x294324u: goto label_294324;
        case 0x294328u: goto label_294328;
        case 0x29432cu: goto label_29432c;
        case 0x294330u: goto label_294330;
        case 0x294334u: goto label_294334;
        case 0x294338u: goto label_294338;
        case 0x29433cu: goto label_29433c;
        case 0x294340u: goto label_294340;
        case 0x294344u: goto label_294344;
        case 0x294348u: goto label_294348;
        case 0x29434cu: goto label_29434c;
        case 0x294350u: goto label_294350;
        case 0x294354u: goto label_294354;
        case 0x294358u: goto label_294358;
        case 0x29435cu: goto label_29435c;
        case 0x294360u: goto label_294360;
        case 0x294364u: goto label_294364;
        case 0x294368u: goto label_294368;
        case 0x29436cu: goto label_29436c;
        case 0x294370u: goto label_294370;
        case 0x294374u: goto label_294374;
        case 0x294378u: goto label_294378;
        case 0x29437cu: goto label_29437c;
        case 0x294380u: goto label_294380;
        case 0x294384u: goto label_294384;
        case 0x294388u: goto label_294388;
        case 0x29438cu: goto label_29438c;
        case 0x294390u: goto label_294390;
        case 0x294394u: goto label_294394;
        case 0x294398u: goto label_294398;
        case 0x29439cu: goto label_29439c;
        case 0x2943a0u: goto label_2943a0;
        case 0x2943a4u: goto label_2943a4;
        case 0x2943a8u: goto label_2943a8;
        case 0x2943acu: goto label_2943ac;
        case 0x2943b0u: goto label_2943b0;
        case 0x2943b4u: goto label_2943b4;
        case 0x2943b8u: goto label_2943b8;
        case 0x2943bcu: goto label_2943bc;
        case 0x2943c0u: goto label_2943c0;
        case 0x2943c4u: goto label_2943c4;
        case 0x2943c8u: goto label_2943c8;
        case 0x2943ccu: goto label_2943cc;
        case 0x2943d0u: goto label_2943d0;
        case 0x2943d4u: goto label_2943d4;
        case 0x2943d8u: goto label_2943d8;
        case 0x2943dcu: goto label_2943dc;
        case 0x2943e0u: goto label_2943e0;
        case 0x2943e4u: goto label_2943e4;
        case 0x2943e8u: goto label_2943e8;
        case 0x2943ecu: goto label_2943ec;
        case 0x2943f0u: goto label_2943f0;
        case 0x2943f4u: goto label_2943f4;
        case 0x2943f8u: goto label_2943f8;
        case 0x2943fcu: goto label_2943fc;
        case 0x294400u: goto label_294400;
        case 0x294404u: goto label_294404;
        case 0x294408u: goto label_294408;
        case 0x29440cu: goto label_29440c;
        case 0x294410u: goto label_294410;
        case 0x294414u: goto label_294414;
        case 0x294418u: goto label_294418;
        case 0x29441cu: goto label_29441c;
        case 0x294420u: goto label_294420;
        case 0x294424u: goto label_294424;
        case 0x294428u: goto label_294428;
        case 0x29442cu: goto label_29442c;
        case 0x294430u: goto label_294430;
        case 0x294434u: goto label_294434;
        case 0x294438u: goto label_294438;
        case 0x29443cu: goto label_29443c;
        case 0x294440u: goto label_294440;
        case 0x294444u: goto label_294444;
        case 0x294448u: goto label_294448;
        case 0x29444cu: goto label_29444c;
        case 0x294450u: goto label_294450;
        case 0x294454u: goto label_294454;
        case 0x294458u: goto label_294458;
        case 0x29445cu: goto label_29445c;
        case 0x294460u: goto label_294460;
        case 0x294464u: goto label_294464;
        case 0x294468u: goto label_294468;
        case 0x29446cu: goto label_29446c;
        case 0x294470u: goto label_294470;
        case 0x294474u: goto label_294474;
        case 0x294478u: goto label_294478;
        case 0x29447cu: goto label_29447c;
        case 0x294480u: goto label_294480;
        case 0x294484u: goto label_294484;
        case 0x294488u: goto label_294488;
        case 0x29448cu: goto label_29448c;
        case 0x294490u: goto label_294490;
        case 0x294494u: goto label_294494;
        case 0x294498u: goto label_294498;
        case 0x29449cu: goto label_29449c;
        case 0x2944a0u: goto label_2944a0;
        case 0x2944a4u: goto label_2944a4;
        case 0x2944a8u: goto label_2944a8;
        case 0x2944acu: goto label_2944ac;
        case 0x2944b0u: goto label_2944b0;
        case 0x2944b4u: goto label_2944b4;
        case 0x2944b8u: goto label_2944b8;
        case 0x2944bcu: goto label_2944bc;
        case 0x2944c0u: goto label_2944c0;
        case 0x2944c4u: goto label_2944c4;
        case 0x2944c8u: goto label_2944c8;
        case 0x2944ccu: goto label_2944cc;
        case 0x2944d0u: goto label_2944d0;
        case 0x2944d4u: goto label_2944d4;
        case 0x2944d8u: goto label_2944d8;
        case 0x2944dcu: goto label_2944dc;
        case 0x2944e0u: goto label_2944e0;
        case 0x2944e4u: goto label_2944e4;
        case 0x2944e8u: goto label_2944e8;
        case 0x2944ecu: goto label_2944ec;
        case 0x2944f0u: goto label_2944f0;
        case 0x2944f4u: goto label_2944f4;
        case 0x2944f8u: goto label_2944f8;
        case 0x2944fcu: goto label_2944fc;
        case 0x294500u: goto label_294500;
        case 0x294504u: goto label_294504;
        case 0x294508u: goto label_294508;
        case 0x29450cu: goto label_29450c;
        case 0x294510u: goto label_294510;
        case 0x294514u: goto label_294514;
        case 0x294518u: goto label_294518;
        case 0x29451cu: goto label_29451c;
        case 0x294520u: goto label_294520;
        case 0x294524u: goto label_294524;
        case 0x294528u: goto label_294528;
        case 0x29452cu: goto label_29452c;
        case 0x294530u: goto label_294530;
        case 0x294534u: goto label_294534;
        case 0x294538u: goto label_294538;
        case 0x29453cu: goto label_29453c;
        case 0x294540u: goto label_294540;
        case 0x294544u: goto label_294544;
        case 0x294548u: goto label_294548;
        case 0x29454cu: goto label_29454c;
        case 0x294550u: goto label_294550;
        case 0x294554u: goto label_294554;
        case 0x294558u: goto label_294558;
        case 0x29455cu: goto label_29455c;
        case 0x294560u: goto label_294560;
        case 0x294564u: goto label_294564;
        case 0x294568u: goto label_294568;
        case 0x29456cu: goto label_29456c;
        case 0x294570u: goto label_294570;
        case 0x294574u: goto label_294574;
        case 0x294578u: goto label_294578;
        case 0x29457cu: goto label_29457c;
        case 0x294580u: goto label_294580;
        case 0x294584u: goto label_294584;
        case 0x294588u: goto label_294588;
        case 0x29458cu: goto label_29458c;
        case 0x294590u: goto label_294590;
        case 0x294594u: goto label_294594;
        case 0x294598u: goto label_294598;
        case 0x29459cu: goto label_29459c;
        case 0x2945a0u: goto label_2945a0;
        case 0x2945a4u: goto label_2945a4;
        case 0x2945a8u: goto label_2945a8;
        case 0x2945acu: goto label_2945ac;
        case 0x2945b0u: goto label_2945b0;
        case 0x2945b4u: goto label_2945b4;
        case 0x2945b8u: goto label_2945b8;
        case 0x2945bcu: goto label_2945bc;
        case 0x2945c0u: goto label_2945c0;
        case 0x2945c4u: goto label_2945c4;
        case 0x2945c8u: goto label_2945c8;
        case 0x2945ccu: goto label_2945cc;
        case 0x2945d0u: goto label_2945d0;
        case 0x2945d4u: goto label_2945d4;
        case 0x2945d8u: goto label_2945d8;
        case 0x2945dcu: goto label_2945dc;
        case 0x2945e0u: goto label_2945e0;
        case 0x2945e4u: goto label_2945e4;
        case 0x2945e8u: goto label_2945e8;
        case 0x2945ecu: goto label_2945ec;
        case 0x2945f0u: goto label_2945f0;
        case 0x2945f4u: goto label_2945f4;
        case 0x2945f8u: goto label_2945f8;
        case 0x2945fcu: goto label_2945fc;
        case 0x294600u: goto label_294600;
        case 0x294604u: goto label_294604;
        case 0x294608u: goto label_294608;
        case 0x29460cu: goto label_29460c;
        case 0x294610u: goto label_294610;
        case 0x294614u: goto label_294614;
        case 0x294618u: goto label_294618;
        case 0x29461cu: goto label_29461c;
        case 0x294620u: goto label_294620;
        case 0x294624u: goto label_294624;
        default: break;
    }

    ctx->pc = 0x293f50u;

label_293f50:
    // 0x293f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x293f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_293f54:
    // 0x293f54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x293f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_293f58:
    // 0x293f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_293f5c:
    // 0x293f5c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x293f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_293f60:
    // 0x293f60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x293f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_293f64:
    // 0x293f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_293f68:
    // 0x293f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_293f6c:
    // 0x293f6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_293f70:
    if (ctx->pc == 0x293F70u) {
        ctx->pc = 0x293F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F6Cu;
        // 0x293f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F74u;
        goto label_293f74;
    }
    ctx->pc = 0x293F6Cu;
    {
        const bool branch_taken_0x293f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F6Cu;
        // 0x293f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f6c) {
            ctx->pc = 0x293F90u;
            goto label_293f90;
        }
    }
    ctx->pc = 0x293F74u;
label_293f74:
    // 0x293f74: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x293f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_293f78:
    // 0x293f78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x293f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_293f7c:
    // 0x293f7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x293f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_293f80:
    // 0x293f80: 0x0  nop
    ctx->pc = 0x293f80u;
    // NOP
label_293f84:
    // 0x293f84: 0x0  nop
    ctx->pc = 0x293f84u;
    // NOP
label_293f88:
    // 0x293f88: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_293f8c:
    if (ctx->pc == 0x293F8Cu) {
        ctx->pc = 0x293F90u;
        goto label_293f90;
    }
    ctx->pc = 0x293F88u;
    {
        const bool branch_taken_0x293f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293f88) {
            ctx->pc = 0x293F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293f74;
        }
    }
    ctx->pc = 0x293F90u;
label_293f90:
    // 0x293f90: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_293f94:
    // 0x293f94: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_293f98:
    if (ctx->pc == 0x293F98u) {
        ctx->pc = 0x293F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F94u;
        // 0x293f98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F9Cu;
        goto label_293f9c;
    }
    ctx->pc = 0x293F94u;
    {
        const bool branch_taken_0x293f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F94u;
        // 0x293f98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f94) {
            ctx->pc = 0x293FB8u;
            goto label_293fb8;
        }
    }
    ctx->pc = 0x293F9Cu;
label_293f9c:
    // 0x293f9c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x293f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_293fa0:
    // 0x293fa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x293fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_293fa4:
    // 0x293fa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x293fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_293fa8:
    // 0x293fa8: 0x0  nop
    ctx->pc = 0x293fa8u;
    // NOP
label_293fac:
    // 0x293fac: 0x0  nop
    ctx->pc = 0x293facu;
    // NOP
label_293fb0:
    // 0x293fb0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_293fb4:
    if (ctx->pc == 0x293FB4u) {
        ctx->pc = 0x293FB8u;
        goto label_293fb8;
    }
    ctx->pc = 0x293FB0u;
    {
        const bool branch_taken_0x293fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293fb0) {
            ctx->pc = 0x293F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293f9c;
        }
    }
    ctx->pc = 0x293FB8u;
label_293fb8:
    // 0x293fb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x293fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_293fbc:
    // 0x293fbc: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x293fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_293fc0:
    // 0x293fc0: 0xae0307b4  sw          $v1, 0x7B4($s0)
    ctx->pc = 0x293fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 3));
label_293fc4:
    // 0x293fc4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x293fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_293fc8:
    // 0x293fc8: 0xae0307b8  sw          $v1, 0x7B8($s0)
    ctx->pc = 0x293fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 3));
label_293fcc:
    // 0x293fcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x293fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293fd0:
    // 0x293fd0: 0xae0229c8  sw          $v0, 0x29C8($s0)
    ctx->pc = 0x293fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10696), GPR_U32(ctx, 2));
label_293fd4:
    // 0x293fd4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x293fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_293fd8:
    // 0x293fd8: 0x92090002  lbu         $t1, 0x2($s0)
    ctx->pc = 0x293fd8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_293fdc:
    // 0x293fdc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x293fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_293fe0:
    // 0x293fe0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x293fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_293fe4:
    // 0x293fe4: 0x24e72874  addiu       $a3, $a3, 0x2874
    ctx->pc = 0x293fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10356));
label_293fe8:
    // 0x293fe8: 0x24c62878  addiu       $a2, $a2, 0x2878
    ctx->pc = 0x293fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10360));
label_293fec:
    // 0x293fec: 0x24a52882  addiu       $a1, $a1, 0x2882
    ctx->pc = 0x293fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10370));
label_293ff0:
    // 0x293ff0: 0x2463287a  addiu       $v1, $v1, 0x287A
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10362));
label_293ff4:
    // 0x293ff4: 0x24422881  addiu       $v0, $v0, 0x2881
    ctx->pc = 0x293ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10369));
label_293ff8:
    // 0x293ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293ffc:
    // 0x293ffc: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x293ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_294000:
    // 0x294000: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x294000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_294004:
    // 0x294004: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x294004u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_294008:
    // 0x294008: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x294008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_29400c:
    // 0x29400c: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x29400cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_294010:
    // 0x294010: 0xa60729d6  sh          $a3, 0x29D6($s0)
    ctx->pc = 0x294010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10710), (uint16_t)GPR_U32(ctx, 7));
label_294014:
    // 0x294014: 0x92080002  lbu         $t0, 0x2($s0)
    ctx->pc = 0x294014u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294018:
    // 0x294018: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x294018u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_29401c:
    // 0x29401c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_294020:
    // 0x294020: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_294024:
    // 0x294024: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x294024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_294028:
    // 0x294028: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x294028u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_29402c:
    // 0x29402c: 0xa60629d8  sh          $a2, 0x29D8($s0)
    ctx->pc = 0x29402cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10712), (uint16_t)GPR_U32(ctx, 6));
label_294030:
    // 0x294030: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x294030u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294034:
    // 0x294034: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x294034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_294038:
    // 0x294038: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x294038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_29403c:
    // 0x29403c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29403cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_294040:
    // 0x294040: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x294040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_294044:
    // 0x294044: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x294044u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_294048:
    // 0x294048: 0xa60529da  sh          $a1, 0x29DA($s0)
    ctx->pc = 0x294048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10714), (uint16_t)GPR_U32(ctx, 5));
label_29404c:
    // 0x29404c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x29404cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294050:
    // 0x294050: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_294054:
    // 0x294054: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x294054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_294058:
    // 0x294058: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x294058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29405c:
    // 0x29405c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294060:
    // 0x294060: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x294060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_294064:
    // 0x294064: 0xa20329dc  sb          $v1, 0x29DC($s0)
    ctx->pc = 0x294064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10716), (uint8_t)GPR_U32(ctx, 3));
label_294068:
    // 0x294068: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x294068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_29406c:
    // 0x29406c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29406cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_294070:
    // 0x294070: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x294070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294074:
    // 0x294074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x294074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_294078:
    // 0x294078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29407c:
    // 0x29407c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x29407cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_294080:
    // 0x294080: 0xc0a6c8c  jal         func_29B230
label_294084:
    if (ctx->pc == 0x294084u) {
        ctx->pc = 0x294084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294080u;
        // 0x294084: 0xa20229dd  sb          $v0, 0x29DD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10717), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294088u;
        goto label_294088;
    }
    ctx->pc = 0x294080u;
    SET_GPR_U32(ctx, 31, 0x294088u);
    ctx->pc = 0x294084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294080u;
    // 0x294084: 0xa20229dd  sb          $v0, 0x29DD($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 10717), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x294080u, 0x294088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294088u;
label_294088:
    // 0x294088: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x294088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29408c:
    // 0x29408c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x29408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_294090:
    // 0x294090: 0xa2020162  sb          $v0, 0x162($s0)
    ctx->pc = 0x294090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 354), (uint8_t)GPR_U32(ctx, 2));
label_294094:
    // 0x294094: 0x2484f38c  addiu       $a0, $a0, -0xC74
    ctx->pc = 0x294094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964108));
label_294098:
    // 0x294098: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x294098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_29409c:
    // 0x29409c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x29409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_2940a0:
    // 0x2940a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2940a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2940a4:
    // 0x2940a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2940a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2940a8:
    // 0x2940a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2940a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2940ac:
    // 0x2940ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2940acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2940b0:
    // 0x2940b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2940b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2940b4:
    // 0x2940b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2940b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940b8:
    // 0x2940b8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2940b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2940bc:
    // 0x2940bc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_2940c0:
    if (ctx->pc == 0x2940C0u) {
        ctx->pc = 0x2940C4u;
        goto label_2940c4;
    }
    ctx->pc = 0x2940BCu;
    {
        const bool branch_taken_0x2940bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2940bc) {
            ctx->pc = 0x294100u;
            goto label_294100;
        }
    }
    ctx->pc = 0x2940C4u;
label_2940c4:
    // 0x2940c4: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x2940c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2940c8:
    // 0x2940c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2940c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2940cc:
    // 0x2940cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2940ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2940d0:
    // 0x2940d0: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x2940d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_2940d4:
    // 0x2940d4: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2940d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2940d8:
    // 0x2940d8: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x2940d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940dc:
    // 0x2940dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2940dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2940e0:
    // 0x2940e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2940e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2940e4:
    // 0x2940e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2940e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2940e8:
    // 0x2940e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2940e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2940ec:
    // 0x2940ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2940ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2940f0:
    // 0x2940f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2940f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2940f4:
    // 0x2940f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2940f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2940f8:
    // 0x2940f8: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x2940f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_2940fc:
    // 0x2940fc: 0x0  nop
    ctx->pc = 0x2940fcu;
    // NOP
label_294100:
    // 0x294100: 0xae000700  sw          $zero, 0x700($s0)
    ctx->pc = 0x294100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
label_294104:
    // 0x294104: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x294104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
label_294108:
    // 0x294108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x294108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29410c:
    // 0x29410c: 0xae000708  sw          $zero, 0x708($s0)
    ctx->pc = 0x29410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 0));
label_294110:
    // 0x294110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294114:
    // 0x294114: 0xae02070c  sw          $v0, 0x70C($s0)
    ctx->pc = 0x294114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 2));
label_294118:
    // 0x294118: 0xa2000730  sb          $zero, 0x730($s0)
    ctx->pc = 0x294118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 0));
label_29411c:
    // 0x29411c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x29411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_294120:
    // 0x294120: 0xa2030734  sb          $v1, 0x734($s0)
    ctx->pc = 0x294120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1844), (uint8_t)GPR_U32(ctx, 3));
label_294124:
    // 0x294124: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x294124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
label_294128:
    // 0x294128: 0xa2000735  sb          $zero, 0x735($s0)
    ctx->pc = 0x294128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1845), (uint8_t)GPR_U32(ctx, 0));
label_29412c:
    // 0x29412c: 0xa2000733  sb          $zero, 0x733($s0)
    ctx->pc = 0x29412cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1843), (uint8_t)GPR_U32(ctx, 0));
label_294130:
    // 0x294130: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x294130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294134:
    // 0x294134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x294134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_294138:
    // 0x294138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29413c:
    // 0x29413c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_294140:
    // 0x294140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_294144:
    if (ctx->pc == 0x294144u) {
        ctx->pc = 0x294148u;
        goto label_294148;
    }
    ctx->pc = 0x294140u;
    {
        const bool branch_taken_0x294140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294140) {
            ctx->pc = 0x294158u;
            goto label_294158;
        }
    }
    ctx->pc = 0x294148u;
label_294148:
    // 0x294148: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x294148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29414c:
    // 0x29414c: 0x10000004  b           . + 4 + (0x4 << 2)
label_294150:
    if (ctx->pc == 0x294150u) {
        ctx->pc = 0x294150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29414Cu;
        // 0x294150: 0xae0206bc  sw          $v0, 0x6BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294154u;
        goto label_294154;
    }
    ctx->pc = 0x29414Cu;
    {
        const bool branch_taken_0x29414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29414Cu;
        // 0x294150: 0xae0206bc  sw          $v0, 0x6BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29414c) {
            ctx->pc = 0x294160u;
            goto label_294160;
        }
    }
    ctx->pc = 0x294154u;
label_294154:
    // 0x294154: 0x0  nop
    ctx->pc = 0x294154u;
    // NOP
label_294158:
    // 0x294158: 0xae0006bc  sw          $zero, 0x6BC($s0)
    ctx->pc = 0x294158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1724), GPR_U32(ctx, 0));
label_29415c:
    // 0x29415c: 0x0  nop
    ctx->pc = 0x29415cu;
    // NOP
label_294160:
    // 0x294160: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x294160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294164:
    // 0x294164: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x294164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_294168:
    // 0x294168: 0x24422770  addiu       $v0, $v0, 0x2770
    ctx->pc = 0x294168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10096));
label_29416c:
    // 0x29416c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294170:
    // 0x294170: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x294170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_294174:
    // 0x294174: 0xa20207f7  sb          $v0, 0x7F7($s0)
    ctx->pc = 0x294174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2039), (uint8_t)GPR_U32(ctx, 2));
label_294178:
    // 0x294178: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x294178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_29417c:
    // 0x29417c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_294180:
    if (ctx->pc == 0x294180u) {
        ctx->pc = 0x294184u;
        goto label_294184;
    }
    ctx->pc = 0x29417Cu;
    {
        const bool branch_taken_0x29417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29417c) {
            ctx->pc = 0x2941B8u;
            goto label_2941b8;
        }
    }
    ctx->pc = 0x294184u;
label_294184:
    // 0x294184: 0x920307f7  lbu         $v1, 0x7F7($s0)
    ctx->pc = 0x294184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_294188:
    // 0x294188: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x294188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29418c:
    // 0x29418c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x29418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_294190:
    // 0x294190: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x294190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_294194:
    // 0x294194: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x294194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_294198:
    // 0x294198: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x294198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_29419c:
    // 0x29419c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x29419cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2941a0:
    // 0x2941a0: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2941a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_2941a4:
    // 0x2941a4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2941a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2941a8:
    // 0x2941a8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2941a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2941ac:
    // 0x2941ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2941acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2941b0:
    // 0x2941b0: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x2941b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_2941b4:
    // 0x2941b4: 0x0  nop
    ctx->pc = 0x2941b4u;
    // NOP
label_2941b8:
    // 0x2941b8: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941bc:
    // 0x2941bc: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2941bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_2941c0:
    // 0x2941c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2941c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2941c4:
    // 0x2941c4: 0xa20207fa  sb          $v0, 0x7FA($s0)
    ctx->pc = 0x2941c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2042), (uint8_t)GPR_U32(ctx, 2));
label_2941c8:
    // 0x2941c8: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941cc:
    // 0x2941cc: 0xa20207fb  sb          $v0, 0x7FB($s0)
    ctx->pc = 0x2941ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2043), (uint8_t)GPR_U32(ctx, 2));
label_2941d0:
    // 0x2941d0: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941d4:
    // 0x2941d4: 0xa20207fc  sb          $v0, 0x7FC($s0)
    ctx->pc = 0x2941d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2044), (uint8_t)GPR_U32(ctx, 2));
label_2941d8:
    // 0x2941d8: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941dc:
    // 0x2941dc: 0xa20207fd  sb          $v0, 0x7FD($s0)
    ctx->pc = 0x2941dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2045), (uint8_t)GPR_U32(ctx, 2));
label_2941e0:
    // 0x2941e0: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941e4:
    // 0x2941e4: 0xa20207fe  sb          $v0, 0x7FE($s0)
    ctx->pc = 0x2941e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2046), (uint8_t)GPR_U32(ctx, 2));
label_2941e8:
    // 0x2941e8: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941ec:
    // 0x2941ec: 0xa20207ff  sb          $v0, 0x7FF($s0)
    ctx->pc = 0x2941ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2047), (uint8_t)GPR_U32(ctx, 2));
label_2941f0:
    // 0x2941f0: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941f4:
    // 0x2941f4: 0xa2020800  sb          $v0, 0x800($s0)
    ctx->pc = 0x2941f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2048), (uint8_t)GPR_U32(ctx, 2));
label_2941f8:
    // 0x2941f8: 0x920207f7  lbu         $v0, 0x7F7($s0)
    ctx->pc = 0x2941f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2039)));
label_2941fc:
    // 0x2941fc: 0xc053b28  jal         func_14ECA0
label_294200:
    if (ctx->pc == 0x294200u) {
        ctx->pc = 0x294200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941FCu;
        // 0x294200: 0xa2020801  sb          $v0, 0x801($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2049), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294204u;
        goto label_294204;
    }
    ctx->pc = 0x2941FCu;
    SET_GPR_U32(ctx, 31, 0x294204u);
    ctx->pc = 0x294200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2941FCu;
    // 0x294200: 0xa2020801  sb          $v0, 0x801($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2049), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x2941FCu, 0x294204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294204u;
label_294204:
    // 0x294204: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x294204u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294208:
    // 0x294208: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x294208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_29420c:
    // 0x29420c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x29420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_294210:
    // 0x294210: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x294210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_294214:
    // 0x294214: 0x24c6f38c  addiu       $a2, $a2, -0xC74
    ctx->pc = 0x294214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964108));
label_294218:
    // 0x294218: 0x2442f390  addiu       $v0, $v0, -0xC70
    ctx->pc = 0x294218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964112));
label_29421c:
    // 0x29421c: 0x2484f394  addiu       $a0, $a0, -0xC6C
    ctx->pc = 0x29421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964116));
label_294220:
    // 0x294220: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x294220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_294224:
    // 0x294224: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x294224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294228:
    // 0x294228: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x294228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_29422c:
    // 0x29422c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x29422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_294230:
    // 0x294230: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294234:
    // 0x294234: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x294234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_294238:
    // 0x294238: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x294238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_29423c:
    // 0x29423c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x29423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_294240:
    // 0x294240: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x294240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294244:
    // 0x294244: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x294244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_294248:
    // 0x294248: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x294248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_29424c:
    // 0x29424c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x29424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_294250:
    // 0x294250: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x294250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294254:
    // 0x294254: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294258:
    // 0x294258: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x294258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29425c:
    // 0x29425c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x29425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_294260:
    // 0x294260: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x294260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294264:
    // 0x294264: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x294264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_294268:
    // 0x294268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29426c:
    // 0x29426c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_294270:
    // 0x294270: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_294274:
    // 0x294274: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294278:
    // 0x294278: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x294278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_29427c:
    // 0x29427c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x29427cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294280:
    // 0x294280: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x294280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_294284:
    // 0x294284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294288:
    // 0x294288: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x294288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29428c:
    // 0x29428c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_294290:
    // 0x294290: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294294:
    // 0x294294: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x294294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_294298:
    // 0x294298: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x294298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_29429c:
    // 0x29429c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2942a0:
    if (ctx->pc == 0x2942A0u) {
        ctx->pc = 0x2942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29429Cu;
        // 0x2942a0: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2942A4u;
        goto label_2942a4;
    }
    ctx->pc = 0x29429Cu;
    {
        const bool branch_taken_0x29429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29429Cu;
        // 0x2942a0: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29429c) {
            ctx->pc = 0x2942B8u;
            goto label_2942b8;
        }
    }
    ctx->pc = 0x2942A4u;
label_2942a4:
    // 0x2942a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2942a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2942a8:
    // 0x2942a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2942a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2942ac:
    // 0x2942ac: 0x26070740  addiu       $a3, $s0, 0x740
    ctx->pc = 0x2942acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
label_2942b0:
    // 0x2942b0: 0xc053ae8  jal         func_14EBA0
label_2942b4:
    if (ctx->pc == 0x2942B4u) {
        ctx->pc = 0x2942B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942B0u;
        // 0x2942b4: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2942B8u;
        goto label_2942b8;
    }
    ctx->pc = 0x2942B0u;
    SET_GPR_U32(ctx, 31, 0x2942B8u);
    ctx->pc = 0x2942B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942B0u;
    // 0x2942b4: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x2942B0u, 0x2942B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942B8u;
label_2942b8:
    // 0x2942b8: 0xc04150c  jal         func_105430
label_2942bc:
    if (ctx->pc == 0x2942BCu) {
        ctx->pc = 0x2942BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942B8u;
        // 0x2942bc: 0x26040740  addiu       $a0, $s0, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2942C0u;
        goto label_2942c0;
    }
    ctx->pc = 0x2942B8u;
    SET_GPR_U32(ctx, 31, 0x2942C0u);
    ctx->pc = 0x2942BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942B8u;
    // 0x2942bc: 0x26040740  addiu       $a0, $s0, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x2942B8u, 0x2942C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942C0u;
label_2942c0:
    // 0x2942c0: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2942c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2942c4:
    // 0x2942c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2942c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2942c8:
    // 0x2942c8: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x2942c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
label_2942cc:
    // 0x2942cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2942ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2942d0:
    // 0x2942d0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2942d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2942d4:
    // 0x2942d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2942d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2942d8:
    // 0x2942d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2942dc:
    // 0x2942dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2942dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2942e0:
    // 0x2942e0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2942e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2942e4:
    // 0x2942e4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_2942e8:
    if (ctx->pc == 0x2942E8u) {
        ctx->pc = 0x2942E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942E4u;
        // 0x2942e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2942ECu;
        goto label_2942ec;
    }
    ctx->pc = 0x2942E4u;
    {
        const bool branch_taken_0x2942e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2942E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942E4u;
        // 0x2942e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942e4) {
            ctx->pc = 0x294370u;
            goto label_294370;
        }
    }
    ctx->pc = 0x2942ECu;
label_2942ec:
    // 0x2942ec: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_2942f0:
    if (ctx->pc == 0x2942F0u) {
        ctx->pc = 0x2942F4u;
        goto label_2942f4;
    }
    ctx->pc = 0x2942ECu;
    {
        const bool branch_taken_0x2942ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2942ec) {
            ctx->pc = 0x294358u;
            goto label_294358;
        }
    }
    ctx->pc = 0x2942F4u;
label_2942f4:
    // 0x2942f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2942f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2942f8:
    // 0x2942f8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_2942fc:
    if (ctx->pc == 0x2942FCu) {
        ctx->pc = 0x2942FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942F8u;
        // 0x2942fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294300u;
        goto label_294300;
    }
    ctx->pc = 0x2942F8u;
    {
        const bool branch_taken_0x2942f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2942FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942F8u;
        // 0x2942fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942f8) {
            ctx->pc = 0x294348u;
            goto label_294348;
        }
    }
    ctx->pc = 0x294300u;
label_294300:
    // 0x294300: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_294304:
    if (ctx->pc == 0x294304u) {
        ctx->pc = 0x294308u;
        goto label_294308;
    }
    ctx->pc = 0x294300u;
    {
        const bool branch_taken_0x294300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x294300) {
            ctx->pc = 0x294330u;
            goto label_294330;
        }
    }
    ctx->pc = 0x294308u;
label_294308:
    // 0x294308: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_29430c:
    if (ctx->pc == 0x29430Cu) {
        ctx->pc = 0x294310u;
        goto label_294310;
    }
    ctx->pc = 0x294308u;
    {
        const bool branch_taken_0x294308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294308) {
            ctx->pc = 0x294318u;
            goto label_294318;
        }
    }
    ctx->pc = 0x294310u;
label_294310:
    // 0x294310: 0x1000001b  b           . + 4 + (0x1B << 2)
label_294314:
    if (ctx->pc == 0x294314u) {
        ctx->pc = 0x294318u;
        goto label_294318;
    }
    ctx->pc = 0x294310u;
    {
        const bool branch_taken_0x294310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294310) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x294318u;
label_294318:
    // 0x294318: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x294318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_29431c:
    // 0x29431c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x29431cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_294320:
    // 0x294320: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x294320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_294324:
    // 0x294324: 0x10000016  b           . + 4 + (0x16 << 2)
label_294328:
    if (ctx->pc == 0x294328u) {
        ctx->pc = 0x294328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294324u;
        // 0x294328: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29432Cu;
        goto label_29432c;
    }
    ctx->pc = 0x294324u;
    {
        const bool branch_taken_0x294324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294324u;
        // 0x294328: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294324) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x29432Cu;
label_29432c:
    // 0x29432c: 0x0  nop
    ctx->pc = 0x29432cu;
    // NOP
label_294330:
    // 0x294330: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x294330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_294334:
    // 0x294334: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x294334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_294338:
    // 0x294338: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x294338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_29433c:
    // 0x29433c: 0x10000010  b           . + 4 + (0x10 << 2)
label_294340:
    if (ctx->pc == 0x294340u) {
        ctx->pc = 0x294340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29433Cu;
        // 0x294340: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294344u;
        goto label_294344;
    }
    ctx->pc = 0x29433Cu;
    {
        const bool branch_taken_0x29433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29433Cu;
        // 0x294340: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29433c) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x294344u;
label_294344:
    // 0x294344: 0x0  nop
    ctx->pc = 0x294344u;
    // NOP
label_294348:
    // 0x294348: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x294348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29434c:
    // 0x29434c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x29434cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_294350:
    // 0x294350: 0x1000000b  b           . + 4 + (0xB << 2)
label_294354:
    if (ctx->pc == 0x294354u) {
        ctx->pc = 0x294354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294350u;
        // 0x294354: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294358u;
        goto label_294358;
    }
    ctx->pc = 0x294350u;
    {
        const bool branch_taken_0x294350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294350u;
        // 0x294354: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294350) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x294358u;
label_294358:
    // 0x294358: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x294358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
label_29435c:
    // 0x29435c: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x29435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
label_294360:
    // 0x294360: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x294360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_294364:
    // 0x294364: 0x10000006  b           . + 4 + (0x6 << 2)
label_294368:
    if (ctx->pc == 0x294368u) {
        ctx->pc = 0x294368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294364u;
        // 0x294368: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29436Cu;
        goto label_29436c;
    }
    ctx->pc = 0x294364u;
    {
        const bool branch_taken_0x294364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294364u;
        // 0x294368: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294364) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x29436Cu;
label_29436c:
    // 0x29436c: 0x0  nop
    ctx->pc = 0x29436cu;
    // NOP
label_294370:
    // 0x294370: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x294370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_294374:
    // 0x294374: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x294374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_294378:
    // 0x294378: 0xae0206c0  sw          $v0, 0x6C0($s0)
    ctx->pc = 0x294378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
label_29437c:
    // 0x29437c: 0x0  nop
    ctx->pc = 0x29437cu;
    // NOP
label_294380:
    // 0x294380: 0x26040930  addiu       $a0, $s0, 0x930
    ctx->pc = 0x294380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
label_294384:
    // 0x294384: 0xc04f7d8  jal         func_13DF60
label_294388:
    if (ctx->pc == 0x294388u) {
        ctx->pc = 0x294388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294384u;
        // 0x294388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29438Cu;
        goto label_29438c;
    }
    ctx->pc = 0x294384u;
    SET_GPR_U32(ctx, 31, 0x29438Cu);
    ctx->pc = 0x294388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294384u;
    // 0x294388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF60u, 0x294384u, 0x29438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29438Cu;
label_29438c:
    // 0x29438c: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x29438cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294390:
    // 0x294390: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x294390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_294394:
    // 0x294394: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x294394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_294398:
    // 0x294398: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x294398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_29439c:
    // 0x29439c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x29439cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2943a0:
    // 0x2943a0: 0x24c6f388  addiu       $a2, $a2, -0xC78
    ctx->pc = 0x2943a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964104));
label_2943a4:
    // 0x2943a4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2943a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2943a8:
    // 0x2943a8: 0x26041900  addiu       $a0, $s0, 0x1900
    ctx->pc = 0x2943a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6400));
label_2943ac:
    // 0x2943ac: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2943acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2943b0:
    // 0x2943b0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2943b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2943b4:
    // 0x2943b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2943b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2943b8:
    // 0x2943b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2943b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2943bc:
    // 0x2943bc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2943bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2943c0:
    // 0x2943c0: 0xc04f7a4  jal         func_13DE90
label_2943c4:
    if (ctx->pc == 0x2943C4u) {
        ctx->pc = 0x2943C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943C0u;
        // 0x2943c4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943C8u;
        goto label_2943c8;
    }
    ctx->pc = 0x2943C0u;
    SET_GPR_U32(ctx, 31, 0x2943C8u);
    ctx->pc = 0x2943C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943C0u;
    // 0x2943c4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x2943C0u, 0x2943C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943C8u;
label_2943c8:
    // 0x2943c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2943c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2943cc:
    // 0x2943cc: 0x26041900  addiu       $a0, $s0, 0x1900
    ctx->pc = 0x2943ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6400));
label_2943d0:
    // 0x2943d0: 0xc04e710  jal         func_139C40
label_2943d4:
    if (ctx->pc == 0x2943D4u) {
        ctx->pc = 0x2943D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943D0u;
        // 0x2943d4: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943D8u;
        goto label_2943d8;
    }
    ctx->pc = 0x2943D0u;
    SET_GPR_U32(ctx, 31, 0x2943D8u);
    ctx->pc = 0x2943D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943D0u;
    // 0x2943d4: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x2943D0u, 0x2943D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943D8u;
label_2943d8:
    // 0x2943d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2943d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2943dc:
    // 0x2943dc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2943dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2943e0:
    // 0x2943e0: 0x34441100  ori         $a0, $v0, 0x1100
    ctx->pc = 0x2943e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
label_2943e4:
    // 0x2943e4: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x2943e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
label_2943e8:
    // 0x2943e8: 0xae0406c4  sw          $a0, 0x6C4($s0)
    ctx->pc = 0x2943e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 4));
label_2943ec:
    // 0x2943ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2943ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_2943f0:
    // 0x2943f0: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2943f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2943f4:
    // 0x2943f4: 0x2442f384  addiu       $v0, $v0, -0xC7C
    ctx->pc = 0x2943f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964100));
label_2943f8:
    // 0x2943f8: 0x26040930  addiu       $a0, $s0, 0x930
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
label_2943fc:
    // 0x2943fc: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2943fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_294400:
    // 0x294400: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x294400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_294404:
    // 0x294404: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x294404u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_294408:
    // 0x294408: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29440c:
    // 0x29440c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_294410:
    // 0x294410: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x294410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294414:
    // 0x294414: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x294414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_294418:
    // 0x294418: 0xc04f7b8  jal         func_13DEE0
label_29441c:
    if (ctx->pc == 0x29441Cu) {
        ctx->pc = 0x29441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294418u;
        // 0x29441c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294420u;
        goto label_294420;
    }
    ctx->pc = 0x294418u;
    SET_GPR_U32(ctx, 31, 0x294420u);
    ctx->pc = 0x29441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294418u;
    // 0x29441c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DEE0u, 0x294418u, 0x294420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294420u;
label_294420:
    // 0x294420: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x294420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_294424:
    // 0x294424: 0xc09ae20  jal         func_26B880
label_294428:
    if (ctx->pc == 0x294428u) {
        ctx->pc = 0x294428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294424u;
        // 0x294428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29442Cu;
        goto label_29442c;
    }
    ctx->pc = 0x294424u;
    SET_GPR_U32(ctx, 31, 0x29442Cu);
    ctx->pc = 0x294428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294424u;
    // 0x294428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B880u, 0x294424u, 0x29442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29442Cu;
label_29442c:
    // 0x29442c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x29442cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294430:
    // 0x294430: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x294430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_294434:
    // 0x294434: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
label_294438:
    // 0x294438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x294438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29443c:
    // 0x29443c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294440:
    // 0x294440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x294440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_294444:
    // 0x294444: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x294444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_294448:
    // 0x294448: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29444c:
    if (ctx->pc == 0x29444Cu) {
        ctx->pc = 0x29444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294448u;
        // 0x29444c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294450u;
        goto label_294450;
    }
    ctx->pc = 0x294448u;
    {
        const bool branch_taken_0x294448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294448u;
        // 0x29444c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294448) {
            ctx->pc = 0x294498u;
            goto label_294498;
        }
    }
    ctx->pc = 0x294450u;
label_294450:
    // 0x294450: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_294454:
    // 0x294454: 0x0  nop
    ctx->pc = 0x294454u;
    // NOP
label_294458:
    // 0x294458: 0x8e260858  lw          $a2, 0x858($s1)
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_29445c:
    // 0x29445c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_294460:
    if (ctx->pc == 0x294460u) {
        ctx->pc = 0x294464u;
        goto label_294464;
    }
    ctx->pc = 0x29445Cu;
    {
        const bool branch_taken_0x29445c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x29445c) {
            ctx->pc = 0x294470u;
            goto label_294470;
        }
    }
    ctx->pc = 0x294464u;
label_294464:
    // 0x294464: 0x10000006  b           . + 4 + (0x6 << 2)
label_294468:
    if (ctx->pc == 0x294468u) {
        ctx->pc = 0x294468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294464u;
        // 0x294468: 0xae200858  sw          $zero, 0x858($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29446Cu;
        goto label_29446c;
    }
    ctx->pc = 0x294464u;
    {
        const bool branch_taken_0x294464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294464u;
        // 0x294468: 0xae200858  sw          $zero, 0x858($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294464) {
            ctx->pc = 0x294480u;
            goto label_294480;
        }
    }
    ctx->pc = 0x29446Cu;
label_29446c:
    // 0x29446c: 0x0  nop
    ctx->pc = 0x29446cu;
    // NOP
label_294470:
    // 0x294470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294474:
    // 0x294474: 0xc0a5328  jal         func_294CA0
label_294478:
    if (ctx->pc == 0x294478u) {
        ctx->pc = 0x294478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294474u;
        // 0x294478: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29447Cu;
        goto label_29447c;
    }
    ctx->pc = 0x294474u;
    SET_GPR_U32(ctx, 31, 0x29447Cu);
    ctx->pc = 0x294478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294474u;
    // 0x294478: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CA0u, 0x294474u, 0x29447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29447Cu;
label_29447c:
    // 0x29447c: 0x0  nop
    ctx->pc = 0x29447cu;
    // NOP
label_294480:
    // 0x294480: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294484:
    // 0x294484: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x294484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_294488:
    // 0x294488: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_29448c:
    if (ctx->pc == 0x29448Cu) {
        ctx->pc = 0x29448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294488u;
        // 0x29448c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294490u;
        goto label_294490;
    }
    ctx->pc = 0x294488u;
    {
        const bool branch_taken_0x294488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294488u;
        // 0x29448c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294488) {
            ctx->pc = 0x294458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294458;
        }
    }
    ctx->pc = 0x294490u;
label_294490:
    // 0x294490: 0x10000005  b           . + 4 + (0x5 << 2)
label_294494:
    if (ctx->pc == 0x294494u) {
        ctx->pc = 0x294498u;
        goto label_294498;
    }
    ctx->pc = 0x294490u;
    {
        const bool branch_taken_0x294490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294490) {
            ctx->pc = 0x2944A8u;
            goto label_2944a8;
        }
    }
    ctx->pc = 0x294498u;
label_294498:
    // 0x294498: 0xae00085c  sw          $zero, 0x85C($s0)
    ctx->pc = 0x294498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 0));
label_29449c:
    // 0x29449c: 0xae000860  sw          $zero, 0x860($s0)
    ctx->pc = 0x29449cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 0));
label_2944a0:
    // 0x2944a0: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x2944a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_2944a4:
    // 0x2944a4: 0x0  nop
    ctx->pc = 0x2944a4u;
    // NOP
label_2944a8:
    // 0x2944a8: 0xae100858  sw          $s0, 0x858($s0)
    ctx->pc = 0x2944a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 16));
label_2944ac:
    // 0x2944ac: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x2944acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_2944b0:
    // 0x2944b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2944b4:
    if (ctx->pc == 0x2944B4u) {
        ctx->pc = 0x2944B8u;
        goto label_2944b8;
    }
    ctx->pc = 0x2944B0u;
    {
        const bool branch_taken_0x2944b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2944b0) {
            ctx->pc = 0x2944D0u;
            goto label_2944d0;
        }
    }
    ctx->pc = 0x2944B8u;
label_2944b8:
    // 0x2944b8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2944b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_2944bc:
    // 0x2944bc: 0xc0d23ec  jal         func_348FB0
label_2944c0:
    if (ctx->pc == 0x2944C0u) {
        ctx->pc = 0x2944C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944BCu;
        // 0x2944c0: 0x94440058  lhu         $a0, 0x58($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944C4u;
        goto label_2944c4;
    }
    ctx->pc = 0x2944BCu;
    SET_GPR_U32(ctx, 31, 0x2944C4u);
    ctx->pc = 0x2944C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944BCu;
    // 0x2944c0: 0x94440058  lhu         $a0, 0x58($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2944BCu, 0x2944C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2944C4u;
label_2944c4:
    // 0x2944c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2944c8:
    if (ctx->pc == 0x2944C8u) {
        ctx->pc = 0x2944C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944C4u;
        // 0x2944c8: 0xae0229cc  sw          $v0, 0x29CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944CCu;
        goto label_2944cc;
    }
    ctx->pc = 0x2944C4u;
    {
        const bool branch_taken_0x2944c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2944C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944C4u;
        // 0x2944c8: 0xae0229cc  sw          $v0, 0x29CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944c4) {
            ctx->pc = 0x2944D8u;
            goto label_2944d8;
        }
    }
    ctx->pc = 0x2944CCu;
label_2944cc:
    // 0x2944cc: 0x0  nop
    ctx->pc = 0x2944ccu;
    // NOP
label_2944d0:
    // 0x2944d0: 0xae0029cc  sw          $zero, 0x29CC($s0)
    ctx->pc = 0x2944d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10700), GPR_U32(ctx, 0));
label_2944d4:
    // 0x2944d4: 0x0  nop
    ctx->pc = 0x2944d4u;
    // NOP
label_2944d8:
    // 0x2944d8: 0xc0a60bc  jal         func_2982F0
label_2944dc:
    if (ctx->pc == 0x2944DCu) {
        ctx->pc = 0x2944DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944D8u;
        // 0x2944dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944E0u;
        goto label_2944e0;
    }
    ctx->pc = 0x2944D8u;
    SET_GPR_U32(ctx, 31, 0x2944E0u);
    ctx->pc = 0x2944DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944D8u;
    // 0x2944dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982F0u, 0x2944D8u, 0x2944E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2944E0u;
label_2944e0:
    // 0x2944e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2944e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2944e4:
    // 0x2944e4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2944e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2944e8:
    // 0x2944e8: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x2944e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_2944ec:
    // 0x2944ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2944f0:
    if (ctx->pc == 0x2944F0u) {
        ctx->pc = 0x2944F4u;
        goto label_2944f4;
    }
    ctx->pc = 0x2944ECu;
    {
        const bool branch_taken_0x2944ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2944ec) {
            ctx->pc = 0x294510u;
            goto label_294510;
        }
    }
    ctx->pc = 0x2944F4u;
label_2944f4:
    // 0x2944f4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2944f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2944f8:
    // 0x2944f8: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x2944f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_2944fc:
    // 0x2944fc: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x2944fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_294500:
    // 0x294500: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x294500u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_294504:
    // 0x294504: 0xc09ae2c  jal         func_26B8B0
label_294508:
    if (ctx->pc == 0x294508u) {
        ctx->pc = 0x294508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294504u;
        // 0x294508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29450Cu;
        goto label_29450c;
    }
    ctx->pc = 0x294504u;
    SET_GPR_U32(ctx, 31, 0x29450Cu);
    ctx->pc = 0x294508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294504u;
    // 0x294508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x294504u, 0x29450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29450Cu;
label_29450c:
    // 0x29450c: 0x0  nop
    ctx->pc = 0x29450cu;
    // NOP
label_294510:
    // 0x294510: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294514:
    // 0x294514: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x294514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_294518:
    // 0x294518: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_29451c:
    if (ctx->pc == 0x29451Cu) {
        ctx->pc = 0x29451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294518u;
        // 0x29451c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294520u;
        goto label_294520;
    }
    ctx->pc = 0x294518u;
    {
        const bool branch_taken_0x294518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294518u;
        // 0x29451c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294518) {
            ctx->pc = 0x2944E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2944e8;
        }
    }
    ctx->pc = 0x294520u;
label_294520:
    // 0x294520: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x294520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
label_294524:
    // 0x294524: 0xc0991d0  jal         func_264740
label_294528:
    if (ctx->pc == 0x294528u) {
        ctx->pc = 0x294528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294524u;
        // 0x294528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29452Cu;
        goto label_29452c;
    }
    ctx->pc = 0x294524u;
    SET_GPR_U32(ctx, 31, 0x29452Cu);
    ctx->pc = 0x294528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294524u;
    // 0x294528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264740u, 0x294524u, 0x29452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29452Cu;
label_29452c:
    // 0x29452c: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x29452cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_294530:
    // 0x294530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294534:
    // 0x294534: 0xc09d400  jal         func_275000
label_294538:
    if (ctx->pc == 0x294538u) {
        ctx->pc = 0x294538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294534u;
        // 0x294538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29453Cu;
        goto label_29453c;
    }
    ctx->pc = 0x294534u;
    SET_GPR_U32(ctx, 31, 0x29453Cu);
    ctx->pc = 0x294538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294534u;
    // 0x294538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275000u, 0x294534u, 0x29453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29453Cu;
label_29453c:
    // 0x29453c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x29453cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_294540:
    // 0x294540: 0xc09e6e4  jal         func_279B90
label_294544:
    if (ctx->pc == 0x294544u) {
        ctx->pc = 0x294544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294540u;
        // 0x294544: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294548u;
        goto label_294548;
    }
    ctx->pc = 0x294540u;
    SET_GPR_U32(ctx, 31, 0x294548u);
    ctx->pc = 0x294544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294540u;
    // 0x294544: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x294540u, 0x294548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294548u;
label_294548:
    // 0x294548: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x294548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29454c:
    // 0x29454c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x29454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_294550:
    // 0x294550: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x294550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
label_294554:
    // 0x294554: 0x24847c20  addiu       $a0, $a0, 0x7C20
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31776));
label_294558:
    // 0x294558: 0xc09e6e4  jal         func_279B90
label_29455c:
    if (ctx->pc == 0x29455Cu) {
        ctx->pc = 0x29455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294558u;
        // 0x29455c: 0xae0204bc  sw          $v0, 0x4BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294560u;
        goto label_294560;
    }
    ctx->pc = 0x294558u;
    SET_GPR_U32(ctx, 31, 0x294560u);
    ctx->pc = 0x29455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294558u;
    // 0x29455c: 0xae0204bc  sw          $v0, 0x4BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x294558u, 0x294560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294560u;
label_294560:
    // 0x294560: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x294560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_294564:
    // 0x294564: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x294564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_294568:
    // 0x294568: 0x24427c20  addiu       $v0, $v0, 0x7C20
    ctx->pc = 0x294568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31776));
label_29456c:
    // 0x29456c: 0x2484b9f0  addiu       $a0, $a0, -0x4610
    ctx->pc = 0x29456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949360));
label_294570:
    // 0x294570: 0xc09e6e4  jal         func_279B90
label_294574:
    if (ctx->pc == 0x294574u) {
        ctx->pc = 0x294574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294570u;
        // 0x294574: 0xae0204b4  sw          $v0, 0x4B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294578u;
        goto label_294578;
    }
    ctx->pc = 0x294570u;
    SET_GPR_U32(ctx, 31, 0x294578u);
    ctx->pc = 0x294574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294570u;
    // 0x294574: 0xae0204b4  sw          $v0, 0x4B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x294570u, 0x294578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294578u;
label_294578:
    // 0x294578: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x294578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29457c:
    // 0x29457c: 0x26042900  addiu       $a0, $s0, 0x2900
    ctx->pc = 0x29457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10496));
label_294580:
    // 0x294580: 0x2442b9f0  addiu       $v0, $v0, -0x4610
    ctx->pc = 0x294580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949360));
label_294584:
    // 0x294584: 0xc09d8dc  jal         func_276370
label_294588:
    if (ctx->pc == 0x294588u) {
        ctx->pc = 0x294588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294584u;
        // 0x294588: 0xae0204b8  sw          $v0, 0x4B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29458Cu;
        goto label_29458c;
    }
    ctx->pc = 0x294584u;
    SET_GPR_U32(ctx, 31, 0x29458Cu);
    ctx->pc = 0x294588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294584u;
    // 0x294588: 0xae0204b8  sw          $v0, 0x4B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276370u, 0x294584u, 0x29458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29458Cu;
label_29458c:
    // 0x29458c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x29458cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_294590:
    // 0x294590: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x294590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_294594:
    // 0x294594: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_294598:
    if (ctx->pc == 0x294598u) {
        ctx->pc = 0x294598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294594u;
        // 0x294598: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29459Cu;
        goto label_29459c;
    }
    ctx->pc = 0x294594u;
    {
        const bool branch_taken_0x294594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294594u;
        // 0x294598: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294594) {
            ctx->pc = 0x2945B0u;
            goto label_2945b0;
        }
    }
    ctx->pc = 0x29459Cu;
label_29459c:
    // 0x29459c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2945a0:
    if (ctx->pc == 0x2945A0u) {
        ctx->pc = 0x2945A4u;
        goto label_2945a4;
    }
    ctx->pc = 0x29459Cu;
    {
        const bool branch_taken_0x29459c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29459c) {
            ctx->pc = 0x2945B0u;
            goto label_2945b0;
        }
    }
    ctx->pc = 0x2945A4u;
label_2945a4:
    // 0x2945a4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2945a8:
    // 0x2945a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2945ac:
    if (ctx->pc == 0x2945ACu) {
        ctx->pc = 0x2945B0u;
        goto label_2945b0;
    }
    ctx->pc = 0x2945A8u;
    {
        const bool branch_taken_0x2945a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2945a8) {
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x2945B0u;
label_2945b0:
    // 0x2945b0: 0x26042900  addiu       $a0, $s0, 0x2900
    ctx->pc = 0x2945b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10496));
label_2945b4:
    // 0x2945b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2945b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2945b8:
    // 0x2945b8: 0xc09d8ec  jal         func_2763B0
label_2945bc:
    if (ctx->pc == 0x2945BCu) {
        ctx->pc = 0x2945BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945B8u;
        // 0x2945bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945C0u;
        goto label_2945c0;
    }
    ctx->pc = 0x2945B8u;
    SET_GPR_U32(ctx, 31, 0x2945C0u);
    ctx->pc = 0x2945BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945B8u;
    // 0x2945bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2763B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2763B0u, 0x2945B8u, 0x2945C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945C0u;
label_2945c0:
    // 0x2945c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2945c4:
    if (ctx->pc == 0x2945C4u) {
        ctx->pc = 0x2945C8u;
        goto label_2945c8;
    }
    ctx->pc = 0x2945C0u;
    {
        const bool branch_taken_0x2945c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2945c0) {
            ctx->pc = 0x2945D8u;
            goto label_2945d8;
        }
    }
    ctx->pc = 0x2945C8u;
label_2945c8:
    // 0x2945c8: 0x26042900  addiu       $a0, $s0, 0x2900
    ctx->pc = 0x2945c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10496));
label_2945cc:
    // 0x2945cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2945ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2945d0:
    // 0x2945d0: 0xc09d8ec  jal         func_2763B0
label_2945d4:
    if (ctx->pc == 0x2945D4u) {
        ctx->pc = 0x2945D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945D0u;
        // 0x2945d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945D8u;
        goto label_2945d8;
    }
    ctx->pc = 0x2945D0u;
    SET_GPR_U32(ctx, 31, 0x2945D8u);
    ctx->pc = 0x2945D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945D0u;
    // 0x2945d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2763B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2763B0u, 0x2945D0u, 0x2945D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945D8u;
label_2945d8:
    // 0x2945d8: 0x26042930  addiu       $a0, $s0, 0x2930
    ctx->pc = 0x2945d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
label_2945dc:
    // 0x2945dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2945dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2945e0:
    // 0x2945e0: 0xc09d6b8  jal         func_275AE0
label_2945e4:
    if (ctx->pc == 0x2945E4u) {
        ctx->pc = 0x2945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945E0u;
        // 0x2945e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945E8u;
        goto label_2945e8;
    }
    ctx->pc = 0x2945E0u;
    SET_GPR_U32(ctx, 31, 0x2945E8u);
    ctx->pc = 0x2945E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945E0u;
    // 0x2945e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275AE0u, 0x2945E0u, 0x2945E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945E8u;
label_2945e8:
    // 0x2945e8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2945e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2945ec:
    // 0x2945ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2945ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2945f0:
    // 0x2945f0: 0x320f809  jalr        $t9
label_2945f4:
    if (ctx->pc == 0x2945F4u) {
        ctx->pc = 0x2945F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945F0u;
        // 0x2945f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945F8u;
        goto label_2945f8;
    }
    ctx->pc = 0x2945F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2945F8u);
        ctx->pc = 0x2945F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945F0u;
        // 0x2945f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945F0u, 0x2945F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2945F8u;
label_2945f8:
    // 0x2945f8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2945f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2945fc:
    // 0x2945fc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2945fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_294600:
    // 0x294600: 0x320f809  jalr        $t9
label_294604:
    if (ctx->pc == 0x294604u) {
        ctx->pc = 0x294604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294600u;
        // 0x294604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294608u;
        goto label_294608;
    }
    ctx->pc = 0x294600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294608u);
        ctx->pc = 0x294604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294600u;
        // 0x294604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294600u, 0x294608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294608u;
label_294608:
    // 0x294608: 0xa20008e6  sb          $zero, 0x8E6($s0)
    ctx->pc = 0x294608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2278), (uint8_t)GPR_U32(ctx, 0));
label_29460c:
    // 0x29460c: 0xa2000820  sb          $zero, 0x820($s0)
    ctx->pc = 0x29460cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2080), (uint8_t)GPR_U32(ctx, 0));
label_294610:
    // 0x294610: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_294614:
    // 0x294614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_294618:
    // 0x294618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29461c:
    // 0x29461c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29461cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_294620:
    // 0x294620: 0x3e00008  jr          $ra
label_294624:
    if (ctx->pc == 0x294624u) {
        ctx->pc = 0x294624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294620u;
        // 0x294624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294628u;
        goto label_fallthrough_0x294620;
    }
    ctx->pc = 0x294620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294620u;
        // 0x294624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294620:
    ctx->pc = 0x294628u;
}
