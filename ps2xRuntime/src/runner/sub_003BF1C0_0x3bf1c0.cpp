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

// Function: sub_003BF1C0
// Address: 0x3bf1c0 - 0x3bf6ec
void sub_003BF1C0_0x3bf1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF1C0_0x3bf1c0");
#endif

    switch (ctx->pc) {
        case 0x3bf1c0u: goto label_3bf1c0;
        case 0x3bf1c4u: goto label_3bf1c4;
        case 0x3bf1c8u: goto label_3bf1c8;
        case 0x3bf1ccu: goto label_3bf1cc;
        case 0x3bf1d0u: goto label_3bf1d0;
        case 0x3bf1d4u: goto label_3bf1d4;
        case 0x3bf1d8u: goto label_3bf1d8;
        case 0x3bf1dcu: goto label_3bf1dc;
        case 0x3bf1e0u: goto label_3bf1e0;
        case 0x3bf1e4u: goto label_3bf1e4;
        case 0x3bf1e8u: goto label_3bf1e8;
        case 0x3bf1ecu: goto label_3bf1ec;
        case 0x3bf1f0u: goto label_3bf1f0;
        case 0x3bf1f4u: goto label_3bf1f4;
        case 0x3bf1f8u: goto label_3bf1f8;
        case 0x3bf1fcu: goto label_3bf1fc;
        case 0x3bf200u: goto label_3bf200;
        case 0x3bf204u: goto label_3bf204;
        case 0x3bf208u: goto label_3bf208;
        case 0x3bf20cu: goto label_3bf20c;
        case 0x3bf210u: goto label_3bf210;
        case 0x3bf214u: goto label_3bf214;
        case 0x3bf218u: goto label_3bf218;
        case 0x3bf21cu: goto label_3bf21c;
        case 0x3bf220u: goto label_3bf220;
        case 0x3bf224u: goto label_3bf224;
        case 0x3bf228u: goto label_3bf228;
        case 0x3bf22cu: goto label_3bf22c;
        case 0x3bf230u: goto label_3bf230;
        case 0x3bf234u: goto label_3bf234;
        case 0x3bf238u: goto label_3bf238;
        case 0x3bf23cu: goto label_3bf23c;
        case 0x3bf240u: goto label_3bf240;
        case 0x3bf244u: goto label_3bf244;
        case 0x3bf248u: goto label_3bf248;
        case 0x3bf24cu: goto label_3bf24c;
        case 0x3bf250u: goto label_3bf250;
        case 0x3bf254u: goto label_3bf254;
        case 0x3bf258u: goto label_3bf258;
        case 0x3bf25cu: goto label_3bf25c;
        case 0x3bf260u: goto label_3bf260;
        case 0x3bf264u: goto label_3bf264;
        case 0x3bf268u: goto label_3bf268;
        case 0x3bf26cu: goto label_3bf26c;
        case 0x3bf270u: goto label_3bf270;
        case 0x3bf274u: goto label_3bf274;
        case 0x3bf278u: goto label_3bf278;
        case 0x3bf27cu: goto label_3bf27c;
        case 0x3bf280u: goto label_3bf280;
        case 0x3bf284u: goto label_3bf284;
        case 0x3bf288u: goto label_3bf288;
        case 0x3bf28cu: goto label_3bf28c;
        case 0x3bf290u: goto label_3bf290;
        case 0x3bf294u: goto label_3bf294;
        case 0x3bf298u: goto label_3bf298;
        case 0x3bf29cu: goto label_3bf29c;
        case 0x3bf2a0u: goto label_3bf2a0;
        case 0x3bf2a4u: goto label_3bf2a4;
        case 0x3bf2a8u: goto label_3bf2a8;
        case 0x3bf2acu: goto label_3bf2ac;
        case 0x3bf2b0u: goto label_3bf2b0;
        case 0x3bf2b4u: goto label_3bf2b4;
        case 0x3bf2b8u: goto label_3bf2b8;
        case 0x3bf2bcu: goto label_3bf2bc;
        case 0x3bf2c0u: goto label_3bf2c0;
        case 0x3bf2c4u: goto label_3bf2c4;
        case 0x3bf2c8u: goto label_3bf2c8;
        case 0x3bf2ccu: goto label_3bf2cc;
        case 0x3bf2d0u: goto label_3bf2d0;
        case 0x3bf2d4u: goto label_3bf2d4;
        case 0x3bf2d8u: goto label_3bf2d8;
        case 0x3bf2dcu: goto label_3bf2dc;
        case 0x3bf2e0u: goto label_3bf2e0;
        case 0x3bf2e4u: goto label_3bf2e4;
        case 0x3bf2e8u: goto label_3bf2e8;
        case 0x3bf2ecu: goto label_3bf2ec;
        case 0x3bf2f0u: goto label_3bf2f0;
        case 0x3bf2f4u: goto label_3bf2f4;
        case 0x3bf2f8u: goto label_3bf2f8;
        case 0x3bf2fcu: goto label_3bf2fc;
        case 0x3bf300u: goto label_3bf300;
        case 0x3bf304u: goto label_3bf304;
        case 0x3bf308u: goto label_3bf308;
        case 0x3bf30cu: goto label_3bf30c;
        case 0x3bf310u: goto label_3bf310;
        case 0x3bf314u: goto label_3bf314;
        case 0x3bf318u: goto label_3bf318;
        case 0x3bf31cu: goto label_3bf31c;
        case 0x3bf320u: goto label_3bf320;
        case 0x3bf324u: goto label_3bf324;
        case 0x3bf328u: goto label_3bf328;
        case 0x3bf32cu: goto label_3bf32c;
        case 0x3bf330u: goto label_3bf330;
        case 0x3bf334u: goto label_3bf334;
        case 0x3bf338u: goto label_3bf338;
        case 0x3bf33cu: goto label_3bf33c;
        case 0x3bf340u: goto label_3bf340;
        case 0x3bf344u: goto label_3bf344;
        case 0x3bf348u: goto label_3bf348;
        case 0x3bf34cu: goto label_3bf34c;
        case 0x3bf350u: goto label_3bf350;
        case 0x3bf354u: goto label_3bf354;
        case 0x3bf358u: goto label_3bf358;
        case 0x3bf35cu: goto label_3bf35c;
        case 0x3bf360u: goto label_3bf360;
        case 0x3bf364u: goto label_3bf364;
        case 0x3bf368u: goto label_3bf368;
        case 0x3bf36cu: goto label_3bf36c;
        case 0x3bf370u: goto label_3bf370;
        case 0x3bf374u: goto label_3bf374;
        case 0x3bf378u: goto label_3bf378;
        case 0x3bf37cu: goto label_3bf37c;
        case 0x3bf380u: goto label_3bf380;
        case 0x3bf384u: goto label_3bf384;
        case 0x3bf388u: goto label_3bf388;
        case 0x3bf38cu: goto label_3bf38c;
        case 0x3bf390u: goto label_3bf390;
        case 0x3bf394u: goto label_3bf394;
        case 0x3bf398u: goto label_3bf398;
        case 0x3bf39cu: goto label_3bf39c;
        case 0x3bf3a0u: goto label_3bf3a0;
        case 0x3bf3a4u: goto label_3bf3a4;
        case 0x3bf3a8u: goto label_3bf3a8;
        case 0x3bf3acu: goto label_3bf3ac;
        case 0x3bf3b0u: goto label_3bf3b0;
        case 0x3bf3b4u: goto label_3bf3b4;
        case 0x3bf3b8u: goto label_3bf3b8;
        case 0x3bf3bcu: goto label_3bf3bc;
        case 0x3bf3c0u: goto label_3bf3c0;
        case 0x3bf3c4u: goto label_3bf3c4;
        case 0x3bf3c8u: goto label_3bf3c8;
        case 0x3bf3ccu: goto label_3bf3cc;
        case 0x3bf3d0u: goto label_3bf3d0;
        case 0x3bf3d4u: goto label_3bf3d4;
        case 0x3bf3d8u: goto label_3bf3d8;
        case 0x3bf3dcu: goto label_3bf3dc;
        case 0x3bf3e0u: goto label_3bf3e0;
        case 0x3bf3e4u: goto label_3bf3e4;
        case 0x3bf3e8u: goto label_3bf3e8;
        case 0x3bf3ecu: goto label_3bf3ec;
        case 0x3bf3f0u: goto label_3bf3f0;
        case 0x3bf3f4u: goto label_3bf3f4;
        case 0x3bf3f8u: goto label_3bf3f8;
        case 0x3bf3fcu: goto label_3bf3fc;
        case 0x3bf400u: goto label_3bf400;
        case 0x3bf404u: goto label_3bf404;
        case 0x3bf408u: goto label_3bf408;
        case 0x3bf40cu: goto label_3bf40c;
        case 0x3bf410u: goto label_3bf410;
        case 0x3bf414u: goto label_3bf414;
        case 0x3bf418u: goto label_3bf418;
        case 0x3bf41cu: goto label_3bf41c;
        case 0x3bf420u: goto label_3bf420;
        case 0x3bf424u: goto label_3bf424;
        case 0x3bf428u: goto label_3bf428;
        case 0x3bf42cu: goto label_3bf42c;
        case 0x3bf430u: goto label_3bf430;
        case 0x3bf434u: goto label_3bf434;
        case 0x3bf438u: goto label_3bf438;
        case 0x3bf43cu: goto label_3bf43c;
        case 0x3bf440u: goto label_3bf440;
        case 0x3bf444u: goto label_3bf444;
        case 0x3bf448u: goto label_3bf448;
        case 0x3bf44cu: goto label_3bf44c;
        case 0x3bf450u: goto label_3bf450;
        case 0x3bf454u: goto label_3bf454;
        case 0x3bf458u: goto label_3bf458;
        case 0x3bf45cu: goto label_3bf45c;
        case 0x3bf460u: goto label_3bf460;
        case 0x3bf464u: goto label_3bf464;
        case 0x3bf468u: goto label_3bf468;
        case 0x3bf46cu: goto label_3bf46c;
        case 0x3bf470u: goto label_3bf470;
        case 0x3bf474u: goto label_3bf474;
        case 0x3bf478u: goto label_3bf478;
        case 0x3bf47cu: goto label_3bf47c;
        case 0x3bf480u: goto label_3bf480;
        case 0x3bf484u: goto label_3bf484;
        case 0x3bf488u: goto label_3bf488;
        case 0x3bf48cu: goto label_3bf48c;
        case 0x3bf490u: goto label_3bf490;
        case 0x3bf494u: goto label_3bf494;
        case 0x3bf498u: goto label_3bf498;
        case 0x3bf49cu: goto label_3bf49c;
        case 0x3bf4a0u: goto label_3bf4a0;
        case 0x3bf4a4u: goto label_3bf4a4;
        case 0x3bf4a8u: goto label_3bf4a8;
        case 0x3bf4acu: goto label_3bf4ac;
        case 0x3bf4b0u: goto label_3bf4b0;
        case 0x3bf4b4u: goto label_3bf4b4;
        case 0x3bf4b8u: goto label_3bf4b8;
        case 0x3bf4bcu: goto label_3bf4bc;
        case 0x3bf4c0u: goto label_3bf4c0;
        case 0x3bf4c4u: goto label_3bf4c4;
        case 0x3bf4c8u: goto label_3bf4c8;
        case 0x3bf4ccu: goto label_3bf4cc;
        case 0x3bf4d0u: goto label_3bf4d0;
        case 0x3bf4d4u: goto label_3bf4d4;
        case 0x3bf4d8u: goto label_3bf4d8;
        case 0x3bf4dcu: goto label_3bf4dc;
        case 0x3bf4e0u: goto label_3bf4e0;
        case 0x3bf4e4u: goto label_3bf4e4;
        case 0x3bf4e8u: goto label_3bf4e8;
        case 0x3bf4ecu: goto label_3bf4ec;
        case 0x3bf4f0u: goto label_3bf4f0;
        case 0x3bf4f4u: goto label_3bf4f4;
        case 0x3bf4f8u: goto label_3bf4f8;
        case 0x3bf4fcu: goto label_3bf4fc;
        case 0x3bf500u: goto label_3bf500;
        case 0x3bf504u: goto label_3bf504;
        case 0x3bf508u: goto label_3bf508;
        case 0x3bf50cu: goto label_3bf50c;
        case 0x3bf510u: goto label_3bf510;
        case 0x3bf514u: goto label_3bf514;
        case 0x3bf518u: goto label_3bf518;
        case 0x3bf51cu: goto label_3bf51c;
        case 0x3bf520u: goto label_3bf520;
        case 0x3bf524u: goto label_3bf524;
        case 0x3bf528u: goto label_3bf528;
        case 0x3bf52cu: goto label_3bf52c;
        case 0x3bf530u: goto label_3bf530;
        case 0x3bf534u: goto label_3bf534;
        case 0x3bf538u: goto label_3bf538;
        case 0x3bf53cu: goto label_3bf53c;
        case 0x3bf540u: goto label_3bf540;
        case 0x3bf544u: goto label_3bf544;
        case 0x3bf548u: goto label_3bf548;
        case 0x3bf54cu: goto label_3bf54c;
        case 0x3bf550u: goto label_3bf550;
        case 0x3bf554u: goto label_3bf554;
        case 0x3bf558u: goto label_3bf558;
        case 0x3bf55cu: goto label_3bf55c;
        case 0x3bf560u: goto label_3bf560;
        case 0x3bf564u: goto label_3bf564;
        case 0x3bf568u: goto label_3bf568;
        case 0x3bf56cu: goto label_3bf56c;
        case 0x3bf570u: goto label_3bf570;
        case 0x3bf574u: goto label_3bf574;
        case 0x3bf578u: goto label_3bf578;
        case 0x3bf57cu: goto label_3bf57c;
        case 0x3bf580u: goto label_3bf580;
        case 0x3bf584u: goto label_3bf584;
        case 0x3bf588u: goto label_3bf588;
        case 0x3bf58cu: goto label_3bf58c;
        case 0x3bf590u: goto label_3bf590;
        case 0x3bf594u: goto label_3bf594;
        case 0x3bf598u: goto label_3bf598;
        case 0x3bf59cu: goto label_3bf59c;
        case 0x3bf5a0u: goto label_3bf5a0;
        case 0x3bf5a4u: goto label_3bf5a4;
        case 0x3bf5a8u: goto label_3bf5a8;
        case 0x3bf5acu: goto label_3bf5ac;
        case 0x3bf5b0u: goto label_3bf5b0;
        case 0x3bf5b4u: goto label_3bf5b4;
        case 0x3bf5b8u: goto label_3bf5b8;
        case 0x3bf5bcu: goto label_3bf5bc;
        case 0x3bf5c0u: goto label_3bf5c0;
        case 0x3bf5c4u: goto label_3bf5c4;
        case 0x3bf5c8u: goto label_3bf5c8;
        case 0x3bf5ccu: goto label_3bf5cc;
        case 0x3bf5d0u: goto label_3bf5d0;
        case 0x3bf5d4u: goto label_3bf5d4;
        case 0x3bf5d8u: goto label_3bf5d8;
        case 0x3bf5dcu: goto label_3bf5dc;
        case 0x3bf5e0u: goto label_3bf5e0;
        case 0x3bf5e4u: goto label_3bf5e4;
        case 0x3bf5e8u: goto label_3bf5e8;
        case 0x3bf5ecu: goto label_3bf5ec;
        case 0x3bf5f0u: goto label_3bf5f0;
        case 0x3bf5f4u: goto label_3bf5f4;
        case 0x3bf5f8u: goto label_3bf5f8;
        case 0x3bf5fcu: goto label_3bf5fc;
        case 0x3bf600u: goto label_3bf600;
        case 0x3bf604u: goto label_3bf604;
        case 0x3bf608u: goto label_3bf608;
        case 0x3bf60cu: goto label_3bf60c;
        case 0x3bf610u: goto label_3bf610;
        case 0x3bf614u: goto label_3bf614;
        case 0x3bf618u: goto label_3bf618;
        case 0x3bf61cu: goto label_3bf61c;
        case 0x3bf620u: goto label_3bf620;
        case 0x3bf624u: goto label_3bf624;
        case 0x3bf628u: goto label_3bf628;
        case 0x3bf62cu: goto label_3bf62c;
        case 0x3bf630u: goto label_3bf630;
        case 0x3bf634u: goto label_3bf634;
        case 0x3bf638u: goto label_3bf638;
        case 0x3bf63cu: goto label_3bf63c;
        case 0x3bf640u: goto label_3bf640;
        case 0x3bf644u: goto label_3bf644;
        case 0x3bf648u: goto label_3bf648;
        case 0x3bf64cu: goto label_3bf64c;
        case 0x3bf650u: goto label_3bf650;
        case 0x3bf654u: goto label_3bf654;
        case 0x3bf658u: goto label_3bf658;
        case 0x3bf65cu: goto label_3bf65c;
        case 0x3bf660u: goto label_3bf660;
        case 0x3bf664u: goto label_3bf664;
        case 0x3bf668u: goto label_3bf668;
        case 0x3bf66cu: goto label_3bf66c;
        case 0x3bf670u: goto label_3bf670;
        case 0x3bf674u: goto label_3bf674;
        case 0x3bf678u: goto label_3bf678;
        case 0x3bf67cu: goto label_3bf67c;
        case 0x3bf680u: goto label_3bf680;
        case 0x3bf684u: goto label_3bf684;
        case 0x3bf688u: goto label_3bf688;
        case 0x3bf68cu: goto label_3bf68c;
        case 0x3bf690u: goto label_3bf690;
        case 0x3bf694u: goto label_3bf694;
        case 0x3bf698u: goto label_3bf698;
        case 0x3bf69cu: goto label_3bf69c;
        case 0x3bf6a0u: goto label_3bf6a0;
        case 0x3bf6a4u: goto label_3bf6a4;
        case 0x3bf6a8u: goto label_3bf6a8;
        case 0x3bf6acu: goto label_3bf6ac;
        case 0x3bf6b0u: goto label_3bf6b0;
        case 0x3bf6b4u: goto label_3bf6b4;
        case 0x3bf6b8u: goto label_3bf6b8;
        case 0x3bf6bcu: goto label_3bf6bc;
        case 0x3bf6c0u: goto label_3bf6c0;
        case 0x3bf6c4u: goto label_3bf6c4;
        case 0x3bf6c8u: goto label_3bf6c8;
        case 0x3bf6ccu: goto label_3bf6cc;
        case 0x3bf6d0u: goto label_3bf6d0;
        case 0x3bf6d4u: goto label_3bf6d4;
        case 0x3bf6d8u: goto label_3bf6d8;
        case 0x3bf6dcu: goto label_3bf6dc;
        case 0x3bf6e0u: goto label_3bf6e0;
        case 0x3bf6e4u: goto label_3bf6e4;
        case 0x3bf6e8u: goto label_3bf6e8;
        default: break;
    }

    ctx->pc = 0x3bf1c0u;

