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

// Function: sub_00176150
// Address: 0x176150 - 0x176738
void sub_00176150_0x176150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176150_0x176150");
#endif

    switch (ctx->pc) {
        case 0x176150u: goto label_176150;
        case 0x176154u: goto label_176154;
        case 0x176158u: goto label_176158;
        case 0x17615cu: goto label_17615c;
        case 0x176160u: goto label_176160;
        case 0x176164u: goto label_176164;
        case 0x176168u: goto label_176168;
        case 0x17616cu: goto label_17616c;
        case 0x176170u: goto label_176170;
        case 0x176174u: goto label_176174;
        case 0x176178u: goto label_176178;
        case 0x17617cu: goto label_17617c;
        case 0x176180u: goto label_176180;
        case 0x176184u: goto label_176184;
        case 0x176188u: goto label_176188;
        case 0x17618cu: goto label_17618c;
        case 0x176190u: goto label_176190;
        case 0x176194u: goto label_176194;
        case 0x176198u: goto label_176198;
        case 0x17619cu: goto label_17619c;
        case 0x1761a0u: goto label_1761a0;
        case 0x1761a4u: goto label_1761a4;
        case 0x1761a8u: goto label_1761a8;
        case 0x1761acu: goto label_1761ac;
        case 0x1761b0u: goto label_1761b0;
        case 0x1761b4u: goto label_1761b4;
        case 0x1761b8u: goto label_1761b8;
        case 0x1761bcu: goto label_1761bc;
        case 0x1761c0u: goto label_1761c0;
        case 0x1761c4u: goto label_1761c4;
        case 0x1761c8u: goto label_1761c8;
        case 0x1761ccu: goto label_1761cc;
        case 0x1761d0u: goto label_1761d0;
        case 0x1761d4u: goto label_1761d4;
        case 0x1761d8u: goto label_1761d8;
        case 0x1761dcu: goto label_1761dc;
        case 0x1761e0u: goto label_1761e0;
        case 0x1761e4u: goto label_1761e4;
        case 0x1761e8u: goto label_1761e8;
        case 0x1761ecu: goto label_1761ec;
        case 0x1761f0u: goto label_1761f0;
        case 0x1761f4u: goto label_1761f4;
        case 0x1761f8u: goto label_1761f8;
        case 0x1761fcu: goto label_1761fc;
        case 0x176200u: goto label_176200;
        case 0x176204u: goto label_176204;
        case 0x176208u: goto label_176208;
        case 0x17620cu: goto label_17620c;
        case 0x176210u: goto label_176210;
        case 0x176214u: goto label_176214;
        case 0x176218u: goto label_176218;
        case 0x17621cu: goto label_17621c;
        case 0x176220u: goto label_176220;
        case 0x176224u: goto label_176224;
        case 0x176228u: goto label_176228;
        case 0x17622cu: goto label_17622c;
        case 0x176230u: goto label_176230;
        case 0x176234u: goto label_176234;
        case 0x176238u: goto label_176238;
        case 0x17623cu: goto label_17623c;
        case 0x176240u: goto label_176240;
        case 0x176244u: goto label_176244;
        case 0x176248u: goto label_176248;
        case 0x17624cu: goto label_17624c;
        case 0x176250u: goto label_176250;
        case 0x176254u: goto label_176254;
        case 0x176258u: goto label_176258;
        case 0x17625cu: goto label_17625c;
        case 0x176260u: goto label_176260;
        case 0x176264u: goto label_176264;
        case 0x176268u: goto label_176268;
        case 0x17626cu: goto label_17626c;
        case 0x176270u: goto label_176270;
        case 0x176274u: goto label_176274;
        case 0x176278u: goto label_176278;
        case 0x17627cu: goto label_17627c;
        case 0x176280u: goto label_176280;
        case 0x176284u: goto label_176284;
        case 0x176288u: goto label_176288;
        case 0x17628cu: goto label_17628c;
        case 0x176290u: goto label_176290;
        case 0x176294u: goto label_176294;
        case 0x176298u: goto label_176298;
        case 0x17629cu: goto label_17629c;
        case 0x1762a0u: goto label_1762a0;
        case 0x1762a4u: goto label_1762a4;
        case 0x1762a8u: goto label_1762a8;
        case 0x1762acu: goto label_1762ac;
        case 0x1762b0u: goto label_1762b0;
        case 0x1762b4u: goto label_1762b4;
        case 0x1762b8u: goto label_1762b8;
        case 0x1762bcu: goto label_1762bc;
        case 0x1762c0u: goto label_1762c0;
        case 0x1762c4u: goto label_1762c4;
        case 0x1762c8u: goto label_1762c8;
        case 0x1762ccu: goto label_1762cc;
        case 0x1762d0u: goto label_1762d0;
        case 0x1762d4u: goto label_1762d4;
        case 0x1762d8u: goto label_1762d8;
        case 0x1762dcu: goto label_1762dc;
        case 0x1762e0u: goto label_1762e0;
        case 0x1762e4u: goto label_1762e4;
        case 0x1762e8u: goto label_1762e8;
        case 0x1762ecu: goto label_1762ec;
        case 0x1762f0u: goto label_1762f0;
        case 0x1762f4u: goto label_1762f4;
        case 0x1762f8u: goto label_1762f8;
        case 0x1762fcu: goto label_1762fc;
        case 0x176300u: goto label_176300;
        case 0x176304u: goto label_176304;
        case 0x176308u: goto label_176308;
        case 0x17630cu: goto label_17630c;
        case 0x176310u: goto label_176310;
        case 0x176314u: goto label_176314;
        case 0x176318u: goto label_176318;
        case 0x17631cu: goto label_17631c;
        case 0x176320u: goto label_176320;
        case 0x176324u: goto label_176324;
        case 0x176328u: goto label_176328;
        case 0x17632cu: goto label_17632c;
        case 0x176330u: goto label_176330;
        case 0x176334u: goto label_176334;
        case 0x176338u: goto label_176338;
        case 0x17633cu: goto label_17633c;
        case 0x176340u: goto label_176340;
        case 0x176344u: goto label_176344;
        case 0x176348u: goto label_176348;
        case 0x17634cu: goto label_17634c;
        case 0x176350u: goto label_176350;
        case 0x176354u: goto label_176354;
        case 0x176358u: goto label_176358;
        case 0x17635cu: goto label_17635c;
        case 0x176360u: goto label_176360;
        case 0x176364u: goto label_176364;
        case 0x176368u: goto label_176368;
        case 0x17636cu: goto label_17636c;
        case 0x176370u: goto label_176370;
        case 0x176374u: goto label_176374;
        case 0x176378u: goto label_176378;
        case 0x17637cu: goto label_17637c;
        case 0x176380u: goto label_176380;
        case 0x176384u: goto label_176384;
        case 0x176388u: goto label_176388;
        case 0x17638cu: goto label_17638c;
        case 0x176390u: goto label_176390;
        case 0x176394u: goto label_176394;
        case 0x176398u: goto label_176398;
        case 0x17639cu: goto label_17639c;
        case 0x1763a0u: goto label_1763a0;
        case 0x1763a4u: goto label_1763a4;
        case 0x1763a8u: goto label_1763a8;
        case 0x1763acu: goto label_1763ac;
        case 0x1763b0u: goto label_1763b0;
        case 0x1763b4u: goto label_1763b4;
        case 0x1763b8u: goto label_1763b8;
        case 0x1763bcu: goto label_1763bc;
        case 0x1763c0u: goto label_1763c0;
        case 0x1763c4u: goto label_1763c4;
        case 0x1763c8u: goto label_1763c8;
        case 0x1763ccu: goto label_1763cc;
        case 0x1763d0u: goto label_1763d0;
        case 0x1763d4u: goto label_1763d4;
        case 0x1763d8u: goto label_1763d8;
        case 0x1763dcu: goto label_1763dc;
        case 0x1763e0u: goto label_1763e0;
        case 0x1763e4u: goto label_1763e4;
        case 0x1763e8u: goto label_1763e8;
        case 0x1763ecu: goto label_1763ec;
        case 0x1763f0u: goto label_1763f0;
        case 0x1763f4u: goto label_1763f4;
        case 0x1763f8u: goto label_1763f8;
        case 0x1763fcu: goto label_1763fc;
        case 0x176400u: goto label_176400;
        case 0x176404u: goto label_176404;
        case 0x176408u: goto label_176408;
        case 0x17640cu: goto label_17640c;
        case 0x176410u: goto label_176410;
        case 0x176414u: goto label_176414;
        case 0x176418u: goto label_176418;
        case 0x17641cu: goto label_17641c;
        case 0x176420u: goto label_176420;
        case 0x176424u: goto label_176424;
        case 0x176428u: goto label_176428;
        case 0x17642cu: goto label_17642c;
        case 0x176430u: goto label_176430;
        case 0x176434u: goto label_176434;
        case 0x176438u: goto label_176438;
        case 0x17643cu: goto label_17643c;
        case 0x176440u: goto label_176440;
        case 0x176444u: goto label_176444;
        case 0x176448u: goto label_176448;
        case 0x17644cu: goto label_17644c;
        case 0x176450u: goto label_176450;
        case 0x176454u: goto label_176454;
        case 0x176458u: goto label_176458;
        case 0x17645cu: goto label_17645c;
        case 0x176460u: goto label_176460;
        case 0x176464u: goto label_176464;
        case 0x176468u: goto label_176468;
        case 0x17646cu: goto label_17646c;
        case 0x176470u: goto label_176470;
        case 0x176474u: goto label_176474;
        case 0x176478u: goto label_176478;
        case 0x17647cu: goto label_17647c;
        case 0x176480u: goto label_176480;
        case 0x176484u: goto label_176484;
        case 0x176488u: goto label_176488;
        case 0x17648cu: goto label_17648c;
        case 0x176490u: goto label_176490;
        case 0x176494u: goto label_176494;
        case 0x176498u: goto label_176498;
        case 0x17649cu: goto label_17649c;
        case 0x1764a0u: goto label_1764a0;
        case 0x1764a4u: goto label_1764a4;
        case 0x1764a8u: goto label_1764a8;
        case 0x1764acu: goto label_1764ac;
        case 0x1764b0u: goto label_1764b0;
        case 0x1764b4u: goto label_1764b4;
        case 0x1764b8u: goto label_1764b8;
        case 0x1764bcu: goto label_1764bc;
        case 0x1764c0u: goto label_1764c0;
        case 0x1764c4u: goto label_1764c4;
        case 0x1764c8u: goto label_1764c8;
        case 0x1764ccu: goto label_1764cc;
        case 0x1764d0u: goto label_1764d0;
        case 0x1764d4u: goto label_1764d4;
        case 0x1764d8u: goto label_1764d8;
        case 0x1764dcu: goto label_1764dc;
        case 0x1764e0u: goto label_1764e0;
        case 0x1764e4u: goto label_1764e4;
        case 0x1764e8u: goto label_1764e8;
        case 0x1764ecu: goto label_1764ec;
        case 0x1764f0u: goto label_1764f0;
        case 0x1764f4u: goto label_1764f4;
        case 0x1764f8u: goto label_1764f8;
        case 0x1764fcu: goto label_1764fc;
        case 0x176500u: goto label_176500;
        case 0x176504u: goto label_176504;
        case 0x176508u: goto label_176508;
        case 0x17650cu: goto label_17650c;
        case 0x176510u: goto label_176510;
        case 0x176514u: goto label_176514;
        case 0x176518u: goto label_176518;
        case 0x17651cu: goto label_17651c;
        case 0x176520u: goto label_176520;
        case 0x176524u: goto label_176524;
        case 0x176528u: goto label_176528;
        case 0x17652cu: goto label_17652c;
        case 0x176530u: goto label_176530;
        case 0x176534u: goto label_176534;
        case 0x176538u: goto label_176538;
        case 0x17653cu: goto label_17653c;
        case 0x176540u: goto label_176540;
        case 0x176544u: goto label_176544;
        case 0x176548u: goto label_176548;
        case 0x17654cu: goto label_17654c;
        case 0x176550u: goto label_176550;
        case 0x176554u: goto label_176554;
        case 0x176558u: goto label_176558;
        case 0x17655cu: goto label_17655c;
        case 0x176560u: goto label_176560;
        case 0x176564u: goto label_176564;
        case 0x176568u: goto label_176568;
        case 0x17656cu: goto label_17656c;
        case 0x176570u: goto label_176570;
        case 0x176574u: goto label_176574;
        case 0x176578u: goto label_176578;
        case 0x17657cu: goto label_17657c;
        case 0x176580u: goto label_176580;
        case 0x176584u: goto label_176584;
        case 0x176588u: goto label_176588;
        case 0x17658cu: goto label_17658c;
        case 0x176590u: goto label_176590;
        case 0x176594u: goto label_176594;
        case 0x176598u: goto label_176598;
        case 0x17659cu: goto label_17659c;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765a8u: goto label_1765a8;
        case 0x1765acu: goto label_1765ac;
        case 0x1765b0u: goto label_1765b0;
        case 0x1765b4u: goto label_1765b4;
        case 0x1765b8u: goto label_1765b8;
        case 0x1765bcu: goto label_1765bc;
        case 0x1765c0u: goto label_1765c0;
        case 0x1765c4u: goto label_1765c4;
        case 0x1765c8u: goto label_1765c8;
        case 0x1765ccu: goto label_1765cc;
        case 0x1765d0u: goto label_1765d0;
        case 0x1765d4u: goto label_1765d4;
        case 0x1765d8u: goto label_1765d8;
        case 0x1765dcu: goto label_1765dc;
        case 0x1765e0u: goto label_1765e0;
        case 0x1765e4u: goto label_1765e4;
        case 0x1765e8u: goto label_1765e8;
        case 0x1765ecu: goto label_1765ec;
        case 0x1765f0u: goto label_1765f0;
        case 0x1765f4u: goto label_1765f4;
        case 0x1765f8u: goto label_1765f8;
        case 0x1765fcu: goto label_1765fc;
        case 0x176600u: goto label_176600;
        case 0x176604u: goto label_176604;
        case 0x176608u: goto label_176608;
        case 0x17660cu: goto label_17660c;
        case 0x176610u: goto label_176610;
        case 0x176614u: goto label_176614;
        case 0x176618u: goto label_176618;
        case 0x17661cu: goto label_17661c;
        case 0x176620u: goto label_176620;
        case 0x176624u: goto label_176624;
        case 0x176628u: goto label_176628;
        case 0x17662cu: goto label_17662c;
        case 0x176630u: goto label_176630;
        case 0x176634u: goto label_176634;
        case 0x176638u: goto label_176638;
        case 0x17663cu: goto label_17663c;
        case 0x176640u: goto label_176640;
        case 0x176644u: goto label_176644;
        case 0x176648u: goto label_176648;
        case 0x17664cu: goto label_17664c;
        case 0x176650u: goto label_176650;
        case 0x176654u: goto label_176654;
        case 0x176658u: goto label_176658;
        case 0x17665cu: goto label_17665c;
        case 0x176660u: goto label_176660;
        case 0x176664u: goto label_176664;
        case 0x176668u: goto label_176668;
        case 0x17666cu: goto label_17666c;
        case 0x176670u: goto label_176670;
        case 0x176674u: goto label_176674;
        case 0x176678u: goto label_176678;
        case 0x17667cu: goto label_17667c;
        case 0x176680u: goto label_176680;
        case 0x176684u: goto label_176684;
        case 0x176688u: goto label_176688;
        case 0x17668cu: goto label_17668c;
        case 0x176690u: goto label_176690;
        case 0x176694u: goto label_176694;
        case 0x176698u: goto label_176698;
        case 0x17669cu: goto label_17669c;
        case 0x1766a0u: goto label_1766a0;
        case 0x1766a4u: goto label_1766a4;
        case 0x1766a8u: goto label_1766a8;
        case 0x1766acu: goto label_1766ac;
        case 0x1766b0u: goto label_1766b0;
        case 0x1766b4u: goto label_1766b4;
        case 0x1766b8u: goto label_1766b8;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766c0u: goto label_1766c0;
        case 0x1766c4u: goto label_1766c4;
        case 0x1766c8u: goto label_1766c8;
        case 0x1766ccu: goto label_1766cc;
        case 0x1766d0u: goto label_1766d0;
        case 0x1766d4u: goto label_1766d4;
        case 0x1766d8u: goto label_1766d8;
        case 0x1766dcu: goto label_1766dc;
        case 0x1766e0u: goto label_1766e0;
        case 0x1766e4u: goto label_1766e4;
        case 0x1766e8u: goto label_1766e8;
        case 0x1766ecu: goto label_1766ec;
        case 0x1766f0u: goto label_1766f0;
        case 0x1766f4u: goto label_1766f4;
        case 0x1766f8u: goto label_1766f8;
        case 0x1766fcu: goto label_1766fc;
        case 0x176700u: goto label_176700;
        case 0x176704u: goto label_176704;
        case 0x176708u: goto label_176708;
        case 0x17670cu: goto label_17670c;
        case 0x176710u: goto label_176710;
        case 0x176714u: goto label_176714;
        case 0x176718u: goto label_176718;
        case 0x17671cu: goto label_17671c;
        case 0x176720u: goto label_176720;
        case 0x176724u: goto label_176724;
        case 0x176728u: goto label_176728;
        case 0x17672cu: goto label_17672c;
        case 0x176730u: goto label_176730;
        case 0x176734u: goto label_176734;
        default: break;
    }

    ctx->pc = 0x176150u;

