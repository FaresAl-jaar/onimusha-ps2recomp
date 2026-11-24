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

// Function: sub_001DD510
// Address: 0x1dd510 - 0x1dda74
void sub_001DD510_0x1dd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD510_0x1dd510");
#endif

    switch (ctx->pc) {
        case 0x1dd510u: goto label_1dd510;
        case 0x1dd514u: goto label_1dd514;
        case 0x1dd518u: goto label_1dd518;
        case 0x1dd51cu: goto label_1dd51c;
        case 0x1dd520u: goto label_1dd520;
        case 0x1dd524u: goto label_1dd524;
        case 0x1dd528u: goto label_1dd528;
        case 0x1dd52cu: goto label_1dd52c;
        case 0x1dd530u: goto label_1dd530;
        case 0x1dd534u: goto label_1dd534;
        case 0x1dd538u: goto label_1dd538;
        case 0x1dd53cu: goto label_1dd53c;
        case 0x1dd540u: goto label_1dd540;
        case 0x1dd544u: goto label_1dd544;
        case 0x1dd548u: goto label_1dd548;
        case 0x1dd54cu: goto label_1dd54c;
        case 0x1dd550u: goto label_1dd550;
        case 0x1dd554u: goto label_1dd554;
        case 0x1dd558u: goto label_1dd558;
        case 0x1dd55cu: goto label_1dd55c;
        case 0x1dd560u: goto label_1dd560;
        case 0x1dd564u: goto label_1dd564;
        case 0x1dd568u: goto label_1dd568;
        case 0x1dd56cu: goto label_1dd56c;
        case 0x1dd570u: goto label_1dd570;
        case 0x1dd574u: goto label_1dd574;
        case 0x1dd578u: goto label_1dd578;
        case 0x1dd57cu: goto label_1dd57c;
        case 0x1dd580u: goto label_1dd580;
        case 0x1dd584u: goto label_1dd584;
        case 0x1dd588u: goto label_1dd588;
        case 0x1dd58cu: goto label_1dd58c;
        case 0x1dd590u: goto label_1dd590;
        case 0x1dd594u: goto label_1dd594;
        case 0x1dd598u: goto label_1dd598;
        case 0x1dd59cu: goto label_1dd59c;
        case 0x1dd5a0u: goto label_1dd5a0;
        case 0x1dd5a4u: goto label_1dd5a4;
        case 0x1dd5a8u: goto label_1dd5a8;
        case 0x1dd5acu: goto label_1dd5ac;
        case 0x1dd5b0u: goto label_1dd5b0;
        case 0x1dd5b4u: goto label_1dd5b4;
        case 0x1dd5b8u: goto label_1dd5b8;
        case 0x1dd5bcu: goto label_1dd5bc;
        case 0x1dd5c0u: goto label_1dd5c0;
        case 0x1dd5c4u: goto label_1dd5c4;
        case 0x1dd5c8u: goto label_1dd5c8;
        case 0x1dd5ccu: goto label_1dd5cc;
        case 0x1dd5d0u: goto label_1dd5d0;
        case 0x1dd5d4u: goto label_1dd5d4;
        case 0x1dd5d8u: goto label_1dd5d8;
        case 0x1dd5dcu: goto label_1dd5dc;
        case 0x1dd5e0u: goto label_1dd5e0;
        case 0x1dd5e4u: goto label_1dd5e4;
        case 0x1dd5e8u: goto label_1dd5e8;
        case 0x1dd5ecu: goto label_1dd5ec;
        case 0x1dd5f0u: goto label_1dd5f0;
        case 0x1dd5f4u: goto label_1dd5f4;
        case 0x1dd5f8u: goto label_1dd5f8;
        case 0x1dd5fcu: goto label_1dd5fc;
        case 0x1dd600u: goto label_1dd600;
        case 0x1dd604u: goto label_1dd604;
        case 0x1dd608u: goto label_1dd608;
        case 0x1dd60cu: goto label_1dd60c;
        case 0x1dd610u: goto label_1dd610;
        case 0x1dd614u: goto label_1dd614;
        case 0x1dd618u: goto label_1dd618;
        case 0x1dd61cu: goto label_1dd61c;
        case 0x1dd620u: goto label_1dd620;
        case 0x1dd624u: goto label_1dd624;
        case 0x1dd628u: goto label_1dd628;
        case 0x1dd62cu: goto label_1dd62c;
        case 0x1dd630u: goto label_1dd630;
        case 0x1dd634u: goto label_1dd634;
        case 0x1dd638u: goto label_1dd638;
        case 0x1dd63cu: goto label_1dd63c;
        case 0x1dd640u: goto label_1dd640;
        case 0x1dd644u: goto label_1dd644;
        case 0x1dd648u: goto label_1dd648;
        case 0x1dd64cu: goto label_1dd64c;
        case 0x1dd650u: goto label_1dd650;
        case 0x1dd654u: goto label_1dd654;
        case 0x1dd658u: goto label_1dd658;
        case 0x1dd65cu: goto label_1dd65c;
        case 0x1dd660u: goto label_1dd660;
        case 0x1dd664u: goto label_1dd664;
        case 0x1dd668u: goto label_1dd668;
        case 0x1dd66cu: goto label_1dd66c;
        case 0x1dd670u: goto label_1dd670;
        case 0x1dd674u: goto label_1dd674;
        case 0x1dd678u: goto label_1dd678;
        case 0x1dd67cu: goto label_1dd67c;
        case 0x1dd680u: goto label_1dd680;
        case 0x1dd684u: goto label_1dd684;
        case 0x1dd688u: goto label_1dd688;
        case 0x1dd68cu: goto label_1dd68c;
        case 0x1dd690u: goto label_1dd690;
        case 0x1dd694u: goto label_1dd694;
        case 0x1dd698u: goto label_1dd698;
        case 0x1dd69cu: goto label_1dd69c;
        case 0x1dd6a0u: goto label_1dd6a0;
        case 0x1dd6a4u: goto label_1dd6a4;
        case 0x1dd6a8u: goto label_1dd6a8;
        case 0x1dd6acu: goto label_1dd6ac;
        case 0x1dd6b0u: goto label_1dd6b0;
        case 0x1dd6b4u: goto label_1dd6b4;
        case 0x1dd6b8u: goto label_1dd6b8;
        case 0x1dd6bcu: goto label_1dd6bc;
        case 0x1dd6c0u: goto label_1dd6c0;
        case 0x1dd6c4u: goto label_1dd6c4;
        case 0x1dd6c8u: goto label_1dd6c8;
        case 0x1dd6ccu: goto label_1dd6cc;
        case 0x1dd6d0u: goto label_1dd6d0;
        case 0x1dd6d4u: goto label_1dd6d4;
        case 0x1dd6d8u: goto label_1dd6d8;
        case 0x1dd6dcu: goto label_1dd6dc;
        case 0x1dd6e0u: goto label_1dd6e0;
        case 0x1dd6e4u: goto label_1dd6e4;
        case 0x1dd6e8u: goto label_1dd6e8;
        case 0x1dd6ecu: goto label_1dd6ec;
        case 0x1dd6f0u: goto label_1dd6f0;
        case 0x1dd6f4u: goto label_1dd6f4;
        case 0x1dd6f8u: goto label_1dd6f8;
        case 0x1dd6fcu: goto label_1dd6fc;
        case 0x1dd700u: goto label_1dd700;
        case 0x1dd704u: goto label_1dd704;
        case 0x1dd708u: goto label_1dd708;
        case 0x1dd70cu: goto label_1dd70c;
        case 0x1dd710u: goto label_1dd710;
        case 0x1dd714u: goto label_1dd714;
        case 0x1dd718u: goto label_1dd718;
        case 0x1dd71cu: goto label_1dd71c;
        case 0x1dd720u: goto label_1dd720;
        case 0x1dd724u: goto label_1dd724;
        case 0x1dd728u: goto label_1dd728;
        case 0x1dd72cu: goto label_1dd72c;
        case 0x1dd730u: goto label_1dd730;
        case 0x1dd734u: goto label_1dd734;
        case 0x1dd738u: goto label_1dd738;
        case 0x1dd73cu: goto label_1dd73c;
        case 0x1dd740u: goto label_1dd740;
        case 0x1dd744u: goto label_1dd744;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd74cu: goto label_1dd74c;
        case 0x1dd750u: goto label_1dd750;
        case 0x1dd754u: goto label_1dd754;
        case 0x1dd758u: goto label_1dd758;
        case 0x1dd75cu: goto label_1dd75c;
        case 0x1dd760u: goto label_1dd760;
        case 0x1dd764u: goto label_1dd764;
        case 0x1dd768u: goto label_1dd768;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd770u: goto label_1dd770;
        case 0x1dd774u: goto label_1dd774;
        case 0x1dd778u: goto label_1dd778;
        case 0x1dd77cu: goto label_1dd77c;
        case 0x1dd780u: goto label_1dd780;
        case 0x1dd784u: goto label_1dd784;
        case 0x1dd788u: goto label_1dd788;
        case 0x1dd78cu: goto label_1dd78c;
        case 0x1dd790u: goto label_1dd790;
        case 0x1dd794u: goto label_1dd794;
        case 0x1dd798u: goto label_1dd798;
        case 0x1dd79cu: goto label_1dd79c;
        case 0x1dd7a0u: goto label_1dd7a0;
        case 0x1dd7a4u: goto label_1dd7a4;
        case 0x1dd7a8u: goto label_1dd7a8;
        case 0x1dd7acu: goto label_1dd7ac;
        case 0x1dd7b0u: goto label_1dd7b0;
        case 0x1dd7b4u: goto label_1dd7b4;
        case 0x1dd7b8u: goto label_1dd7b8;
        case 0x1dd7bcu: goto label_1dd7bc;
        case 0x1dd7c0u: goto label_1dd7c0;
        case 0x1dd7c4u: goto label_1dd7c4;
        case 0x1dd7c8u: goto label_1dd7c8;
        case 0x1dd7ccu: goto label_1dd7cc;
        case 0x1dd7d0u: goto label_1dd7d0;
        case 0x1dd7d4u: goto label_1dd7d4;
        case 0x1dd7d8u: goto label_1dd7d8;
        case 0x1dd7dcu: goto label_1dd7dc;
        case 0x1dd7e0u: goto label_1dd7e0;
        case 0x1dd7e4u: goto label_1dd7e4;
        case 0x1dd7e8u: goto label_1dd7e8;
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd7f0u: goto label_1dd7f0;
        case 0x1dd7f4u: goto label_1dd7f4;
        case 0x1dd7f8u: goto label_1dd7f8;
        case 0x1dd7fcu: goto label_1dd7fc;
        case 0x1dd800u: goto label_1dd800;
        case 0x1dd804u: goto label_1dd804;
        case 0x1dd808u: goto label_1dd808;
        case 0x1dd80cu: goto label_1dd80c;
        case 0x1dd810u: goto label_1dd810;
        case 0x1dd814u: goto label_1dd814;
        case 0x1dd818u: goto label_1dd818;
        case 0x1dd81cu: goto label_1dd81c;
        case 0x1dd820u: goto label_1dd820;
        case 0x1dd824u: goto label_1dd824;
        case 0x1dd828u: goto label_1dd828;
        case 0x1dd82cu: goto label_1dd82c;
        case 0x1dd830u: goto label_1dd830;
        case 0x1dd834u: goto label_1dd834;
        case 0x1dd838u: goto label_1dd838;
        case 0x1dd83cu: goto label_1dd83c;
        case 0x1dd840u: goto label_1dd840;
        case 0x1dd844u: goto label_1dd844;
        case 0x1dd848u: goto label_1dd848;
        case 0x1dd84cu: goto label_1dd84c;
        case 0x1dd850u: goto label_1dd850;
        case 0x1dd854u: goto label_1dd854;
        case 0x1dd858u: goto label_1dd858;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd860u: goto label_1dd860;
        case 0x1dd864u: goto label_1dd864;
        case 0x1dd868u: goto label_1dd868;
        case 0x1dd86cu: goto label_1dd86c;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd874u: goto label_1dd874;
        case 0x1dd878u: goto label_1dd878;
        case 0x1dd87cu: goto label_1dd87c;
        case 0x1dd880u: goto label_1dd880;
        case 0x1dd884u: goto label_1dd884;
        case 0x1dd888u: goto label_1dd888;
        case 0x1dd88cu: goto label_1dd88c;
        case 0x1dd890u: goto label_1dd890;
        case 0x1dd894u: goto label_1dd894;
        case 0x1dd898u: goto label_1dd898;
        case 0x1dd89cu: goto label_1dd89c;
        case 0x1dd8a0u: goto label_1dd8a0;
        case 0x1dd8a4u: goto label_1dd8a4;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8acu: goto label_1dd8ac;
        case 0x1dd8b0u: goto label_1dd8b0;
        case 0x1dd8b4u: goto label_1dd8b4;
        case 0x1dd8b8u: goto label_1dd8b8;
        case 0x1dd8bcu: goto label_1dd8bc;
        case 0x1dd8c0u: goto label_1dd8c0;
        case 0x1dd8c4u: goto label_1dd8c4;
        case 0x1dd8c8u: goto label_1dd8c8;
        case 0x1dd8ccu: goto label_1dd8cc;
        case 0x1dd8d0u: goto label_1dd8d0;
        case 0x1dd8d4u: goto label_1dd8d4;
        case 0x1dd8d8u: goto label_1dd8d8;
        case 0x1dd8dcu: goto label_1dd8dc;
        case 0x1dd8e0u: goto label_1dd8e0;
        case 0x1dd8e4u: goto label_1dd8e4;
        case 0x1dd8e8u: goto label_1dd8e8;
        case 0x1dd8ecu: goto label_1dd8ec;
        case 0x1dd8f0u: goto label_1dd8f0;
        case 0x1dd8f4u: goto label_1dd8f4;
        case 0x1dd8f8u: goto label_1dd8f8;
        case 0x1dd8fcu: goto label_1dd8fc;
        case 0x1dd900u: goto label_1dd900;
        case 0x1dd904u: goto label_1dd904;
        case 0x1dd908u: goto label_1dd908;
        case 0x1dd90cu: goto label_1dd90c;
        case 0x1dd910u: goto label_1dd910;
        case 0x1dd914u: goto label_1dd914;
        case 0x1dd918u: goto label_1dd918;
        case 0x1dd91cu: goto label_1dd91c;
        case 0x1dd920u: goto label_1dd920;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd928u: goto label_1dd928;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd934u: goto label_1dd934;
        case 0x1dd938u: goto label_1dd938;
        case 0x1dd93cu: goto label_1dd93c;
        case 0x1dd940u: goto label_1dd940;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd948u: goto label_1dd948;
        case 0x1dd94cu: goto label_1dd94c;
        case 0x1dd950u: goto label_1dd950;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd958u: goto label_1dd958;
        case 0x1dd95cu: goto label_1dd95c;
        case 0x1dd960u: goto label_1dd960;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd968u: goto label_1dd968;
        case 0x1dd96cu: goto label_1dd96c;
        case 0x1dd970u: goto label_1dd970;
        case 0x1dd974u: goto label_1dd974;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd97cu: goto label_1dd97c;
        case 0x1dd980u: goto label_1dd980;
        case 0x1dd984u: goto label_1dd984;
        case 0x1dd988u: goto label_1dd988;
        case 0x1dd98cu: goto label_1dd98c;
        case 0x1dd990u: goto label_1dd990;
        case 0x1dd994u: goto label_1dd994;
        case 0x1dd998u: goto label_1dd998;
        case 0x1dd99cu: goto label_1dd99c;
        case 0x1dd9a0u: goto label_1dd9a0;
        case 0x1dd9a4u: goto label_1dd9a4;
        case 0x1dd9a8u: goto label_1dd9a8;
        case 0x1dd9acu: goto label_1dd9ac;
        case 0x1dd9b0u: goto label_1dd9b0;
        case 0x1dd9b4u: goto label_1dd9b4;
        case 0x1dd9b8u: goto label_1dd9b8;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9c0u: goto label_1dd9c0;
        case 0x1dd9c4u: goto label_1dd9c4;
        case 0x1dd9c8u: goto label_1dd9c8;
        case 0x1dd9ccu: goto label_1dd9cc;
        case 0x1dd9d0u: goto label_1dd9d0;
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9d8u: goto label_1dd9d8;
        case 0x1dd9dcu: goto label_1dd9dc;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9e8u: goto label_1dd9e8;
        case 0x1dd9ecu: goto label_1dd9ec;
        case 0x1dd9f0u: goto label_1dd9f0;
        case 0x1dd9f4u: goto label_1dd9f4;
        case 0x1dd9f8u: goto label_1dd9f8;
        case 0x1dd9fcu: goto label_1dd9fc;
        case 0x1dda00u: goto label_1dda00;
        case 0x1dda04u: goto label_1dda04;
        case 0x1dda08u: goto label_1dda08;
        case 0x1dda0cu: goto label_1dda0c;
        case 0x1dda10u: goto label_1dda10;
        case 0x1dda14u: goto label_1dda14;
        case 0x1dda18u: goto label_1dda18;
        case 0x1dda1cu: goto label_1dda1c;
        case 0x1dda20u: goto label_1dda20;
        case 0x1dda24u: goto label_1dda24;
        case 0x1dda28u: goto label_1dda28;
        case 0x1dda2cu: goto label_1dda2c;
        case 0x1dda30u: goto label_1dda30;
        case 0x1dda34u: goto label_1dda34;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda3cu: goto label_1dda3c;
        case 0x1dda40u: goto label_1dda40;
        case 0x1dda44u: goto label_1dda44;
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda4cu: goto label_1dda4c;
        case 0x1dda50u: goto label_1dda50;
        case 0x1dda54u: goto label_1dda54;
        case 0x1dda58u: goto label_1dda58;
        case 0x1dda5cu: goto label_1dda5c;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda64u: goto label_1dda64;
        case 0x1dda68u: goto label_1dda68;
        case 0x1dda6cu: goto label_1dda6c;
        case 0x1dda70u: goto label_1dda70;
        default: break;
    }

    ctx->pc = 0x1dd510u;

