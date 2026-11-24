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

// Function: sub_0038D130
// Address: 0x38d130 - 0x38d67c
void sub_0038D130_0x38d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D130_0x38d130");
#endif

    switch (ctx->pc) {
        case 0x38d130u: goto label_38d130;
        case 0x38d134u: goto label_38d134;
        case 0x38d138u: goto label_38d138;
        case 0x38d13cu: goto label_38d13c;
        case 0x38d140u: goto label_38d140;
        case 0x38d144u: goto label_38d144;
        case 0x38d148u: goto label_38d148;
        case 0x38d14cu: goto label_38d14c;
        case 0x38d150u: goto label_38d150;
        case 0x38d154u: goto label_38d154;
        case 0x38d158u: goto label_38d158;
        case 0x38d15cu: goto label_38d15c;
        case 0x38d160u: goto label_38d160;
        case 0x38d164u: goto label_38d164;
        case 0x38d168u: goto label_38d168;
        case 0x38d16cu: goto label_38d16c;
        case 0x38d170u: goto label_38d170;
        case 0x38d174u: goto label_38d174;
        case 0x38d178u: goto label_38d178;
        case 0x38d17cu: goto label_38d17c;
        case 0x38d180u: goto label_38d180;
        case 0x38d184u: goto label_38d184;
        case 0x38d188u: goto label_38d188;
        case 0x38d18cu: goto label_38d18c;
        case 0x38d190u: goto label_38d190;
        case 0x38d194u: goto label_38d194;
        case 0x38d198u: goto label_38d198;
        case 0x38d19cu: goto label_38d19c;
        case 0x38d1a0u: goto label_38d1a0;
        case 0x38d1a4u: goto label_38d1a4;
        case 0x38d1a8u: goto label_38d1a8;
        case 0x38d1acu: goto label_38d1ac;
        case 0x38d1b0u: goto label_38d1b0;
        case 0x38d1b4u: goto label_38d1b4;
        case 0x38d1b8u: goto label_38d1b8;
        case 0x38d1bcu: goto label_38d1bc;
        case 0x38d1c0u: goto label_38d1c0;
        case 0x38d1c4u: goto label_38d1c4;
        case 0x38d1c8u: goto label_38d1c8;
        case 0x38d1ccu: goto label_38d1cc;
        case 0x38d1d0u: goto label_38d1d0;
        case 0x38d1d4u: goto label_38d1d4;
        case 0x38d1d8u: goto label_38d1d8;
        case 0x38d1dcu: goto label_38d1dc;
        case 0x38d1e0u: goto label_38d1e0;
        case 0x38d1e4u: goto label_38d1e4;
        case 0x38d1e8u: goto label_38d1e8;
        case 0x38d1ecu: goto label_38d1ec;
        case 0x38d1f0u: goto label_38d1f0;
        case 0x38d1f4u: goto label_38d1f4;
        case 0x38d1f8u: goto label_38d1f8;
        case 0x38d1fcu: goto label_38d1fc;
        case 0x38d200u: goto label_38d200;
        case 0x38d204u: goto label_38d204;
        case 0x38d208u: goto label_38d208;
        case 0x38d20cu: goto label_38d20c;
        case 0x38d210u: goto label_38d210;
        case 0x38d214u: goto label_38d214;
        case 0x38d218u: goto label_38d218;
        case 0x38d21cu: goto label_38d21c;
        case 0x38d220u: goto label_38d220;
        case 0x38d224u: goto label_38d224;
        case 0x38d228u: goto label_38d228;
        case 0x38d22cu: goto label_38d22c;
        case 0x38d230u: goto label_38d230;
        case 0x38d234u: goto label_38d234;
        case 0x38d238u: goto label_38d238;
        case 0x38d23cu: goto label_38d23c;
        case 0x38d240u: goto label_38d240;
        case 0x38d244u: goto label_38d244;
        case 0x38d248u: goto label_38d248;
        case 0x38d24cu: goto label_38d24c;
        case 0x38d250u: goto label_38d250;
        case 0x38d254u: goto label_38d254;
        case 0x38d258u: goto label_38d258;
        case 0x38d25cu: goto label_38d25c;
        case 0x38d260u: goto label_38d260;
        case 0x38d264u: goto label_38d264;
        case 0x38d268u: goto label_38d268;
        case 0x38d26cu: goto label_38d26c;
        case 0x38d270u: goto label_38d270;
        case 0x38d274u: goto label_38d274;
        case 0x38d278u: goto label_38d278;
        case 0x38d27cu: goto label_38d27c;
        case 0x38d280u: goto label_38d280;
        case 0x38d284u: goto label_38d284;
        case 0x38d288u: goto label_38d288;
        case 0x38d28cu: goto label_38d28c;
        case 0x38d290u: goto label_38d290;
        case 0x38d294u: goto label_38d294;
        case 0x38d298u: goto label_38d298;
        case 0x38d29cu: goto label_38d29c;
        case 0x38d2a0u: goto label_38d2a0;
        case 0x38d2a4u: goto label_38d2a4;
        case 0x38d2a8u: goto label_38d2a8;
        case 0x38d2acu: goto label_38d2ac;
        case 0x38d2b0u: goto label_38d2b0;
        case 0x38d2b4u: goto label_38d2b4;
        case 0x38d2b8u: goto label_38d2b8;
        case 0x38d2bcu: goto label_38d2bc;
        case 0x38d2c0u: goto label_38d2c0;
        case 0x38d2c4u: goto label_38d2c4;
        case 0x38d2c8u: goto label_38d2c8;
        case 0x38d2ccu: goto label_38d2cc;
        case 0x38d2d0u: goto label_38d2d0;
        case 0x38d2d4u: goto label_38d2d4;
        case 0x38d2d8u: goto label_38d2d8;
        case 0x38d2dcu: goto label_38d2dc;
        case 0x38d2e0u: goto label_38d2e0;
        case 0x38d2e4u: goto label_38d2e4;
        case 0x38d2e8u: goto label_38d2e8;
        case 0x38d2ecu: goto label_38d2ec;
        case 0x38d2f0u: goto label_38d2f0;
        case 0x38d2f4u: goto label_38d2f4;
        case 0x38d2f8u: goto label_38d2f8;
        case 0x38d2fcu: goto label_38d2fc;
        case 0x38d300u: goto label_38d300;
        case 0x38d304u: goto label_38d304;
        case 0x38d308u: goto label_38d308;
        case 0x38d30cu: goto label_38d30c;
        case 0x38d310u: goto label_38d310;
        case 0x38d314u: goto label_38d314;
        case 0x38d318u: goto label_38d318;
        case 0x38d31cu: goto label_38d31c;
        case 0x38d320u: goto label_38d320;
        case 0x38d324u: goto label_38d324;
        case 0x38d328u: goto label_38d328;
        case 0x38d32cu: goto label_38d32c;
        case 0x38d330u: goto label_38d330;
        case 0x38d334u: goto label_38d334;
        case 0x38d338u: goto label_38d338;
        case 0x38d33cu: goto label_38d33c;
        case 0x38d340u: goto label_38d340;
        case 0x38d344u: goto label_38d344;
        case 0x38d348u: goto label_38d348;
        case 0x38d34cu: goto label_38d34c;
        case 0x38d350u: goto label_38d350;
        case 0x38d354u: goto label_38d354;
        case 0x38d358u: goto label_38d358;
        case 0x38d35cu: goto label_38d35c;
        case 0x38d360u: goto label_38d360;
        case 0x38d364u: goto label_38d364;
        case 0x38d368u: goto label_38d368;
        case 0x38d36cu: goto label_38d36c;
        case 0x38d370u: goto label_38d370;
        case 0x38d374u: goto label_38d374;
        case 0x38d378u: goto label_38d378;
        case 0x38d37cu: goto label_38d37c;
        case 0x38d380u: goto label_38d380;
        case 0x38d384u: goto label_38d384;
        case 0x38d388u: goto label_38d388;
        case 0x38d38cu: goto label_38d38c;
        case 0x38d390u: goto label_38d390;
        case 0x38d394u: goto label_38d394;
        case 0x38d398u: goto label_38d398;
        case 0x38d39cu: goto label_38d39c;
        case 0x38d3a0u: goto label_38d3a0;
        case 0x38d3a4u: goto label_38d3a4;
        case 0x38d3a8u: goto label_38d3a8;
        case 0x38d3acu: goto label_38d3ac;
        case 0x38d3b0u: goto label_38d3b0;
        case 0x38d3b4u: goto label_38d3b4;
        case 0x38d3b8u: goto label_38d3b8;
        case 0x38d3bcu: goto label_38d3bc;
        case 0x38d3c0u: goto label_38d3c0;
        case 0x38d3c4u: goto label_38d3c4;
        case 0x38d3c8u: goto label_38d3c8;
        case 0x38d3ccu: goto label_38d3cc;
        case 0x38d3d0u: goto label_38d3d0;
        case 0x38d3d4u: goto label_38d3d4;
        case 0x38d3d8u: goto label_38d3d8;
        case 0x38d3dcu: goto label_38d3dc;
        case 0x38d3e0u: goto label_38d3e0;
        case 0x38d3e4u: goto label_38d3e4;
        case 0x38d3e8u: goto label_38d3e8;
        case 0x38d3ecu: goto label_38d3ec;
        case 0x38d3f0u: goto label_38d3f0;
        case 0x38d3f4u: goto label_38d3f4;
        case 0x38d3f8u: goto label_38d3f8;
        case 0x38d3fcu: goto label_38d3fc;
        case 0x38d400u: goto label_38d400;
        case 0x38d404u: goto label_38d404;
        case 0x38d408u: goto label_38d408;
        case 0x38d40cu: goto label_38d40c;
        case 0x38d410u: goto label_38d410;
        case 0x38d414u: goto label_38d414;
        case 0x38d418u: goto label_38d418;
        case 0x38d41cu: goto label_38d41c;
        case 0x38d420u: goto label_38d420;
        case 0x38d424u: goto label_38d424;
        case 0x38d428u: goto label_38d428;
        case 0x38d42cu: goto label_38d42c;
        case 0x38d430u: goto label_38d430;
        case 0x38d434u: goto label_38d434;
        case 0x38d438u: goto label_38d438;
        case 0x38d43cu: goto label_38d43c;
        case 0x38d440u: goto label_38d440;
        case 0x38d444u: goto label_38d444;
        case 0x38d448u: goto label_38d448;
        case 0x38d44cu: goto label_38d44c;
        case 0x38d450u: goto label_38d450;
        case 0x38d454u: goto label_38d454;
        case 0x38d458u: goto label_38d458;
        case 0x38d45cu: goto label_38d45c;
        case 0x38d460u: goto label_38d460;
        case 0x38d464u: goto label_38d464;
        case 0x38d468u: goto label_38d468;
        case 0x38d46cu: goto label_38d46c;
        case 0x38d470u: goto label_38d470;
        case 0x38d474u: goto label_38d474;
        case 0x38d478u: goto label_38d478;
        case 0x38d47cu: goto label_38d47c;
        case 0x38d480u: goto label_38d480;
        case 0x38d484u: goto label_38d484;
        case 0x38d488u: goto label_38d488;
        case 0x38d48cu: goto label_38d48c;
        case 0x38d490u: goto label_38d490;
        case 0x38d494u: goto label_38d494;
        case 0x38d498u: goto label_38d498;
        case 0x38d49cu: goto label_38d49c;
        case 0x38d4a0u: goto label_38d4a0;
        case 0x38d4a4u: goto label_38d4a4;
        case 0x38d4a8u: goto label_38d4a8;
        case 0x38d4acu: goto label_38d4ac;
        case 0x38d4b0u: goto label_38d4b0;
        case 0x38d4b4u: goto label_38d4b4;
        case 0x38d4b8u: goto label_38d4b8;
        case 0x38d4bcu: goto label_38d4bc;
        case 0x38d4c0u: goto label_38d4c0;
        case 0x38d4c4u: goto label_38d4c4;
        case 0x38d4c8u: goto label_38d4c8;
        case 0x38d4ccu: goto label_38d4cc;
        case 0x38d4d0u: goto label_38d4d0;
        case 0x38d4d4u: goto label_38d4d4;
        case 0x38d4d8u: goto label_38d4d8;
        case 0x38d4dcu: goto label_38d4dc;
        case 0x38d4e0u: goto label_38d4e0;
        case 0x38d4e4u: goto label_38d4e4;
        case 0x38d4e8u: goto label_38d4e8;
        case 0x38d4ecu: goto label_38d4ec;
        case 0x38d4f0u: goto label_38d4f0;
        case 0x38d4f4u: goto label_38d4f4;
        case 0x38d4f8u: goto label_38d4f8;
        case 0x38d4fcu: goto label_38d4fc;
        case 0x38d500u: goto label_38d500;
        case 0x38d504u: goto label_38d504;
        case 0x38d508u: goto label_38d508;
        case 0x38d50cu: goto label_38d50c;
        case 0x38d510u: goto label_38d510;
        case 0x38d514u: goto label_38d514;
        case 0x38d518u: goto label_38d518;
        case 0x38d51cu: goto label_38d51c;
        case 0x38d520u: goto label_38d520;
        case 0x38d524u: goto label_38d524;
        case 0x38d528u: goto label_38d528;
        case 0x38d52cu: goto label_38d52c;
        case 0x38d530u: goto label_38d530;
        case 0x38d534u: goto label_38d534;
        case 0x38d538u: goto label_38d538;
        case 0x38d53cu: goto label_38d53c;
        case 0x38d540u: goto label_38d540;
        case 0x38d544u: goto label_38d544;
        case 0x38d548u: goto label_38d548;
        case 0x38d54cu: goto label_38d54c;
        case 0x38d550u: goto label_38d550;
        case 0x38d554u: goto label_38d554;
        case 0x38d558u: goto label_38d558;
        case 0x38d55cu: goto label_38d55c;
        case 0x38d560u: goto label_38d560;
        case 0x38d564u: goto label_38d564;
        case 0x38d568u: goto label_38d568;
        case 0x38d56cu: goto label_38d56c;
        case 0x38d570u: goto label_38d570;
        case 0x38d574u: goto label_38d574;
        case 0x38d578u: goto label_38d578;
        case 0x38d57cu: goto label_38d57c;
        case 0x38d580u: goto label_38d580;
        case 0x38d584u: goto label_38d584;
        case 0x38d588u: goto label_38d588;
        case 0x38d58cu: goto label_38d58c;
        case 0x38d590u: goto label_38d590;
        case 0x38d594u: goto label_38d594;
        case 0x38d598u: goto label_38d598;
        case 0x38d59cu: goto label_38d59c;
        case 0x38d5a0u: goto label_38d5a0;
        case 0x38d5a4u: goto label_38d5a4;
        case 0x38d5a8u: goto label_38d5a8;
        case 0x38d5acu: goto label_38d5ac;
        case 0x38d5b0u: goto label_38d5b0;
        case 0x38d5b4u: goto label_38d5b4;
        case 0x38d5b8u: goto label_38d5b8;
        case 0x38d5bcu: goto label_38d5bc;
        case 0x38d5c0u: goto label_38d5c0;
        case 0x38d5c4u: goto label_38d5c4;
        case 0x38d5c8u: goto label_38d5c8;
        case 0x38d5ccu: goto label_38d5cc;
        case 0x38d5d0u: goto label_38d5d0;
        case 0x38d5d4u: goto label_38d5d4;
        case 0x38d5d8u: goto label_38d5d8;
        case 0x38d5dcu: goto label_38d5dc;
        case 0x38d5e0u: goto label_38d5e0;
        case 0x38d5e4u: goto label_38d5e4;
        case 0x38d5e8u: goto label_38d5e8;
        case 0x38d5ecu: goto label_38d5ec;
        case 0x38d5f0u: goto label_38d5f0;
        case 0x38d5f4u: goto label_38d5f4;
        case 0x38d5f8u: goto label_38d5f8;
        case 0x38d5fcu: goto label_38d5fc;
        case 0x38d600u: goto label_38d600;
        case 0x38d604u: goto label_38d604;
        case 0x38d608u: goto label_38d608;
        case 0x38d60cu: goto label_38d60c;
        case 0x38d610u: goto label_38d610;
        case 0x38d614u: goto label_38d614;
        case 0x38d618u: goto label_38d618;
        case 0x38d61cu: goto label_38d61c;
        case 0x38d620u: goto label_38d620;
        case 0x38d624u: goto label_38d624;
        case 0x38d628u: goto label_38d628;
        case 0x38d62cu: goto label_38d62c;
        case 0x38d630u: goto label_38d630;
        case 0x38d634u: goto label_38d634;
        case 0x38d638u: goto label_38d638;
        case 0x38d63cu: goto label_38d63c;
        case 0x38d640u: goto label_38d640;
        case 0x38d644u: goto label_38d644;
        case 0x38d648u: goto label_38d648;
        case 0x38d64cu: goto label_38d64c;
        case 0x38d650u: goto label_38d650;
        case 0x38d654u: goto label_38d654;
        case 0x38d658u: goto label_38d658;
        case 0x38d65cu: goto label_38d65c;
        case 0x38d660u: goto label_38d660;
        case 0x38d664u: goto label_38d664;
        case 0x38d668u: goto label_38d668;
        case 0x38d66cu: goto label_38d66c;
        case 0x38d670u: goto label_38d670;
        case 0x38d674u: goto label_38d674;
        case 0x38d678u: goto label_38d678;
        default: break;
    }

    ctx->pc = 0x38d130u;