label_176150:
    // 0x176150: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x176150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_176154:
    // 0x176154: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x176154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_176158:
    // 0x176158: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x176158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17615c:
    // 0x17615c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_176160:
    // 0x176160: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x176160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_176164:
    // 0x176164: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_176168:
    // 0x176168: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17616c:
    // 0x17616c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_176170:
    // 0x176170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176174:
    // 0x176174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176178:
    // 0x176178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17617c:
    // 0x17617c: 0x83838628  lb          $v1, -0x79D8($gp)
    ctx->pc = 0x17617cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_176180:
    // 0x176180: 0x14600111  bnez        $v1, . + 4 + (0x111 << 2)
label_176184:
    if (ctx->pc == 0x176184u) {
        ctx->pc = 0x176188u;
        goto label_176188;
    }
    ctx->pc = 0x176180u;
    {
        const bool branch_taken_0x176180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176180) {
            ctx->pc = 0x1765C8u;
            goto label_1765c8;
        }
    }
    ctx->pc = 0x176188u;
label_176188:
    // 0x176188: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x176188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_17618c:
    // 0x17618c: 0x3c080082  lui         $t0, 0x82
    ctx->pc = 0x17618cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)130 << 16));
label_176190:
    // 0x176190: 0x2463cf50  addiu       $v1, $v1, -0x30B0
    ctx->pc = 0x176190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954832));
