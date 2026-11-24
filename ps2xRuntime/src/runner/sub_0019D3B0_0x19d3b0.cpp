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

// Function: sub_0019D3B0
// Address: 0x19d3b0 - 0x19f1d4
void sub_0019D3B0_0x19d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D3B0_0x19d3b0");
#endif

    switch (ctx->pc) {
        case 0x19d3b0u: goto label_19d3b0;
        case 0x19d3b4u: goto label_19d3b4;
        case 0x19d3b8u: goto label_19d3b8;
        case 0x19d3bcu: goto label_19d3bc;
        case 0x19d3c0u: goto label_19d3c0;
        case 0x19d3c4u: goto label_19d3c4;
        case 0x19d3c8u: goto label_19d3c8;
        case 0x19d3ccu: goto label_19d3cc;
        case 0x19d3d0u: goto label_19d3d0;
        case 0x19d3d4u: goto label_19d3d4;
        case 0x19d3d8u: goto label_19d3d8;
        case 0x19d3dcu: goto label_19d3dc;
        case 0x19d3e0u: goto label_19d3e0;
        case 0x19d3e4u: goto label_19d3e4;
        case 0x19d3e8u: goto label_19d3e8;
        case 0x19d3ecu: goto label_19d3ec;
        case 0x19d3f0u: goto label_19d3f0;
        case 0x19d3f4u: goto label_19d3f4;
        case 0x19d3f8u: goto label_19d3f8;
        case 0x19d3fcu: goto label_19d3fc;
        case 0x19d400u: goto label_19d400;
        case 0x19d404u: goto label_19d404;
        case 0x19d408u: goto label_19d408;
        case 0x19d40cu: goto label_19d40c;
        case 0x19d410u: goto label_19d410;
        case 0x19d414u: goto label_19d414;
        case 0x19d418u: goto label_19d418;
        case 0x19d41cu: goto label_19d41c;
        case 0x19d420u: goto label_19d420;
        case 0x19d424u: goto label_19d424;
        case 0x19d428u: goto label_19d428;
        case 0x19d42cu: goto label_19d42c;
        case 0x19d430u: goto label_19d430;
        case 0x19d434u: goto label_19d434;
        case 0x19d438u: goto label_19d438;
        case 0x19d43cu: goto label_19d43c;
        case 0x19d440u: goto label_19d440;
        case 0x19d444u: goto label_19d444;
        case 0x19d448u: goto label_19d448;
        case 0x19d44cu: goto label_19d44c;
        case 0x19d450u: goto label_19d450;
        case 0x19d454u: goto label_19d454;
        case 0x19d458u: goto label_19d458;
        case 0x19d45cu: goto label_19d45c;
        case 0x19d460u: goto label_19d460;
        case 0x19d464u: goto label_19d464;
        case 0x19d468u: goto label_19d468;
        case 0x19d46cu: goto label_19d46c;
        case 0x19d470u: goto label_19d470;
        case 0x19d474u: goto label_19d474;
        case 0x19d478u: goto label_19d478;
        case 0x19d47cu: goto label_19d47c;
        case 0x19d480u: goto label_19d480;
        case 0x19d484u: goto label_19d484;
        case 0x19d488u: goto label_19d488;
        case 0x19d48cu: goto label_19d48c;
        case 0x19d490u: goto label_19d490;
        case 0x19d494u: goto label_19d494;
        case 0x19d498u: goto label_19d498;
        case 0x19d49cu: goto label_19d49c;
        case 0x19d4a0u: goto label_19d4a0;
        case 0x19d4a4u: goto label_19d4a4;
        case 0x19d4a8u: goto label_19d4a8;
        case 0x19d4acu: goto label_19d4ac;
        case 0x19d4b0u: goto label_19d4b0;
        case 0x19d4b4u: goto label_19d4b4;
        case 0x19d4b8u: goto label_19d4b8;
        case 0x19d4bcu: goto label_19d4bc;
        case 0x19d4c0u: goto label_19d4c0;
        case 0x19d4c4u: goto label_19d4c4;
        case 0x19d4c8u: goto label_19d4c8;
        case 0x19d4ccu: goto label_19d4cc;
        case 0x19d4d0u: goto label_19d4d0;
        case 0x19d4d4u: goto label_19d4d4;
        case 0x19d4d8u: goto label_19d4d8;
        case 0x19d4dcu: goto label_19d4dc;
        case 0x19d4e0u: goto label_19d4e0;
        case 0x19d4e4u: goto label_19d4e4;
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d4ecu: goto label_19d4ec;
        case 0x19d4f0u: goto label_19d4f0;
        case 0x19d4f4u: goto label_19d4f4;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d4fcu: goto label_19d4fc;
        case 0x19d500u: goto label_19d500;
        case 0x19d504u: goto label_19d504;
        case 0x19d508u: goto label_19d508;
        case 0x19d50cu: goto label_19d50c;
        case 0x19d510u: goto label_19d510;
        case 0x19d514u: goto label_19d514;
        case 0x19d518u: goto label_19d518;
        case 0x19d51cu: goto label_19d51c;
        case 0x19d520u: goto label_19d520;
        case 0x19d524u: goto label_19d524;
        case 0x19d528u: goto label_19d528;
        case 0x19d52cu: goto label_19d52c;
        case 0x19d530u: goto label_19d530;
        case 0x19d534u: goto label_19d534;
        case 0x19d538u: goto label_19d538;
        case 0x19d53cu: goto label_19d53c;
        case 0x19d540u: goto label_19d540;
        case 0x19d544u: goto label_19d544;
        case 0x19d548u: goto label_19d548;
        case 0x19d54cu: goto label_19d54c;
        case 0x19d550u: goto label_19d550;
        case 0x19d554u: goto label_19d554;
        case 0x19d558u: goto label_19d558;
        case 0x19d55cu: goto label_19d55c;
        case 0x19d560u: goto label_19d560;
        case 0x19d564u: goto label_19d564;
        case 0x19d568u: goto label_19d568;
        case 0x19d56cu: goto label_19d56c;
        case 0x19d570u: goto label_19d570;
        case 0x19d574u: goto label_19d574;
        case 0x19d578u: goto label_19d578;
        case 0x19d57cu: goto label_19d57c;
        case 0x19d580u: goto label_19d580;
        case 0x19d584u: goto label_19d584;
        case 0x19d588u: goto label_19d588;
        case 0x19d58cu: goto label_19d58c;
        case 0x19d590u: goto label_19d590;
        case 0x19d594u: goto label_19d594;
        case 0x19d598u: goto label_19d598;
        case 0x19d59cu: goto label_19d59c;
        case 0x19d5a0u: goto label_19d5a0;
        case 0x19d5a4u: goto label_19d5a4;
        case 0x19d5a8u: goto label_19d5a8;
        case 0x19d5acu: goto label_19d5ac;
        case 0x19d5b0u: goto label_19d5b0;
        case 0x19d5b4u: goto label_19d5b4;
        case 0x19d5b8u: goto label_19d5b8;
        case 0x19d5bcu: goto label_19d5bc;
        case 0x19d5c0u: goto label_19d5c0;
        case 0x19d5c4u: goto label_19d5c4;
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5ccu: goto label_19d5cc;
        case 0x19d5d0u: goto label_19d5d0;
        case 0x19d5d4u: goto label_19d5d4;
        case 0x19d5d8u: goto label_19d5d8;
        case 0x19d5dcu: goto label_19d5dc;
        case 0x19d5e0u: goto label_19d5e0;
        case 0x19d5e4u: goto label_19d5e4;
        case 0x19d5e8u: goto label_19d5e8;
        case 0x19d5ecu: goto label_19d5ec;
        case 0x19d5f0u: goto label_19d5f0;
        case 0x19d5f4u: goto label_19d5f4;
        case 0x19d5f8u: goto label_19d5f8;
        case 0x19d5fcu: goto label_19d5fc;
        case 0x19d600u: goto label_19d600;
        case 0x19d604u: goto label_19d604;
        case 0x19d608u: goto label_19d608;
        case 0x19d60cu: goto label_19d60c;
        case 0x19d610u: goto label_19d610;
        case 0x19d614u: goto label_19d614;
        case 0x19d618u: goto label_19d618;
        case 0x19d61cu: goto label_19d61c;
        case 0x19d620u: goto label_19d620;
        case 0x19d624u: goto label_19d624;
        case 0x19d628u: goto label_19d628;
        case 0x19d62cu: goto label_19d62c;
        case 0x19d630u: goto label_19d630;
        case 0x19d634u: goto label_19d634;
        case 0x19d638u: goto label_19d638;
        case 0x19d63cu: goto label_19d63c;
        case 0x19d640u: goto label_19d640;
        case 0x19d644u: goto label_19d644;
        case 0x19d648u: goto label_19d648;
        case 0x19d64cu: goto label_19d64c;
        case 0x19d650u: goto label_19d650;
        case 0x19d654u: goto label_19d654;
        case 0x19d658u: goto label_19d658;
        case 0x19d65cu: goto label_19d65c;
        case 0x19d660u: goto label_19d660;
        case 0x19d664u: goto label_19d664;
        case 0x19d668u: goto label_19d668;
        case 0x19d66cu: goto label_19d66c;
        case 0x19d670u: goto label_19d670;
        case 0x19d674u: goto label_19d674;
        case 0x19d678u: goto label_19d678;
        case 0x19d67cu: goto label_19d67c;
        case 0x19d680u: goto label_19d680;
        case 0x19d684u: goto label_19d684;
        case 0x19d688u: goto label_19d688;
        case 0x19d68cu: goto label_19d68c;
        case 0x19d690u: goto label_19d690;
        case 0x19d694u: goto label_19d694;
        case 0x19d698u: goto label_19d698;
        case 0x19d69cu: goto label_19d69c;
        case 0x19d6a0u: goto label_19d6a0;
        case 0x19d6a4u: goto label_19d6a4;
        case 0x19d6a8u: goto label_19d6a8;
        case 0x19d6acu: goto label_19d6ac;
        case 0x19d6b0u: goto label_19d6b0;
        case 0x19d6b4u: goto label_19d6b4;
        case 0x19d6b8u: goto label_19d6b8;
        case 0x19d6bcu: goto label_19d6bc;
        case 0x19d6c0u: goto label_19d6c0;
        case 0x19d6c4u: goto label_19d6c4;
        case 0x19d6c8u: goto label_19d6c8;
        case 0x19d6ccu: goto label_19d6cc;
        case 0x19d6d0u: goto label_19d6d0;
        case 0x19d6d4u: goto label_19d6d4;
        case 0x19d6d8u: goto label_19d6d8;
        case 0x19d6dcu: goto label_19d6dc;
        case 0x19d6e0u: goto label_19d6e0;
        case 0x19d6e4u: goto label_19d6e4;
        case 0x19d6e8u: goto label_19d6e8;
        case 0x19d6ecu: goto label_19d6ec;
        case 0x19d6f0u: goto label_19d6f0;
        case 0x19d6f4u: goto label_19d6f4;
        case 0x19d6f8u: goto label_19d6f8;
        case 0x19d6fcu: goto label_19d6fc;
        case 0x19d700u: goto label_19d700;
        case 0x19d704u: goto label_19d704;
        case 0x19d708u: goto label_19d708;
        case 0x19d70cu: goto label_19d70c;
        case 0x19d710u: goto label_19d710;
        case 0x19d714u: goto label_19d714;
        case 0x19d718u: goto label_19d718;
        case 0x19d71cu: goto label_19d71c;
        case 0x19d720u: goto label_19d720;
        case 0x19d724u: goto label_19d724;
        case 0x19d728u: goto label_19d728;
        case 0x19d72cu: goto label_19d72c;
        case 0x19d730u: goto label_19d730;
        case 0x19d734u: goto label_19d734;
        case 0x19d738u: goto label_19d738;
        case 0x19d73cu: goto label_19d73c;
        case 0x19d740u: goto label_19d740;
        case 0x19d744u: goto label_19d744;
        case 0x19d748u: goto label_19d748;
        case 0x19d74cu: goto label_19d74c;
        case 0x19d750u: goto label_19d750;
        case 0x19d754u: goto label_19d754;
        case 0x19d758u: goto label_19d758;
        case 0x19d75cu: goto label_19d75c;
        case 0x19d760u: goto label_19d760;
        case 0x19d764u: goto label_19d764;
        case 0x19d768u: goto label_19d768;
        case 0x19d76cu: goto label_19d76c;
        case 0x19d770u: goto label_19d770;
        case 0x19d774u: goto label_19d774;
        case 0x19d778u: goto label_19d778;
        case 0x19d77cu: goto label_19d77c;
        case 0x19d780u: goto label_19d780;
        case 0x19d784u: goto label_19d784;
        case 0x19d788u: goto label_19d788;
        case 0x19d78cu: goto label_19d78c;
        case 0x19d790u: goto label_19d790;
        case 0x19d794u: goto label_19d794;
        case 0x19d798u: goto label_19d798;
        case 0x19d79cu: goto label_19d79c;
        case 0x19d7a0u: goto label_19d7a0;
        case 0x19d7a4u: goto label_19d7a4;
        case 0x19d7a8u: goto label_19d7a8;
        case 0x19d7acu: goto label_19d7ac;
        case 0x19d7b0u: goto label_19d7b0;
        case 0x19d7b4u: goto label_19d7b4;
        case 0x19d7b8u: goto label_19d7b8;
        case 0x19d7bcu: goto label_19d7bc;
        case 0x19d7c0u: goto label_19d7c0;
        case 0x19d7c4u: goto label_19d7c4;
        case 0x19d7c8u: goto label_19d7c8;
        case 0x19d7ccu: goto label_19d7cc;
        case 0x19d7d0u: goto label_19d7d0;
        case 0x19d7d4u: goto label_19d7d4;
        case 0x19d7d8u: goto label_19d7d8;
        case 0x19d7dcu: goto label_19d7dc;
        case 0x19d7e0u: goto label_19d7e0;
        case 0x19d7e4u: goto label_19d7e4;
        case 0x19d7e8u: goto label_19d7e8;
        case 0x19d7ecu: goto label_19d7ec;
        case 0x19d7f0u: goto label_19d7f0;
        case 0x19d7f4u: goto label_19d7f4;
        case 0x19d7f8u: goto label_19d7f8;
        case 0x19d7fcu: goto label_19d7fc;
        case 0x19d800u: goto label_19d800;
        case 0x19d804u: goto label_19d804;
        case 0x19d808u: goto label_19d808;
        case 0x19d80cu: goto label_19d80c;
        case 0x19d810u: goto label_19d810;
        case 0x19d814u: goto label_19d814;
        case 0x19d818u: goto label_19d818;
        case 0x19d81cu: goto label_19d81c;
        case 0x19d820u: goto label_19d820;
        case 0x19d824u: goto label_19d824;
        case 0x19d828u: goto label_19d828;
        case 0x19d82cu: goto label_19d82c;
        case 0x19d830u: goto label_19d830;
        case 0x19d834u: goto label_19d834;
        case 0x19d838u: goto label_19d838;
        case 0x19d83cu: goto label_19d83c;
        case 0x19d840u: goto label_19d840;
        case 0x19d844u: goto label_19d844;
        case 0x19d848u: goto label_19d848;
        case 0x19d84cu: goto label_19d84c;
        case 0x19d850u: goto label_19d850;
        case 0x19d854u: goto label_19d854;
        case 0x19d858u: goto label_19d858;
        case 0x19d85cu: goto label_19d85c;
        case 0x19d860u: goto label_19d860;
        case 0x19d864u: goto label_19d864;
        case 0x19d868u: goto label_19d868;
        case 0x19d86cu: goto label_19d86c;
        case 0x19d870u: goto label_19d870;
        case 0x19d874u: goto label_19d874;
        case 0x19d878u: goto label_19d878;
        case 0x19d87cu: goto label_19d87c;
        case 0x19d880u: goto label_19d880;
        case 0x19d884u: goto label_19d884;
        case 0x19d888u: goto label_19d888;
        case 0x19d88cu: goto label_19d88c;
        case 0x19d890u: goto label_19d890;
        case 0x19d894u: goto label_19d894;
        case 0x19d898u: goto label_19d898;
        case 0x19d89cu: goto label_19d89c;
        case 0x19d8a0u: goto label_19d8a0;
        case 0x19d8a4u: goto label_19d8a4;
        case 0x19d8a8u: goto label_19d8a8;
        case 0x19d8acu: goto label_19d8ac;
        case 0x19d8b0u: goto label_19d8b0;
        case 0x19d8b4u: goto label_19d8b4;
        case 0x19d8b8u: goto label_19d8b8;
        case 0x19d8bcu: goto label_19d8bc;
        case 0x19d8c0u: goto label_19d8c0;
        case 0x19d8c4u: goto label_19d8c4;
        case 0x19d8c8u: goto label_19d8c8;
        case 0x19d8ccu: goto label_19d8cc;
        case 0x19d8d0u: goto label_19d8d0;
        case 0x19d8d4u: goto label_19d8d4;
        case 0x19d8d8u: goto label_19d8d8;
        case 0x19d8dcu: goto label_19d8dc;
        case 0x19d8e0u: goto label_19d8e0;
        case 0x19d8e4u: goto label_19d8e4;
        case 0x19d8e8u: goto label_19d8e8;
        case 0x19d8ecu: goto label_19d8ec;
        case 0x19d8f0u: goto label_19d8f0;
        case 0x19d8f4u: goto label_19d8f4;
        case 0x19d8f8u: goto label_19d8f8;
        case 0x19d8fcu: goto label_19d8fc;
        case 0x19d900u: goto label_19d900;
        case 0x19d904u: goto label_19d904;
        case 0x19d908u: goto label_19d908;
        case 0x19d90cu: goto label_19d90c;
        case 0x19d910u: goto label_19d910;
        case 0x19d914u: goto label_19d914;
        case 0x19d918u: goto label_19d918;
        case 0x19d91cu: goto label_19d91c;
        case 0x19d920u: goto label_19d920;
        case 0x19d924u: goto label_19d924;
        case 0x19d928u: goto label_19d928;
        case 0x19d92cu: goto label_19d92c;
        case 0x19d930u: goto label_19d930;
        case 0x19d934u: goto label_19d934;
        case 0x19d938u: goto label_19d938;
        case 0x19d93cu: goto label_19d93c;
        case 0x19d940u: goto label_19d940;
        case 0x19d944u: goto label_19d944;
        case 0x19d948u: goto label_19d948;
        case 0x19d94cu: goto label_19d94c;
        case 0x19d950u: goto label_19d950;
        case 0x19d954u: goto label_19d954;
        case 0x19d958u: goto label_19d958;
        case 0x19d95cu: goto label_19d95c;
        case 0x19d960u: goto label_19d960;
        case 0x19d964u: goto label_19d964;
        case 0x19d968u: goto label_19d968;
        case 0x19d96cu: goto label_19d96c;
        case 0x19d970u: goto label_19d970;
        case 0x19d974u: goto label_19d974;
        case 0x19d978u: goto label_19d978;
        case 0x19d97cu: goto label_19d97c;
        case 0x19d980u: goto label_19d980;
        case 0x19d984u: goto label_19d984;
        case 0x19d988u: goto label_19d988;
        case 0x19d98cu: goto label_19d98c;
        case 0x19d990u: goto label_19d990;
        case 0x19d994u: goto label_19d994;
        case 0x19d998u: goto label_19d998;
        case 0x19d99cu: goto label_19d99c;
        case 0x19d9a0u: goto label_19d9a0;
        case 0x19d9a4u: goto label_19d9a4;
        case 0x19d9a8u: goto label_19d9a8;
        case 0x19d9acu: goto label_19d9ac;
        case 0x19d9b0u: goto label_19d9b0;
        case 0x19d9b4u: goto label_19d9b4;
        case 0x19d9b8u: goto label_19d9b8;
        case 0x19d9bcu: goto label_19d9bc;
        case 0x19d9c0u: goto label_19d9c0;
        case 0x19d9c4u: goto label_19d9c4;
        case 0x19d9c8u: goto label_19d9c8;
        case 0x19d9ccu: goto label_19d9cc;
        case 0x19d9d0u: goto label_19d9d0;
        case 0x19d9d4u: goto label_19d9d4;
        case 0x19d9d8u: goto label_19d9d8;
        case 0x19d9dcu: goto label_19d9dc;
        case 0x19d9e0u: goto label_19d9e0;
        case 0x19d9e4u: goto label_19d9e4;
        case 0x19d9e8u: goto label_19d9e8;
        case 0x19d9ecu: goto label_19d9ec;
        case 0x19d9f0u: goto label_19d9f0;
        case 0x19d9f4u: goto label_19d9f4;
        case 0x19d9f8u: goto label_19d9f8;
        case 0x19d9fcu: goto label_19d9fc;
        case 0x19da00u: goto label_19da00;
        case 0x19da04u: goto label_19da04;
        case 0x19da08u: goto label_19da08;
        case 0x19da0cu: goto label_19da0c;
        case 0x19da10u: goto label_19da10;
        case 0x19da14u: goto label_19da14;
        case 0x19da18u: goto label_19da18;
        case 0x19da1cu: goto label_19da1c;
        case 0x19da20u: goto label_19da20;
        case 0x19da24u: goto label_19da24;
        case 0x19da28u: goto label_19da28;
        case 0x19da2cu: goto label_19da2c;
        case 0x19da30u: goto label_19da30;
        case 0x19da34u: goto label_19da34;
        case 0x19da38u: goto label_19da38;
        case 0x19da3cu: goto label_19da3c;
        case 0x19da40u: goto label_19da40;
        case 0x19da44u: goto label_19da44;
        case 0x19da48u: goto label_19da48;
        case 0x19da4cu: goto label_19da4c;
        case 0x19da50u: goto label_19da50;
        case 0x19da54u: goto label_19da54;
        case 0x19da58u: goto label_19da58;
        case 0x19da5cu: goto label_19da5c;
        case 0x19da60u: goto label_19da60;
        case 0x19da64u: goto label_19da64;
        case 0x19da68u: goto label_19da68;
        case 0x19da6cu: goto label_19da6c;
        case 0x19da70u: goto label_19da70;
        case 0x19da74u: goto label_19da74;
        case 0x19da78u: goto label_19da78;
        case 0x19da7cu: goto label_19da7c;
        case 0x19da80u: goto label_19da80;
        case 0x19da84u: goto label_19da84;
        case 0x19da88u: goto label_19da88;
        case 0x19da8cu: goto label_19da8c;
        case 0x19da90u: goto label_19da90;
        case 0x19da94u: goto label_19da94;
        case 0x19da98u: goto label_19da98;
        case 0x19da9cu: goto label_19da9c;
        case 0x19daa0u: goto label_19daa0;
        case 0x19daa4u: goto label_19daa4;
        case 0x19daa8u: goto label_19daa8;
        case 0x19daacu: goto label_19daac;
        case 0x19dab0u: goto label_19dab0;
        case 0x19dab4u: goto label_19dab4;
        case 0x19dab8u: goto label_19dab8;
        case 0x19dabcu: goto label_19dabc;
        case 0x19dac0u: goto label_19dac0;
        case 0x19dac4u: goto label_19dac4;
        case 0x19dac8u: goto label_19dac8;
        case 0x19daccu: goto label_19dacc;
        case 0x19dad0u: goto label_19dad0;
        case 0x19dad4u: goto label_19dad4;
        case 0x19dad8u: goto label_19dad8;
        case 0x19dadcu: goto label_19dadc;
        case 0x19dae0u: goto label_19dae0;
        case 0x19dae4u: goto label_19dae4;
        case 0x19dae8u: goto label_19dae8;
        case 0x19daecu: goto label_19daec;
        case 0x19daf0u: goto label_19daf0;
        case 0x19daf4u: goto label_19daf4;
        case 0x19daf8u: goto label_19daf8;
        case 0x19dafcu: goto label_19dafc;
        case 0x19db00u: goto label_19db00;
        case 0x19db04u: goto label_19db04;
        case 0x19db08u: goto label_19db08;
        case 0x19db0cu: goto label_19db0c;
        case 0x19db10u: goto label_19db10;
        case 0x19db14u: goto label_19db14;
        case 0x19db18u: goto label_19db18;
        case 0x19db1cu: goto label_19db1c;
        case 0x19db20u: goto label_19db20;
        case 0x19db24u: goto label_19db24;
        case 0x19db28u: goto label_19db28;
        case 0x19db2cu: goto label_19db2c;
        case 0x19db30u: goto label_19db30;
        case 0x19db34u: goto label_19db34;
        case 0x19db38u: goto label_19db38;
        case 0x19db3cu: goto label_19db3c;
        case 0x19db40u: goto label_19db40;
        case 0x19db44u: goto label_19db44;
        case 0x19db48u: goto label_19db48;
        case 0x19db4cu: goto label_19db4c;
        case 0x19db50u: goto label_19db50;
        case 0x19db54u: goto label_19db54;
        case 0x19db58u: goto label_19db58;
        case 0x19db5cu: goto label_19db5c;
        case 0x19db60u: goto label_19db60;
        case 0x19db64u: goto label_19db64;
        case 0x19db68u: goto label_19db68;
        case 0x19db6cu: goto label_19db6c;
        case 0x19db70u: goto label_19db70;
        case 0x19db74u: goto label_19db74;
        case 0x19db78u: goto label_19db78;
        case 0x19db7cu: goto label_19db7c;
        case 0x19db80u: goto label_19db80;
        case 0x19db84u: goto label_19db84;
        case 0x19db88u: goto label_19db88;
        case 0x19db8cu: goto label_19db8c;
        case 0x19db90u: goto label_19db90;
        case 0x19db94u: goto label_19db94;
        case 0x19db98u: goto label_19db98;
        case 0x19db9cu: goto label_19db9c;
        case 0x19dba0u: goto label_19dba0;
        case 0x19dba4u: goto label_19dba4;
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbacu: goto label_19dbac;
        case 0x19dbb0u: goto label_19dbb0;
        case 0x19dbb4u: goto label_19dbb4;
        case 0x19dbb8u: goto label_19dbb8;
        case 0x19dbbcu: goto label_19dbbc;
        case 0x19dbc0u: goto label_19dbc0;
        case 0x19dbc4u: goto label_19dbc4;
        case 0x19dbc8u: goto label_19dbc8;
        case 0x19dbccu: goto label_19dbcc;
        case 0x19dbd0u: goto label_19dbd0;
        case 0x19dbd4u: goto label_19dbd4;
        case 0x19dbd8u: goto label_19dbd8;
        case 0x19dbdcu: goto label_19dbdc;
        case 0x19dbe0u: goto label_19dbe0;
        case 0x19dbe4u: goto label_19dbe4;
        case 0x19dbe8u: goto label_19dbe8;
        case 0x19dbecu: goto label_19dbec;
        case 0x19dbf0u: goto label_19dbf0;
        case 0x19dbf4u: goto label_19dbf4;
        case 0x19dbf8u: goto label_19dbf8;
        case 0x19dbfcu: goto label_19dbfc;
        case 0x19dc00u: goto label_19dc00;
        case 0x19dc04u: goto label_19dc04;
        case 0x19dc08u: goto label_19dc08;
        case 0x19dc0cu: goto label_19dc0c;
        case 0x19dc10u: goto label_19dc10;
        case 0x19dc14u: goto label_19dc14;
        case 0x19dc18u: goto label_19dc18;
        case 0x19dc1cu: goto label_19dc1c;
        case 0x19dc20u: goto label_19dc20;
        case 0x19dc24u: goto label_19dc24;
        case 0x19dc28u: goto label_19dc28;
        case 0x19dc2cu: goto label_19dc2c;
        case 0x19dc30u: goto label_19dc30;
        case 0x19dc34u: goto label_19dc34;
        case 0x19dc38u: goto label_19dc38;
        case 0x19dc3cu: goto label_19dc3c;
        case 0x19dc40u: goto label_19dc40;
        case 0x19dc44u: goto label_19dc44;
        case 0x19dc48u: goto label_19dc48;
        case 0x19dc4cu: goto label_19dc4c;
        case 0x19dc50u: goto label_19dc50;
        case 0x19dc54u: goto label_19dc54;
        case 0x19dc58u: goto label_19dc58;
        case 0x19dc5cu: goto label_19dc5c;
        case 0x19dc60u: goto label_19dc60;
        case 0x19dc64u: goto label_19dc64;
        case 0x19dc68u: goto label_19dc68;
        case 0x19dc6cu: goto label_19dc6c;
        case 0x19dc70u: goto label_19dc70;
        case 0x19dc74u: goto label_19dc74;
        case 0x19dc78u: goto label_19dc78;
        case 0x19dc7cu: goto label_19dc7c;
        case 0x19dc80u: goto label_19dc80;
        case 0x19dc84u: goto label_19dc84;
        case 0x19dc88u: goto label_19dc88;
        case 0x19dc8cu: goto label_19dc8c;
        case 0x19dc90u: goto label_19dc90;
        case 0x19dc94u: goto label_19dc94;
        case 0x19dc98u: goto label_19dc98;
        case 0x19dc9cu: goto label_19dc9c;
        case 0x19dca0u: goto label_19dca0;
        case 0x19dca4u: goto label_19dca4;
        case 0x19dca8u: goto label_19dca8;
        case 0x19dcacu: goto label_19dcac;
        case 0x19dcb0u: goto label_19dcb0;
        case 0x19dcb4u: goto label_19dcb4;
        case 0x19dcb8u: goto label_19dcb8;
        case 0x19dcbcu: goto label_19dcbc;
        case 0x19dcc0u: goto label_19dcc0;
        case 0x19dcc4u: goto label_19dcc4;
        case 0x19dcc8u: goto label_19dcc8;
        case 0x19dcccu: goto label_19dccc;
        case 0x19dcd0u: goto label_19dcd0;
        case 0x19dcd4u: goto label_19dcd4;
        case 0x19dcd8u: goto label_19dcd8;
        case 0x19dcdcu: goto label_19dcdc;
        case 0x19dce0u: goto label_19dce0;
        case 0x19dce4u: goto label_19dce4;
        case 0x19dce8u: goto label_19dce8;
        case 0x19dcecu: goto label_19dcec;
        case 0x19dcf0u: goto label_19dcf0;
        case 0x19dcf4u: goto label_19dcf4;
        case 0x19dcf8u: goto label_19dcf8;
        case 0x19dcfcu: goto label_19dcfc;
        case 0x19dd00u: goto label_19dd00;
        case 0x19dd04u: goto label_19dd04;
        case 0x19dd08u: goto label_19dd08;
        case 0x19dd0cu: goto label_19dd0c;
        case 0x19dd10u: goto label_19dd10;
        case 0x19dd14u: goto label_19dd14;
        case 0x19dd18u: goto label_19dd18;
        case 0x19dd1cu: goto label_19dd1c;
        case 0x19dd20u: goto label_19dd20;
        case 0x19dd24u: goto label_19dd24;
        case 0x19dd28u: goto label_19dd28;
        case 0x19dd2cu: goto label_19dd2c;
        case 0x19dd30u: goto label_19dd30;
        case 0x19dd34u: goto label_19dd34;
        case 0x19dd38u: goto label_19dd38;
        case 0x19dd3cu: goto label_19dd3c;
        case 0x19dd40u: goto label_19dd40;
        case 0x19dd44u: goto label_19dd44;
        case 0x19dd48u: goto label_19dd48;
        case 0x19dd4cu: goto label_19dd4c;
        case 0x19dd50u: goto label_19dd50;
        case 0x19dd54u: goto label_19dd54;
        case 0x19dd58u: goto label_19dd58;
        case 0x19dd5cu: goto label_19dd5c;
        case 0x19dd60u: goto label_19dd60;
        case 0x19dd64u: goto label_19dd64;
        case 0x19dd68u: goto label_19dd68;
        case 0x19dd6cu: goto label_19dd6c;
        case 0x19dd70u: goto label_19dd70;
        case 0x19dd74u: goto label_19dd74;
        case 0x19dd78u: goto label_19dd78;
        case 0x19dd7cu: goto label_19dd7c;
        case 0x19dd80u: goto label_19dd80;
        case 0x19dd84u: goto label_19dd84;
        case 0x19dd88u: goto label_19dd88;
        case 0x19dd8cu: goto label_19dd8c;
        case 0x19dd90u: goto label_19dd90;
        case 0x19dd94u: goto label_19dd94;
        case 0x19dd98u: goto label_19dd98;
        case 0x19dd9cu: goto label_19dd9c;
        case 0x19dda0u: goto label_19dda0;
        case 0x19dda4u: goto label_19dda4;
        case 0x19dda8u: goto label_19dda8;
        case 0x19ddacu: goto label_19ddac;
        case 0x19ddb0u: goto label_19ddb0;
        case 0x19ddb4u: goto label_19ddb4;
        case 0x19ddb8u: goto label_19ddb8;
        case 0x19ddbcu: goto label_19ddbc;
        case 0x19ddc0u: goto label_19ddc0;
        case 0x19ddc4u: goto label_19ddc4;
        case 0x19ddc8u: goto label_19ddc8;
        case 0x19ddccu: goto label_19ddcc;
        case 0x19ddd0u: goto label_19ddd0;
        case 0x19ddd4u: goto label_19ddd4;
        case 0x19ddd8u: goto label_19ddd8;
        case 0x19dddcu: goto label_19dddc;
        case 0x19dde0u: goto label_19dde0;
        case 0x19dde4u: goto label_19dde4;
        case 0x19dde8u: goto label_19dde8;
        case 0x19ddecu: goto label_19ddec;
        case 0x19ddf0u: goto label_19ddf0;
        case 0x19ddf4u: goto label_19ddf4;
        case 0x19ddf8u: goto label_19ddf8;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de00u: goto label_19de00;
        case 0x19de04u: goto label_19de04;
        case 0x19de08u: goto label_19de08;
        case 0x19de0cu: goto label_19de0c;
        case 0x19de10u: goto label_19de10;
        case 0x19de14u: goto label_19de14;
        case 0x19de18u: goto label_19de18;
        case 0x19de1cu: goto label_19de1c;
        case 0x19de20u: goto label_19de20;
        case 0x19de24u: goto label_19de24;
        case 0x19de28u: goto label_19de28;
        case 0x19de2cu: goto label_19de2c;
        case 0x19de30u: goto label_19de30;
        case 0x19de34u: goto label_19de34;
        case 0x19de38u: goto label_19de38;
        case 0x19de3cu: goto label_19de3c;
        case 0x19de40u: goto label_19de40;
        case 0x19de44u: goto label_19de44;
        case 0x19de48u: goto label_19de48;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de50u: goto label_19de50;
        case 0x19de54u: goto label_19de54;
        case 0x19de58u: goto label_19de58;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de60u: goto label_19de60;
        case 0x19de64u: goto label_19de64;
        case 0x19de68u: goto label_19de68;
        case 0x19de6cu: goto label_19de6c;
        case 0x19de70u: goto label_19de70;
        case 0x19de74u: goto label_19de74;
        case 0x19de78u: goto label_19de78;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de80u: goto label_19de80;
        case 0x19de84u: goto label_19de84;
        case 0x19de88u: goto label_19de88;
        case 0x19de8cu: goto label_19de8c;
        case 0x19de90u: goto label_19de90;
        case 0x19de94u: goto label_19de94;
        case 0x19de98u: goto label_19de98;
        case 0x19de9cu: goto label_19de9c;
        case 0x19dea0u: goto label_19dea0;
        case 0x19dea4u: goto label_19dea4;
        case 0x19dea8u: goto label_19dea8;
        case 0x19deacu: goto label_19deac;
        case 0x19deb0u: goto label_19deb0;
        case 0x19deb4u: goto label_19deb4;
        case 0x19deb8u: goto label_19deb8;
        case 0x19debcu: goto label_19debc;
        case 0x19dec0u: goto label_19dec0;
        case 0x19dec4u: goto label_19dec4;
        case 0x19dec8u: goto label_19dec8;
        case 0x19deccu: goto label_19decc;
        case 0x19ded0u: goto label_19ded0;
        case 0x19ded4u: goto label_19ded4;
        case 0x19ded8u: goto label_19ded8;
        case 0x19dedcu: goto label_19dedc;
        case 0x19dee0u: goto label_19dee0;
        case 0x19dee4u: goto label_19dee4;
        case 0x19dee8u: goto label_19dee8;
        case 0x19deecu: goto label_19deec;
        case 0x19def0u: goto label_19def0;
        case 0x19def4u: goto label_19def4;
        case 0x19def8u: goto label_19def8;
        case 0x19defcu: goto label_19defc;
        case 0x19df00u: goto label_19df00;
        case 0x19df04u: goto label_19df04;
        case 0x19df08u: goto label_19df08;
        case 0x19df0cu: goto label_19df0c;
        case 0x19df10u: goto label_19df10;
        case 0x19df14u: goto label_19df14;
        case 0x19df18u: goto label_19df18;
        case 0x19df1cu: goto label_19df1c;
        case 0x19df20u: goto label_19df20;
        case 0x19df24u: goto label_19df24;
        case 0x19df28u: goto label_19df28;
        case 0x19df2cu: goto label_19df2c;
        case 0x19df30u: goto label_19df30;
        case 0x19df34u: goto label_19df34;
        case 0x19df38u: goto label_19df38;
        case 0x19df3cu: goto label_19df3c;
        case 0x19df40u: goto label_19df40;
        case 0x19df44u: goto label_19df44;
        case 0x19df48u: goto label_19df48;
        case 0x19df4cu: goto label_19df4c;
        case 0x19df50u: goto label_19df50;
        case 0x19df54u: goto label_19df54;
        case 0x19df58u: goto label_19df58;
        case 0x19df5cu: goto label_19df5c;
        case 0x19df60u: goto label_19df60;
        case 0x19df64u: goto label_19df64;
        case 0x19df68u: goto label_19df68;
        case 0x19df6cu: goto label_19df6c;
        case 0x19df70u: goto label_19df70;
        case 0x19df74u: goto label_19df74;
        case 0x19df78u: goto label_19df78;
        case 0x19df7cu: goto label_19df7c;
        case 0x19df80u: goto label_19df80;
        case 0x19df84u: goto label_19df84;
        case 0x19df88u: goto label_19df88;
        case 0x19df8cu: goto label_19df8c;
        case 0x19df90u: goto label_19df90;
        case 0x19df94u: goto label_19df94;
        case 0x19df98u: goto label_19df98;
        case 0x19df9cu: goto label_19df9c;
        case 0x19dfa0u: goto label_19dfa0;
        case 0x19dfa4u: goto label_19dfa4;
        case 0x19dfa8u: goto label_19dfa8;
        case 0x19dfacu: goto label_19dfac;
        case 0x19dfb0u: goto label_19dfb0;
        case 0x19dfb4u: goto label_19dfb4;
        case 0x19dfb8u: goto label_19dfb8;
        case 0x19dfbcu: goto label_19dfbc;
        case 0x19dfc0u: goto label_19dfc0;
        case 0x19dfc4u: goto label_19dfc4;
        case 0x19dfc8u: goto label_19dfc8;
        case 0x19dfccu: goto label_19dfcc;
        case 0x19dfd0u: goto label_19dfd0;
        case 0x19dfd4u: goto label_19dfd4;
        case 0x19dfd8u: goto label_19dfd8;
        case 0x19dfdcu: goto label_19dfdc;
        case 0x19dfe0u: goto label_19dfe0;
        case 0x19dfe4u: goto label_19dfe4;
        case 0x19dfe8u: goto label_19dfe8;
        case 0x19dfecu: goto label_19dfec;
        case 0x19dff0u: goto label_19dff0;
        case 0x19dff4u: goto label_19dff4;
        case 0x19dff8u: goto label_19dff8;
        case 0x19dffcu: goto label_19dffc;
        case 0x19e000u: goto label_19e000;
        case 0x19e004u: goto label_19e004;
        case 0x19e008u: goto label_19e008;
        case 0x19e00cu: goto label_19e00c;
        case 0x19e010u: goto label_19e010;
        case 0x19e014u: goto label_19e014;
        case 0x19e018u: goto label_19e018;
        case 0x19e01cu: goto label_19e01c;
        case 0x19e020u: goto label_19e020;
        case 0x19e024u: goto label_19e024;
        case 0x19e028u: goto label_19e028;
        case 0x19e02cu: goto label_19e02c;
        case 0x19e030u: goto label_19e030;
        case 0x19e034u: goto label_19e034;
        case 0x19e038u: goto label_19e038;
        case 0x19e03cu: goto label_19e03c;
        case 0x19e040u: goto label_19e040;
        case 0x19e044u: goto label_19e044;
        case 0x19e048u: goto label_19e048;
        case 0x19e04cu: goto label_19e04c;
        case 0x19e050u: goto label_19e050;
        case 0x19e054u: goto label_19e054;
        case 0x19e058u: goto label_19e058;
        case 0x19e05cu: goto label_19e05c;
        case 0x19e060u: goto label_19e060;
        case 0x19e064u: goto label_19e064;
        case 0x19e068u: goto label_19e068;
        case 0x19e06cu: goto label_19e06c;
        case 0x19e070u: goto label_19e070;
        case 0x19e074u: goto label_19e074;
        case 0x19e078u: goto label_19e078;
        case 0x19e07cu: goto label_19e07c;
        case 0x19e080u: goto label_19e080;
        case 0x19e084u: goto label_19e084;
        case 0x19e088u: goto label_19e088;
        case 0x19e08cu: goto label_19e08c;
        case 0x19e090u: goto label_19e090;
        case 0x19e094u: goto label_19e094;
        case 0x19e098u: goto label_19e098;
        case 0x19e09cu: goto label_19e09c;
        case 0x19e0a0u: goto label_19e0a0;
        case 0x19e0a4u: goto label_19e0a4;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0acu: goto label_19e0ac;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0b8u: goto label_19e0b8;
        case 0x19e0bcu: goto label_19e0bc;
        case 0x19e0c0u: goto label_19e0c0;
        case 0x19e0c4u: goto label_19e0c4;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0ccu: goto label_19e0cc;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0dcu: goto label_19e0dc;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e0e4u: goto label_19e0e4;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e0ecu: goto label_19e0ec;
        case 0x19e0f0u: goto label_19e0f0;
        case 0x19e0f4u: goto label_19e0f4;
        case 0x19e0f8u: goto label_19e0f8;
        case 0x19e0fcu: goto label_19e0fc;
        case 0x19e100u: goto label_19e100;
        case 0x19e104u: goto label_19e104;
        case 0x19e108u: goto label_19e108;
        case 0x19e10cu: goto label_19e10c;
        case 0x19e110u: goto label_19e110;
        case 0x19e114u: goto label_19e114;
        case 0x19e118u: goto label_19e118;
        case 0x19e11cu: goto label_19e11c;
        case 0x19e120u: goto label_19e120;
        case 0x19e124u: goto label_19e124;
        case 0x19e128u: goto label_19e128;
        case 0x19e12cu: goto label_19e12c;
        case 0x19e130u: goto label_19e130;
        case 0x19e134u: goto label_19e134;
        case 0x19e138u: goto label_19e138;
        case 0x19e13cu: goto label_19e13c;
        case 0x19e140u: goto label_19e140;
        case 0x19e144u: goto label_19e144;
        case 0x19e148u: goto label_19e148;
        case 0x19e14cu: goto label_19e14c;
        case 0x19e150u: goto label_19e150;
        case 0x19e154u: goto label_19e154;
        case 0x19e158u: goto label_19e158;
        case 0x19e15cu: goto label_19e15c;
        case 0x19e160u: goto label_19e160;
        case 0x19e164u: goto label_19e164;
        case 0x19e168u: goto label_19e168;
        case 0x19e16cu: goto label_19e16c;
        case 0x19e170u: goto label_19e170;
        case 0x19e174u: goto label_19e174;
        case 0x19e178u: goto label_19e178;
        case 0x19e17cu: goto label_19e17c;
        case 0x19e180u: goto label_19e180;
        case 0x19e184u: goto label_19e184;
        case 0x19e188u: goto label_19e188;
        case 0x19e18cu: goto label_19e18c;
        case 0x19e190u: goto label_19e190;
        case 0x19e194u: goto label_19e194;
        case 0x19e198u: goto label_19e198;
        case 0x19e19cu: goto label_19e19c;
        case 0x19e1a0u: goto label_19e1a0;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1a8u: goto label_19e1a8;
        case 0x19e1acu: goto label_19e1ac;
        case 0x19e1b0u: goto label_19e1b0;
        case 0x19e1b4u: goto label_19e1b4;
        case 0x19e1b8u: goto label_19e1b8;
        case 0x19e1bcu: goto label_19e1bc;
        case 0x19e1c0u: goto label_19e1c0;
        case 0x19e1c4u: goto label_19e1c4;
        case 0x19e1c8u: goto label_19e1c8;
        case 0x19e1ccu: goto label_19e1cc;
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1d8u: goto label_19e1d8;
        case 0x19e1dcu: goto label_19e1dc;
        case 0x19e1e0u: goto label_19e1e0;
        case 0x19e1e4u: goto label_19e1e4;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e1f0u: goto label_19e1f0;
        case 0x19e1f4u: goto label_19e1f4;
        case 0x19e1f8u: goto label_19e1f8;
        case 0x19e1fcu: goto label_19e1fc;
        case 0x19e200u: goto label_19e200;
        case 0x19e204u: goto label_19e204;
        case 0x19e208u: goto label_19e208;
        case 0x19e20cu: goto label_19e20c;
        case 0x19e210u: goto label_19e210;
        case 0x19e214u: goto label_19e214;
        case 0x19e218u: goto label_19e218;
        case 0x19e21cu: goto label_19e21c;
        case 0x19e220u: goto label_19e220;
        case 0x19e224u: goto label_19e224;
        case 0x19e228u: goto label_19e228;
        case 0x19e22cu: goto label_19e22c;
        case 0x19e230u: goto label_19e230;
        case 0x19e234u: goto label_19e234;
        case 0x19e238u: goto label_19e238;
        case 0x19e23cu: goto label_19e23c;
        case 0x19e240u: goto label_19e240;
        case 0x19e244u: goto label_19e244;
        case 0x19e248u: goto label_19e248;
        case 0x19e24cu: goto label_19e24c;
        case 0x19e250u: goto label_19e250;
        case 0x19e254u: goto label_19e254;
        case 0x19e258u: goto label_19e258;
        case 0x19e25cu: goto label_19e25c;
        case 0x19e260u: goto label_19e260;
        case 0x19e264u: goto label_19e264;
        case 0x19e268u: goto label_19e268;
        case 0x19e26cu: goto label_19e26c;
        case 0x19e270u: goto label_19e270;
        case 0x19e274u: goto label_19e274;
        case 0x19e278u: goto label_19e278;
        case 0x19e27cu: goto label_19e27c;
        case 0x19e280u: goto label_19e280;
        case 0x19e284u: goto label_19e284;
        case 0x19e288u: goto label_19e288;
        case 0x19e28cu: goto label_19e28c;
        case 0x19e290u: goto label_19e290;
        case 0x19e294u: goto label_19e294;
        case 0x19e298u: goto label_19e298;
        case 0x19e29cu: goto label_19e29c;
        case 0x19e2a0u: goto label_19e2a0;
        case 0x19e2a4u: goto label_19e2a4;
        case 0x19e2a8u: goto label_19e2a8;
        case 0x19e2acu: goto label_19e2ac;
        case 0x19e2b0u: goto label_19e2b0;
        case 0x19e2b4u: goto label_19e2b4;
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e2bcu: goto label_19e2bc;
        case 0x19e2c0u: goto label_19e2c0;
        case 0x19e2c4u: goto label_19e2c4;
        case 0x19e2c8u: goto label_19e2c8;
        case 0x19e2ccu: goto label_19e2cc;
        case 0x19e2d0u: goto label_19e2d0;
        case 0x19e2d4u: goto label_19e2d4;
        case 0x19e2d8u: goto label_19e2d8;
        case 0x19e2dcu: goto label_19e2dc;
        case 0x19e2e0u: goto label_19e2e0;
        case 0x19e2e4u: goto label_19e2e4;
        case 0x19e2e8u: goto label_19e2e8;
        case 0x19e2ecu: goto label_19e2ec;
        case 0x19e2f0u: goto label_19e2f0;
        case 0x19e2f4u: goto label_19e2f4;
        case 0x19e2f8u: goto label_19e2f8;
        case 0x19e2fcu: goto label_19e2fc;
        case 0x19e300u: goto label_19e300;
        case 0x19e304u: goto label_19e304;
        case 0x19e308u: goto label_19e308;
        case 0x19e30cu: goto label_19e30c;
        case 0x19e310u: goto label_19e310;
        case 0x19e314u: goto label_19e314;
        case 0x19e318u: goto label_19e318;
        case 0x19e31cu: goto label_19e31c;
        case 0x19e320u: goto label_19e320;
        case 0x19e324u: goto label_19e324;
        case 0x19e328u: goto label_19e328;
        case 0x19e32cu: goto label_19e32c;
        case 0x19e330u: goto label_19e330;
        case 0x19e334u: goto label_19e334;
        case 0x19e338u: goto label_19e338;
        case 0x19e33cu: goto label_19e33c;
        case 0x19e340u: goto label_19e340;
        case 0x19e344u: goto label_19e344;
        case 0x19e348u: goto label_19e348;
        case 0x19e34cu: goto label_19e34c;
        case 0x19e350u: goto label_19e350;
        case 0x19e354u: goto label_19e354;
        case 0x19e358u: goto label_19e358;
        case 0x19e35cu: goto label_19e35c;
        case 0x19e360u: goto label_19e360;
        case 0x19e364u: goto label_19e364;
        case 0x19e368u: goto label_19e368;
        case 0x19e36cu: goto label_19e36c;
        case 0x19e370u: goto label_19e370;
        case 0x19e374u: goto label_19e374;
        case 0x19e378u: goto label_19e378;
        case 0x19e37cu: goto label_19e37c;
        case 0x19e380u: goto label_19e380;
        case 0x19e384u: goto label_19e384;
        case 0x19e388u: goto label_19e388;
        case 0x19e38cu: goto label_19e38c;
        case 0x19e390u: goto label_19e390;
        case 0x19e394u: goto label_19e394;
        case 0x19e398u: goto label_19e398;
        case 0x19e39cu: goto label_19e39c;
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3a4u: goto label_19e3a4;
        case 0x19e3a8u: goto label_19e3a8;
        case 0x19e3acu: goto label_19e3ac;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3b4u: goto label_19e3b4;
        case 0x19e3b8u: goto label_19e3b8;
        case 0x19e3bcu: goto label_19e3bc;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3c4u: goto label_19e3c4;
        case 0x19e3c8u: goto label_19e3c8;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d0u: goto label_19e3d0;
        case 0x19e3d4u: goto label_19e3d4;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3dcu: goto label_19e3dc;
        case 0x19e3e0u: goto label_19e3e0;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e3e8u: goto label_19e3e8;
        case 0x19e3ecu: goto label_19e3ec;
        case 0x19e3f0u: goto label_19e3f0;
        case 0x19e3f4u: goto label_19e3f4;
        case 0x19e3f8u: goto label_19e3f8;
        case 0x19e3fcu: goto label_19e3fc;
        case 0x19e400u: goto label_19e400;
        case 0x19e404u: goto label_19e404;
        case 0x19e408u: goto label_19e408;
        case 0x19e40cu: goto label_19e40c;
        case 0x19e410u: goto label_19e410;
        case 0x19e414u: goto label_19e414;
        case 0x19e418u: goto label_19e418;
        case 0x19e41cu: goto label_19e41c;
        case 0x19e420u: goto label_19e420;
        case 0x19e424u: goto label_19e424;
        case 0x19e428u: goto label_19e428;
        case 0x19e42cu: goto label_19e42c;
        case 0x19e430u: goto label_19e430;
        case 0x19e434u: goto label_19e434;
        case 0x19e438u: goto label_19e438;
        case 0x19e43cu: goto label_19e43c;
        case 0x19e440u: goto label_19e440;
        case 0x19e444u: goto label_19e444;
        case 0x19e448u: goto label_19e448;
        case 0x19e44cu: goto label_19e44c;
        case 0x19e450u: goto label_19e450;
        case 0x19e454u: goto label_19e454;
        case 0x19e458u: goto label_19e458;
        case 0x19e45cu: goto label_19e45c;
        case 0x19e460u: goto label_19e460;
        case 0x19e464u: goto label_19e464;
        case 0x19e468u: goto label_19e468;
        case 0x19e46cu: goto label_19e46c;
        case 0x19e470u: goto label_19e470;
        case 0x19e474u: goto label_19e474;
        case 0x19e478u: goto label_19e478;
        case 0x19e47cu: goto label_19e47c;
        case 0x19e480u: goto label_19e480;
        case 0x19e484u: goto label_19e484;
        case 0x19e488u: goto label_19e488;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e490u: goto label_19e490;
        case 0x19e494u: goto label_19e494;
        case 0x19e498u: goto label_19e498;
        case 0x19e49cu: goto label_19e49c;
        case 0x19e4a0u: goto label_19e4a0;
        case 0x19e4a4u: goto label_19e4a4;
        case 0x19e4a8u: goto label_19e4a8;
        case 0x19e4acu: goto label_19e4ac;
        case 0x19e4b0u: goto label_19e4b0;
        case 0x19e4b4u: goto label_19e4b4;
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4c0u: goto label_19e4c0;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ccu: goto label_19e4cc;
        case 0x19e4d0u: goto label_19e4d0;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e4d8u: goto label_19e4d8;
        case 0x19e4dcu: goto label_19e4dc;
        case 0x19e4e0u: goto label_19e4e0;
        case 0x19e4e4u: goto label_19e4e4;
        case 0x19e4e8u: goto label_19e4e8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e4f4u: goto label_19e4f4;
        case 0x19e4f8u: goto label_19e4f8;
        case 0x19e4fcu: goto label_19e4fc;
        case 0x19e500u: goto label_19e500;
        case 0x19e504u: goto label_19e504;
        case 0x19e508u: goto label_19e508;
        case 0x19e50cu: goto label_19e50c;
        case 0x19e510u: goto label_19e510;
        case 0x19e514u: goto label_19e514;
        case 0x19e518u: goto label_19e518;
        case 0x19e51cu: goto label_19e51c;
        case 0x19e520u: goto label_19e520;
        case 0x19e524u: goto label_19e524;
        case 0x19e528u: goto label_19e528;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e530u: goto label_19e530;
        case 0x19e534u: goto label_19e534;
        case 0x19e538u: goto label_19e538;
        case 0x19e53cu: goto label_19e53c;
        case 0x19e540u: goto label_19e540;
        case 0x19e544u: goto label_19e544;
        case 0x19e548u: goto label_19e548;
        case 0x19e54cu: goto label_19e54c;
        case 0x19e550u: goto label_19e550;
        case 0x19e554u: goto label_19e554;
        case 0x19e558u: goto label_19e558;
        case 0x19e55cu: goto label_19e55c;
        case 0x19e560u: goto label_19e560;
        case 0x19e564u: goto label_19e564;
        case 0x19e568u: goto label_19e568;
        case 0x19e56cu: goto label_19e56c;
        case 0x19e570u: goto label_19e570;
        case 0x19e574u: goto label_19e574;
        case 0x19e578u: goto label_19e578;
        case 0x19e57cu: goto label_19e57c;
        case 0x19e580u: goto label_19e580;
        case 0x19e584u: goto label_19e584;
        case 0x19e588u: goto label_19e588;
        case 0x19e58cu: goto label_19e58c;
        case 0x19e590u: goto label_19e590;
        case 0x19e594u: goto label_19e594;
        case 0x19e598u: goto label_19e598;
        case 0x19e59cu: goto label_19e59c;
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5a4u: goto label_19e5a4;
        case 0x19e5a8u: goto label_19e5a8;
        case 0x19e5acu: goto label_19e5ac;
        case 0x19e5b0u: goto label_19e5b0;
        case 0x19e5b4u: goto label_19e5b4;
        case 0x19e5b8u: goto label_19e5b8;
        case 0x19e5bcu: goto label_19e5bc;
        case 0x19e5c0u: goto label_19e5c0;
        case 0x19e5c4u: goto label_19e5c4;
        case 0x19e5c8u: goto label_19e5c8;
        case 0x19e5ccu: goto label_19e5cc;
        case 0x19e5d0u: goto label_19e5d0;
        case 0x19e5d4u: goto label_19e5d4;
        case 0x19e5d8u: goto label_19e5d8;
        case 0x19e5dcu: goto label_19e5dc;
        case 0x19e5e0u: goto label_19e5e0;
        case 0x19e5e4u: goto label_19e5e4;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e5ecu: goto label_19e5ec;
        case 0x19e5f0u: goto label_19e5f0;
        case 0x19e5f4u: goto label_19e5f4;
        case 0x19e5f8u: goto label_19e5f8;
        case 0x19e5fcu: goto label_19e5fc;
        case 0x19e600u: goto label_19e600;
        case 0x19e604u: goto label_19e604;
        case 0x19e608u: goto label_19e608;
        case 0x19e60cu: goto label_19e60c;
        case 0x19e610u: goto label_19e610;
        case 0x19e614u: goto label_19e614;
        case 0x19e618u: goto label_19e618;
        case 0x19e61cu: goto label_19e61c;
        case 0x19e620u: goto label_19e620;
        case 0x19e624u: goto label_19e624;
        case 0x19e628u: goto label_19e628;
        case 0x19e62cu: goto label_19e62c;
        case 0x19e630u: goto label_19e630;
        case 0x19e634u: goto label_19e634;
        case 0x19e638u: goto label_19e638;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e640u: goto label_19e640;
        case 0x19e644u: goto label_19e644;
        case 0x19e648u: goto label_19e648;
        case 0x19e64cu: goto label_19e64c;
        case 0x19e650u: goto label_19e650;
        case 0x19e654u: goto label_19e654;
        case 0x19e658u: goto label_19e658;
        case 0x19e65cu: goto label_19e65c;
        case 0x19e660u: goto label_19e660;
        case 0x19e664u: goto label_19e664;
        case 0x19e668u: goto label_19e668;
        case 0x19e66cu: goto label_19e66c;
        case 0x19e670u: goto label_19e670;
        case 0x19e674u: goto label_19e674;
        case 0x19e678u: goto label_19e678;
        case 0x19e67cu: goto label_19e67c;
        case 0x19e680u: goto label_19e680;
        case 0x19e684u: goto label_19e684;
        case 0x19e688u: goto label_19e688;
        case 0x19e68cu: goto label_19e68c;
        case 0x19e690u: goto label_19e690;
        case 0x19e694u: goto label_19e694;
        case 0x19e698u: goto label_19e698;
        case 0x19e69cu: goto label_19e69c;
        case 0x19e6a0u: goto label_19e6a0;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6a8u: goto label_19e6a8;
        case 0x19e6acu: goto label_19e6ac;
        case 0x19e6b0u: goto label_19e6b0;
        case 0x19e6b4u: goto label_19e6b4;
        case 0x19e6b8u: goto label_19e6b8;
        case 0x19e6bcu: goto label_19e6bc;
        case 0x19e6c0u: goto label_19e6c0;
        case 0x19e6c4u: goto label_19e6c4;
        case 0x19e6c8u: goto label_19e6c8;
        case 0x19e6ccu: goto label_19e6cc;
        case 0x19e6d0u: goto label_19e6d0;
        case 0x19e6d4u: goto label_19e6d4;
        case 0x19e6d8u: goto label_19e6d8;
        case 0x19e6dcu: goto label_19e6dc;
        case 0x19e6e0u: goto label_19e6e0;
        case 0x19e6e4u: goto label_19e6e4;
        case 0x19e6e8u: goto label_19e6e8;
        case 0x19e6ecu: goto label_19e6ec;
        case 0x19e6f0u: goto label_19e6f0;
        case 0x19e6f4u: goto label_19e6f4;
        case 0x19e6f8u: goto label_19e6f8;
        case 0x19e6fcu: goto label_19e6fc;
        case 0x19e700u: goto label_19e700;
        case 0x19e704u: goto label_19e704;
        case 0x19e708u: goto label_19e708;
        case 0x19e70cu: goto label_19e70c;
        case 0x19e710u: goto label_19e710;
        case 0x19e714u: goto label_19e714;
        case 0x19e718u: goto label_19e718;
        case 0x19e71cu: goto label_19e71c;
        case 0x19e720u: goto label_19e720;
        case 0x19e724u: goto label_19e724;
        case 0x19e728u: goto label_19e728;
        case 0x19e72cu: goto label_19e72c;
        case 0x19e730u: goto label_19e730;
        case 0x19e734u: goto label_19e734;
        case 0x19e738u: goto label_19e738;
        case 0x19e73cu: goto label_19e73c;
        case 0x19e740u: goto label_19e740;
        case 0x19e744u: goto label_19e744;
        case 0x19e748u: goto label_19e748;
        case 0x19e74cu: goto label_19e74c;
        case 0x19e750u: goto label_19e750;
        case 0x19e754u: goto label_19e754;
        case 0x19e758u: goto label_19e758;
        case 0x19e75cu: goto label_19e75c;
        case 0x19e760u: goto label_19e760;
        case 0x19e764u: goto label_19e764;
        case 0x19e768u: goto label_19e768;
        case 0x19e76cu: goto label_19e76c;
        case 0x19e770u: goto label_19e770;
        case 0x19e774u: goto label_19e774;
        case 0x19e778u: goto label_19e778;
        case 0x19e77cu: goto label_19e77c;
        case 0x19e780u: goto label_19e780;
        case 0x19e784u: goto label_19e784;
        case 0x19e788u: goto label_19e788;
        case 0x19e78cu: goto label_19e78c;
        case 0x19e790u: goto label_19e790;
        case 0x19e794u: goto label_19e794;
        case 0x19e798u: goto label_19e798;
        case 0x19e79cu: goto label_19e79c;
        case 0x19e7a0u: goto label_19e7a0;
        case 0x19e7a4u: goto label_19e7a4;
        case 0x19e7a8u: goto label_19e7a8;
        case 0x19e7acu: goto label_19e7ac;
        case 0x19e7b0u: goto label_19e7b0;
        case 0x19e7b4u: goto label_19e7b4;
        case 0x19e7b8u: goto label_19e7b8;
        case 0x19e7bcu: goto label_19e7bc;
        case 0x19e7c0u: goto label_19e7c0;
        case 0x19e7c4u: goto label_19e7c4;
        case 0x19e7c8u: goto label_19e7c8;
        case 0x19e7ccu: goto label_19e7cc;
        case 0x19e7d0u: goto label_19e7d0;
        case 0x19e7d4u: goto label_19e7d4;
        case 0x19e7d8u: goto label_19e7d8;
        case 0x19e7dcu: goto label_19e7dc;
        case 0x19e7e0u: goto label_19e7e0;
        case 0x19e7e4u: goto label_19e7e4;
        case 0x19e7e8u: goto label_19e7e8;
        case 0x19e7ecu: goto label_19e7ec;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f4u: goto label_19e7f4;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e7fcu: goto label_19e7fc;
        case 0x19e800u: goto label_19e800;
        case 0x19e804u: goto label_19e804;
        case 0x19e808u: goto label_19e808;
        case 0x19e80cu: goto label_19e80c;
        case 0x19e810u: goto label_19e810;
        case 0x19e814u: goto label_19e814;
        case 0x19e818u: goto label_19e818;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e820u: goto label_19e820;
        case 0x19e824u: goto label_19e824;
        case 0x19e828u: goto label_19e828;
        case 0x19e82cu: goto label_19e82c;
        case 0x19e830u: goto label_19e830;
        case 0x19e834u: goto label_19e834;
        case 0x19e838u: goto label_19e838;
        case 0x19e83cu: goto label_19e83c;
        case 0x19e840u: goto label_19e840;
        case 0x19e844u: goto label_19e844;
        case 0x19e848u: goto label_19e848;
        case 0x19e84cu: goto label_19e84c;
        case 0x19e850u: goto label_19e850;
        case 0x19e854u: goto label_19e854;
        case 0x19e858u: goto label_19e858;
        case 0x19e85cu: goto label_19e85c;
        case 0x19e860u: goto label_19e860;
        case 0x19e864u: goto label_19e864;
        case 0x19e868u: goto label_19e868;
        case 0x19e86cu: goto label_19e86c;
        case 0x19e870u: goto label_19e870;
        case 0x19e874u: goto label_19e874;
        case 0x19e878u: goto label_19e878;
        case 0x19e87cu: goto label_19e87c;
        case 0x19e880u: goto label_19e880;
        case 0x19e884u: goto label_19e884;
        case 0x19e888u: goto label_19e888;
        case 0x19e88cu: goto label_19e88c;
        case 0x19e890u: goto label_19e890;
        case 0x19e894u: goto label_19e894;
        case 0x19e898u: goto label_19e898;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8a4u: goto label_19e8a4;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8acu: goto label_19e8ac;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8b4u: goto label_19e8b4;
        case 0x19e8b8u: goto label_19e8b8;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e8c4u: goto label_19e8c4;
        case 0x19e8c8u: goto label_19e8c8;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19e8d0u: goto label_19e8d0;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8dcu: goto label_19e8dc;
        case 0x19e8e0u: goto label_19e8e0;
        case 0x19e8e4u: goto label_19e8e4;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8ecu: goto label_19e8ec;
        case 0x19e8f0u: goto label_19e8f0;
        case 0x19e8f4u: goto label_19e8f4;
        case 0x19e8f8u: goto label_19e8f8;
        case 0x19e8fcu: goto label_19e8fc;
        case 0x19e900u: goto label_19e900;
        case 0x19e904u: goto label_19e904;
        case 0x19e908u: goto label_19e908;
        case 0x19e90cu: goto label_19e90c;
        case 0x19e910u: goto label_19e910;
        case 0x19e914u: goto label_19e914;
        case 0x19e918u: goto label_19e918;
        case 0x19e91cu: goto label_19e91c;
        case 0x19e920u: goto label_19e920;
        case 0x19e924u: goto label_19e924;
        case 0x19e928u: goto label_19e928;
        case 0x19e92cu: goto label_19e92c;
        case 0x19e930u: goto label_19e930;
        case 0x19e934u: goto label_19e934;
        case 0x19e938u: goto label_19e938;
        case 0x19e93cu: goto label_19e93c;
        case 0x19e940u: goto label_19e940;
        case 0x19e944u: goto label_19e944;
        case 0x19e948u: goto label_19e948;
        case 0x19e94cu: goto label_19e94c;
        case 0x19e950u: goto label_19e950;
        case 0x19e954u: goto label_19e954;
        case 0x19e958u: goto label_19e958;
        case 0x19e95cu: goto label_19e95c;
        case 0x19e960u: goto label_19e960;
        case 0x19e964u: goto label_19e964;
        case 0x19e968u: goto label_19e968;
        case 0x19e96cu: goto label_19e96c;
        case 0x19e970u: goto label_19e970;
        case 0x19e974u: goto label_19e974;
        case 0x19e978u: goto label_19e978;
        case 0x19e97cu: goto label_19e97c;
        case 0x19e980u: goto label_19e980;
        case 0x19e984u: goto label_19e984;
        case 0x19e988u: goto label_19e988;
        case 0x19e98cu: goto label_19e98c;
        case 0x19e990u: goto label_19e990;
        case 0x19e994u: goto label_19e994;
        case 0x19e998u: goto label_19e998;
        case 0x19e99cu: goto label_19e99c;
        case 0x19e9a0u: goto label_19e9a0;
        case 0x19e9a4u: goto label_19e9a4;
        case 0x19e9a8u: goto label_19e9a8;
        case 0x19e9acu: goto label_19e9ac;
        case 0x19e9b0u: goto label_19e9b0;
        case 0x19e9b4u: goto label_19e9b4;
        case 0x19e9b8u: goto label_19e9b8;
        case 0x19e9bcu: goto label_19e9bc;
        case 0x19e9c0u: goto label_19e9c0;
        case 0x19e9c4u: goto label_19e9c4;
        case 0x19e9c8u: goto label_19e9c8;
        case 0x19e9ccu: goto label_19e9cc;
        case 0x19e9d0u: goto label_19e9d0;
        case 0x19e9d4u: goto label_19e9d4;
        case 0x19e9d8u: goto label_19e9d8;
        case 0x19e9dcu: goto label_19e9dc;
        case 0x19e9e0u: goto label_19e9e0;
        case 0x19e9e4u: goto label_19e9e4;
        case 0x19e9e8u: goto label_19e9e8;
        case 0x19e9ecu: goto label_19e9ec;
        case 0x19e9f0u: goto label_19e9f0;
        case 0x19e9f4u: goto label_19e9f4;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19e9fcu: goto label_19e9fc;
        case 0x19ea00u: goto label_19ea00;
        case 0x19ea04u: goto label_19ea04;
        case 0x19ea08u: goto label_19ea08;
        case 0x19ea0cu: goto label_19ea0c;
        case 0x19ea10u: goto label_19ea10;
        case 0x19ea14u: goto label_19ea14;
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea1cu: goto label_19ea1c;
        case 0x19ea20u: goto label_19ea20;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea28u: goto label_19ea28;
        case 0x19ea2cu: goto label_19ea2c;
        case 0x19ea30u: goto label_19ea30;
        case 0x19ea34u: goto label_19ea34;
        case 0x19ea38u: goto label_19ea38;
        case 0x19ea3cu: goto label_19ea3c;
        case 0x19ea40u: goto label_19ea40;
        case 0x19ea44u: goto label_19ea44;
        case 0x19ea48u: goto label_19ea48;
        case 0x19ea4cu: goto label_19ea4c;
        case 0x19ea50u: goto label_19ea50;
        case 0x19ea54u: goto label_19ea54;
        case 0x19ea58u: goto label_19ea58;
        case 0x19ea5cu: goto label_19ea5c;
        case 0x19ea60u: goto label_19ea60;
        case 0x19ea64u: goto label_19ea64;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea74u: goto label_19ea74;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea84u: goto label_19ea84;
        case 0x19ea88u: goto label_19ea88;
        case 0x19ea8cu: goto label_19ea8c;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea94u: goto label_19ea94;
        case 0x19ea98u: goto label_19ea98;
        case 0x19ea9cu: goto label_19ea9c;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eaa4u: goto label_19eaa4;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eaacu: goto label_19eaac;
        case 0x19eab0u: goto label_19eab0;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac4u: goto label_19eac4;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eaccu: goto label_19eacc;
        case 0x19ead0u: goto label_19ead0;
        case 0x19ead4u: goto label_19ead4;
        case 0x19ead8u: goto label_19ead8;
        case 0x19eadcu: goto label_19eadc;
        case 0x19eae0u: goto label_19eae0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eae8u: goto label_19eae8;
        case 0x19eaecu: goto label_19eaec;
        case 0x19eaf0u: goto label_19eaf0;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eaf8u: goto label_19eaf8;
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb04u: goto label_19eb04;
        case 0x19eb08u: goto label_19eb08;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb10u: goto label_19eb10;
        case 0x19eb14u: goto label_19eb14;
        case 0x19eb18u: goto label_19eb18;
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb20u: goto label_19eb20;
        case 0x19eb24u: goto label_19eb24;
        case 0x19eb28u: goto label_19eb28;
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        case 0x19ec98u: goto label_19ec98;
        case 0x19ec9cu: goto label_19ec9c;
        case 0x19eca0u: goto label_19eca0;
        case 0x19eca4u: goto label_19eca4;
        case 0x19eca8u: goto label_19eca8;
        case 0x19ecacu: goto label_19ecac;
        case 0x19ecb0u: goto label_19ecb0;
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecb8u: goto label_19ecb8;
        case 0x19ecbcu: goto label_19ecbc;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecc4u: goto label_19ecc4;
        case 0x19ecc8u: goto label_19ecc8;
        case 0x19ecccu: goto label_19eccc;
        case 0x19ecd0u: goto label_19ecd0;
        case 0x19ecd4u: goto label_19ecd4;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ecdcu: goto label_19ecdc;
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        case 0x19ede0u: goto label_19ede0;
        case 0x19ede4u: goto label_19ede4;
        case 0x19ede8u: goto label_19ede8;
        case 0x19edecu: goto label_19edec;
        case 0x19edf0u: goto label_19edf0;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee1cu: goto label_19ee1c;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ee24u: goto label_19ee24;
        case 0x19ee28u: goto label_19ee28;
        case 0x19ee2cu: goto label_19ee2c;
        case 0x19ee30u: goto label_19ee30;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee38u: goto label_19ee38;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee40u: goto label_19ee40;
        case 0x19ee44u: goto label_19ee44;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee4cu: goto label_19ee4c;
        case 0x19ee50u: goto label_19ee50;
        case 0x19ee54u: goto label_19ee54;
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee5cu: goto label_19ee5c;
        case 0x19ee60u: goto label_19ee60;
        case 0x19ee64u: goto label_19ee64;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19ee70u: goto label_19ee70;
        case 0x19ee74u: goto label_19ee74;
        case 0x19ee78u: goto label_19ee78;
        case 0x19ee7cu: goto label_19ee7c;
        case 0x19ee80u: goto label_19ee80;
        case 0x19ee84u: goto label_19ee84;
        case 0x19ee88u: goto label_19ee88;
        case 0x19ee8cu: goto label_19ee8c;
        case 0x19ee90u: goto label_19ee90;
        case 0x19ee94u: goto label_19ee94;
        case 0x19ee98u: goto label_19ee98;
        case 0x19ee9cu: goto label_19ee9c;
        case 0x19eea0u: goto label_19eea0;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eea8u: goto label_19eea8;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eeb4u: goto label_19eeb4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eebcu: goto label_19eebc;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eec4u: goto label_19eec4;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eeccu: goto label_19eecc;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eed4u: goto label_19eed4;
        case 0x19eed8u: goto label_19eed8;
        case 0x19eedcu: goto label_19eedc;
        case 0x19eee0u: goto label_19eee0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eee8u: goto label_19eee8;
        case 0x19eeecu: goto label_19eeec;
        case 0x19eef0u: goto label_19eef0;
        case 0x19eef4u: goto label_19eef4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19eefcu: goto label_19eefc;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef04u: goto label_19ef04;
        case 0x19ef08u: goto label_19ef08;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef10u: goto label_19ef10;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef18u: goto label_19ef18;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef20u: goto label_19ef20;
        case 0x19ef24u: goto label_19ef24;
        case 0x19ef28u: goto label_19ef28;
        case 0x19ef2cu: goto label_19ef2c;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef34u: goto label_19ef34;
        case 0x19ef38u: goto label_19ef38;
        case 0x19ef3cu: goto label_19ef3c;
        case 0x19ef40u: goto label_19ef40;
        case 0x19ef44u: goto label_19ef44;
        case 0x19ef48u: goto label_19ef48;
        case 0x19ef4cu: goto label_19ef4c;
        case 0x19ef50u: goto label_19ef50;
        case 0x19ef54u: goto label_19ef54;
        case 0x19ef58u: goto label_19ef58;
        case 0x19ef5cu: goto label_19ef5c;
        case 0x19ef60u: goto label_19ef60;
        case 0x19ef64u: goto label_19ef64;
        case 0x19ef68u: goto label_19ef68;
        case 0x19ef6cu: goto label_19ef6c;
        case 0x19ef70u: goto label_19ef70;
        case 0x19ef74u: goto label_19ef74;
        case 0x19ef78u: goto label_19ef78;
        case 0x19ef7cu: goto label_19ef7c;
        case 0x19ef80u: goto label_19ef80;
        case 0x19ef84u: goto label_19ef84;
        case 0x19ef88u: goto label_19ef88;
        case 0x19ef8cu: goto label_19ef8c;
        case 0x19ef90u: goto label_19ef90;
        case 0x19ef94u: goto label_19ef94;
        case 0x19ef98u: goto label_19ef98;
        case 0x19ef9cu: goto label_19ef9c;
        case 0x19efa0u: goto label_19efa0;
        case 0x19efa4u: goto label_19efa4;
        case 0x19efa8u: goto label_19efa8;
        case 0x19efacu: goto label_19efac;
        case 0x19efb0u: goto label_19efb0;
        case 0x19efb4u: goto label_19efb4;
        case 0x19efb8u: goto label_19efb8;
        case 0x19efbcu: goto label_19efbc;
        case 0x19efc0u: goto label_19efc0;
        case 0x19efc4u: goto label_19efc4;
        case 0x19efc8u: goto label_19efc8;
        case 0x19efccu: goto label_19efcc;
        case 0x19efd0u: goto label_19efd0;
        case 0x19efd4u: goto label_19efd4;
        case 0x19efd8u: goto label_19efd8;
        case 0x19efdcu: goto label_19efdc;
        case 0x19efe0u: goto label_19efe0;
        case 0x19efe4u: goto label_19efe4;
        case 0x19efe8u: goto label_19efe8;
        case 0x19efecu: goto label_19efec;
        case 0x19eff0u: goto label_19eff0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19eff8u: goto label_19eff8;
        case 0x19effcu: goto label_19effc;
        case 0x19f000u: goto label_19f000;
        case 0x19f004u: goto label_19f004;
        case 0x19f008u: goto label_19f008;
        case 0x19f00cu: goto label_19f00c;
        case 0x19f010u: goto label_19f010;
        case 0x19f014u: goto label_19f014;
        case 0x19f018u: goto label_19f018;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f020u: goto label_19f020;
        case 0x19f024u: goto label_19f024;
        case 0x19f028u: goto label_19f028;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f030u: goto label_19f030;
        case 0x19f034u: goto label_19f034;
        case 0x19f038u: goto label_19f038;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f040u: goto label_19f040;
        case 0x19f044u: goto label_19f044;
        case 0x19f048u: goto label_19f048;
        case 0x19f04cu: goto label_19f04c;
        case 0x19f050u: goto label_19f050;
        case 0x19f054u: goto label_19f054;
        case 0x19f058u: goto label_19f058;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f060u: goto label_19f060;
        case 0x19f064u: goto label_19f064;
        case 0x19f068u: goto label_19f068;
        case 0x19f06cu: goto label_19f06c;
        case 0x19f070u: goto label_19f070;
        case 0x19f074u: goto label_19f074;
        case 0x19f078u: goto label_19f078;
        case 0x19f07cu: goto label_19f07c;
        case 0x19f080u: goto label_19f080;
        case 0x19f084u: goto label_19f084;
        case 0x19f088u: goto label_19f088;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f090u: goto label_19f090;
        case 0x19f094u: goto label_19f094;
        case 0x19f098u: goto label_19f098;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a0u: goto label_19f0a0;
        case 0x19f0a4u: goto label_19f0a4;
        case 0x19f0a8u: goto label_19f0a8;
        case 0x19f0acu: goto label_19f0ac;
        case 0x19f0b0u: goto label_19f0b0;
        case 0x19f0b4u: goto label_19f0b4;
        case 0x19f0b8u: goto label_19f0b8;
        case 0x19f0bcu: goto label_19f0bc;
        case 0x19f0c0u: goto label_19f0c0;
        case 0x19f0c4u: goto label_19f0c4;
        case 0x19f0c8u: goto label_19f0c8;
        case 0x19f0ccu: goto label_19f0cc;
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0d4u: goto label_19f0d4;
        case 0x19f0d8u: goto label_19f0d8;
        case 0x19f0dcu: goto label_19f0dc;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f0e4u: goto label_19f0e4;
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0ecu: goto label_19f0ec;
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0f8u: goto label_19f0f8;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f100u: goto label_19f100;
        case 0x19f104u: goto label_19f104;
        case 0x19f108u: goto label_19f108;
        case 0x19f10cu: goto label_19f10c;
        case 0x19f110u: goto label_19f110;
        case 0x19f114u: goto label_19f114;
        case 0x19f118u: goto label_19f118;
        case 0x19f11cu: goto label_19f11c;
        case 0x19f120u: goto label_19f120;
        case 0x19f124u: goto label_19f124;
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        case 0x19f148u: goto label_19f148;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f150u: goto label_19f150;
        case 0x19f154u: goto label_19f154;
        case 0x19f158u: goto label_19f158;
        case 0x19f15cu: goto label_19f15c;
        case 0x19f160u: goto label_19f160;
        case 0x19f164u: goto label_19f164;
        case 0x19f168u: goto label_19f168;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f170u: goto label_19f170;
        case 0x19f174u: goto label_19f174;
        case 0x19f178u: goto label_19f178;
        case 0x19f17cu: goto label_19f17c;
        case 0x19f180u: goto label_19f180;
        case 0x19f184u: goto label_19f184;
        case 0x19f188u: goto label_19f188;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f190u: goto label_19f190;
        case 0x19f194u: goto label_19f194;
        case 0x19f198u: goto label_19f198;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a0u: goto label_19f1a0;
        case 0x19f1a4u: goto label_19f1a4;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f1b4u: goto label_19f1b4;
        case 0x19f1b8u: goto label_19f1b8;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1c0u: goto label_19f1c0;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1c8u: goto label_19f1c8;
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1d0u: goto label_19f1d0;
        default: break;
    }

    ctx->pc = 0x19d3b0u;