label_3bf1c0:
    // 0x3bf1c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3bf1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3bf1c4:
    // 0x3bf1c4: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bf1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
label_3bf1c8:
    // 0x3bf1c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3bf1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3bf1cc:
    // 0x3bf1cc: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x3bf1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_3bf1d0:
    // 0x3bf1d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3bf1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3bf1d4:
    // 0x3bf1d4: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x3bf1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_3bf1d8:
    // 0x3bf1d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bf1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3bf1dc:
    // 0x3bf1dc: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3bf1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3bf1e0:
    // 0x3bf1e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bf1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bf1e4:
    // 0x3bf1e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bf1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1e8:
    // 0x3bf1e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bf1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3bf1ec:
    // 0x3bf1ec: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x3bf1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_3bf1f0:
    // 0x3bf1f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3bf1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1f4:
    // 0x3bf1f4: 0x3c02c366  lui         $v0, 0xC366
    ctx->pc = 0x3bf1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50022 << 16));
label_3bf1f8:
    // 0x3bf1f8: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x3bf1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_3bf1fc:
    // 0x3bf1fc: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x3bf1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_3bf200:
    // 0x3bf200: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3bf200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3bf204:
    // 0x3bf204: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x3bf204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_3bf208:
    // 0x3bf208: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3bf208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3bf20c:
    // 0x3bf20c: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x3bf20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3bf210:
    // 0x3bf210: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3bf210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bf214:
    // 0x3bf214: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3bf214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bf218:
    // 0x3bf218: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bf218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3bf21c:
    // 0x3bf21c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3bf21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3bf220:
    // 0x3bf220: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bf220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3bf224:
    // 0x3bf224: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bf224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3bf228:
    // 0x3bf228: 0xc0414ca  jal         func_105328