label_176194:
    // 0x176194: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x176194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_176198:
    // 0x176198: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_17619c:
    // 0x17619c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1761a0:
    // 0x1761a0: 0x2508cc80  addiu       $t0, $t0, -0x3380
    ctx->pc = 0x1761a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954112));
label_1761a4:
    // 0x1761a4: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x1761a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_1761a8:
    // 0x1761a8: 0x3c050082  lui         $a1, 0x82
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)130 << 16));
label_1761ac:
    // 0x1761ac: 0x3c140082  lui         $s4, 0x82
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)130 << 16));
label_1761b0:
    // 0x1761b0: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1761b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
label_1761b4:
    // 0x1761b4: 0x3c120082  lui         $s2, 0x82
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)130 << 16));
label_1761b8:
    // 0x1761b8: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
label_1761bc:
    // 0x1761bc: 0x3c100082  lui         $s0, 0x82
    ctx->pc = 0x1761bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)130 << 16));
label_1761c0:
    // 0x1761c0: 0x3c190041  lui         $t9, 0x41
    ctx->pc = 0x1761c0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65 << 16));
label_1761c4:
    // 0x1761c4: 0x3c180082  lui         $t8, 0x82
    ctx->pc = 0x1761c4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)130 << 16));
label_1761c8:
    // 0x1761c8: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x1761c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