label_38d130:
    // 0x38d130: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x38d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_38d134:
    // 0x38d134: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x38d134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_38d138:
    // 0x38d138: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38d13c:
    // 0x38d13c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38d13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38d140:
    // 0x38d140: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38d144:
    // 0x38d144: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38d144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38d148:
    // 0x38d148: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_38d14c:
    // 0x38d14c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38d150:
    // 0x38d150: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x38d150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_38d154:
    // 0x38d154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38d158:
    // 0x38d158: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38d158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38d15c:
    // 0x38d15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38d160:
    // 0x38d160: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38d160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d164:
    // 0x38d164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d168:
    // 0x38d168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d16c:
    // 0x38d16c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x38d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38d170:
    // 0x38d170: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x38d170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_38d174:
    // 0x38d174: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38d174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_38d178:
    // 0x38d178: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38d178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d17c:
    // 0x38d17c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38d180:
    if (ctx->pc == 0x38D180u) {
        ctx->pc = 0x38D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D17Cu;
        // 0x38d180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D184u;
        goto label_38d184;
    }
    ctx->pc = 0x38D17Cu;
    {
        const bool branch_taken_0x38d17c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D17Cu;
        // 0x38d180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d17c) {
            ctx->pc = 0x38D194u;
            goto label_38d194;
        }
    }
    ctx->pc = 0x38D184u;
