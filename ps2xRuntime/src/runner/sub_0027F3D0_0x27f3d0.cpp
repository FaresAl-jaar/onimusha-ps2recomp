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

// Function: sub_0027F3D0
// Address: 0x27f3d0 - 0x27fb70
void sub_0027F3D0_0x27f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F3D0_0x27f3d0");
#endif

    switch (ctx->pc) {
        case 0x27f3d0u: goto label_27f3d0;
        case 0x27f3d4u: goto label_27f3d4;
        case 0x27f3d8u: goto label_27f3d8;
        case 0x27f3dcu: goto label_27f3dc;
        case 0x27f3e0u: goto label_27f3e0;
        case 0x27f3e4u: goto label_27f3e4;
        case 0x27f3e8u: goto label_27f3e8;
        case 0x27f3ecu: goto label_27f3ec;
        case 0x27f3f0u: goto label_27f3f0;
        case 0x27f3f4u: goto label_27f3f4;
        case 0x27f3f8u: goto label_27f3f8;
        case 0x27f3fcu: goto label_27f3fc;
        case 0x27f400u: goto label_27f400;
        case 0x27f404u: goto label_27f404;
        case 0x27f408u: goto label_27f408;
        case 0x27f40cu: goto label_27f40c;
        case 0x27f410u: goto label_27f410;
        case 0x27f414u: goto label_27f414;
        case 0x27f418u: goto label_27f418;
        case 0x27f41cu: goto label_27f41c;
        case 0x27f420u: goto label_27f420;
        case 0x27f424u: goto label_27f424;
        case 0x27f428u: goto label_27f428;
        case 0x27f42cu: goto label_27f42c;
        case 0x27f430u: goto label_27f430;
        case 0x27f434u: goto label_27f434;
        case 0x27f438u: goto label_27f438;
        case 0x27f43cu: goto label_27f43c;
        case 0x27f440u: goto label_27f440;
        case 0x27f444u: goto label_27f444;
        case 0x27f448u: goto label_27f448;
        case 0x27f44cu: goto label_27f44c;
        case 0x27f450u: goto label_27f450;
        case 0x27f454u: goto label_27f454;
        case 0x27f458u: goto label_27f458;
        case 0x27f45cu: goto label_27f45c;
        case 0x27f460u: goto label_27f460;
        case 0x27f464u: goto label_27f464;
        case 0x27f468u: goto label_27f468;
        case 0x27f46cu: goto label_27f46c;
        case 0x27f470u: goto label_27f470;
        case 0x27f474u: goto label_27f474;
        case 0x27f478u: goto label_27f478;
        case 0x27f47cu: goto label_27f47c;
        case 0x27f480u: goto label_27f480;
        case 0x27f484u: goto label_27f484;
        case 0x27f488u: goto label_27f488;
        case 0x27f48cu: goto label_27f48c;
        case 0x27f490u: goto label_27f490;
        case 0x27f494u: goto label_27f494;
        case 0x27f498u: goto label_27f498;
        case 0x27f49cu: goto label_27f49c;
        case 0x27f4a0u: goto label_27f4a0;
        case 0x27f4a4u: goto label_27f4a4;
        case 0x27f4a8u: goto label_27f4a8;
        case 0x27f4acu: goto label_27f4ac;
        case 0x27f4b0u: goto label_27f4b0;
        case 0x27f4b4u: goto label_27f4b4;
        case 0x27f4b8u: goto label_27f4b8;
        case 0x27f4bcu: goto label_27f4bc;
        case 0x27f4c0u: goto label_27f4c0;
        case 0x27f4c4u: goto label_27f4c4;
        case 0x27f4c8u: goto label_27f4c8;
        case 0x27f4ccu: goto label_27f4cc;
        case 0x27f4d0u: goto label_27f4d0;
        case 0x27f4d4u: goto label_27f4d4;
        case 0x27f4d8u: goto label_27f4d8;
        case 0x27f4dcu: goto label_27f4dc;
        case 0x27f4e0u: goto label_27f4e0;
        case 0x27f4e4u: goto label_27f4e4;
        case 0x27f4e8u: goto label_27f4e8;
        case 0x27f4ecu: goto label_27f4ec;
        case 0x27f4f0u: goto label_27f4f0;
        case 0x27f4f4u: goto label_27f4f4;
        case 0x27f4f8u: goto label_27f4f8;
        case 0x27f4fcu: goto label_27f4fc;
        case 0x27f500u: goto label_27f500;
        case 0x27f504u: goto label_27f504;
        case 0x27f508u: goto label_27f508;
        case 0x27f50cu: goto label_27f50c;
        case 0x27f510u: goto label_27f510;
        case 0x27f514u: goto label_27f514;
        case 0x27f518u: goto label_27f518;
        case 0x27f51cu: goto label_27f51c;
        case 0x27f520u: goto label_27f520;
        case 0x27f524u: goto label_27f524;
        case 0x27f528u: goto label_27f528;
        case 0x27f52cu: goto label_27f52c;
        case 0x27f530u: goto label_27f530;
        case 0x27f534u: goto label_27f534;
        case 0x27f538u: goto label_27f538;
        case 0x27f53cu: goto label_27f53c;
        case 0x27f540u: goto label_27f540;
        case 0x27f544u: goto label_27f544;
        case 0x27f548u: goto label_27f548;
        case 0x27f54cu: goto label_27f54c;
        case 0x27f550u: goto label_27f550;
        case 0x27f554u: goto label_27f554;
        case 0x27f558u: goto label_27f558;
        case 0x27f55cu: goto label_27f55c;
        case 0x27f560u: goto label_27f560;
        case 0x27f564u: goto label_27f564;
        case 0x27f568u: goto label_27f568;
        case 0x27f56cu: goto label_27f56c;
        case 0x27f570u: goto label_27f570;
        case 0x27f574u: goto label_27f574;
        case 0x27f578u: goto label_27f578;
        case 0x27f57cu: goto label_27f57c;
        case 0x27f580u: goto label_27f580;
        case 0x27f584u: goto label_27f584;
        case 0x27f588u: goto label_27f588;
        case 0x27f58cu: goto label_27f58c;
        case 0x27f590u: goto label_27f590;
        case 0x27f594u: goto label_27f594;
        case 0x27f598u: goto label_27f598;
        case 0x27f59cu: goto label_27f59c;
        case 0x27f5a0u: goto label_27f5a0;
        case 0x27f5a4u: goto label_27f5a4;
        case 0x27f5a8u: goto label_27f5a8;
        case 0x27f5acu: goto label_27f5ac;
        case 0x27f5b0u: goto label_27f5b0;
        case 0x27f5b4u: goto label_27f5b4;
        case 0x27f5b8u: goto label_27f5b8;
        case 0x27f5bcu: goto label_27f5bc;
        case 0x27f5c0u: goto label_27f5c0;
        case 0x27f5c4u: goto label_27f5c4;
        case 0x27f5c8u: goto label_27f5c8;
        case 0x27f5ccu: goto label_27f5cc;
        case 0x27f5d0u: goto label_27f5d0;
        case 0x27f5d4u: goto label_27f5d4;
        case 0x27f5d8u: goto label_27f5d8;
        case 0x27f5dcu: goto label_27f5dc;
        case 0x27f5e0u: goto label_27f5e0;
        case 0x27f5e4u: goto label_27f5e4;
        case 0x27f5e8u: goto label_27f5e8;
        case 0x27f5ecu: goto label_27f5ec;
        case 0x27f5f0u: goto label_27f5f0;
        case 0x27f5f4u: goto label_27f5f4;
        case 0x27f5f8u: goto label_27f5f8;
        case 0x27f5fcu: goto label_27f5fc;
        case 0x27f600u: goto label_27f600;
        case 0x27f604u: goto label_27f604;
        case 0x27f608u: goto label_27f608;
        case 0x27f60cu: goto label_27f60c;
        case 0x27f610u: goto label_27f610;
        case 0x27f614u: goto label_27f614;
        case 0x27f618u: goto label_27f618;
        case 0x27f61cu: goto label_27f61c;
        case 0x27f620u: goto label_27f620;
        case 0x27f624u: goto label_27f624;
        case 0x27f628u: goto label_27f628;
        case 0x27f62cu: goto label_27f62c;
        case 0x27f630u: goto label_27f630;
        case 0x27f634u: goto label_27f634;
        case 0x27f638u: goto label_27f638;
        case 0x27f63cu: goto label_27f63c;
        case 0x27f640u: goto label_27f640;
        case 0x27f644u: goto label_27f644;
        case 0x27f648u: goto label_27f648;
        case 0x27f64cu: goto label_27f64c;
        case 0x27f650u: goto label_27f650;
        case 0x27f654u: goto label_27f654;
        case 0x27f658u: goto label_27f658;
        case 0x27f65cu: goto label_27f65c;
        case 0x27f660u: goto label_27f660;
        case 0x27f664u: goto label_27f664;
        case 0x27f668u: goto label_27f668;
        case 0x27f66cu: goto label_27f66c;
        case 0x27f670u: goto label_27f670;
        case 0x27f674u: goto label_27f674;
        case 0x27f678u: goto label_27f678;
        case 0x27f67cu: goto label_27f67c;
        case 0x27f680u: goto label_27f680;
        case 0x27f684u: goto label_27f684;
        case 0x27f688u: goto label_27f688;
        case 0x27f68cu: goto label_27f68c;
        case 0x27f690u: goto label_27f690;
        case 0x27f694u: goto label_27f694;
        case 0x27f698u: goto label_27f698;
        case 0x27f69cu: goto label_27f69c;
        case 0x27f6a0u: goto label_27f6a0;
        case 0x27f6a4u: goto label_27f6a4;
        case 0x27f6a8u: goto label_27f6a8;
        case 0x27f6acu: goto label_27f6ac;
        case 0x27f6b0u: goto label_27f6b0;
        case 0x27f6b4u: goto label_27f6b4;
        case 0x27f6b8u: goto label_27f6b8;
        case 0x27f6bcu: goto label_27f6bc;
        case 0x27f6c0u: goto label_27f6c0;
        case 0x27f6c4u: goto label_27f6c4;
        case 0x27f6c8u: goto label_27f6c8;
        case 0x27f6ccu: goto label_27f6cc;
        case 0x27f6d0u: goto label_27f6d0;
        case 0x27f6d4u: goto label_27f6d4;
        case 0x27f6d8u: goto label_27f6d8;
        case 0x27f6dcu: goto label_27f6dc;
        case 0x27f6e0u: goto label_27f6e0;
        case 0x27f6e4u: goto label_27f6e4;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6ecu: goto label_27f6ec;
        case 0x27f6f0u: goto label_27f6f0;
        case 0x27f6f4u: goto label_27f6f4;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f6fcu: goto label_27f6fc;
        case 0x27f700u: goto label_27f700;
        case 0x27f704u: goto label_27f704;
        case 0x27f708u: goto label_27f708;
        case 0x27f70cu: goto label_27f70c;
        case 0x27f710u: goto label_27f710;
        case 0x27f714u: goto label_27f714;
        case 0x27f718u: goto label_27f718;
        case 0x27f71cu: goto label_27f71c;
        case 0x27f720u: goto label_27f720;
        case 0x27f724u: goto label_27f724;
        case 0x27f728u: goto label_27f728;
        case 0x27f72cu: goto label_27f72c;
        case 0x27f730u: goto label_27f730;
        case 0x27f734u: goto label_27f734;
        case 0x27f738u: goto label_27f738;
        case 0x27f73cu: goto label_27f73c;
        case 0x27f740u: goto label_27f740;
        case 0x27f744u: goto label_27f744;
        case 0x27f748u: goto label_27f748;
        case 0x27f74cu: goto label_27f74c;
        case 0x27f750u: goto label_27f750;
        case 0x27f754u: goto label_27f754;
        case 0x27f758u: goto label_27f758;
        case 0x27f75cu: goto label_27f75c;
        case 0x27f760u: goto label_27f760;
        case 0x27f764u: goto label_27f764;
        case 0x27f768u: goto label_27f768;
        case 0x27f76cu: goto label_27f76c;
        case 0x27f770u: goto label_27f770;
        case 0x27f774u: goto label_27f774;
        case 0x27f778u: goto label_27f778;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f780u: goto label_27f780;
        case 0x27f784u: goto label_27f784;
        case 0x27f788u: goto label_27f788;
        case 0x27f78cu: goto label_27f78c;
        case 0x27f790u: goto label_27f790;
        case 0x27f794u: goto label_27f794;
        case 0x27f798u: goto label_27f798;
        case 0x27f79cu: goto label_27f79c;
        case 0x27f7a0u: goto label_27f7a0;
        case 0x27f7a4u: goto label_27f7a4;
        case 0x27f7a8u: goto label_27f7a8;
        case 0x27f7acu: goto label_27f7ac;
        case 0x27f7b0u: goto label_27f7b0;
        case 0x27f7b4u: goto label_27f7b4;
        case 0x27f7b8u: goto label_27f7b8;
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c0u: goto label_27f7c0;
        case 0x27f7c4u: goto label_27f7c4;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7ccu: goto label_27f7cc;
        case 0x27f7d0u: goto label_27f7d0;
        case 0x27f7d4u: goto label_27f7d4;
        case 0x27f7d8u: goto label_27f7d8;
        case 0x27f7dcu: goto label_27f7dc;
        case 0x27f7e0u: goto label_27f7e0;
        case 0x27f7e4u: goto label_27f7e4;
        case 0x27f7e8u: goto label_27f7e8;
        case 0x27f7ecu: goto label_27f7ec;
        case 0x27f7f0u: goto label_27f7f0;
        case 0x27f7f4u: goto label_27f7f4;
        case 0x27f7f8u: goto label_27f7f8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f800u: goto label_27f800;
        case 0x27f804u: goto label_27f804;
        case 0x27f808u: goto label_27f808;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f810u: goto label_27f810;
        case 0x27f814u: goto label_27f814;
        case 0x27f818u: goto label_27f818;
        case 0x27f81cu: goto label_27f81c;
        case 0x27f820u: goto label_27f820;
        case 0x27f824u: goto label_27f824;
        case 0x27f828u: goto label_27f828;
        case 0x27f82cu: goto label_27f82c;
        case 0x27f830u: goto label_27f830;
        case 0x27f834u: goto label_27f834;
        case 0x27f838u: goto label_27f838;
        case 0x27f83cu: goto label_27f83c;
        case 0x27f840u: goto label_27f840;
        case 0x27f844u: goto label_27f844;
        case 0x27f848u: goto label_27f848;
        case 0x27f84cu: goto label_27f84c;
        case 0x27f850u: goto label_27f850;
        case 0x27f854u: goto label_27f854;
        case 0x27f858u: goto label_27f858;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f860u: goto label_27f860;
        case 0x27f864u: goto label_27f864;
        case 0x27f868u: goto label_27f868;
        case 0x27f86cu: goto label_27f86c;
        case 0x27f870u: goto label_27f870;
        case 0x27f874u: goto label_27f874;
        case 0x27f878u: goto label_27f878;
        case 0x27f87cu: goto label_27f87c;
        case 0x27f880u: goto label_27f880;
        case 0x27f884u: goto label_27f884;
        case 0x27f888u: goto label_27f888;
        case 0x27f88cu: goto label_27f88c;
        case 0x27f890u: goto label_27f890;
        case 0x27f894u: goto label_27f894;
        case 0x27f898u: goto label_27f898;
        case 0x27f89cu: goto label_27f89c;
        case 0x27f8a0u: goto label_27f8a0;
        case 0x27f8a4u: goto label_27f8a4;
        case 0x27f8a8u: goto label_27f8a8;
        case 0x27f8acu: goto label_27f8ac;
        case 0x27f8b0u: goto label_27f8b0;
        case 0x27f8b4u: goto label_27f8b4;
        case 0x27f8b8u: goto label_27f8b8;
        case 0x27f8bcu: goto label_27f8bc;
        case 0x27f8c0u: goto label_27f8c0;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8c8u: goto label_27f8c8;
        case 0x27f8ccu: goto label_27f8cc;
        case 0x27f8d0u: goto label_27f8d0;
        case 0x27f8d4u: goto label_27f8d4;
        case 0x27f8d8u: goto label_27f8d8;
        case 0x27f8dcu: goto label_27f8dc;
        case 0x27f8e0u: goto label_27f8e0;
        case 0x27f8e4u: goto label_27f8e4;
        case 0x27f8e8u: goto label_27f8e8;
        case 0x27f8ecu: goto label_27f8ec;
        case 0x27f8f0u: goto label_27f8f0;
        case 0x27f8f4u: goto label_27f8f4;
        case 0x27f8f8u: goto label_27f8f8;
        case 0x27f8fcu: goto label_27f8fc;
        case 0x27f900u: goto label_27f900;
        case 0x27f904u: goto label_27f904;
        case 0x27f908u: goto label_27f908;
        case 0x27f90cu: goto label_27f90c;
        case 0x27f910u: goto label_27f910;
        case 0x27f914u: goto label_27f914;
        case 0x27f918u: goto label_27f918;
        case 0x27f91cu: goto label_27f91c;
        case 0x27f920u: goto label_27f920;
        case 0x27f924u: goto label_27f924;
        case 0x27f928u: goto label_27f928;
        case 0x27f92cu: goto label_27f92c;
        case 0x27f930u: goto label_27f930;
        case 0x27f934u: goto label_27f934;
        case 0x27f938u: goto label_27f938;
        case 0x27f93cu: goto label_27f93c;
        case 0x27f940u: goto label_27f940;
        case 0x27f944u: goto label_27f944;
        case 0x27f948u: goto label_27f948;
        case 0x27f94cu: goto label_27f94c;
        case 0x27f950u: goto label_27f950;
        case 0x27f954u: goto label_27f954;
        case 0x27f958u: goto label_27f958;
        case 0x27f95cu: goto label_27f95c;
        case 0x27f960u: goto label_27f960;
        case 0x27f964u: goto label_27f964;
        case 0x27f968u: goto label_27f968;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f970u: goto label_27f970;
        case 0x27f974u: goto label_27f974;
        case 0x27f978u: goto label_27f978;
        case 0x27f97cu: goto label_27f97c;
        case 0x27f980u: goto label_27f980;
        case 0x27f984u: goto label_27f984;
        case 0x27f988u: goto label_27f988;
        case 0x27f98cu: goto label_27f98c;
        case 0x27f990u: goto label_27f990;
        case 0x27f994u: goto label_27f994;
        case 0x27f998u: goto label_27f998;
        case 0x27f99cu: goto label_27f99c;
        case 0x27f9a0u: goto label_27f9a0;
        case 0x27f9a4u: goto label_27f9a4;
        case 0x27f9a8u: goto label_27f9a8;
        case 0x27f9acu: goto label_27f9ac;
        case 0x27f9b0u: goto label_27f9b0;
        case 0x27f9b4u: goto label_27f9b4;
        case 0x27f9b8u: goto label_27f9b8;
        case 0x27f9bcu: goto label_27f9bc;
        case 0x27f9c0u: goto label_27f9c0;
        case 0x27f9c4u: goto label_27f9c4;
        case 0x27f9c8u: goto label_27f9c8;
        case 0x27f9ccu: goto label_27f9cc;
        case 0x27f9d0u: goto label_27f9d0;
        case 0x27f9d4u: goto label_27f9d4;
        case 0x27f9d8u: goto label_27f9d8;
        case 0x27f9dcu: goto label_27f9dc;
        case 0x27f9e0u: goto label_27f9e0;
        case 0x27f9e4u: goto label_27f9e4;
        case 0x27f9e8u: goto label_27f9e8;
        case 0x27f9ecu: goto label_27f9ec;
        case 0x27f9f0u: goto label_27f9f0;
        case 0x27f9f4u: goto label_27f9f4;
        case 0x27f9f8u: goto label_27f9f8;
        case 0x27f9fcu: goto label_27f9fc;
        case 0x27fa00u: goto label_27fa00;
        case 0x27fa04u: goto label_27fa04;
        case 0x27fa08u: goto label_27fa08;
        case 0x27fa0cu: goto label_27fa0c;
        case 0x27fa10u: goto label_27fa10;
        case 0x27fa14u: goto label_27fa14;
        case 0x27fa18u: goto label_27fa18;
        case 0x27fa1cu: goto label_27fa1c;
        case 0x27fa20u: goto label_27fa20;
        case 0x27fa24u: goto label_27fa24;
        case 0x27fa28u: goto label_27fa28;
        case 0x27fa2cu: goto label_27fa2c;
        case 0x27fa30u: goto label_27fa30;
        case 0x27fa34u: goto label_27fa34;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa3cu: goto label_27fa3c;
        case 0x27fa40u: goto label_27fa40;
        case 0x27fa44u: goto label_27fa44;
        case 0x27fa48u: goto label_27fa48;
        case 0x27fa4cu: goto label_27fa4c;
        case 0x27fa50u: goto label_27fa50;
        case 0x27fa54u: goto label_27fa54;
        case 0x27fa58u: goto label_27fa58;
        case 0x27fa5cu: goto label_27fa5c;
        case 0x27fa60u: goto label_27fa60;
        case 0x27fa64u: goto label_27fa64;
        case 0x27fa68u: goto label_27fa68;
        case 0x27fa6cu: goto label_27fa6c;
        case 0x27fa70u: goto label_27fa70;
        case 0x27fa74u: goto label_27fa74;
        case 0x27fa78u: goto label_27fa78;
        case 0x27fa7cu: goto label_27fa7c;
        case 0x27fa80u: goto label_27fa80;
        case 0x27fa84u: goto label_27fa84;
        case 0x27fa88u: goto label_27fa88;
        case 0x27fa8cu: goto label_27fa8c;
        case 0x27fa90u: goto label_27fa90;
        case 0x27fa94u: goto label_27fa94;
        case 0x27fa98u: goto label_27fa98;
        case 0x27fa9cu: goto label_27fa9c;
        case 0x27faa0u: goto label_27faa0;
        case 0x27faa4u: goto label_27faa4;
        case 0x27faa8u: goto label_27faa8;
        case 0x27faacu: goto label_27faac;
        case 0x27fab0u: goto label_27fab0;
        case 0x27fab4u: goto label_27fab4;
        case 0x27fab8u: goto label_27fab8;
        case 0x27fabcu: goto label_27fabc;
        case 0x27fac0u: goto label_27fac0;
        case 0x27fac4u: goto label_27fac4;
        case 0x27fac8u: goto label_27fac8;
        case 0x27faccu: goto label_27facc;
        case 0x27fad0u: goto label_27fad0;
        case 0x27fad4u: goto label_27fad4;
        case 0x27fad8u: goto label_27fad8;
        case 0x27fadcu: goto label_27fadc;
        case 0x27fae0u: goto label_27fae0;
        case 0x27fae4u: goto label_27fae4;
        case 0x27fae8u: goto label_27fae8;
        case 0x27faecu: goto label_27faec;
        case 0x27faf0u: goto label_27faf0;
        case 0x27faf4u: goto label_27faf4;
        case 0x27faf8u: goto label_27faf8;
        case 0x27fafcu: goto label_27fafc;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb04u: goto label_27fb04;
        case 0x27fb08u: goto label_27fb08;
        case 0x27fb0cu: goto label_27fb0c;
        case 0x27fb10u: goto label_27fb10;
        case 0x27fb14u: goto label_27fb14;
        case 0x27fb18u: goto label_27fb18;
        case 0x27fb1cu: goto label_27fb1c;
        case 0x27fb20u: goto label_27fb20;
        case 0x27fb24u: goto label_27fb24;
        case 0x27fb28u: goto label_27fb28;
        case 0x27fb2cu: goto label_27fb2c;
        case 0x27fb30u: goto label_27fb30;
        case 0x27fb34u: goto label_27fb34;
        case 0x27fb38u: goto label_27fb38;
        case 0x27fb3cu: goto label_27fb3c;
        case 0x27fb40u: goto label_27fb40;
        case 0x27fb44u: goto label_27fb44;
        case 0x27fb48u: goto label_27fb48;
        case 0x27fb4cu: goto label_27fb4c;
        case 0x27fb50u: goto label_27fb50;
        case 0x27fb54u: goto label_27fb54;
        case 0x27fb58u: goto label_27fb58;
        case 0x27fb5cu: goto label_27fb5c;
        case 0x27fb60u: goto label_27fb60;
        case 0x27fb64u: goto label_27fb64;
        case 0x27fb68u: goto label_27fb68;
        case 0x27fb6cu: goto label_27fb6c;
        default: break;
    }

    ctx->pc = 0x27f3d0u;