label_1761cc:
    // 0x1761cc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1761ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_1761d0:
    // 0x1761d0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1761d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_1761d4:
    // 0x1761d4: 0x24c6cf60  addiu       $a2, $a2, -0x30A0
    ctx->pc = 0x1761d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954848));
label_1761d8:
    // 0x1761d8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1761d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1761dc:
    // 0x1761dc: 0x3c0f0041  lui         $t7, 0x41
    ctx->pc = 0x1761dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65 << 16));
label_1761e0:
    // 0x1761e0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1761e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1761e4:
    // 0x1761e4: 0x3c0e0082  lui         $t6, 0x82
    ctx->pc = 0x1761e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)130 << 16));
label_1761e8:
    // 0x1761e8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1761e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1761ec:
    // 0x1761ec: 0x26b5cd04  addiu       $s5, $s5, -0x32FC
    ctx->pc = 0x1761ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954244));
label_1761f0:
    // 0x1761f0: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x1761f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
label_1761f4:
    // 0x1761f4: 0x3c0c0082  lui         $t4, 0x82
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)130 << 16));
label_1761f8:
    // 0x1761f8: 0x3c0b0041  lui         $t3, 0x41
    ctx->pc = 0x1761f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65 << 16));
label_1761fc:
    // 0x1761fc: 0x3c0a0082  lui         $t2, 0x82
    ctx->pc = 0x1761fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)130 << 16));
label_176200:
    // 0x176200: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
label_176204:
    // 0x176204: 0x3c080082  lui         $t0, 0x82
    ctx->pc = 0x176204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)130 << 16));
label_176208:
    // 0x176208: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x176208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_17620c:
    // 0x17620c: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
label_176210:
    // 0x176210: 0x3c160082  lui         $s6, 0x82
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)130 << 16));
label_176214:
    // 0x176214: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x176214u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
label_176218:
    // 0x176218: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x176218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_17621c:
    // 0x17621c: 0x3c060082  lui         $a2, 0x82
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)130 << 16));
label_176220:
    // 0x176220: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176224:
    // 0x176224: 0x24a5cc8c  addiu       $a1, $a1, -0x3374
    ctx->pc = 0x176224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954124));
label_176228:
    // 0x176228: 0x26b5d010  addiu       $s5, $s5, -0x2FF0
    ctx->pc = 0x176228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955024));
label_17622c:
    // 0x17622c: 0x2463cf70  addiu       $v1, $v1, -0x3090
    ctx->pc = 0x17622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954864));
label_176230:
    // 0x176230: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x176230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_176234:
    // 0x176234: 0x2694cc98  addiu       $s4, $s4, -0x3368
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954136));
label_176238:
    // 0x176238: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176238u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_17623c:
    // 0x17623c: 0x2673cf80  addiu       $s3, $s3, -0x3080
    ctx->pc = 0x17623cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954880));
label_176240:
    // 0x176240: 0x26b5cd10  addiu       $s5, $s5, -0x32F0
    ctx->pc = 0x176240u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954256));
label_176244:
    // 0x176244: 0x2652cca4  addiu       $s2, $s2, -0x335C
    ctx->pc = 0x176244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954148));
label_176248:
    // 0x176248: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x176248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_17624c:
    // 0x17624c: 0x2631cf90  addiu       $s1, $s1, -0x3070
    ctx->pc = 0x17624cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954896));
label_176250:
    // 0x176250: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176250u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176254:
    // 0x176254: 0x2610ccb0  addiu       $s0, $s0, -0x3350
    ctx->pc = 0x176254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954160));
label_176258:
    // 0x176258: 0x26b5d020  addiu       $s5, $s5, -0x2FE0
    ctx->pc = 0x176258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955040));