label_1dd510:
    // 0x1dd510: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1dd514:
    // 0x1dd514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1dd518:
    // 0x1dd518: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dd51c:
    // 0x1dd51c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dd520:
    // 0x1dd520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd524:
    // 0x1dd524: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1dd528:
    // 0x1dd528: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dd52c:
    // 0x1dd52c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dd52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1dd530:
    // 0x1dd530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd534:
    if (ctx->pc == 0x1DD534u) {
        ctx->pc = 0x1DD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD530u;
        // 0x1dd534: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD538u;
        goto label_1dd538;
    }
    ctx->pc = 0x1DD530u;
    {
        const bool branch_taken_0x1dd530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD530u;
        // 0x1dd534: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd530) {
            ctx->pc = 0x1DD540u;
            goto label_1dd540;
        }
    }
    ctx->pc = 0x1DD538u;
label_1dd538:
    // 0x1dd538: 0x10000147  b           . + 4 + (0x147 << 2)
label_1dd53c:
    if (ctx->pc == 0x1DD53Cu) {
        ctx->pc = 0x1DD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD538u;
        // 0x1dd53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD540u;
        goto label_1dd540;
    }
    ctx->pc = 0x1DD538u;
    {
        const bool branch_taken_0x1dd538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD538u;
        // 0x1dd53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd538) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DD540u;
label_1dd540:
    // 0x1dd540: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dd544:
    // 0x1dd544: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dd544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dd548:
    // 0x1dd548: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dd548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dd54c:
    // 0x1dd54c: 0x320f809  jalr        $t9
label_1dd550:
    if (ctx->pc == 0x1DD550u) {
        ctx->pc = 0x1DD554u;
        goto label_1dd554;
    }
    ctx->pc = 0x1DD54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD54Cu, 0x1DD554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD554u;
label_1dd554:
    // 0x1dd554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dd558:
    if (ctx->pc == 0x1DD558u) {
        ctx->pc = 0x1DD55Cu;
        goto label_1dd55c;
    }
    ctx->pc = 0x1DD554u;
    {
        const bool branch_taken_0x1dd554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd554) {
            ctx->pc = 0x1DD578u;
            goto label_1dd578;
        }
    }
    ctx->pc = 0x1DD55Cu;