label_27f3d0:
    // 0x27f3d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x27f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_27f3d4:
    // 0x27f3d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27f3d8:
    // 0x27f3d8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27f3dc:
    // 0x27f3dc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27f3e0:
    // 0x27f3e0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27f3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27f3e4:
    // 0x27f3e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27f3e8:
    // 0x27f3e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27f3ec:
    // 0x27f3ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27f3ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f3f0:
    // 0x27f3f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27f3f4:
    // 0x27f3f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27f3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27f3f8:
    // 0x27f3f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27f3fc:
    // 0x27f3fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27f3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27f400:
    // 0x27f400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27f404:
    // 0x27f404: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27f404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27f408:
    // 0x27f408: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x27f408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27f40c:
    // 0x27f40c: 0xc0a6af8  jal         func_29ABE0
label_27f410:
    if (ctx->pc == 0x27F410u) {
        ctx->pc = 0x27F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F40Cu;
        // 0x27f410: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F414u;
        goto label_27f414;
    }
    ctx->pc = 0x27F40Cu;
    SET_GPR_U32(ctx, 31, 0x27F414u);
    ctx->pc = 0x27F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F40Cu;
    // 0x27f410: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ABE0u, 0x27F40Cu, 0x27F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F414u;
label_27f414:
    // 0x27f414: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_27f418:
    if (ctx->pc == 0x27F418u) {
        ctx->pc = 0x27F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F414u;
        // 0x27f418: 0xae80092c  sw          $zero, 0x92C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F41Cu;
        goto label_27f41c;
    }
    ctx->pc = 0x27F414u;
    {
        const bool branch_taken_0x27f414 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F414u;
        // 0x27f418: 0xae80092c  sw          $zero, 0x92C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f414) {
            ctx->pc = 0x27F440u;
            goto label_27f440;
        }
    }
    ctx->pc = 0x27F41Cu;