label_3bf22c:
    if (ctx->pc == 0x3BF22Cu) {
        ctx->pc = 0x3BF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF228u;
        // 0x3bf22c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF230u;
        goto label_3bf230;
    }
    ctx->pc = 0x3BF228u;
    SET_GPR_U32(ctx, 31, 0x3BF230u);
    ctx->pc = 0x3BF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF228u;
    // 0x3bf22c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BF228u, 0x3BF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF230u;
label_3bf230:
    // 0x3bf230: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3bf230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3bf234:
    // 0x3bf234: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x3bf234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3bf238:
    // 0x3bf238: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bf238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3bf23c:
    // 0x3bf23c: 0x2404012b  addiu       $a0, $zero, 0x12B
    ctx->pc = 0x3bf23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_3bf240:
    // 0x3bf240: 0xc0a4408  jal         func_291020
label_3bf244:
    if (ctx->pc == 0x3BF244u) {
        ctx->pc = 0x3BF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF240u;
        // 0x3bf244: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF248u;
        goto label_3bf248;
    }
    ctx->pc = 0x3BF240u;
    SET_GPR_U32(ctx, 31, 0x3BF248u);
    ctx->pc = 0x3BF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF240u;
    // 0x3bf244: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3BF240u, 0x3BF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF248u;
label_3bf248:
    // 0x3bf248: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3bf248u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bf24c:
    // 0x3bf24c: 0xc0a43fc  jal         func_290FF0
label_3bf250:
    if (ctx->pc == 0x3BF250u) {
        ctx->pc = 0x3BF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF24Cu;
        // 0x3bf250: 0x2404012b  addiu       $a0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF254u;
        goto label_3bf254;
    }
    ctx->pc = 0x3BF24Cu;
    SET_GPR_U32(ctx, 31, 0x3BF254u);
    ctx->pc = 0x3BF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF24Cu;
    // 0x3bf250: 0x2404012b  addiu       $a0, $zero, 0x12B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3BF24Cu, 0x3BF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF254u;
label_3bf254:
    // 0x3bf254: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3bf254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3bf258:
    // 0x3bf258: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3bf258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3bf25c:
    // 0x3bf25c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3bf25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bf260:
    // 0x3bf260: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3bf260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3bf264:
    // 0x3bf264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bf264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf268:
    // 0x3bf268: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3bf268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3bf26c:
    // 0x3bf26c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3bf26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3bf270:
    // 0x3bf270: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bf270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf274:
    // 0x3bf274: 0xc0510e0  jal         func_144380
label_3bf278:
    if (ctx->pc == 0x3BF278u) {
        ctx->pc = 0x3BF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF274u;
        // 0x3bf278: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF27Cu;
        goto label_3bf27c;
    }
    ctx->pc = 0x3BF274u;
    SET_GPR_U32(ctx, 31, 0x3BF27Cu);
    ctx->pc = 0x3BF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF274u;
    // 0x3bf278: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3BF274u, 0x3BF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF27Cu;