label_38d184:
    // 0x38d184: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d188:
    // 0x38d188: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x38d188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_38d18c:
    // 0x38d18c: 0x10000008  b           . + 4 + (0x8 << 2)
label_38d190:
    if (ctx->pc == 0x38D190u) {
        ctx->pc = 0x38D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D18Cu;
        // 0x38d190: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D194u;
        goto label_38d194;
    }
    ctx->pc = 0x38D18Cu;
    {
        const bool branch_taken_0x38d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D18Cu;
        // 0x38d190: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d18c) {
            ctx->pc = 0x38D1B0u;
            goto label_38d1b0;
        }
    }
    ctx->pc = 0x38D194u;
label_38d194:
    // 0x38d194: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38d194u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38d198:
    // 0x38d198: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38d19c:
    // 0x38d19c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d19cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d1a0:
    // 0x38d1a0: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x38d1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_38d1a4:
    // 0x38d1a4: 0x0  nop
    ctx->pc = 0x38d1a4u;
    // NOP
label_38d1a8:
    // 0x38d1a8: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x38d1a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_38d1ac:
    // 0x38d1ac: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x38d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_38d1b0:
    // 0x38d1b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38d1b4:
    // 0x38d1b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38d1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d1b8:
    // 0x38d1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d1bc:
    // 0x38d1bc: 0x0  nop
    ctx->pc = 0x38d1bcu;
    // NOP
label_38d1c0:
    // 0x38d1c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x38d1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_38d1c4:
    // 0x38d1c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38d1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d1c8:
    // 0x38d1c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38d1cc:
    if (ctx->pc == 0x38D1CCu) {
        ctx->pc = 0x38D1D0u;
        goto label_38d1d0;
    }
    ctx->pc = 0x38D1C8u;
    {
        const bool branch_taken_0x38d1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d1c8) {
            ctx->pc = 0x38D1E0u;
            goto label_38d1e0;
        }
    }
    ctx->pc = 0x38D1D0u;
label_38d1d0:
    // 0x38d1d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d1d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d1d4:
    // 0x38d1d4: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x38d1d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_38d1d8:
    // 0x38d1d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_38d1dc:
    if (ctx->pc == 0x38D1DCu) {
        ctx->pc = 0x38D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1D8u;
        // 0x38d1dc: 0x3c034140  lui         $v1, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D1E0u;
        goto label_38d1e0;
    }
    ctx->pc = 0x38D1D8u;
    {
        const bool branch_taken_0x38d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1D8u;
        // 0x38d1dc: 0x3c034140  lui         $v1, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1d8) {
            ctx->pc = 0x38D1FCu;
            goto label_38d1fc;
        }
    }
    ctx->pc = 0x38D1E0u;