label_1dd55c:
    // 0x1dd55c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dd55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dd560:
    // 0x1dd560: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dd560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dd564:
    // 0x1dd564: 0x320f809  jalr        $t9
label_1dd568:
    if (ctx->pc == 0x1DD568u) {
        ctx->pc = 0x1DD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD564u;
        // 0x1dd568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD56Cu;
        goto label_1dd56c;
    }
    ctx->pc = 0x1DD564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD56Cu);
        ctx->pc = 0x1DD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD564u;
        // 0x1dd568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD564u, 0x1DD56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD56Cu;
label_1dd56c:
    // 0x1dd56c: 0x1000013a  b           . + 4 + (0x13A << 2)
label_1dd570:
    if (ctx->pc == 0x1DD570u) {
        ctx->pc = 0x1DD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD56Cu;
        // 0x1dd570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD574u;
        goto label_1dd574;
    }
    ctx->pc = 0x1DD56Cu;
    {
        const bool branch_taken_0x1dd56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD56Cu;
        // 0x1dd570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd56c) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DD574u;
label_1dd574:
    // 0x1dd574: 0x0  nop
    ctx->pc = 0x1dd574u;
    // NOP
label_1dd578:
    // 0x1dd578: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dd578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dd57c:
    // 0x1dd57c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1dd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd580:
    // 0x1dd580: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1dd580u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd584:
    // 0x1dd584: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1dd584u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1dd588:
    // 0x1dd588: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dd588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dd58c:
    // 0x1dd58c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1dd590:
    // 0x1dd590: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1dd590u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dd594:
    // 0x1dd594: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dd594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dd598:
    // 0x1dd598: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1dd598u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dd59c:
    // 0x1dd59c: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dd59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dd5a0:
    // 0x1dd5a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dd5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dd5a4:
    // 0x1dd5a4: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dd5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1dd5a8:
    // 0x1dd5a8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dd5a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd5ac:
    // 0x1dd5ac: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dd5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dd5b0:
    // 0x1dd5b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dd5b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dd5b4:
    // 0x1dd5b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dd5b8:
    // 0x1dd5b8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1dd5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dd5bc:
    // 0x1dd5bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dd5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dd5c0:
    // 0x1dd5c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dd5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1dd5c4:
    // 0x1dd5c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd5c8:
    if (ctx->pc == 0x1DD5C8u) {
        ctx->pc = 0x1DD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5C4u;
        // 0x1dd5c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5CCu;
        goto label_1dd5cc;
    }
    ctx->pc = 0x1DD5C4u;
    {
        const bool branch_taken_0x1dd5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5C4u;
        // 0x1dd5c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5c4) {
            ctx->pc = 0x1DD5D8u;
            goto label_1dd5d8;
        }
    }
    ctx->pc = 0x1DD5CCu;