label_27f41c:
    // 0x27f41c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27f420:
    // 0x27f420: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x27f420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_27f424:
    // 0x27f424: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x27f424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27f428:
    // 0x27f428: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x27f428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_27f42c:
    // 0x27f42c: 0xa3a200df  sb          $v0, 0xDF($sp)
    ctx->pc = 0x27f42cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 2));
label_27f430:
    // 0x27f430: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x27f430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_27f434:
    // 0x27f434: 0xa7a000dc  sh          $zero, 0xDC($sp)
    ctx->pc = 0x27f434u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 0));
label_27f438:
    // 0x27f438: 0xa3b300de  sb          $s3, 0xDE($sp)
    ctx->pc = 0x27f438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 19));
label_27f43c:
    // 0x27f43c: 0x0  nop
    ctx->pc = 0x27f43cu;
    // NOP
label_27f440:
    // 0x27f440: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x27f440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27f444:
    // 0x27f444: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27f448:
    // 0x27f448: 0x24420b9a  addiu       $v0, $v0, 0xB9A
    ctx->pc = 0x27f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2970));
label_27f44c:
    // 0x27f44c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x27f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_27f450:
    // 0x27f450: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27f450u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f454:
    // 0x27f454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27f458:
    // 0x27f458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f45c:
    // 0x27f45c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27f45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27f460:
    // 0x27f460: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x27f460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_27f464:
    // 0x27f464: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_27f468:
    if (ctx->pc == 0x27F468u) {
        ctx->pc = 0x27F46Cu;
        goto label_27f46c;
    }
    ctx->pc = 0x27F464u;
    {
        const bool branch_taken_0x27f464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f464) {
            ctx->pc = 0x27F528u;
            goto label_27f528;
        }
    }
    ctx->pc = 0x27F46Cu;
label_27f46c:
    // 0x27f46c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27f470:
    // 0x27f470: 0x24420b9b  addiu       $v0, $v0, 0xB9B
    ctx->pc = 0x27f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2971));
label_27f474:
    // 0x27f474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f478:
    // 0x27f478: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27f478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27f47c:
    // 0x27f47c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_27f480:
    if (ctx->pc == 0x27F480u) {
        ctx->pc = 0x27F484u;
        goto label_27f484;
    }
    ctx->pc = 0x27F47Cu;
    {
        const bool branch_taken_0x27f47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f47c) {
            ctx->pc = 0x27F528u;
            goto label_27f528;
        }
    }
    ctx->pc = 0x27F484u;
label_27f484:
    // 0x27f484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f488:
    // 0x27f488: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x27f488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_27f48c:
    // 0x27f48c: 0x304293f0  andi        $v0, $v0, 0x93F0
    ctx->pc = 0x27f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)37872);
label_27f490:
    // 0x27f490: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_27f494:
    if (ctx->pc == 0x27F494u) {
        ctx->pc = 0x27F498u;
        goto label_27f498;
    }
    ctx->pc = 0x27F490u;
    {
        const bool branch_taken_0x27f490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f490) {
            ctx->pc = 0x27F528u;
            goto label_27f528;
        }
    }
    ctx->pc = 0x27F498u;
label_27f498:
    // 0x27f498: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_27f49c:
    // 0x27f49c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_27f4a0:
    if (ctx->pc == 0x27F4A0u) {
        ctx->pc = 0x27F4A4u;
        goto label_27f4a4;
    }
    ctx->pc = 0x27F49Cu;
    {
        const bool branch_taken_0x27f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f49c) {
            ctx->pc = 0x27F528u;
            goto label_27f528;
        }
    }
    ctx->pc = 0x27F4A4u;