label_19d3b0:
    // 0x19d3b0: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x19d3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_19d3b4:
    // 0x19d3b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19d3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_19d3b8:
    // 0x19d3b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19d3bc:
    // 0x19d3bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_19d3c0:
    // 0x19d3c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x19d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_19d3c4:
    // 0x19d3c4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_19d3c8:
    // 0x19d3c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_19d3cc:
    // 0x19d3cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19d3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_19d3d0:
    // 0x19d3d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_19d3d4:
    // 0x19d3d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_19d3d8:
    // 0x19d3d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19d3d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d3dc:
    // 0x19d3dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_19d3e0:
    // 0x19d3e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19d3e4:
    // 0x19d3e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_19d3e8:
    // 0x19d3e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19d3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19d3ec:
    // 0x19d3ec: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x19d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_19d3f0:
    // 0x19d3f0: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x19d3f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d3f4:
    // 0x19d3f4: 0x8c24cee0  lw          $a0, -0x3120($at)
    ctx->pc = 0x19d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954720)));
label_19d3f8:
    // 0x19d3f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19d3fc:
    // 0x19d3fc: 0x14600768  bnez        $v1, . + 4 + (0x768 << 2)
label_19d400:
    if (ctx->pc == 0x19D400u) {
        ctx->pc = 0x19D404u;
        goto label_19d404;
    }
    ctx->pc = 0x19D3FCu;
    {
        const bool branch_taken_0x19d3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d3fc) {
            ctx->pc = 0x19F1A0u;
            goto label_19f1a0;
        }
    }
    ctx->pc = 0x19D404u;