label_17625c:
    // 0x17625c: 0x2739cfa0  addiu       $t9, $t9, -0x3060
    ctx->pc = 0x17625cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294954912));
label_176260:
    // 0x176260: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x176260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_176264:
    // 0x176264: 0x2718ccbc  addiu       $t8, $t8, -0x3344
    ctx->pc = 0x176264u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294954172));
label_176268:
    // 0x176268: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176268u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_17626c:
    // 0x17626c: 0x25efcfb0  addiu       $t7, $t7, -0x3050
    ctx->pc = 0x17626cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954928));
label_176270:
    // 0x176270: 0x26b5cd1c  addiu       $s5, $s5, -0x32E4
    ctx->pc = 0x176270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954268));
label_176274:
    // 0x176274: 0x25ceccc8  addiu       $t6, $t6, -0x3338
    ctx->pc = 0x176274u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954184));
label_176278:
    // 0x176278: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x176278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_17627c:
    // 0x17627c: 0x25adcfc0  addiu       $t5, $t5, -0x3040
    ctx->pc = 0x17627cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294954944));
label_176280:
    // 0x176280: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176280u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176284:
    // 0x176284: 0x258cccd4  addiu       $t4, $t4, -0x332C
    ctx->pc = 0x176284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294954196));
label_176288:
    // 0x176288: 0x26b5d030  addiu       $s5, $s5, -0x2FD0
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955056));
label_17628c:
    // 0x17628c: 0x256bcfd0  addiu       $t3, $t3, -0x3030
    ctx->pc = 0x17628cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294954960));
label_176290:
    // 0x176290: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x176290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_176294:
    // 0x176294: 0x254acce0  addiu       $t2, $t2, -0x3320
    ctx->pc = 0x176294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954208));
label_176298:
    // 0x176298: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_17629c:
    // 0x17629c: 0x2529cfe0  addiu       $t1, $t1, -0x3020
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954976));
label_1762a0:
    // 0x1762a0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x1762a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1762a4:
    // 0x1762a4: 0x26b5cd28  addiu       $s5, $s5, -0x32D8
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954280));
label_1762a8:
    // 0x1762a8: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1762a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_1762ac:
    // 0x1762ac: 0x2508ccec  addiu       $t0, $t0, -0x3314
    ctx->pc = 0x1762acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954220));
label_1762b0:
    // 0x1762b0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_1762b4:
    // 0x1762b4: 0x24e7cff0  addiu       $a3, $a3, -0x3010
    ctx->pc = 0x1762b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
label_1762b8:
    // 0x1762b8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1762b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1762bc:
    // 0x1762bc: 0x26b5d040  addiu       $s5, $s5, -0x2FC0
    ctx->pc = 0x1762bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955072));
label_1762c0:
    // 0x1762c0: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1762c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_1762c4:
    // 0x1762c4: 0x24c6ccf8  addiu       $a2, $a2, -0x3308
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954232));
label_1762c8:
    // 0x1762c8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1762c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1762cc:
    // 0x1762cc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1762ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_1762d0:
    // 0x1762d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1762d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1762d4:
    // 0x1762d4: 0x26b5d050  addiu       $s5, $s5, -0x2FB0
    ctx->pc = 0x1762d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955088));
label_1762d8:
    // 0x1762d8: 0x3c050082  lui         $a1, 0x82
    ctx->pc = 0x1762d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)130 << 16));
label_1762dc:
    // 0x1762dc: 0x27ded000  addiu       $fp, $fp, -0x3000
    ctx->pc = 0x1762dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955008));
label_1762e0:
    // 0x1762e0: 0x24a5cd34  addiu       $a1, $a1, -0x32CC
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954292));
label_1762e4:
    // 0x1762e4: 0x26d6cd4c  addiu       $s6, $s6, -0x32B4
    ctx->pc = 0x1762e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954316));
label_1762e8:
    // 0x1762e8: 0x26f7d070  addiu       $s7, $s7, -0x2F90
    ctx->pc = 0x1762e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294955120));
label_1762ec:
    // 0x1762ec: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1762ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_1762f0:
    // 0x1762f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1762f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1762f4:
    // 0x1762f4: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x1762f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_1762f8:
    // 0x1762f8: 0x26b5cd40  addiu       $s5, $s5, -0x32C0
    ctx->pc = 0x1762f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954304));
label_1762fc:
    // 0x1762fc: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1762fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_176300:
    // 0x176300: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176304:
    // 0x176304: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176304u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176308:
    // 0x176308: 0x26b5cd58  addiu       $s5, $s5, -0x32A8
    ctx->pc = 0x176308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954328));
label_17630c:
    // 0x17630c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x17630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_176310:
    // 0x176310: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x176310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_176314:
    // 0x176314: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176314u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176318:
    // 0x176318: 0x2463d060  addiu       $v1, $v1, -0x2FA0
    ctx->pc = 0x176318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955104));
label_17631c:
    // 0x17631c: 0x26b5d080  addiu       $s5, $s5, -0x2F80
    ctx->pc = 0x17631cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955136));
label_176320:
    // 0x176320: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x176320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_176324:
    // 0x176324: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176324u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176328:
    // 0x176328: 0x26b5cd64  addiu       $s5, $s5, -0x329C
    ctx->pc = 0x176328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954340));
label_17632c:
    // 0x17632c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x17632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_176330:
    // 0x176330: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176330u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176334:
    // 0x176334: 0x26b5d090  addiu       $s5, $s5, -0x2F70
    ctx->pc = 0x176334u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955152));
label_176338:
    // 0x176338: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x176338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_17633c:
    // 0x17633c: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x17633cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176340:
    // 0x176340: 0x26b5cd70  addiu       $s5, $s5, -0x3290
    ctx->pc = 0x176340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954352));
label_176344:
    // 0x176344: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x176344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_176348:
    // 0x176348: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176348u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_17634c:
    // 0x17634c: 0x26b5d0a0  addiu       $s5, $s5, -0x2F60
    ctx->pc = 0x17634cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955168));