label_27f4a4:
    // 0x27f4a4: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x27f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_27f4a8:
    // 0x27f4a8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_27f4ac:
    // 0x27f4ac: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x27f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f4b0:
    // 0x27f4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f4b4:
    // 0x27f4b4: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x27f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27f4b8:
    // 0x27f4b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27f4b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27f4bc:
    // 0x27f4bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27f4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27f4c0:
    // 0x27f4c0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_27f4c4:
    if (ctx->pc == 0x27F4C4u) {
        ctx->pc = 0x27F4C8u;
        goto label_27f4c8;
    }
    ctx->pc = 0x27F4C0u;
    {
        const bool branch_taken_0x27f4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f4c0) {
            ctx->pc = 0x27F528u;
            goto label_27f528;
        }
    }
    ctx->pc = 0x27F4C8u;
label_27f4c8:
    // 0x27f4c8: 0x9463006a  lhu         $v1, 0x6A($v1)
    ctx->pc = 0x27f4c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
label_27f4cc:
    // 0x27f4cc: 0x3c024b18  lui         $v0, 0x4B18
    ctx->pc = 0x27f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19224 << 16));
label_27f4d0:
    // 0x27f4d0: 0x34429680  ori         $v0, $v0, 0x9680
    ctx->pc = 0x27f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38528);
label_27f4d4:
    // 0x27f4d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f4d8:
    // 0x27f4d8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27f4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27f4dc:
    // 0x27f4dc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_27f4e0:
    if (ctx->pc == 0x27F4E0u) {
        ctx->pc = 0x27F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4DCu;
        // 0x27f4e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F4E4u;
        goto label_27f4e4;
    }
    ctx->pc = 0x27F4DCu;
    {
        const bool branch_taken_0x27f4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4DCu;
        // 0x27f4e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4dc) {
            ctx->pc = 0x27F520u;
            goto label_27f520;
        }
    }
    ctx->pc = 0x27F4E4u;
label_27f4e4:
    // 0x27f4e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27f4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f4e8:
    // 0x27f4e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f4ec:
    // 0x27f4ec: 0x0  nop
    ctx->pc = 0x27f4ecu;
    // NOP
label_27f4f0:
    // 0x27f4f0: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x27f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f4f4:
    // 0x27f4f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27f4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27f4f8:
    // 0x27f4f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27f4fc:
    if (ctx->pc == 0x27F4FCu) {
        ctx->pc = 0x27F500u;
        goto label_27f500;
    }
    ctx->pc = 0x27F4F8u;
    {
        const bool branch_taken_0x27f4f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f4f8) {
            ctx->pc = 0x27F508u;
            goto label_27f508;
        }
    }
    ctx->pc = 0x27F500u;
label_27f500:
    // 0x27f500: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x27f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27f504:
    // 0x27f504: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x27f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f508:
    // 0x27f508: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x27f508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_27f50c:
    // 0x27f50c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x27f50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27f510:
    // 0x27f510: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_27f514:
    // 0x27f514: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_27f518:
    if (ctx->pc == 0x27F518u) {
        ctx->pc = 0x27F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F514u;
        // 0x27f518: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F51Cu;
        goto label_27f51c;
    }
    ctx->pc = 0x27F514u;
    {
        const bool branch_taken_0x27f514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F514u;
        // 0x27f518: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f514) {
            ctx->pc = 0x27F4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f4f0;
        }
    }
    ctx->pc = 0x27F51Cu;
label_27f51c:
    // 0x27f51c: 0x0  nop
    ctx->pc = 0x27f51cu;
    // NOP
label_27f520:
    // 0x27f520: 0xe6810024  swc1        $f1, 0x24($s4)
    ctx->pc = 0x27f520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_27f524:
    // 0x27f524: 0x0  nop
    ctx->pc = 0x27f524u;
    // NOP
label_27f528:
    // 0x27f528: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x27f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_27f52c:
    // 0x27f52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f530:
    // 0x27f530: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x27f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_27f534:
    // 0x27f534: 0x304293f0  andi        $v0, $v0, 0x93F0
    ctx->pc = 0x27f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)37872);
label_27f538:
    // 0x27f538: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27f538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_27f53c:
    // 0x27f53c: 0xae8306ac  sw          $v1, 0x6AC($s4)
    ctx->pc = 0x27f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 3));
label_27f540:
    // 0x27f540: 0x8e8306b4  lw          $v1, 0x6B4($s4)
    ctx->pc = 0x27f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1716)));
label_27f544:
    // 0x27f544: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27f544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_27f548:
    // 0x27f548: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27f54c:
    if (ctx->pc == 0x27F54Cu) {
        ctx->pc = 0x27F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F548u;
        // 0x27f54c: 0xae8306b4  sw          $v1, 0x6B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F550u;
        goto label_27f550;
    }
    ctx->pc = 0x27F548u;
    {
        const bool branch_taken_0x27f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F548u;
        // 0x27f54c: 0xae8306b4  sw          $v1, 0x6B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f548) {
            ctx->pc = 0x27F568u;
            goto label_27f568;
        }
    }
    ctx->pc = 0x27F550u;
label_27f550:
    // 0x27f550: 0x8e8206ac  lw          $v0, 0x6AC($s4)
    ctx->pc = 0x27f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_27f554:
    // 0x27f554: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_27f558:
    // 0x27f558: 0xae8206ac  sw          $v0, 0x6AC($s4)
    ctx->pc = 0x27f558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 2));
label_27f55c:
    // 0x27f55c: 0x8e8206b4  lw          $v0, 0x6B4($s4)
    ctx->pc = 0x27f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1716)));
label_27f560:
    // 0x27f560: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_27f564:
    // 0x27f564: 0xae8206b4  sw          $v0, 0x6B4($s4)
    ctx->pc = 0x27f564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 2));
label_27f568:
    // 0x27f568: 0x928307d6  lbu         $v1, 0x7D6($s4)
    ctx->pc = 0x27f568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2006)));
label_27f56c:
    // 0x27f56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f570:
    // 0x27f570: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_27f574:
    if (ctx->pc == 0x27F574u) {
        ctx->pc = 0x27F578u;
        goto label_27f578;
    }
    ctx->pc = 0x27F570u;
    {
        const bool branch_taken_0x27f570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f570) {
            ctx->pc = 0x27F580u;
            goto label_27f580;
        }
    }
    ctx->pc = 0x27F578u;
label_27f578:
    // 0x27f578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f57c:
    // 0x27f57c: 0xa28207d6  sb          $v0, 0x7D6($s4)
    ctx->pc = 0x27f57cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2006), (uint8_t)GPR_U32(ctx, 2));
label_27f580:
    // 0x27f580: 0x26840530  addiu       $a0, $s4, 0x530
    ctx->pc = 0x27f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1328));
label_27f584:
    // 0x27f584: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27f584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f588:
    // 0x27f588: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27f588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f58c:
    // 0x27f58c: 0xc0b2a88  jal         func_2CAA20
label_27f590:
    if (ctx->pc == 0x27F590u) {
        ctx->pc = 0x27F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F58Cu;
        // 0x27f590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F594u;
        goto label_27f594;
    }
    ctx->pc = 0x27F58Cu;
    SET_GPR_U32(ctx, 31, 0x27F594u);
    ctx->pc = 0x27F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F58Cu;
    // 0x27f590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA20u, 0x27F58Cu, 0x27F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F594u;
label_27f594:
    // 0x27f594: 0x8e9904d4  lw          $t9, 0x4D4($s4)
    ctx->pc = 0x27f594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1236)));
label_27f598:
    // 0x27f598: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27f598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27f59c:
    // 0x27f59c: 0x320f809  jalr        $t9
label_27f5a0:
    if (ctx->pc == 0x27F5A0u) {
        ctx->pc = 0x27F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F59Cu;
        // 0x27f5a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F5A4u;
        goto label_27f5a4;
    }
    ctx->pc = 0x27F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F5A4u);
        ctx->pc = 0x27F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F59Cu;
        // 0x27f5a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F59Cu, 0x27F5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F5A4u;
label_27f5a4:
    // 0x27f5a4: 0x8e9904d4  lw          $t9, 0x4D4($s4)
    ctx->pc = 0x27f5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1236)));
label_27f5a8:
    // 0x27f5a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x27f5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_27f5ac:
    // 0x27f5ac: 0x320f809  jalr        $t9
label_27f5b0:
    if (ctx->pc == 0x27F5B0u) {
        ctx->pc = 0x27F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5ACu;
        // 0x27f5b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F5B4u;
        goto label_27f5b4;
    }
    ctx->pc = 0x27F5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F5B4u);
        ctx->pc = 0x27F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5ACu;
        // 0x27f5b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5ACu, 0x27F5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F5B4u;
label_27f5b4:
    // 0x27f5b4: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x27f5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_27f5b8:
    // 0x27f5b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_27f5bc:
    // 0x27f5bc: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_27f5c0:
    if (ctx->pc == 0x27F5C0u) {
        ctx->pc = 0x27F5C4u;
        goto label_27f5c4;
    }
    ctx->pc = 0x27F5BCu;
    {
        const bool branch_taken_0x27f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5bc) {
            ctx->pc = 0x27F710u;
            goto label_27f710;
        }
    }
    ctx->pc = 0x27F5C4u;
label_27f5c4:
    // 0x27f5c4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_27f5c8:
    if (ctx->pc == 0x27F5C8u) {
        ctx->pc = 0x27F5CCu;
        goto label_27f5cc;
    }
    ctx->pc = 0x27F5C4u;
    {
        const bool branch_taken_0x27f5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5c4) {
            ctx->pc = 0x27F610u;
            goto label_27f610;
        }
    }
    ctx->pc = 0x27F5CCu;
label_27f5cc:
    // 0x27f5cc: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x27f5ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_27f5d0:
    // 0x27f5d0: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
label_27f5d4:
    // 0x27f5d4: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x27f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
label_27f5d8:
    // 0x27f5d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f5dc:
    // 0x27f5dc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27f5e0:
    // 0x27f5e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27f5e4:
    // 0x27f5e4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_27f5e8:
    // 0x27f5e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f5ec:
    // 0x27f5ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27f5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27f5f0:
    // 0x27f5f0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_27f5f4:
    if (ctx->pc == 0x27F5F4u) {
        ctx->pc = 0x27F5F8u;
        goto label_27f5f8;
    }
    ctx->pc = 0x27F5F0u;
    {
        const bool branch_taken_0x27f5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f5f0) {
            ctx->pc = 0x27F610u;
            goto label_27f610;
        }
    }
    ctx->pc = 0x27F5F8u;