label_3bf27c:
    // 0x3bf27c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bf27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf280:
    // 0x3bf280: 0x2405021e  addiu       $a1, $zero, 0x21E
    ctx->pc = 0x3bf280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
label_3bf284:
    // 0x3bf284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf288:
    // 0x3bf288: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x3bf288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3bf28c:
    // 0x3bf28c: 0xc0d0484  jal         func_341210
label_3bf290:
    if (ctx->pc == 0x3BF290u) {
        ctx->pc = 0x3BF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF28Cu;
        // 0x3bf290: 0x24070e00  addiu       $a3, $zero, 0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF294u;
        goto label_3bf294;
    }
    ctx->pc = 0x3BF28Cu;
    SET_GPR_U32(ctx, 31, 0x3BF294u);
    ctx->pc = 0x3BF290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF28Cu;
    // 0x3bf290: 0x24070e00  addiu       $a3, $zero, 0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3BF28Cu, 0x3BF294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF294u;
label_3bf294:
    // 0x3bf294: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3bf294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3bf298:
    // 0x3bf298: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3bf298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3bf29c:
    // 0x3bf29c: 0x320f809  jalr        $t9
label_3bf2a0:
    if (ctx->pc == 0x3BF2A0u) {
        ctx->pc = 0x3BF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF29Cu;
        // 0x3bf2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2A4u;
        goto label_3bf2a4;
    }
    ctx->pc = 0x3BF29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BF2A4u);
        ctx->pc = 0x3BF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF29Cu;
        // 0x3bf2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF29Cu, 0x3BF2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF2A4u;
label_3bf2a4:
    // 0x3bf2a4: 0xc0d0494  jal         func_341250
label_3bf2a8:
    if (ctx->pc == 0x3BF2A8u) {
        ctx->pc = 0x3BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2A4u;
        // 0x3bf2a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2ACu;
        goto label_3bf2ac;
    }
    ctx->pc = 0x3BF2A4u;
    SET_GPR_U32(ctx, 31, 0x3BF2ACu);
    ctx->pc = 0x3BF2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF2A4u;
    // 0x3bf2a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x3BF2A4u, 0x3BF2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF2ACu;
label_3bf2ac:
    // 0x3bf2ac: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3bf2acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bf2b0:
    // 0x3bf2b0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3bf2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3bf2b4:
    // 0x3bf2b4: 0x24842ce0  addiu       $a0, $a0, 0x2CE0
    ctx->pc = 0x3bf2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
label_3bf2b8:
    // 0x3bf2b8: 0xc0e3668  jal         func_38D9A0
label_3bf2bc:
    if (ctx->pc == 0x3BF2BCu) {
        ctx->pc = 0x3BF2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2B8u;
        // 0x3bf2bc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2C0u;
        goto label_3bf2c0;
    }
    ctx->pc = 0x3BF2B8u;
    SET_GPR_U32(ctx, 31, 0x3BF2C0u);
    ctx->pc = 0x3BF2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF2B8u;
    // 0x3bf2bc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x3BF2B8u, 0x3BF2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF2C0u;
label_3bf2c0:
    // 0x3bf2c0: 0x3c02c366  lui         $v0, 0xC366
    ctx->pc = 0x3bf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50022 << 16));
label_3bf2c4:
    // 0x3bf2c4: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x3bf2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_3bf2c8:
    // 0x3bf2c8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3bf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3bf2cc:
    // 0x3bf2cc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3bf2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3bf2d0:
    // 0x3bf2d0: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
label_3bf2d4:
    // 0x3bf2d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3bf2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3bf2d8:
    // 0x3bf2d8: 0x34435000  ori         $v1, $v0, 0x5000
    ctx->pc = 0x3bf2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_3bf2dc:
    // 0x3bf2dc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3bf2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3bf2e0:
    // 0x3bf2e0: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x3bf2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_3bf2e4:
    // 0x3bf2e4: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x3bf2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_3bf2e8:
    // 0x3bf2e8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3bf2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_3bf2ec:
    // 0x3bf2ec: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3bf2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3bf2f0:
    // 0x3bf2f0: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3bf2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3bf2f4:
    // 0x3bf2f4: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3bf2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bf2f8:
    // 0x3bf2f8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3bf2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bf2fc:
    // 0x3bf2fc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bf2fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3bf300:
    // 0x3bf300: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bf300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3bf304:
    // 0x3bf304: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bf304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3bf308:
    // 0x3bf308: 0xc0414ca  jal         func_105328
label_3bf30c:
    if (ctx->pc == 0x3BF30Cu) {
        ctx->pc = 0x3BF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF308u;
        // 0x3bf30c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF310u;
        goto label_3bf310;
    }
    ctx->pc = 0x3BF308u;
    SET_GPR_U32(ctx, 31, 0x3BF310u);
    ctx->pc = 0x3BF30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF308u;
    // 0x3bf30c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BF308u, 0x3BF310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF310u;
label_3bf310:
    // 0x3bf310: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3bf310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3bf314:
    // 0x3bf314: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x3bf314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3bf318:
    // 0x3bf318: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bf318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3bf31c:
    // 0x3bf31c: 0x2404012b  addiu       $a0, $zero, 0x12B
    ctx->pc = 0x3bf31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_3bf320:
    // 0x3bf320: 0xc0a4408  jal         func_291020
label_3bf324:
    if (ctx->pc == 0x3BF324u) {
        ctx->pc = 0x3BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF320u;
        // 0x3bf324: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF328u;
        goto label_3bf328;
    }
    ctx->pc = 0x3BF320u;
    SET_GPR_U32(ctx, 31, 0x3BF328u);
    ctx->pc = 0x3BF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF320u;
    // 0x3bf324: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3BF320u, 0x3BF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF328u;
label_3bf328:
    // 0x3bf328: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3bf328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bf32c:
    // 0x3bf32c: 0xc0a43fc  jal         func_290FF0
label_3bf330:
    if (ctx->pc == 0x3BF330u) {
        ctx->pc = 0x3BF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF32Cu;
        // 0x3bf330: 0x2404012b  addiu       $a0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF334u;
        goto label_3bf334;
    }
    ctx->pc = 0x3BF32Cu;
    SET_GPR_U32(ctx, 31, 0x3BF334u);
    ctx->pc = 0x3BF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF32Cu;
    // 0x3bf330: 0x2404012b  addiu       $a0, $zero, 0x12B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3BF32Cu, 0x3BF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF334u;
label_3bf334:
    // 0x3bf334: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3bf334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3bf338:
    // 0x3bf338: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3bf338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3bf33c:
    // 0x3bf33c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3bf33cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bf340:
    // 0x3bf340: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3bf340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3bf344:
    // 0x3bf344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bf344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf348:
    // 0x3bf348: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3bf348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3bf34c:
    // 0x3bf34c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3bf34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3bf350:
    // 0x3bf350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bf350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf354:
    // 0x3bf354: 0xc0510e0  jal         func_144380
label_3bf358:
    if (ctx->pc == 0x3BF358u) {
        ctx->pc = 0x3BF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF354u;
        // 0x3bf358: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF35Cu;
        goto label_3bf35c;
    }
    ctx->pc = 0x3BF354u;
    SET_GPR_U32(ctx, 31, 0x3BF35Cu);
    ctx->pc = 0x3BF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF354u;
    // 0x3bf358: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3BF354u, 0x3BF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF35Cu;
label_3bf35c:
    // 0x3bf35c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bf35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf360:
    // 0x3bf360: 0x2405021e  addiu       $a1, $zero, 0x21E
    ctx->pc = 0x3bf360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
label_3bf364:
    // 0x3bf364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bf364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf368:
    // 0x3bf368: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x3bf368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3bf36c:
    // 0x3bf36c: 0xc0d0484  jal         func_341210