label_38d1e0:
    // 0x38d1e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38d1e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38d1e4:
    // 0x38d1e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38d1e8:
    // 0x38d1e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d1ec:
    // 0x38d1ec: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x38d1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_38d1f0:
    // 0x38d1f0: 0x0  nop
    ctx->pc = 0x38d1f0u;
    // NOP
label_38d1f4:
    // 0x38d1f4: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x38d1f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_38d1f8:
    // 0x38d1f8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x38d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_38d1fc:
    // 0x38d1fc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_38d200:
    // 0x38d200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38d200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d204:
    // 0x38d204: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x38d204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_38d208:
    // 0x38d208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d20c:
    // 0x38d20c: 0x0  nop
    ctx->pc = 0x38d20cu;
    // NOP
label_38d210:
    // 0x38d210: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x38d210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_38d214:
    // 0x38d214: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38d218:
    // 0x38d218: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38d218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38d21c:
    // 0x38d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d220:
    // 0x38d220: 0x0  nop
    ctx->pc = 0x38d220u;
    // NOP
label_38d224:
    // 0x38d224: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38d224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d228:
    // 0x38d228: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38d22c:
    if (ctx->pc == 0x38D22Cu) {
        ctx->pc = 0x38D230u;
        goto label_38d230;
    }
    ctx->pc = 0x38D228u;
    {
        const bool branch_taken_0x38d228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d228) {
            ctx->pc = 0x38D240u;
            goto label_38d240;
        }
    }
    ctx->pc = 0x38D230u;
label_38d230:
    // 0x38d230: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d234:
    // 0x38d234: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x38d234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_38d238:
    // 0x38d238: 0x10000008  b           . + 4 + (0x8 << 2)
label_38d23c:
    if (ctx->pc == 0x38D23Cu) {
        ctx->pc = 0x38D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D238u;
        // 0x38d23c: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D240u;
        goto label_38d240;
    }
    ctx->pc = 0x38D238u;
    {
        const bool branch_taken_0x38d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D238u;
        // 0x38d23c: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d238) {
            ctx->pc = 0x38D25Cu;
            goto label_38d25c;
        }
    }
    ctx->pc = 0x38D240u;
label_38d240:
    // 0x38d240: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38d240u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38d244:
    // 0x38d244: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38d248:
    // 0x38d248: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d24c:
    // 0x38d24c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x38d24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_38d250:
    // 0x38d250: 0x0  nop
    ctx->pc = 0x38d250u;
    // NOP
label_38d254:
    // 0x38d254: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x38d254u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_38d258:
    // 0x38d258: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x38d258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_38d25c:
    // 0x38d25c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_38d260:
    // 0x38d260: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38d260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d264:
    // 0x38d264: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x38d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_38d268:
    // 0x38d268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d26c:
    // 0x38d26c: 0x0  nop
    ctx->pc = 0x38d26cu;
    // NOP
label_38d270:
    // 0x38d270: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x38d270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_38d274:
    // 0x38d274: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38d278:
    // 0x38d278: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38d278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38d27c:
    // 0x38d27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d280:
    // 0x38d280: 0x0  nop
    ctx->pc = 0x38d280u;
    // NOP
label_38d284:
    // 0x38d284: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38d284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d288:
    // 0x38d288: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38d28c:
    if (ctx->pc == 0x38D28Cu) {
        ctx->pc = 0x38D290u;
        goto label_38d290;
    }
    ctx->pc = 0x38D288u;
    {
        const bool branch_taken_0x38d288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d288) {
            ctx->pc = 0x38D2A0u;
            goto label_38d2a0;
        }
    }
    ctx->pc = 0x38D290u;
label_38d290:
    // 0x38d290: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d294:
    // 0x38d294: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x38d294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_38d298:
    // 0x38d298: 0x10000008  b           . + 4 + (0x8 << 2)
label_38d29c:
    if (ctx->pc == 0x38D29Cu) {
        ctx->pc = 0x38D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D298u;
        // 0x38d29c: 0x861100c2  lh          $s1, 0xC2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2A0u;
        goto label_38d2a0;
    }
    ctx->pc = 0x38D298u;
    {
        const bool branch_taken_0x38d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D298u;
        // 0x38d29c: 0x861100c2  lh          $s1, 0xC2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d298) {
            ctx->pc = 0x38D2BCu;
            goto label_38d2bc;
        }
    }
    ctx->pc = 0x38D2A0u;
label_38d2a0:
    // 0x38d2a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38d2a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38d2a4:
    // 0x38d2a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38d2a8:
    // 0x38d2a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d2a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38d2ac:
    // 0x38d2ac: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x38d2acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_38d2b0:
    // 0x38d2b0: 0x0  nop
    ctx->pc = 0x38d2b0u;
    // NOP
label_38d2b4:
    // 0x38d2b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x38d2b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_38d2b8:
    // 0x38d2b8: 0x861100c2  lh          $s1, 0xC2($s0)
    ctx->pc = 0x38d2b8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
label_38d2bc:
    // 0x38d2bc: 0xc0e2d08  jal         func_38B420
label_38d2c0:
    if (ctx->pc == 0x38D2C0u) {
        ctx->pc = 0x38D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2BCu;
        // 0x38d2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2C4u;
        goto label_38d2c4;
    }
    ctx->pc = 0x38D2BCu;
    SET_GPR_U32(ctx, 31, 0x38D2C4u);
    ctx->pc = 0x38D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D2BCu;
    // 0x38d2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x38D2BCu, 0x38D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D2C4u;
label_38d2c4:
    // 0x38d2c4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x38d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_38d2c8:
    // 0x38d2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38d2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38d2cc:
    // 0x38d2cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x38d2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_38d2d0:
    // 0x38d2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d2d4:
    // 0x38d2d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x38d2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d2d8:
    // 0x38d2d8: 0xc0e2cd4  jal         func_38B350
label_38d2dc:
    if (ctx->pc == 0x38D2DCu) {
        ctx->pc = 0x38D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2D8u;
        // 0x38d2dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2E0u;
        goto label_38d2e0;
    }
    ctx->pc = 0x38D2D8u;
    SET_GPR_U32(ctx, 31, 0x38D2E0u);
    ctx->pc = 0x38D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D2D8u;
    // 0x38d2dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B350u, 0x38D2D8u, 0x38D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D2E0u;
label_38d2e0:
    // 0x38d2e0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x38d2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_38d2e4:
    // 0x38d2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d2e8:
    // 0x38d2e8: 0xc0e2df4  jal         func_38B7D0
label_38d2ec:
    if (ctx->pc == 0x38D2ECu) {
        ctx->pc = 0x38D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2E8u;
        // 0x38d2ec: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2F0u;
        goto label_38d2f0;
    }
    ctx->pc = 0x38D2E8u;
    SET_GPR_U32(ctx, 31, 0x38D2F0u);
    ctx->pc = 0x38D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D2E8u;
    // 0x38d2ec: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B7D0u, 0x38D2E8u, 0x38D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D2F0u;