label_176350:
    // 0x176350: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x176350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_176354:
    // 0x176354: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176354u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176358:
    // 0x176358: 0x26b5cd7c  addiu       $s5, $s5, -0x3284
    ctx->pc = 0x176358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954364));
label_17635c:
    // 0x17635c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x17635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_176360:
    // 0x176360: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x176360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_176364:
    // 0x176364: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x176364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_176368:
    // 0x176368: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x176368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_17636c:
    // 0x17636c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x17636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176370:
    // 0x176370: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x176370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176374:
    // 0x176374: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x176374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176378:
    // 0x176378: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x176378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_17637c:
    // 0x17637c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x17637cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_176380:
    // 0x176380: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x176380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_176384:
    // 0x176384: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x176384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176388:
    // 0x176388: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x176388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17638c:
    // 0x17638c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x17638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176390:
    // 0x176390: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x176390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_176394:
    // 0x176394: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x176394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_176398:
    // 0x176398: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x176398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_17639c:
    // 0x17639c: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x17639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1763a0:
    // 0x1763a0: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x1763a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763a4:
    // 0x1763a4: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x1763a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1763a8:
    // 0x1763a8: 0xe7020000  swc1        $f2, 0x0($t8)
    ctx->pc = 0x1763a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_1763ac:
    // 0x1763ac: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x1763acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
label_1763b0:
    // 0x1763b0: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x1763b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
label_1763b4:
    // 0x1763b4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1763b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1763b8:
    // 0x1763b8: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x1763b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763bc:
    // 0x1763bc: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x1763bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1763c0:
    // 0x1763c0: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x1763c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_1763c4:
    // 0x1763c4: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x1763c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_1763c8:
    // 0x1763c8: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x1763c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_1763cc:
    // 0x1763cc: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x1763ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1763d0:
    // 0x1763d0: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x1763d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763d4:
    // 0x1763d4: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x1763d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1763d8:
    // 0x1763d8: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x1763d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_1763dc:
    // 0x1763dc: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x1763dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_1763e0:
    // 0x1763e0: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x1763e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_1763e4:
    // 0x1763e4: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x1763e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1763e8:
    // 0x1763e8: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x1763e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763ec:
    // 0x1763ec: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x1763ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1763f0:
    // 0x1763f0: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x1763f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_1763f4:
    // 0x1763f4: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x1763f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_1763f8:
    // 0x1763f8: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1763f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_1763fc:
    // 0x1763fc: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1763fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176400:
    // 0x176400: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x176400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176404:
    // 0x176404: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x176404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176408:
    // 0x176408: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x176408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_17640c:
    // 0x17640c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x17640cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_176410:
    // 0x176410: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x176410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_176414:
    // 0x176414: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x176414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176418:
    // 0x176418: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x176418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17641c:
    // 0x17641c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x17641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176420:
    // 0x176420: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176424:
    // 0x176424: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176428:
    // 0x176428: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_17642c:
    // 0x17642c: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x17642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176430:
    // 0x176430: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x176430u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_176434:
    // 0x176434: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x176434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176438:
    // 0x176438: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x176438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17643c:
    // 0x17643c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x17643cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176440:
    // 0x176440: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x176440u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_176444:
    // 0x176444: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176448:
    // 0x176448: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x176448u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17644c:
    // 0x17644c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x17644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176450:
    // 0x176450: 0x7ba601a0  lq          $a2, 0x1A0($sp)
    ctx->pc = 0x176450u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_176454:
    // 0x176454: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x176454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176458:
    // 0x176458: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x176458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17645c:
    // 0x17645c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x17645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176460:
    // 0x176460: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x176460u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_176464:
    // 0x176464: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176468:
    // 0x176468: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x176468u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_17646c:
    // 0x17646c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x17646cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176470:
    // 0x176470: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x176470u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_176474:
    // 0x176474: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176478:
    // 0x176478: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x176478u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_17647c:
    // 0x17647c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x17647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176480:
    // 0x176480: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x176480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176484:
    // 0x176484: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x176484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176488:
    // 0x176488: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x176488u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_17648c:
    // 0x17648c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x17648cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176490:
    // 0x176490: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x176490u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_176494:
    // 0x176494: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176498:
    // 0x176498: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x176498u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_17649c:
    // 0x17649c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x17649cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1764a0:
    // 0x1764a0: 0x7ba60160  lq          $a2, 0x160($sp)
    ctx->pc = 0x1764a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1764a4:
    // 0x1764a4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1764a8:
    // 0x1764a8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1764a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1764ac:
    // 0x1764ac: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1764acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1764b0:
    // 0x1764b0: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x1764b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1764b4:
    // 0x1764b4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1764b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1764b8:
    // 0x1764b8: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x1764b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1764bc:
    // 0x1764bc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1764bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1764c0:
    // 0x1764c0: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x1764c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1764c4:
    // 0x1764c4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1764c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1764c8:
    // 0x1764c8: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x1764c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1764cc:
    // 0x1764cc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1764ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1764d0:
    // 0x1764d0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1764d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1764d4:
    // 0x1764d4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1764d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1764d8:
    // 0x1764d8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x1764d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1764dc:
    // 0x1764dc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1764dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1764e0:
    // 0x1764e0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1764e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1764e4:
    // 0x1764e4: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x1764e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1764e8:
    // 0x1764e8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1764e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1764ec:
    // 0x1764ec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1764ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1764f0:
    // 0x1764f0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1764f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1764f4:
    // 0x1764f4: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x1764f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1764f8:
    // 0x1764f8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x1764f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1764fc:
    // 0x1764fc: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x1764fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_176500:
    // 0x176500: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x176500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_176504:
    // 0x176504: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x176504u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_176508:
    // 0x176508: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x176508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_17650c:
    // 0x17650c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176510:
    // 0x176510: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176514:
    // 0x176514: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176518:
    // 0x176518: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x176518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_17651c:
    // 0x17651c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x17651cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_176520:
    // 0x176520: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x176520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_176524:
    // 0x176524: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x176524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176528:
    // 0x176528: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x176528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_17652c:
    // 0x17652c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x17652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176530:
    // 0x176530: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x176530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176534:
    // 0x176534: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x176534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176538:
    // 0x176538: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x176538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_17653c:
    // 0x17653c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17653cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176540:
    // 0x176540: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x176540u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_176544:
    // 0x176544: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x176544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176548:
    // 0x176548: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x176548u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_17654c:
    // 0x17654c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176550:
    // 0x176550: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176554:
    // 0x176554: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176558:
    // 0x176558: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x176558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_17655c:
    // 0x17655c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x17655cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176560:
    // 0x176560: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x176560u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_176564:
    // 0x176564: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x176564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176568:
    // 0x176568: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x176568u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_17656c:
    // 0x17656c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176570:
    // 0x176570: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x176570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_176574:
    // 0x176574: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x176574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176578:
    // 0x176578: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17657c:
    // 0x17657c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176580:
    // 0x176580: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x176580u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_176584:
    // 0x176584: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x176584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176588:
    // 0x176588: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x176588u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_17658c:
    // 0x17658c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17658cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176590:
    // 0x176590: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x176590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_176594:
    // 0x176594: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x176594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176598:
    // 0x176598: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x176598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17659c:
    // 0x17659c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1765a0:
    // 0x1765a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1765a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1765a4:
    // 0x1765a4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1765a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1765a8:
    // 0x1765a8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1765a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1765ac:
    // 0x1765ac: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1765acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1765b0:
    // 0x1765b0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1765b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1765b4:
    // 0x1765b4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1765b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1765b8:
    // 0x1765b8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1765b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1765bc:
    // 0x1765bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1765bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1765c0:
    // 0x1765c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1765c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1765c4:
    // 0x1765c4: 0xa3838628  sb          $v1, -0x79D8($gp)
    ctx->pc = 0x1765c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936104), (uint8_t)GPR_U32(ctx, 3));