label_19d404:
    // 0x19d404: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x19d404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_19d408:
    // 0x19d408: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x19d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_19d40c:
    // 0x19d40c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x19d40cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_19d410:
    // 0x19d410: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_19d414:
    if (ctx->pc == 0x19D414u) {
        ctx->pc = 0x19D418u;
        goto label_19d418;
    }
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D428u;
            goto label_19d428;
        }
    }
    ctx->pc = 0x19D418u;
label_19d418:
    // 0x19d418: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_19d41c:
    // 0x19d41c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19d41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19d420:
    // 0x19d420: 0x1460075f  bnez        $v1, . + 4 + (0x75F << 2)
label_19d424:
    if (ctx->pc == 0x19D424u) {
        ctx->pc = 0x19D428u;
        goto label_19d428;
    }
    ctx->pc = 0x19D420u;
    {
        const bool branch_taken_0x19d420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d420) {
            ctx->pc = 0x19F1A0u;
            goto label_19f1a0;
        }
    }
    ctx->pc = 0x19D428u;
label_19d428:
    // 0x19d428: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19d428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_19d42c:
    // 0x19d42c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x19d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_19d430:
    // 0x19d430: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19d434:
    // 0x19d434: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19d434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19d438:
    // 0x19d438: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_19d43c:
    if (ctx->pc == 0x19D43Cu) {
        ctx->pc = 0x19D440u;
        goto label_19d440;
    }
    ctx->pc = 0x19D438u;
    {
        const bool branch_taken_0x19d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d438) {
            ctx->pc = 0x19D470u;
            goto label_19d470;
        }
    }
    ctx->pc = 0x19D440u;
label_19d440:
    // 0x19d440: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_19d444:
    // 0x19d444: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19d448:
    if (ctx->pc == 0x19D448u) {
        ctx->pc = 0x19D44Cu;
        goto label_19d44c;
    }
    ctx->pc = 0x19D444u;
    {
        const bool branch_taken_0x19d444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d444) {
            ctx->pc = 0x19D460u;
            goto label_19d460;
        }
    }
    ctx->pc = 0x19D44Cu;
label_19d44c:
    // 0x19d44c: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x19d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_19d450:
    // 0x19d450: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d454:
    // 0x19d454: 0x1000000a  b           . + 4 + (0xA << 2)
label_19d458:
    if (ctx->pc == 0x19D458u) {
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D45Cu;
        goto label_19d45c;
    }
    ctx->pc = 0x19D454u;
    {
        const bool branch_taken_0x19d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d454) {
            ctx->pc = 0x19D480u;
            goto label_19d480;
        }
    }
    ctx->pc = 0x19D45Cu;
label_19d45c:
    // 0x19d45c: 0x0  nop
    ctx->pc = 0x19d45cu;
    // NOP
label_19d460:
    // 0x19d460: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x19d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_19d464:
    // 0x19d464: 0x942329e8  lhu         $v1, 0x29E8($at)
    ctx->pc = 0x19d464u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10728)));
label_19d468:
    // 0x19d468: 0x10000005  b           . + 4 + (0x5 << 2)
label_19d46c:
    if (ctx->pc == 0x19D46Cu) {
        ctx->pc = 0x19D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D468u;
        // 0x19d46c: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D470u;
        goto label_19d470;
    }
    ctx->pc = 0x19D468u;
    {
        const bool branch_taken_0x19d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D468u;
        // 0x19d46c: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d468) {
            ctx->pc = 0x19D480u;
            goto label_19d480;
        }
    }
    ctx->pc = 0x19D470u;
label_19d470:
    // 0x19d470: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x19d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_19d474:
    // 0x19d474: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d478:
    // 0x19d478: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x19d478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
label_19d47c:
    // 0x19d47c: 0x0  nop
    ctx->pc = 0x19d47cu;
    // NOP
label_19d480:
    // 0x19d480: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x19d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_19d484:
    // 0x19d484: 0xaf838768  sw          $v1, -0x7898($gp)
    ctx->pc = 0x19d484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 3));
label_19d488:
    // 0x19d488: 0xaf94876c  sw          $s4, -0x7894($gp)
    ctx->pc = 0x19d488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936428), GPR_U32(ctx, 20));
label_19d48c:
    // 0x19d48c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x19d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_19d490:
    // 0x19d490: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_19d494:
    if (ctx->pc == 0x19D494u) {
        ctx->pc = 0x19D498u;
        goto label_19d498;
    }
    ctx->pc = 0x19D490u;
    {
        const bool branch_taken_0x19d490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d490) {
            ctx->pc = 0x19D500u;
            goto label_19d500;
        }
    }
    ctx->pc = 0x19D498u;
label_19d498:
    // 0x19d498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d49c:
    // 0x19d49c: 0xc067460  jal         func_19D180
label_19d4a0:
    if (ctx->pc == 0x19D4A0u) {
        ctx->pc = 0x19D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D49Cu;
        // 0x19d4a0: 0xae800024  sw          $zero, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4A4u;
        goto label_19d4a4;
    }
    ctx->pc = 0x19D49Cu;
    SET_GPR_U32(ctx, 31, 0x19D4A4u);
    ctx->pc = 0x19D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D49Cu;
    // 0x19d4a0: 0xae800024  sw          $zero, 0x24($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D180u, 0x19D49Cu, 0x19D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4A4u;
label_19d4a4:
    // 0x19d4a4: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x19d4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_19d4a8:
    // 0x19d4a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d4ac:
    // 0x19d4ac: 0xc067458  jal         func_19D160
label_19d4b0:
    if (ctx->pc == 0x19D4B0u) {
        ctx->pc = 0x19D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4ACu;
        // 0x19d4b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4B4u;
        goto label_19d4b4;
    }
    ctx->pc = 0x19D4ACu;
    SET_GPR_U32(ctx, 31, 0x19D4B4u);
    ctx->pc = 0x19D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4ACu;
    // 0x19d4b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D160u, 0x19D4ACu, 0x19D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4B4u;
label_19d4b4:
    // 0x19d4b4: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x19d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_19d4b8:
    // 0x19d4b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d4bc:
    // 0x19d4bc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_19d4c0:
    if (ctx->pc == 0x19D4C0u) {
        ctx->pc = 0x19D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4BCu;
        // 0x19d4c0: 0xaf848774  sw          $a0, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4C4u;
        goto label_19d4c4;
    }
    ctx->pc = 0x19D4BCu;
    {
        const bool branch_taken_0x19d4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4BCu;
        // 0x19d4c0: 0xaf848774  sw          $a0, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4bc) {
            ctx->pc = 0x19D4F8u;
            goto label_19d4f8;
        }
    }
    ctx->pc = 0x19D4C4u;
label_19d4c4:
    // 0x19d4c4: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x19d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_19d4c8:
    // 0x19d4c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d4cc:
    // 0x19d4cc: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x19d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_19d4d0:
    // 0x19d4d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_19d4d4:
    if (ctx->pc == 0x19D4D4u) {
        ctx->pc = 0x19D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D0u;
        // 0x19d4d4: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4D8u;
        goto label_19d4d8;
    }
    ctx->pc = 0x19D4D0u;
    {
        const bool branch_taken_0x19d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D0u;
        // 0x19d4d4: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4d0) {
            ctx->pc = 0x19D4E8u;
            goto label_19d4e8;
        }
    }
    ctx->pc = 0x19D4D8u;
label_19d4d8:
    // 0x19d4d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d4dc:
    // 0x19d4dc: 0xc0674ec  jal         func_19D3B0
label_19d4e0:
    if (ctx->pc == 0x19D4E0u) {
        ctx->pc = 0x19D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4DCu;
        // 0x19d4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4E4u;
        goto label_19d4e4;
    }
    ctx->pc = 0x19D4DCu;
    SET_GPR_U32(ctx, 31, 0x19D4E4u);
    ctx->pc = 0x19D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4DCu;
    // 0x19d4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D3B0u;
    goto label_19d3b0;
    ctx->pc = 0x19D4E4u;
label_19d4e4:
    // 0x19d4e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19d4e8:
    // 0x19d4e8: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x19d4e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_19d4ec:
    // 0x19d4ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_19d4f0:
    if (ctx->pc == 0x19D4F0u) {
        ctx->pc = 0x19D4F4u;
        goto label_19d4f4;
    }
    ctx->pc = 0x19D4ECu;
    {
        const bool branch_taken_0x19d4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d4ec) {
            ctx->pc = 0x19D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d4d8;
        }
    }
    ctx->pc = 0x19D4F4u;
label_19d4f4:
    // 0x19d4f4: 0x0  nop
    ctx->pc = 0x19d4f4u;
    // NOP
label_19d4f8:
    // 0x19d4f8: 0xae910014  sw          $s1, 0x14($s4)
    ctx->pc = 0x19d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 17));
label_19d4fc:
    // 0x19d4fc: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x19d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_19d500:
    // 0x19d500: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_19d504:
    // 0x19d504: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x19d504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_19d508:
    // 0x19d508: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19d50c:
    // 0x19d50c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19d50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19d510:
    // 0x19d510: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_19d514:
    if (ctx->pc == 0x19D514u) {
        ctx->pc = 0x19D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D510u;
        // 0x19d514: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D518u;
        goto label_19d518;
    }
    ctx->pc = 0x19D510u;
    {
        const bool branch_taken_0x19d510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D510u;
        // 0x19d514: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d510) {
            ctx->pc = 0x19D5E8u;
            goto label_19d5e8;
        }
    }
    ctx->pc = 0x19D518u;
label_19d518:
    // 0x19d518: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19d51c:
    // 0x19d51c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19d51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19d520:
    // 0x19d520: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_19d524:
    if (ctx->pc == 0x19D524u) {
        ctx->pc = 0x19D528u;
        goto label_19d528;
    }
    ctx->pc = 0x19D520u;
    {
        const bool branch_taken_0x19d520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d520) {
            ctx->pc = 0x19D5E8u;
            goto label_19d5e8;
        }
    }
    ctx->pc = 0x19D528u;
label_19d528:
    // 0x19d528: 0x8f8380c0  lw          $v1, -0x7F40($gp)
    ctx->pc = 0x19d528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
label_19d52c:
    // 0x19d52c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_19d530:
    if (ctx->pc == 0x19D530u) {
        ctx->pc = 0x19D534u;
        goto label_19d534;
    }
    ctx->pc = 0x19D52Cu;
    {
        const bool branch_taken_0x19d52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d52c) {
            ctx->pc = 0x19D5E8u;
            goto label_19d5e8;
        }
    }
    ctx->pc = 0x19D534u;
label_19d534:
    // 0x19d534: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x19d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_19d538:
    // 0x19d538: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_19d53c:
    if (ctx->pc == 0x19D53Cu) {
        ctx->pc = 0x19D540u;
        goto label_19d540;
    }
    ctx->pc = 0x19D538u;
    {
        const bool branch_taken_0x19d538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d538) {
            ctx->pc = 0x19D5E8u;
            goto label_19d5e8;
        }
    }
    ctx->pc = 0x19D540u;
label_19d540:
    // 0x19d540: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_19d544:
    // 0x19d544: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_19d548:
    // 0x19d548: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_19d54c:
    // 0x19d54c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19d550:
    // 0x19d550: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_19d554:
    if (ctx->pc == 0x19D554u) {
        ctx->pc = 0x19D558u;
        goto label_19d558;
    }
    ctx->pc = 0x19D550u;
    {
        const bool branch_taken_0x19d550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d550) {
            ctx->pc = 0x19D5D0u;
            goto label_19d5d0;
        }
    }
    ctx->pc = 0x19D558u;
label_19d558:
    // 0x19d558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d55c:
    // 0x19d55c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d560:
    // 0x19d560: 0xaf828770  sw          $v0, -0x7890($gp)
    ctx->pc = 0x19d560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 2));
label_19d564:
    // 0x19d564: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x19d564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_19d568:
    // 0x19d568: 0xaf8080c0  sw          $zero, -0x7F40($gp)
    ctx->pc = 0x19d568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934720), GPR_U32(ctx, 0));
label_19d56c:
    // 0x19d56c: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_19d570:
    // 0x19d570: 0xc067458  jal         func_19D160
label_19d574:
    if (ctx->pc == 0x19D574u) {
        ctx->pc = 0x19D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D570u;
        // 0x19d574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D578u;
        goto label_19d578;
    }
    ctx->pc = 0x19D570u;
    SET_GPR_U32(ctx, 31, 0x19D578u);
    ctx->pc = 0x19D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D570u;
    // 0x19d574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D160u, 0x19D570u, 0x19D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D578u;
label_19d578:
    // 0x19d578: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x19d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_19d57c:
    // 0x19d57c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d580:
    // 0x19d580: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
label_19d584:
    // 0x19d584: 0x10000006  b           . + 4 + (0x6 << 2)
label_19d588:
    if (ctx->pc == 0x19D588u) {
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D584u;
        // 0x19d588: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D58Cu;
        goto label_19d58c;
    }
    ctx->pc = 0x19D584u;
    {
        const bool branch_taken_0x19d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D584u;
        // 0x19d588: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d584) {
            ctx->pc = 0x19D5A0u;
            goto label_19d5a0;
        }
    }
    ctx->pc = 0x19D58Cu;
label_19d58c:
    // 0x19d58c: 0x0  nop
    ctx->pc = 0x19d58cu;
    // NOP
label_19d590:
    // 0x19d590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d594:
    // 0x19d594: 0xc0674ec  jal         func_19D3B0
label_19d598:
    if (ctx->pc == 0x19D598u) {
        ctx->pc = 0x19D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D594u;
        // 0x19d598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D59Cu;
        goto label_19d59c;
    }
    ctx->pc = 0x19D594u;
    SET_GPR_U32(ctx, 31, 0x19D59Cu);
    ctx->pc = 0x19D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D594u;
    // 0x19d598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D3B0u;
    goto label_19d3b0;
    ctx->pc = 0x19D59Cu;
label_19d59c:
    // 0x19d59c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19d5a0:
    // 0x19d5a0: 0x2e020400  sltiu       $v0, $s0, 0x400
    ctx->pc = 0x19d5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
label_19d5a4:
    // 0x19d5a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19d5a8:
    if (ctx->pc == 0x19D5A8u) {
        ctx->pc = 0x19D5ACu;
        goto label_19d5ac;
    }
    ctx->pc = 0x19D5A4u;
    {
        const bool branch_taken_0x19d5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d5a4) {
            ctx->pc = 0x19D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d590;
        }
    }
    ctx->pc = 0x19D5ACu;
label_19d5ac:
    // 0x19d5ac: 0xae910014  sw          $s1, 0x14($s4)
    ctx->pc = 0x19d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 17));
label_19d5b0:
    // 0x19d5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d5b4:
    // 0x19d5b4: 0xaf8280c0  sw          $v0, -0x7F40($gp)
    ctx->pc = 0x19d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934720), GPR_U32(ctx, 2));
label_19d5b8:
    // 0x19d5b8: 0xc0682f0  jal         func_1A0BC0
label_19d5bc:
    if (ctx->pc == 0x19D5BCu) {
        ctx->pc = 0x19D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5B8u;
        // 0x19d5bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5C0u;
        goto label_19d5c0;
    }
    ctx->pc = 0x19D5B8u;
    SET_GPR_U32(ctx, 31, 0x19D5C0u);
    ctx->pc = 0x19D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5B8u;
    // 0x19d5bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BC0u, 0x19D5B8u, 0x19D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5C0u;
label_19d5c0:
    // 0x19d5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d5c4:
    // 0x19d5c4: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x19d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_19d5c8:
    // 0x19d5c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d5cc:
    if (ctx->pc == 0x19D5CCu) {
        ctx->pc = 0x19D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5C8u;
        // 0x19d5cc: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5D0u;
        goto label_19d5d0;
    }
    ctx->pc = 0x19D5C8u;
    {
        const bool branch_taken_0x19d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5C8u;
        // 0x19d5cc: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5c8) {
            ctx->pc = 0x19D5E8u;
            goto label_19d5e8;
        }
    }
    ctx->pc = 0x19D5D0u;
label_19d5d0:
    // 0x19d5d0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
label_19d5d4:
    // 0x19d5d4: 0x24843ad0  addiu       $a0, $a0, 0x3AD0
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
label_19d5d8:
    // 0x19d5d8: 0xc068408  jal         func_1A1020
label_19d5dc:
    if (ctx->pc == 0x19D5DCu) {
        ctx->pc = 0x19D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5D8u;
        // 0x19d5dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5E0u;
        goto label_19d5e0;
    }
    ctx->pc = 0x19D5D8u;
    SET_GPR_U32(ctx, 31, 0x19D5E0u);
    ctx->pc = 0x19D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5D8u;
    // 0x19d5dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1020u, 0x19D5D8u, 0x19D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5E0u;
label_19d5e0:
    // 0x19d5e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d5e4:
    // 0x19d5e4: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x19d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_19d5e8:
    // 0x19d5e8: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x19d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_19d5ec:
    // 0x19d5ec: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x19d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_19d5f0:
    // 0x19d5f0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x19d5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_19d5f4:
    // 0x19d5f4: 0x8e960020  lw          $s6, 0x20($s4)
    ctx->pc = 0x19d5f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_19d5f8:
    // 0x19d5f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_19d5fc:
    // 0x19d5fc: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_19d600:
    // 0x19d600: 0x100006e1  b           . + 4 + (0x6E1 << 2)
label_19d604:
    if (ctx->pc == 0x19D604u) {
        ctx->pc = 0x19D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D600u;
        // 0x19d604: 0xafa30120  sw          $v1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D608u;
        goto label_19d608;
    }
    ctx->pc = 0x19D600u;
    {
        const bool branch_taken_0x19d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D600u;
        // 0x19d604: 0xafa30120  sw          $v1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d600) {
            ctx->pc = 0x19F188u;
            goto label_19f188;
        }
    }
    ctx->pc = 0x19D608u;
label_19d608:
    // 0x19d608: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x19d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_19d60c:
    // 0x19d60c: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x19d60cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_19d610:
    // 0x19d610: 0x8ed7000c  lw          $s7, 0xC($s6)
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_19d614:
    // 0x19d614: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19d618:
    if (ctx->pc == 0x19D618u) {
        ctx->pc = 0x19D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D614u;
        // 0x19d618: 0x8ed10004  lw          $s1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D61Cu;
        goto label_19d61c;
    }
    ctx->pc = 0x19D614u;
    {
        const bool branch_taken_0x19d614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D614u;
        // 0x19d618: 0x8ed10004  lw          $s1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d614) {
            ctx->pc = 0x19D628u;
            goto label_19d628;
        }
    }
    ctx->pc = 0x19D61Cu;
label_19d61c:
    // 0x19d61c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x19d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_19d620:
    // 0x19d620: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_19d624:
    if (ctx->pc == 0x19D624u) {
        ctx->pc = 0x19D628u;
        goto label_19d628;
    }
    ctx->pc = 0x19D620u;
    {
        const bool branch_taken_0x19d620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d620) {
            ctx->pc = 0x19D638u;
            goto label_19d638;
        }
    }
    ctx->pc = 0x19D628u;
label_19d628:
    // 0x19d628: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x19d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_19d62c:
    // 0x19d62c: 0x106004e6  beqz        $v1, . + 4 + (0x4E6 << 2)
label_19d630:
    if (ctx->pc == 0x19D630u) {
        ctx->pc = 0x19D634u;
        goto label_19d634;
    }
    ctx->pc = 0x19D62Cu;
    {
        const bool branch_taken_0x19d62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d62c) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19D634u;
label_19d634:
    // 0x19d634: 0x0  nop
    ctx->pc = 0x19d634u;
    // NOP
label_19d638:
    // 0x19d638: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x19d638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_19d63c:
    // 0x19d63c: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x19d63cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_19d640:
    // 0x19d640: 0x102004e1  beqz        $at, . + 4 + (0x4E1 << 2)
label_19d644:
    if (ctx->pc == 0x19D644u) {
        ctx->pc = 0x19D648u;
        goto label_19d648;
    }
    ctx->pc = 0x19D640u;
    {
        const bool branch_taken_0x19d640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d640) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19D648u;
label_19d648:
    // 0x19d648: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x19d648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_19d64c:
    // 0x19d64c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d650:
    // 0x19d650: 0x24845880  addiu       $a0, $a0, 0x5880
    ctx->pc = 0x19d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22656));
label_19d654:
    // 0x19d654: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d658:
    // 0x19d658: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d65c:
    // 0x19d65c: 0x600008  jr          $v1
label_19d660:
    if (ctx->pc == 0x19D660u) {
        ctx->pc = 0x19D664u;
        goto label_19d664;
    }
    ctx->pc = 0x19D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D668u: goto label_19d668;
            case 0x19D830u: goto label_19d830;
            case 0x19D9F8u: goto label_19d9f8;
            case 0x19DB88u: goto label_19db88;
            case 0x19DE30u: goto label_19de30;
            case 0x19E0E0u: goto label_19e0e0;
            case 0x19E320u: goto label_19e320;
            case 0x19E680u: goto label_19e680;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D65Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19D664u;
label_19d664:
    // 0x19d664: 0x0  nop
    ctx->pc = 0x19d664u;
    // NOP
label_19d668:
    // 0x19d668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d66c:
    // 0x19d66c: 0xc06736c  jal         func_19CDB0
label_19d670:
    if (ctx->pc == 0x19D670u) {
        ctx->pc = 0x19D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D66Cu;
        // 0x19d670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D674u;
        goto label_19d674;
    }
    ctx->pc = 0x19D66Cu;
    SET_GPR_U32(ctx, 31, 0x19D674u);
    ctx->pc = 0x19D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D66Cu;
    // 0x19d670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19D66Cu, 0x19D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D674u;
label_19d674:
    // 0x19d674: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x19d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19d678:
    // 0x19d678: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19d67c:
    // 0x19d67c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19d67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d680:
    // 0x19d680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d684:
    // 0x19d684: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x19d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_19d688:
    // 0x19d688: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19d688u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19d68c:
    // 0x19d68c: 0x10000062  b           . + 4 + (0x62 << 2)
label_19d690:
    if (ctx->pc == 0x19D690u) {
        ctx->pc = 0x19D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D68Cu;
        // 0x19d690: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D694u;
        goto label_19d694;
    }
    ctx->pc = 0x19D68Cu;
    {
        const bool branch_taken_0x19d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D68Cu;
        // 0x19d690: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d68c) {
            ctx->pc = 0x19D818u;
            goto label_19d818;
        }
    }
    ctx->pc = 0x19D694u;
label_19d694:
    // 0x19d694: 0x0  nop
    ctx->pc = 0x19d694u;
    // NOP
label_19d698:
    // 0x19d698: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d69c:
    // 0x19d69c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d6a0:
    // 0x19d6a0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_19d6a4:
    // 0x19d6a4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x19d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_19d6a8:
    // 0x19d6a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d6ac:
    // 0x19d6ac: 0xc0414dc  jal         func_105370
label_19d6b0:
    if (ctx->pc == 0x19D6B0u) {
        ctx->pc = 0x19D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6ACu;
        // 0x19d6b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6B4u;
        goto label_19d6b4;
    }
    ctx->pc = 0x19D6ACu;
    SET_GPR_U32(ctx, 31, 0x19D6B4u);
    ctx->pc = 0x19D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6ACu;
    // 0x19d6b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D6ACu, 0x19D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6B4u;
label_19d6b4:
    // 0x19d6b4: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d6b8:
    // 0x19d6b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19d6bc:
    // 0x19d6bc: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x19d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19d6c0:
    // 0x19d6c0: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x19d6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19d6c4:
    // 0x19d6c4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d6c8:
    // 0x19d6c8: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x19d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d6cc:
    // 0x19d6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d6d0:
    // 0x19d6d0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19d6d4:
    // 0x19d6d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19d6d8:
    // 0x19d6d8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19d6dc:
    // 0x19d6dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19d6dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19d6e0:
    // 0x19d6e0: 0xc0414d0  jal         func_105340
label_19d6e4:
    if (ctx->pc == 0x19D6E4u) {
        ctx->pc = 0x19D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6E0u;
        // 0x19d6e4: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6E8u;
        goto label_19d6e8;
    }
    ctx->pc = 0x19D6E0u;
    SET_GPR_U32(ctx, 31, 0x19D6E8u);
    ctx->pc = 0x19D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6E0u;
    // 0x19d6e4: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19D6E0u, 0x19D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6E8u;
label_19d6e8:
    // 0x19d6e8: 0xc04d7b4  jal         func_135ED0
label_19d6ec:
    if (ctx->pc == 0x19D6ECu) {
        ctx->pc = 0x19D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6E8u;
        // 0x19d6ec: 0x27a40380  addiu       $a0, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6F0u;
        goto label_19d6f0;
    }
    ctx->pc = 0x19D6E8u;
    SET_GPR_U32(ctx, 31, 0x19D6F0u);
    ctx->pc = 0x19D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6E8u;
    // 0x19d6ec: 0x27a40380  addiu       $a0, $sp, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19D6E8u, 0x19D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6F0u;
label_19d6f0:
    // 0x19d6f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19d6f4:
    // 0x19d6f4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19d6f8:
    // 0x19d6f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19d6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d6fc:
    // 0x19d6fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19d6fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d700:
    // 0x19d700: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_19d704:
    if (ctx->pc == 0x19D704u) {
        ctx->pc = 0x19D708u;
        goto label_19d708;
    }
    ctx->pc = 0x19D700u;
    {
        const bool branch_taken_0x19d700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d700) {
            ctx->pc = 0x19D748u;
            goto label_19d748;
        }
    }
    ctx->pc = 0x19D708u;
label_19d708:
    // 0x19d708: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19d708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19d70c:
    // 0x19d70c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19d710:
    // 0x19d710: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x19d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d714:
    // 0x19d714: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19d718:
    // 0x19d718: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19d718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d71c:
    // 0x19d71c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19d71cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19d720:
    // 0x19d720: 0x0  nop
    ctx->pc = 0x19d720u;
    // NOP
label_19d724:
    // 0x19d724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d728:
    // 0x19d728: 0xc0414dc  jal         func_105370
label_19d72c:
    if (ctx->pc == 0x19D72Cu) {
        ctx->pc = 0x19D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D728u;
        // 0x19d72c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D730u;
        goto label_19d730;
    }
    ctx->pc = 0x19D728u;
    SET_GPR_U32(ctx, 31, 0x19D730u);
    ctx->pc = 0x19D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D728u;
    // 0x19d72c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D728u, 0x19D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D730u;
label_19d730:
    // 0x19d730: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d734:
    // 0x19d734: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x19d734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d738:
    // 0x19d738: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d73c:
    // 0x19d73c: 0xc0414ca  jal         func_105328
label_19d740:
    if (ctx->pc == 0x19D740u) {
        ctx->pc = 0x19D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D73Cu;
        // 0x19d740: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D744u;
        goto label_19d744;
    }
    ctx->pc = 0x19D73Cu;
    SET_GPR_U32(ctx, 31, 0x19D744u);
    ctx->pc = 0x19D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D73Cu;
    // 0x19d740: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D73Cu, 0x19D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D744u;
label_19d744:
    // 0x19d744: 0x0  nop
    ctx->pc = 0x19d744u;
    // NOP
label_19d748:
    // 0x19d748: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d74c:
    // 0x19d74c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19d74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19d750:
    // 0x19d750: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19d750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d754:
    // 0x19d754: 0xc0414ca  jal         func_105328
label_19d758:
    if (ctx->pc == 0x19D758u) {
        ctx->pc = 0x19D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D754u;
        // 0x19d758: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D75Cu;
        goto label_19d75c;
    }
    ctx->pc = 0x19D754u;
    SET_GPR_U32(ctx, 31, 0x19D75Cu);
    ctx->pc = 0x19D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D754u;
    // 0x19d758: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D754u, 0x19D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D75Cu;
label_19d75c:
    // 0x19d75c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x19d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19d760:
    // 0x19d760: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19d764:
    if (ctx->pc == 0x19D764u) {
        ctx->pc = 0x19D768u;
        goto label_19d768;
    }
    ctx->pc = 0x19D760u;
    {
        const bool branch_taken_0x19d760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d760) {
            ctx->pc = 0x19D780u;
            goto label_19d780;
        }
    }
    ctx->pc = 0x19D768u;
label_19d768:
    // 0x19d768: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19d76c:
    // 0x19d76c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19d76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d770:
    // 0x19d770: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19d770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19d774:
    // 0x19d774: 0x40f809  jalr        $v0
label_19d778:
    if (ctx->pc == 0x19D778u) {
        ctx->pc = 0x19D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D774u;
        // 0x19d778: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D77Cu;
        goto label_19d77c;
    }
    ctx->pc = 0x19D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D77Cu);
        ctx->pc = 0x19D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D774u;
        // 0x19d778: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D774u, 0x19D77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D77Cu;
label_19d77c:
    // 0x19d77c: 0x0  nop
    ctx->pc = 0x19d77cu;
    // NOP
label_19d780:
    // 0x19d780: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19d784:
    // 0x19d784: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19d784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19d788:
    // 0x19d788: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x19d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d78c:
    // 0x19d78c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d790:
    // 0x19d790: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19d790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19d794:
    // 0x19d794: 0xc0414d0  jal         func_105340
label_19d798:
    if (ctx->pc == 0x19D798u) {
        ctx->pc = 0x19D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D794u;
        // 0x19d798: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D79Cu;
        goto label_19d79c;
    }
    ctx->pc = 0x19D794u;
    SET_GPR_U32(ctx, 31, 0x19D79Cu);
    ctx->pc = 0x19D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D794u;
    // 0x19d798: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19D794u, 0x19D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D79Cu;
label_19d79c:
    // 0x19d79c: 0xc04d7b4  jal         func_135ED0
label_19d7a0:
    if (ctx->pc == 0x19D7A0u) {
        ctx->pc = 0x19D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D79Cu;
        // 0x19d7a0: 0x27a40380  addiu       $a0, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7A4u;
        goto label_19d7a4;
    }
    ctx->pc = 0x19D79Cu;
    SET_GPR_U32(ctx, 31, 0x19D7A4u);
    ctx->pc = 0x19D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D79Cu;
    // 0x19d7a0: 0x27a40380  addiu       $a0, $sp, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19D79Cu, 0x19D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7A4u;
label_19d7a4:
    // 0x19d7a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19d7a8:
    // 0x19d7a8: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x19d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d7ac:
    // 0x19d7ac: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19d7b0:
    // 0x19d7b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19d7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d7b4:
    // 0x19d7b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d7b8:
    // 0x19d7b8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19d7b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19d7bc:
    // 0x19d7bc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19d7bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19d7c0:
    // 0x19d7c0: 0x0  nop
    ctx->pc = 0x19d7c0u;
    // NOP
label_19d7c4:
    // 0x19d7c4: 0x0  nop
    ctx->pc = 0x19d7c4u;
    // NOP
label_19d7c8:
    // 0x19d7c8: 0xc0414dc  jal         func_105370