label_38d2f0:
    // 0x38d2f0: 0x92030119  lbu         $v1, 0x119($s0)
    ctx->pc = 0x38d2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38d2f4:
    // 0x38d2f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38d2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d2f8:
    // 0x38d2f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38d2fc:
    // 0x38d2fc: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
label_38d300:
    if (ctx->pc == 0x38D300u) {
        ctx->pc = 0x38D304u;
        goto label_38d304;
    }
    ctx->pc = 0x38D2FCu;
    {
        const bool branch_taken_0x38d2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38d2fc) {
            ctx->pc = 0x38D5C0u;
            goto label_38d5c0;
        }
    }
    ctx->pc = 0x38D304u;
label_38d304:
    // 0x38d304: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38d308:
    // 0x38d308: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
label_38d30c:
    if (ctx->pc == 0x38D30Cu) {
        ctx->pc = 0x38D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D308u;
        // 0x38d30c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D310u;
        goto label_38d310;
    }
    ctx->pc = 0x38D308u;
    {
        const bool branch_taken_0x38d308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D308u;
        // 0x38d30c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d308) {
            ctx->pc = 0x38D480u;
            goto label_38d480;
        }
    }
    ctx->pc = 0x38D310u;
label_38d310:
    // 0x38d310: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_38d314:
    if (ctx->pc == 0x38D314u) {
        ctx->pc = 0x38D318u;
        goto label_38d318;
    }
    ctx->pc = 0x38D310u;
    {
        const bool branch_taken_0x38d310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38d310) {
            ctx->pc = 0x38D3B0u;
            goto label_38d3b0;
        }
    }
    ctx->pc = 0x38D318u;
label_38d318:
    // 0x38d318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d31c:
    // 0x38d31c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_38d320:
    if (ctx->pc == 0x38D320u) {
        ctx->pc = 0x38D324u;
        goto label_38d324;
    }
    ctx->pc = 0x38D31Cu;
    {
        const bool branch_taken_0x38d31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38d31c) {
            ctx->pc = 0x38D360u;
            goto label_38d360;
        }
    }
    ctx->pc = 0x38D324u;
label_38d324:
    // 0x38d324: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_38d328:
    if (ctx->pc == 0x38D328u) {
        ctx->pc = 0x38D32Cu;
        goto label_38d32c;
    }
    ctx->pc = 0x38D324u;
    {
        const bool branch_taken_0x38d324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d324) {
            ctx->pc = 0x38D338u;
            goto label_38d338;
        }
    }
    ctx->pc = 0x38D32Cu;
label_38d32c:
    // 0x38d32c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_38d330:
    if (ctx->pc == 0x38D330u) {
        ctx->pc = 0x38D334u;
        goto label_38d334;
    }
    ctx->pc = 0x38D32Cu;
    {
        const bool branch_taken_0x38d32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d32c) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D334u;
label_38d334:
    // 0x38d334: 0x0  nop
    ctx->pc = 0x38d334u;
    // NOP
label_38d338:
    // 0x38d338: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38d338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38d33c:
    // 0x38d33c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x38d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_38d340:
    // 0x38d340: 0x24060440  addiu       $a2, $zero, 0x440
    ctx->pc = 0x38d340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_38d344:
    // 0x38d344: 0xc0d165c  jal         func_345970
label_38d348:
    if (ctx->pc == 0x38D348u) {
        ctx->pc = 0x38D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D344u;
        // 0x38d348: 0x34450f20  ori         $a1, $v0, 0xF20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3872);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D34Cu;
        goto label_38d34c;
    }
    ctx->pc = 0x38D344u;
    SET_GPR_U32(ctx, 31, 0x38D34Cu);
    ctx->pc = 0x38D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D344u;
    // 0x38d348: 0x34450f20  ori         $a1, $v0, 0xF20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3872);
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38D344u, 0x38D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D34Cu;
label_38d34c:
    // 0x38d34c: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38d34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38d350:
    // 0x38d350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d354:
    // 0x38d354: 0x100000be  b           . + 4 + (0xBE << 2)
label_38d358:
    if (ctx->pc == 0x38D358u) {
        ctx->pc = 0x38D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D354u;
        // 0x38d358: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D35Cu;
        goto label_38d35c;
    }
    ctx->pc = 0x38D354u;
    {
        const bool branch_taken_0x38d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D354u;
        // 0x38d358: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d354) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D35Cu;
label_38d35c:
    // 0x38d35c: 0x0  nop
    ctx->pc = 0x38d35cu;
    // NOP
label_38d360:
    // 0x38d360: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38d364:
    // 0x38d364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38d364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38d368:
    // 0x38d368: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38d368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38d36c:
    // 0x38d36c: 0x320f809  jalr        $t9
label_38d370:
    if (ctx->pc == 0x38D370u) {
        ctx->pc = 0x38D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D36Cu;
        // 0x38d370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D374u;
        goto label_38d374;
    }
    ctx->pc = 0x38D36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D374u);
        ctx->pc = 0x38D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D36Cu;
        // 0x38d370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D36Cu, 0x38D374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D374u;
label_38d374:
    // 0x38d374: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_38d378:
    if (ctx->pc == 0x38D378u) {
        ctx->pc = 0x38D37Cu;
        goto label_38d37c;
    }
    ctx->pc = 0x38D374u;
    {
        const bool branch_taken_0x38d374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d374) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D37Cu;
label_38d37c:
    // 0x38d37c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38d380:
    // 0x38d380: 0x24050f21  addiu       $a1, $zero, 0xF21
    ctx->pc = 0x38d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3873));
label_38d384:
    // 0x38d384: 0xc0d165c  jal         func_345970
label_38d388:
    if (ctx->pc == 0x38D388u) {
        ctx->pc = 0x38D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D384u;
        // 0x38d388: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D38Cu;
        goto label_38d38c;
    }
    ctx->pc = 0x38D384u;
    SET_GPR_U32(ctx, 31, 0x38D38Cu);
    ctx->pc = 0x38D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D384u;
    // 0x38d388: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38D384u, 0x38D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D38Cu;
label_38d38c:
    // 0x38d38c: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d390:
    // 0x38d390: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x38d390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38d394:
    // 0x38d394: 0xc0d0ae8  jal         func_342BA0
label_38d398:
    if (ctx->pc == 0x38D398u) {
        ctx->pc = 0x38D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D394u;
        // 0x38d398: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D39Cu;
        goto label_38d39c;
    }
    ctx->pc = 0x38D394u;
    SET_GPR_U32(ctx, 31, 0x38D39Cu);
    ctx->pc = 0x38D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D394u;
    // 0x38d398: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38D394u, 0x38D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D39Cu;
label_38d39c:
    // 0x38d39c: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38d39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38d3a0:
    // 0x38d3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d3a4:
    // 0x38d3a4: 0x100000aa  b           . + 4 + (0xAA << 2)