label_1dd5cc:
    // 0x1dd5cc: 0x10000122  b           . + 4 + (0x122 << 2)
label_1dd5d0:
    if (ctx->pc == 0x1DD5D0u) {
        ctx->pc = 0x1DD5D4u;
        goto label_1dd5d4;
    }
    ctx->pc = 0x1DD5CCu;
    {
        const bool branch_taken_0x1dd5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5cc) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DD5D4u;
label_1dd5d4:
    // 0x1dd5d4: 0x0  nop
    ctx->pc = 0x1dd5d4u;
    // NOP
label_1dd5d8:
    // 0x1dd5d8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1dd5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dd5dc:
    // 0x1dd5dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dd5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dd5e0:
    // 0x1dd5e0: 0xc07679c  jal         func_1D9E70
label_1dd5e4:
    if (ctx->pc == 0x1DD5E4u) {
        ctx->pc = 0x1DD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5E0u;
        // 0x1dd5e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5E8u;
        goto label_1dd5e8;
    }
    ctx->pc = 0x1DD5E0u;
    SET_GPR_U32(ctx, 31, 0x1DD5E8u);
    ctx->pc = 0x1DD5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5E0u;
    // 0x1dd5e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1DD5E0u, 0x1DD5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5E8u;
label_1dd5e8:
    // 0x1dd5e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dd5ec:
    // 0x1dd5ec: 0xc0766ec  jal         func_1D9BB0
label_1dd5f0:
    if (ctx->pc == 0x1DD5F0u) {
        ctx->pc = 0x1DD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5ECu;
        // 0x1dd5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD5F4u;
        goto label_1dd5f4;
    }
    ctx->pc = 0x1DD5ECu;
    SET_GPR_U32(ctx, 31, 0x1DD5F4u);
    ctx->pc = 0x1DD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5ECu;
    // 0x1dd5f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BB0u, 0x1DD5ECu, 0x1DD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5F4u;
label_1dd5f4:
    // 0x1dd5f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dd5f8:
    // 0x1dd5f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1dd5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd5fc:
    // 0x1dd5fc: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1dd5fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dd600:
    // 0x1dd600: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1dd604:
    // 0x1dd604: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1dd604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd608:
    // 0x1dd608: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x1dd608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_1dd60c:
    // 0x1dd60c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dd60cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd610:
    // 0x1dd610: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1dd610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1dd614:
    // 0x1dd614: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd618:
    // 0x1dd618: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dd618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1dd61c:
    // 0x1dd61c: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
label_1dd620:
    if (ctx->pc == 0x1DD620u) {
        ctx->pc = 0x1DD624u;
        goto label_1dd624;
    }
    ctx->pc = 0x1DD61Cu;
    {
        const bool branch_taken_0x1dd61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd61c) {
            ctx->pc = 0x1DD970u;
            goto label_1dd970;
        }
    }
    ctx->pc = 0x1DD624u;
label_1dd624:
    // 0x1dd624: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1dd624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd628:
    // 0x1dd628: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dd628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dd62c:
    // 0x1dd62c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dd62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dd630:
    // 0x1dd630: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x1dd630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1dd634:
    // 0x1dd634: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1dd634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dd638:
    // 0x1dd638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd63c:
    // 0x1dd63c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd63cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dd640:
    // 0x1dd640: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1dd640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd644:
    // 0x1dd644: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x1dd644u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1dd648:
    // 0x1dd648: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1dd64c:
    if (ctx->pc == 0x1DD64Cu) {
        ctx->pc = 0x1DD64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD648u;
        // 0x1dd64c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD650u;
        goto label_1dd650;
    }
    ctx->pc = 0x1DD648u;
    {
        const bool branch_taken_0x1dd648 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DD64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD648u;
        // 0x1dd64c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd648) {
            ctx->pc = 0x1DD65Cu;
            goto label_1dd65c;
        }
    }
    ctx->pc = 0x1DD650u;