label_19d7cc:
    if (ctx->pc == 0x19D7CCu) {
        ctx->pc = 0x19D7D0u;
        goto label_19d7d0;
    }
    ctx->pc = 0x19D7C8u;
    SET_GPR_U32(ctx, 31, 0x19D7D0u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D7C8u, 0x19D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7D0u;
label_19d7d0:
    // 0x19d7d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d7d4:
    // 0x19d7d4: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x19d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d7d8:
    // 0x19d7d8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19d7dc:
    // 0x19d7dc: 0xc0414ca  jal         func_105328
label_19d7e0:
    if (ctx->pc == 0x19D7E0u) {
        ctx->pc = 0x19D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7DCu;
        // 0x19d7e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7E4u;
        goto label_19d7e4;
    }
    ctx->pc = 0x19D7DCu;
    SET_GPR_U32(ctx, 31, 0x19D7E4u);
    ctx->pc = 0x19D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7DCu;
    // 0x19d7e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D7DCu, 0x19D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7E4u;
label_19d7e4:
    // 0x19d7e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19d7e8:
    // 0x19d7e8: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x19d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d7ec:
    // 0x19d7ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19d7f0:
    // 0x19d7f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d7f4:
    // 0x19d7f4: 0xc0414dc  jal         func_105370
label_19d7f8:
    if (ctx->pc == 0x19D7F8u) {
        ctx->pc = 0x19D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7F4u;
        // 0x19d7f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7FCu;
        goto label_19d7fc;
    }
    ctx->pc = 0x19D7F4u;
    SET_GPR_U32(ctx, 31, 0x19D7FCu);
    ctx->pc = 0x19D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7F4u;
    // 0x19d7f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D7F4u, 0x19D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7FCu;
label_19d7fc:
    // 0x19d7fc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d800:
    // 0x19d800: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x19d800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_19d804:
    // 0x19d804: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19d804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d808:
    // 0x19d808: 0xc0414ca  jal         func_105328
label_19d80c:
    if (ctx->pc == 0x19D80Cu) {
        ctx->pc = 0x19D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D808u;
        // 0x19d80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D810u;
        goto label_19d810;
    }
    ctx->pc = 0x19D808u;
    SET_GPR_U32(ctx, 31, 0x19D810u);
    ctx->pc = 0x19D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D808u;
    // 0x19d80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D808u, 0x19D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D810u;
label_19d810:
    // 0x19d810: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19d814:
    // 0x19d814: 0x0  nop
    ctx->pc = 0x19d814u;
    // NOP
label_19d818:
    // 0x19d818: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19d81c:
    // 0x19d81c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19d81cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19d820:
    // 0x19d820: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_19d824:
    if (ctx->pc == 0x19D824u) {
        ctx->pc = 0x19D828u;
        goto label_19d828;
    }
    ctx->pc = 0x19D820u;
    {
        const bool branch_taken_0x19d820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d820) {
            ctx->pc = 0x19D698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d698;
        }
    }
    ctx->pc = 0x19D828u;
label_19d828:
    // 0x19d828: 0x10000467  b           . + 4 + (0x467 << 2)
label_19d82c:
    if (ctx->pc == 0x19D82Cu) {
        ctx->pc = 0x19D830u;
        goto label_19d830;
    }
    ctx->pc = 0x19D828u;
    {
        const bool branch_taken_0x19d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d828) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19D830u;
label_19d830:
    // 0x19d830: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d834:
    // 0x19d834: 0xc06736c  jal         func_19CDB0
label_19d838:
    if (ctx->pc == 0x19D838u) {
        ctx->pc = 0x19D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D834u;
        // 0x19d838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D83Cu;
        goto label_19d83c;
    }
    ctx->pc = 0x19D834u;
    SET_GPR_U32(ctx, 31, 0x19D83Cu);
    ctx->pc = 0x19D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D834u;
    // 0x19d838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19D834u, 0x19D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D83Cu;
label_19d83c:
    // 0x19d83c: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x19d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19d840:
    // 0x19d840: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x19d840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19d844:
    // 0x19d844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d848:
    // 0x19d848: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d84c:
    // 0x19d84c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d850:
    // 0x19d850: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x19d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_19d854:
    // 0x19d854: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x19d854u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19d858:
    // 0x19d858: 0x10000061  b           . + 4 + (0x61 << 2)
label_19d85c:
    if (ctx->pc == 0x19D85Cu) {
        ctx->pc = 0x19D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D858u;
        // 0x19d85c: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D860u;
        goto label_19d860;
    }
    ctx->pc = 0x19D858u;
    {
        const bool branch_taken_0x19d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D858u;
        // 0x19d85c: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d858) {
            ctx->pc = 0x19D9E0u;
            goto label_19d9e0;
        }
    }
    ctx->pc = 0x19D860u;
label_19d860:
    // 0x19d860: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d864:
    // 0x19d864: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19d864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d868:
    // 0x19d868: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19d868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_19d86c:
    // 0x19d86c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19d870:
    // 0x19d870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d874:
    // 0x19d874: 0xc0414dc  jal         func_105370
label_19d878:
    if (ctx->pc == 0x19D878u) {
        ctx->pc = 0x19D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D874u;
        // 0x19d878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D87Cu;
        goto label_19d87c;
    }
    ctx->pc = 0x19D874u;
    SET_GPR_U32(ctx, 31, 0x19D87Cu);
    ctx->pc = 0x19D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D874u;
    // 0x19d878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D874u, 0x19D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D87Cu;
label_19d87c:
    // 0x19d87c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x19d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d880:
    // 0x19d880: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19d880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19d884:
    // 0x19d884: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x19d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19d888:
    // 0x19d888: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x19d888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19d88c:
    // 0x19d88c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d890:
    // 0x19d890: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x19d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d894:
    // 0x19d894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d898:
    // 0x19d898: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19d89c:
    // 0x19d89c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19d8a0:
    // 0x19d8a0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19d8a4:
    // 0x19d8a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19d8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19d8a8:
    // 0x19d8a8: 0xc0414d0  jal         func_105340
label_19d8ac:
    if (ctx->pc == 0x19D8ACu) {
        ctx->pc = 0x19D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8A8u;
        // 0x19d8ac: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D8B0u;
        goto label_19d8b0;
    }
    ctx->pc = 0x19D8A8u;
    SET_GPR_U32(ctx, 31, 0x19D8B0u);
    ctx->pc = 0x19D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8A8u;
    // 0x19d8ac: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19D8A8u, 0x19D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8B0u;
label_19d8b0:
    // 0x19d8b0: 0xc04d7b4  jal         func_135ED0
label_19d8b4:
    if (ctx->pc == 0x19D8B4u) {
        ctx->pc = 0x19D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8B0u;
        // 0x19d8b4: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D8B8u;
        goto label_19d8b8;
    }
    ctx->pc = 0x19D8B0u;
    SET_GPR_U32(ctx, 31, 0x19D8B8u);
    ctx->pc = 0x19D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8B0u;
    // 0x19d8b4: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19D8B0u, 0x19D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8B8u;
label_19d8b8:
    // 0x19d8b8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19d8bc:
    // 0x19d8bc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19d8c0:
    // 0x19d8c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d8c4:
    // 0x19d8c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19d8c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d8c8:
    // 0x19d8c8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_19d8cc:
    if (ctx->pc == 0x19D8CCu) {
        ctx->pc = 0x19D8D0u;
        goto label_19d8d0;
    }
    ctx->pc = 0x19D8C8u;
    {
        const bool branch_taken_0x19d8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d8c8) {
            ctx->pc = 0x19D910u;
            goto label_19d910;
        }
    }
    ctx->pc = 0x19D8D0u;
label_19d8d0:
    // 0x19d8d0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19d8d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19d8d4:
    // 0x19d8d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19d8d8:
    // 0x19d8d8: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d8dc:
    // 0x19d8dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19d8e0:
    // 0x19d8e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19d8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d8e4:
    // 0x19d8e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19d8e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19d8e8:
    // 0x19d8e8: 0x0  nop
    ctx->pc = 0x19d8e8u;
    // NOP
label_19d8ec:
    // 0x19d8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d8f0:
    // 0x19d8f0: 0xc0414dc  jal         func_105370
label_19d8f4:
    if (ctx->pc == 0x19D8F4u) {
        ctx->pc = 0x19D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8F0u;
        // 0x19d8f4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D8F8u;
        goto label_19d8f8;
    }
    ctx->pc = 0x19D8F0u;
    SET_GPR_U32(ctx, 31, 0x19D8F8u);
    ctx->pc = 0x19D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8F0u;
    // 0x19d8f4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D8F0u, 0x19D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8F8u;
label_19d8f8:
    // 0x19d8f8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d8fc:
    // 0x19d8fc: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d900:
    // 0x19d900: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d904:
    // 0x19d904: 0xc0414ca  jal         func_105328
label_19d908:
    if (ctx->pc == 0x19D908u) {
        ctx->pc = 0x19D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D904u;
        // 0x19d908: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D90Cu;
        goto label_19d90c;
    }
    ctx->pc = 0x19D904u;
    SET_GPR_U32(ctx, 31, 0x19D90Cu);
    ctx->pc = 0x19D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D904u;
    // 0x19d908: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D904u, 0x19D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D90Cu;
label_19d90c:
    // 0x19d90c: 0x0  nop
    ctx->pc = 0x19d90cu;
    // NOP
label_19d910:
    // 0x19d910: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d914:
    // 0x19d914: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19d918:
    // 0x19d918: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19d918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d91c:
    // 0x19d91c: 0xc0414ca  jal         func_105328
label_19d920:
    if (ctx->pc == 0x19D920u) {
        ctx->pc = 0x19D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D91Cu;
        // 0x19d920: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D924u;
        goto label_19d924;
    }
    ctx->pc = 0x19D91Cu;
    SET_GPR_U32(ctx, 31, 0x19D924u);
    ctx->pc = 0x19D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D91Cu;
    // 0x19d920: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D91Cu, 0x19D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D924u;
label_19d924:
    // 0x19d924: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x19d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19d928:
    // 0x19d928: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19d92c:
    if (ctx->pc == 0x19D92Cu) {
        ctx->pc = 0x19D930u;
        goto label_19d930;
    }
    ctx->pc = 0x19D928u;
    {
        const bool branch_taken_0x19d928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d928) {
            ctx->pc = 0x19D948u;
            goto label_19d948;
        }
    }
    ctx->pc = 0x19D930u;
label_19d930:
    // 0x19d930: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19d934:
    // 0x19d934: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d938:
    // 0x19d938: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19d938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19d93c:
    // 0x19d93c: 0x40f809  jalr        $v0
label_19d940:
    if (ctx->pc == 0x19D940u) {
        ctx->pc = 0x19D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D93Cu;
        // 0x19d940: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D944u;
        goto label_19d944;
    }
    ctx->pc = 0x19D93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D944u);
        ctx->pc = 0x19D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D93Cu;
        // 0x19d940: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D93Cu, 0x19D944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D944u;
label_19d944:
    // 0x19d944: 0x0  nop
    ctx->pc = 0x19d944u;
    // NOP
label_19d948:
    // 0x19d948: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19d94c:
    // 0x19d94c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19d950:
    // 0x19d950: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x19d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d954:
    // 0x19d954: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d958:
    // 0x19d958: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19d958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19d95c:
    // 0x19d95c: 0xc0414d0  jal         func_105340
label_19d960:
    if (ctx->pc == 0x19D960u) {
        ctx->pc = 0x19D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D95Cu;
        // 0x19d960: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D964u;
        goto label_19d964;
    }
    ctx->pc = 0x19D95Cu;
    SET_GPR_U32(ctx, 31, 0x19D964u);
    ctx->pc = 0x19D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D95Cu;
    // 0x19d960: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19D95Cu, 0x19D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D964u;
label_19d964:
    // 0x19d964: 0xc04d7b4  jal         func_135ED0
label_19d968:
    if (ctx->pc == 0x19D968u) {
        ctx->pc = 0x19D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D964u;
        // 0x19d968: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D96Cu;
        goto label_19d96c;
    }
    ctx->pc = 0x19D964u;
    SET_GPR_U32(ctx, 31, 0x19D96Cu);
    ctx->pc = 0x19D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D964u;
    // 0x19d968: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19D964u, 0x19D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D96Cu;
label_19d96c:
    // 0x19d96c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19d970:
    // 0x19d970: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d974:
    // 0x19d974: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19d978:
    // 0x19d978: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19d978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d97c:
    // 0x19d97c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d980:
    // 0x19d980: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19d980u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19d984:
    // 0x19d984: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19d984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19d988:
    // 0x19d988: 0x0  nop
    ctx->pc = 0x19d988u;
    // NOP
label_19d98c:
    // 0x19d98c: 0x0  nop
    ctx->pc = 0x19d98cu;
    // NOP
label_19d990:
    // 0x19d990: 0xc0414dc  jal         func_105370
label_19d994:
    if (ctx->pc == 0x19D994u) {
        ctx->pc = 0x19D998u;
        goto label_19d998;
    }
    ctx->pc = 0x19D990u;
    SET_GPR_U32(ctx, 31, 0x19D998u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D990u, 0x19D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D998u;
label_19d998:
    // 0x19d998: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d99c:
    // 0x19d99c: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x19d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d9a0:
    // 0x19d9a0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19d9a4:
    // 0x19d9a4: 0xc0414ca  jal         func_105328
label_19d9a8:
    if (ctx->pc == 0x19D9A8u) {
        ctx->pc = 0x19D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9A4u;
        // 0x19d9a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9ACu;
        goto label_19d9ac;
    }
    ctx->pc = 0x19D9A4u;
    SET_GPR_U32(ctx, 31, 0x19D9ACu);
    ctx->pc = 0x19D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9A4u;
    // 0x19d9a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D9A4u, 0x19D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9ACu;
label_19d9ac:
    // 0x19d9ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19d9b0:
    // 0x19d9b0: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x19d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d9b4:
    // 0x19d9b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19d9b8:
    // 0x19d9b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19d9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d9bc:
    // 0x19d9bc: 0xc0414dc  jal         func_105370
label_19d9c0:
    if (ctx->pc == 0x19D9C0u) {
        ctx->pc = 0x19D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9BCu;
        // 0x19d9c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9C4u;
        goto label_19d9c4;
    }
    ctx->pc = 0x19D9BCu;
    SET_GPR_U32(ctx, 31, 0x19D9C4u);
    ctx->pc = 0x19D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9BCu;
    // 0x19d9c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19D9BCu, 0x19D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9C4u;
label_19d9c4:
    // 0x19d9c4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19d9c8:
    // 0x19d9c8: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x19d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_19d9cc:
    // 0x19d9cc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d9d0:
    // 0x19d9d0: 0xc0414ca  jal         func_105328
label_19d9d4:
    if (ctx->pc == 0x19D9D4u) {
        ctx->pc = 0x19D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9D0u;
        // 0x19d9d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9D8u;
        goto label_19d9d8;
    }
    ctx->pc = 0x19D9D0u;
    SET_GPR_U32(ctx, 31, 0x19D9D8u);
    ctx->pc = 0x19D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9D0u;
    // 0x19d9d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D9D0u, 0x19D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9D8u;
label_19d9d8:
    // 0x19d9d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d9d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19d9dc:
    // 0x19d9dc: 0x0  nop
    ctx->pc = 0x19d9dcu;
    // NOP
label_19d9e0:
    // 0x19d9e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19d9e4:
    // 0x19d9e4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19d9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19d9e8:
    // 0x19d9e8: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_19d9ec:
    if (ctx->pc == 0x19D9ECu) {
        ctx->pc = 0x19D9F0u;
        goto label_19d9f0;
    }
    ctx->pc = 0x19D9E8u;
    {
        const bool branch_taken_0x19d9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d9e8) {
            ctx->pc = 0x19D860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d860;
        }
    }
    ctx->pc = 0x19D9F0u;
label_19d9f0:
    // 0x19d9f0: 0x100003f5  b           . + 4 + (0x3F5 << 2)
label_19d9f4:
    if (ctx->pc == 0x19D9F4u) {
        ctx->pc = 0x19D9F8u;
        goto label_19d9f8;
    }
    ctx->pc = 0x19D9F0u;
    {
        const bool branch_taken_0x19d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9f0) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19D9F8u;
label_19d9f8:
    // 0x19d9f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d9fc:
    // 0x19d9fc: 0xc06736c  jal         func_19CDB0
label_19da00:
    if (ctx->pc == 0x19DA00u) {
        ctx->pc = 0x19DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9FCu;
        // 0x19da00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA04u;
        goto label_19da04;
    }
    ctx->pc = 0x19D9FCu;
    SET_GPR_U32(ctx, 31, 0x19DA04u);
    ctx->pc = 0x19DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9FCu;
    // 0x19da00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19D9FCu, 0x19DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA04u;
label_19da04:
    // 0x19da04: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x19da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19da08:
    // 0x19da08: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x19da08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19da0c:
    // 0x19da0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19da0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da10:
    // 0x19da10: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19da14:
    // 0x19da14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19da18:
    // 0x19da18: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x19da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_19da1c:
    // 0x19da1c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x19da1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19da20:
    // 0x19da20: 0x10000053  b           . + 4 + (0x53 << 2)
label_19da24:
    if (ctx->pc == 0x19DA24u) {
        ctx->pc = 0x19DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA20u;
        // 0x19da24: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA28u;
        goto label_19da28;
    }
    ctx->pc = 0x19DA20u;
    {
        const bool branch_taken_0x19da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA20u;
        // 0x19da24: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da20) {
            ctx->pc = 0x19DB70u;
            goto label_19db70;
        }
    }
    ctx->pc = 0x19DA28u;
label_19da28:
    // 0x19da28: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19da2c:
    // 0x19da2c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19da30:
    // 0x19da30: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x19da30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_19da34:
    // 0x19da34: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x19da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_19da38:
    // 0x19da38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19da38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19da3c:
    // 0x19da3c: 0xc0414dc  jal         func_105370
label_19da40:
    if (ctx->pc == 0x19DA40u) {
        ctx->pc = 0x19DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA3Cu;
        // 0x19da40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA44u;
        goto label_19da44;
    }
    ctx->pc = 0x19DA3Cu;
    SET_GPR_U32(ctx, 31, 0x19DA44u);
    ctx->pc = 0x19DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA3Cu;
    // 0x19da40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DA3Cu, 0x19DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA44u;
label_19da44:
    // 0x19da44: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x19da44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19da48:
    // 0x19da48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_19da4c:
    // 0x19da4c: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x19da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_19da50:
    // 0x19da50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19da50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19da54:
    // 0x19da54: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x19da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19da58:
    // 0x19da58: 0x27a30350  addiu       $v1, $sp, 0x350
    ctx->pc = 0x19da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_19da5c:
    // 0x19da5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19da5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19da60:
    // 0x19da60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19da60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19da64:
    // 0x19da64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19da64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da68:
    // 0x19da68: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19da68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19da6c:
    // 0x19da6c: 0x2442e700  addiu       $v0, $v0, -0x1900
    ctx->pc = 0x19da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
label_19da70:
    // 0x19da70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19da70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19da74:
    // 0x19da74: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x19da74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_19da78:
    // 0x19da78: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19da78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19da7c:
    // 0x19da7c: 0xc06736c  jal         func_19CDB0
label_19da80:
    if (ctx->pc == 0x19DA80u) {
        ctx->pc = 0x19DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA7Cu;
        // 0x19da80: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA84u;
        goto label_19da84;
    }
    ctx->pc = 0x19DA7Cu;
    SET_GPR_U32(ctx, 31, 0x19DA84u);
    ctx->pc = 0x19DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA7Cu;
    // 0x19da80: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19DA7Cu, 0x19DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA84u;
label_19da84:
    // 0x19da84: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19da84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19da88:
    // 0x19da88: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x19da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_19da8c:
    // 0x19da8c: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19da90:
    // 0x19da90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19da90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19da94:
    // 0x19da94: 0xc041442  jal         func_105108
label_19da98:
    if (ctx->pc == 0x19DA98u) {
        ctx->pc = 0x19DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA94u;
        // 0x19da98: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA9Cu;
        goto label_19da9c;
    }
    ctx->pc = 0x19DA94u;
    SET_GPR_U32(ctx, 31, 0x19DA9Cu);
    ctx->pc = 0x19DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA94u;
    // 0x19da98: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x19DA94u, 0x19DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA9Cu;
label_19da9c:
    // 0x19da9c: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x19da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_19daa0:
    // 0x19daa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19daa4:
    // 0x19daa4: 0xc0414ca  jal         func_105328
label_19daa8:
    if (ctx->pc == 0x19DAA8u) {
        ctx->pc = 0x19DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAA4u;
        // 0x19daa8: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAACu;
        goto label_19daac;
    }
    ctx->pc = 0x19DAA4u;
    SET_GPR_U32(ctx, 31, 0x19DAACu);
    ctx->pc = 0x19DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAA4u;
    // 0x19daa8: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DAA4u, 0x19DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAACu;
label_19daac:
    // 0x19daac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19daacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dab0:
    // 0x19dab0: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x19dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_19dab4:
    // 0x19dab4: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dab8:
    // 0x19dab8: 0xc0414d0  jal         func_105340
label_19dabc:
    if (ctx->pc == 0x19DABCu) {
        ctx->pc = 0x19DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAB8u;
        // 0x19dabc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAC0u;
        goto label_19dac0;
    }
    ctx->pc = 0x19DAB8u;
    SET_GPR_U32(ctx, 31, 0x19DAC0u);
    ctx->pc = 0x19DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAB8u;
    // 0x19dabc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DAB8u, 0x19DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAC0u;
label_19dac0:
    // 0x19dac0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_19dac4:
    // 0x19dac4: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_19dac8:
    // 0x19dac8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dacc:
    // 0x19dacc: 0xc0414dc  jal         func_105370
label_19dad0:
    if (ctx->pc == 0x19DAD0u) {
        ctx->pc = 0x19DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DACCu;
        // 0x19dad0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAD4u;
        goto label_19dad4;
    }
    ctx->pc = 0x19DACCu;
    SET_GPR_U32(ctx, 31, 0x19DAD4u);
    ctx->pc = 0x19DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DACCu;
    // 0x19dad0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DACCu, 0x19DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAD4u;
label_19dad4:
    // 0x19dad4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dad8:
    // 0x19dad8: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x19dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_19dadc:
    // 0x19dadc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dae0:
    // 0x19dae0: 0xc0414ca  jal         func_105328
label_19dae4:
    if (ctx->pc == 0x19DAE4u) {
        ctx->pc = 0x19DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAE0u;
        // 0x19dae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAE8u;
        goto label_19dae8;
    }
    ctx->pc = 0x19DAE0u;
    SET_GPR_U32(ctx, 31, 0x19DAE8u);
    ctx->pc = 0x19DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAE0u;
    // 0x19dae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DAE0u, 0x19DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAE8u;
label_19dae8:
    // 0x19dae8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x19dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19daec:
    // 0x19daec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19daf0:
    if (ctx->pc == 0x19DAF0u) {
        ctx->pc = 0x19DAF4u;
        goto label_19daf4;
    }
    ctx->pc = 0x19DAECu;
    {
        const bool branch_taken_0x19daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19daec) {
            ctx->pc = 0x19DB08u;
            goto label_19db08;
        }
    }
    ctx->pc = 0x19DAF4u;
label_19daf4:
    // 0x19daf4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19daf8:
    // 0x19daf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19daf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19dafc:
    // 0x19dafc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19dafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19db00:
    // 0x19db00: 0x40f809  jalr        $v0
label_19db04:
    if (ctx->pc == 0x19DB04u) {
        ctx->pc = 0x19DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB00u;
        // 0x19db04: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB08u;
        goto label_19db08;
    }
    ctx->pc = 0x19DB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19DB08u);
        ctx->pc = 0x19DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB00u;
        // 0x19db04: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DB00u, 0x19DB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DB08u;
label_19db08:
    // 0x19db08: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19db08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19db0c:
    // 0x19db0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19db10:
    // 0x19db10: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x19db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_19db14:
    // 0x19db14: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19db14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19db18:
    // 0x19db18: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19db1c:
    // 0x19db1c: 0xc0414d0  jal         func_105340
label_19db20:
    if (ctx->pc == 0x19DB20u) {
        ctx->pc = 0x19DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB1Cu;
        // 0x19db20: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB24u;
        goto label_19db24;
    }
    ctx->pc = 0x19DB1Cu;
    SET_GPR_U32(ctx, 31, 0x19DB24u);
    ctx->pc = 0x19DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB1Cu;
    // 0x19db20: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DB1Cu, 0x19DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB24u;
label_19db24:
    // 0x19db24: 0xc04d7b4  jal         func_135ED0
label_19db28:
    if (ctx->pc == 0x19DB28u) {
        ctx->pc = 0x19DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB24u;
        // 0x19db28: 0x27a40360  addiu       $a0, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB2Cu;
        goto label_19db2c;
    }
    ctx->pc = 0x19DB24u;
    SET_GPR_U32(ctx, 31, 0x19DB2Cu);
    ctx->pc = 0x19DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB24u;
    // 0x19db28: 0x27a40360  addiu       $a0, $sp, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19DB24u, 0x19DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB2Cu;
label_19db2c:
    // 0x19db2c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19db30:
    // 0x19db30: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x19db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_19db34:
    // 0x19db34: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19db38:
    // 0x19db38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19db38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19db3c:
    // 0x19db3c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19db40:
    // 0x19db40: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19db40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19db44:
    // 0x19db44: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19db44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19db48:
    // 0x19db48: 0x0  nop
    ctx->pc = 0x19db48u;
    // NOP
label_19db4c:
    // 0x19db4c: 0x0  nop
    ctx->pc = 0x19db4cu;
    // NOP
label_19db50:
    // 0x19db50: 0xc0414dc  jal         func_105370
label_19db54:
    if (ctx->pc == 0x19DB54u) {
        ctx->pc = 0x19DB58u;
        goto label_19db58;
    }
    ctx->pc = 0x19DB50u;
    SET_GPR_U32(ctx, 31, 0x19DB58u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DB50u, 0x19DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB58u;
label_19db58:
    // 0x19db58: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19db58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19db5c:
    // 0x19db5c: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x19db5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_19db60:
    // 0x19db60: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19db64:
    // 0x19db64: 0xc0414ca  jal         func_105328
label_19db68:
    if (ctx->pc == 0x19DB68u) {
        ctx->pc = 0x19DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB64u;
        // 0x19db68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB6Cu;
        goto label_19db6c;
    }
    ctx->pc = 0x19DB64u;
    SET_GPR_U32(ctx, 31, 0x19DB6Cu);
    ctx->pc = 0x19DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB64u;
    // 0x19db68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DB64u, 0x19DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB6Cu;
label_19db6c:
    // 0x19db6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19db6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19db70:
    // 0x19db70: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19db74:
    // 0x19db74: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19db74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19db78:
    // 0x19db78: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
label_19db7c:
    if (ctx->pc == 0x19DB7Cu) {
        ctx->pc = 0x19DB80u;
        goto label_19db80;
    }
    ctx->pc = 0x19DB78u;
    {
        const bool branch_taken_0x19db78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db78) {
            ctx->pc = 0x19DA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19da28;
        }
    }
    ctx->pc = 0x19DB80u;
label_19db80:
    // 0x19db80: 0x10000391  b           . + 4 + (0x391 << 2)
label_19db84:
    if (ctx->pc == 0x19DB84u) {
        ctx->pc = 0x19DB88u;
        goto label_19db88;
    }
    ctx->pc = 0x19DB80u;
    {
        const bool branch_taken_0x19db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db80) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19DB88u;
label_19db88:
    // 0x19db88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19db88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19db8c:
    // 0x19db8c: 0xc06736c  jal         func_19CDB0
label_19db90:
    if (ctx->pc == 0x19DB90u) {
        ctx->pc = 0x19DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB8Cu;
        // 0x19db90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB94u;
        goto label_19db94;
    }
    ctx->pc = 0x19DB8Cu;
    SET_GPR_U32(ctx, 31, 0x19DB94u);
    ctx->pc = 0x19DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB8Cu;
    // 0x19db90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19DB8Cu, 0x19DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB94u;
label_19db94:
    // 0x19db94: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19db98:
    // 0x19db98: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19db9c:
    // 0x19db9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dba0:
    // 0x19dba0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19dba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dba4:
    // 0x19dba4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19dba8:
    // 0x19dba8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x19dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_19dbac:
    // 0x19dbac: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x19dbacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19dbb0:
    // 0x19dbb0: 0x10000099  b           . + 4 + (0x99 << 2)
label_19dbb4:
    if (ctx->pc == 0x19DBB4u) {
        ctx->pc = 0x19DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBB0u;
        // 0x19dbb4: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBB8u;
        goto label_19dbb8;
    }
    ctx->pc = 0x19DBB0u;
    {
        const bool branch_taken_0x19dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBB0u;
        // 0x19dbb4: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbb0) {
            ctx->pc = 0x19DE18u;
            goto label_19de18;
        }
    }
    ctx->pc = 0x19DBB8u;
label_19dbb8:
    // 0x19dbb8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dbbc:
    // 0x19dbbc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19dbc0:
    // 0x19dbc0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x19dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_19dbc4:
    // 0x19dbc4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x19dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_19dbc8:
    // 0x19dbc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dbcc:
    // 0x19dbcc: 0xc0414dc  jal         func_105370
label_19dbd0:
    if (ctx->pc == 0x19DBD0u) {
        ctx->pc = 0x19DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBCCu;
        // 0x19dbd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBD4u;
        goto label_19dbd4;
    }
    ctx->pc = 0x19DBCCu;
    SET_GPR_U32(ctx, 31, 0x19DBD4u);
    ctx->pc = 0x19DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBCCu;
    // 0x19dbd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DBCCu, 0x19DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBD4u;
label_19dbd4:
    // 0x19dbd4: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x19dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dbd8:
    // 0x19dbd8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x19dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_19dbdc:
    // 0x19dbdc: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x19dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19dbe0:
    // 0x19dbe0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19dbe4:
    // 0x19dbe4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dbe8:
    // 0x19dbe8: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x19dbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19dbec:
    // 0x19dbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19dbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19dbf0:
    // 0x19dbf0: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19dbf4:
    // 0x19dbf4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19dbf8:
    // 0x19dbf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19dbfc:
    // 0x19dbfc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dc00:
    // 0x19dc00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19dc00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19dc04:
    // 0x19dc04: 0xc0414d0  jal         func_105340
label_19dc08:
    if (ctx->pc == 0x19DC08u) {
        ctx->pc = 0x19DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC04u;
        // 0x19dc08: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC0Cu;
        goto label_19dc0c;
    }
    ctx->pc = 0x19DC04u;
    SET_GPR_U32(ctx, 31, 0x19DC0Cu);
    ctx->pc = 0x19DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC04u;
    // 0x19dc08: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DC04u, 0x19DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC0Cu;
label_19dc0c:
    // 0x19dc0c: 0xc04d7b4  jal         func_135ED0
label_19dc10:
    if (ctx->pc == 0x19DC10u) {
        ctx->pc = 0x19DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC0Cu;
        // 0x19dc10: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC14u;
        goto label_19dc14;
    }
    ctx->pc = 0x19DC0Cu;
    SET_GPR_U32(ctx, 31, 0x19DC14u);
    ctx->pc = 0x19DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC0Cu;
    // 0x19dc10: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19DC0Cu, 0x19DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC14u;
label_19dc14:
    // 0x19dc14: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19dc18:
    // 0x19dc18: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19dc1c:
    // 0x19dc1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dc20:
    // 0x19dc20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19dc20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19dc24:
    // 0x19dc24: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_19dc28:
    if (ctx->pc == 0x19DC28u) {
        ctx->pc = 0x19DC2Cu;
        goto label_19dc2c;
    }
    ctx->pc = 0x19DC24u;
    {
        const bool branch_taken_0x19dc24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc24) {
            ctx->pc = 0x19DC68u;
            goto label_19dc68;
        }
    }
    ctx->pc = 0x19DC2Cu;
label_19dc2c:
    // 0x19dc2c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19dc2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19dc30:
    // 0x19dc30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19dc34:
    // 0x19dc34: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x19dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19dc38:
    // 0x19dc38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19dc3c:
    // 0x19dc3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dc40:
    // 0x19dc40: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19dc40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19dc44:
    // 0x19dc44: 0x0  nop
    ctx->pc = 0x19dc44u;
    // NOP
label_19dc48:
    // 0x19dc48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19dc48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19dc4c:
    // 0x19dc4c: 0xc0414dc  jal         func_105370
label_19dc50:
    if (ctx->pc == 0x19DC50u) {
        ctx->pc = 0x19DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC4Cu;
        // 0x19dc50: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC54u;
        goto label_19dc54;
    }
    ctx->pc = 0x19DC4Cu;
    SET_GPR_U32(ctx, 31, 0x19DC54u);
    ctx->pc = 0x19DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC4Cu;
    // 0x19dc50: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DC4Cu, 0x19DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC54u;
label_19dc54:
    // 0x19dc54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dc58:
    // 0x19dc58: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x19dc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19dc5c:
    // 0x19dc5c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19dc60:
    // 0x19dc60: 0xc0414ca  jal         func_105328
label_19dc64:
    if (ctx->pc == 0x19DC64u) {
        ctx->pc = 0x19DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC60u;
        // 0x19dc64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC68u;
        goto label_19dc68;
    }
    ctx->pc = 0x19DC60u;
    SET_GPR_U32(ctx, 31, 0x19DC68u);
    ctx->pc = 0x19DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC60u;
    // 0x19dc64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DC60u, 0x19DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC68u;
label_19dc68:
    // 0x19dc68: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x19dc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_19dc6c:
    // 0x19dc6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19dc70:
    // 0x19dc70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_19dc74:
    if (ctx->pc == 0x19DC74u) {
        ctx->pc = 0x19DC78u;
        goto label_19dc78;
    }
    ctx->pc = 0x19DC70u;
    {
        const bool branch_taken_0x19dc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19dc70) {
            ctx->pc = 0x19DC88u;
            goto label_19dc88;
        }
    }
    ctx->pc = 0x19DC78u;
label_19dc78:
    // 0x19dc78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19dc7c:
    // 0x19dc7c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_19dc80:
    if (ctx->pc == 0x19DC80u) {
        ctx->pc = 0x19DC84u;
        goto label_19dc84;
    }
    ctx->pc = 0x19DC7Cu;
    {
        const bool branch_taken_0x19dc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19dc7c) {
            ctx->pc = 0x19DD48u;
            goto label_19dd48;
        }
    }
    ctx->pc = 0x19DC84u;
label_19dc84:
    // 0x19dc84: 0x0  nop
    ctx->pc = 0x19dc84u;
    // NOP
label_19dc88:
    // 0x19dc88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19dc8c:
    // 0x19dc8c: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
label_19dc90:
    // 0x19dc90: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x19dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_19dc94:
    // 0x19dc94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19dc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19dc98:
    // 0x19dc98: 0xc0414dc  jal         func_105370
label_19dc9c:
    if (ctx->pc == 0x19DC9Cu) {
        ctx->pc = 0x19DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC98u;
        // 0x19dc9c: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DCA0u;
        goto label_19dca0;
    }
    ctx->pc = 0x19DC98u;
    SET_GPR_U32(ctx, 31, 0x19DCA0u);
    ctx->pc = 0x19DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC98u;
    // 0x19dc9c: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DC98u, 0x19DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCA0u;
label_19dca0:
    // 0x19dca0: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x19dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_19dca4:
    // 0x19dca4: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x19dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
label_19dca8:
    // 0x19dca8: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x19dca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_19dcac:
    // 0x19dcac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x19dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_19dcb0:
    // 0x19dcb0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x19dcb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19dcb4:
    // 0x19dcb4: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x19dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
label_19dcb8:
    // 0x19dcb8: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x19dcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_19dcbc:
    // 0x19dcbc: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x19dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_19dcc0:
    // 0x19dcc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19dcc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19dcc4:
    // 0x19dcc4: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x19dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
label_19dcc8:
    // 0x19dcc8: 0xc7a30320  lwc1        $f3, 0x320($sp)
    ctx->pc = 0x19dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19dccc:
    // 0x19dccc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x19dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_19dcd0:
    // 0x19dcd0: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x19dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dcd4:
    // 0x19dcd4: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x19dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19dcd8:
    // 0x19dcd8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19dcdc:
    // 0x19dcdc: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x19dcdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
label_19dce0:
    // 0x19dce0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19dce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dce4:
    // 0x19dce4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x19dce4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_19dce8:
    // 0x19dce8: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x19dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_19dcec:
    // 0x19dcec: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x19dcecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_19dcf0:
    // 0x19dcf0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x19dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_19dcf4:
    // 0x19dcf4: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x19dcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19dcf8:
    // 0x19dcf8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x19dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19dcfc:
    // 0x19dcfc: 0xc7a10328  lwc1        $f1, 0x328($sp)
    ctx->pc = 0x19dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dd00:
    // 0x19dd00: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x19dd00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_19dd04:
    // 0x19dd04: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x19dd04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_19dd08:
    // 0x19dd08: 0xe7a20320  swc1        $f2, 0x320($sp)
    ctx->pc = 0x19dd08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_19dd0c:
    // 0x19dd0c: 0x8e88002c  lw          $t0, 0x2C($s4)
    ctx->pc = 0x19dd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_19dd10:
    // 0x19dd10: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x19dd10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_19dd14:
    // 0x19dd14: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x19dd14u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_19dd18:
    // 0x19dd18: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x19dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_19dd1c:
    // 0x19dd1c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_19dd20:
    // 0x19dd20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19dd20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_19dd24:
    // 0x19dd24: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x19dd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_19dd28:
    // 0x19dd28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19dd2c:
    // 0x19dd2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19dd30:
    // 0x19dd30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19dd34:
    // 0x19dd34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19dd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_19dd38:
    // 0x19dd38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19dd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19dd3c:
    // 0x19dd3c: 0xc0414ca  jal         func_105328
label_19dd40:
    if (ctx->pc == 0x19DD40u) {
        ctx->pc = 0x19DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD3Cu;
        // 0x19dd40: 0xe7a00328  swc1        $f0, 0x328($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD44u;
        goto label_19dd44;
    }
    ctx->pc = 0x19DD3Cu;
    SET_GPR_U32(ctx, 31, 0x19DD44u);
    ctx->pc = 0x19DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD3Cu;
    // 0x19dd40: 0xe7a00328  swc1        $f0, 0x328($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DD3Cu, 0x19DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD44u;