label_38d3a8:
    if (ctx->pc == 0x38D3A8u) {
        ctx->pc = 0x38D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3A4u;
        // 0x38d3a8: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3ACu;
        goto label_38d3ac;
    }
    ctx->pc = 0x38D3A4u;
    {
        const bool branch_taken_0x38d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3A4u;
        // 0x38d3a8: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d3a4) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D3ACu;
label_38d3ac:
    // 0x38d3ac: 0x0  nop
    ctx->pc = 0x38d3acu;
    // NOP
label_38d3b0:
    // 0x38d3b0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d3b4:
    // 0x38d3b4: 0xc0d0b00  jal         func_342C00
label_38d3b8:
    if (ctx->pc == 0x38D3B8u) {
        ctx->pc = 0x38D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3B4u;
        // 0x38d3b8: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3BCu;
        goto label_38d3bc;
    }
    ctx->pc = 0x38D3B4u;
    SET_GPR_U32(ctx, 31, 0x38D3BCu);
    ctx->pc = 0x38D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D3B4u;
    // 0x38d3b8: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38D3B4u, 0x38D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D3BCu;
label_38d3bc:
    // 0x38d3bc: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d3c0:
    // 0x38d3c0: 0xc0d0af4  jal         func_342BD0
label_38d3c4:
    if (ctx->pc == 0x38D3C4u) {
        ctx->pc = 0x38D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3C0u;
        // 0x38d3c4: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3C8u;
        goto label_38d3c8;
    }
    ctx->pc = 0x38D3C0u;
    SET_GPR_U32(ctx, 31, 0x38D3C8u);
    ctx->pc = 0x38D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D3C0u;
    // 0x38d3c4: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38D3C0u, 0x38D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D3C8u;
label_38d3c8:
    // 0x38d3c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38d3cc:
    if (ctx->pc == 0x38D3CCu) {
        ctx->pc = 0x38D3D0u;
        goto label_38d3d0;
    }
    ctx->pc = 0x38D3C8u;
    {
        const bool branch_taken_0x38d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d3c8) {
            ctx->pc = 0x38D3F0u;
            goto label_38d3f0;
        }
    }
    ctx->pc = 0x38D3D0u;
label_38d3d0:
    // 0x38d3d0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d3d4:
    // 0x38d3d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38d3d8:
    // 0x38d3d8: 0xc0d0ae8  jal         func_342BA0
label_38d3dc:
    if (ctx->pc == 0x38D3DCu) {
        ctx->pc = 0x38D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3D8u;
        // 0x38d3dc: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3E0u;
        goto label_38d3e0;
    }
    ctx->pc = 0x38D3D8u;
    SET_GPR_U32(ctx, 31, 0x38D3E0u);
    ctx->pc = 0x38D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D3D8u;
    // 0x38d3dc: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38D3D8u, 0x38D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D3E0u;
label_38d3e0:
    // 0x38d3e0: 0xa6132aca  sh          $s3, 0x2ACA($s0)
    ctx->pc = 0x38d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 19));
label_38d3e4:
    // 0x38d3e4: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38d3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38d3e8:
    // 0x38d3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d3ec:
    // 0x38d3ec: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x38d3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
label_38d3f0:
    // 0x38d3f0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x38d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38d3f4:
    // 0x38d3f4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x38d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_38d3f8:
    // 0x38d3f8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x38d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38d3fc:
    // 0x38d3fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x38d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_38d400:
    // 0x38d400: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38d404:
    // 0x38d404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38d404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d408:
    // 0x38d408: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x38d408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38d40c:
    // 0x38d40c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x38d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d410:
    // 0x38d410: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x38d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38d414:
    // 0x38d414: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x38d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d418:
    // 0x38d418: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x38d418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_38d41c:
    // 0x38d41c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x38d41cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_38d420:
    // 0x38d420: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x38d420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_38d424:
    // 0x38d424: 0xc0414dc  jal         func_105370
label_38d428:
    if (ctx->pc == 0x38D428u) {
        ctx->pc = 0x38D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D424u;
        // 0x38d428: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D42Cu;
        goto label_38d42c;
    }
    ctx->pc = 0x38D424u;
    SET_GPR_U32(ctx, 31, 0x38D42Cu);
    ctx->pc = 0x38D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D424u;
    // 0x38d428: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x38D424u, 0x38D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D42Cu;
label_38d42c:
    // 0x38d42c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x38d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38d430:
    // 0x38d430: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x38d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_38d434:
    // 0x38d434: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38d434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38d438:
    // 0x38d438: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x38d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_38d43c:
    // 0x38d43c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x38d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_38d440:
    // 0x38d440: 0xc0414d0  jal         func_105340
label_38d444:
    if (ctx->pc == 0x38D444u) {
        ctx->pc = 0x38D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D440u;
        // 0x38d444: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D448u;
        goto label_38d448;
    }
    ctx->pc = 0x38D440u;
    SET_GPR_U32(ctx, 31, 0x38D448u);
    ctx->pc = 0x38D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D440u;
    // 0x38d444: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x38D440u, 0x38D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D448u;
label_38d448:
    // 0x38d448: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x38d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_38d44c:
    // 0x38d44c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x38d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_38d450:
    // 0x38d450: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38d450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38d454:
    // 0x38d454: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x38d454u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_38d458:
    // 0x38d458: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x38d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38d45c:
    // 0x38d45c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x38d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d460:
    // 0x38d460: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38d464:
    // 0x38d464: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d468:
    // 0x38d468: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x38d468u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_38d46c:
    // 0x38d46c: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x38d46cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_38d470:
    // 0x38d470: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x38d470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_38d474:
    // 0x38d474: 0x10000076  b           . + 4 + (0x76 << 2)
label_38d478:
    if (ctx->pc == 0x38D478u) {
        ctx->pc = 0x38D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D474u;
        // 0x38d478: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D47Cu;
        goto label_38d47c;
    }
    ctx->pc = 0x38D474u;
    {
        const bool branch_taken_0x38d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D474u;
        // 0x38d478: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d474) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D47Cu;
label_38d47c:
    // 0x38d47c: 0x0  nop
    ctx->pc = 0x38d47cu;
    // NOP
label_38d480:
    // 0x38d480: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x38d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_38d484:
    // 0x38d484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38d484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d488:
    // 0x38d488: 0xc0d051c  jal         func_341470
label_38d48c:
    if (ctx->pc == 0x38D48Cu) {
        ctx->pc = 0x38D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D488u;
        // 0x38d48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D490u;
        goto label_38d490;
    }
    ctx->pc = 0x38D488u;
    SET_GPR_U32(ctx, 31, 0x38D490u);
    ctx->pc = 0x38D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D488u;
    // 0x38d48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341470u, 0x38D488u, 0x38D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D490u;
label_38d490:
    // 0x38d490: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38d494:
    if (ctx->pc == 0x38D494u) {
        ctx->pc = 0x38D498u;
        goto label_38d498;
    }
    ctx->pc = 0x38D490u;
    {
        const bool branch_taken_0x38d490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d490) {
            ctx->pc = 0x38D4A0u;
            goto label_38d4a0;
        }
    }
    ctx->pc = 0x38D498u;
label_38d498:
    // 0x38d498: 0x1000006f  b           . + 4 + (0x6F << 2)