label_1765c8:
    // 0x1765c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1765c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1765cc:
    // 0x1765cc: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1765ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_1765d0:
    // 0x1765d0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1765d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_1765d4:
    // 0x1765d4: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_1765d8:
    if (ctx->pc == 0x1765D8u) {
        ctx->pc = 0x1765DCu;
        goto label_1765dc;
    }
    ctx->pc = 0x1765D4u;
    {
        const bool branch_taken_0x1765d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1765d4) {
            ctx->pc = 0x176708u;
            goto label_176708;
        }
    }
    ctx->pc = 0x1765DCu;
label_1765dc:
    // 0x1765dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1765e0:
    // 0x1765e0: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x1765e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
label_1765e4:
    // 0x1765e4: 0x25086aa0  addiu       $t0, $t0, 0x6AA0
    ctx->pc = 0x1765e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27296));
label_1765e8:
    // 0x1765e8: 0x34690300  ori         $t1, $v1, 0x300
    ctx->pc = 0x1765e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
label_1765ec:
    // 0x1765ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1765ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1765f0:
    // 0x1765f0: 0x8c910260  lw          $s1, 0x260($a0)
    ctx->pc = 0x1765f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
label_1765f4:
    // 0x1765f4: 0x8c23fc94  lw          $v1, -0x36C($at)
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966420)));
label_1765f8:
    // 0x1765f8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1765f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_1765fc:
    // 0x1765fc: 0x790a0000  lq          $t2, 0x0($t0)
    ctx->pc = 0x1765fcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_176600:
    // 0x176600: 0x24c66b60  addiu       $a2, $a2, 0x6B60
    ctx->pc = 0x176600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27488));
label_176604:
    // 0x176604: 0x24708000  addiu       $s0, $v1, -0x8000
    ctx->pc = 0x176604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
label_176608:
    // 0x176608: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x176608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17660c:
    // 0x17660c: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x17660cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
label_176610:
    // 0x176610: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x176610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_176614:
    // 0x176614: 0x790a0010  lq          $t2, 0x10($t0)
    ctx->pc = 0x176614u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_176618:
    // 0x176618: 0x34670340  ori         $a3, $v1, 0x340
    ctx->pc = 0x176618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)832);
label_17661c:
    // 0x17661c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176620:
    // 0x176620: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_176624:
    // 0x176624: 0x34650380  ori         $a1, $v1, 0x380
    ctx->pc = 0x176624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)896);
label_176628:
    // 0x176628: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_17662c:
    // 0x17662c: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x17662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
label_176630:
    // 0x176630: 0x7d2a0010  sq          $t2, 0x10($t1)
    ctx->pc = 0x176630u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 10));
label_176634:
    // 0x176634: 0x790a0020  lq          $t2, 0x20($t0)
    ctx->pc = 0x176634u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_176638:
    // 0x176638: 0x7d2a0020  sq          $t2, 0x20($t1)
    ctx->pc = 0x176638u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 10));
label_17663c:
    // 0x17663c: 0x790a0030  lq          $t2, 0x30($t0)
    ctx->pc = 0x17663cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_176640:
    // 0x176640: 0x7d2a0030  sq          $t2, 0x30($t1)
    ctx->pc = 0x176640u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 10));
label_176644:
    // 0x176644: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x176644u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_176648:
    // 0x176648: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x176648u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_17664c:
    // 0x17664c: 0x78c80010  lq          $t0, 0x10($a2)
    ctx->pc = 0x17664cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_176650:
    // 0x176650: 0x7ce80010  sq          $t0, 0x10($a3)
    ctx->pc = 0x176650u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 8));
label_176654:
    // 0x176654: 0x78c80020  lq          $t0, 0x20($a2)
    ctx->pc = 0x176654u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_176658:
    // 0x176658: 0x7ce80020  sq          $t0, 0x20($a3)
    ctx->pc = 0x176658u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 8));
label_17665c:
    // 0x17665c: 0x78c80030  lq          $t0, 0x30($a2)
    ctx->pc = 0x17665cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_176660:
    // 0x176660: 0x7ce80030  sq          $t0, 0x30($a3)
    ctx->pc = 0x176660u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 8));