label_19dd44:
    // 0x19dd44: 0x0  nop
    ctx->pc = 0x19dd44u;
    // NOP
label_19dd48:
    // 0x19dd48: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dd4c:
    // 0x19dd4c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dd50:
    // 0x19dd50: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19dd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19dd54:
    // 0x19dd54: 0xc0414ca  jal         func_105328
label_19dd58:
    if (ctx->pc == 0x19DD58u) {
        ctx->pc = 0x19DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD54u;
        // 0x19dd58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD5Cu;
        goto label_19dd5c;
    }
    ctx->pc = 0x19DD54u;
    SET_GPR_U32(ctx, 31, 0x19DD5Cu);
    ctx->pc = 0x19DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD54u;
    // 0x19dd58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DD54u, 0x19DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD5Cu;
label_19dd5c:
    // 0x19dd5c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x19dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19dd60:
    // 0x19dd60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19dd64:
    if (ctx->pc == 0x19DD64u) {
        ctx->pc = 0x19DD68u;
        goto label_19dd68;
    }
    ctx->pc = 0x19DD60u;
    {
        const bool branch_taken_0x19dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd60) {
            ctx->pc = 0x19DD80u;
            goto label_19dd80;
        }
    }
    ctx->pc = 0x19DD68u;
label_19dd68:
    // 0x19dd68: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19dd6c:
    // 0x19dd6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19dd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19dd70:
    // 0x19dd70: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19dd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19dd74:
    // 0x19dd74: 0x40f809  jalr        $v0
label_19dd78:
    if (ctx->pc == 0x19DD78u) {
        ctx->pc = 0x19DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD74u;
        // 0x19dd78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD7Cu;
        goto label_19dd7c;
    }
    ctx->pc = 0x19DD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19DD7Cu);
        ctx->pc = 0x19DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD74u;
        // 0x19dd78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DD74u, 0x19DD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DD7Cu;
label_19dd7c:
    // 0x19dd7c: 0x0  nop
    ctx->pc = 0x19dd7cu;
    // NOP
label_19dd80:
    // 0x19dd80: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19dd84:
    // 0x19dd84: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19dd88:
    // 0x19dd88: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x19dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19dd8c:
    // 0x19dd8c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dd90:
    // 0x19dd90: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19dd94:
    // 0x19dd94: 0xc0414d0  jal         func_105340
label_19dd98:
    if (ctx->pc == 0x19DD98u) {
        ctx->pc = 0x19DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD94u;
        // 0x19dd98: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD9Cu;
        goto label_19dd9c;
    }
    ctx->pc = 0x19DD94u;
    SET_GPR_U32(ctx, 31, 0x19DD9Cu);
    ctx->pc = 0x19DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD94u;
    // 0x19dd98: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DD94u, 0x19DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD9Cu;
label_19dd9c:
    // 0x19dd9c: 0xc04d7b4  jal         func_135ED0
label_19dda0:
    if (ctx->pc == 0x19DDA0u) {
        ctx->pc = 0x19DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD9Cu;
        // 0x19dda0: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDA4u;
        goto label_19dda4;
    }
    ctx->pc = 0x19DD9Cu;
    SET_GPR_U32(ctx, 31, 0x19DDA4u);
    ctx->pc = 0x19DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD9Cu;
    // 0x19dda0: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19DD9Cu, 0x19DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDA4u;
label_19dda4:
    // 0x19dda4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19dda8:
    // 0x19dda8: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x19dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19ddac:
    // 0x19ddac: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19ddb0:
    // 0x19ddb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19ddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ddb4:
    // 0x19ddb4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ddb8:
    // 0x19ddb8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19ddb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19ddbc:
    // 0x19ddbc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19ddbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19ddc0:
    // 0x19ddc0: 0x0  nop
    ctx->pc = 0x19ddc0u;
    // NOP
label_19ddc4:
    // 0x19ddc4: 0x0  nop
    ctx->pc = 0x19ddc4u;
    // NOP
label_19ddc8:
    // 0x19ddc8: 0xc0414dc  jal         func_105370
label_19ddcc:
    if (ctx->pc == 0x19DDCCu) {
        ctx->pc = 0x19DDD0u;
        goto label_19ddd0;
    }
    ctx->pc = 0x19DDC8u;
    SET_GPR_U32(ctx, 31, 0x19DDD0u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DDC8u, 0x19DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDD0u;
label_19ddd0:
    // 0x19ddd0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ddd4:
    // 0x19ddd4: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x19ddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19ddd8:
    // 0x19ddd8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dddc:
    // 0x19dddc: 0xc0414ca  jal         func_105328
label_19dde0:
    if (ctx->pc == 0x19DDE0u) {
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDE4u;
        goto label_19dde4;
    }
    ctx->pc = 0x19DDDCu;
    SET_GPR_U32(ctx, 31, 0x19DDE4u);
    ctx->pc = 0x19DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDDCu;
    // 0x19dde0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DDDCu, 0x19DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDE4u;
label_19dde4:
    // 0x19dde4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19dde8:
    // 0x19dde8: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19ddec:
    // 0x19ddec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19ddf0:
    // 0x19ddf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19ddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ddf4:
    // 0x19ddf4: 0xc0414dc  jal         func_105370
label_19ddf8:
    if (ctx->pc == 0x19DDF8u) {
        ctx->pc = 0x19DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDF4u;
        // 0x19ddf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDFCu;
        goto label_19ddfc;
    }
    ctx->pc = 0x19DDF4u;
    SET_GPR_U32(ctx, 31, 0x19DDFCu);
    ctx->pc = 0x19DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDF4u;
    // 0x19ddf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DDF4u, 0x19DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDFCu;
label_19ddfc:
    // 0x19ddfc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19de00:
    // 0x19de00: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_19de04:
    // 0x19de04: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19de08:
    // 0x19de08: 0xc0414ca  jal         func_105328
label_19de0c:
    if (ctx->pc == 0x19DE0Cu) {
        ctx->pc = 0x19DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE08u;
        // 0x19de0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE10u;
        goto label_19de10;
    }
    ctx->pc = 0x19DE08u;
    SET_GPR_U32(ctx, 31, 0x19DE10u);
    ctx->pc = 0x19DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE08u;
    // 0x19de0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DE08u, 0x19DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE10u;
label_19de10:
    // 0x19de10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19de10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19de14:
    // 0x19de14: 0x0  nop
    ctx->pc = 0x19de14u;
    // NOP
label_19de18:
    // 0x19de18: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19de1c:
    // 0x19de1c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19de1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19de20:
    // 0x19de20: 0x1460ff65  bnez        $v1, . + 4 + (-0x9B << 2)
label_19de24:
    if (ctx->pc == 0x19DE24u) {
        ctx->pc = 0x19DE28u;
        goto label_19de28;
    }
    ctx->pc = 0x19DE20u;
    {
        const bool branch_taken_0x19de20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19de20) {
            ctx->pc = 0x19DBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dbb8;
        }
    }
    ctx->pc = 0x19DE28u;
label_19de28:
    // 0x19de28: 0x100002e7  b           . + 4 + (0x2E7 << 2)
label_19de2c:
    if (ctx->pc == 0x19DE2Cu) {
        ctx->pc = 0x19DE30u;
        goto label_19de30;
    }
    ctx->pc = 0x19DE28u;
    {
        const bool branch_taken_0x19de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de28) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19DE30u;
label_19de30:
    // 0x19de30: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_19de34:
    if (ctx->pc == 0x19DE34u) {
        ctx->pc = 0x19DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE30u;
        // 0x19de34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE38u;
        goto label_19de38;
    }
    ctx->pc = 0x19DE30u;
    {
        const bool branch_taken_0x19de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE30u;
        // 0x19de34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de30) {
            ctx->pc = 0x19E0C8u;
            goto label_19e0c8;
        }
    }
    ctx->pc = 0x19DE38u;
label_19de38:
    // 0x19de38: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19de38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19de3c:
    // 0x19de3c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19de40:
    // 0x19de40: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x19de40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_19de44:
    // 0x19de44: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x19de44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_19de48:
    // 0x19de48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19de48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19de4c:
    // 0x19de4c: 0xc0414dc  jal         func_105370
label_19de50:
    if (ctx->pc == 0x19DE50u) {
        ctx->pc = 0x19DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE4Cu;
        // 0x19de50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE54u;
        goto label_19de54;
    }
    ctx->pc = 0x19DE4Cu;
    SET_GPR_U32(ctx, 31, 0x19DE54u);
    ctx->pc = 0x19DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE4Cu;
    // 0x19de50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DE4Cu, 0x19DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE54u;
label_19de54:
    // 0x19de54: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x19de54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19de58:
    // 0x19de58: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19de5c:
    // 0x19de5c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19de60:
    // 0x19de60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19de64:
    // 0x19de64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19de68:
    // 0x19de68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19de68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19de6c:
    // 0x19de6c: 0x0  nop
    ctx->pc = 0x19de6cu;
    // NOP
label_19de70:
    // 0x19de70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19de70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19de74:
    // 0x19de74: 0x1a40001e  blez        $s2, . + 4 + (0x1E << 2)
label_19de78:
    if (ctx->pc == 0x19DE78u) {
        ctx->pc = 0x19DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE74u;
        // 0x19de78: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE7Cu;
        goto label_19de7c;
    }
    ctx->pc = 0x19DE74u;
    {
        const bool branch_taken_0x19de74 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x19DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE74u;
        // 0x19de78: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de74) {
            ctx->pc = 0x19DEF0u;
            goto label_19def0;
        }
    }
    ctx->pc = 0x19DE7Cu;
label_19de7c:
    // 0x19de7c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19de80:
    // 0x19de80: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19de84:
    // 0x19de84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19de84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19de88:
    // 0x19de88: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19de8c:
    // 0x19de8c: 0xc0414d0  jal         func_105340
label_19de90:
    if (ctx->pc == 0x19DE90u) {
        ctx->pc = 0x19DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE8Cu;
        // 0x19de90: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE94u;
        goto label_19de94;
    }
    ctx->pc = 0x19DE8Cu;
    SET_GPR_U32(ctx, 31, 0x19DE94u);
    ctx->pc = 0x19DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE8Cu;
    // 0x19de90: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DE8Cu, 0x19DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE94u;
label_19de94:
    // 0x19de94: 0xc04d7b4  jal         func_135ED0
label_19de98:
    if (ctx->pc == 0x19DE98u) {
        ctx->pc = 0x19DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE94u;
        // 0x19de98: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE9Cu;
        goto label_19de9c;
    }
    ctx->pc = 0x19DE94u;
    SET_GPR_U32(ctx, 31, 0x19DE9Cu);
    ctx->pc = 0x19DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE94u;
    // 0x19de98: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19DE94u, 0x19DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE9Cu;
label_19de9c:
    // 0x19de9c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19dea0:
    // 0x19dea0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19dea4:
    // 0x19dea4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dea8:
    // 0x19dea8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19dea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19deac:
    // 0x19deac: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_19deb0:
    if (ctx->pc == 0x19DEB0u) {
        ctx->pc = 0x19DEB4u;
        goto label_19deb4;
    }
    ctx->pc = 0x19DEACu;
    {
        const bool branch_taken_0x19deac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19deac) {
            ctx->pc = 0x19DEF0u;
            goto label_19def0;
        }
    }
    ctx->pc = 0x19DEB4u;
label_19deb4:
    // 0x19deb4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19deb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19deb8:
    // 0x19deb8: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_19debc:
    // 0x19debc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19dec0:
    // 0x19dec0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_19dec4:
    // 0x19dec4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19dec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dec8:
    // 0x19dec8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19dec8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19decc:
    // 0x19decc: 0x0  nop
    ctx->pc = 0x19deccu;
    // NOP
label_19ded0:
    // 0x19ded0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ded0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ded4:
    // 0x19ded4: 0xc0414dc  jal         func_105370
label_19ded8:
    if (ctx->pc == 0x19DED8u) {
        ctx->pc = 0x19DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DED4u;
        // 0x19ded8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEDCu;
        goto label_19dedc;
    }
    ctx->pc = 0x19DED4u;
    SET_GPR_U32(ctx, 31, 0x19DEDCu);
    ctx->pc = 0x19DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DED4u;
    // 0x19ded8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DED4u, 0x19DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEDCu;
label_19dedc:
    // 0x19dedc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dee0:
    // 0x19dee0: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x19dee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19dee4:
    // 0x19dee4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19dee8:
    // 0x19dee8: 0xc0414ca  jal         func_105328
label_19deec:
    if (ctx->pc == 0x19DEECu) {
        ctx->pc = 0x19DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEE8u;
        // 0x19deec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEF0u;
        goto label_19def0;
    }
    ctx->pc = 0x19DEE8u;
    SET_GPR_U32(ctx, 31, 0x19DEF0u);
    ctx->pc = 0x19DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DEE8u;
    // 0x19deec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DEE8u, 0x19DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEF0u;
label_19def0:
    // 0x19def0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x19def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19def4:
    // 0x19def4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19def8:
    // 0x19def8: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x19def8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19defc:
    // 0x19defc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_19df00:
    if (ctx->pc == 0x19DF00u) {
        ctx->pc = 0x19DF04u;
        goto label_19df04;
    }
    ctx->pc = 0x19DEFCu;
    {
        const bool branch_taken_0x19defc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19defc) {
            ctx->pc = 0x19DF80u;
            goto label_19df80;
        }
    }
    ctx->pc = 0x19DF04u;
label_19df04:
    // 0x19df04: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19df08:
    // 0x19df08: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19df08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19df0c:
    // 0x19df0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19df10:
    // 0x19df10: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19df10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19df14:
    // 0x19df14: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19df18:
    // 0x19df18: 0xc0414d0  jal         func_105340
label_19df1c:
    if (ctx->pc == 0x19DF1Cu) {
        ctx->pc = 0x19DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF18u;
        // 0x19df1c: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF20u;
        goto label_19df20;
    }
    ctx->pc = 0x19DF18u;
    SET_GPR_U32(ctx, 31, 0x19DF20u);
    ctx->pc = 0x19DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF18u;
    // 0x19df1c: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DF18u, 0x19DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF20u;
label_19df20:
    // 0x19df20: 0xc04d7b4  jal         func_135ED0
label_19df24:
    if (ctx->pc == 0x19DF24u) {
        ctx->pc = 0x19DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF20u;
        // 0x19df24: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF28u;
        goto label_19df28;
    }
    ctx->pc = 0x19DF20u;
    SET_GPR_U32(ctx, 31, 0x19DF28u);
    ctx->pc = 0x19DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF20u;
    // 0x19df24: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19DF20u, 0x19DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF28u;
label_19df28:
    // 0x19df28: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19df2c:
    // 0x19df2c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19df30:
    // 0x19df30: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19df34:
    // 0x19df34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19df34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19df38:
    // 0x19df38: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_19df3c:
    if (ctx->pc == 0x19DF3Cu) {
        ctx->pc = 0x19DF40u;
        goto label_19df40;
    }
    ctx->pc = 0x19DF38u;
    {
        const bool branch_taken_0x19df38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19df38) {
            ctx->pc = 0x19DF80u;
            goto label_19df80;
        }
    }
    ctx->pc = 0x19DF40u;
label_19df40:
    // 0x19df40: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19df40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19df44:
    // 0x19df44: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x19df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_19df48:
    // 0x19df48: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x19df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19df4c:
    // 0x19df4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19df4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_19df50:
    // 0x19df50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19df50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19df54:
    // 0x19df54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19df54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19df58:
    // 0x19df58: 0x0  nop
    ctx->pc = 0x19df58u;
    // NOP
label_19df5c:
    // 0x19df5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19df5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19df60:
    // 0x19df60: 0xc0414dc  jal         func_105370
label_19df64:
    if (ctx->pc == 0x19DF64u) {
        ctx->pc = 0x19DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF60u;
        // 0x19df64: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF68u;
        goto label_19df68;
    }
    ctx->pc = 0x19DF60u;
    SET_GPR_U32(ctx, 31, 0x19DF68u);
    ctx->pc = 0x19DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF60u;
    // 0x19df64: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DF60u, 0x19DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF68u;
label_19df68:
    // 0x19df68: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19df68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19df6c:
    // 0x19df6c: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x19df6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19df70:
    // 0x19df70: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19df74:
    // 0x19df74: 0xc0414ca  jal         func_105328
label_19df78:
    if (ctx->pc == 0x19DF78u) {
        ctx->pc = 0x19DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF74u;
        // 0x19df78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF7Cu;
        goto label_19df7c;
    }
    ctx->pc = 0x19DF74u;
    SET_GPR_U32(ctx, 31, 0x19DF7Cu);
    ctx->pc = 0x19DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF74u;
    // 0x19df78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DF74u, 0x19DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF7Cu;
label_19df7c:
    // 0x19df7c: 0x0  nop
    ctx->pc = 0x19df7cu;
    // NOP
label_19df80:
    // 0x19df80: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_19df84:
    if (ctx->pc == 0x19DF84u) {
        ctx->pc = 0x19DF88u;
        goto label_19df88;
    }
    ctx->pc = 0x19DF80u;
    {
        const bool branch_taken_0x19df80 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x19df80) {
            ctx->pc = 0x19E000u;
            goto label_19e000;
        }
    }
    ctx->pc = 0x19DF88u;
label_19df88:
    // 0x19df88: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19df8c:
    // 0x19df8c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19df90:
    // 0x19df90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19df90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19df94:
    // 0x19df94: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19df94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19df98:
    // 0x19df98: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19df9c:
    // 0x19df9c: 0xc0414d0  jal         func_105340
label_19dfa0:
    if (ctx->pc == 0x19DFA0u) {
        ctx->pc = 0x19DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF9Cu;
        // 0x19dfa0: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFA4u;
        goto label_19dfa4;
    }
    ctx->pc = 0x19DF9Cu;
    SET_GPR_U32(ctx, 31, 0x19DFA4u);
    ctx->pc = 0x19DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF9Cu;
    // 0x19dfa0: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19DF9Cu, 0x19DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFA4u;
label_19dfa4:
    // 0x19dfa4: 0xc04d7b4  jal         func_135ED0
label_19dfa8:
    if (ctx->pc == 0x19DFA8u) {
        ctx->pc = 0x19DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA4u;
        // 0x19dfa8: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFACu;
        goto label_19dfac;
    }
    ctx->pc = 0x19DFA4u;
    SET_GPR_U32(ctx, 31, 0x19DFACu);
    ctx->pc = 0x19DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFA4u;
    // 0x19dfa8: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19DFA4u, 0x19DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFACu;
label_19dfac:
    // 0x19dfac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19dfb0:
    // 0x19dfb0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19dfb4:
    // 0x19dfb4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dfb8:
    // 0x19dfb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19dfb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19dfbc:
    // 0x19dfbc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_19dfc0:
    if (ctx->pc == 0x19DFC0u) {
        ctx->pc = 0x19DFC4u;
        goto label_19dfc4;
    }
    ctx->pc = 0x19DFBCu;
    {
        const bool branch_taken_0x19dfbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dfbc) {
            ctx->pc = 0x19E000u;
            goto label_19e000;
        }
    }
    ctx->pc = 0x19DFC4u;
label_19dfc4:
    // 0x19dfc4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19dfc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19dfc8:
    // 0x19dfc8: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19dfcc:
    // 0x19dfcc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19dfd0:
    // 0x19dfd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19dfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dfd4:
    // 0x19dfd4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19dfd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19dfd8:
    // 0x19dfd8: 0x0  nop
    ctx->pc = 0x19dfd8u;
    // NOP
label_19dfdc:
    // 0x19dfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19dfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19dfe0:
    // 0x19dfe0: 0xc0414dc  jal         func_105370
label_19dfe4:
    if (ctx->pc == 0x19DFE4u) {
        ctx->pc = 0x19DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFE0u;
        // 0x19dfe4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFE8u;
        goto label_19dfe8;
    }
    ctx->pc = 0x19DFE0u;
    SET_GPR_U32(ctx, 31, 0x19DFE8u);
    ctx->pc = 0x19DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFE0u;
    // 0x19dfe4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19DFE0u, 0x19DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFE8u;
label_19dfe8:
    // 0x19dfe8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19dfec:
    // 0x19dfec: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x19dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19dff0:
    // 0x19dff0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19dff4:
    // 0x19dff4: 0xc0414ca  jal         func_105328
label_19dff8:
    if (ctx->pc == 0x19DFF8u) {
        ctx->pc = 0x19DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFF4u;
        // 0x19dff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFFCu;
        goto label_19dffc;
    }
    ctx->pc = 0x19DFF4u;
    SET_GPR_U32(ctx, 31, 0x19DFFCu);
    ctx->pc = 0x19DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFF4u;
    // 0x19dff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19DFF4u, 0x19DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFFCu;
label_19dffc:
    // 0x19dffc: 0x0  nop
    ctx->pc = 0x19dffcu;
    // NOP
label_19e000:
    // 0x19e000: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e004:
    // 0x19e004: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19e008:
    // 0x19e008: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x19e008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19e00c:
    // 0x19e00c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_19e010:
    if (ctx->pc == 0x19E010u) {
        ctx->pc = 0x19E014u;
        goto label_19e014;
    }
    ctx->pc = 0x19E00Cu;
    {
        const bool branch_taken_0x19e00c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e00c) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x19e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e018:
    // 0x19e018: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e01c:
    // 0x19e01c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e020:
    // 0x19e020: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e024:
    // 0x19e024: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e028:
    // 0x19e028: 0xc0414d0  jal         func_105340
label_19e02c:
    if (ctx->pc == 0x19E02Cu) {
        ctx->pc = 0x19E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E028u;
        // 0x19e02c: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E030u;
        goto label_19e030;
    }
    ctx->pc = 0x19E028u;
    SET_GPR_U32(ctx, 31, 0x19E030u);
    ctx->pc = 0x19E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E028u;
    // 0x19e02c: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E028u, 0x19E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E030u;
label_19e030:
    // 0x19e030: 0xc04d7b4  jal         func_135ED0
label_19e034:
    if (ctx->pc == 0x19E034u) {
        ctx->pc = 0x19E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E030u;
        // 0x19e034: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E038u;
        goto label_19e038;
    }
    ctx->pc = 0x19E030u;
    SET_GPR_U32(ctx, 31, 0x19E038u);
    ctx->pc = 0x19E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E030u;
    // 0x19e034: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E030u, 0x19E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E038u;
label_19e038:
    // 0x19e038: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e03c:
    // 0x19e03c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19e040:
    // 0x19e040: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e044:
    // 0x19e044: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e048:
    // 0x19e048: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_19e04c:
    if (ctx->pc == 0x19E04Cu) {
        ctx->pc = 0x19E050u;
        goto label_19e050;
    }
    ctx->pc = 0x19E048u;
    {
        const bool branch_taken_0x19e048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e048) {
            ctx->pc = 0x19E088u;
            goto label_19e088;
        }
    }
    ctx->pc = 0x19E050u;
label_19e050:
    // 0x19e050: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e050u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e054:
    // 0x19e054: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x19e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19e058:
    // 0x19e058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19e05c:
    // 0x19e05c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e060:
    // 0x19e060: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19e060u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e064:
    // 0x19e064: 0x0  nop
    ctx->pc = 0x19e064u;
    // NOP
label_19e068:
    // 0x19e068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e06c:
    // 0x19e06c: 0xc0414dc  jal         func_105370
label_19e070:
    if (ctx->pc == 0x19E070u) {
        ctx->pc = 0x19E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E06Cu;
        // 0x19e070: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E074u;
        goto label_19e074;
    }
    ctx->pc = 0x19E06Cu;
    SET_GPR_U32(ctx, 31, 0x19E074u);
    ctx->pc = 0x19E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E06Cu;
    // 0x19e070: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E06Cu, 0x19E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E074u;
label_19e074:
    // 0x19e074: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e078:
    // 0x19e078: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x19e078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_19e07c:
    // 0x19e07c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e080:
    // 0x19e080: 0xc0414ca  jal         func_105328
label_19e084:
    if (ctx->pc == 0x19E084u) {
        ctx->pc = 0x19E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E080u;
        // 0x19e084: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E088u;
        goto label_19e088;
    }
    ctx->pc = 0x19E080u;
    SET_GPR_U32(ctx, 31, 0x19E088u);
    ctx->pc = 0x19E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E080u;
    // 0x19e084: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E080u, 0x19E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E088u;
label_19e088:
    // 0x19e088: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e08c:
    // 0x19e08c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e090:
    // 0x19e090: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19e090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e094:
    // 0x19e094: 0xc0414ca  jal         func_105328
label_19e098:
    if (ctx->pc == 0x19E098u) {
        ctx->pc = 0x19E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E094u;
        // 0x19e098: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E09Cu;
        goto label_19e09c;
    }
    ctx->pc = 0x19E094u;
    SET_GPR_U32(ctx, 31, 0x19E09Cu);
    ctx->pc = 0x19E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E094u;
    // 0x19e098: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E094u, 0x19E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E09Cu;
label_19e09c:
    // 0x19e09c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x19e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19e0a0:
    // 0x19e0a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19e0a4:
    if (ctx->pc == 0x19E0A4u) {
        ctx->pc = 0x19E0A8u;
        goto label_19e0a8;
    }
    ctx->pc = 0x19E0A0u;
    {
        const bool branch_taken_0x19e0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0a0) {
            ctx->pc = 0x19E0C0u;
            goto label_19e0c0;
        }
    }
    ctx->pc = 0x19E0A8u;
label_19e0a8:
    // 0x19e0a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19e0ac:
    // 0x19e0ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19e0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e0b0:
    // 0x19e0b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19e0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e0b4:
    // 0x19e0b4: 0x60f809  jalr        $v1
label_19e0b8:
    if (ctx->pc == 0x19E0B8u) {
        ctx->pc = 0x19E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0B4u;
        // 0x19e0b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0BCu;
        goto label_19e0bc;
    }
    ctx->pc = 0x19E0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E0BCu);
        ctx->pc = 0x19E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0B4u;
        // 0x19e0b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E0B4u, 0x19E0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E0BCu;
label_19e0bc:
    // 0x19e0bc: 0x0  nop
    ctx->pc = 0x19e0bcu;
    // NOP
label_19e0c0:
    // 0x19e0c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e0c4:
    // 0x19e0c4: 0x0  nop
    ctx->pc = 0x19e0c4u;
    // NOP
label_19e0c8:
    // 0x19e0c8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e0cc:
    // 0x19e0cc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19e0ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19e0d0:
    // 0x19e0d0: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
label_19e0d4:
    if (ctx->pc == 0x19E0D4u) {
        ctx->pc = 0x19E0D8u;
        goto label_19e0d8;
    }
    ctx->pc = 0x19E0D0u;
    {
        const bool branch_taken_0x19e0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e0d0) {
            ctx->pc = 0x19DE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19de38;
        }
    }
    ctx->pc = 0x19E0D8u;
label_19e0d8:
    // 0x19e0d8: 0x1000023b  b           . + 4 + (0x23B << 2)
label_19e0dc:
    if (ctx->pc == 0x19E0DCu) {
        ctx->pc = 0x19E0E0u;
        goto label_19e0e0;
    }
    ctx->pc = 0x19E0D8u;
    {
        const bool branch_taken_0x19e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0d8) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19E0E0u;
label_19e0e0:
    // 0x19e0e0: 0x10000089  b           . + 4 + (0x89 << 2)
label_19e0e4:
    if (ctx->pc == 0x19E0E4u) {
        ctx->pc = 0x19E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0E0u;
        // 0x19e0e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0E8u;
        goto label_19e0e8;
    }
    ctx->pc = 0x19E0E0u;
    {
        const bool branch_taken_0x19e0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0E0u;
        // 0x19e0e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0e0) {
            ctx->pc = 0x19E308u;
            goto label_19e308;
        }
    }
    ctx->pc = 0x19E0E8u;
label_19e0e8:
    // 0x19e0e8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e0ec:
    // 0x19e0ec: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e0f0:
    // 0x19e0f0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x19e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_19e0f4:
    // 0x19e0f4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x19e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_19e0f8:
    // 0x19e0f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e0fc:
    // 0x19e0fc: 0xc0414dc  jal         func_105370
label_19e100:
    if (ctx->pc == 0x19E100u) {
        ctx->pc = 0x19E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0FCu;
        // 0x19e100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E104u;
        goto label_19e104;
    }
    ctx->pc = 0x19E0FCu;
    SET_GPR_U32(ctx, 31, 0x19E104u);
    ctx->pc = 0x19E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0FCu;
    // 0x19e100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E0FCu, 0x19E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E104u;
label_19e104:
    // 0x19e104: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x19e104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e108:
    // 0x19e108: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x19e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_19e10c:
    // 0x19e10c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x19e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_19e110:
    // 0x19e110: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_19e114:
    // 0x19e114: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e118:
    // 0x19e118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e11c:
    // 0x19e11c: 0x0  nop
    ctx->pc = 0x19e11cu;
    // NOP
label_19e120:
    // 0x19e120: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19e120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19e124:
    // 0x19e124: 0x1a40001c  blez        $s2, . + 4 + (0x1C << 2)
label_19e128:
    if (ctx->pc == 0x19E128u) {
        ctx->pc = 0x19E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E124u;
        // 0x19e128: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E12Cu;
        goto label_19e12c;
    }
    ctx->pc = 0x19E124u;
    {
        const bool branch_taken_0x19e124 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x19E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E124u;
        // 0x19e128: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e124) {
            ctx->pc = 0x19E198u;
            goto label_19e198;
        }
    }
    ctx->pc = 0x19E12Cu;
label_19e12c:
    // 0x19e12c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e130:
    // 0x19e130: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x19e130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19e134:
    // 0x19e134: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19e134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19e138:
    // 0x19e138: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x19e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e13c:
    // 0x19e13c: 0xc0414d0  jal         func_105340
label_19e140:
    if (ctx->pc == 0x19E140u) {
        ctx->pc = 0x19E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E13Cu;
        // 0x19e140: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E144u;
        goto label_19e144;
    }
    ctx->pc = 0x19E13Cu;
    SET_GPR_U32(ctx, 31, 0x19E144u);
    ctx->pc = 0x19E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E13Cu;
    // 0x19e140: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E13Cu, 0x19E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E144u;
label_19e144:
    // 0x19e144: 0xc04d7b4  jal         func_135ED0
label_19e148:
    if (ctx->pc == 0x19E148u) {
        ctx->pc = 0x19E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E144u;
        // 0x19e148: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E14Cu;
        goto label_19e14c;
    }
    ctx->pc = 0x19E144u;
    SET_GPR_U32(ctx, 31, 0x19E14Cu);
    ctx->pc = 0x19E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E144u;
    // 0x19e148: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E144u, 0x19E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E14Cu;
label_19e14c:
    // 0x19e14c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e150:
    // 0x19e150: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_19e154:
    // 0x19e154: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_19e158:
    // 0x19e158: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e15c:
    // 0x19e15c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x19e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e160:
    // 0x19e160: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x19e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e164:
    // 0x19e164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e168:
    // 0x19e168: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e16c:
    // 0x19e16c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x19e16cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_19e170:
    // 0x19e170: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x19e170u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_19e174:
    // 0x19e174: 0x0  nop
    ctx->pc = 0x19e174u;
    // NOP
label_19e178:
    // 0x19e178: 0x0  nop
    ctx->pc = 0x19e178u;
    // NOP
label_19e17c:
    // 0x19e17c: 0xc0414dc  jal         func_105370
label_19e180:
    if (ctx->pc == 0x19E180u) {
        ctx->pc = 0x19E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E17Cu;
        // 0x19e180: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E184u;
        goto label_19e184;
    }
    ctx->pc = 0x19E17Cu;
    SET_GPR_U32(ctx, 31, 0x19E184u);
    ctx->pc = 0x19E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E17Cu;
    // 0x19e180: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E17Cu, 0x19E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E184u;
label_19e184:
    // 0x19e184: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e188:
    // 0x19e188: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x19e188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e18c:
    // 0x19e18c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e190:
    // 0x19e190: 0xc0414ca  jal         func_105328
label_19e194:
    if (ctx->pc == 0x19E194u) {
        ctx->pc = 0x19E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E190u;
        // 0x19e194: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E198u;
        goto label_19e198;
    }
    ctx->pc = 0x19E190u;
    SET_GPR_U32(ctx, 31, 0x19E198u);
    ctx->pc = 0x19E194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E190u;
    // 0x19e194: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E190u, 0x19E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E198u;
label_19e198:
    // 0x19e198: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x19e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e19c:
    // 0x19e19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19e1a0:
    // 0x19e1a0: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x19e1a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19e1a4:
    // 0x19e1a4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_19e1a8:
    if (ctx->pc == 0x19E1A8u) {
        ctx->pc = 0x19E1ACu;
        goto label_19e1ac;
    }
    ctx->pc = 0x19E1A4u;
    {
        const bool branch_taken_0x19e1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e1a4) {
            ctx->pc = 0x19E220u;
            goto label_19e220;
        }
    }
    ctx->pc = 0x19E1ACu;
label_19e1ac:
    // 0x19e1ac: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e1b0:
    // 0x19e1b0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e1b4:
    // 0x19e1b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e1b8:
    // 0x19e1b8: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e1bc:
    // 0x19e1bc: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e1c0:
    // 0x19e1c0: 0xc0414d0  jal         func_105340
label_19e1c4:
    if (ctx->pc == 0x19E1C4u) {
        ctx->pc = 0x19E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1C0u;
        // 0x19e1c4: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1C8u;
        goto label_19e1c8;
    }
    ctx->pc = 0x19E1C0u;
    SET_GPR_U32(ctx, 31, 0x19E1C8u);
    ctx->pc = 0x19E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1C0u;
    // 0x19e1c4: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E1C0u, 0x19E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1C8u;
label_19e1c8:
    // 0x19e1c8: 0xc04d7b4  jal         func_135ED0
label_19e1cc:
    if (ctx->pc == 0x19E1CCu) {
        ctx->pc = 0x19E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1C8u;
        // 0x19e1cc: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1D0u;
        goto label_19e1d0;
    }
    ctx->pc = 0x19E1C8u;
    SET_GPR_U32(ctx, 31, 0x19E1D0u);
    ctx->pc = 0x19E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1C8u;
    // 0x19e1cc: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E1C8u, 0x19E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1D0u;
label_19e1d0:
    // 0x19e1d0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e1d4:
    // 0x19e1d4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x19e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_19e1d8:
    // 0x19e1d8: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_19e1dc:
    // 0x19e1dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e1e0:
    // 0x19e1e0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x19e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e1e4:
    // 0x19e1e4: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x19e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e1e8:
    // 0x19e1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e1ec:
    // 0x19e1ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e1f0:
    // 0x19e1f0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x19e1f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_19e1f4:
    // 0x19e1f4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x19e1f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_19e1f8:
    // 0x19e1f8: 0x0  nop
    ctx->pc = 0x19e1f8u;
    // NOP
label_19e1fc:
    // 0x19e1fc: 0x0  nop
    ctx->pc = 0x19e1fcu;
    // NOP
label_19e200:
    // 0x19e200: 0xc0414dc  jal         func_105370
label_19e204:
    if (ctx->pc == 0x19E204u) {
        ctx->pc = 0x19E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E200u;
        // 0x19e204: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E208u;
        goto label_19e208;
    }
    ctx->pc = 0x19E200u;
    SET_GPR_U32(ctx, 31, 0x19E208u);
    ctx->pc = 0x19E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E200u;
    // 0x19e204: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E200u, 0x19E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E208u;
label_19e208:
    // 0x19e208: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e20c:
    // 0x19e20c: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x19e20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e210:
    // 0x19e210: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e214:
    // 0x19e214: 0xc0414ca  jal         func_105328
label_19e218:
    if (ctx->pc == 0x19E218u) {
        ctx->pc = 0x19E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E214u;
        // 0x19e218: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E21Cu;
        goto label_19e21c;
    }
    ctx->pc = 0x19E214u;
    SET_GPR_U32(ctx, 31, 0x19E21Cu);
    ctx->pc = 0x19E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E214u;
    // 0x19e218: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E214u, 0x19E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E21Cu;
label_19e21c:
    // 0x19e21c: 0x0  nop
    ctx->pc = 0x19e21cu;
    // NOP
label_19e220:
    // 0x19e220: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e224:
    // 0x19e224: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e228:
    // 0x19e228: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19e228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e22c:
    // 0x19e22c: 0xc0414ca  jal         func_105328
label_19e230:
    if (ctx->pc == 0x19E230u) {
        ctx->pc = 0x19E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E22Cu;
        // 0x19e230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E234u;
        goto label_19e234;
    }
    ctx->pc = 0x19E22Cu;
    SET_GPR_U32(ctx, 31, 0x19E234u);
    ctx->pc = 0x19E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E22Cu;
    // 0x19e230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E22Cu, 0x19E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E234u;
label_19e234:
    // 0x19e234: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x19e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19e238:
    // 0x19e238: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19e23c:
    if (ctx->pc == 0x19E23Cu) {
        ctx->pc = 0x19E240u;
        goto label_19e240;
    }
    ctx->pc = 0x19E238u;
    {
        const bool branch_taken_0x19e238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e238) {
            ctx->pc = 0x19E258u;
            goto label_19e258;
        }
    }
    ctx->pc = 0x19E240u;
label_19e240:
    // 0x19e240: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19e240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19e244:
    // 0x19e244: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19e244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e248:
    // 0x19e248: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19e248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e24c:
    // 0x19e24c: 0x60f809  jalr        $v1
label_19e250:
    if (ctx->pc == 0x19E250u) {
        ctx->pc = 0x19E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E24Cu;
        // 0x19e250: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E254u;
        goto label_19e254;
    }
    ctx->pc = 0x19E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E254u);
        ctx->pc = 0x19E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E24Cu;
        // 0x19e250: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E24Cu, 0x19E254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E254u;