label_1dd650:
    // 0x1dd650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd654:
    // 0x1dd654: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dd658:
    if (ctx->pc == 0x1DD658u) {
        ctx->pc = 0x1DD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD654u;
        // 0x1dd658: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD65Cu;
        goto label_1dd65c;
    }
    ctx->pc = 0x1DD654u;
    {
        const bool branch_taken_0x1dd654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD654u;
        // 0x1dd658: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd654) {
            ctx->pc = 0x1DD678u;
            goto label_1dd678;
        }
    }
    ctx->pc = 0x1DD65Cu;
label_1dd65c:
    // 0x1dd65c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1dd660:
    // 0x1dd660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dd664:
    // 0x1dd664: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd668:
    // 0x1dd668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd66c:
    // 0x1dd66c: 0x0  nop
    ctx->pc = 0x1dd66cu;
    // NOP
label_1dd670:
    // 0x1dd670: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1dd670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1dd674:
    // 0x1dd674: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1dd674u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1dd678:
    // 0x1dd678: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_1dd67c:
    // 0x1dd67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dd680:
    // 0x1dd680: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1dd680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1dd684:
    // 0x1dd684: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dd688:
    // 0x1dd688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd68c:
    // 0x1dd68c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1dd68cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1dd690:
    // 0x1dd690: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1dd690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1dd694:
    // 0x1dd694: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1dd694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd698:
    // 0x1dd698: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1dd698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1dd69c:
    // 0x1dd69c: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x1dd69cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1dd6a0:
    // 0x1dd6a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd6a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd6a4:
    // 0x1dd6a4: 0x0  nop
    ctx->pc = 0x1dd6a4u;
    // NOP
label_1dd6a8:
    // 0x1dd6a8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1dd6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd6ac:
    // 0x1dd6ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd6b0:
    if (ctx->pc == 0x1DD6B0u) {
        ctx->pc = 0x1DD6B4u;
        goto label_1dd6b4;
    }
    ctx->pc = 0x1DD6ACu;
    {
        const bool branch_taken_0x1dd6ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd6ac) {
            ctx->pc = 0x1DD6B8u;
            goto label_1dd6b8;
        }
    }
    ctx->pc = 0x1DD6B4u;
label_1dd6b4:
    // 0x1dd6b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1dd6b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1dd6b8:
    // 0x1dd6b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dd6bc:
    // 0x1dd6bc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dd6c0:
    // 0x1dd6c0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1dd6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dd6c4:
    // 0x1dd6c4: 0xc4a5001c  lwc1        $f5, 0x1C($a1)
    ctx->pc = 0x1dd6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1dd6c8:
    // 0x1dd6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd6cc:
    // 0x1dd6cc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dd6d0:
    // 0x1dd6d0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd6d4:
    // 0x1dd6d4: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x1dd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1dd6d8:
    // 0x1dd6d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1dd6dc:
    if (ctx->pc == 0x1DD6DCu) {
        ctx->pc = 0x1DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D8u;
        // 0x1dd6dc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6E0u;
        goto label_1dd6e0;
    }
    ctx->pc = 0x1DD6D8u;
    {
        const bool branch_taken_0x1dd6d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D8u;
        // 0x1dd6dc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6d8) {
            ctx->pc = 0x1DD6ECu;
            goto label_1dd6ec;
        }
    }
    ctx->pc = 0x1DD6E0u;
label_1dd6e0:
    // 0x1dd6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd6e4:
    // 0x1dd6e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dd6e8:
    if (ctx->pc == 0x1DD6E8u) {
        ctx->pc = 0x1DD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E4u;
        // 0x1dd6e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6ECu;
        goto label_1dd6ec;
    }
    ctx->pc = 0x1DD6E4u;
    {
        const bool branch_taken_0x1dd6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E4u;
        // 0x1dd6e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6e4) {
            ctx->pc = 0x1DD708u;
            goto label_1dd708;
        }
    }
    ctx->pc = 0x1DD6ECu;
label_1dd6ec:
    // 0x1dd6ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1dd6f0:
    // 0x1dd6f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dd6f4:
    // 0x1dd6f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd6f8:
    // 0x1dd6f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd6fc:
    // 0x1dd6fc: 0x0  nop
    ctx->pc = 0x1dd6fcu;
    // NOP
label_1dd700:
    // 0x1dd700: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1dd700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1dd704:
    // 0x1dd704: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1dd704u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1dd708:
    // 0x1dd708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dd70c:
    // 0x1dd70c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x1dd70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_1dd710:
    // 0x1dd710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd714:
    // 0x1dd714: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1dd714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1dd718:
    // 0x1dd718: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dd71c:
    // 0x1dd71c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dd720:
    // 0x1dd720: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dd720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dd724:
    // 0x1dd724: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1dd724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1dd728:
    // 0x1dd728: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1dd728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dd72c:
    // 0x1dd72c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1dd72cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1dd730:
    // 0x1dd730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd734:
    // 0x1dd734: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1dd734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd738:
    // 0x1dd738: 0xc4a40030  lwc1        $f4, 0x30($a1)
    ctx->pc = 0x1dd738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1dd73c:
    // 0x1dd73c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1dd73cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_1dd740:
    // 0x1dd740: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dd744:
    // 0x1dd744: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1dd744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd748:
    // 0x1dd748: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd74c:
    // 0x1dd74c: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x1dd74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dd750:
    // 0x1dd750: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1dd750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1dd754:
    // 0x1dd754: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1dd758:
    if (ctx->pc == 0x1DD758u) {
        ctx->pc = 0x1DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD754u;
        // 0x1dd758: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD75Cu;
        goto label_1dd75c;
    }
    ctx->pc = 0x1DD754u;
    {
        const bool branch_taken_0x1dd754 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD754u;
        // 0x1dd758: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd754) {
            ctx->pc = 0x1DD768u;
            goto label_1dd768;
        }
    }
    ctx->pc = 0x1DD75Cu;
label_1dd75c:
    // 0x1dd75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd760:
    // 0x1dd760: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dd764:
    if (ctx->pc == 0x1DD764u) {
        ctx->pc = 0x1DD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD760u;
        // 0x1dd764: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD768u;
        goto label_1dd768;
    }
    ctx->pc = 0x1DD760u;
    {
        const bool branch_taken_0x1dd760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD760u;
        // 0x1dd764: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd760) {
            ctx->pc = 0x1DD784u;
            goto label_1dd784;
        }
    }
    ctx->pc = 0x1DD768u;