label_3bf370:
    if (ctx->pc == 0x3BF370u) {
        ctx->pc = 0x3BF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF36Cu;
        // 0x3bf370: 0x24070600  addiu       $a3, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF374u;
        goto label_3bf374;
    }
    ctx->pc = 0x3BF36Cu;
    SET_GPR_U32(ctx, 31, 0x3BF374u);
    ctx->pc = 0x3BF370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF36Cu;
    // 0x3bf370: 0x24070600  addiu       $a3, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3BF36Cu, 0x3BF374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF374u;
label_3bf374:
    // 0x3bf374: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3bf374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3bf378:
    // 0x3bf378: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3bf378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3bf37c:
    // 0x3bf37c: 0x320f809  jalr        $t9
label_3bf380:
    if (ctx->pc == 0x3BF380u) {
        ctx->pc = 0x3BF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF37Cu;
        // 0x3bf380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF384u;
        goto label_3bf384;
    }
    ctx->pc = 0x3BF37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BF384u);
        ctx->pc = 0x3BF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF37Cu;
        // 0x3bf380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF37Cu, 0x3BF384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF384u;
label_3bf384:
    // 0x3bf384: 0xc0d0494  jal         func_341250
label_3bf388:
    if (ctx->pc == 0x3BF388u) {
        ctx->pc = 0x3BF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF384u;
        // 0x3bf388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF38Cu;
        goto label_3bf38c;
    }
    ctx->pc = 0x3BF384u;
    SET_GPR_U32(ctx, 31, 0x3BF38Cu);
    ctx->pc = 0x3BF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF384u;
    // 0x3bf388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x3BF384u, 0x3BF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF38Cu;
label_3bf38c:
    // 0x3bf38c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3bf38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bf390:
    // 0x3bf390: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3bf390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3bf394:
    // 0x3bf394: 0x24842ce0  addiu       $a0, $a0, 0x2CE0
    ctx->pc = 0x3bf394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
label_3bf398:
    // 0x3bf398: 0xc0e3668  jal         func_38D9A0
label_3bf39c:
    if (ctx->pc == 0x3BF39Cu) {
        ctx->pc = 0x3BF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF398u;
        // 0x3bf39c: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3A0u;
        goto label_3bf3a0;
    }
    ctx->pc = 0x3BF398u;
    SET_GPR_U32(ctx, 31, 0x3BF3A0u);
    ctx->pc = 0x3BF39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF398u;
    // 0x3bf39c: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x3BF398u, 0x3BF3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF3A0u;
label_3bf3a0:
    // 0x3bf3a0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3bf3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3bf3a4:
    // 0x3bf3a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3a8:
    // 0x3bf3a8: 0xc0ef504  jal         func_3BD410
label_3bf3ac:
    if (ctx->pc == 0x3BF3ACu) {
        ctx->pc = 0x3BF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3A8u;
        // 0x3bf3ac: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3B0u;
        goto label_3bf3b0;
    }
    ctx->pc = 0x3BF3A8u;
    SET_GPR_U32(ctx, 31, 0x3BF3B0u);
    ctx->pc = 0x3BF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF3A8u;
    // 0x3bf3ac: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BF3A8u, 0x3BF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF3B0u;
label_3bf3b0:
    // 0x3bf3b0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bf3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_3bf3b4:
    // 0x3bf3b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3bf3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3bf3b8:
    // 0x3bf3b8: 0x8c241400  lw          $a0, 0x1400($at)
    ctx->pc = 0x3bf3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5120)));
label_3bf3bc:
    // 0x3bf3bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bf3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3c0:
    // 0x3bf3c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3bf3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3bf3c4:
    // 0x3bf3c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3bf3c8:
    if (ctx->pc == 0x3BF3C8u) {
        ctx->pc = 0x3BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3C4u;
        // 0x3bf3c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3CCu;
        goto label_3bf3cc;
    }
    ctx->pc = 0x3BF3C4u;
    {
        const bool branch_taken_0x3bf3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3C4u;
        // 0x3bf3c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3c4) {
            ctx->pc = 0x3BF3D0u;
            goto label_3bf3d0;
        }
    }
    ctx->pc = 0x3BF3CCu;
label_3bf3cc:
    // 0x3bf3cc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3bf3ccu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bf3d0:
    // 0x3bf3d0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x3bf3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3bf3d4:
    // 0x3bf3d4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_3bf3d8:
    if (ctx->pc == 0x3BF3D8u) {
        ctx->pc = 0x3BF3DCu;
        goto label_3bf3dc;
    }
    ctx->pc = 0x3BF3D4u;
    {
        const bool branch_taken_0x3bf3d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf3d4) {
            ctx->pc = 0x3BF3F8u;
            goto label_3bf3f8;
        }
    }
    ctx->pc = 0x3BF3DCu;
label_3bf3dc:
    // 0x3bf3dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3e0:
    // 0x3bf3e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3e4:
    // 0x3bf3e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bf3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3e8:
    // 0x3bf3e8: 0xc0efc20  jal         func_3BF080
label_3bf3ec:
    if (ctx->pc == 0x3BF3ECu) {
        ctx->pc = 0x3BF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3E8u;
        // 0x3bf3ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3F0u;
        goto label_3bf3f0;
    }
    ctx->pc = 0x3BF3E8u;
    SET_GPR_U32(ctx, 31, 0x3BF3F0u);
    ctx->pc = 0x3BF3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF3E8u;
    // 0x3bf3ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF080u, 0x3BF3E8u, 0x3BF3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF3F0u;
label_3bf3f0:
    // 0x3bf3f0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_3bf3f4:
    if (ctx->pc == 0x3BF3F4u) {
        ctx->pc = 0x3BF3F8u;
        goto label_3bf3f8;
    }
    ctx->pc = 0x3BF3F0u;
    {
        const bool branch_taken_0x3bf3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf3f0) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF3F8u;
label_3bf3f8:
    // 0x3bf3f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3bf3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3bf3fc:
    // 0x3bf3fc: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3bf400:
    if (ctx->pc == 0x3BF400u) {
        ctx->pc = 0x3BF404u;
        goto label_3bf404;
    }
    ctx->pc = 0x3BF3FCu;
    {
        const bool branch_taken_0x3bf3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf3fc) {
            ctx->pc = 0x3BF420u;
            goto label_3bf420;
        }
    }
    ctx->pc = 0x3BF404u;
label_3bf404:
    // 0x3bf404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf408:
    // 0x3bf408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf40c:
    // 0x3bf40c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bf40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf410:
    // 0x3bf410: 0xc0efc20  jal         func_3BF080
label_3bf414:
    if (ctx->pc == 0x3BF414u) {
        ctx->pc = 0x3BF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF410u;
        // 0x3bf414: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF418u;
        goto label_3bf418;
    }
    ctx->pc = 0x3BF410u;
    SET_GPR_U32(ctx, 31, 0x3BF418u);
    ctx->pc = 0x3BF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF410u;
    // 0x3bf414: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF080u, 0x3BF410u, 0x3BF418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF418u;
label_3bf418:
    // 0x3bf418: 0x100000ad  b           . + 4 + (0xAD << 2)
label_3bf41c:
    if (ctx->pc == 0x3BF41Cu) {
        ctx->pc = 0x3BF420u;
        goto label_3bf420;
    }
    ctx->pc = 0x3BF418u;
    {
        const bool branch_taken_0x3bf418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf418) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF420u;
label_3bf420:
    // 0x3bf420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bf420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf424:
    // 0x3bf424: 0x14870008  bne         $a0, $a3, . + 4 + (0x8 << 2)
label_3bf428:
    if (ctx->pc == 0x3BF428u) {
        ctx->pc = 0x3BF42Cu;
        goto label_3bf42c;
    }
    ctx->pc = 0x3BF424u;
    {
        const bool branch_taken_0x3bf424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x3bf424) {
            ctx->pc = 0x3BF448u;
            goto label_3bf448;
        }
    }
    ctx->pc = 0x3BF42Cu;