label_19e254:
    // 0x19e254: 0x0  nop
    ctx->pc = 0x19e254u;
    // NOP
label_19e258:
    // 0x19e258: 0x1a400029  blez        $s2, . + 4 + (0x29 << 2)
label_19e25c:
    if (ctx->pc == 0x19E25Cu) {
        ctx->pc = 0x19E260u;
        goto label_19e260;
    }
    ctx->pc = 0x19E258u;
    {
        const bool branch_taken_0x19e258 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x19e258) {
            ctx->pc = 0x19E300u;
            goto label_19e300;
        }
    }
    ctx->pc = 0x19E260u;
label_19e260:
    // 0x19e260: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e264:
    // 0x19e264: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e268:
    // 0x19e268: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e26c:
    // 0x19e26c: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e270:
    // 0x19e270: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e274:
    // 0x19e274: 0xc0414d0  jal         func_105340
label_19e278:
    if (ctx->pc == 0x19E278u) {
        ctx->pc = 0x19E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E274u;
        // 0x19e278: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E27Cu;
        goto label_19e27c;
    }
    ctx->pc = 0x19E274u;
    SET_GPR_U32(ctx, 31, 0x19E27Cu);
    ctx->pc = 0x19E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E274u;
    // 0x19e278: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E274u, 0x19E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E27Cu;
label_19e27c:
    // 0x19e27c: 0xc04d7b4  jal         func_135ED0
label_19e280:
    if (ctx->pc == 0x19E280u) {
        ctx->pc = 0x19E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E27Cu;
        // 0x19e280: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E284u;
        goto label_19e284;
    }
    ctx->pc = 0x19E27Cu;
    SET_GPR_U32(ctx, 31, 0x19E284u);
    ctx->pc = 0x19E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E27Cu;
    // 0x19e280: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E27Cu, 0x19E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E284u;
label_19e284:
    // 0x19e284: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19e284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e288:
    // 0x19e288: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x19e288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_19e28c:
    // 0x19e28c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19e28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e290:
    // 0x19e290: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e294:
    // 0x19e294: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_19e298:
    if (ctx->pc == 0x19E298u) {
        ctx->pc = 0x19E29Cu;
        goto label_19e29c;
    }
    ctx->pc = 0x19E294u;
    {
        const bool branch_taken_0x19e294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e294) {
            ctx->pc = 0x19E300u;
            goto label_19e300;
        }
    }
    ctx->pc = 0x19E29Cu;
label_19e29c:
    // 0x19e29c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e29cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e2a0:
    // 0x19e2a0: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x19e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e2a4:
    // 0x19e2a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e2a8:
    // 0x19e2a8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e2a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e2ac:
    // 0x19e2ac: 0x0  nop
    ctx->pc = 0x19e2acu;
    // NOP
label_19e2b0:
    // 0x19e2b0: 0x0  nop
    ctx->pc = 0x19e2b0u;
    // NOP
label_19e2b4:
    // 0x19e2b4: 0xc0414dc  jal         func_105370
label_19e2b8:
    if (ctx->pc == 0x19E2B8u) {
        ctx->pc = 0x19E2BCu;
        goto label_19e2bc;
    }
    ctx->pc = 0x19E2B4u;
    SET_GPR_U32(ctx, 31, 0x19E2BCu);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E2B4u, 0x19E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2BCu;
label_19e2bc:
    // 0x19e2bc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e2c0:
    // 0x19e2c0: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x19e2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e2c4:
    // 0x19e2c4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e2c8:
    // 0x19e2c8: 0xc0414ca  jal         func_105328
label_19e2cc:
    if (ctx->pc == 0x19E2CCu) {
        ctx->pc = 0x19E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2C8u;
        // 0x19e2cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2D0u;
        goto label_19e2d0;
    }
    ctx->pc = 0x19E2C8u;
    SET_GPR_U32(ctx, 31, 0x19E2D0u);
    ctx->pc = 0x19E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2C8u;
    // 0x19e2cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E2C8u, 0x19E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2D0u;
label_19e2d0:
    // 0x19e2d0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x19e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_19e2d4:
    // 0x19e2d4: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x19e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e2d8:
    // 0x19e2d8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x19e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_19e2dc:
    // 0x19e2dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e2e0:
    // 0x19e2e0: 0xc0414dc  jal         func_105370
label_19e2e4:
    if (ctx->pc == 0x19E2E4u) {
        ctx->pc = 0x19E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2E0u;
        // 0x19e2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2E8u;
        goto label_19e2e8;
    }
    ctx->pc = 0x19E2E0u;
    SET_GPR_U32(ctx, 31, 0x19E2E8u);
    ctx->pc = 0x19E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2E0u;
    // 0x19e2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E2E0u, 0x19E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2E8u;
label_19e2e8:
    // 0x19e2e8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e2ec:
    // 0x19e2ec: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x19e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_19e2f0:
    // 0x19e2f0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e2f4:
    // 0x19e2f4: 0xc0414ca  jal         func_105328
label_19e2f8:
    if (ctx->pc == 0x19E2F8u) {
        ctx->pc = 0x19E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2F4u;
        // 0x19e2f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2FCu;
        goto label_19e2fc;
    }
    ctx->pc = 0x19E2F4u;
    SET_GPR_U32(ctx, 31, 0x19E2FCu);
    ctx->pc = 0x19E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2F4u;
    // 0x19e2f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E2F4u, 0x19E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2FCu;
label_19e2fc:
    // 0x19e2fc: 0x0  nop
    ctx->pc = 0x19e2fcu;
    // NOP
label_19e300:
    // 0x19e300: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e304:
    // 0x19e304: 0x0  nop
    ctx->pc = 0x19e304u;
    // NOP
label_19e308:
    // 0x19e308: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e30c:
    // 0x19e30c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19e30cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19e310:
    // 0x19e310: 0x1460ff75  bnez        $v1, . + 4 + (-0x8B << 2)
label_19e314:
    if (ctx->pc == 0x19E314u) {
        ctx->pc = 0x19E318u;
        goto label_19e318;
    }
    ctx->pc = 0x19E310u;
    {
        const bool branch_taken_0x19e310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e310) {
            ctx->pc = 0x19E0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e0e8;
        }
    }
    ctx->pc = 0x19E318u;
label_19e318:
    // 0x19e318: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_19e31c:
    if (ctx->pc == 0x19E31Cu) {
        ctx->pc = 0x19E320u;
        goto label_19e320;
    }
    ctx->pc = 0x19E318u;
    {
        const bool branch_taken_0x19e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e318) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19E320u;
label_19e320:
    // 0x19e320: 0x1000007b  b           . + 4 + (0x7B << 2)
label_19e324:
    if (ctx->pc == 0x19E324u) {
        ctx->pc = 0x19E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E320u;
        // 0x19e324: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E328u;
        goto label_19e328;
    }
    ctx->pc = 0x19E320u;
    {
        const bool branch_taken_0x19e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E320u;
        // 0x19e324: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e320) {
            ctx->pc = 0x19E510u;
            goto label_19e510;
        }
    }
    ctx->pc = 0x19E328u;
label_19e328:
    // 0x19e328: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e32c:
    // 0x19e32c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e330:
    // 0x19e330: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x19e330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_19e334:
    // 0x19e334: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x19e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_19e338:
    // 0x19e338: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e33c:
    // 0x19e33c: 0xc0414dc  jal         func_105370
label_19e340:
    if (ctx->pc == 0x19E340u) {
        ctx->pc = 0x19E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E33Cu;
        // 0x19e340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E344u;
        goto label_19e344;
    }
    ctx->pc = 0x19E33Cu;
    SET_GPR_U32(ctx, 31, 0x19E344u);
    ctx->pc = 0x19E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E33Cu;
    // 0x19e340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E33Cu, 0x19E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E344u;
label_19e344:
    // 0x19e344: 0x12400070  beqz        $s2, . + 4 + (0x70 << 2)
label_19e348:
    if (ctx->pc == 0x19E348u) {
        ctx->pc = 0x19E34Cu;
        goto label_19e34c;
    }
    ctx->pc = 0x19E344u;
    {
        const bool branch_taken_0x19e344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e344) {
            ctx->pc = 0x19E508u;
            goto label_19e508;
        }
    }
    ctx->pc = 0x19E34Cu;
label_19e34c:
    // 0x19e34c: 0x1a400020  blez        $s2, . + 4 + (0x20 << 2)
label_19e350:
    if (ctx->pc == 0x19E350u) {
        ctx->pc = 0x19E354u;
        goto label_19e354;
    }
    ctx->pc = 0x19E34Cu;
    {
        const bool branch_taken_0x19e34c = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x19e34c) {
            ctx->pc = 0x19E3D0u;
            goto label_19e3d0;
        }
    }
    ctx->pc = 0x19E354u;
label_19e354:
    // 0x19e354: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e358:
    // 0x19e358: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e35c:
    // 0x19e35c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e360:
    // 0x19e360: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e364:
    // 0x19e364: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e368:
    // 0x19e368: 0xc0414d0  jal         func_105340
label_19e36c:
    if (ctx->pc == 0x19E36Cu) {
        ctx->pc = 0x19E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E368u;
        // 0x19e36c: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E370u;
        goto label_19e370;
    }
    ctx->pc = 0x19E368u;
    SET_GPR_U32(ctx, 31, 0x19E370u);
    ctx->pc = 0x19E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E368u;
    // 0x19e36c: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E368u, 0x19E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E370u;
label_19e370:
    // 0x19e370: 0xc04d7b4  jal         func_135ED0
label_19e374:
    if (ctx->pc == 0x19E374u) {
        ctx->pc = 0x19E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E370u;
        // 0x19e374: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E378u;
        goto label_19e378;
    }
    ctx->pc = 0x19E370u;
    SET_GPR_U32(ctx, 31, 0x19E378u);
    ctx->pc = 0x19E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E370u;
    // 0x19e374: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E370u, 0x19E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E378u;
label_19e378:
    // 0x19e378: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e37c:
    // 0x19e37c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19e380:
    // 0x19e380: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e384:
    // 0x19e384: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e388:
    // 0x19e388: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_19e38c:
    if (ctx->pc == 0x19E38Cu) {
        ctx->pc = 0x19E390u;
        goto label_19e390;
    }
    ctx->pc = 0x19E388u;
    {
        const bool branch_taken_0x19e388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e388) {
            ctx->pc = 0x19E3D0u;
            goto label_19e3d0;
        }
    }
    ctx->pc = 0x19E390u;
label_19e390:
    // 0x19e390: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e394:
    // 0x19e394: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19e398:
    // 0x19e398: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x19e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e39c:
    // 0x19e39c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e3a0:
    // 0x19e3a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e3a4:
    // 0x19e3a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19e3a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e3a8:
    // 0x19e3a8: 0x0  nop
    ctx->pc = 0x19e3a8u;
    // NOP
label_19e3ac:
    // 0x19e3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e3b0:
    // 0x19e3b0: 0xc0414dc  jal         func_105370
label_19e3b4:
    if (ctx->pc == 0x19E3B4u) {
        ctx->pc = 0x19E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3B0u;
        // 0x19e3b4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3B8u;
        goto label_19e3b8;
    }
    ctx->pc = 0x19E3B0u;
    SET_GPR_U32(ctx, 31, 0x19E3B8u);
    ctx->pc = 0x19E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3B0u;
    // 0x19e3b4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E3B0u, 0x19E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3B8u;
label_19e3b8:
    // 0x19e3b8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e3bc:
    // 0x19e3bc: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x19e3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e3c0:
    // 0x19e3c0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e3c4:
    // 0x19e3c4: 0xc0414ca  jal         func_105328
label_19e3c8:
    if (ctx->pc == 0x19E3C8u) {
        ctx->pc = 0x19E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3C4u;
        // 0x19e3c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3CCu;
        goto label_19e3cc;
    }
    ctx->pc = 0x19E3C4u;
    SET_GPR_U32(ctx, 31, 0x19E3CCu);
    ctx->pc = 0x19E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3C4u;
    // 0x19e3c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E3C4u, 0x19E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3CCu;
label_19e3cc:
    // 0x19e3cc: 0x0  nop
    ctx->pc = 0x19e3ccu;
    // NOP
label_19e3d0:
    // 0x19e3d0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x19e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e3d4:
    // 0x19e3d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19e3d8:
    // 0x19e3d8: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x19e3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19e3dc:
    // 0x19e3dc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_19e3e0:
    if (ctx->pc == 0x19E3E0u) {
        ctx->pc = 0x19E3E4u;
        goto label_19e3e4;
    }
    ctx->pc = 0x19E3DCu;
    {
        const bool branch_taken_0x19e3dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3dc) {
            ctx->pc = 0x19E438u;
            goto label_19e438;
        }
    }
    ctx->pc = 0x19E3E4u;
label_19e3e4:
    // 0x19e3e4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x19e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e3e8:
    // 0x19e3e8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e3ec:
    // 0x19e3ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e3f0:
    // 0x19e3f0: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e3f4:
    // 0x19e3f4: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e3f8:
    // 0x19e3f8: 0xc0414d0  jal         func_105340
label_19e3fc:
    if (ctx->pc == 0x19E3FCu) {
        ctx->pc = 0x19E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F8u;
        // 0x19e3fc: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E400u;
        goto label_19e400;
    }
    ctx->pc = 0x19E3F8u;
    SET_GPR_U32(ctx, 31, 0x19E400u);
    ctx->pc = 0x19E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3F8u;
    // 0x19e3fc: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E3F8u, 0x19E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E400u;
label_19e400:
    // 0x19e400: 0xc04d7b4  jal         func_135ED0
label_19e404:
    if (ctx->pc == 0x19E404u) {
        ctx->pc = 0x19E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E400u;
        // 0x19e404: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E408u;
        goto label_19e408;
    }
    ctx->pc = 0x19E400u;
    SET_GPR_U32(ctx, 31, 0x19E408u);
    ctx->pc = 0x19E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E400u;
    // 0x19e404: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E400u, 0x19E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E408u;
label_19e408:
    // 0x19e408: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e40c:
    // 0x19e40c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x19e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e410:
    // 0x19e410: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_19e414:
    // 0x19e414: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e418:
    // 0x19e418: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e41c:
    // 0x19e41c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e41cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e420:
    // 0x19e420: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e424:
    // 0x19e424: 0x0  nop
    ctx->pc = 0x19e424u;
    // NOP
label_19e428:
    // 0x19e428: 0x0  nop
    ctx->pc = 0x19e428u;
    // NOP
label_19e42c:
    // 0x19e42c: 0xc0414dc  jal         func_105370
label_19e430:
    if (ctx->pc == 0x19E430u) {
        ctx->pc = 0x19E434u;
        goto label_19e434;
    }
    ctx->pc = 0x19E42Cu;
    SET_GPR_U32(ctx, 31, 0x19E434u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E42Cu, 0x19E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E434u;
label_19e434:
    // 0x19e434: 0x0  nop
    ctx->pc = 0x19e434u;
    // NOP
label_19e438:
    // 0x19e438: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e43c:
    // 0x19e43c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e440:
    // 0x19e440: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19e440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e444:
    // 0x19e444: 0xc0414ca  jal         func_105328
label_19e448:
    if (ctx->pc == 0x19E448u) {
        ctx->pc = 0x19E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E444u;
        // 0x19e448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E44Cu;
        goto label_19e44c;
    }
    ctx->pc = 0x19E444u;
    SET_GPR_U32(ctx, 31, 0x19E44Cu);
    ctx->pc = 0x19E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E444u;
    // 0x19e448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E444u, 0x19E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E44Cu;
label_19e44c:
    // 0x19e44c: 0x1a400026  blez        $s2, . + 4 + (0x26 << 2)
label_19e450:
    if (ctx->pc == 0x19E450u) {
        ctx->pc = 0x19E454u;
        goto label_19e454;
    }
    ctx->pc = 0x19E44Cu;
    {
        const bool branch_taken_0x19e44c = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x19e44c) {
            ctx->pc = 0x19E4E8u;
            goto label_19e4e8;
        }
    }
    ctx->pc = 0x19E454u;
label_19e454:
    // 0x19e454: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e458:
    // 0x19e458: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e45c:
    // 0x19e45c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e460:
    // 0x19e460: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e464:
    // 0x19e464: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e468:
    // 0x19e468: 0xc0414d0  jal         func_105340
label_19e46c:
    if (ctx->pc == 0x19E46Cu) {
        ctx->pc = 0x19E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E468u;
        // 0x19e46c: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E470u;
        goto label_19e470;
    }
    ctx->pc = 0x19E468u;
    SET_GPR_U32(ctx, 31, 0x19E470u);
    ctx->pc = 0x19E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E468u;
    // 0x19e46c: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E468u, 0x19E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E470u;
label_19e470:
    // 0x19e470: 0xc04d7b4  jal         func_135ED0
label_19e474:
    if (ctx->pc == 0x19E474u) {
        ctx->pc = 0x19E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E470u;
        // 0x19e474: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E478u;
        goto label_19e478;
    }
    ctx->pc = 0x19E470u;
    SET_GPR_U32(ctx, 31, 0x19E478u);
    ctx->pc = 0x19E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E470u;
    // 0x19e474: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E470u, 0x19E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E478u;
label_19e478:
    // 0x19e478: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e47c:
    // 0x19e47c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x19e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e480:
    // 0x19e480: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19e484:
    // 0x19e484: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e488:
    // 0x19e488: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e48c:
    // 0x19e48c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e48cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e490:
    // 0x19e490: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e490u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e494:
    // 0x19e494: 0x0  nop
    ctx->pc = 0x19e494u;
    // NOP
label_19e498:
    // 0x19e498: 0x0  nop
    ctx->pc = 0x19e498u;
    // NOP
label_19e49c:
    // 0x19e49c: 0xc0414dc  jal         func_105370
label_19e4a0:
    if (ctx->pc == 0x19E4A0u) {
        ctx->pc = 0x19E4A4u;
        goto label_19e4a4;
    }
    ctx->pc = 0x19E49Cu;
    SET_GPR_U32(ctx, 31, 0x19E4A4u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E49Cu, 0x19E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4A4u;
label_19e4a4:
    // 0x19e4a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e4a8:
    // 0x19e4a8: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x19e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e4ac:
    // 0x19e4ac: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e4b0:
    // 0x19e4b0: 0xc0414ca  jal         func_105328
label_19e4b4:
    if (ctx->pc == 0x19E4B4u) {
        ctx->pc = 0x19E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B0u;
        // 0x19e4b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4B8u;
        goto label_19e4b8;
    }
    ctx->pc = 0x19E4B0u;
    SET_GPR_U32(ctx, 31, 0x19E4B8u);
    ctx->pc = 0x19E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4B0u;
    // 0x19e4b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E4B0u, 0x19E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4B8u;
label_19e4b8:
    // 0x19e4b8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19e4bc:
    // 0x19e4bc: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x19e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e4c0:
    // 0x19e4c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e4c4:
    // 0x19e4c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e4c8:
    // 0x19e4c8: 0xc0414dc  jal         func_105370
label_19e4cc:
    if (ctx->pc == 0x19E4CCu) {
        ctx->pc = 0x19E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4C8u;
        // 0x19e4cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4D0u;
        goto label_19e4d0;
    }
    ctx->pc = 0x19E4C8u;
    SET_GPR_U32(ctx, 31, 0x19E4D0u);
    ctx->pc = 0x19E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4C8u;
    // 0x19e4cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E4C8u, 0x19E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4D0u;
label_19e4d0:
    // 0x19e4d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e4d4:
    // 0x19e4d4: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x19e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_19e4d8:
    // 0x19e4d8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e4dc:
    // 0x19e4dc: 0xc0414ca  jal         func_105328
label_19e4e0:
    if (ctx->pc == 0x19E4E0u) {
        ctx->pc = 0x19E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4DCu;
        // 0x19e4e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4E4u;
        goto label_19e4e4;
    }
    ctx->pc = 0x19E4DCu;
    SET_GPR_U32(ctx, 31, 0x19E4E4u);
    ctx->pc = 0x19E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4DCu;
    // 0x19e4e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E4DCu, 0x19E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4E4u;
label_19e4e4:
    // 0x19e4e4: 0x0  nop
    ctx->pc = 0x19e4e4u;
    // NOP
label_19e4e8:
    // 0x19e4e8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x19e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19e4ec:
    // 0x19e4ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19e4f0:
    if (ctx->pc == 0x19E4F0u) {
        ctx->pc = 0x19E4F4u;
        goto label_19e4f4;
    }
    ctx->pc = 0x19E4ECu;
    {
        const bool branch_taken_0x19e4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4ec) {
            ctx->pc = 0x19E508u;
            goto label_19e508;
        }
    }
    ctx->pc = 0x19E4F4u;
label_19e4f4:
    // 0x19e4f4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19e4f8:
    // 0x19e4f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19e4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e4fc:
    // 0x19e4fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19e4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e500:
    // 0x19e500: 0x60f809  jalr        $v1
label_19e504:
    if (ctx->pc == 0x19E504u) {
        ctx->pc = 0x19E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E500u;
        // 0x19e504: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E508u;
        goto label_19e508;
    }
    ctx->pc = 0x19E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E508u);
        ctx->pc = 0x19E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E500u;
        // 0x19e504: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E500u, 0x19E508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E508u;
label_19e508:
    // 0x19e508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e50c:
    // 0x19e50c: 0x0  nop
    ctx->pc = 0x19e50cu;
    // NOP
label_19e510:
    // 0x19e510: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x19e510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e514:
    // 0x19e514: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x19e514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_19e518:
    // 0x19e518: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_19e51c:
    if (ctx->pc == 0x19E51Cu) {
        ctx->pc = 0x19E520u;
        goto label_19e520;
    }
    ctx->pc = 0x19E518u;
    {
        const bool branch_taken_0x19e518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e518) {
            ctx->pc = 0x19E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e328;
        }
    }
    ctx->pc = 0x19E520u;
label_19e520:
    // 0x19e520: 0x10000027  b           . + 4 + (0x27 << 2)
label_19e524:
    if (ctx->pc == 0x19E524u) {
        ctx->pc = 0x19E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E520u;
        // 0x19e524: 0x2492fffd  addiu       $s2, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E528u;
        goto label_19e528;
    }
    ctx->pc = 0x19E520u;
    {
        const bool branch_taken_0x19e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E520u;
        // 0x19e524: 0x2492fffd  addiu       $s2, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e520) {
            ctx->pc = 0x19E5C0u;
            goto label_19e5c0;
        }
    }
    ctx->pc = 0x19E528u;
label_19e528:
    // 0x19e528: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e52c:
    // 0x19e52c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19e530:
    // 0x19e530: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_19e534:
    // 0x19e534: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e538:
    // 0x19e538: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e53c:
    // 0x19e53c: 0xc0414d0  jal         func_105340
label_19e540:
    if (ctx->pc == 0x19E540u) {
        ctx->pc = 0x19E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E53Cu;
        // 0x19e540: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E544u;
        goto label_19e544;
    }
    ctx->pc = 0x19E53Cu;
    SET_GPR_U32(ctx, 31, 0x19E544u);
    ctx->pc = 0x19E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E53Cu;
    // 0x19e540: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E53Cu, 0x19E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E544u;
label_19e544:
    // 0x19e544: 0xc04d7b4  jal         func_135ED0
label_19e548:
    if (ctx->pc == 0x19E548u) {
        ctx->pc = 0x19E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E544u;
        // 0x19e548: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E54Cu;
        goto label_19e54c;
    }
    ctx->pc = 0x19E544u;
    SET_GPR_U32(ctx, 31, 0x19E54Cu);
    ctx->pc = 0x19E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E544u;
    // 0x19e548: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E544u, 0x19E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E54Cu;
label_19e54c:
    // 0x19e54c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e550:
    // 0x19e550: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x19e550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_19e554:
    // 0x19e554: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x19e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_19e558:
    // 0x19e558: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e55c:
    // 0x19e55c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19e55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e560:
    // 0x19e560: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e560u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e564:
    // 0x19e564: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e564u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e568:
    // 0x19e568: 0x0  nop
    ctx->pc = 0x19e568u;
    // NOP
label_19e56c:
    // 0x19e56c: 0x0  nop
    ctx->pc = 0x19e56cu;
    // NOP
label_19e570:
    // 0x19e570: 0xc0414dc  jal         func_105370
label_19e574:
    if (ctx->pc == 0x19E574u) {
        ctx->pc = 0x19E578u;
        goto label_19e578;
    }
    ctx->pc = 0x19E570u;
    SET_GPR_U32(ctx, 31, 0x19E578u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E570u, 0x19E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E578u;
label_19e578:
    // 0x19e578: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e57c:
    // 0x19e57c: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_19e580:
    // 0x19e580: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e584:
    // 0x19e584: 0xc0414ca  jal         func_105328
label_19e588:
    if (ctx->pc == 0x19E588u) {
        ctx->pc = 0x19E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E584u;
        // 0x19e588: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E58Cu;
        goto label_19e58c;
    }
    ctx->pc = 0x19E584u;
    SET_GPR_U32(ctx, 31, 0x19E58Cu);
    ctx->pc = 0x19E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E584u;
    // 0x19e588: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E584u, 0x19E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E58Cu;
label_19e58c:
    // 0x19e58c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19e590:
    // 0x19e590: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x19e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_19e594:
    // 0x19e594: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e598:
    // 0x19e598: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e59c:
    // 0x19e59c: 0xc0414dc  jal         func_105370
label_19e5a0:
    if (ctx->pc == 0x19E5A0u) {
        ctx->pc = 0x19E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E59Cu;
        // 0x19e5a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5A4u;
        goto label_19e5a4;
    }
    ctx->pc = 0x19E59Cu;
    SET_GPR_U32(ctx, 31, 0x19E5A4u);
    ctx->pc = 0x19E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E59Cu;
    // 0x19e5a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E59Cu, 0x19E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5A4u;
label_19e5a4:
    // 0x19e5a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e5a8:
    // 0x19e5a8: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x19e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_19e5ac:
    // 0x19e5ac: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e5b0:
    // 0x19e5b0: 0xc0414ca  jal         func_105328
label_19e5b4:
    if (ctx->pc == 0x19E5B4u) {
        ctx->pc = 0x19E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B0u;
        // 0x19e5b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5B8u;
        goto label_19e5b8;
    }
    ctx->pc = 0x19E5B0u;
    SET_GPR_U32(ctx, 31, 0x19E5B8u);
    ctx->pc = 0x19E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5B0u;
    // 0x19e5b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E5B0u, 0x19E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19e5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e5bc:
    // 0x19e5bc: 0x0  nop
    ctx->pc = 0x19e5bcu;
    // NOP
label_19e5c0:
    // 0x19e5c0: 0x641ffd9  bgez        $s2, . + 4 + (-0x27 << 2)
label_19e5c4:
    if (ctx->pc == 0x19E5C4u) {
        ctx->pc = 0x19E5C8u;
        goto label_19e5c8;
    }
    ctx->pc = 0x19E5C0u;
    {
        const bool branch_taken_0x19e5c0 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x19e5c0) {
            ctx->pc = 0x19E528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e528;
        }
    }
    ctx->pc = 0x19E5C8u;
label_19e5c8:
    // 0x19e5c8: 0x10000027  b           . + 4 + (0x27 << 2)
label_19e5cc:
    if (ctx->pc == 0x19E5CCu) {
        ctx->pc = 0x19E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5C8u;
        // 0x19e5cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5D0u;
        goto label_19e5d0;
    }
    ctx->pc = 0x19E5C8u;
    {
        const bool branch_taken_0x19e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5C8u;
        // 0x19e5cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5c8) {
            ctx->pc = 0x19E668u;
            goto label_19e668;
        }
    }
    ctx->pc = 0x19E5D0u;
label_19e5d0:
    // 0x19e5d0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x19e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19e5d4:
    // 0x19e5d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19e5d8:
    if (ctx->pc == 0x19E5D8u) {
        ctx->pc = 0x19E5DCu;
        goto label_19e5dc;
    }
    ctx->pc = 0x19E5D4u;
    {
        const bool branch_taken_0x19e5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5d4) {
            ctx->pc = 0x19E5F0u;
            goto label_19e5f0;
        }
    }
    ctx->pc = 0x19E5DCu;
label_19e5dc:
    // 0x19e5dc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19e5e0:
    // 0x19e5e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19e5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e5e4:
    // 0x19e5e4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19e5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e5e8:
    // 0x19e5e8: 0x60f809  jalr        $v1
label_19e5ec:
    if (ctx->pc == 0x19E5ECu) {
        ctx->pc = 0x19E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5E8u;
        // 0x19e5ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5F0u;
        goto label_19e5f0;
    }
    ctx->pc = 0x19E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E5F0u);
        ctx->pc = 0x19E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5E8u;
        // 0x19e5ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E5E8u, 0x19E5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E5F0u;
label_19e5f0:
    // 0x19e5f0: 0x1a40001b  blez        $s2, . + 4 + (0x1B << 2)
label_19e5f4:
    if (ctx->pc == 0x19E5F4u) {
        ctx->pc = 0x19E5F8u;
        goto label_19e5f8;
    }
    ctx->pc = 0x19E5F0u;
    {
        const bool branch_taken_0x19e5f0 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x19e5f0) {
            ctx->pc = 0x19E660u;
            goto label_19e660;
        }
    }
    ctx->pc = 0x19E5F8u;
label_19e5f8:
    // 0x19e5f8: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e5fc:
    // 0x19e5fc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e600:
    // 0x19e600: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e604:
    // 0x19e604: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e608:
    // 0x19e608: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e60c:
    // 0x19e60c: 0xc0414d0  jal         func_105340
label_19e610:
    if (ctx->pc == 0x19E610u) {
        ctx->pc = 0x19E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E60Cu;
        // 0x19e610: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E614u;
        goto label_19e614;
    }
    ctx->pc = 0x19E60Cu;
    SET_GPR_U32(ctx, 31, 0x19E614u);
    ctx->pc = 0x19E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E60Cu;
    // 0x19e610: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E60Cu, 0x19E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E614u;
label_19e614:
    // 0x19e614: 0xc04d7b4  jal         func_135ED0
label_19e618:
    if (ctx->pc == 0x19E618u) {
        ctx->pc = 0x19E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E614u;
        // 0x19e618: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E61Cu;
        goto label_19e61c;
    }
    ctx->pc = 0x19E614u;
    SET_GPR_U32(ctx, 31, 0x19E61Cu);
    ctx->pc = 0x19E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E614u;
    // 0x19e618: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E614u, 0x19E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E61Cu;
label_19e61c:
    // 0x19e61c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e620:
    // 0x19e620: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x19e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_19e624:
    // 0x19e624: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19e628:
    // 0x19e628: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e62c:
    // 0x19e62c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e630:
    // 0x19e630: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e634:
    // 0x19e634: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e634u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e638:
    // 0x19e638: 0x0  nop
    ctx->pc = 0x19e638u;
    // NOP
label_19e63c:
    // 0x19e63c: 0x0  nop
    ctx->pc = 0x19e63cu;
    // NOP
label_19e640:
    // 0x19e640: 0xc0414dc  jal         func_105370
label_19e644:
    if (ctx->pc == 0x19E644u) {
        ctx->pc = 0x19E648u;
        goto label_19e648;
    }
    ctx->pc = 0x19E640u;
    SET_GPR_U32(ctx, 31, 0x19E648u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E640u, 0x19E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E648u;
label_19e648:
    // 0x19e648: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e64c:
    // 0x19e64c: 0x27a602d0  addiu       $a2, $sp, 0x2D0
    ctx->pc = 0x19e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_19e650:
    // 0x19e650: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e654:
    // 0x19e654: 0xc0414ca  jal         func_105328
label_19e658:
    if (ctx->pc == 0x19E658u) {
        ctx->pc = 0x19E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E654u;
        // 0x19e658: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E65Cu;
        goto label_19e65c;
    }
    ctx->pc = 0x19E654u;
    SET_GPR_U32(ctx, 31, 0x19E65Cu);
    ctx->pc = 0x19E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E654u;
    // 0x19e658: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E654u, 0x19E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E65Cu;
label_19e65c:
    // 0x19e65c: 0x0  nop
    ctx->pc = 0x19e65cu;
    // NOP
label_19e660:
    // 0x19e660: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e664:
    // 0x19e664: 0x0  nop
    ctx->pc = 0x19e664u;
    // NOP
label_19e668:
    // 0x19e668: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e66c:
    // 0x19e66c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19e670:
    // 0x19e670: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_19e674:
    if (ctx->pc == 0x19E674u) {
        ctx->pc = 0x19E678u;
        goto label_19e678;
    }
    ctx->pc = 0x19E670u;
    {
        const bool branch_taken_0x19e670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e670) {
            ctx->pc = 0x19E5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e5d0;
        }
    }
    ctx->pc = 0x19E678u;
label_19e678:
    // 0x19e678: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_19e67c:
    if (ctx->pc == 0x19E67Cu) {
        ctx->pc = 0x19E680u;
        goto label_19e680;
    }
    ctx->pc = 0x19E678u;
    {
        const bool branch_taken_0x19e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e678) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19E680u;
label_19e680:
    // 0x19e680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e684:
    // 0x19e684: 0xc06736c  jal         func_19CDB0
label_19e688:
    if (ctx->pc == 0x19E688u) {
        ctx->pc = 0x19E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E684u;
        // 0x19e688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E68Cu;
        goto label_19e68c;
    }
    ctx->pc = 0x19E684u;
    SET_GPR_U32(ctx, 31, 0x19E68Cu);
    ctx->pc = 0x19E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E684u;
    // 0x19e688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19E684u, 0x19E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E68Cu;
label_19e68c:
    // 0x19e68c: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x19e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19e690:
    // 0x19e690: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x19e690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19e694:
    // 0x19e694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e698:
    // 0x19e698: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e69c:
    // 0x19e69c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19e6a0:
    // 0x19e6a0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_19e6a4:
    // 0x19e6a4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x19e6a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19e6a8:
    // 0x19e6a8: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_19e6ac:
    if (ctx->pc == 0x19E6ACu) {
        ctx->pc = 0x19E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A8u;
        // 0x19e6ac: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6B0u;
        goto label_19e6b0;
    }
    ctx->pc = 0x19E6A8u;
    {
        const bool branch_taken_0x19e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A8u;
        // 0x19e6ac: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6a8) {
            ctx->pc = 0x19E9B8u;
            goto label_19e9b8;
        }
    }
    ctx->pc = 0x19E6B0u;
label_19e6b0:
    // 0x19e6b0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e6b4:
    // 0x19e6b4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e6b8:
    // 0x19e6b8: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
label_19e6bc:
    // 0x19e6bc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x19e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_19e6c0:
    // 0x19e6c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e6c4:
    // 0x19e6c4: 0xc0414dc  jal         func_105370
label_19e6c8:
    if (ctx->pc == 0x19E6C8u) {
        ctx->pc = 0x19E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C4u;
        // 0x19e6c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6CCu;
        goto label_19e6cc;
    }
    ctx->pc = 0x19E6C4u;
    SET_GPR_U32(ctx, 31, 0x19E6CCu);
    ctx->pc = 0x19E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C4u;
    // 0x19e6c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E6C4u, 0x19E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6CCu;
label_19e6cc:
    // 0x19e6cc: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e6d0:
    // 0x19e6d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e6d4:
    // 0x19e6d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e6d8:
    // 0x19e6d8: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e6dc:
    // 0x19e6dc: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e6e0:
    // 0x19e6e0: 0xc0414d0  jal         func_105340
label_19e6e4:
    if (ctx->pc == 0x19E6E4u) {
        ctx->pc = 0x19E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E0u;
        // 0x19e6e4: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6E8u;
        goto label_19e6e8;
    }
    ctx->pc = 0x19E6E0u;
    SET_GPR_U32(ctx, 31, 0x19E6E8u);
    ctx->pc = 0x19E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6E0u;
    // 0x19e6e4: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E6E0u, 0x19E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6E8u;
label_19e6e8:
    // 0x19e6e8: 0xc04d7b4  jal         func_135ED0
label_19e6ec:
    if (ctx->pc == 0x19E6ECu) {
        ctx->pc = 0x19E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E8u;
        // 0x19e6ec: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6F0u;
        goto label_19e6f0;
    }
    ctx->pc = 0x19E6E8u;
    SET_GPR_U32(ctx, 31, 0x19E6F0u);
    ctx->pc = 0x19E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6E8u;
    // 0x19e6ec: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E6E8u, 0x19E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6F0u;
label_19e6f0:
    // 0x19e6f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e6f4:
    // 0x19e6f4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19e6f8:
    // 0x19e6f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e6fc:
    // 0x19e6fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e6fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e700:
    // 0x19e700: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_19e704:
    if (ctx->pc == 0x19E704u) {
        ctx->pc = 0x19E708u;
        goto label_19e708;
    }
    ctx->pc = 0x19E700u;
    {
        const bool branch_taken_0x19e700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e700) {
            ctx->pc = 0x19E748u;
            goto label_19e748;
        }
    }
    ctx->pc = 0x19E708u;
label_19e708:
    // 0x19e708: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e70c:
    // 0x19e70c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19e710:
    // 0x19e710: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e714:
    // 0x19e714: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e718:
    // 0x19e718: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e71c:
    // 0x19e71c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19e71cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e720:
    // 0x19e720: 0x0  nop
    ctx->pc = 0x19e720u;
    // NOP
label_19e724:
    // 0x19e724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e728:
    // 0x19e728: 0xc0414dc  jal         func_105370
label_19e72c:
    if (ctx->pc == 0x19E72Cu) {
        ctx->pc = 0x19E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E728u;
        // 0x19e72c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E730u;
        goto label_19e730;
    }
    ctx->pc = 0x19E728u;
    SET_GPR_U32(ctx, 31, 0x19E730u);
    ctx->pc = 0x19E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E728u;
    // 0x19e72c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E728u, 0x19E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E730u;
label_19e730:
    // 0x19e730: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e734:
    // 0x19e734: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x19e734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e738:
    // 0x19e738: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e73c:
    // 0x19e73c: 0xc0414ca  jal         func_105328