label_27f5f8:
    // 0x27f5f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f5fc:
    // 0x27f5fc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x27f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_27f600:
    // 0x27f600: 0xc0414d0  jal         func_105340
label_27f604:
    if (ctx->pc == 0x27F604u) {
        ctx->pc = 0x27F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F600u;
        // 0x27f604: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F608u;
        goto label_27f608;
    }
    ctx->pc = 0x27F600u;
    SET_GPR_U32(ctx, 31, 0x27F608u);
    ctx->pc = 0x27F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F600u;
    // 0x27f604: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x27F600u, 0x27F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F608u;
label_27f608:
    // 0x27f608: 0x10000005  b           . + 4 + (0x5 << 2)
label_27f60c:
    if (ctx->pc == 0x27F60Cu) {
        ctx->pc = 0x27F610u;
        goto label_27f610;
    }
    ctx->pc = 0x27F608u;
    {
        const bool branch_taken_0x27f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f608) {
            ctx->pc = 0x27F620u;
            goto label_27f620;
        }
    }
    ctx->pc = 0x27F610u;
label_27f610:
    // 0x27f610: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f614:
    // 0x27f614: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x27f614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_27f618:
    // 0x27f618: 0xc0414d0  jal         func_105340
label_27f61c:
    if (ctx->pc == 0x27F61Cu) {
        ctx->pc = 0x27F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F618u;
        // 0x27f61c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F620u;
        goto label_27f620;
    }
    ctx->pc = 0x27F618u;
    SET_GPR_U32(ctx, 31, 0x27F620u);
    ctx->pc = 0x27F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F618u;
    // 0x27f61c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x27F618u, 0x27F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F620u;
label_27f620:
    // 0x27f620: 0x27b50108  addiu       $s5, $sp, 0x108
    ctx->pc = 0x27f620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_27f624:
    // 0x27f624: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x27f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_27f628:
    // 0x27f628: 0xc047b88  jal         func_11EE20
label_27f62c:
    if (ctx->pc == 0x27F62Cu) {
        ctx->pc = 0x27F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F628u;
        // 0x27f62c: 0xc7ac0100  lwc1        $f12, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F630u;
        goto label_27f630;
    }
    ctx->pc = 0x27F628u;
    SET_GPR_U32(ctx, 31, 0x27F630u);
    ctx->pc = 0x27F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F628u;
    // 0x27f62c: 0xc7ac0100  lwc1        $f12, 0x100($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x27F628u, 0x27F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F630u;
label_27f630:
    // 0x27f630: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x27f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27f634:
    // 0x27f634: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x27f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_27f638:
    // 0x27f638: 0xc047b88  jal         func_11EE20
label_27f63c:
    if (ctx->pc == 0x27F63Cu) {
        ctx->pc = 0x27F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F638u;
        // 0x27f63c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F640u;
        goto label_27f640;
    }
    ctx->pc = 0x27F638u;
    SET_GPR_U32(ctx, 31, 0x27F640u);
    ctx->pc = 0x27F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F638u;
    // 0x27f63c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x27F638u, 0x27F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F640u;
label_27f640:
    // 0x27f640: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x27f640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_27f644:
    // 0x27f644: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27f644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_27f648:
    // 0x27f648: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27f648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f64c:
    // 0x27f64c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27f650:
    // 0x27f650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f654:
    // 0x27f654: 0x0  nop
    ctx->pc = 0x27f654u;
    // NOP
label_27f658:
    // 0x27f658: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27f658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27f65c:
    // 0x27f65c: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x27f65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27f660:
    // 0x27f660: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27f660u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27f664:
    // 0x27f664: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27f664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27f668:
    // 0x27f668: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x27f668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_27f66c:
    // 0x27f66c: 0x0  nop
    ctx->pc = 0x27f66cu;
    // NOP
label_27f670:
    // 0x27f670: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x27f670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_27f674:
    // 0x27f674: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x27f674u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_27f678:
    // 0x27f678: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x27f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_27f67c:
    // 0x27f67c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x27f67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_27f680:
    // 0x27f680: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x27f680u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_27f684:
    // 0x27f684: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27f684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27f688:
    // 0x27f688: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x27f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_27f68c:
    // 0x27f68c: 0xc0967cc  jal         func_259F30
label_27f690:
    if (ctx->pc == 0x27F690u) {
        ctx->pc = 0x27F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F68Cu;
        // 0x27f690: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F694u;
        goto label_27f694;
    }
    ctx->pc = 0x27F68Cu;
    SET_GPR_U32(ctx, 31, 0x27F694u);
    ctx->pc = 0x27F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F68Cu;
    // 0x27f690: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x27F68Cu, 0x27F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F694u;
label_27f694:
    // 0x27f694: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x27f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27f698:
    // 0x27f698: 0xc047b88  jal         func_11EE20
label_27f69c:
    if (ctx->pc == 0x27F69Cu) {
        ctx->pc = 0x27F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F698u;
        // 0x27f69c: 0xc6ad0000  lwc1        $f13, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6A0u;
        goto label_27f6a0;
    }
    ctx->pc = 0x27F698u;
    SET_GPR_U32(ctx, 31, 0x27F6A0u);
    ctx->pc = 0x27F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F698u;
    // 0x27f69c: 0xc6ad0000  lwc1        $f13, 0x0($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x27F698u, 0x27F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6A0u;
label_27f6a0:
    // 0x27f6a0: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x27f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_27f6a4:
    // 0x27f6a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_27f6a8:
    // 0x27f6a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27f6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f6ac:
    // 0x27f6ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27f6b0:
    // 0x27f6b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f6b4:
    // 0x27f6b4: 0x0  nop
    ctx->pc = 0x27f6b4u;
    // NOP
label_27f6b8:
    // 0x27f6b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27f6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27f6bc:
    // 0x27f6bc: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x27f6bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_27f6c0:
    // 0x27f6c0: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x27f6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27f6c4:
    // 0x27f6c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27f6c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27f6c8:
    // 0x27f6c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27f6c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27f6cc:
    // 0x27f6cc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x27f6ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_27f6d0:
    // 0x27f6d0: 0x0  nop
    ctx->pc = 0x27f6d0u;
    // NOP
label_27f6d4:
    // 0x27f6d4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x27f6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_27f6d8:
    // 0x27f6d8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x27f6d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_27f6dc:
    // 0x27f6dc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x27f6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_27f6e0:
    // 0x27f6e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x27f6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_27f6e4:
    // 0x27f6e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x27f6e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_27f6e8:
    // 0x27f6e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f6ec:
    // 0x27f6ec: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x27f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
label_27f6f0:
    // 0x27f6f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27f6f4:
    // 0x27f6f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_27f6f8:
    // 0x27f6f8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x27f6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_27f6fc:
    // 0x27f6fc: 0xc0967cc  jal         func_259F30
label_27f700:
    if (ctx->pc == 0x27F700u) {
        ctx->pc = 0x27F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6FCu;
        // 0x27f700: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F704u;
        goto label_27f704;
    }
    ctx->pc = 0x27F6FCu;
    SET_GPR_U32(ctx, 31, 0x27F704u);
    ctx->pc = 0x27F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6FCu;
    // 0x27f700: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x27F6FCu, 0x27F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F704u;
label_27f704:
    // 0x27f704: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x27f704u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
label_27f708:
    // 0x27f708: 0x10000037  b           . + 4 + (0x37 << 2)
label_27f70c:
    if (ctx->pc == 0x27F70Cu) {
        ctx->pc = 0x27F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F708u;
        // 0x27f70c: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F710u;
        goto label_27f710;
    }
    ctx->pc = 0x27F708u;
    {
        const bool branch_taken_0x27f708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F708u;
        // 0x27f70c: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f708) {
            ctx->pc = 0x27F7E8u;
            goto label_27f7e8;
        }
    }
    ctx->pc = 0x27F710u;
label_27f710:
    // 0x27f710: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_27f714:
    if (ctx->pc == 0x27F714u) {
        ctx->pc = 0x27F718u;
        goto label_27f718;
    }
    ctx->pc = 0x27F710u;
    {
        const bool branch_taken_0x27f710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f710) {
            ctx->pc = 0x27F788u;
            goto label_27f788;
        }
    }
    ctx->pc = 0x27F718u;
label_27f718:
    // 0x27f718: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x27f718u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_27f71c:
    // 0x27f71c: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
label_27f720:
    // 0x27f720: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x27f720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
label_27f724:
    // 0x27f724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f728:
    // 0x27f728: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27f728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27f72c:
    // 0x27f72c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27f730:
    // 0x27f730: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x27f730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_27f734:
    // 0x27f734: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27f738:
    // 0x27f738: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27f738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27f73c:
    // 0x27f73c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_27f740:
    if (ctx->pc == 0x27F740u) {
        ctx->pc = 0x27F744u;
        goto label_27f744;
    }
    ctx->pc = 0x27F73Cu;
    {
        const bool branch_taken_0x27f73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f73c) {
            ctx->pc = 0x27F788u;
            goto label_27f788;
        }
    }
    ctx->pc = 0x27F744u;
label_27f744:
    // 0x27f744: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x27f744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
label_27f748:
    // 0x27f748: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27f74c:
    // 0x27f74c: 0x24c60950  addiu       $a2, $a2, 0x950
    ctx->pc = 0x27f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2384));
label_27f750:
    // 0x27f750: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_27f754:
    // 0x27f754: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x27f754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_27f758:
    // 0x27f758: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27f758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27f75c:
    // 0x27f75c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x27f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_27f760:
    // 0x27f760: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x27f760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_27f764:
    // 0x27f764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27f764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27f768:
    // 0x27f768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f76c:
    // 0x27f76c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27f770:
    // 0x27f770: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27f774:
    // 0x27f774: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x27f774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_27f778:
    // 0x27f778: 0xc096838  jal         func_25A0E0
label_27f77c:
    if (ctx->pc == 0x27F77Cu) {
        ctx->pc = 0x27F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F778u;
        // 0x27f77c: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F780u;
        goto label_27f780;
    }
    ctx->pc = 0x27F778u;
    SET_GPR_U32(ctx, 31, 0x27F780u);
    ctx->pc = 0x27F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F778u;
    // 0x27f77c: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x27F778u, 0x27F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F780u;