label_1dd768:
    // 0x1dd768: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dd768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1dd76c:
    // 0x1dd76c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dd770:
    // 0x1dd770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd774:
    // 0x1dd774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd778:
    // 0x1dd778: 0x0  nop
    ctx->pc = 0x1dd778u;
    // NOP
label_1dd77c:
    // 0x1dd77c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1dd77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dd780:
    // 0x1dd780: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dd780u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dd784:
    // 0x1dd784: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x1dd784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_1dd788:
    // 0x1dd788: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd78c:
    // 0x1dd78c: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x1dd78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1dd790:
    // 0x1dd790: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1dd790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd794:
    // 0x1dd794: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dd798:
    // 0x1dd798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd79c:
    // 0x1dd79c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dd79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dd7a0:
    // 0x1dd7a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1dd7a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1dd7a4:
    // 0x1dd7a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd7a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd7a8:
    // 0x1dd7a8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1dd7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1dd7ac:
    // 0x1dd7ac: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1dd7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1dd7b0:
    // 0x1dd7b0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1dd7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1dd7b4:
    // 0x1dd7b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd7b8:
    // 0x1dd7b8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd7bc:
    // 0x1dd7bc: 0xc4840034  lwc1        $f4, 0x34($a0)
    ctx->pc = 0x1dd7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1dd7c0:
    // 0x1dd7c0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1dd7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dd7c4:
    // 0x1dd7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd7c8:
    // 0x1dd7c8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dd7cc:
    // 0x1dd7cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd7d0:
    // 0x1dd7d0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd7d4:
    // 0x1dd7d4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1dd7d8:
    // 0x1dd7d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1dd7dc:
    if (ctx->pc == 0x1DD7DCu) {
        ctx->pc = 0x1DD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7D8u;
        // 0x1dd7dc: 0xc4630024  lwc1        $f3, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD7E0u;
        goto label_1dd7e0;
    }
    ctx->pc = 0x1DD7D8u;
    {
        const bool branch_taken_0x1dd7d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7D8u;
        // 0x1dd7dc: 0xc4630024  lwc1        $f3, 0x24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7d8) {
            ctx->pc = 0x1DD7ECu;
            goto label_1dd7ec;
        }
    }
    ctx->pc = 0x1DD7E0u;
label_1dd7e0:
    // 0x1dd7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd7e4:
    // 0x1dd7e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dd7e8:
    if (ctx->pc == 0x1DD7E8u) {
        ctx->pc = 0x1DD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7E4u;
        // 0x1dd7e8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD7ECu;
        goto label_1dd7ec;
    }
    ctx->pc = 0x1DD7E4u;
    {
        const bool branch_taken_0x1dd7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7E4u;
        // 0x1dd7e8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7e4) {
            ctx->pc = 0x1DD808u;
            goto label_1dd808;
        }
    }
    ctx->pc = 0x1DD7ECu;
label_1dd7ec:
    // 0x1dd7ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1dd7f0:
    // 0x1dd7f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dd7f4:
    // 0x1dd7f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd7f8:
    // 0x1dd7f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd7fc:
    // 0x1dd7fc: 0x0  nop
    ctx->pc = 0x1dd7fcu;
    // NOP
label_1dd800:
    // 0x1dd800: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1dd800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dd804:
    // 0x1dd804: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dd804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dd808:
    // 0x1dd808: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_1dd80c:
    // 0x1dd80c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd810:
    // 0x1dd810: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x1dd810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1dd814:
    // 0x1dd814: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1dd814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd818:
    // 0x1dd818: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dd81c:
    // 0x1dd81c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd820:
    // 0x1dd820: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dd820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dd824:
    // 0x1dd824: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1dd824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1dd828:
    // 0x1dd828: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd82c:
    // 0x1dd82c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1dd82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1dd830:
    // 0x1dd830: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1dd830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1dd834:
    // 0x1dd834: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1dd834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1dd838:
    // 0x1dd838: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1dd838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd83c:
    // 0x1dd83c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1dd83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd840:
    // 0x1dd840: 0xc4840038  lwc1        $f4, 0x38($a0)
    ctx->pc = 0x1dd840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1dd844:
    // 0x1dd844: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1dd844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dd848:
    // 0x1dd848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd84c:
    // 0x1dd84c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dd850:
    // 0x1dd850: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd854:
    // 0x1dd854: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dd858:
    // 0x1dd858: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1dd858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1dd85c:
    // 0x1dd85c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1dd860:
    if (ctx->pc == 0x1DD860u) {
        ctx->pc = 0x1DD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD85Cu;
        // 0x1dd860: 0xc4630028  lwc1        $f3, 0x28($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD864u;
        goto label_1dd864;
    }
    ctx->pc = 0x1DD85Cu;
    {
        const bool branch_taken_0x1dd85c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD85Cu;
        // 0x1dd860: 0xc4630028  lwc1        $f3, 0x28($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd85c) {
            ctx->pc = 0x1DD870u;
            goto label_1dd870;
        }
    }
    ctx->pc = 0x1DD864u;
label_1dd864:
    // 0x1dd864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd868:
    // 0x1dd868: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dd86c:
    if (ctx->pc == 0x1DD86Cu) {
        ctx->pc = 0x1DD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD868u;
        // 0x1dd86c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD870u;
        goto label_1dd870;
    }
    ctx->pc = 0x1DD868u;
    {
        const bool branch_taken_0x1dd868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD868u;
        // 0x1dd86c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd868) {
            ctx->pc = 0x1DD88Cu;
            goto label_1dd88c;
        }
    }
    ctx->pc = 0x1DD870u;
label_1dd870:
    // 0x1dd870: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dd870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1dd874:
    // 0x1dd874: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dd878:
    // 0x1dd878: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd87c:
    // 0x1dd87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd880:
    // 0x1dd880: 0x0  nop
    ctx->pc = 0x1dd880u;
    // NOP
label_1dd884:
    // 0x1dd884: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1dd884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dd888:
    // 0x1dd888: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dd888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dd88c:
    // 0x1dd88c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_1dd890:
    // 0x1dd890: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dd894:
    // 0x1dd894: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1dd894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1dd898:
    // 0x1dd898: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1dd898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1dd89c:
    // 0x1dd89c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dd8a0:
    // 0x1dd8a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dd8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8a4:
    // 0x1dd8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd8a8:
    // 0x1dd8a8: 0x0  nop
    ctx->pc = 0x1dd8a8u;
    // NOP
label_1dd8ac:
    // 0x1dd8ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1dd8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1dd8b0:
    // 0x1dd8b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd8b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd8b4:
    // 0x1dd8b4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1dd8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1dd8b8:
    // 0x1dd8b8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1dd8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1dd8bc:
    // 0x1dd8bc: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1dd8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1dd8c0:
    // 0x1dd8c0: 0xc0766dc  jal         func_1D9B70