label_38d49c:
    if (ctx->pc == 0x38D49Cu) {
        ctx->pc = 0x38D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D498u;
        // 0x38d49c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4A0u;
        goto label_38d4a0;
    }
    ctx->pc = 0x38D498u;
    {
        const bool branch_taken_0x38d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D498u;
        // 0x38d49c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d498) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D4A0u;
label_38d4a0:
    // 0x38d4a0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_38d4a4:
    if (ctx->pc == 0x38D4A4u) {
        ctx->pc = 0x38D4A8u;
        goto label_38d4a8;
    }
    ctx->pc = 0x38D4A0u;
    {
        const bool branch_taken_0x38d4a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d4a0) {
            ctx->pc = 0x38D4E8u;
            goto label_38d4e8;
        }
    }
    ctx->pc = 0x38D4A8u;
label_38d4a8:
    // 0x38d4a8: 0x86022aca  lh          $v0, 0x2ACA($s0)
    ctx->pc = 0x38d4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
label_38d4ac:
    // 0x38d4ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38d4b0:
    // 0x38d4b0: 0xa6022aca  sh          $v0, 0x2ACA($s0)
    ctx->pc = 0x38d4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 2));
label_38d4b4:
    // 0x38d4b4: 0x86022aca  lh          $v0, 0x2ACA($s0)
    ctx->pc = 0x38d4b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
label_38d4b8:
    // 0x38d4b8: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
label_38d4bc:
    if (ctx->pc == 0x38D4BCu) {
        ctx->pc = 0x38D4C0u;
        goto label_38d4c0;
    }
    ctx->pc = 0x38D4B8u;
    {
        const bool branch_taken_0x38d4b8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x38d4b8) {
            ctx->pc = 0x38D578u;
            goto label_38d578;
        }
    }
    ctx->pc = 0x38D4C0u;
label_38d4c0:
    // 0x38d4c0: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38d4c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38d4c4:
    // 0x38d4c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38d4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38d4c8:
    // 0x38d4c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d4cc:
    // 0x38d4cc: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x38d4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
label_38d4d0:
    // 0x38d4d0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d4d4:
    // 0x38d4d4: 0xc0d0ae8  jal         func_342BA0
label_38d4d8:
    if (ctx->pc == 0x38D4D8u) {
        ctx->pc = 0x38D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4D4u;
        // 0x38d4d8: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4DCu;
        goto label_38d4dc;
    }
    ctx->pc = 0x38D4D4u;
    SET_GPR_U32(ctx, 31, 0x38D4DCu);
    ctx->pc = 0x38D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D4D4u;
    // 0x38d4d8: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38D4D4u, 0x38D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D4DCu;
label_38d4dc:
    // 0x38d4dc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_38d4e0:
    if (ctx->pc == 0x38D4E0u) {
        ctx->pc = 0x38D4E4u;
        goto label_38d4e4;
    }
    ctx->pc = 0x38D4DCu;
    {
        const bool branch_taken_0x38d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d4dc) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D4E4u;
label_38d4e4:
    // 0x38d4e4: 0x0  nop
    ctx->pc = 0x38d4e4u;
    // NOP
label_38d4e8:
    // 0x38d4e8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x38d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38d4ec:
    // 0x38d4ec: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x38d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_38d4f0:
    // 0x38d4f0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x38d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38d4f4:
    // 0x38d4f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x38d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_38d4f8:
    // 0x38d4f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38d4fc:
    // 0x38d4fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38d4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d500:
    // 0x38d500: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x38d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38d504:
    // 0x38d504: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x38d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d508:
    // 0x38d508: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x38d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38d50c:
    // 0x38d50c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x38d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d510:
    // 0x38d510: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x38d510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_38d514:
    // 0x38d514: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x38d514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_38d518:
    // 0x38d518: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x38d518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_38d51c:
    // 0x38d51c: 0xc0414dc  jal         func_105370
label_38d520:
    if (ctx->pc == 0x38D520u) {
        ctx->pc = 0x38D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D51Cu;
        // 0x38d520: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D524u;
        goto label_38d524;
    }
    ctx->pc = 0x38D51Cu;
    SET_GPR_U32(ctx, 31, 0x38D524u);
    ctx->pc = 0x38D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D51Cu;
    // 0x38d520: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x38D51Cu, 0x38D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D524u;
label_38d524:
    // 0x38d524: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x38d524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38d528:
    // 0x38d528: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x38d528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38d52c:
    // 0x38d52c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38d52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38d530:
    // 0x38d530: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38d530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38d534:
    // 0x38d534: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x38d534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_38d538:
    // 0x38d538: 0xc0414d0  jal         func_105340
label_38d53c:
    if (ctx->pc == 0x38D53Cu) {
        ctx->pc = 0x38D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D538u;
        // 0x38d53c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D540u;
        goto label_38d540;
    }
    ctx->pc = 0x38D538u;
    SET_GPR_U32(ctx, 31, 0x38D540u);
    ctx->pc = 0x38D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D538u;
    // 0x38d53c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x38D538u, 0x38D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D540u;
label_38d540:
    // 0x38d540: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x38d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38d544:
    // 0x38d544: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x38d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38d548:
    // 0x38d548: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38d548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38d54c:
    // 0x38d54c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x38d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_38d550:
    // 0x38d550: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x38d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38d554:
    // 0x38d554: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x38d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d558:
    // 0x38d558: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38d55c:
    // 0x38d55c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38d55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d560:
    // 0x38d560: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x38d560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_38d564:
    // 0x38d564: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x38d564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_38d568:
    // 0x38d568: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x38d568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_38d56c:
    // 0x38d56c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x38d56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_38d570:
    // 0x38d570: 0xa6132aca  sh          $s3, 0x2ACA($s0)
    ctx->pc = 0x38d570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10954), (uint16_t)GPR_U32(ctx, 19));
label_38d574:
    // 0x38d574: 0x0  nop
    ctx->pc = 0x38d574u;
    // NOP
label_38d578:
    // 0x38d578: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d57c:
    // 0x38d57c: 0xc0d0b00  jal         func_342C00
label_38d580:
    if (ctx->pc == 0x38D580u) {
        ctx->pc = 0x38D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D57Cu;
        // 0x38d580: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D584u;
        goto label_38d584;
    }
    ctx->pc = 0x38D57Cu;
    SET_GPR_U32(ctx, 31, 0x38D584u);
    ctx->pc = 0x38D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D57Cu;
    // 0x38d580: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38D57Cu, 0x38D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D584u;
label_38d584:
    // 0x38d584: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d588:
    // 0x38d588: 0xc0d0af4  jal         func_342BD0
label_38d58c:
    if (ctx->pc == 0x38D58Cu) {
        ctx->pc = 0x38D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D588u;
        // 0x38d58c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D590u;
        goto label_38d590;
    }
    ctx->pc = 0x38D588u;
    SET_GPR_U32(ctx, 31, 0x38D590u);
    ctx->pc = 0x38D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D588u;
    // 0x38d58c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38D588u, 0x38D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D590u;
label_38d590:
    // 0x38d590: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_38d594:
    if (ctx->pc == 0x38D594u) {
        ctx->pc = 0x38D598u;
        goto label_38d598;
    }
    ctx->pc = 0x38D590u;
    {
        const bool branch_taken_0x38d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d590) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D598u;