label_27f780:
    // 0x27f780: 0x1000000d  b           . + 4 + (0xD << 2)
label_27f784:
    if (ctx->pc == 0x27F784u) {
        ctx->pc = 0x27F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F780u;
        // 0x27f784: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F788u;
        goto label_27f788;
    }
    ctx->pc = 0x27F780u;
    {
        const bool branch_taken_0x27f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F780u;
        // 0x27f784: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f780) {
            ctx->pc = 0x27F7B8u;
            goto label_27f7b8;
        }
    }
    ctx->pc = 0x27F788u;
label_27f788:
    // 0x27f788: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x27f788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_27f78c:
    // 0x27f78c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x27f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_27f790:
    // 0x27f790: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x27f790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_27f794:
    // 0x27f794: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x27f794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_27f798:
    // 0x27f798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27f798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f79c:
    // 0x27f79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f7a0:
    // 0x27f7a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x27f7a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f7a4:
    // 0x27f7a4: 0x0  nop
    ctx->pc = 0x27f7a4u;
    // NOP
label_27f7a8:
    // 0x27f7a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27f7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27f7ac:
    // 0x27f7ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27f7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27f7b0:
    // 0x27f7b0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x27f7b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27f7b4:
    // 0x27f7b4: 0x0  nop
    ctx->pc = 0x27f7b4u;
    // NOP
label_27f7b8:
    // 0x27f7b8: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x27f7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_27f7bc:
    // 0x27f7bc: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x27f7bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_27f7c0:
    // 0x27f7c0: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x27f7c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27f7c4:
    // 0x27f7c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27f7c8:
    // 0x27f7c8: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x27f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
label_27f7cc:
    // 0x27f7cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27f7d0:
    // 0x27f7d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_27f7d4:
    // 0x27f7d4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x27f7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_27f7d8:
    // 0x27f7d8: 0xc0967cc  jal         func_259F30
label_27f7dc:
    if (ctx->pc == 0x27F7DCu) {
        ctx->pc = 0x27F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7D8u;
        // 0x27f7dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F7E0u;
        goto label_27f7e0;
    }
    ctx->pc = 0x27F7D8u;
    SET_GPR_U32(ctx, 31, 0x27F7E0u);
    ctx->pc = 0x27F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7D8u;
    // 0x27f7dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x27F7D8u, 0x27F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7E0u;
label_27f7e0:
    // 0x27f7e0: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x27f7e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
label_27f7e4:
    // 0x27f7e4: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x27f7e4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
label_27f7e8:
    // 0x27f7e8: 0xaf918930  sw          $s1, -0x76D0($gp)
    ctx->pc = 0x27f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 17));
label_27f7ec:
    // 0x27f7ec: 0xaf948934  sw          $s4, -0x76CC($gp)
    ctx->pc = 0x27f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 20));
label_27f7f0:
    // 0x27f7f0: 0x15bc3c  dsll32      $s7, $s5, 16
    ctx->pc = 0x27f7f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << (32 + 16));
label_27f7f4:
    // 0x27f7f4: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x27f7f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27f7f8:
    // 0x27f7f8: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x27f7f8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
label_27f7fc:
    // 0x27f7fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27f800:
    // 0x27f800: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x27f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_27f804:
    // 0x27f804: 0xa7828938  sh          $v0, -0x76C8($gp)
    ctx->pc = 0x27f804u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936888), (uint16_t)GPR_U32(ctx, 2));
label_27f808:
    // 0x27f808: 0xc04150c  jal         func_105430
label_27f80c:
    if (ctx->pc == 0x27F80Cu) {
        ctx->pc = 0x27F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F808u;
        // 0x27f80c: 0xe794893c  swc1        $f20, -0x76C4($gp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F810u;
        goto label_27f810;
    }
    ctx->pc = 0x27F808u;
    SET_GPR_U32(ctx, 31, 0x27F810u);
    ctx->pc = 0x27F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F808u;
    // 0x27f80c: 0xe794893c  swc1        $f20, -0x76C4($gp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x27F808u, 0x27F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F810u;
label_27f810:
    // 0x27f810: 0xc09681c  jal         func_25A070
label_27f814:
    if (ctx->pc == 0x27F814u) {
        ctx->pc = 0x27F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F810u;
        // 0x27f814: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F818u;
        goto label_27f818;
    }
    ctx->pc = 0x27F810u;
    SET_GPR_U32(ctx, 31, 0x27F818u);
    ctx->pc = 0x27F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F810u;
    // 0x27f814: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x27F810u, 0x27F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F818u;
label_27f818:
    // 0x27f818: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x27f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27f81c:
    // 0x27f81c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27f81cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_27f820:
    // 0x27f820: 0xc041588  jal         func_105620
label_27f824:
    if (ctx->pc == 0x27F824u) {
        ctx->pc = 0x27F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F820u;
        // 0x27f824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F828u;
        goto label_27f828;
    }
    ctx->pc = 0x27F820u;
    SET_GPR_U32(ctx, 31, 0x27F828u);
    ctx->pc = 0x27F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F820u;
    // 0x27f824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x27F820u, 0x27F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F828u;
label_27f828:
    // 0x27f828: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f82c:
    // 0x27f82c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f830:
    // 0x27f830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27f834:
    // 0x27f834: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x27f834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27f838:
    // 0x27f838: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27f838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f83c:
    // 0x27f83c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x27f83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_27f840:
    // 0x27f840: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f844:
    // 0x27f844: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x27f844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_27f848:
    // 0x27f848: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f84c:
    // 0x27f84c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x27f84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_27f850:
    // 0x27f850: 0xc041442  jal         func_105108
label_27f854:
    if (ctx->pc == 0x27F854u) {
        ctx->pc = 0x27F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F850u;
        // 0x27f854: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F858u;
        goto label_27f858;
    }
    ctx->pc = 0x27F850u;
    SET_GPR_U32(ctx, 31, 0x27F858u);
    ctx->pc = 0x27F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F850u;
    // 0x27f854: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27F850u, 0x27F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F858u;
label_27f858:
    // 0x27f858: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x27f858u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27f85c:
    // 0x27f85c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27f860:
    // 0x27f860: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f864:
    // 0x27f864: 0x24420b80  addiu       $v0, $v0, 0xB80
    ctx->pc = 0x27f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2944));
label_27f868:
    // 0x27f868: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x27f868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_27f86c:
    // 0x27f86c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x27f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_27f870:
    // 0x27f870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27f874:
    // 0x27f874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f878:
    // 0x27f878: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x27f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27f87c:
    // 0x27f87c: 0xc0414dc  jal         func_105370
label_27f880:
    if (ctx->pc == 0x27F880u) {
        ctx->pc = 0x27F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F87Cu;
        // 0x27f880: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F884u;
        goto label_27f884;
    }
    ctx->pc = 0x27F87Cu;
    SET_GPR_U32(ctx, 31, 0x27F884u);
    ctx->pc = 0x27F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F87Cu;
    // 0x27f880: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x27F87Cu, 0x27F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F884u;
label_27f884:
    // 0x27f884: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x27f884u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27f888:
    // 0x27f888: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27f88c:
    // 0x27f88c: 0x24420b9b  addiu       $v0, $v0, 0xB9B
    ctx->pc = 0x27f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2971));
label_27f890:
    // 0x27f890: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f894:
    // 0x27f894: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x27f894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_27f898:
    // 0x27f898: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27f898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f89c:
    // 0x27f89c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27f8a0:
    // 0x27f8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f8a4:
    // 0x27f8a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27f8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27f8a8:
    // 0x27f8a8: 0x10450043  beq         $v0, $a1, . + 4 + (0x43 << 2)
label_27f8ac:
    if (ctx->pc == 0x27F8ACu) {
        ctx->pc = 0x27F8B0u;
        goto label_27f8b0;
    }
    ctx->pc = 0x27F8A8u;
    {
        const bool branch_taken_0x27f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x27f8a8) {
            ctx->pc = 0x27F9B8u;
            goto label_27f9b8;
        }
    }
    ctx->pc = 0x27F8B0u;
label_27f8b0:
    // 0x27f8b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27f8b4:
    // 0x27f8b4: 0x24426300  addiu       $v0, $v0, 0x6300
    ctx->pc = 0x27f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25344));
label_27f8b8:
    // 0x27f8b8: 0x53b021  addu        $s6, $v0, $s3
    ctx->pc = 0x27f8b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_27f8bc:
    // 0x27f8bc: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x27f8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_27f8c0:
    // 0x27f8c0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_27f8c4:
    if (ctx->pc == 0x27F8C4u) {
        ctx->pc = 0x27F8C8u;
        goto label_27f8c8;
    }
    ctx->pc = 0x27F8C0u;
    {
        const bool branch_taken_0x27f8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8c0) {
            ctx->pc = 0x27F9B8u;
            goto label_27f9b8;
        }
    }
    ctx->pc = 0x27F8C8u;
label_27f8c8:
    // 0x27f8c8: 0x9243000f  lbu         $v1, 0xF($s2)
    ctx->pc = 0x27f8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_27f8cc:
    // 0x27f8cc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x27f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_27f8d0:
    // 0x27f8d0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_27f8d4:
    if (ctx->pc == 0x27F8D4u) {
        ctx->pc = 0x27F8D8u;
        goto label_27f8d8;
    }
    ctx->pc = 0x27F8D0u;
    {
        const bool branch_taken_0x27f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f8d0) {
            ctx->pc = 0x27F9B8u;
            goto label_27f9b8;
        }
    }
    ctx->pc = 0x27F8D8u;
label_27f8d8:
    // 0x27f8d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27f8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_27f8dc:
    // 0x27f8dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27f8e0:
    if (ctx->pc == 0x27F8E0u) {
        ctx->pc = 0x27F8E4u;
        goto label_27f8e4;
    }
    ctx->pc = 0x27F8DCu;
    {
        const bool branch_taken_0x27f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8dc) {
            ctx->pc = 0x27F900u;
            goto label_27f900;
        }
    }
    ctx->pc = 0x27F8E4u;
label_27f8e4:
    // 0x27f8e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x27f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_27f8e8:
    // 0x27f8e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27f8ec:
    // 0x27f8ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27f8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27f8f0:
    // 0x27f8f0: 0xc0414dc  jal         func_105370