label_1dd8c4:
    if (ctx->pc == 0x1DD8C4u) {
        ctx->pc = 0x1DD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8C0u;
        // 0x1dd8c4: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8C8u;
        goto label_1dd8c8;
    }
    ctx->pc = 0x1DD8C0u;
    SET_GPR_U32(ctx, 31, 0x1DD8C8u);
    ctx->pc = 0x1DD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8C0u;
    // 0x1dd8c4: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x1DD8C0u, 0x1DD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8C8u;
label_1dd8c8:
    // 0x1dd8c8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1dd8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1dd8cc:
    // 0x1dd8cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8d0:
    // 0x1dd8d0: 0xc0767a8  jal         func_1D9EA0
label_1dd8d4:
    if (ctx->pc == 0x1DD8D4u) {
        ctx->pc = 0x1DD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8D0u;
        // 0x1dd8d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8D8u;
        goto label_1dd8d8;
    }
    ctx->pc = 0x1DD8D0u;
    SET_GPR_U32(ctx, 31, 0x1DD8D8u);
    ctx->pc = 0x1DD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8D0u;
    // 0x1dd8d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x1DD8D0u, 0x1DD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8D8u;
label_1dd8d8:
    // 0x1dd8d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd8d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1dd8dc:
    // 0x1dd8dc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1dd8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1dd8e0:
    // 0x1dd8e0: 0xc076690  jal         func_1D9A40
label_1dd8e4:
    if (ctx->pc == 0x1DD8E4u) {
        ctx->pc = 0x1DD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8E0u;
        // 0x1dd8e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8E8u;
        goto label_1dd8e8;
    }
    ctx->pc = 0x1DD8E0u;
    SET_GPR_U32(ctx, 31, 0x1DD8E8u);
    ctx->pc = 0x1DD8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8E0u;
    // 0x1dd8e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1DD8E0u, 0x1DD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8E8u;
label_1dd8e8:
    // 0x1dd8e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd8ec:
    // 0x1dd8ec: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dd8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dd8f0:
    // 0x1dd8f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1dd8f4:
    if (ctx->pc == 0x1DD8F4u) {
        ctx->pc = 0x1DD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8F0u;
        // 0x1dd8f4: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8F8u;
        goto label_1dd8f8;
    }
    ctx->pc = 0x1DD8F0u;
    {
        const bool branch_taken_0x1dd8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8F0u;
        // 0x1dd8f4: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8f0) {
            ctx->pc = 0x1DD920u;
            goto label_1dd920;
        }
    }
    ctx->pc = 0x1DD8F8u;
label_1dd8f8:
    // 0x1dd8f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1dd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1dd8fc:
    // 0x1dd8fc: 0x24425cb0  addiu       $v0, $v0, 0x5CB0
    ctx->pc = 0x1dd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23728));
label_1dd900:
    // 0x1dd900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd904:
    // 0x1dd904: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1dd904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd908:
    // 0x1dd908: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
label_1dd90c:
    // 0x1dd90c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dd90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dd910:
    // 0x1dd910: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1dd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd914:
    // 0x1dd914: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1dd914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1dd918:
    // 0x1dd918: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dd918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1dd91c:
    // 0x1dd91c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1dd91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1dd920:
    // 0x1dd920: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1dd924:
    // 0x1dd924: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1dd924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1dd928:
    // 0x1dd928: 0xc076690  jal         func_1D9A40
label_1dd92c:
    if (ctx->pc == 0x1DD92Cu) {
        ctx->pc = 0x1DD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD928u;
        // 0x1dd92c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD930u;
        goto label_1dd930;
    }
    ctx->pc = 0x1DD928u;
    SET_GPR_U32(ctx, 31, 0x1DD930u);
    ctx->pc = 0x1DD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD928u;
    // 0x1dd92c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1DD928u, 0x1DD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD930u;
label_1dd930:
    // 0x1dd930: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd934:
    // 0x1dd934: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1dd934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd938:
    // 0x1dd938: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1dd93c:
    if (ctx->pc == 0x1DD93Cu) {
        ctx->pc = 0x1DD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD938u;
        // 0x1dd93c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD940u;
        goto label_1dd940;
    }
    ctx->pc = 0x1DD938u;
    {
        const bool branch_taken_0x1dd938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD938u;
        // 0x1dd93c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd938) {
            ctx->pc = 0x1DD960u;
            goto label_1dd960;
        }
    }
    ctx->pc = 0x1DD940u;
label_1dd940:
    // 0x1dd940: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1dd940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1dd944:
    // 0x1dd944: 0xc096cb8  jal         func_25B2E0
label_1dd948:
    if (ctx->pc == 0x1DD948u) {
        ctx->pc = 0x1DD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD944u;
        // 0x1dd948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD94Cu;
        goto label_1dd94c;
    }
    ctx->pc = 0x1DD944u;
    SET_GPR_U32(ctx, 31, 0x1DD94Cu);
    ctx->pc = 0x1DD948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD944u;
    // 0x1dd948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x1DD944u, 0x1DD94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD94Cu;
label_1dd94c:
    // 0x1dd94c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1dd950:
    if (ctx->pc == 0x1DD950u) {
        ctx->pc = 0x1DD954u;
        goto label_1dd954;
    }
    ctx->pc = 0x1DD94Cu;
    {
        const bool branch_taken_0x1dd94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd94c) {
            ctx->pc = 0x1DD960u;
            goto label_1dd960;
        }
    }
    ctx->pc = 0x1DD954u;
label_1dd954:
    // 0x1dd954: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1dd954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd958:
    // 0x1dd958: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x1dd958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_1dd95c:
    // 0x1dd95c: 0x0  nop
    ctx->pc = 0x1dd95cu;
    // NOP
label_1dd960:
    // 0x1dd960: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dd960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd964:
    // 0x1dd964: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1dd964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_1dd968:
    // 0x1dd968: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1dd968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
label_1dd96c:
    // 0x1dd96c: 0x0  nop
    ctx->pc = 0x1dd96cu;
    // NOP
label_1dd970:
    // 0x1dd970: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x1dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_1dd974:
    // 0x1dd974: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x1dd974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_1dd978:
    // 0x1dd978: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dd978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dd97c:
    // 0x1dd97c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd980:
    // 0x1dd980: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1dd980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd984:
    // 0x1dd984: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1dd984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1dd988:
    // 0x1dd988: 0xc44d002c  lwc1        $f13, 0x2C($v0)
    ctx->pc = 0x1dd988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1dd98c:
    // 0x1dd98c: 0xc07681c  jal         func_1DA070