label_176664:
    // 0x176664: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x176664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176668:
    // 0x176668: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x176668u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_17666c:
    // 0x17666c: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x17666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176670:
    // 0x176670: 0xc480020c  lwc1        $f0, 0x20C($a0)
    ctx->pc = 0x176670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176674:
    // 0x176674: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_176678:
    // 0x176678: 0x10000021  b           . + 4 + (0x21 << 2)
label_17667c:
    if (ctx->pc == 0x17667Cu) {
        ctx->pc = 0x17667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176678u;
        // 0x17667c: 0xe4200390  swc1        $f0, 0x390($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 912), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176680u;
        goto label_176680;
    }
    ctx->pc = 0x176678u;
    {
        const bool branch_taken_0x176678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176678u;
        // 0x17667c: 0xe4200390  swc1        $f0, 0x390($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176678) {
            ctx->pc = 0x176700u;
            goto label_176700;
        }
    }
    ctx->pc = 0x176680u;
label_176680:
    // 0x176680: 0x9224004f  lbu         $a0, 0x4F($s1)
    ctx->pc = 0x176680u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 79)));
label_176684:
    // 0x176684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_176688:
    // 0x176688: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
label_17668c:
    if (ctx->pc == 0x17668Cu) {
        ctx->pc = 0x176690u;
        goto label_176690;
    }
    ctx->pc = 0x176688u;
    {
        const bool branch_taken_0x176688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176688) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x176690u;
label_176690:
    // 0x176690: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_176694:
    // 0x176694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_176698:
    if (ctx->pc == 0x176698u) {
        ctx->pc = 0x17669Cu;
        goto label_17669c;
    }
    ctx->pc = 0x176694u;
    {
        const bool branch_taken_0x176694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176694) {
            ctx->pc = 0x1766B0u;
            goto label_1766b0;
        }
    }
    ctx->pc = 0x17669Cu;
label_17669c:
    // 0x17669c: 0x40f809  jalr        $v0
label_1766a0:
    if (ctx->pc == 0x1766A0u) {
        ctx->pc = 0x1766A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17669Cu;
        // 0x1766a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766A4u;
        goto label_1766a4;
    }
    ctx->pc = 0x17669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1766A4u);
        ctx->pc = 0x1766A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17669Cu;
        // 0x1766a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17669Cu, 0x1766A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1766A4u;
label_1766a4:
    // 0x1766a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1766a8:
    if (ctx->pc == 0x1766A8u) {
        ctx->pc = 0x1766ACu;
        goto label_1766ac;
    }
    ctx->pc = 0x1766A4u;
    {
        const bool branch_taken_0x1766a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1766a4) {
            ctx->pc = 0x1766D8u;
            goto label_1766d8;
        }
    }
    ctx->pc = 0x1766ACu;
label_1766ac:
    // 0x1766ac: 0x0  nop
    ctx->pc = 0x1766acu;
    // NOP
label_1766b0:
    // 0x1766b0: 0x9225004e  lbu         $a1, 0x4E($s1)
    ctx->pc = 0x1766b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 78)));
label_1766b4:
    // 0x1766b4: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x1766b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_1766b8:
    // 0x1766b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1766b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1766bc:
    // 0x1766bc: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1766bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
label_1766c0:
    // 0x1766c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1766c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1766c4:
    // 0x1766c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1766c8:
    // 0x1766c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1766cc:
    // 0x1766cc: 0xc040250  jal         func_100940
label_1766d0:
    if (ctx->pc == 0x1766D0u) {
        ctx->pc = 0x1766D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766CCu;
        // 0x1766d0: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766D4u;
        goto label_1766d4;
    }
    ctx->pc = 0x1766CCu;
    SET_GPR_U32(ctx, 31, 0x1766D4u);
    ctx->pc = 0x1766D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766CCu;
    // 0x1766d0: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x1766CCu, 0x1766D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766D4u;
label_1766d4:
    // 0x1766d4: 0x0  nop
    ctx->pc = 0x1766d4u;
    // NOP
label_1766d8:
    // 0x1766d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1766dc:
    // 0x1766dc: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
label_1766e0:
    // 0x1766e0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1766e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1766e4:
    // 0x1766e4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1766e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1766e8:
    // 0x1766e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1766ec:
    // 0x1766ec: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1766ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1766f0:
    // 0x1766f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1766f4:
    if (ctx->pc == 0x1766F4u) {
        ctx->pc = 0x1766F8u;
        goto label_1766f8;
    }
    ctx->pc = 0x1766F0u;
    {
        const bool branch_taken_0x1766f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1766f0) {
            ctx->pc = 0x176708u;
            goto label_176708;
        }
    }
    ctx->pc = 0x1766F8u;
label_1766f8:
    // 0x1766f8: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1766f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1766fc:
    // 0x1766fc: 0x0  nop
    ctx->pc = 0x1766fcu;
    // NOP
label_176700:
    // 0x176700: 0x1620ffdf  bnez        $s1, . + 4 + (-0x21 << 2)
label_176704:
    if (ctx->pc == 0x176704u) {
        ctx->pc = 0x176708u;
        goto label_176708;
    }
    ctx->pc = 0x176700u;
    {
        const bool branch_taken_0x176700 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x176700) {
            ctx->pc = 0x176680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176680;
        }
    }
    ctx->pc = 0x176708u;
label_176708:
    // 0x176708: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x176708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17670c:
    // 0x17670c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17670cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_176710:
    // 0x176710: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176710u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_176714:
    // 0x176714: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x176714u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_176718:
    // 0x176718: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17671c:
    // 0x17671c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17671cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_176720:
    // 0x176720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176724:
    // 0x176724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_176728:
    // 0x176728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17672c:
    // 0x17672c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17672cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176730:
    // 0x176730: 0x3e00008  jr          $ra
label_176734:
    if (ctx->pc == 0x176734u) {
        ctx->pc = 0x176734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176730u;
        // 0x176734: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176738u;
        goto label_fallthrough_0x176730;
    }
    ctx->pc = 0x176730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176730u;
        // 0x176734: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176730:
    ctx->pc = 0x176738u;
}