label_38d598:
    // 0x38d598: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38d598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38d59c:
    // 0x38d59c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38d59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38d5a0:
    // 0x38d5a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38d5a4:
    // 0x38d5a4: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x38d5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
label_38d5a8:
    // 0x38d5a8: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d5ac:
    // 0x38d5ac: 0xc0d0ae8  jal         func_342BA0
label_38d5b0:
    if (ctx->pc == 0x38D5B0u) {
        ctx->pc = 0x38D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5ACu;
        // 0x38d5b0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5B4u;
        goto label_38d5b4;
    }
    ctx->pc = 0x38D5ACu;
    SET_GPR_U32(ctx, 31, 0x38D5B4u);
    ctx->pc = 0x38D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5ACu;
    // 0x38d5b0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38D5ACu, 0x38D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5B4u;
label_38d5b4:
    // 0x38d5b4: 0x10000026  b           . + 4 + (0x26 << 2)
label_38d5b8:
    if (ctx->pc == 0x38D5B8u) {
        ctx->pc = 0x38D5BCu;
        goto label_38d5bc;
    }
    ctx->pc = 0x38D5B4u;
    {
        const bool branch_taken_0x38d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d5b4) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D5BCu;
label_38d5bc:
    // 0x38d5bc: 0x0  nop
    ctx->pc = 0x38d5bcu;
    // NOP
label_38d5c0:
    // 0x38d5c0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x38d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_38d5c4:
    // 0x38d5c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38d5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d5c8:
    // 0x38d5c8: 0xc0d051c  jal         func_341470
label_38d5cc:
    if (ctx->pc == 0x38D5CCu) {
        ctx->pc = 0x38D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5C8u;
        // 0x38d5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5D0u;
        goto label_38d5d0;
    }
    ctx->pc = 0x38D5C8u;
    SET_GPR_U32(ctx, 31, 0x38D5D0u);
    ctx->pc = 0x38D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D5C8u;
    // 0x38d5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341470u, 0x38D5C8u, 0x38D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D5D0u;
label_38d5d0:
    // 0x38d5d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38d5d4:
    if (ctx->pc == 0x38D5D4u) {
        ctx->pc = 0x38D5D8u;
        goto label_38d5d8;
    }
    ctx->pc = 0x38D5D0u;
    {
        const bool branch_taken_0x38d5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d5d0) {
            ctx->pc = 0x38D5E0u;
            goto label_38d5e0;
        }
    }
    ctx->pc = 0x38D5D8u;
label_38d5d8:
    // 0x38d5d8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_38d5dc:
    if (ctx->pc == 0x38D5DCu) {
        ctx->pc = 0x38D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5D8u;
        // 0x38d5dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D5E0u;
        goto label_38d5e0;
    }
    ctx->pc = 0x38D5D8u;
    {
        const bool branch_taken_0x38d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5D8u;
        // 0x38d5dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d5d8) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D5E0u;
label_38d5e0:
    // 0x38d5e0: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x38d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d5e4:
    // 0x38d5e4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x38d5e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d5e8:
    // 0x38d5e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x38d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_38d5ec:
    // 0x38d5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38d5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d5f0:
    // 0x38d5f0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x38d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_38d5f4:
    // 0x38d5f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x38d5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38d5f8:
    // 0x38d5f8: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x38d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d5fc:
    // 0x38d5fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x38d5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_38d600:
    // 0x38d600: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x38d600u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_38d604:
    // 0x38d604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38d604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38d608:
    // 0x38d608: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38d60c:
    // 0x38d60c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38d60cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_38d610:
    // 0x38d610: 0x0  nop
    ctx->pc = 0x38d610u;
    // NOP
label_38d614:
    // 0x38d614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38d618:
    // 0x38d618: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38d618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_38d61c:
    // 0x38d61c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38d61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38d620:
    // 0x38d620: 0xc0a85ec  jal         func_2A17B0
label_38d624:
    if (ctx->pc == 0x38D624u) {
        ctx->pc = 0x38D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D620u;
        // 0x38d624: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D628u;
        goto label_38d628;
    }
    ctx->pc = 0x38D620u;
    SET_GPR_U32(ctx, 31, 0x38D628u);
    ctx->pc = 0x38D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D620u;
    // 0x38d624: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x38D620u, 0x38D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D628u;
label_38d628:
    // 0x38d628: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d62c:
    // 0x38d62c: 0xc0d0b00  jal         func_342C00
label_38d630:
    if (ctx->pc == 0x38D630u) {
        ctx->pc = 0x38D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D62Cu;
        // 0x38d630: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D634u;
        goto label_38d634;
    }
    ctx->pc = 0x38D62Cu;
    SET_GPR_U32(ctx, 31, 0x38D634u);
    ctx->pc = 0x38D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D62Cu;
    // 0x38d630: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38D62Cu, 0x38D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D634u;
label_38d634:
    // 0x38d634: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38d638:
    // 0x38d638: 0xc0d0af4  jal         func_342BD0
label_38d63c:
    if (ctx->pc == 0x38D63Cu) {
        ctx->pc = 0x38D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D638u;
        // 0x38d63c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D640u;
        goto label_38d640;
    }
    ctx->pc = 0x38D638u;
    SET_GPR_U32(ctx, 31, 0x38D640u);
    ctx->pc = 0x38D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D638u;
    // 0x38d63c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38D638u, 0x38D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D640u;
label_38d640:
    // 0x38d640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38d644:
    if (ctx->pc == 0x38D644u) {
        ctx->pc = 0x38D648u;
        goto label_38d648;
    }
    ctx->pc = 0x38D640u;
    {
        const bool branch_taken_0x38d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d640) {
            ctx->pc = 0x38D650u;
            goto label_38d650;
        }
    }
    ctx->pc = 0x38D648u;
label_38d648:
    // 0x38d648: 0x10000003  b           . + 4 + (0x3 << 2)
label_38d64c:
    if (ctx->pc == 0x38D64Cu) {
        ctx->pc = 0x38D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D648u;
        // 0x38d64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D650u;
        goto label_38d650;
    }
    ctx->pc = 0x38D648u;
    {
        const bool branch_taken_0x38d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D648u;
        // 0x38d64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d648) {
            ctx->pc = 0x38D658u;
            goto label_38d658;
        }
    }
    ctx->pc = 0x38D650u;
label_38d650:
    // 0x38d650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d654:
    // 0x38d654: 0x0  nop
    ctx->pc = 0x38d654u;
    // NOP
label_38d658:
    // 0x38d658: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38d65c:
    // 0x38d65c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38d65cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38d660:
    // 0x38d660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38d660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38d664:
    // 0x38d664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38d664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38d668:
    // 0x38d668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38d668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d66c:
    // 0x38d66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38d66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d670:
    // 0x38d670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d674:
    // 0x38d674: 0x3e00008  jr          $ra
label_38d678:
    if (ctx->pc == 0x38D678u) {
        ctx->pc = 0x38D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D674u;
        // 0x38d678: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D67Cu;
        goto label_fallthrough_0x38d674;
    }
    ctx->pc = 0x38D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D674u;
        // 0x38d678: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38d674:
    ctx->pc = 0x38D67Cu;
}