label_1dd990:
    if (ctx->pc == 0x1DD990u) {
        ctx->pc = 0x1DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD98Cu;
        // 0x1dd990: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD994u;
        goto label_1dd994;
    }
    ctx->pc = 0x1DD98Cu;
    SET_GPR_U32(ctx, 31, 0x1DD994u);
    ctx->pc = 0x1DD990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD98Cu;
    // 0x1dd990: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x1DD98Cu, 0x1DD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD994u;
label_1dd994:
    // 0x1dd994: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dd994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd998:
    // 0x1dd998: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1dd998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd99c:
    // 0x1dd99c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dd9a0:
    if (ctx->pc == 0x1DD9A0u) {
        ctx->pc = 0x1DD9A4u;
        goto label_1dd9a4;
    }
    ctx->pc = 0x1DD99Cu;
    {
        const bool branch_taken_0x1dd99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd99c) {
            ctx->pc = 0x1DDA00u;
            goto label_1dda00;
        }
    }
    ctx->pc = 0x1DD9A4u;
label_1dd9a4:
    // 0x1dd9a4: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1dd9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1dd9a8:
    // 0x1dd9a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1dd9ac:
    if (ctx->pc == 0x1DD9ACu) {
        ctx->pc = 0x1DD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9A8u;
        // 0x1dd9ac: 0x27a20084  addiu       $v0, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD9B0u;
        goto label_1dd9b0;
    }
    ctx->pc = 0x1DD9A8u;
    {
        const bool branch_taken_0x1dd9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9A8u;
        // 0x1dd9ac: 0x27a20084  addiu       $v0, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9a8) {
            ctx->pc = 0x1DDA00u;
            goto label_1dda00;
        }
    }
    ctx->pc = 0x1DD9B0u;
label_1dd9b0:
    // 0x1dd9b0: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1dd9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd9b4:
    // 0x1dd9b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd9b8:
    // 0x1dd9b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd9bc:
    // 0x1dd9bc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1dd9c0:
    if (ctx->pc == 0x1DD9C0u) {
        ctx->pc = 0x1DD9C4u;
        goto label_1dd9c4;
    }
    ctx->pc = 0x1DD9BCu;
    {
        const bool branch_taken_0x1dd9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd9bc) {
            ctx->pc = 0x1DDA00u;
            goto label_1dda00;
        }
    }
    ctx->pc = 0x1DD9C4u;
label_1dd9c4:
    // 0x1dd9c4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1dd9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1dd9c8:
    // 0x1dd9c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1dd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dd9cc:
    // 0x1dd9cc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1dd9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd9d0:
    // 0x1dd9d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1dd9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1dd9d4:
    // 0x1dd9d4: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1dd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1dd9d8:
    // 0x1dd9d8: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x1dd9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_1dd9dc:
    // 0x1dd9dc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1dd9dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1dd9e0:
    // 0x1dd9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd9e4:
    // 0x1dd9e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd9e8:
    // 0x1dd9e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd9ec:
    // 0x1dd9ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dd9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1dd9f0:
    // 0x1dd9f0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1dd9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1dd9f4:
    // 0x1dd9f4: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1dd9f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1dd9f8:
    // 0x1dd9f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dd9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dd9fc:
    // 0x1dd9fc: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1dd9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
label_1dda00:
    // 0x1dda00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dda04:
    // 0x1dda04: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1dda04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1dda08:
    // 0x1dda08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1dda0c:
    if (ctx->pc == 0x1DDA0Cu) {
        ctx->pc = 0x1DDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA08u;
        // 0x1dda0c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA10u;
        goto label_1dda10;
    }
    ctx->pc = 0x1DDA08u;
    {
        const bool branch_taken_0x1dda08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA08u;
        // 0x1dda0c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda08) {
            ctx->pc = 0x1DDA40u;
            goto label_1dda40;
        }
    }
    ctx->pc = 0x1DDA10u;
label_1dda10:
    // 0x1dda10: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x1dda10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
label_1dda14:
    // 0x1dda14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1dda14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1dda18:
    // 0x1dda18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1dda1c:
    // 0x1dda1c: 0x24425cb0  addiu       $v0, $v0, 0x5CB0
    ctx->pc = 0x1dda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23728));
label_1dda20:
    // 0x1dda20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dda20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dda24:
    // 0x1dda24: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1dda24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dda28:
    // 0x1dda28: 0xc076690  jal         func_1D9A40
label_1dda2c:
    if (ctx->pc == 0x1DDA2Cu) {
        ctx->pc = 0x1DDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA28u;
        // 0x1dda2c: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA30u;
        goto label_1dda30;
    }
    ctx->pc = 0x1DDA28u;
    SET_GPR_U32(ctx, 31, 0x1DDA30u);
    ctx->pc = 0x1DDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA28u;
    // 0x1dda2c: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1DDA28u, 0x1DDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA30u;
label_1dda30:
    // 0x1dda30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dda30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dda34:
    // 0x1dda34: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1dda34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1dda38:
    // 0x1dda38: 0xc0766a8  jal         func_1D9AA0
label_1dda3c:
    if (ctx->pc == 0x1DDA3Cu) {
        ctx->pc = 0x1DDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA38u;
        // 0x1dda3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA40u;
        goto label_1dda40;
    }
    ctx->pc = 0x1DDA38u;
    SET_GPR_U32(ctx, 31, 0x1DDA40u);
    ctx->pc = 0x1DDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA38u;
    // 0x1dda3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DDA38u, 0x1DDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA40u;
label_1dda40:
    // 0x1dda40: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dda44:
    // 0x1dda44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1dda44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dda48:
    // 0x1dda48: 0xc07679c  jal         func_1D9E70
label_1dda4c:
    if (ctx->pc == 0x1DDA4Cu) {
        ctx->pc = 0x1DDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA48u;
        // 0x1dda4c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA50u;
        goto label_1dda50;
    }
    ctx->pc = 0x1DDA48u;
    SET_GPR_U32(ctx, 31, 0x1DDA50u);
    ctx->pc = 0x1DDA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA48u;
    // 0x1dda4c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1DDA48u, 0x1DDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA50u;
label_1dda50:
    // 0x1dda50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dda50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dda54:
    // 0x1dda54: 0x0  nop
    ctx->pc = 0x1dda54u;
    // NOP
label_1dda58:
    // 0x1dda58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dda58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1dda5c:
    // 0x1dda5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dda5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dda60:
    // 0x1dda60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dda60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1dda64:
    // 0x1dda64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dda64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dda68:
    // 0x1dda68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dda68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dda6c:
    // 0x1dda6c: 0x3e00008  jr          $ra
label_1dda70:
    if (ctx->pc == 0x1DDA70u) {
        ctx->pc = 0x1DDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA6Cu;
        // 0x1dda70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA74u;
        goto label_fallthrough_0x1dda6c;
    }
    ctx->pc = 0x1DDA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA6Cu;
        // 0x1dda70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dda6c:
    ctx->pc = 0x1DDA74u;
}