label_27f8f4:
    if (ctx->pc == 0x27F8F4u) {
        ctx->pc = 0x27F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8F0u;
        // 0x27f8f4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F8F8u;
        goto label_27f8f8;
    }
    ctx->pc = 0x27F8F0u;
    SET_GPR_U32(ctx, 31, 0x27F8F8u);
    ctx->pc = 0x27F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8F0u;
    // 0x27f8f4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x27F8F0u, 0x27F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8F8u;
label_27f8f8:
    // 0x27f8f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_27f8fc:
    if (ctx->pc == 0x27F8FCu) {
        ctx->pc = 0x27F900u;
        goto label_27f900;
    }
    ctx->pc = 0x27F8F8u;
    {
        const bool branch_taken_0x27f8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8f8) {
            ctx->pc = 0x27F958u;
            goto label_27f958;
        }
    }
    ctx->pc = 0x27F900u;
label_27f900:
    // 0x27f900: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_27f904:
    if (ctx->pc == 0x27F904u) {
        ctx->pc = 0x27F908u;
        goto label_27f908;
    }
    ctx->pc = 0x27F900u;
    {
        const bool branch_taken_0x27f900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f900) {
            ctx->pc = 0x27F948u;
            goto label_27f948;
        }
    }
    ctx->pc = 0x27F908u;
label_27f908:
    // 0x27f908: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x27f908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_27f90c:
    // 0x27f90c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_27f910:
    // 0x27f910: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x27f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
label_27f914:
    // 0x27f914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27f914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27f918:
    // 0x27f918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f91c:
    // 0x27f91c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27f920:
    // 0x27f920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f924:
    // 0x27f924: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27f924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27f928:
    // 0x27f928: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
label_27f92c:
    if (ctx->pc == 0x27F92Cu) {
        ctx->pc = 0x27F930u;
        goto label_27f930;
    }
    ctx->pc = 0x27F928u;
    {
        const bool branch_taken_0x27f928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x27f928) {
            ctx->pc = 0x27F948u;
            goto label_27f948;
        }
    }
    ctx->pc = 0x27F930u;
label_27f930:
    // 0x27f930: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x27f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_27f934:
    // 0x27f934: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27f938:
    // 0x27f938: 0xc0414d0  jal         func_105340
label_27f93c:
    if (ctx->pc == 0x27F93Cu) {
        ctx->pc = 0x27F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F938u;
        // 0x27f93c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F940u;
        goto label_27f940;
    }
    ctx->pc = 0x27F938u;
    SET_GPR_U32(ctx, 31, 0x27F940u);
    ctx->pc = 0x27F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F938u;
    // 0x27f93c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x27F938u, 0x27F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F940u;
label_27f940:
    // 0x27f940: 0x10000005  b           . + 4 + (0x5 << 2)
label_27f944:
    if (ctx->pc == 0x27F944u) {
        ctx->pc = 0x27F948u;
        goto label_27f948;
    }
    ctx->pc = 0x27F940u;
    {
        const bool branch_taken_0x27f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f940) {
            ctx->pc = 0x27F958u;
            goto label_27f958;
        }
    }
    ctx->pc = 0x27F948u;
label_27f948:
    // 0x27f948: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27f94c:
    // 0x27f94c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x27f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_27f950:
    // 0x27f950: 0xc0414d0  jal         func_105340
label_27f954:
    if (ctx->pc == 0x27F954u) {
        ctx->pc = 0x27F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F950u;
        // 0x27f954: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F958u;
        goto label_27f958;
    }
    ctx->pc = 0x27F950u;
    SET_GPR_U32(ctx, 31, 0x27F958u);
    ctx->pc = 0x27F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F950u;
    // 0x27f954: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x27F950u, 0x27F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F958u;
label_27f958:
    // 0x27f958: 0xc7ad00a8  lwc1        $f13, 0xA8($sp)
    ctx->pc = 0x27f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_27f95c:
    // 0x27f95c: 0xc047b88  jal         func_11EE20
label_27f960:
    if (ctx->pc == 0x27F960u) {
        ctx->pc = 0x27F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F95Cu;
        // 0x27f960: 0xc7ac00a0  lwc1        $f12, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F964u;
        goto label_27f964;
    }
    ctx->pc = 0x27F95Cu;
    SET_GPR_U32(ctx, 31, 0x27F964u);
    ctx->pc = 0x27F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F95Cu;
    // 0x27f960: 0xc7ac00a0  lwc1        $f12, 0xA0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x27F95Cu, 0x27F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F964u;
label_27f964:
    // 0x27f964: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x27f964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_27f968:
    // 0x27f968: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x27f968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_27f96c:
    // 0x27f96c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27f96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f970:
    // 0x27f970: 0x868500c2  lh          $a1, 0xC2($s4)
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
label_27f974:
    // 0x27f974: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27f974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27f978:
    // 0x27f978: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x27f978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_27f97c:
    // 0x27f97c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x27f97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_27f980:
    // 0x27f980: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x27f980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27f984:
    // 0x27f984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27f984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f988:
    // 0x27f988: 0x0  nop
    ctx->pc = 0x27f988u;
    // NOP
label_27f98c:
    // 0x27f98c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27f98cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27f990:
    // 0x27f990: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27f990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27f994:
    // 0x27f994: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27f994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27f998:
    // 0x27f998: 0x0  nop
    ctx->pc = 0x27f998u;
    // NOP
label_27f99c:
    // 0x27f99c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_27f9a0:
    // 0x27f9a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27f9a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_27f9a4:
    // 0x27f9a4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_27f9a8:
    // 0x27f9a8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x27f9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_27f9ac:
    // 0x27f9ac: 0xc0967e0  jal         func_259F80
label_27f9b0:
    if (ctx->pc == 0x27F9B0u) {
        ctx->pc = 0x27F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9ACu;
        // 0x27f9b0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F9B4u;
        goto label_27f9b4;
    }
    ctx->pc = 0x27F9ACu;
    SET_GPR_U32(ctx, 31, 0x27F9B4u);
    ctx->pc = 0x27F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9ACu;
    // 0x27f9b0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F80u, 0x27F9ACu, 0x27F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9B4u;
label_27f9b4:
    // 0x27f9b4: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x27f9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
label_27f9b8:
    // 0x27f9b8: 0xc096a08  jal         func_25A820
label_27f9bc:
    if (ctx->pc == 0x27F9BCu) {
        ctx->pc = 0x27F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9B8u;
        // 0x27f9bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F9C0u;
        goto label_27f9c0;
    }
    ctx->pc = 0x27F9B8u;
    SET_GPR_U32(ctx, 31, 0x27F9C0u);
    ctx->pc = 0x27F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9B8u;
    // 0x27f9bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x27F9B8u, 0x27F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9C0u;
label_27f9c0:
    // 0x27f9c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27f9c4:
    // 0x27f9c4: 0xc096a00  jal         func_25A800
label_27f9c8:
    if (ctx->pc == 0x27F9C8u) {
        ctx->pc = 0x27F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C4u;
        // 0x27f9c8: 0xa2820838  sb          $v0, 0x838($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F9CCu;
        goto label_27f9cc;
    }
    ctx->pc = 0x27F9C4u;
    SET_GPR_U32(ctx, 31, 0x27F9CCu);
    ctx->pc = 0x27F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9C4u;
    // 0x27f9c8: 0xa2820838  sb          $v0, 0x838($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 2104), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A800u, 0x27F9C4u, 0x27F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9CCu;
label_27f9cc:
    // 0x27f9cc: 0x26e3fc00  addiu       $v1, $s7, -0x400
    ctx->pc = 0x27f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966272));
label_27f9d0:
    // 0x27f9d0: 0xa2820839  sb          $v0, 0x839($s4)
    ctx->pc = 0x27f9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2105), (uint8_t)GPR_U32(ctx, 2));
label_27f9d4:
    // 0x27f9d4: 0x30620fff  andi        $v0, $v1, 0xFFF
    ctx->pc = 0x27f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_27f9d8:
    // 0x27f9d8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x27f9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_27f9dc:
    // 0x27f9dc: 0xc096a00  jal         func_25A800
label_27f9e0:
    if (ctx->pc == 0x27F9E0u) {
        ctx->pc = 0x27F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9DCu;
        // 0x27f9e0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F9E4u;
        goto label_27f9e4;
    }
    ctx->pc = 0x27F9DCu;
    SET_GPR_U32(ctx, 31, 0x27F9E4u);
    ctx->pc = 0x27F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9DCu;
    // 0x27f9e0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A800u, 0x27F9DCu, 0x27F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9E4u;
label_27f9e4:
    // 0x27f9e4: 0xa282083a  sb          $v0, 0x83A($s4)
    ctx->pc = 0x27f9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2106), (uint8_t)GPR_U32(ctx, 2));
label_27f9e8:
    // 0x27f9e8: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x27f9e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27f9ec:
    // 0x27f9ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_27f9f0:
    // 0x27f9f0: 0x24420b9b  addiu       $v0, $v0, 0xB9B
    ctx->pc = 0x27f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2971));
label_27f9f4:
    // 0x27f9f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x27f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_27f9f8:
    // 0x27f9f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f9fc:
    // 0x27f9fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27fa00:
    // 0x27fa00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27fa04:
    // 0x27fa04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27fa04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27fa08:
    // 0x27fa08: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_27fa0c:
    // 0x27fa0c: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x27fa0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_27fa10:
    // 0x27fa10: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_27fa14:
    if (ctx->pc == 0x27FA14u) {
        ctx->pc = 0x27FA18u;
        goto label_27fa18;
    }
    ctx->pc = 0x27FA10u;
    {
        const bool branch_taken_0x27fa10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fa10) {
            ctx->pc = 0x27FA48u;
            goto label_27fa48;
        }
    }
    ctx->pc = 0x27FA18u;
label_27fa18:
    // 0x27fa18: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x27fa18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_27fa1c:
    // 0x27fa1c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_27fa20:
    // 0x27fa20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27fa24:
    if (ctx->pc == 0x27FA24u) {
        ctx->pc = 0x27FA28u;
        goto label_27fa28;
    }
    ctx->pc = 0x27FA20u;
    {
        const bool branch_taken_0x27fa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa20) {
            ctx->pc = 0x27FA40u;
            goto label_27fa40;
        }
    }
    ctx->pc = 0x27FA28u;