label_19e740:
    if (ctx->pc == 0x19E740u) {
        ctx->pc = 0x19E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E73Cu;
        // 0x19e740: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E744u;
        goto label_19e744;
    }
    ctx->pc = 0x19E73Cu;
    SET_GPR_U32(ctx, 31, 0x19E744u);
    ctx->pc = 0x19E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E73Cu;
    // 0x19e740: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E73Cu, 0x19E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E744u;
label_19e744:
    // 0x19e744: 0x0  nop
    ctx->pc = 0x19e744u;
    // NOP
label_19e748:
    // 0x19e748: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19e74c:
    // 0x19e74c: 0x2442e710  addiu       $v0, $v0, -0x18F0
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
label_19e750:
    // 0x19e750: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x19e750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_19e754:
    // 0x19e754: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x19e754u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19e758:
    // 0x19e758: 0x27a902b0  addiu       $t1, $sp, 0x2B0
    ctx->pc = 0x19e758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_19e75c:
    // 0x19e75c: 0x24c6e720  addiu       $a2, $a2, -0x18E0
    ctx->pc = 0x19e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960928));
label_19e760:
    // 0x19e760: 0x27a702a0  addiu       $a3, $sp, 0x2A0
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_19e764:
    // 0x19e764: 0x27a30290  addiu       $v1, $sp, 0x290
    ctx->pc = 0x19e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_19e768:
    // 0x19e768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e76c:
    // 0x19e76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e770:
    // 0x19e770: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x19e770u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_19e774:
    // 0x19e774: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19e778:
    // 0x19e778: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x19e778u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19e77c:
    // 0x19e77c: 0x2442e730  addiu       $v0, $v0, -0x18D0
    ctx->pc = 0x19e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960944));
label_19e780:
    // 0x19e780: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x19e780u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_19e784:
    // 0x19e784: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19e784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19e788:
    // 0x19e788: 0xc06736c  jal         func_19CDB0
label_19e78c:
    if (ctx->pc == 0x19E78Cu) {
        ctx->pc = 0x19E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E788u;
        // 0x19e78c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E790u;
        goto label_19e790;
    }
    ctx->pc = 0x19E788u;
    SET_GPR_U32(ctx, 31, 0x19E790u);
    ctx->pc = 0x19E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E788u;
    // 0x19e78c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19E788u, 0x19E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E790u;
label_19e790:
    // 0x19e790: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x19e790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e794:
    // 0x19e794: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19e794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19e798:
    // 0x19e798: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19e79c:
    // 0x19e79c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x19e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_19e7a0:
    // 0x19e7a0: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x19e7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_19e7a4:
    // 0x19e7a4: 0xc041442  jal         func_105108
label_19e7a8:
    if (ctx->pc == 0x19E7A8u) {
        ctx->pc = 0x19E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7A4u;
        // 0x19e7a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7ACu;
        goto label_19e7ac;
    }
    ctx->pc = 0x19E7A4u;
    SET_GPR_U32(ctx, 31, 0x19E7ACu);
    ctx->pc = 0x19E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7A4u;
    // 0x19e7a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x19E7A4u, 0x19E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7ACu;
label_19e7ac:
    // 0x19e7ac: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19e7b0:
    // 0x19e7b0: 0x1e1980  sll         $v1, $fp, 6
    ctx->pc = 0x19e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_19e7b4:
    // 0x19e7b4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_19e7b8:
    // 0x19e7b8: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x19e7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_19e7bc:
    // 0x19e7bc: 0xc041442  jal         func_105108
label_19e7c0:
    if (ctx->pc == 0x19E7C0u) {
        ctx->pc = 0x19E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7BCu;
        // 0x19e7c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7C4u;
        goto label_19e7c4;
    }
    ctx->pc = 0x19E7BCu;
    SET_GPR_U32(ctx, 31, 0x19E7C4u);
    ctx->pc = 0x19E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7BCu;
    // 0x19e7c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x19E7BCu, 0x19E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7C4u;
label_19e7c4:
    // 0x19e7c4: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19e7c8:
    // 0x19e7c8: 0x1e1980  sll         $v1, $fp, 6
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_19e7cc:
    // 0x19e7cc: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x19e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_19e7d0:
    // 0x19e7d0: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x19e7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_19e7d4:
    // 0x19e7d4: 0xc041442  jal         func_105108
label_19e7d8:
    if (ctx->pc == 0x19E7D8u) {
        ctx->pc = 0x19E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D4u;
        // 0x19e7d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7DCu;
        goto label_19e7dc;
    }
    ctx->pc = 0x19E7D4u;
    SET_GPR_U32(ctx, 31, 0x19E7DCu);
    ctx->pc = 0x19E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7D4u;
    // 0x19e7d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x19E7D4u, 0x19E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7DCu;
label_19e7dc:
    // 0x19e7dc: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x19e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e7e0:
    // 0x19e7e0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e7e4:
    // 0x19e7e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19e7e8:
    // 0x19e7e8: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e7ec:
    // 0x19e7ec: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e7f0:
    // 0x19e7f0: 0xc0414d0  jal         func_105340
label_19e7f4:
    if (ctx->pc == 0x19E7F4u) {
        ctx->pc = 0x19E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F0u;
        // 0x19e7f4: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7F8u;
        goto label_19e7f8;
    }
    ctx->pc = 0x19E7F0u;
    SET_GPR_U32(ctx, 31, 0x19E7F8u);
    ctx->pc = 0x19E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7F0u;
    // 0x19e7f4: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E7F0u, 0x19E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7F8u;
label_19e7f8:
    // 0x19e7f8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_19e7fc:
    // 0x19e7fc: 0xc041468  jal         func_1051A0
label_19e800:
    if (ctx->pc == 0x19E800u) {
        ctx->pc = 0x19E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7FCu;
        // 0x19e800: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E804u;
        goto label_19e804;
    }
    ctx->pc = 0x19E7FCu;
    SET_GPR_U32(ctx, 31, 0x19E804u);
    ctx->pc = 0x19E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7FCu;
    // 0x19e800: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x19E7FCu, 0x19E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E804u;
label_19e804:
    // 0x19e804: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x19e804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
label_19e808:
    // 0x19e808: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x19e808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_19e80c:
    // 0x19e80c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e810:
    // 0x19e810: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_19e814:
    // 0x19e814: 0xc0414dc  jal         func_105370
label_19e818:
    if (ctx->pc == 0x19E818u) {
        ctx->pc = 0x19E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E814u;
        // 0x19e818: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E81Cu;
        goto label_19e81c;
    }
    ctx->pc = 0x19E814u;
    SET_GPR_U32(ctx, 31, 0x19E81Cu);
    ctx->pc = 0x19E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E814u;
    // 0x19e818: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E814u, 0x19E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E81Cu;
label_19e81c:
    // 0x19e81c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e820:
    // 0x19e820: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x19e820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_19e824:
    // 0x19e824: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e828:
    // 0x19e828: 0xc0414ca  jal         func_105328
label_19e82c:
    if (ctx->pc == 0x19E82Cu) {
        ctx->pc = 0x19E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E828u;
        // 0x19e82c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E830u;
        goto label_19e830;
    }
    ctx->pc = 0x19E828u;
    SET_GPR_U32(ctx, 31, 0x19E830u);
    ctx->pc = 0x19E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E828u;
    // 0x19e82c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E828u, 0x19E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E830u;
label_19e830:
    // 0x19e830: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x19e830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_19e834:
    // 0x19e834: 0xc041468  jal         func_1051A0
label_19e838:
    if (ctx->pc == 0x19E838u) {
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E83Cu;
        goto label_19e83c;
    }
    ctx->pc = 0x19E834u;
    SET_GPR_U32(ctx, 31, 0x19E83Cu);
    ctx->pc = 0x19E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E834u;
    // 0x19e838: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x19E834u, 0x19E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E83Cu;
label_19e83c:
    // 0x19e83c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19e83cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19e840:
    // 0x19e840: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x19e840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
label_19e844:
    // 0x19e844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e848:
    // 0x19e848: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x19e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_19e84c:
    // 0x19e84c: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x19e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_19e850:
    // 0x19e850: 0xc0414dc  jal         func_105370
label_19e854:
    if (ctx->pc == 0x19E854u) {
        ctx->pc = 0x19E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E850u;
        // 0x19e854: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E858u;
        goto label_19e858;
    }
    ctx->pc = 0x19E850u;
    SET_GPR_U32(ctx, 31, 0x19E858u);
    ctx->pc = 0x19E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E850u;
    // 0x19e854: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E850u, 0x19E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E858u;
label_19e858:
    // 0x19e858: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e85c:
    // 0x19e85c: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x19e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_19e860:
    // 0x19e860: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e864:
    // 0x19e864: 0xc0414ca  jal         func_105328
label_19e868:
    if (ctx->pc == 0x19E868u) {
        ctx->pc = 0x19E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E864u;
        // 0x19e868: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E86Cu;
        goto label_19e86c;
    }
    ctx->pc = 0x19E864u;
    SET_GPR_U32(ctx, 31, 0x19E86Cu);
    ctx->pc = 0x19E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E864u;
    // 0x19e868: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E864u, 0x19E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E86Cu;
label_19e86c:
    // 0x19e86c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_19e870:
    // 0x19e870: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_19e874:
    // 0x19e874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e878:
    // 0x19e878: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_19e87c:
    // 0x19e87c: 0xc0414dc  jal         func_105370
label_19e880:
    if (ctx->pc == 0x19E880u) {
        ctx->pc = 0x19E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E87Cu;
        // 0x19e880: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E884u;
        goto label_19e884;
    }
    ctx->pc = 0x19E87Cu;
    SET_GPR_U32(ctx, 31, 0x19E884u);
    ctx->pc = 0x19E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E87Cu;
    // 0x19e880: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E87Cu, 0x19E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E884u;
label_19e884:
    // 0x19e884: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e888:
    // 0x19e888: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x19e888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_19e88c:
    // 0x19e88c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e890:
    // 0x19e890: 0xc0414ca  jal         func_105328
label_19e894:
    if (ctx->pc == 0x19E894u) {
        ctx->pc = 0x19E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E890u;
        // 0x19e894: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E898u;
        goto label_19e898;
    }
    ctx->pc = 0x19E890u;
    SET_GPR_U32(ctx, 31, 0x19E898u);
    ctx->pc = 0x19E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E890u;
    // 0x19e894: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E890u, 0x19E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E898u;
label_19e898:
    // 0x19e898: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e89c:
    // 0x19e89c: 0xc04d7b4  jal         func_135ED0
label_19e8a0:
    if (ctx->pc == 0x19E8A0u) {
        ctx->pc = 0x19E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E89Cu;
        // 0x19e8a0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8A4u;
        goto label_19e8a4;
    }
    ctx->pc = 0x19E89Cu;
    SET_GPR_U32(ctx, 31, 0x19E8A4u);
    ctx->pc = 0x19E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E89Cu;
    // 0x19e8a0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E89Cu, 0x19E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8A4u;
label_19e8a4:
    // 0x19e8a4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_19e8a8:
    // 0x19e8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e8ac:
    // 0x19e8ac: 0x0  nop
    ctx->pc = 0x19e8acu;
    // NOP
label_19e8b0:
    // 0x19e8b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e8b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e8b4:
    // 0x19e8b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_19e8b8:
    if (ctx->pc == 0x19E8B8u) {
        ctx->pc = 0x19E8BCu;
        goto label_19e8bc;
    }
    ctx->pc = 0x19E8B4u;
    {
        const bool branch_taken_0x19e8b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e8b4) {
            ctx->pc = 0x19E8C8u;
            goto label_19e8c8;
        }
    }
    ctx->pc = 0x19E8BCu;
label_19e8bc:
    // 0x19e8bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_19e8c0:
    if (ctx->pc == 0x19E8C0u) {
        ctx->pc = 0x19E8C4u;
        goto label_19e8c4;
    }
    ctx->pc = 0x19E8BCu;
    {
        const bool branch_taken_0x19e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8bc) {
            ctx->pc = 0x19E8D0u;
            goto label_19e8d0;
        }
    }
    ctx->pc = 0x19E8C4u;
label_19e8c4:
    // 0x19e8c4: 0x0  nop
    ctx->pc = 0x19e8c4u;
    // NOP
label_19e8c8:
    // 0x19e8c8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x19e8c8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_19e8cc:
    // 0x19e8cc: 0x0  nop
    ctx->pc = 0x19e8ccu;
    // NOP
label_19e8d0:
    // 0x19e8d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e8d4:
    // 0x19e8d4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e8d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e8d8:
    // 0x19e8d8: 0x0  nop
    ctx->pc = 0x19e8d8u;
    // NOP
label_19e8dc:
    // 0x19e8dc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e8e0:
    // 0x19e8e0: 0xc0414dc  jal         func_105370
label_19e8e4:
    if (ctx->pc == 0x19E8E4u) {
        ctx->pc = 0x19E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8E0u;
        // 0x19e8e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8E8u;
        goto label_19e8e8;
    }
    ctx->pc = 0x19E8E0u;
    SET_GPR_U32(ctx, 31, 0x19E8E8u);
    ctx->pc = 0x19E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8E0u;
    // 0x19e8e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E8E0u, 0x19E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8E8u;
label_19e8e8:
    // 0x19e8e8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e8ec:
    // 0x19e8ec: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e8f0:
    // 0x19e8f0: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x19e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e8f4:
    // 0x19e8f4: 0xc0414ca  jal         func_105328
label_19e8f8:
    if (ctx->pc == 0x19E8F8u) {
        ctx->pc = 0x19E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8F4u;
        // 0x19e8f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8FCu;
        goto label_19e8fc;
    }
    ctx->pc = 0x19E8F4u;
    SET_GPR_U32(ctx, 31, 0x19E8FCu);
    ctx->pc = 0x19E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8F4u;
    // 0x19e8f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E8F4u, 0x19E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8FCu;
label_19e8fc:
    // 0x19e8fc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x19e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_19e900:
    // 0x19e900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19e904:
    if (ctx->pc == 0x19E904u) {
        ctx->pc = 0x19E908u;
        goto label_19e908;
    }
    ctx->pc = 0x19E900u;
    {
        const bool branch_taken_0x19e900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e900) {
            ctx->pc = 0x19E920u;
            goto label_19e920;
        }
    }
    ctx->pc = 0x19E908u;
label_19e908:
    // 0x19e908: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x19e908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19e90c:
    // 0x19e90c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e910:
    // 0x19e910: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19e910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e914:
    // 0x19e914: 0x40f809  jalr        $v0
label_19e918:
    if (ctx->pc == 0x19E918u) {
        ctx->pc = 0x19E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E914u;
        // 0x19e918: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E91Cu;
        goto label_19e91c;
    }
    ctx->pc = 0x19E914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E91Cu);
        ctx->pc = 0x19E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E914u;
        // 0x19e918: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E914u, 0x19E91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E91Cu;
label_19e91c:
    // 0x19e91c: 0x0  nop
    ctx->pc = 0x19e91cu;
    // NOP
label_19e920:
    // 0x19e920: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x19e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19e924:
    // 0x19e924: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19e924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19e928:
    // 0x19e928: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x19e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e92c:
    // 0x19e92c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e930:
    // 0x19e930: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19e934:
    // 0x19e934: 0xc0414d0  jal         func_105340
label_19e938:
    if (ctx->pc == 0x19E938u) {
        ctx->pc = 0x19E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E934u;
        // 0x19e938: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E93Cu;
        goto label_19e93c;
    }
    ctx->pc = 0x19E934u;
    SET_GPR_U32(ctx, 31, 0x19E93Cu);
    ctx->pc = 0x19E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E934u;
    // 0x19e938: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19E934u, 0x19E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E93Cu;
label_19e93c:
    // 0x19e93c: 0xc04d7b4  jal         func_135ED0
label_19e940:
    if (ctx->pc == 0x19E940u) {
        ctx->pc = 0x19E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E93Cu;
        // 0x19e940: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E944u;
        goto label_19e944;
    }
    ctx->pc = 0x19E93Cu;
    SET_GPR_U32(ctx, 31, 0x19E944u);
    ctx->pc = 0x19E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E93Cu;
    // 0x19e940: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19E93Cu, 0x19E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E944u;
label_19e944:
    // 0x19e944: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_19e948:
    // 0x19e948: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e94c:
    // 0x19e94c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x19e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19e950:
    // 0x19e950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19e950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e954:
    // 0x19e954: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e958:
    // 0x19e958: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x19e958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19e95c:
    // 0x19e95c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19e95cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19e960:
    // 0x19e960: 0x0  nop
    ctx->pc = 0x19e960u;
    // NOP
label_19e964:
    // 0x19e964: 0x0  nop
    ctx->pc = 0x19e964u;
    // NOP
label_19e968:
    // 0x19e968: 0xc0414dc  jal         func_105370
label_19e96c:
    if (ctx->pc == 0x19E96Cu) {
        ctx->pc = 0x19E970u;
        goto label_19e970;
    }
    ctx->pc = 0x19E968u;
    SET_GPR_U32(ctx, 31, 0x19E970u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E968u, 0x19E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E970u;
label_19e970:
    // 0x19e970: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e974:
    // 0x19e974: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e978:
    // 0x19e978: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19e97c:
    // 0x19e97c: 0xc0414ca  jal         func_105328
label_19e980:
    if (ctx->pc == 0x19E980u) {
        ctx->pc = 0x19E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E97Cu;
        // 0x19e980: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E984u;
        goto label_19e984;
    }
    ctx->pc = 0x19E97Cu;
    SET_GPR_U32(ctx, 31, 0x19E984u);
    ctx->pc = 0x19E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E97Cu;
    // 0x19e980: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E97Cu, 0x19E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E984u;
label_19e984:
    // 0x19e984: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_19e988:
    // 0x19e988: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e98c:
    // 0x19e98c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_19e990:
    // 0x19e990: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19e990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19e994:
    // 0x19e994: 0xc0414dc  jal         func_105370
label_19e998:
    if (ctx->pc == 0x19E998u) {
        ctx->pc = 0x19E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E994u;
        // 0x19e998: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E99Cu;
        goto label_19e99c;
    }
    ctx->pc = 0x19E994u;
    SET_GPR_U32(ctx, 31, 0x19E99Cu);
    ctx->pc = 0x19E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E994u;
    // 0x19e998: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19E994u, 0x19E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E99Cu;
label_19e99c:
    // 0x19e99c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19e9a0:
    // 0x19e9a0: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_19e9a4:
    // 0x19e9a4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e9a8:
    // 0x19e9a8: 0xc0414ca  jal         func_105328
label_19e9ac:
    if (ctx->pc == 0x19E9ACu) {
        ctx->pc = 0x19E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9A8u;
        // 0x19e9ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9B0u;
        goto label_19e9b0;
    }
    ctx->pc = 0x19E9A8u;
    SET_GPR_U32(ctx, 31, 0x19E9B0u);
    ctx->pc = 0x19E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9A8u;
    // 0x19e9ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19E9A8u, 0x19E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9B0u;
label_19e9b0:
    // 0x19e9b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e9b4:
    // 0x19e9b4: 0x0  nop
    ctx->pc = 0x19e9b4u;
    // NOP
label_19e9b8:
    // 0x19e9b8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e9bc:
    // 0x19e9bc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19e9bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19e9c0:
    // 0x19e9c0: 0x1460ff3b  bnez        $v1, . + 4 + (-0xC5 << 2)
label_19e9c4:
    if (ctx->pc == 0x19E9C4u) {
        ctx->pc = 0x19E9C8u;
        goto label_19e9c8;
    }
    ctx->pc = 0x19E9C0u;
    {
        const bool branch_taken_0x19e9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e9c0) {
            ctx->pc = 0x19E6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e6b0;
        }
    }
    ctx->pc = 0x19E9C8u;
label_19e9c8:
    // 0x19e9c8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x19e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_19e9cc:
    // 0x19e9cc: 0x106001e8  beqz        $v1, . + 4 + (0x1E8 << 2)
label_19e9d0:
    if (ctx->pc == 0x19E9D0u) {
        ctx->pc = 0x19E9D4u;
        goto label_19e9d4;
    }
    ctx->pc = 0x19E9CCu;
    {
        const bool branch_taken_0x19e9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9cc) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19E9D4u;
label_19e9d4:
    // 0x19e9d4: 0x100001be  b           . + 4 + (0x1BE << 2)
label_19e9d8:
    if (ctx->pc == 0x19E9D8u) {
        ctx->pc = 0x19E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9D4u;
        // 0x19e9d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9DCu;
        goto label_19e9dc;
    }
    ctx->pc = 0x19E9D4u;
    {
        const bool branch_taken_0x19e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9D4u;
        // 0x19e9d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9d4) {
            ctx->pc = 0x19F0D0u;
            goto label_19f0d0;
        }
    }
    ctx->pc = 0x19E9DCu;
label_19e9dc:
    // 0x19e9dc: 0x0  nop
    ctx->pc = 0x19e9dcu;
    // NOP
label_19e9e0:
    // 0x19e9e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e9e4:
    // 0x19e9e4: 0xc06736c  jal         func_19CDB0
label_19e9e8:
    if (ctx->pc == 0x19E9E8u) {
        ctx->pc = 0x19E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9E4u;
        // 0x19e9e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9ECu;
        goto label_19e9ec;
    }
    ctx->pc = 0x19E9E4u;
    SET_GPR_U32(ctx, 31, 0x19E9ECu);
    ctx->pc = 0x19E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9E4u;
    // 0x19e9e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19E9E4u, 0x19E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E9ECu;
label_19e9ec:
    // 0x19e9ec: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x19e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_19e9f0:
    // 0x19e9f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x19e9f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e9f4:
    // 0x19e9f4: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x19e9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_19e9f8:
    // 0x19e9f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19e9fc:
    // 0x19e9fc: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_19ea00:
    // 0x19ea00: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x19ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_19ea04:
    // 0x19ea04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_19ea08:
    // 0x19ea08: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
label_19ea0c:
    if (ctx->pc == 0x19EA0Cu) {
        ctx->pc = 0x19EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA08u;
        // 0x19ea0c: 0x85f021  addu        $fp, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA10u;
        goto label_19ea10;
    }
    ctx->pc = 0x19EA08u;
    {
        const bool branch_taken_0x19ea08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA08u;
        // 0x19ea0c: 0x85f021  addu        $fp, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea08) {
            ctx->pc = 0x19EC80u;
            goto label_19ec80;
        }
    }
    ctx->pc = 0x19EA10u;
label_19ea10:
    // 0x19ea10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_19ea14:
    // 0x19ea14: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_19ea18:
    if (ctx->pc == 0x19EA18u) {
        ctx->pc = 0x19EA1Cu;
        goto label_19ea1c;
    }
    ctx->pc = 0x19EA14u;
    {
        const bool branch_taken_0x19ea14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ea14) {
            ctx->pc = 0x19EBB8u;
            goto label_19ebb8;
        }
    }
    ctx->pc = 0x19EA1Cu;
label_19ea1c:
    // 0x19ea1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x19ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_19ea20:
    // 0x19ea20: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_19ea24:
    if (ctx->pc == 0x19EA24u) {
        ctx->pc = 0x19EA28u;
        goto label_19ea28;
    }
    ctx->pc = 0x19EA20u;
    {
        const bool branch_taken_0x19ea20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ea20) {
            ctx->pc = 0x19EB00u;
            goto label_19eb00;
        }
    }
    ctx->pc = 0x19EA28u;
label_19ea28:
    // 0x19ea28: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x19ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19ea2c:
    // 0x19ea2c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_19ea30:
    if (ctx->pc == 0x19EA30u) {
        ctx->pc = 0x19EA34u;
        goto label_19ea34;
    }
    ctx->pc = 0x19EA2Cu;
    {
        const bool branch_taken_0x19ea2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ea2c) {
            ctx->pc = 0x19EA48u;
            goto label_19ea48;
        }
    }
    ctx->pc = 0x19EA34u;
label_19ea34:
    // 0x19ea34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19ea38:
    // 0x19ea38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19ea3c:
    if (ctx->pc == 0x19EA3Cu) {
        ctx->pc = 0x19EA40u;
        goto label_19ea40;
    }
    ctx->pc = 0x19EA38u;
    {
        const bool branch_taken_0x19ea38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ea38) {
            ctx->pc = 0x19EA48u;
            goto label_19ea48;
        }
    }
    ctx->pc = 0x19EA40u;
label_19ea40:
    // 0x19ea40: 0x100000bb  b           . + 4 + (0xBB << 2)
label_19ea44:
    if (ctx->pc == 0x19EA44u) {
        ctx->pc = 0x19EA48u;
        goto label_19ea48;
    }
    ctx->pc = 0x19EA40u;
    {
        const bool branch_taken_0x19ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea40) {
            ctx->pc = 0x19ED30u;
            goto label_19ed30;
        }
    }
    ctx->pc = 0x19EA48u;
label_19ea48:
    // 0x19ea48: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ea4c:
    // 0x19ea4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19ea50:
    // 0x19ea50: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x19ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ea54:
    // 0x19ea54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ea58:
    // 0x19ea58: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19ea5c:
    // 0x19ea5c: 0xc0414d0  jal         func_105340
label_19ea60:
    if (ctx->pc == 0x19EA60u) {
        ctx->pc = 0x19EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA5Cu;
        // 0x19ea60: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA64u;
        goto label_19ea64;
    }
    ctx->pc = 0x19EA5Cu;
    SET_GPR_U32(ctx, 31, 0x19EA64u);
    ctx->pc = 0x19EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA5Cu;
    // 0x19ea60: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19EA5Cu, 0x19EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA64u;
label_19ea64:
    // 0x19ea64: 0x93c300c5  lbu         $v1, 0xC5($fp)
    ctx->pc = 0x19ea64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 197)));
label_19ea68:
    // 0x19ea68: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x19ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19ea6c:
    // 0x19ea6c: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x19ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19ea70:
    // 0x19ea70: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ea74:
    // 0x19ea74: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_19ea78:
    // 0x19ea78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19ea7c:
    // 0x19ea7c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ea80:
    // 0x19ea80: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x19ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_19ea84:
    // 0x19ea84: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19ea88:
    // 0x19ea88: 0xc041472  jal         func_1051C8
label_19ea8c:
    if (ctx->pc == 0x19EA8Cu) {
        ctx->pc = 0x19EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA88u;
        // 0x19ea8c: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA90u;
        goto label_19ea90;
    }
    ctx->pc = 0x19EA88u;
    SET_GPR_U32(ctx, 31, 0x19EA90u);
    ctx->pc = 0x19EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA88u;
    // 0x19ea8c: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EA88u, 0x19EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA90u;
label_19ea90:
    // 0x19ea90: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x19ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_19ea94:
    // 0x19ea94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ea98:
    // 0x19ea98: 0xc041460  jal         func_105180
label_19ea9c:
    if (ctx->pc == 0x19EA9Cu) {
        ctx->pc = 0x19EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA98u;
        // 0x19ea9c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAA0u;
        goto label_19eaa0;
    }
    ctx->pc = 0x19EA98u;
    SET_GPR_U32(ctx, 31, 0x19EAA0u);
    ctx->pc = 0x19EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA98u;
    // 0x19ea9c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EA98u, 0x19EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAA0u;
label_19eaa0:
    // 0x19eaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eaa4:
    // 0x19eaa4: 0xc041472  jal         func_1051C8
label_19eaa8:
    if (ctx->pc == 0x19EAA8u) {
        ctx->pc = 0x19EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAA4u;
        // 0x19eaa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAACu;
        goto label_19eaac;
    }
    ctx->pc = 0x19EAA4u;
    SET_GPR_U32(ctx, 31, 0x19EAACu);
    ctx->pc = 0x19EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAA4u;
    // 0x19eaa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EAA4u, 0x19EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAACu;
label_19eaac:
    // 0x19eaac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19eab0:
    // 0x19eab0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x19eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19eab4:
    // 0x19eab4: 0xc041460  jal         func_105180
label_19eab8:
    if (ctx->pc == 0x19EAB8u) {
        ctx->pc = 0x19EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB4u;
        // 0x19eab8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EABCu;
        goto label_19eabc;
    }
    ctx->pc = 0x19EAB4u;
    SET_GPR_U32(ctx, 31, 0x19EABCu);
    ctx->pc = 0x19EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAB4u;
    // 0x19eab8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EAB4u, 0x19EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EABCu;
label_19eabc:
    // 0x19eabc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19eabcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eac0:
    // 0x19eac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19eac4:
    // 0x19eac4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x19eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19eac8:
    // 0x19eac8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19eacc:
    // 0x19eacc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19ead0:
    // 0x19ead0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19ead0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19ead4:
    // 0x19ead4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19ead4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19ead8:
    // 0x19ead8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19ead8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19eadc:
    // 0x19eadc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19eadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19eae0:
    // 0x19eae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19eae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eae4:
    // 0x19eae4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_19eae8:
    // 0x19eae8: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x19eae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19eaec:
    // 0x19eaec: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x19eaecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_19eaf0:
    // 0x19eaf0: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19eaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19eaf4:
    // 0x19eaf4: 0x1000016e  b           . + 4 + (0x16E << 2)
label_19eaf8:
    if (ctx->pc == 0x19EAF8u) {
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAFCu;
        goto label_19eafc;
    }
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19F0B0u;
            goto label_19f0b0;
        }
    }
    ctx->pc = 0x19EAFCu;
label_19eafc:
    // 0x19eafc: 0x0  nop
    ctx->pc = 0x19eafcu;
    // NOP
label_19eb00:
    // 0x19eb00: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19eb04:
    // 0x19eb04: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19eb08:
    // 0x19eb08: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19eb0c:
    // 0x19eb0c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19eb10:
    // 0x19eb10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19eb14:
    // 0x19eb14: 0xc0414d0  jal         func_105340
label_19eb18:
    if (ctx->pc == 0x19EB18u) {
        ctx->pc = 0x19EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB14u;
        // 0x19eb18: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB1Cu;
        goto label_19eb1c;
    }
    ctx->pc = 0x19EB14u;
    SET_GPR_U32(ctx, 31, 0x19EB1Cu);
    ctx->pc = 0x19EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB14u;
    // 0x19eb18: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19EB14u, 0x19EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB1Cu;
label_19eb1c:
    // 0x19eb1c: 0x93c300c5  lbu         $v1, 0xC5($fp)
    ctx->pc = 0x19eb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 197)));
label_19eb20:
    // 0x19eb20: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19eb24:
    // 0x19eb24: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x19eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19eb28:
    // 0x19eb28: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19eb2c:
    // 0x19eb2c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_19eb30:
    // 0x19eb30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19eb34:
    // 0x19eb34: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x19eb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19eb38:
    // 0x19eb38: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_19eb3c:
    // 0x19eb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eb40:
    // 0x19eb40: 0xc041472  jal         func_1051C8
label_19eb44:
    if (ctx->pc == 0x19EB44u) {
        ctx->pc = 0x19EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB40u;
        // 0x19eb44: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB48u;
        goto label_19eb48;
    }
    ctx->pc = 0x19EB40u;
    SET_GPR_U32(ctx, 31, 0x19EB48u);
    ctx->pc = 0x19EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB40u;
    // 0x19eb44: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EB40u, 0x19EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB48u;
label_19eb48:
    // 0x19eb48: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x19eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_19eb4c:
    // 0x19eb4c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19eb50:
    // 0x19eb50: 0xc041460  jal         func_105180
label_19eb54:
    if (ctx->pc == 0x19EB54u) {
        ctx->pc = 0x19EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB50u;
        // 0x19eb54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB58u;
        goto label_19eb58;
    }
    ctx->pc = 0x19EB50u;
    SET_GPR_U32(ctx, 31, 0x19EB58u);
    ctx->pc = 0x19EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB50u;
    // 0x19eb54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EB50u, 0x19EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB58u;
label_19eb58:
    // 0x19eb58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19eb5c:
    // 0x19eb5c: 0xc041472  jal         func_1051C8
label_19eb60:
    if (ctx->pc == 0x19EB60u) {
        ctx->pc = 0x19EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB5Cu;
        // 0x19eb60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB64u;
        goto label_19eb64;
    }
    ctx->pc = 0x19EB5Cu;
    SET_GPR_U32(ctx, 31, 0x19EB64u);
    ctx->pc = 0x19EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB5Cu;
    // 0x19eb60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EB5Cu, 0x19EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB64u;
label_19eb64:
    // 0x19eb64: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19eb68:
    // 0x19eb68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19eb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eb6c:
    // 0x19eb6c: 0xc041460  jal         func_105180
label_19eb70:
    if (ctx->pc == 0x19EB70u) {
        ctx->pc = 0x19EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB6Cu;
        // 0x19eb70: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB74u;
        goto label_19eb74;
    }
    ctx->pc = 0x19EB6Cu;
    SET_GPR_U32(ctx, 31, 0x19EB74u);
    ctx->pc = 0x19EB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB6Cu;
    // 0x19eb70: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EB6Cu, 0x19EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB74u;
label_19eb74:
    // 0x19eb74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19eb74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb78:
    // 0x19eb78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19eb7c:
    // 0x19eb7c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x19eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19eb80:
    // 0x19eb80: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x19eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19eb84:
    // 0x19eb84: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19eb88:
    // 0x19eb88: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19eb88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19eb8c:
    // 0x19eb8c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19eb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19eb90:
    // 0x19eb90: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19eb90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19eb94:
    // 0x19eb94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19eb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19eb98:
    // 0x19eb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19eb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eb9c:
    // 0x19eb9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_19eba0:
    // 0x19eba0: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x19eba0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19eba4:
    // 0x19eba4: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x19eba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_19eba8:
    // 0x19eba8: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19eba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19ebac:
    // 0x19ebac: 0x10000140  b           . + 4 + (0x140 << 2)
label_19ebb0:
    if (ctx->pc == 0x19EBB0u) {
        ctx->pc = 0x19EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBACu;
        // 0x19ebb0: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBB4u;
        goto label_19ebb4;
    }
    ctx->pc = 0x19EBACu;
    {
        const bool branch_taken_0x19ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBACu;
        // 0x19ebb0: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebac) {
            ctx->pc = 0x19F0B0u;
            goto label_19f0b0;
        }
    }
    ctx->pc = 0x19EBB4u;
label_19ebb4:
    // 0x19ebb4: 0x0  nop
    ctx->pc = 0x19ebb4u;
    // NOP
label_19ebb8:
    // 0x19ebb8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ebbc:
    // 0x19ebbc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19ebc0:
    // 0x19ebc0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x19ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ebc4:
    // 0x19ebc4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ebc8:
    // 0x19ebc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19ebcc:
    // 0x19ebcc: 0xc0414d0  jal         func_105340
label_19ebd0:
    if (ctx->pc == 0x19EBD0u) {
        ctx->pc = 0x19EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBCCu;
        // 0x19ebd0: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBD4u;
        goto label_19ebd4;
    }
    ctx->pc = 0x19EBCCu;
    SET_GPR_U32(ctx, 31, 0x19EBD4u);
    ctx->pc = 0x19EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBCCu;
    // 0x19ebd0: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19EBCCu, 0x19EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBD4u;
label_19ebd4:
    // 0x19ebd4: 0x93c300c5  lbu         $v1, 0xC5($fp)
    ctx->pc = 0x19ebd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 197)));
label_19ebd8:
    // 0x19ebd8: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x19ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19ebdc:
    // 0x19ebdc: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19ebe0:
    // 0x19ebe0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ebe4:
    // 0x19ebe4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_19ebe8:
    // 0x19ebe8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19ebec:
    // 0x19ebec: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x19ebecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ebf0:
    // 0x19ebf0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x19ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_19ebf4:
    // 0x19ebf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ebf8:
    // 0x19ebf8: 0xc041472  jal         func_1051C8
label_19ebfc:
    if (ctx->pc == 0x19EBFCu) {
        ctx->pc = 0x19EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBF8u;
        // 0x19ebfc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC00u;
        goto label_19ec00;
    }
    ctx->pc = 0x19EBF8u;
    SET_GPR_U32(ctx, 31, 0x19EC00u);
    ctx->pc = 0x19EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBF8u;
    // 0x19ebfc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EBF8u, 0x19EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC00u;
label_19ec00:
    // 0x19ec00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_19ec04:
    // 0x19ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec08:
    // 0x19ec08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19ec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ec0c:
    // 0x19ec0c: 0xc0414dc  jal         func_105370
label_19ec10:
    if (ctx->pc == 0x19EC10u) {
        ctx->pc = 0x19EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC0Cu;
        // 0x19ec10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC14u;
        goto label_19ec14;
    }
    ctx->pc = 0x19EC0Cu;
    SET_GPR_U32(ctx, 31, 0x19EC14u);
    ctx->pc = 0x19EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC0Cu;
    // 0x19ec10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19EC0Cu, 0x19EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC14u;
label_19ec14:
    // 0x19ec14: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x19ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_19ec18:
    // 0x19ec18: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19ec1c:
    // 0x19ec1c: 0xc041460  jal         func_105180
label_19ec20:
    if (ctx->pc == 0x19EC20u) {
        ctx->pc = 0x19EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC1Cu;
        // 0x19ec20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC24u;
        goto label_19ec24;
    }
    ctx->pc = 0x19EC1Cu;
    SET_GPR_U32(ctx, 31, 0x19EC24u);
    ctx->pc = 0x19EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC1Cu;
    // 0x19ec20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EC1Cu, 0x19EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC24u;
label_19ec24:
    // 0x19ec24: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19ec28:
    // 0x19ec28: 0xc041472  jal         func_1051C8
label_19ec2c:
    if (ctx->pc == 0x19EC2Cu) {
        ctx->pc = 0x19EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC28u;
        // 0x19ec2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC30u;
        goto label_19ec30;
    }
    ctx->pc = 0x19EC28u;
    SET_GPR_U32(ctx, 31, 0x19EC30u);
    ctx->pc = 0x19EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC28u;
    // 0x19ec2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EC28u, 0x19EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC30u;