label_3bf42c:
    // 0x3bf42c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf430:
    // 0x3bf430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf434:
    // 0x3bf434: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bf434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf438:
    // 0x3bf438: 0xc0efc20  jal         func_3BF080
label_3bf43c:
    if (ctx->pc == 0x3BF43Cu) {
        ctx->pc = 0x3BF43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF438u;
        // 0x3bf43c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF440u;
        goto label_3bf440;
    }
    ctx->pc = 0x3BF438u;
    SET_GPR_U32(ctx, 31, 0x3BF440u);
    ctx->pc = 0x3BF43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF438u;
    // 0x3bf43c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF080u, 0x3BF438u, 0x3BF440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF440u;
label_3bf440:
    // 0x3bf440: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3bf444:
    if (ctx->pc == 0x3BF444u) {
        ctx->pc = 0x3BF448u;
        goto label_3bf448;
    }
    ctx->pc = 0x3BF440u;
    {
        const bool branch_taken_0x3bf440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf440) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF448u;
label_3bf448:
    // 0x3bf448: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3bf448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3bf44c:
    // 0x3bf44c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3bf450:
    if (ctx->pc == 0x3BF450u) {
        ctx->pc = 0x3BF454u;
        goto label_3bf454;
    }
    ctx->pc = 0x3BF44Cu;
    {
        const bool branch_taken_0x3bf44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf44c) {
            ctx->pc = 0x3BF470u;
            goto label_3bf470;
        }
    }
    ctx->pc = 0x3BF454u;
label_3bf454:
    // 0x3bf454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf458:
    // 0x3bf458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf45c:
    // 0x3bf45c: 0xc0efc20  jal         func_3BF080
label_3bf460:
    if (ctx->pc == 0x3BF460u) {
        ctx->pc = 0x3BF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF45Cu;
        // 0x3bf460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF464u;
        goto label_3bf464;
    }
    ctx->pc = 0x3BF45Cu;
    SET_GPR_U32(ctx, 31, 0x3BF464u);
    ctx->pc = 0x3BF460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF45Cu;
    // 0x3bf460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF080u, 0x3BF45Cu, 0x3BF464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF464u;
label_3bf464:
    // 0x3bf464: 0x1000009a  b           . + 4 + (0x9A << 2)
label_3bf468:
    if (ctx->pc == 0x3BF468u) {
        ctx->pc = 0x3BF46Cu;
        goto label_3bf46c;
    }
    ctx->pc = 0x3BF464u;
    {
        const bool branch_taken_0x3bf464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf464) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF46Cu;
label_3bf46c:
    // 0x3bf46c: 0x0  nop
    ctx->pc = 0x3bf46cu;
    // NOP
label_3bf470:
    // 0x3bf470: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bf470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3bf474:
    // 0x3bf474: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3bf478:
    if (ctx->pc == 0x3BF478u) {
        ctx->pc = 0x3BF47Cu;
        goto label_3bf47c;
    }
    ctx->pc = 0x3BF474u;
    {
        const bool branch_taken_0x3bf474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf474) {
            ctx->pc = 0x3BF498u;
            goto label_3bf498;
        }
    }
    ctx->pc = 0x3BF47Cu;
label_3bf47c:
    // 0x3bf47c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf480:
    // 0x3bf480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf484:
    // 0x3bf484: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bf484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf488:
    // 0x3bf488: 0xc0efbf0  jal         func_3BEFC0
label_3bf48c:
    if (ctx->pc == 0x3BF48Cu) {
        ctx->pc = 0x3BF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF488u;
        // 0x3bf48c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF490u;
        goto label_3bf490;
    }
    ctx->pc = 0x3BF488u;
    SET_GPR_U32(ctx, 31, 0x3BF490u);
    ctx->pc = 0x3BF48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF488u;
    // 0x3bf48c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFC0u, 0x3BF488u, 0x3BF490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF490u;
label_3bf490:
    // 0x3bf490: 0x1000008f  b           . + 4 + (0x8F << 2)
label_3bf494:
    if (ctx->pc == 0x3BF494u) {
        ctx->pc = 0x3BF498u;
        goto label_3bf498;
    }
    ctx->pc = 0x3BF490u;
    {
        const bool branch_taken_0x3bf490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf490) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF498u;
label_3bf498:
    // 0x3bf498: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3bf498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bf49c:
    // 0x3bf49c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3bf4a0:
    if (ctx->pc == 0x3BF4A0u) {
        ctx->pc = 0x3BF4A4u;
        goto label_3bf4a4;
    }
    ctx->pc = 0x3BF49Cu;
    {
        const bool branch_taken_0x3bf49c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf49c) {
            ctx->pc = 0x3BF4C0u;
            goto label_3bf4c0;
        }
    }
    ctx->pc = 0x3BF4A4u;
label_3bf4a4:
    // 0x3bf4a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4a8:
    // 0x3bf4a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4ac:
    // 0x3bf4ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bf4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4b0:
    // 0x3bf4b0: 0xc0efbf0  jal         func_3BEFC0
label_3bf4b4:
    if (ctx->pc == 0x3BF4B4u) {
        ctx->pc = 0x3BF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4B0u;
        // 0x3bf4b4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF4B8u;
        goto label_3bf4b8;
    }
    ctx->pc = 0x3BF4B0u;
    SET_GPR_U32(ctx, 31, 0x3BF4B8u);
    ctx->pc = 0x3BF4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF4B0u;
    // 0x3bf4b4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFC0u, 0x3BF4B0u, 0x3BF4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF4B8u;
label_3bf4b8:
    // 0x3bf4b8: 0x10000085  b           . + 4 + (0x85 << 2)
label_3bf4bc:
    if (ctx->pc == 0x3BF4BCu) {
        ctx->pc = 0x3BF4C0u;
        goto label_3bf4c0;
    }
    ctx->pc = 0x3BF4B8u;
    {
        const bool branch_taken_0x3bf4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf4b8) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF4C0u;
label_3bf4c0:
    // 0x3bf4c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bf4c4:
    // 0x3bf4c4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3bf4c8:
    if (ctx->pc == 0x3BF4C8u) {
        ctx->pc = 0x3BF4CCu;
        goto label_3bf4cc;
    }
    ctx->pc = 0x3BF4C4u;
    {
        const bool branch_taken_0x3bf4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf4c4) {
            ctx->pc = 0x3BF4E8u;
            goto label_3bf4e8;
        }
    }
    ctx->pc = 0x3BF4CCu;
label_3bf4cc:
    // 0x3bf4cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4d0:
    // 0x3bf4d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4d4:
    // 0x3bf4d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bf4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4d8:
    // 0x3bf4d8: 0xc0efbf0  jal         func_3BEFC0
label_3bf4dc:
    if (ctx->pc == 0x3BF4DCu) {
        ctx->pc = 0x3BF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4D8u;
        // 0x3bf4dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF4E0u;
        goto label_3bf4e0;
    }
    ctx->pc = 0x3BF4D8u;
    SET_GPR_U32(ctx, 31, 0x3BF4E0u);
    ctx->pc = 0x3BF4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF4D8u;
    // 0x3bf4dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFC0u, 0x3BF4D8u, 0x3BF4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF4E0u;
label_3bf4e0:
    // 0x3bf4e0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_3bf4e4:
    if (ctx->pc == 0x3BF4E4u) {
        ctx->pc = 0x3BF4E8u;
        goto label_3bf4e8;
    }
    ctx->pc = 0x3BF4E0u;
    {
        const bool branch_taken_0x3bf4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf4e0) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF4E8u;
label_3bf4e8:
    // 0x3bf4e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bf4ec:
    // 0x3bf4ec: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3bf4f0:
    if (ctx->pc == 0x3BF4F0u) {
        ctx->pc = 0x3BF4F4u;
        goto label_3bf4f4;
    }
    ctx->pc = 0x3BF4ECu;
    {
        const bool branch_taken_0x3bf4ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf4ec) {
            ctx->pc = 0x3BF510u;
            goto label_3bf510;
        }
    }
    ctx->pc = 0x3BF4F4u;