label_27fa28:
    // 0x27fa28: 0x268407a0  addiu       $a0, $s4, 0x7A0
    ctx->pc = 0x27fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1952));
label_27fa2c:
    // 0x27fa2c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x27fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27fa30:
    // 0x27fa30: 0xc0414ca  jal         func_105328
label_27fa34:
    if (ctx->pc == 0x27FA34u) {
        ctx->pc = 0x27FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA30u;
        // 0x27fa34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FA38u;
        goto label_27fa38;
    }
    ctx->pc = 0x27FA30u;
    SET_GPR_U32(ctx, 31, 0x27FA38u);
    ctx->pc = 0x27FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA30u;
    // 0x27fa34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x27FA30u, 0x27FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA38u;
label_27fa38:
    // 0x27fa38: 0x10000003  b           . + 4 + (0x3 << 2)
label_27fa3c:
    if (ctx->pc == 0x27FA3Cu) {
        ctx->pc = 0x27FA40u;
        goto label_27fa40;
    }
    ctx->pc = 0x27FA38u;
    {
        const bool branch_taken_0x27fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa38) {
            ctx->pc = 0x27FA48u;
            goto label_27fa48;
        }
    }
    ctx->pc = 0x27FA40u;
label_27fa40:
    // 0x27fa40: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x27fa40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_27fa44:
    // 0x27fa44: 0x7e8207a0  sq          $v0, 0x7A0($s4)
    ctx->pc = 0x27fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 1952), GPR_VEC(ctx, 2));
label_27fa48:
    // 0x27fa48: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x27fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_27fa4c:
    // 0x27fa4c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x27fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27fa50:
    // 0x27fa50: 0x268407a0  addiu       $a0, $s4, 0x7A0
    ctx->pc = 0x27fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1952));
label_27fa54:
    // 0x27fa54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fa54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27fa58:
    // 0x27fa58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27fa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27fa5c:
    // 0x27fa5c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x27fa5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27fa60:
    // 0x27fa60: 0x0  nop
    ctx->pc = 0x27fa60u;
    // NOP
label_27fa64:
    // 0x27fa64: 0x0  nop
    ctx->pc = 0x27fa64u;
    // NOP
label_27fa68:
    // 0x27fa68: 0xc0414dc  jal         func_105370
label_27fa6c:
    if (ctx->pc == 0x27FA6Cu) {
        ctx->pc = 0x27FA70u;
        goto label_27fa70;
    }
    ctx->pc = 0x27FA68u;
    SET_GPR_U32(ctx, 31, 0x27FA70u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x27FA68u, 0x27FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA70u;
label_27fa70:
    // 0x27fa70: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x27fa70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27fa74:
    // 0x27fa74: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_27fa78:
    // 0x27fa78: 0x24840b9b  addiu       $a0, $a0, 0xB9B
    ctx->pc = 0x27fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2971));
label_27fa7c:
    // 0x27fa7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27fa80:
    // 0x27fa80: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x27fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_27fa84:
    // 0x27fa84: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x27fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_27fa88:
    // 0x27fa88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27fa8c:
    // 0x27fa8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27fa90:
    // 0x27fa90: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27fa90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27fa94:
    // 0x27fa94: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_27fa98:
    if (ctx->pc == 0x27FA98u) {
        ctx->pc = 0x27FA9Cu;
        goto label_27fa9c;
    }
    ctx->pc = 0x27FA94u;
    {
        const bool branch_taken_0x27fa94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fa94) {
            ctx->pc = 0x27FAB0u;
            goto label_27fab0;
        }
    }
    ctx->pc = 0x27FA9Cu;
label_27fa9c:
    // 0x27fa9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27faa0:
    // 0x27faa0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_27faa4:
    if (ctx->pc == 0x27FAA4u) {
        ctx->pc = 0x27FAA8u;
        goto label_27faa8;
    }
    ctx->pc = 0x27FAA0u;
    {
        const bool branch_taken_0x27faa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27faa0) {
            ctx->pc = 0x27FAB0u;
            goto label_27fab0;
        }
    }
    ctx->pc = 0x27FAA8u;
label_27faa8:
    // 0x27faa8: 0xae8007a0  sw          $zero, 0x7A0($s4)
    ctx->pc = 0x27faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 0));
label_27faac:
    // 0x27faac: 0xae8007a8  sw          $zero, 0x7A8($s4)
    ctx->pc = 0x27faacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1960), GPR_U32(ctx, 0));
label_27fab0:
    // 0x27fab0: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x27fab0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27fab4:
    // 0x27fab4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_27fab8:
    // 0x27fab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27fabc:
    // 0x27fabc: 0x24840b9b  addiu       $a0, $a0, 0xB9B
    ctx->pc = 0x27fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2971));
label_27fac0:
    // 0x27fac0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x27fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_27fac4:
    // 0x27fac4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x27fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_27fac8:
    // 0x27fac8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27facc:
    // 0x27facc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27faccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27fad0:
    // 0x27fad0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27fad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27fad4:
    // 0x27fad4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_27fad8:
    if (ctx->pc == 0x27FAD8u) {
        ctx->pc = 0x27FADCu;
        goto label_27fadc;
    }
    ctx->pc = 0x27FAD4u;
    {
        const bool branch_taken_0x27fad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fad4) {
            ctx->pc = 0x27FAE8u;
            goto label_27fae8;
        }
    }
    ctx->pc = 0x27FADCu;
label_27fadc:
    // 0x27fadc: 0xae8007a0  sw          $zero, 0x7A0($s4)
    ctx->pc = 0x27fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 0));
label_27fae0:
    // 0x27fae0: 0xae8007a4  sw          $zero, 0x7A4($s4)
    ctx->pc = 0x27fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1956), GPR_U32(ctx, 0));
label_27fae4:
    // 0x27fae4: 0xae8007a8  sw          $zero, 0x7A8($s4)
    ctx->pc = 0x27fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1960), GPR_U32(ctx, 0));
label_27fae8:
    // 0x27fae8: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x27fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
label_27faec:
    // 0x27faec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27faecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_27faf0:
    // 0x27faf0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_27faf4:
    if (ctx->pc == 0x27FAF4u) {
        ctx->pc = 0x27FAF8u;
        goto label_27faf8;
    }
    ctx->pc = 0x27FAF0u;
    {
        const bool branch_taken_0x27faf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27faf0) {
            ctx->pc = 0x27FB30u;
            goto label_27fb30;
        }
    }
    ctx->pc = 0x27FAF8u;
label_27faf8:
    // 0x27faf8: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x27faf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_27fafc:
    // 0x27fafc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27fb00:
    // 0x27fb00: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_27fb04:
    if (ctx->pc == 0x27FB04u) {
        ctx->pc = 0x27FB08u;
        goto label_27fb08;
    }
    ctx->pc = 0x27FB00u;
    {
        const bool branch_taken_0x27fb00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fb00) {
            ctx->pc = 0x27FB30u;
            goto label_27fb30;
        }
    }
    ctx->pc = 0x27FB08u;
label_27fb08:
    // 0x27fb08: 0x92832b08  lbu         $v1, 0x2B08($s4)
    ctx->pc = 0x27fb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11016)));
label_27fb0c:
    // 0x27fb0c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_27fb10:
    if (ctx->pc == 0x27FB10u) {
        ctx->pc = 0x27FB14u;
        goto label_27fb14;
    }
    ctx->pc = 0x27FB0Cu;
    {
        const bool branch_taken_0x27fb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb0c) {
            ctx->pc = 0x27FB30u;
            goto label_27fb30;
        }
    }
    ctx->pc = 0x27FB14u;
label_27fb14:
    // 0x27fb14: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x27fb14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_27fb18:
    // 0x27fb18: 0x24030092  addiu       $v1, $zero, 0x92
    ctx->pc = 0x27fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_27fb1c:
    // 0x27fb1c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_27fb20:
    if (ctx->pc == 0x27FB20u) {
        ctx->pc = 0x27FB24u;
        goto label_27fb24;
    }
    ctx->pc = 0x27FB1Cu;
    {
        const bool branch_taken_0x27fb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27fb1c) {
            ctx->pc = 0x27FB30u;
            goto label_27fb30;
        }
    }
    ctx->pc = 0x27FB24u;
label_27fb24:
    // 0x27fb24: 0x0  nop
    ctx->pc = 0x27fb24u;
    // NOP
label_27fb28:
    // 0x27fb28: 0xa2800839  sb          $zero, 0x839($s4)
    ctx->pc = 0x27fb28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2105), (uint8_t)GPR_U32(ctx, 0));
label_27fb2c:
    // 0x27fb2c: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x27fb2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27fb30:
    // 0x27fb30: 0x26630080  addiu       $v1, $s3, 0x80
    ctx->pc = 0x27fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_27fb34:
    // 0x27fb34: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x27fb34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
label_27fb38:
    // 0x27fb38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27fb3c:
    // 0x27fb3c: 0xae8307d0  sw          $v1, 0x7D0($s4)
    ctx->pc = 0x27fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2000), GPR_U32(ctx, 3));
label_27fb40:
    // 0x27fb40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27fb44:
    // 0x27fb44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27fb48:
    // 0x27fb48: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27fb48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27fb4c:
    // 0x27fb4c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27fb4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27fb50:
    // 0x27fb50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27fb50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27fb54:
    // 0x27fb54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27fb54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27fb58:
    // 0x27fb58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27fb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27fb5c:
    // 0x27fb5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27fb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27fb60:
    // 0x27fb60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27fb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27fb64:
    // 0x27fb64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27fb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fb68:
    // 0x27fb68: 0x3e00008  jr          $ra
label_27fb6c:
    if (ctx->pc == 0x27FB6Cu) {
        ctx->pc = 0x27FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB68u;
        // 0x27fb6c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FB70u;
        goto label_fallthrough_0x27fb68;
    }
    ctx->pc = 0x27FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB68u;
        // 0x27fb6c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27fb68:
    ctx->pc = 0x27FB70u;
}