label_19ec30:
    // 0x19ec30: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19ec34:
    // 0x19ec34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ec38:
    // 0x19ec38: 0xc041460  jal         func_105180
label_19ec3c:
    if (ctx->pc == 0x19EC3Cu) {
        ctx->pc = 0x19EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC38u;
        // 0x19ec3c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC40u;
        goto label_19ec40;
    }
    ctx->pc = 0x19EC38u;
    SET_GPR_U32(ctx, 31, 0x19EC40u);
    ctx->pc = 0x19EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC38u;
    // 0x19ec3c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EC38u, 0x19EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC40u;
label_19ec40:
    // 0x19ec40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ec40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec44:
    // 0x19ec44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19ec48:
    // 0x19ec48: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x19ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ec4c:
    // 0x19ec4c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x19ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19ec50:
    // 0x19ec50: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19ec54:
    // 0x19ec54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19ec54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19ec58:
    // 0x19ec58: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19ec58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19ec5c:
    // 0x19ec5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19ec5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ec60:
    // 0x19ec60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19ec60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ec64:
    // 0x19ec64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ec64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ec68:
    // 0x19ec68: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_19ec6c:
    // 0x19ec6c: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x19ec6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19ec70:
    // 0x19ec70: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x19ec70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_19ec74:
    // 0x19ec74: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19ec74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19ec78:
    // 0x19ec78: 0x1000010d  b           . + 4 + (0x10D << 2)
label_19ec7c:
    if (ctx->pc == 0x19EC7Cu) {
        ctx->pc = 0x19EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC78u;
        // 0x19ec7c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC80u;
        goto label_19ec80;
    }
    ctx->pc = 0x19EC78u;
    {
        const bool branch_taken_0x19ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC78u;
        // 0x19ec7c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec78) {
            ctx->pc = 0x19F0B0u;
            goto label_19f0b0;
        }
    }
    ctx->pc = 0x19EC80u;
label_19ec80:
    // 0x19ec80: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ec84:
    // 0x19ec84: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19ec88:
    // 0x19ec88: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x19ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ec8c:
    // 0x19ec8c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ec90:
    // 0x19ec90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19ec94:
    // 0x19ec94: 0xc0414d0  jal         func_105340
label_19ec98:
    if (ctx->pc == 0x19EC98u) {
        ctx->pc = 0x19EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC94u;
        // 0x19ec98: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC9Cu;
        goto label_19ec9c;
    }
    ctx->pc = 0x19EC94u;
    SET_GPR_U32(ctx, 31, 0x19EC9Cu);
    ctx->pc = 0x19EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC94u;
    // 0x19ec98: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19EC94u, 0x19EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC9Cu;
label_19ec9c:
    // 0x19ec9c: 0x93c200c5  lbu         $v0, 0xC5($fp)
    ctx->pc = 0x19ec9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 197)));
label_19eca0:
    // 0x19eca0: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19eca4:
    // 0x19eca4: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x19eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19eca8:
    // 0x19eca8: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ecac:
    // 0x19ecac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19ecb0:
    // 0x19ecb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ecb4:
    // 0x19ecb4: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x19ecb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19ecb8:
    // 0x19ecb8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x19ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_19ecbc:
    // 0x19ecbc: 0xc041472  jal         func_1051C8
label_19ecc0:
    if (ctx->pc == 0x19ECC0u) {
        ctx->pc = 0x19ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECBCu;
        // 0x19ecc0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECC4u;
        goto label_19ecc4;
    }
    ctx->pc = 0x19ECBCu;
    SET_GPR_U32(ctx, 31, 0x19ECC4u);
    ctx->pc = 0x19ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECBCu;
    // 0x19ecc0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19ECBCu, 0x19ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECC4u;
label_19ecc4:
    // 0x19ecc4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x19ecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19ecc8:
    // 0x19ecc8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19eccc:
    // 0x19eccc: 0xc041460  jal         func_105180
label_19ecd0:
    if (ctx->pc == 0x19ECD0u) {
        ctx->pc = 0x19ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECCCu;
        // 0x19ecd0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECD4u;
        goto label_19ecd4;
    }
    ctx->pc = 0x19ECCCu;
    SET_GPR_U32(ctx, 31, 0x19ECD4u);
    ctx->pc = 0x19ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECCCu;
    // 0x19ecd0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19ECCCu, 0x19ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECD4u;
label_19ecd4:
    // 0x19ecd4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19ecd8:
    // 0x19ecd8: 0xc041472  jal         func_1051C8
label_19ecdc:
    if (ctx->pc == 0x19ECDCu) {
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECD8u;
        // 0x19ecdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECE0u;
        goto label_19ece0;
    }
    ctx->pc = 0x19ECD8u;
    SET_GPR_U32(ctx, 31, 0x19ECE0u);
    ctx->pc = 0x19ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECD8u;
    // 0x19ecdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19ECD8u, 0x19ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECE0u;
label_19ece0:
    // 0x19ece0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ece4:
    // 0x19ece4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x19ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19ece8:
    // 0x19ece8: 0xc041460  jal         func_105180
label_19ecec:
    if (ctx->pc == 0x19ECECu) {
        ctx->pc = 0x19ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECE8u;
        // 0x19ecec: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECF0u;
        goto label_19ecf0;
    }
    ctx->pc = 0x19ECE8u;
    SET_GPR_U32(ctx, 31, 0x19ECF0u);
    ctx->pc = 0x19ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECE8u;
    // 0x19ecec: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19ECE8u, 0x19ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECF0u;
label_19ecf0:
    // 0x19ecf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ecf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ecf4:
    // 0x19ecf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19ecf8:
    // 0x19ecf8: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ecfc:
    // 0x19ecfc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19ed00:
    // 0x19ed00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_19ed04:
    // 0x19ed04: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19ed04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19ed08:
    // 0x19ed08: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19ed08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19ed0c:
    // 0x19ed0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19ed0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ed10:
    // 0x19ed10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19ed10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ed14:
    // 0x19ed14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ed14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ed18:
    // 0x19ed18: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_19ed1c:
    // 0x19ed1c: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x19ed1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19ed20:
    // 0x19ed20: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x19ed20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_19ed24:
    // 0x19ed24: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19ed24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19ed28:
    // 0x19ed28: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_19ed2c:
    if (ctx->pc == 0x19ED2Cu) {
        ctx->pc = 0x19ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED28u;
        // 0x19ed2c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED30u;
        goto label_19ed30;
    }
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED28u;
        // 0x19ed2c: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19F0B0u;
            goto label_19f0b0;
        }
    }
    ctx->pc = 0x19ED30u;
label_19ed30:
    // 0x19ed30: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19ed34:
    // 0x19ed34: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x19ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19ed38:
    // 0x19ed38: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x19ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ed3c:
    // 0x19ed3c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x19ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ed40:
    // 0x19ed40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19ed44:
    // 0x19ed44: 0xc0414d0  jal         func_105340
label_19ed48:
    if (ctx->pc == 0x19ED48u) {
        ctx->pc = 0x19ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED44u;
        // 0x19ed48: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED4Cu;
        goto label_19ed4c;
    }
    ctx->pc = 0x19ED44u;
    SET_GPR_U32(ctx, 31, 0x19ED4Cu);
    ctx->pc = 0x19ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED44u;
    // 0x19ed48: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x19ED44u, 0x19ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED4Cu;
label_19ed4c:
    // 0x19ed4c: 0x93c200c5  lbu         $v0, 0xC5($fp)
    ctx->pc = 0x19ed4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 197)));
label_19ed50:
    // 0x19ed50: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x19ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19ed54:
    // 0x19ed54: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x19ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19ed58:
    // 0x19ed58: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19ed5c:
    // 0x19ed5c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19ed60:
    // 0x19ed60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19ed64:
    // 0x19ed64: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x19ed64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19ed68:
    // 0x19ed68: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x19ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_19ed6c:
    // 0x19ed6c: 0xc041472  jal         func_1051C8
label_19ed70:
    if (ctx->pc == 0x19ED70u) {
        ctx->pc = 0x19ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED6Cu;
        // 0x19ed70: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED74u;
        goto label_19ed74;
    }
    ctx->pc = 0x19ED6Cu;
    SET_GPR_U32(ctx, 31, 0x19ED74u);
    ctx->pc = 0x19ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED6Cu;
    // 0x19ed70: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19ED6Cu, 0x19ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED74u;
label_19ed74:
    // 0x19ed74: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x19ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_19ed78:
    // 0x19ed78: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19ed7c:
    // 0x19ed7c: 0xc041460  jal         func_105180
label_19ed80:
    if (ctx->pc == 0x19ED80u) {
        ctx->pc = 0x19ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED7Cu;
        // 0x19ed80: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED84u;
        goto label_19ed84;
    }
    ctx->pc = 0x19ED7Cu;
    SET_GPR_U32(ctx, 31, 0x19ED84u);
    ctx->pc = 0x19ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED7Cu;
    // 0x19ed80: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19ED7Cu, 0x19ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED84u;
label_19ed84:
    // 0x19ed84: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19ed88:
    // 0x19ed88: 0xc041472  jal         func_1051C8
label_19ed8c:
    if (ctx->pc == 0x19ED8Cu) {
        ctx->pc = 0x19ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED88u;
        // 0x19ed8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED90u;
        goto label_19ed90;
    }
    ctx->pc = 0x19ED88u;
    SET_GPR_U32(ctx, 31, 0x19ED90u);
    ctx->pc = 0x19ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED88u;
    // 0x19ed8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19ED88u, 0x19ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED90u;
label_19ed90:
    // 0x19ed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed94:
    // 0x19ed94: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x19ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_19ed98:
    // 0x19ed98: 0xc041460  jal         func_105180
label_19ed9c:
    if (ctx->pc == 0x19ED9Cu) {
        ctx->pc = 0x19ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED98u;
        // 0x19ed9c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDA0u;
        goto label_19eda0;
    }
    ctx->pc = 0x19ED98u;
    SET_GPR_U32(ctx, 31, 0x19EDA0u);
    ctx->pc = 0x19ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED98u;
    // 0x19ed9c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19ED98u, 0x19EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDA0u;
label_19eda0:
    // 0x19eda0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eda4:
    // 0x19eda4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_19eda8:
    // 0x19eda8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19edac:
    // 0x19edac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_19edb0:
    // 0x19edb0: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x19edb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19edb4:
    // 0x19edb4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_19edb8:
    // 0x19edb8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19edb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19edbc:
    // 0x19edbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19edc0:
    // 0x19edc0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19edc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19edc4:
    // 0x19edc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19edc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19edc8:
    // 0x19edc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19edc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19edcc:
    // 0x19edcc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x19edccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_19edd0:
    // 0x19edd0: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x19edd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19edd4:
    // 0x19edd4: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x19edd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_19edd8:
    // 0x19edd8: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19edd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19eddc:
    // 0x19eddc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x19eddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_19ede0:
    // 0x19ede0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19ede4:
    // 0x19ede4: 0x106200b2  beq         $v1, $v0, . + 4 + (0xB2 << 2)
label_19ede8:
    if (ctx->pc == 0x19EDE8u) {
        ctx->pc = 0x19EDECu;
        goto label_19edec;
    }
    ctx->pc = 0x19EDE4u;
    {
        const bool branch_taken_0x19ede4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ede4) {
            ctx->pc = 0x19F0B0u;
            goto label_19f0b0;
        }
    }
    ctx->pc = 0x19EDECu;
label_19edec:
    // 0x19edec: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x19edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_19edf0:
    // 0x19edf0: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x19edf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19edf4:
    // 0x19edf4: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
label_19edf8:
    if (ctx->pc == 0x19EDF8u) {
        ctx->pc = 0x19EDFCu;
        goto label_19edfc;
    }
    ctx->pc = 0x19EDF4u;
    {
        const bool branch_taken_0x19edf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19edf4) {
            ctx->pc = 0x19EF70u;
            goto label_19ef70;
        }
    }
    ctx->pc = 0x19EDFCu;
label_19edfc:
    // 0x19edfc: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x19edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_19ee00:
    // 0x19ee00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19ee04:
    if (ctx->pc == 0x19EE04u) {
        ctx->pc = 0x19EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE00u;
        // 0x19ee04: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE08u;
        goto label_19ee08;
    }
    ctx->pc = 0x19EE00u;
    {
        const bool branch_taken_0x19ee00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE00u;
        // 0x19ee04: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee00) {
            ctx->pc = 0x19EE24u;
            goto label_19ee24;
        }
    }
    ctx->pc = 0x19EE08u;
label_19ee08:
    // 0x19ee08: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19ee08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_19ee0c:
    // 0x19ee0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ee10:
    // 0x19ee10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19ee14:
    // 0x19ee14: 0x0  nop
    ctx->pc = 0x19ee14u;
    // NOP
label_19ee18:
    // 0x19ee18: 0x0  nop
    ctx->pc = 0x19ee18u;
    // NOP
label_19ee1c:
    // 0x19ee1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ee20:
    if (ctx->pc == 0x19EE20u) {
        ctx->pc = 0x19EE24u;
        goto label_19ee24;
    }
    ctx->pc = 0x19EE1Cu;
    {
        const bool branch_taken_0x19ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ee1c) {
            ctx->pc = 0x19EE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ee08;
        }
    }
    ctx->pc = 0x19EE24u;
label_19ee24:
    // 0x19ee24: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19ee28:
    // 0x19ee28: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x19ee28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_19ee2c:
    // 0x19ee2c: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x19ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
label_19ee30:
    // 0x19ee30: 0x27a901d0  addiu       $t1, $sp, 0x1D0
    ctx->pc = 0x19ee30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_19ee34:
    // 0x19ee34: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x19ee34u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19ee38:
    // 0x19ee38: 0x24c6e750  addiu       $a2, $a2, -0x18B0
    ctx->pc = 0x19ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960976));
label_19ee3c:
    // 0x19ee3c: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x19ee3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_19ee40:
    // 0x19ee40: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_19ee44:
    // 0x19ee44: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ee48:
    // 0x19ee48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ee4c:
    // 0x19ee4c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x19ee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_19ee50:
    // 0x19ee50: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19ee54:
    // 0x19ee54: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x19ee54u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19ee58:
    // 0x19ee58: 0x2442e760  addiu       $v0, $v0, -0x18A0
    ctx->pc = 0x19ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960992));
label_19ee5c:
    // 0x19ee5c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x19ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_19ee60:
    // 0x19ee60: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19ee60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19ee64:
    // 0x19ee64: 0xc06736c  jal         func_19CDB0
label_19ee68:
    if (ctx->pc == 0x19EE68u) {
        ctx->pc = 0x19EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE64u;
        // 0x19ee68: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE6Cu;
        goto label_19ee6c;
    }
    ctx->pc = 0x19EE64u;
    SET_GPR_U32(ctx, 31, 0x19EE6Cu);
    ctx->pc = 0x19EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EE64u;
    // 0x19ee68: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19EE64u, 0x19EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE6Cu;
label_19ee6c:
    // 0x19ee6c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19ee70:
    // 0x19ee70: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x19ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ee74:
    // 0x19ee74: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x19ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_19ee78:
    // 0x19ee78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ee7c:
    // 0x19ee7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19ee80:
    // 0x19ee80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ee84:
    // 0x19ee84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ee84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19ee88:
    // 0x19ee88: 0xc06736c  jal         func_19CDB0
label_19ee8c:
    if (ctx->pc == 0x19EE8Cu) {
        ctx->pc = 0x19EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE88u;
        // 0x19ee8c: 0xe7a00230  swc1        $f0, 0x230($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE90u;
        goto label_19ee90;
    }
    ctx->pc = 0x19EE88u;
    SET_GPR_U32(ctx, 31, 0x19EE90u);
    ctx->pc = 0x19EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EE88u;
    // 0x19ee8c: 0xe7a00230  swc1        $f0, 0x230($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19EE88u, 0x19EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE90u;
label_19ee90:
    // 0x19ee90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19ee94:
    // 0x19ee94: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x19ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ee98:
    // 0x19ee98: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x19ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_19ee9c:
    // 0x19ee9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19eea0:
    // 0x19eea0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19eea4:
    // 0x19eea4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19eea8:
    // 0x19eea8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eea8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19eeac:
    // 0x19eeac: 0xc06736c  jal         func_19CDB0
label_19eeb0:
    if (ctx->pc == 0x19EEB0u) {
        ctx->pc = 0x19EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEACu;
        // 0x19eeb0: 0xe7a00234  swc1        $f0, 0x234($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEB4u;
        goto label_19eeb4;
    }
    ctx->pc = 0x19EEACu;
    SET_GPR_U32(ctx, 31, 0x19EEB4u);
    ctx->pc = 0x19EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEACu;
    // 0x19eeb0: 0xe7a00234  swc1        $f0, 0x234($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19EEACu, 0x19EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEB4u;
label_19eeb4:
    // 0x19eeb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19eeb8:
    // 0x19eeb8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x19eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_19eebc:
    // 0x19eebc: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_19eec0:
    // 0x19eec0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19eec4:
    // 0x19eec4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19eec8:
    // 0x19eec8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19eecc:
    // 0x19eecc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eeccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19eed0:
    // 0x19eed0: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x19eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
label_19eed4:
    // 0x19eed4: 0xc041472  jal         func_1051C8
label_19eed8:
    if (ctx->pc == 0x19EED8u) {
        ctx->pc = 0x19EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED4u;
        // 0x19eed8: 0xe7a00238  swc1        $f0, 0x238($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEDCu;
        goto label_19eedc;
    }
    ctx->pc = 0x19EED4u;
    SET_GPR_U32(ctx, 31, 0x19EEDCu);
    ctx->pc = 0x19EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EED4u;
    // 0x19eed8: 0xe7a00238  swc1        $f0, 0x238($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EED4u, 0x19EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEDCu;
label_19eedc:
    // 0x19eedc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x19eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_19eee0:
    // 0x19eee0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_19eee4:
    // 0x19eee4: 0xc041460  jal         func_105180
label_19eee8:
    if (ctx->pc == 0x19EEE8u) {
        ctx->pc = 0x19EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEE4u;
        // 0x19eee8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEECu;
        goto label_19eeec;
    }
    ctx->pc = 0x19EEE4u;
    SET_GPR_U32(ctx, 31, 0x19EEECu);
    ctx->pc = 0x19EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEE4u;
    // 0x19eee8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EEE4u, 0x19EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEECu;
label_19eeec:
    // 0x19eeec: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x19eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_19eef0:
    // 0x19eef0: 0xc041472  jal         func_1051C8
label_19eef4:
    if (ctx->pc == 0x19EEF4u) {
        ctx->pc = 0x19EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEF0u;
        // 0x19eef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEF8u;
        goto label_19eef8;
    }
    ctx->pc = 0x19EEF0u;
    SET_GPR_U32(ctx, 31, 0x19EEF8u);
    ctx->pc = 0x19EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEF0u;
    // 0x19eef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19EEF0u, 0x19EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEF8u;
label_19eef8:
    // 0x19eef8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_19eefc:
    // 0x19eefc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x19eefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_19ef00:
    // 0x19ef00: 0xc041460  jal         func_105180
label_19ef04:
    if (ctx->pc == 0x19EF04u) {
        ctx->pc = 0x19EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF00u;
        // 0x19ef04: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF08u;
        goto label_19ef08;
    }
    ctx->pc = 0x19EF00u;
    SET_GPR_U32(ctx, 31, 0x19EF08u);
    ctx->pc = 0x19EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF00u;
    // 0x19ef04: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19EF00u, 0x19EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF08u;
label_19ef08:
    // 0x19ef08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ef08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ef0c:
    // 0x19ef0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19ef10:
    // 0x19ef10: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_19ef14:
    // 0x19ef14: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_19ef18:
    // 0x19ef18: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19ef18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19ef1c:
    // 0x19ef1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ef1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ef20:
    // 0x19ef20: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19ef20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19ef24:
    // 0x19ef24: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x19ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_19ef28:
    // 0x19ef28: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19ef28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ef2c:
    // 0x19ef2c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_19ef30:
    // 0x19ef30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19ef30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ef34:
    // 0x19ef34: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x19ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_19ef38:
    // 0x19ef38: 0xe7a301fc  swc1        $f3, 0x1FC($sp)
    ctx->pc = 0x19ef38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_19ef3c:
    // 0x19ef3c: 0xe7a2020c  swc1        $f2, 0x20C($sp)
    ctx->pc = 0x19ef3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_19ef40:
    // 0x19ef40: 0xe7a1021c  swc1        $f1, 0x21C($sp)
    ctx->pc = 0x19ef40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_19ef44:
    // 0x19ef44: 0xc041494  jal         func_105250
label_19ef48:
    if (ctx->pc == 0x19EF48u) {
        ctx->pc = 0x19EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF44u;
        // 0x19ef48: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF4Cu;
        goto label_19ef4c;
    }
    ctx->pc = 0x19EF44u;
    SET_GPR_U32(ctx, 31, 0x19EF4Cu);
    ctx->pc = 0x19EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF44u;
    // 0x19ef48: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x19EF44u, 0x19EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF4Cu;
label_19ef4c:
    // 0x19ef4c: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19ef50:
    // 0x19ef50: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x19ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19ef54:
    // 0x19ef54: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x19ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_19ef58:
    // 0x19ef58: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19ef5c:
    // 0x19ef5c: 0xc04144e  jal         func_105138
label_19ef60:
    if (ctx->pc == 0x19EF60u) {
        ctx->pc = 0x19EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF5Cu;
        // 0x19ef60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF64u;
        goto label_19ef64;
    }
    ctx->pc = 0x19EF5Cu;
    SET_GPR_U32(ctx, 31, 0x19EF64u);
    ctx->pc = 0x19EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF5Cu;
    // 0x19ef60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x19EF5Cu, 0x19EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF64u;
label_19ef64:
    // 0x19ef64: 0x10000052  b           . + 4 + (0x52 << 2)
label_19ef68:
    if (ctx->pc == 0x19EF68u) {
        ctx->pc = 0x19EF6Cu;
        goto label_19ef6c;
    }
    ctx->pc = 0x19EF64u;
    {
        const bool branch_taken_0x19ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef64) {
            ctx->pc = 0x19F0B0u;
            goto label_19f0b0;
        }
    }
    ctx->pc = 0x19EF6Cu;
label_19ef6c:
    // 0x19ef6c: 0x0  nop
    ctx->pc = 0x19ef6cu;
    // NOP
label_19ef70:
    // 0x19ef70: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x19ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_19ef74:
    // 0x19ef74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19ef78:
    if (ctx->pc == 0x19EF78u) {
        ctx->pc = 0x19EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF74u;
        // 0x19ef78: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF7Cu;
        goto label_19ef7c;
    }
    ctx->pc = 0x19EF74u;
    {
        const bool branch_taken_0x19ef74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF74u;
        // 0x19ef78: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef74) {
            ctx->pc = 0x19EF98u;
            goto label_19ef98;
        }
    }
    ctx->pc = 0x19EF7Cu;
label_19ef7c:
    // 0x19ef7c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19ef7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_19ef80:
    // 0x19ef80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ef84:
    // 0x19ef84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19ef88:
    // 0x19ef88: 0x0  nop
    ctx->pc = 0x19ef88u;
    // NOP
label_19ef8c:
    // 0x19ef8c: 0x0  nop
    ctx->pc = 0x19ef8cu;
    // NOP
label_19ef90:
    // 0x19ef90: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ef94:
    if (ctx->pc == 0x19EF94u) {
        ctx->pc = 0x19EF98u;
        goto label_19ef98;
    }
    ctx->pc = 0x19EF90u;
    {
        const bool branch_taken_0x19ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef90) {
            ctx->pc = 0x19EF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ef7c;
        }
    }
    ctx->pc = 0x19EF98u;
label_19ef98:
    // 0x19ef98: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19ef9c:
    // 0x19ef9c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x19ef9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_19efa0:
    // 0x19efa0: 0x2442e770  addiu       $v0, $v0, -0x1890
    ctx->pc = 0x19efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
label_19efa4:
    // 0x19efa4: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x19efa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_19efa8:
    // 0x19efa8: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x19efa8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19efac:
    // 0x19efac: 0x24e7e780  addiu       $a3, $a3, -0x1880
    ctx->pc = 0x19efacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961024));
label_19efb0:
    // 0x19efb0: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x19efb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_19efb4:
    // 0x19efb4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x19efb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_19efb8:
    // 0x19efb8: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x19efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_19efbc:
    // 0x19efbc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x19efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_19efc0:
    // 0x19efc0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x19efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_19efc4:
    // 0x19efc4: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x19efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
label_19efc8:
    // 0x19efc8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_19efcc:
    // 0x19efcc: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x19efccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19efd0:
    // 0x19efd0: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x19efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_19efd4:
    // 0x19efd4: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x19efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_19efd8:
    // 0x19efd8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19efd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19efdc:
    // 0x19efdc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x19efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_19efe0:
    // 0x19efe0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x19efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_19efe4:
    // 0x19efe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19efe8:
    // 0x19efe8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19efe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19efec:
    // 0x19efec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19efecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19eff0:
    // 0x19eff0: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x19eff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_19eff4:
    // 0x19eff4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_19eff8:
    // 0x19eff8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19effc:
    // 0x19effc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f000:
    // 0x19f000: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19f000u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19f004:
    // 0x19f004: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x19f004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_19f008:
    // 0x19f008: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_19f00c:
    // 0x19f00c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19f010:
    // 0x19f010: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f014:
    // 0x19f014: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19f014u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19f018:
    // 0x19f018: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x19f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
label_19f01c:
    // 0x19f01c: 0xc041472  jal         func_1051C8
label_19f020:
    if (ctx->pc == 0x19F020u) {
        ctx->pc = 0x19F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F01Cu;
        // 0x19f020: 0xe7a00238  swc1        $f0, 0x238($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F024u;
        goto label_19f024;
    }
    ctx->pc = 0x19F01Cu;
    SET_GPR_U32(ctx, 31, 0x19F024u);
    ctx->pc = 0x19F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F01Cu;
    // 0x19f020: 0xe7a00238  swc1        $f0, 0x238($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19F01Cu, 0x19F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F024u;
label_19f024:
    // 0x19f024: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x19f024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_19f028:
    // 0x19f028: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x19f028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_19f02c:
    // 0x19f02c: 0xc041460  jal         func_105180
label_19f030:
    if (ctx->pc == 0x19F030u) {
        ctx->pc = 0x19F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F02Cu;
        // 0x19f030: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F034u;
        goto label_19f034;
    }
    ctx->pc = 0x19F02Cu;
    SET_GPR_U32(ctx, 31, 0x19F034u);
    ctx->pc = 0x19F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F02Cu;
    // 0x19f030: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19F02Cu, 0x19F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F034u;
label_19f034:
    // 0x19f034: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x19f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_19f038:
    // 0x19f038: 0xc041472  jal         func_1051C8
label_19f03c:
    if (ctx->pc == 0x19F03Cu) {
        ctx->pc = 0x19F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F038u;
        // 0x19f03c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F040u;
        goto label_19f040;
    }
    ctx->pc = 0x19F038u;
    SET_GPR_U32(ctx, 31, 0x19F040u);
    ctx->pc = 0x19F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F038u;
    // 0x19f03c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x19F038u, 0x19F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F040u;
label_19f040:
    // 0x19f040: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_19f044:
    // 0x19f044: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x19f044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_19f048:
    // 0x19f048: 0xc041460  jal         func_105180
label_19f04c:
    if (ctx->pc == 0x19F04Cu) {
        ctx->pc = 0x19F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F048u;
        // 0x19f04c: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F050u;
        goto label_19f050;
    }
    ctx->pc = 0x19F048u;
    SET_GPR_U32(ctx, 31, 0x19F050u);
    ctx->pc = 0x19F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F048u;
    // 0x19f04c: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x19F048u, 0x19F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F050u;
label_19f050:
    // 0x19f050: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f054:
    // 0x19f054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f058:
    // 0x19f058: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x19f058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_19f05c:
    // 0x19f05c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x19f05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_19f060:
    // 0x19f060: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19f060u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_19f064:
    // 0x19f064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f068:
    // 0x19f068: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19f068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19f06c:
    // 0x19f06c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x19f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_19f070:
    // 0x19f070: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19f070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19f074:
    // 0x19f074: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x19f074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_19f078:
    // 0x19f078: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19f078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f07c:
    // 0x19f07c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x19f07cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_19f080:
    // 0x19f080: 0xe7a3017c  swc1        $f3, 0x17C($sp)
    ctx->pc = 0x19f080u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_19f084:
    // 0x19f084: 0xe7a2018c  swc1        $f2, 0x18C($sp)
    ctx->pc = 0x19f084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_19f088:
    // 0x19f088: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x19f088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_19f08c:
    // 0x19f08c: 0xc041494  jal         func_105250
label_19f090:
    if (ctx->pc == 0x19F090u) {
        ctx->pc = 0x19F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F08Cu;
        // 0x19f090: 0xe7a001ac  swc1        $f0, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F094u;
        goto label_19f094;
    }
    ctx->pc = 0x19F08Cu;
    SET_GPR_U32(ctx, 31, 0x19F094u);
    ctx->pc = 0x19F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F08Cu;
    // 0x19f090: 0xe7a001ac  swc1        $f0, 0x1AC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x19F08Cu, 0x19F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F094u;
label_19f094:
    // 0x19f094: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19f098:
    // 0x19f098: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19f09c:
    // 0x19f09c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x19f09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_19f0a0:
    // 0x19f0a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19f0a4:
    // 0x19f0a4: 0xc04144e  jal         func_105138
label_19f0a8:
    if (ctx->pc == 0x19F0A8u) {
        ctx->pc = 0x19F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0A4u;
        // 0x19f0a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0ACu;
        goto label_19f0ac;
    }
    ctx->pc = 0x19F0A4u;
    SET_GPR_U32(ctx, 31, 0x19F0ACu);
    ctx->pc = 0x19F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0A4u;
    // 0x19f0a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x19F0A4u, 0x19F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0ACu;
label_19f0ac:
    // 0x19f0ac: 0x0  nop
    ctx->pc = 0x19f0acu;
    // NOP
label_19f0b0:
    // 0x19f0b0: 0x8ea30128  lw          $v1, 0x128($s5)
    ctx->pc = 0x19f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
label_19f0b4:
    // 0x19f0b4: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19f0b8:
    // 0x19f0b8: 0x172980  sll         $a1, $s7, 6
    ctx->pc = 0x19f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19f0bc:
    // 0x19f0bc: 0x27c60040  addiu       $a2, $fp, 0x40
    ctx->pc = 0x19f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
label_19f0c0:
    // 0x19f0c0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19f0c4:
    // 0x19f0c4: 0xc04144e  jal         func_105138
label_19f0c8:
    if (ctx->pc == 0x19F0C8u) {
        ctx->pc = 0x19F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0C4u;
        // 0x19f0c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0CCu;
        goto label_19f0cc;
    }
    ctx->pc = 0x19F0C4u;
    SET_GPR_U32(ctx, 31, 0x19F0CCu);
    ctx->pc = 0x19F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0C4u;
    // 0x19f0c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x19F0C4u, 0x19F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0CCu;
label_19f0cc:
    // 0x19f0cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19f0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19f0d0:
    // 0x19f0d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19f0d4:
    // 0x19f0d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19f0d8:
    // 0x19f0d8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_19f0dc:
    // 0x19f0dc: 0x1460fe40  bnez        $v1, . + 4 + (-0x1C0 << 2)
label_19f0e0:
    if (ctx->pc == 0x19F0E0u) {
        ctx->pc = 0x19F0E4u;
        goto label_19f0e4;
    }
    ctx->pc = 0x19F0DCu;
    {
        const bool branch_taken_0x19f0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f0dc) {
            ctx->pc = 0x19E9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e9e0;
        }
    }
    ctx->pc = 0x19F0E4u;
label_19f0e4:
    // 0x19f0e4: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x19f0e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_19f0e8:
    // 0x19f0e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19f0ec:
    // 0x19f0ec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_19f0f0:
    if (ctx->pc == 0x19F0F0u) {
        ctx->pc = 0x19F0F4u;
        goto label_19f0f4;
    }
    ctx->pc = 0x19F0ECu;
    {
        const bool branch_taken_0x19f0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19f0ec) {
            ctx->pc = 0x19F100u;
            goto label_19f100;
        }
    }
    ctx->pc = 0x19F0F4u;
label_19f0f4:
    // 0x19f0f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19f0f8:
    // 0x19f0f8: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_19f0fc:
    if (ctx->pc == 0x19F0FCu) {
        ctx->pc = 0x19F100u;
        goto label_19f100;
    }
    ctx->pc = 0x19F0F8u;
    {
        const bool branch_taken_0x19f0f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f0f8) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19F100u;
label_19f100:
    // 0x19f100: 0x92630008  lbu         $v1, 0x8($s3)
    ctx->pc = 0x19f100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_19f104:
    // 0x19f104: 0x10000016  b           . + 4 + (0x16 << 2)
label_19f108:
    if (ctx->pc == 0x19F108u) {
        ctx->pc = 0x19F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F104u;
        // 0x19f108: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F10Cu;
        goto label_19f10c;
    }
    ctx->pc = 0x19F104u;
    {
        const bool branch_taken_0x19f104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F104u;
        // 0x19f108: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f104) {
            ctx->pc = 0x19F160u;
            goto label_19f160;
        }
    }
    ctx->pc = 0x19F10Cu;
label_19f10c:
    // 0x19f10c: 0x0  nop
    ctx->pc = 0x19f10cu;
    // NOP
label_19f110:
    // 0x19f110: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x19f110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_19f114:
    // 0x19f114: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_19f118:
    // 0x19f118: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19f118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_19f11c:
    // 0x19f11c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x19f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19f120:
    // 0x19f120: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x19f120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_19f124:
    // 0x19f124: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x19f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_19f128:
    // 0x19f128: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x19f128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_19f12c:
    // 0x19f12c: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x19f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_19f130:
    // 0x19f130: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19f130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f134:
    // 0x19f134: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x19f134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19f138:
    // 0x19f138: 0xc04144e  jal         func_105138
label_19f13c:
    if (ctx->pc == 0x19F13Cu) {
        ctx->pc = 0x19F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F138u;
        // 0x19f13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F140u;
        goto label_19f140;
    }
    ctx->pc = 0x19F138u;
    SET_GPR_U32(ctx, 31, 0x19F140u);
    ctx->pc = 0x19F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F138u;
    // 0x19f13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x19F138u, 0x19F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F140u;
label_19f140:
    // 0x19f140: 0x8ea20128  lw          $v0, 0x128($s5)
    ctx->pc = 0x19f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
label_19f144:
    // 0x19f144: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19f144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_19f148:
    // 0x19f148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19f148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f14c:
    // 0x19f14c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x19f14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_19f150:
    // 0x19f150: 0xc04144e  jal         func_105138
label_19f154:
    if (ctx->pc == 0x19F154u) {
        ctx->pc = 0x19F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F150u;
        // 0x19f154: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F158u;
        goto label_19f158;
    }
    ctx->pc = 0x19F150u;
    SET_GPR_U32(ctx, 31, 0x19F158u);
    ctx->pc = 0x19F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F150u;
    // 0x19f154: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x19F150u, 0x19F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F158u;
label_19f158:
    // 0x19f158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19f158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19f15c:
    // 0x19f15c: 0x0  nop
    ctx->pc = 0x19f15cu;
    // NOP
label_19f160:
    // 0x19f160: 0x96a3006a  lhu         $v1, 0x6A($s5)
    ctx->pc = 0x19f160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 106)));
label_19f164:
    // 0x19f164: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x19f164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19f168:
    // 0x19f168: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_19f16c:
    if (ctx->pc == 0x19F16Cu) {
        ctx->pc = 0x19F170u;
        goto label_19f170;
    }
    ctx->pc = 0x19F168u;
    {
        const bool branch_taken_0x19f168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f168) {
            ctx->pc = 0x19F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f110;
        }
    }
    ctx->pc = 0x19F170u;
label_19f170:
    // 0x19f170: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x19f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_19f174:
    // 0x19f174: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x19f174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_19f178:
    // 0x19f178: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_19f17c:
    // 0x19f17c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19f180:
    // 0x19f180: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x19f180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_19f184:
    // 0x19f184: 0x0  nop
    ctx->pc = 0x19f184u;
    // NOP
label_19f188:
    // 0x19f188: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x19f188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_19f18c:
    // 0x19f18c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x19f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_19f190:
    // 0x19f190: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x19f190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_19f194:
    // 0x19f194: 0x1460f91c  bnez        $v1, . + 4 + (-0x6E4 << 2)
label_19f198:
    if (ctx->pc == 0x19F198u) {
        ctx->pc = 0x19F19Cu;
        goto label_19f19c;
    }
    ctx->pc = 0x19F194u;
    {
        const bool branch_taken_0x19f194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f194) {
            ctx->pc = 0x19D608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d608;
        }
    }
    ctx->pc = 0x19F19Cu;
label_19f19c:
    // 0x19f19c: 0x0  nop
    ctx->pc = 0x19f19cu;
    // NOP
label_19f1a0:
    // 0x19f1a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19f1a4:
    // 0x19f1a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x19f1a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19f1a8:
    // 0x19f1a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19f1ac:
    // 0x19f1ac: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x19f1acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19f1b0:
    // 0x19f1b0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19f1b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19f1b4:
    // 0x19f1b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19f1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19f1b8:
    // 0x19f1b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19f1b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19f1bc:
    // 0x19f1bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19f1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19f1c0:
    // 0x19f1c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19f1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19f1c4:
    // 0x19f1c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19f1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19f1c8:
    // 0x19f1c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f1cc:
    // 0x19f1cc: 0x3e00008  jr          $ra
label_19f1d0:
    if (ctx->pc == 0x19F1D0u) {
        ctx->pc = 0x19F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1CCu;
        // 0x19f1d0: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1D4u;
        goto label_fallthrough_0x19f1cc;
    }
    ctx->pc = 0x19F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1CCu;
        // 0x19f1d0: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f1cc:
    ctx->pc = 0x19F1D4u;
}