label_3bf4f4:
    // 0x3bf4f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4f8:
    // 0x3bf4f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4fc:
    // 0x3bf4fc: 0xc0efbf0  jal         func_3BEFC0
label_3bf500:
    if (ctx->pc == 0x3BF500u) {
        ctx->pc = 0x3BF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4FCu;
        // 0x3bf500: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF504u;
        goto label_3bf504;
    }
    ctx->pc = 0x3BF4FCu;
    SET_GPR_U32(ctx, 31, 0x3BF504u);
    ctx->pc = 0x3BF500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF4FCu;
    // 0x3bf500: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFC0u, 0x3BF4FCu, 0x3BF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF504u;
label_3bf504:
    // 0x3bf504: 0x10000072  b           . + 4 + (0x72 << 2)
label_3bf508:
    if (ctx->pc == 0x3BF508u) {
        ctx->pc = 0x3BF50Cu;
        goto label_3bf50c;
    }
    ctx->pc = 0x3BF504u;
    {
        const bool branch_taken_0x3bf504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf504) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF50Cu;
label_3bf50c:
    // 0x3bf50c: 0x0  nop
    ctx->pc = 0x3bf50cu;
    // NOP
label_3bf510:
    // 0x3bf510: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3bf510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3bf514:
    // 0x3bf514: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3bf518:
    if (ctx->pc == 0x3BF518u) {
        ctx->pc = 0x3BF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF514u;
        // 0x3bf518: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF51Cu;
        goto label_3bf51c;
    }
    ctx->pc = 0x3BF514u;
    {
        const bool branch_taken_0x3bf514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF514u;
        // 0x3bf518: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf514) {
            ctx->pc = 0x3BF528u;
            goto label_3bf528;
        }
    }
    ctx->pc = 0x3BF51Cu;
label_3bf51c:
    // 0x3bf51c: 0x1483006c  bne         $a0, $v1, . + 4 + (0x6C << 2)
label_3bf520:
    if (ctx->pc == 0x3BF520u) {
        ctx->pc = 0x3BF524u;
        goto label_3bf524;
    }
    ctx->pc = 0x3BF51Cu;
    {
        const bool branch_taken_0x3bf51c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf51c) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF524u;
label_3bf524:
    // 0x3bf524: 0x0  nop
    ctx->pc = 0x3bf524u;
    // NOP
label_3bf528:
    // 0x3bf528: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3bf528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3bf52c:
    // 0x3bf52c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_3bf530:
    if (ctx->pc == 0x3BF530u) {
        ctx->pc = 0x3BF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF52Cu;
        // 0x3bf530: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF534u;
        goto label_3bf534;
    }
    ctx->pc = 0x3BF52Cu;
    {
        const bool branch_taken_0x3bf52c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF52Cu;
        // 0x3bf530: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf52c) {
            ctx->pc = 0x3BF538u;
            goto label_3bf538;
        }
    }
    ctx->pc = 0x3BF534u;
label_3bf534:
    // 0x3bf534: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3bf534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bf538:
    // 0x3bf538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf53c:
    // 0x3bf53c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf540:
    // 0x3bf540: 0xc0efc40  jal         func_3BF100
label_3bf544:
    if (ctx->pc == 0x3BF544u) {
        ctx->pc = 0x3BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF540u;
        // 0x3bf544: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF548u;
        goto label_3bf548;
    }
    ctx->pc = 0x3BF540u;
    SET_GPR_U32(ctx, 31, 0x3BF548u);
    ctx->pc = 0x3BF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF540u;
    // 0x3bf544: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF100u, 0x3BF540u, 0x3BF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF548u;
label_3bf548:
    // 0x3bf548: 0x3c02c3a5  lui         $v0, 0xC3A5
    ctx->pc = 0x3bf548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50085 << 16));
label_3bf54c:
    // 0x3bf54c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3bf54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3bf550:
    // 0x3bf550: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3bf550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3bf554:
    // 0x3bf554: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3bf554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3bf558:
    // 0x3bf558: 0x3c02457b  lui         $v0, 0x457B
    ctx->pc = 0x3bf558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17787 << 16));
label_3bf55c:
    // 0x3bf55c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3bf55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3bf560:
    // 0x3bf560: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x3bf560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3bf564:
    // 0x3bf564: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3bf564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3bf568:
    // 0x3bf568: 0x3c0243a5  lui         $v0, 0x43A5
    ctx->pc = 0x3bf568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17317 << 16));
label_3bf56c:
    // 0x3bf56c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x3bf56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_3bf570:
    // 0x3bf570: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3bf570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3bf574:
    // 0x3bf574: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3bf574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3bf578:
    // 0x3bf578: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3bf578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3bf57c:
    // 0x3bf57c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3bf57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bf580:
    // 0x3bf580: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3bf580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bf584:
    // 0x3bf584: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bf584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3bf588:
    // 0x3bf588: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bf588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3bf58c:
    // 0x3bf58c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bf58cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3bf590:
    // 0x3bf590: 0xc0414ca  jal         func_105328
label_3bf594:
    if (ctx->pc == 0x3BF594u) {
        ctx->pc = 0x3BF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF590u;
        // 0x3bf594: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF598u;
        goto label_3bf598;
    }
    ctx->pc = 0x3BF590u;
    SET_GPR_U32(ctx, 31, 0x3BF598u);
    ctx->pc = 0x3BF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF590u;
    // 0x3bf594: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BF590u, 0x3BF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF598u;
label_3bf598:
    // 0x3bf598: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3bf598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3bf59c:
    // 0x3bf59c: 0x3c03457b  lui         $v1, 0x457B
    ctx->pc = 0x3bf59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17787 << 16));
label_3bf5a0:
    // 0x3bf5a0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3bf5a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3bf5a4:
    // 0x3bf5a4: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x3bf5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3bf5a8:
    // 0x3bf5a8: 0x3c0743a5  lui         $a3, 0x43A5
    ctx->pc = 0x3bf5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17317 << 16));
label_3bf5ac:
    // 0x3bf5ac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3bf5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_3bf5b0:
    // 0x3bf5b0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3bf5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3bf5b4:
    // 0x3bf5b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bf5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3bf5b8:
    // 0x3bf5b8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3bf5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3bf5bc:
    // 0x3bf5bc: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x3bf5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_3bf5c0:
    // 0x3bf5c0: 0x3c02c3a5  lui         $v0, 0xC3A5
    ctx->pc = 0x3bf5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50085 << 16));
label_3bf5c4:
    // 0x3bf5c4: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x3bf5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_3bf5c8:
    // 0x3bf5c8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x3bf5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_3bf5cc:
    // 0x3bf5cc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x3bf5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_3bf5d0:
    // 0x3bf5d0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3bf5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_3bf5d4:
    // 0x3bf5d4: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3bf5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3bf5d8:
    // 0x3bf5d8: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3bf5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3bf5dc:
    // 0x3bf5dc: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3bf5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bf5e0:
    // 0x3bf5e0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3bf5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bf5e4:
    // 0x3bf5e4: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bf5e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3bf5e8:
    // 0x3bf5e8: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bf5e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3bf5ec:
    // 0x3bf5ec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bf5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3bf5f0:
    // 0x3bf5f0: 0xc0414ca  jal         func_105328
label_3bf5f4:
    if (ctx->pc == 0x3BF5F4u) {
        ctx->pc = 0x3BF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5F0u;
        // 0x3bf5f4: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF5F8u;
        goto label_3bf5f8;
    }
    ctx->pc = 0x3BF5F0u;
    SET_GPR_U32(ctx, 31, 0x3BF5F8u);
    ctx->pc = 0x3BF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF5F0u;
    // 0x3bf5f4: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BF5F0u, 0x3BF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF5F8u;
label_3bf5f8:
    // 0x3bf5f8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3bf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3bf5fc:
    // 0x3bf5fc: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3bf5fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3bf600:
    // 0x3bf600: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bf600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3bf604:
    // 0x3bf604: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x3bf604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3bf608:
    // 0x3bf608: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3bf608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3bf60c:
    // 0x3bf60c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3bf60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf610:
    // 0x3bf610: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x3bf610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3bf614:
    // 0x3bf614: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3bf614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf618:
    // 0x3bf618: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bf618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf61c:
    // 0x3bf61c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3bf61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf620:
    // 0x3bf620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bf620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf624:
    // 0x3bf624: 0xc0efaa8  jal         func_3BEAA0
label_3bf628:
    if (ctx->pc == 0x3BF628u) {
        ctx->pc = 0x3BF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF624u;
        // 0x3bf628: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF62Cu;
        goto label_3bf62c;
    }
    ctx->pc = 0x3BF624u;
    SET_GPR_U32(ctx, 31, 0x3BF62Cu);
    ctx->pc = 0x3BF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF624u;
    // 0x3bf628: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEAA0u, 0x3BF624u, 0x3BF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF62Cu;
label_3bf62c:
    // 0x3bf62c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3bf62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf630:
    // 0x3bf630: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bf630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf634:
    // 0x3bf634: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3bf634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bf638:
    // 0x3bf638: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3bf638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3bf63c:
    // 0x3bf63c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3bf63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf640:
    // 0x3bf640: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x3bf640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3bf644:
    // 0x3bf644: 0xc0efaa8  jal         func_3BEAA0
label_3bf648:
    if (ctx->pc == 0x3BF648u) {
        ctx->pc = 0x3BF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF644u;
        // 0x3bf648: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF64Cu;
        goto label_3bf64c;
    }
    ctx->pc = 0x3BF644u;
    SET_GPR_U32(ctx, 31, 0x3BF64Cu);
    ctx->pc = 0x3BF648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF644u;
    // 0x3bf648: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEAA0u, 0x3BF644u, 0x3BF64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF64Cu;
label_3bf64c:
    // 0x3bf64c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x3bf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3bf650:
    // 0x3bf650: 0x240208c7  addiu       $v0, $zero, 0x8C7
    ctx->pc = 0x3bf650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
label_3bf654:
    // 0x3bf654: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_3bf658:
    if (ctx->pc == 0x3BF658u) {
        ctx->pc = 0x3BF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF654u;
        // 0x3bf658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF65Cu;
        goto label_3bf65c;
    }
    ctx->pc = 0x3BF654u;
    {
        const bool branch_taken_0x3bf654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF654u;
        // 0x3bf658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf654) {
            ctx->pc = 0x3BF6B0u;
            goto label_3bf6b0;
        }
    }
    ctx->pc = 0x3BF65Cu;
label_3bf65c:
    // 0x3bf65c: 0x27ab0130  addiu       $t3, $sp, 0x130
    ctx->pc = 0x3bf65cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3bf660:
    // 0x3bf660: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x3bf660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
label_3bf664:
    // 0x3bf664: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3bf664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_3bf668:
    // 0x3bf668: 0x24060d33  addiu       $a2, $zero, 0xD33
    ctx->pc = 0x3bf668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3379));
label_3bf66c:
    // 0x3bf66c: 0x2407122b  addiu       $a3, $zero, 0x122B
    ctx->pc = 0x3bf66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4651));
label_3bf670:
    // 0x3bf670: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3bf670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf674:
    // 0x3bf674: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3bf674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf678:
    // 0x3bf678: 0xc0d1ac8  jal         func_346B20
label_3bf67c:
    if (ctx->pc == 0x3BF67Cu) {
        ctx->pc = 0x3BF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF678u;
        // 0x3bf67c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF680u;
        goto label_3bf680;
    }
    ctx->pc = 0x3BF678u;
    SET_GPR_U32(ctx, 31, 0x3BF680u);
    ctx->pc = 0x3BF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF678u;
    // 0x3bf67c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346B20u, 0x3BF678u, 0x3BF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF680u;
label_3bf680:
    // 0x3bf680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bf680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf684:
    // 0x3bf684: 0x27ab0120  addiu       $t3, $sp, 0x120
    ctx->pc = 0x3bf684u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3bf688:
    // 0x3bf688: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x3bf688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
label_3bf68c:
    // 0x3bf68c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3bf68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_3bf690:
    // 0x3bf690: 0x24060d32  addiu       $a2, $zero, 0xD32
    ctx->pc = 0x3bf690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3378));
label_3bf694:
    // 0x3bf694: 0x2407122a  addiu       $a3, $zero, 0x122A
    ctx->pc = 0x3bf694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4650));
label_3bf698:
    // 0x3bf698: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3bf698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf69c:
    // 0x3bf69c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3bf69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6a0:
    // 0x3bf6a0: 0xc0d1ac8  jal         func_346B20
label_3bf6a4:
    if (ctx->pc == 0x3BF6A4u) {
        ctx->pc = 0x3BF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6A0u;
        // 0x3bf6a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6A8u;
        goto label_3bf6a8;
    }
    ctx->pc = 0x3BF6A0u;
    SET_GPR_U32(ctx, 31, 0x3BF6A8u);
    ctx->pc = 0x3BF6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF6A0u;
    // 0x3bf6a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346B20u, 0x3BF6A0u, 0x3BF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF6A8u;
label_3bf6a8:
    // 0x3bf6a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3bf6ac:
    if (ctx->pc == 0x3BF6ACu) {
        ctx->pc = 0x3BF6B0u;
        goto label_3bf6b0;
    }
    ctx->pc = 0x3BF6A8u;
    {
        const bool branch_taken_0x3bf6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf6a8) {
            ctx->pc = 0x3BF6D0u;
            goto label_3bf6d0;
        }
    }
    ctx->pc = 0x3BF6B0u;
label_3bf6b0:
    // 0x3bf6b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6b4:
    // 0x3bf6b4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3bf6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3bf6b8:
    // 0x3bf6b8: 0xc0ef4ac  jal         func_3BD2B0
label_3bf6bc:
    if (ctx->pc == 0x3BF6BCu) {
        ctx->pc = 0x3BF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6B8u;
        // 0x3bf6bc: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6C0u;
        goto label_3bf6c0;
    }
    ctx->pc = 0x3BF6B8u;
    SET_GPR_U32(ctx, 31, 0x3BF6C0u);
    ctx->pc = 0x3BF6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF6B8u;
    // 0x3bf6bc: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD2B0u, 0x3BF6B8u, 0x3BF6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF6C0u;
label_3bf6c0:
    // 0x3bf6c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6c4:
    // 0x3bf6c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3bf6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3bf6c8:
    // 0x3bf6c8: 0xc0ef4ac  jal         func_3BD2B0
label_3bf6cc:
    if (ctx->pc == 0x3BF6CCu) {
        ctx->pc = 0x3BF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6C8u;
        // 0x3bf6cc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6D0u;
        goto label_3bf6d0;
    }
    ctx->pc = 0x3BF6C8u;
    SET_GPR_U32(ctx, 31, 0x3BF6D0u);
    ctx->pc = 0x3BF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF6C8u;
    // 0x3bf6cc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD2B0u, 0x3BF6C8u, 0x3BF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF6D0u;
label_3bf6d0:
    // 0x3bf6d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bf6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3bf6d4:
    // 0x3bf6d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3bf6d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bf6d8:
    // 0x3bf6d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bf6d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bf6dc:
    // 0x3bf6dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bf6dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf6e0:
    // 0x3bf6e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bf6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf6e4:
    // 0x3bf6e4: 0x3e00008  jr          $ra
label_3bf6e8:
    if (ctx->pc == 0x3BF6E8u) {
        ctx->pc = 0x3BF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6E4u;
        // 0x3bf6e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF6ECu;
        goto label_fallthrough_0x3bf6e4;
    }
    ctx->pc = 0x3BF6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6E4u;
        // 0x3bf6e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bf6e4:
    ctx->pc = 0x3BF6ECu;
}
