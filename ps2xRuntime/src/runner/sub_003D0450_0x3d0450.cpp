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

// Function: sub_003D0450
// Address: 0x3d0450 - 0x3d171c
void sub_003D0450_0x3d0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0450_0x3d0450");
#endif

    switch (ctx->pc) {
        case 0x3d0450u: goto label_3d0450;
        case 0x3d0454u: goto label_3d0454;
        case 0x3d0458u: goto label_3d0458;
        case 0x3d045cu: goto label_3d045c;
        case 0x3d0460u: goto label_3d0460;
        case 0x3d0464u: goto label_3d0464;
        case 0x3d0468u: goto label_3d0468;
        case 0x3d046cu: goto label_3d046c;
        case 0x3d0470u: goto label_3d0470;
        case 0x3d0474u: goto label_3d0474;
        case 0x3d0478u: goto label_3d0478;
        case 0x3d047cu: goto label_3d047c;
        case 0x3d0480u: goto label_3d0480;
        case 0x3d0484u: goto label_3d0484;
        case 0x3d0488u: goto label_3d0488;
        case 0x3d048cu: goto label_3d048c;
        case 0x3d0490u: goto label_3d0490;
        case 0x3d0494u: goto label_3d0494;
        case 0x3d0498u: goto label_3d0498;
        case 0x3d049cu: goto label_3d049c;
        case 0x3d04a0u: goto label_3d04a0;
        case 0x3d04a4u: goto label_3d04a4;
        case 0x3d04a8u: goto label_3d04a8;
        case 0x3d04acu: goto label_3d04ac;
        case 0x3d04b0u: goto label_3d04b0;
        case 0x3d04b4u: goto label_3d04b4;
        case 0x3d04b8u: goto label_3d04b8;
        case 0x3d04bcu: goto label_3d04bc;
        case 0x3d04c0u: goto label_3d04c0;
        case 0x3d04c4u: goto label_3d04c4;
        case 0x3d04c8u: goto label_3d04c8;
        case 0x3d04ccu: goto label_3d04cc;
        case 0x3d04d0u: goto label_3d04d0;
        case 0x3d04d4u: goto label_3d04d4;
        case 0x3d04d8u: goto label_3d04d8;
        case 0x3d04dcu: goto label_3d04dc;
        case 0x3d04e0u: goto label_3d04e0;
        case 0x3d04e4u: goto label_3d04e4;
        case 0x3d04e8u: goto label_3d04e8;
        case 0x3d04ecu: goto label_3d04ec;
        case 0x3d04f0u: goto label_3d04f0;
        case 0x3d04f4u: goto label_3d04f4;
        case 0x3d04f8u: goto label_3d04f8;
        case 0x3d04fcu: goto label_3d04fc;
        case 0x3d0500u: goto label_3d0500;
        case 0x3d0504u: goto label_3d0504;
        case 0x3d0508u: goto label_3d0508;
        case 0x3d050cu: goto label_3d050c;
        case 0x3d0510u: goto label_3d0510;
        case 0x3d0514u: goto label_3d0514;
        case 0x3d0518u: goto label_3d0518;
        case 0x3d051cu: goto label_3d051c;
        case 0x3d0520u: goto label_3d0520;
        case 0x3d0524u: goto label_3d0524;
        case 0x3d0528u: goto label_3d0528;
        case 0x3d052cu: goto label_3d052c;
        case 0x3d0530u: goto label_3d0530;
        case 0x3d0534u: goto label_3d0534;
        case 0x3d0538u: goto label_3d0538;
        case 0x3d053cu: goto label_3d053c;
        case 0x3d0540u: goto label_3d0540;
        case 0x3d0544u: goto label_3d0544;
        case 0x3d0548u: goto label_3d0548;
        case 0x3d054cu: goto label_3d054c;
        case 0x3d0550u: goto label_3d0550;
        case 0x3d0554u: goto label_3d0554;
        case 0x3d0558u: goto label_3d0558;
        case 0x3d055cu: goto label_3d055c;
        case 0x3d0560u: goto label_3d0560;
        case 0x3d0564u: goto label_3d0564;
        case 0x3d0568u: goto label_3d0568;
        case 0x3d056cu: goto label_3d056c;
        case 0x3d0570u: goto label_3d0570;
        case 0x3d0574u: goto label_3d0574;
        case 0x3d0578u: goto label_3d0578;
        case 0x3d057cu: goto label_3d057c;
        case 0x3d0580u: goto label_3d0580;
        case 0x3d0584u: goto label_3d0584;
        case 0x3d0588u: goto label_3d0588;
        case 0x3d058cu: goto label_3d058c;
        case 0x3d0590u: goto label_3d0590;
        case 0x3d0594u: goto label_3d0594;
        case 0x3d0598u: goto label_3d0598;
        case 0x3d059cu: goto label_3d059c;
        case 0x3d05a0u: goto label_3d05a0;
        case 0x3d05a4u: goto label_3d05a4;
        case 0x3d05a8u: goto label_3d05a8;
        case 0x3d05acu: goto label_3d05ac;
        case 0x3d05b0u: goto label_3d05b0;
        case 0x3d05b4u: goto label_3d05b4;
        case 0x3d05b8u: goto label_3d05b8;
        case 0x3d05bcu: goto label_3d05bc;
        case 0x3d05c0u: goto label_3d05c0;
        case 0x3d05c4u: goto label_3d05c4;
        case 0x3d05c8u: goto label_3d05c8;
        case 0x3d05ccu: goto label_3d05cc;
        case 0x3d05d0u: goto label_3d05d0;
        case 0x3d05d4u: goto label_3d05d4;
        case 0x3d05d8u: goto label_3d05d8;
        case 0x3d05dcu: goto label_3d05dc;
        case 0x3d05e0u: goto label_3d05e0;
        case 0x3d05e4u: goto label_3d05e4;
        case 0x3d05e8u: goto label_3d05e8;
        case 0x3d05ecu: goto label_3d05ec;
        case 0x3d05f0u: goto label_3d05f0;
        case 0x3d05f4u: goto label_3d05f4;
        case 0x3d05f8u: goto label_3d05f8;
        case 0x3d05fcu: goto label_3d05fc;
        case 0x3d0600u: goto label_3d0600;
        case 0x3d0604u: goto label_3d0604;
        case 0x3d0608u: goto label_3d0608;
        case 0x3d060cu: goto label_3d060c;
        case 0x3d0610u: goto label_3d0610;
        case 0x3d0614u: goto label_3d0614;
        case 0x3d0618u: goto label_3d0618;
        case 0x3d061cu: goto label_3d061c;
        case 0x3d0620u: goto label_3d0620;
        case 0x3d0624u: goto label_3d0624;
        case 0x3d0628u: goto label_3d0628;
        case 0x3d062cu: goto label_3d062c;
        case 0x3d0630u: goto label_3d0630;
        case 0x3d0634u: goto label_3d0634;
        case 0x3d0638u: goto label_3d0638;
        case 0x3d063cu: goto label_3d063c;
        case 0x3d0640u: goto label_3d0640;
        case 0x3d0644u: goto label_3d0644;
        case 0x3d0648u: goto label_3d0648;
        case 0x3d064cu: goto label_3d064c;
        case 0x3d0650u: goto label_3d0650;
        case 0x3d0654u: goto label_3d0654;
        case 0x3d0658u: goto label_3d0658;
        case 0x3d065cu: goto label_3d065c;
        case 0x3d0660u: goto label_3d0660;
        case 0x3d0664u: goto label_3d0664;
        case 0x3d0668u: goto label_3d0668;
        case 0x3d066cu: goto label_3d066c;
        case 0x3d0670u: goto label_3d0670;
        case 0x3d0674u: goto label_3d0674;
        case 0x3d0678u: goto label_3d0678;
        case 0x3d067cu: goto label_3d067c;
        case 0x3d0680u: goto label_3d0680;
        case 0x3d0684u: goto label_3d0684;
        case 0x3d0688u: goto label_3d0688;
        case 0x3d068cu: goto label_3d068c;
        case 0x3d0690u: goto label_3d0690;
        case 0x3d0694u: goto label_3d0694;
        case 0x3d0698u: goto label_3d0698;
        case 0x3d069cu: goto label_3d069c;
        case 0x3d06a0u: goto label_3d06a0;
        case 0x3d06a4u: goto label_3d06a4;
        case 0x3d06a8u: goto label_3d06a8;
        case 0x3d06acu: goto label_3d06ac;
        case 0x3d06b0u: goto label_3d06b0;
        case 0x3d06b4u: goto label_3d06b4;
        case 0x3d06b8u: goto label_3d06b8;
        case 0x3d06bcu: goto label_3d06bc;
        case 0x3d06c0u: goto label_3d06c0;
        case 0x3d06c4u: goto label_3d06c4;
        case 0x3d06c8u: goto label_3d06c8;
        case 0x3d06ccu: goto label_3d06cc;
        case 0x3d06d0u: goto label_3d06d0;
        case 0x3d06d4u: goto label_3d06d4;
        case 0x3d06d8u: goto label_3d06d8;
        case 0x3d06dcu: goto label_3d06dc;
        case 0x3d06e0u: goto label_3d06e0;
        case 0x3d06e4u: goto label_3d06e4;
        case 0x3d06e8u: goto label_3d06e8;
        case 0x3d06ecu: goto label_3d06ec;
        case 0x3d06f0u: goto label_3d06f0;
        case 0x3d06f4u: goto label_3d06f4;
        case 0x3d06f8u: goto label_3d06f8;
        case 0x3d06fcu: goto label_3d06fc;
        case 0x3d0700u: goto label_3d0700;
        case 0x3d0704u: goto label_3d0704;
        case 0x3d0708u: goto label_3d0708;
        case 0x3d070cu: goto label_3d070c;
        case 0x3d0710u: goto label_3d0710;
        case 0x3d0714u: goto label_3d0714;
        case 0x3d0718u: goto label_3d0718;
        case 0x3d071cu: goto label_3d071c;
        case 0x3d0720u: goto label_3d0720;
        case 0x3d0724u: goto label_3d0724;
        case 0x3d0728u: goto label_3d0728;
        case 0x3d072cu: goto label_3d072c;
        case 0x3d0730u: goto label_3d0730;
        case 0x3d0734u: goto label_3d0734;
        case 0x3d0738u: goto label_3d0738;
        case 0x3d073cu: goto label_3d073c;
        case 0x3d0740u: goto label_3d0740;
        case 0x3d0744u: goto label_3d0744;
        case 0x3d0748u: goto label_3d0748;
        case 0x3d074cu: goto label_3d074c;
        case 0x3d0750u: goto label_3d0750;
        case 0x3d0754u: goto label_3d0754;
        case 0x3d0758u: goto label_3d0758;
        case 0x3d075cu: goto label_3d075c;
        case 0x3d0760u: goto label_3d0760;
        case 0x3d0764u: goto label_3d0764;
        case 0x3d0768u: goto label_3d0768;
        case 0x3d076cu: goto label_3d076c;
        case 0x3d0770u: goto label_3d0770;
        case 0x3d0774u: goto label_3d0774;
        case 0x3d0778u: goto label_3d0778;
        case 0x3d077cu: goto label_3d077c;
        case 0x3d0780u: goto label_3d0780;
        case 0x3d0784u: goto label_3d0784;
        case 0x3d0788u: goto label_3d0788;
        case 0x3d078cu: goto label_3d078c;
        case 0x3d0790u: goto label_3d0790;
        case 0x3d0794u: goto label_3d0794;
        case 0x3d0798u: goto label_3d0798;
        case 0x3d079cu: goto label_3d079c;
        case 0x3d07a0u: goto label_3d07a0;
        case 0x3d07a4u: goto label_3d07a4;
        case 0x3d07a8u: goto label_3d07a8;
        case 0x3d07acu: goto label_3d07ac;
        case 0x3d07b0u: goto label_3d07b0;
        case 0x3d07b4u: goto label_3d07b4;
        case 0x3d07b8u: goto label_3d07b8;
        case 0x3d07bcu: goto label_3d07bc;
        case 0x3d07c0u: goto label_3d07c0;
        case 0x3d07c4u: goto label_3d07c4;
        case 0x3d07c8u: goto label_3d07c8;
        case 0x3d07ccu: goto label_3d07cc;
        case 0x3d07d0u: goto label_3d07d0;
        case 0x3d07d4u: goto label_3d07d4;
        case 0x3d07d8u: goto label_3d07d8;
        case 0x3d07dcu: goto label_3d07dc;
        case 0x3d07e0u: goto label_3d07e0;
        case 0x3d07e4u: goto label_3d07e4;
        case 0x3d07e8u: goto label_3d07e8;
        case 0x3d07ecu: goto label_3d07ec;
        case 0x3d07f0u: goto label_3d07f0;
        case 0x3d07f4u: goto label_3d07f4;
        case 0x3d07f8u: goto label_3d07f8;
        case 0x3d07fcu: goto label_3d07fc;
        case 0x3d0800u: goto label_3d0800;
        case 0x3d0804u: goto label_3d0804;
        case 0x3d0808u: goto label_3d0808;
        case 0x3d080cu: goto label_3d080c;
        case 0x3d0810u: goto label_3d0810;
        case 0x3d0814u: goto label_3d0814;
        case 0x3d0818u: goto label_3d0818;
        case 0x3d081cu: goto label_3d081c;
        case 0x3d0820u: goto label_3d0820;
        case 0x3d0824u: goto label_3d0824;
        case 0x3d0828u: goto label_3d0828;
        case 0x3d082cu: goto label_3d082c;
        case 0x3d0830u: goto label_3d0830;
        case 0x3d0834u: goto label_3d0834;
        case 0x3d0838u: goto label_3d0838;
        case 0x3d083cu: goto label_3d083c;
        case 0x3d0840u: goto label_3d0840;
        case 0x3d0844u: goto label_3d0844;
        case 0x3d0848u: goto label_3d0848;
        case 0x3d084cu: goto label_3d084c;
        case 0x3d0850u: goto label_3d0850;
        case 0x3d0854u: goto label_3d0854;
        case 0x3d0858u: goto label_3d0858;
        case 0x3d085cu: goto label_3d085c;
        case 0x3d0860u: goto label_3d0860;
        case 0x3d0864u: goto label_3d0864;
        case 0x3d0868u: goto label_3d0868;
        case 0x3d086cu: goto label_3d086c;
        case 0x3d0870u: goto label_3d0870;
        case 0x3d0874u: goto label_3d0874;
        case 0x3d0878u: goto label_3d0878;
        case 0x3d087cu: goto label_3d087c;
        case 0x3d0880u: goto label_3d0880;
        case 0x3d0884u: goto label_3d0884;
        case 0x3d0888u: goto label_3d0888;
        case 0x3d088cu: goto label_3d088c;
        case 0x3d0890u: goto label_3d0890;
        case 0x3d0894u: goto label_3d0894;
        case 0x3d0898u: goto label_3d0898;
        case 0x3d089cu: goto label_3d089c;
        case 0x3d08a0u: goto label_3d08a0;
        case 0x3d08a4u: goto label_3d08a4;
        case 0x3d08a8u: goto label_3d08a8;
        case 0x3d08acu: goto label_3d08ac;
        case 0x3d08b0u: goto label_3d08b0;
        case 0x3d08b4u: goto label_3d08b4;
        case 0x3d08b8u: goto label_3d08b8;
        case 0x3d08bcu: goto label_3d08bc;
        case 0x3d08c0u: goto label_3d08c0;
        case 0x3d08c4u: goto label_3d08c4;
        case 0x3d08c8u: goto label_3d08c8;
        case 0x3d08ccu: goto label_3d08cc;
        case 0x3d08d0u: goto label_3d08d0;
        case 0x3d08d4u: goto label_3d08d4;
        case 0x3d08d8u: goto label_3d08d8;
        case 0x3d08dcu: goto label_3d08dc;
        case 0x3d08e0u: goto label_3d08e0;
        case 0x3d08e4u: goto label_3d08e4;
        case 0x3d08e8u: goto label_3d08e8;
        case 0x3d08ecu: goto label_3d08ec;
        case 0x3d08f0u: goto label_3d08f0;
        case 0x3d08f4u: goto label_3d08f4;
        case 0x3d08f8u: goto label_3d08f8;
        case 0x3d08fcu: goto label_3d08fc;
        case 0x3d0900u: goto label_3d0900;
        case 0x3d0904u: goto label_3d0904;
        case 0x3d0908u: goto label_3d0908;
        case 0x3d090cu: goto label_3d090c;
        case 0x3d0910u: goto label_3d0910;
        case 0x3d0914u: goto label_3d0914;
        case 0x3d0918u: goto label_3d0918;
        case 0x3d091cu: goto label_3d091c;
        case 0x3d0920u: goto label_3d0920;
        case 0x3d0924u: goto label_3d0924;
        case 0x3d0928u: goto label_3d0928;
        case 0x3d092cu: goto label_3d092c;
        case 0x3d0930u: goto label_3d0930;
        case 0x3d0934u: goto label_3d0934;
        case 0x3d0938u: goto label_3d0938;
        case 0x3d093cu: goto label_3d093c;
        case 0x3d0940u: goto label_3d0940;
        case 0x3d0944u: goto label_3d0944;
        case 0x3d0948u: goto label_3d0948;
        case 0x3d094cu: goto label_3d094c;
        case 0x3d0950u: goto label_3d0950;
        case 0x3d0954u: goto label_3d0954;
        case 0x3d0958u: goto label_3d0958;
        case 0x3d095cu: goto label_3d095c;
        case 0x3d0960u: goto label_3d0960;
        case 0x3d0964u: goto label_3d0964;
        case 0x3d0968u: goto label_3d0968;
        case 0x3d096cu: goto label_3d096c;
        case 0x3d0970u: goto label_3d0970;
        case 0x3d0974u: goto label_3d0974;
        case 0x3d0978u: goto label_3d0978;
        case 0x3d097cu: goto label_3d097c;
        case 0x3d0980u: goto label_3d0980;
        case 0x3d0984u: goto label_3d0984;
        case 0x3d0988u: goto label_3d0988;
        case 0x3d098cu: goto label_3d098c;
        case 0x3d0990u: goto label_3d0990;
        case 0x3d0994u: goto label_3d0994;
        case 0x3d0998u: goto label_3d0998;
        case 0x3d099cu: goto label_3d099c;
        case 0x3d09a0u: goto label_3d09a0;
        case 0x3d09a4u: goto label_3d09a4;
        case 0x3d09a8u: goto label_3d09a8;
        case 0x3d09acu: goto label_3d09ac;
        case 0x3d09b0u: goto label_3d09b0;
        case 0x3d09b4u: goto label_3d09b4;
        case 0x3d09b8u: goto label_3d09b8;
        case 0x3d09bcu: goto label_3d09bc;
        case 0x3d09c0u: goto label_3d09c0;
        case 0x3d09c4u: goto label_3d09c4;
        case 0x3d09c8u: goto label_3d09c8;
        case 0x3d09ccu: goto label_3d09cc;
        case 0x3d09d0u: goto label_3d09d0;
        case 0x3d09d4u: goto label_3d09d4;
        case 0x3d09d8u: goto label_3d09d8;
        case 0x3d09dcu: goto label_3d09dc;
        case 0x3d09e0u: goto label_3d09e0;
        case 0x3d09e4u: goto label_3d09e4;
        case 0x3d09e8u: goto label_3d09e8;
        case 0x3d09ecu: goto label_3d09ec;
        case 0x3d09f0u: goto label_3d09f0;
        case 0x3d09f4u: goto label_3d09f4;
        case 0x3d09f8u: goto label_3d09f8;
        case 0x3d09fcu: goto label_3d09fc;
        case 0x3d0a00u: goto label_3d0a00;
        case 0x3d0a04u: goto label_3d0a04;
        case 0x3d0a08u: goto label_3d0a08;
        case 0x3d0a0cu: goto label_3d0a0c;
        case 0x3d0a10u: goto label_3d0a10;
        case 0x3d0a14u: goto label_3d0a14;
        case 0x3d0a18u: goto label_3d0a18;
        case 0x3d0a1cu: goto label_3d0a1c;
        case 0x3d0a20u: goto label_3d0a20;
        case 0x3d0a24u: goto label_3d0a24;
        case 0x3d0a28u: goto label_3d0a28;
        case 0x3d0a2cu: goto label_3d0a2c;
        case 0x3d0a30u: goto label_3d0a30;
        case 0x3d0a34u: goto label_3d0a34;
        case 0x3d0a38u: goto label_3d0a38;
        case 0x3d0a3cu: goto label_3d0a3c;
        case 0x3d0a40u: goto label_3d0a40;
        case 0x3d0a44u: goto label_3d0a44;
        case 0x3d0a48u: goto label_3d0a48;
        case 0x3d0a4cu: goto label_3d0a4c;
        case 0x3d0a50u: goto label_3d0a50;
        case 0x3d0a54u: goto label_3d0a54;
        case 0x3d0a58u: goto label_3d0a58;
        case 0x3d0a5cu: goto label_3d0a5c;
        case 0x3d0a60u: goto label_3d0a60;
        case 0x3d0a64u: goto label_3d0a64;
        case 0x3d0a68u: goto label_3d0a68;
        case 0x3d0a6cu: goto label_3d0a6c;
        case 0x3d0a70u: goto label_3d0a70;
        case 0x3d0a74u: goto label_3d0a74;
        case 0x3d0a78u: goto label_3d0a78;
        case 0x3d0a7cu: goto label_3d0a7c;
        case 0x3d0a80u: goto label_3d0a80;
        case 0x3d0a84u: goto label_3d0a84;
        case 0x3d0a88u: goto label_3d0a88;
        case 0x3d0a8cu: goto label_3d0a8c;
        case 0x3d0a90u: goto label_3d0a90;
        case 0x3d0a94u: goto label_3d0a94;
        case 0x3d0a98u: goto label_3d0a98;
        case 0x3d0a9cu: goto label_3d0a9c;
        case 0x3d0aa0u: goto label_3d0aa0;
        case 0x3d0aa4u: goto label_3d0aa4;
        case 0x3d0aa8u: goto label_3d0aa8;
        case 0x3d0aacu: goto label_3d0aac;
        case 0x3d0ab0u: goto label_3d0ab0;
        case 0x3d0ab4u: goto label_3d0ab4;
        case 0x3d0ab8u: goto label_3d0ab8;
        case 0x3d0abcu: goto label_3d0abc;
        case 0x3d0ac0u: goto label_3d0ac0;
        case 0x3d0ac4u: goto label_3d0ac4;
        case 0x3d0ac8u: goto label_3d0ac8;
        case 0x3d0accu: goto label_3d0acc;
        case 0x3d0ad0u: goto label_3d0ad0;
        case 0x3d0ad4u: goto label_3d0ad4;
        case 0x3d0ad8u: goto label_3d0ad8;
        case 0x3d0adcu: goto label_3d0adc;
        case 0x3d0ae0u: goto label_3d0ae0;
        case 0x3d0ae4u: goto label_3d0ae4;
        case 0x3d0ae8u: goto label_3d0ae8;
        case 0x3d0aecu: goto label_3d0aec;
        case 0x3d0af0u: goto label_3d0af0;
        case 0x3d0af4u: goto label_3d0af4;
        case 0x3d0af8u: goto label_3d0af8;
        case 0x3d0afcu: goto label_3d0afc;
        case 0x3d0b00u: goto label_3d0b00;
        case 0x3d0b04u: goto label_3d0b04;
        case 0x3d0b08u: goto label_3d0b08;
        case 0x3d0b0cu: goto label_3d0b0c;
        case 0x3d0b10u: goto label_3d0b10;
        case 0x3d0b14u: goto label_3d0b14;
        case 0x3d0b18u: goto label_3d0b18;
        case 0x3d0b1cu: goto label_3d0b1c;
        case 0x3d0b20u: goto label_3d0b20;
        case 0x3d0b24u: goto label_3d0b24;
        case 0x3d0b28u: goto label_3d0b28;
        case 0x3d0b2cu: goto label_3d0b2c;
        case 0x3d0b30u: goto label_3d0b30;
        case 0x3d0b34u: goto label_3d0b34;
        case 0x3d0b38u: goto label_3d0b38;
        case 0x3d0b3cu: goto label_3d0b3c;
        case 0x3d0b40u: goto label_3d0b40;
        case 0x3d0b44u: goto label_3d0b44;
        case 0x3d0b48u: goto label_3d0b48;
        case 0x3d0b4cu: goto label_3d0b4c;
        case 0x3d0b50u: goto label_3d0b50;
        case 0x3d0b54u: goto label_3d0b54;
        case 0x3d0b58u: goto label_3d0b58;
        case 0x3d0b5cu: goto label_3d0b5c;
        case 0x3d0b60u: goto label_3d0b60;
        case 0x3d0b64u: goto label_3d0b64;
        case 0x3d0b68u: goto label_3d0b68;
        case 0x3d0b6cu: goto label_3d0b6c;
        case 0x3d0b70u: goto label_3d0b70;
        case 0x3d0b74u: goto label_3d0b74;
        case 0x3d0b78u: goto label_3d0b78;
        case 0x3d0b7cu: goto label_3d0b7c;
        case 0x3d0b80u: goto label_3d0b80;
        case 0x3d0b84u: goto label_3d0b84;
        case 0x3d0b88u: goto label_3d0b88;
        case 0x3d0b8cu: goto label_3d0b8c;
        case 0x3d0b90u: goto label_3d0b90;
        case 0x3d0b94u: goto label_3d0b94;
        case 0x3d0b98u: goto label_3d0b98;
        case 0x3d0b9cu: goto label_3d0b9c;
        case 0x3d0ba0u: goto label_3d0ba0;
        case 0x3d0ba4u: goto label_3d0ba4;
        case 0x3d0ba8u: goto label_3d0ba8;
        case 0x3d0bacu: goto label_3d0bac;
        case 0x3d0bb0u: goto label_3d0bb0;
        case 0x3d0bb4u: goto label_3d0bb4;
        case 0x3d0bb8u: goto label_3d0bb8;
        case 0x3d0bbcu: goto label_3d0bbc;
        case 0x3d0bc0u: goto label_3d0bc0;
        case 0x3d0bc4u: goto label_3d0bc4;
        case 0x3d0bc8u: goto label_3d0bc8;
        case 0x3d0bccu: goto label_3d0bcc;
        case 0x3d0bd0u: goto label_3d0bd0;
        case 0x3d0bd4u: goto label_3d0bd4;
        case 0x3d0bd8u: goto label_3d0bd8;
        case 0x3d0bdcu: goto label_3d0bdc;
        case 0x3d0be0u: goto label_3d0be0;
        case 0x3d0be4u: goto label_3d0be4;
        case 0x3d0be8u: goto label_3d0be8;
        case 0x3d0becu: goto label_3d0bec;
        case 0x3d0bf0u: goto label_3d0bf0;
        case 0x3d0bf4u: goto label_3d0bf4;
        case 0x3d0bf8u: goto label_3d0bf8;
        case 0x3d0bfcu: goto label_3d0bfc;
        case 0x3d0c00u: goto label_3d0c00;
        case 0x3d0c04u: goto label_3d0c04;
        case 0x3d0c08u: goto label_3d0c08;
        case 0x3d0c0cu: goto label_3d0c0c;
        case 0x3d0c10u: goto label_3d0c10;
        case 0x3d0c14u: goto label_3d0c14;
        case 0x3d0c18u: goto label_3d0c18;
        case 0x3d0c1cu: goto label_3d0c1c;
        case 0x3d0c20u: goto label_3d0c20;
        case 0x3d0c24u: goto label_3d0c24;
        case 0x3d0c28u: goto label_3d0c28;
        case 0x3d0c2cu: goto label_3d0c2c;
        case 0x3d0c30u: goto label_3d0c30;
        case 0x3d0c34u: goto label_3d0c34;
        case 0x3d0c38u: goto label_3d0c38;
        case 0x3d0c3cu: goto label_3d0c3c;
        case 0x3d0c40u: goto label_3d0c40;
        case 0x3d0c44u: goto label_3d0c44;
        case 0x3d0c48u: goto label_3d0c48;
        case 0x3d0c4cu: goto label_3d0c4c;
        case 0x3d0c50u: goto label_3d0c50;
        case 0x3d0c54u: goto label_3d0c54;
        case 0x3d0c58u: goto label_3d0c58;
        case 0x3d0c5cu: goto label_3d0c5c;
        case 0x3d0c60u: goto label_3d0c60;
        case 0x3d0c64u: goto label_3d0c64;
        case 0x3d0c68u: goto label_3d0c68;
        case 0x3d0c6cu: goto label_3d0c6c;
        case 0x3d0c70u: goto label_3d0c70;
        case 0x3d0c74u: goto label_3d0c74;
        case 0x3d0c78u: goto label_3d0c78;
        case 0x3d0c7cu: goto label_3d0c7c;
        case 0x3d0c80u: goto label_3d0c80;
        case 0x3d0c84u: goto label_3d0c84;
        case 0x3d0c88u: goto label_3d0c88;
        case 0x3d0c8cu: goto label_3d0c8c;
        case 0x3d0c90u: goto label_3d0c90;
        case 0x3d0c94u: goto label_3d0c94;
        case 0x3d0c98u: goto label_3d0c98;
        case 0x3d0c9cu: goto label_3d0c9c;
        case 0x3d0ca0u: goto label_3d0ca0;
        case 0x3d0ca4u: goto label_3d0ca4;
        case 0x3d0ca8u: goto label_3d0ca8;
        case 0x3d0cacu: goto label_3d0cac;
        case 0x3d0cb0u: goto label_3d0cb0;
        case 0x3d0cb4u: goto label_3d0cb4;
        case 0x3d0cb8u: goto label_3d0cb8;
        case 0x3d0cbcu: goto label_3d0cbc;
        case 0x3d0cc0u: goto label_3d0cc0;
        case 0x3d0cc4u: goto label_3d0cc4;
        case 0x3d0cc8u: goto label_3d0cc8;
        case 0x3d0cccu: goto label_3d0ccc;
        case 0x3d0cd0u: goto label_3d0cd0;
        case 0x3d0cd4u: goto label_3d0cd4;
        case 0x3d0cd8u: goto label_3d0cd8;
        case 0x3d0cdcu: goto label_3d0cdc;
        case 0x3d0ce0u: goto label_3d0ce0;
        case 0x3d0ce4u: goto label_3d0ce4;
        case 0x3d0ce8u: goto label_3d0ce8;
        case 0x3d0cecu: goto label_3d0cec;
        case 0x3d0cf0u: goto label_3d0cf0;
        case 0x3d0cf4u: goto label_3d0cf4;
        case 0x3d0cf8u: goto label_3d0cf8;
        case 0x3d0cfcu: goto label_3d0cfc;
        case 0x3d0d00u: goto label_3d0d00;
        case 0x3d0d04u: goto label_3d0d04;
        case 0x3d0d08u: goto label_3d0d08;
        case 0x3d0d0cu: goto label_3d0d0c;
        case 0x3d0d10u: goto label_3d0d10;
        case 0x3d0d14u: goto label_3d0d14;
        case 0x3d0d18u: goto label_3d0d18;
        case 0x3d0d1cu: goto label_3d0d1c;
        case 0x3d0d20u: goto label_3d0d20;
        case 0x3d0d24u: goto label_3d0d24;
        case 0x3d0d28u: goto label_3d0d28;
        case 0x3d0d2cu: goto label_3d0d2c;
        case 0x3d0d30u: goto label_3d0d30;
        case 0x3d0d34u: goto label_3d0d34;
        case 0x3d0d38u: goto label_3d0d38;
        case 0x3d0d3cu: goto label_3d0d3c;
        case 0x3d0d40u: goto label_3d0d40;
        case 0x3d0d44u: goto label_3d0d44;
        case 0x3d0d48u: goto label_3d0d48;
        case 0x3d0d4cu: goto label_3d0d4c;
        case 0x3d0d50u: goto label_3d0d50;
        case 0x3d0d54u: goto label_3d0d54;
        case 0x3d0d58u: goto label_3d0d58;
        case 0x3d0d5cu: goto label_3d0d5c;
        case 0x3d0d60u: goto label_3d0d60;
        case 0x3d0d64u: goto label_3d0d64;
        case 0x3d0d68u: goto label_3d0d68;
        case 0x3d0d6cu: goto label_3d0d6c;
        case 0x3d0d70u: goto label_3d0d70;
        case 0x3d0d74u: goto label_3d0d74;
        case 0x3d0d78u: goto label_3d0d78;
        case 0x3d0d7cu: goto label_3d0d7c;
        case 0x3d0d80u: goto label_3d0d80;
        case 0x3d0d84u: goto label_3d0d84;
        case 0x3d0d88u: goto label_3d0d88;
        case 0x3d0d8cu: goto label_3d0d8c;
        case 0x3d0d90u: goto label_3d0d90;
        case 0x3d0d94u: goto label_3d0d94;
        case 0x3d0d98u: goto label_3d0d98;
        case 0x3d0d9cu: goto label_3d0d9c;
        case 0x3d0da0u: goto label_3d0da0;
        case 0x3d0da4u: goto label_3d0da4;
        case 0x3d0da8u: goto label_3d0da8;
        case 0x3d0dacu: goto label_3d0dac;
        case 0x3d0db0u: goto label_3d0db0;
        case 0x3d0db4u: goto label_3d0db4;
        case 0x3d0db8u: goto label_3d0db8;
        case 0x3d0dbcu: goto label_3d0dbc;
        case 0x3d0dc0u: goto label_3d0dc0;
        case 0x3d0dc4u: goto label_3d0dc4;
        case 0x3d0dc8u: goto label_3d0dc8;
        case 0x3d0dccu: goto label_3d0dcc;
        case 0x3d0dd0u: goto label_3d0dd0;
        case 0x3d0dd4u: goto label_3d0dd4;
        case 0x3d0dd8u: goto label_3d0dd8;
        case 0x3d0ddcu: goto label_3d0ddc;
        case 0x3d0de0u: goto label_3d0de0;
        case 0x3d0de4u: goto label_3d0de4;
        case 0x3d0de8u: goto label_3d0de8;
        case 0x3d0decu: goto label_3d0dec;
        case 0x3d0df0u: goto label_3d0df0;
        case 0x3d0df4u: goto label_3d0df4;
        case 0x3d0df8u: goto label_3d0df8;
        case 0x3d0dfcu: goto label_3d0dfc;
        case 0x3d0e00u: goto label_3d0e00;
        case 0x3d0e04u: goto label_3d0e04;
        case 0x3d0e08u: goto label_3d0e08;
        case 0x3d0e0cu: goto label_3d0e0c;
        case 0x3d0e10u: goto label_3d0e10;
        case 0x3d0e14u: goto label_3d0e14;
        case 0x3d0e18u: goto label_3d0e18;
        case 0x3d0e1cu: goto label_3d0e1c;
        case 0x3d0e20u: goto label_3d0e20;
        case 0x3d0e24u: goto label_3d0e24;
        case 0x3d0e28u: goto label_3d0e28;
        case 0x3d0e2cu: goto label_3d0e2c;
        case 0x3d0e30u: goto label_3d0e30;
        case 0x3d0e34u: goto label_3d0e34;
        case 0x3d0e38u: goto label_3d0e38;
        case 0x3d0e3cu: goto label_3d0e3c;
        case 0x3d0e40u: goto label_3d0e40;
        case 0x3d0e44u: goto label_3d0e44;
        case 0x3d0e48u: goto label_3d0e48;
        case 0x3d0e4cu: goto label_3d0e4c;
        case 0x3d0e50u: goto label_3d0e50;
        case 0x3d0e54u: goto label_3d0e54;
        case 0x3d0e58u: goto label_3d0e58;
        case 0x3d0e5cu: goto label_3d0e5c;
        case 0x3d0e60u: goto label_3d0e60;
        case 0x3d0e64u: goto label_3d0e64;
        case 0x3d0e68u: goto label_3d0e68;
        case 0x3d0e6cu: goto label_3d0e6c;
        case 0x3d0e70u: goto label_3d0e70;
        case 0x3d0e74u: goto label_3d0e74;
        case 0x3d0e78u: goto label_3d0e78;
        case 0x3d0e7cu: goto label_3d0e7c;
        case 0x3d0e80u: goto label_3d0e80;
        case 0x3d0e84u: goto label_3d0e84;
        case 0x3d0e88u: goto label_3d0e88;
        case 0x3d0e8cu: goto label_3d0e8c;
        case 0x3d0e90u: goto label_3d0e90;
        case 0x3d0e94u: goto label_3d0e94;
        case 0x3d0e98u: goto label_3d0e98;
        case 0x3d0e9cu: goto label_3d0e9c;
        case 0x3d0ea0u: goto label_3d0ea0;
        case 0x3d0ea4u: goto label_3d0ea4;
        case 0x3d0ea8u: goto label_3d0ea8;
        case 0x3d0eacu: goto label_3d0eac;
        case 0x3d0eb0u: goto label_3d0eb0;
        case 0x3d0eb4u: goto label_3d0eb4;
        case 0x3d0eb8u: goto label_3d0eb8;
        case 0x3d0ebcu: goto label_3d0ebc;
        case 0x3d0ec0u: goto label_3d0ec0;
        case 0x3d0ec4u: goto label_3d0ec4;
        case 0x3d0ec8u: goto label_3d0ec8;
        case 0x3d0eccu: goto label_3d0ecc;
        case 0x3d0ed0u: goto label_3d0ed0;
        case 0x3d0ed4u: goto label_3d0ed4;
        case 0x3d0ed8u: goto label_3d0ed8;
        case 0x3d0edcu: goto label_3d0edc;
        case 0x3d0ee0u: goto label_3d0ee0;
        case 0x3d0ee4u: goto label_3d0ee4;
        case 0x3d0ee8u: goto label_3d0ee8;
        case 0x3d0eecu: goto label_3d0eec;
        case 0x3d0ef0u: goto label_3d0ef0;
        case 0x3d0ef4u: goto label_3d0ef4;
        case 0x3d0ef8u: goto label_3d0ef8;
        case 0x3d0efcu: goto label_3d0efc;
        case 0x3d0f00u: goto label_3d0f00;
        case 0x3d0f04u: goto label_3d0f04;
        case 0x3d0f08u: goto label_3d0f08;
        case 0x3d0f0cu: goto label_3d0f0c;
        case 0x3d0f10u: goto label_3d0f10;
        case 0x3d0f14u: goto label_3d0f14;
        case 0x3d0f18u: goto label_3d0f18;
        case 0x3d0f1cu: goto label_3d0f1c;
        case 0x3d0f20u: goto label_3d0f20;
        case 0x3d0f24u: goto label_3d0f24;
        case 0x3d0f28u: goto label_3d0f28;
        case 0x3d0f2cu: goto label_3d0f2c;
        case 0x3d0f30u: goto label_3d0f30;
        case 0x3d0f34u: goto label_3d0f34;
        case 0x3d0f38u: goto label_3d0f38;
        case 0x3d0f3cu: goto label_3d0f3c;
        case 0x3d0f40u: goto label_3d0f40;
        case 0x3d0f44u: goto label_3d0f44;
        case 0x3d0f48u: goto label_3d0f48;
        case 0x3d0f4cu: goto label_3d0f4c;
        case 0x3d0f50u: goto label_3d0f50;
        case 0x3d0f54u: goto label_3d0f54;
        case 0x3d0f58u: goto label_3d0f58;
        case 0x3d0f5cu: goto label_3d0f5c;
        case 0x3d0f60u: goto label_3d0f60;
        case 0x3d0f64u: goto label_3d0f64;
        case 0x3d0f68u: goto label_3d0f68;
        case 0x3d0f6cu: goto label_3d0f6c;
        case 0x3d0f70u: goto label_3d0f70;
        case 0x3d0f74u: goto label_3d0f74;
        case 0x3d0f78u: goto label_3d0f78;
        case 0x3d0f7cu: goto label_3d0f7c;
        case 0x3d0f80u: goto label_3d0f80;
        case 0x3d0f84u: goto label_3d0f84;
        case 0x3d0f88u: goto label_3d0f88;
        case 0x3d0f8cu: goto label_3d0f8c;
        case 0x3d0f90u: goto label_3d0f90;
        case 0x3d0f94u: goto label_3d0f94;
        case 0x3d0f98u: goto label_3d0f98;
        case 0x3d0f9cu: goto label_3d0f9c;
        case 0x3d0fa0u: goto label_3d0fa0;
        case 0x3d0fa4u: goto label_3d0fa4;
        case 0x3d0fa8u: goto label_3d0fa8;
        case 0x3d0facu: goto label_3d0fac;
        case 0x3d0fb0u: goto label_3d0fb0;
        case 0x3d0fb4u: goto label_3d0fb4;
        case 0x3d0fb8u: goto label_3d0fb8;
        case 0x3d0fbcu: goto label_3d0fbc;
        case 0x3d0fc0u: goto label_3d0fc0;
        case 0x3d0fc4u: goto label_3d0fc4;
        case 0x3d0fc8u: goto label_3d0fc8;
        case 0x3d0fccu: goto label_3d0fcc;
        case 0x3d0fd0u: goto label_3d0fd0;
        case 0x3d0fd4u: goto label_3d0fd4;
        case 0x3d0fd8u: goto label_3d0fd8;
        case 0x3d0fdcu: goto label_3d0fdc;
        case 0x3d0fe0u: goto label_3d0fe0;
        case 0x3d0fe4u: goto label_3d0fe4;
        case 0x3d0fe8u: goto label_3d0fe8;
        case 0x3d0fecu: goto label_3d0fec;
        case 0x3d0ff0u: goto label_3d0ff0;
        case 0x3d0ff4u: goto label_3d0ff4;
        case 0x3d0ff8u: goto label_3d0ff8;
        case 0x3d0ffcu: goto label_3d0ffc;
        case 0x3d1000u: goto label_3d1000;
        case 0x3d1004u: goto label_3d1004;
        case 0x3d1008u: goto label_3d1008;
        case 0x3d100cu: goto label_3d100c;
        case 0x3d1010u: goto label_3d1010;
        case 0x3d1014u: goto label_3d1014;
        case 0x3d1018u: goto label_3d1018;
        case 0x3d101cu: goto label_3d101c;
        case 0x3d1020u: goto label_3d1020;
        case 0x3d1024u: goto label_3d1024;
        case 0x3d1028u: goto label_3d1028;
        case 0x3d102cu: goto label_3d102c;
        case 0x3d1030u: goto label_3d1030;
        case 0x3d1034u: goto label_3d1034;
        case 0x3d1038u: goto label_3d1038;
        case 0x3d103cu: goto label_3d103c;
        case 0x3d1040u: goto label_3d1040;
        case 0x3d1044u: goto label_3d1044;
        case 0x3d1048u: goto label_3d1048;
        case 0x3d104cu: goto label_3d104c;
        case 0x3d1050u: goto label_3d1050;
        case 0x3d1054u: goto label_3d1054;
        case 0x3d1058u: goto label_3d1058;
        case 0x3d105cu: goto label_3d105c;
        case 0x3d1060u: goto label_3d1060;
        case 0x3d1064u: goto label_3d1064;
        case 0x3d1068u: goto label_3d1068;
        case 0x3d106cu: goto label_3d106c;
        case 0x3d1070u: goto label_3d1070;
        case 0x3d1074u: goto label_3d1074;
        case 0x3d1078u: goto label_3d1078;
        case 0x3d107cu: goto label_3d107c;
        case 0x3d1080u: goto label_3d1080;
        case 0x3d1084u: goto label_3d1084;
        case 0x3d1088u: goto label_3d1088;
        case 0x3d108cu: goto label_3d108c;
        case 0x3d1090u: goto label_3d1090;
        case 0x3d1094u: goto label_3d1094;
        case 0x3d1098u: goto label_3d1098;
        case 0x3d109cu: goto label_3d109c;
        case 0x3d10a0u: goto label_3d10a0;
        case 0x3d10a4u: goto label_3d10a4;
        case 0x3d10a8u: goto label_3d10a8;
        case 0x3d10acu: goto label_3d10ac;
        case 0x3d10b0u: goto label_3d10b0;
        case 0x3d10b4u: goto label_3d10b4;
        case 0x3d10b8u: goto label_3d10b8;
        case 0x3d10bcu: goto label_3d10bc;
        case 0x3d10c0u: goto label_3d10c0;
        case 0x3d10c4u: goto label_3d10c4;
        case 0x3d10c8u: goto label_3d10c8;
        case 0x3d10ccu: goto label_3d10cc;
        case 0x3d10d0u: goto label_3d10d0;
        case 0x3d10d4u: goto label_3d10d4;
        case 0x3d10d8u: goto label_3d10d8;
        case 0x3d10dcu: goto label_3d10dc;
        case 0x3d10e0u: goto label_3d10e0;
        case 0x3d10e4u: goto label_3d10e4;
        case 0x3d10e8u: goto label_3d10e8;
        case 0x3d10ecu: goto label_3d10ec;
        case 0x3d10f0u: goto label_3d10f0;
        case 0x3d10f4u: goto label_3d10f4;
        case 0x3d10f8u: goto label_3d10f8;
        case 0x3d10fcu: goto label_3d10fc;
        case 0x3d1100u: goto label_3d1100;
        case 0x3d1104u: goto label_3d1104;
        case 0x3d1108u: goto label_3d1108;
        case 0x3d110cu: goto label_3d110c;
        case 0x3d1110u: goto label_3d1110;
        case 0x3d1114u: goto label_3d1114;
        case 0x3d1118u: goto label_3d1118;
        case 0x3d111cu: goto label_3d111c;
        case 0x3d1120u: goto label_3d1120;
        case 0x3d1124u: goto label_3d1124;
        case 0x3d1128u: goto label_3d1128;
        case 0x3d112cu: goto label_3d112c;
        case 0x3d1130u: goto label_3d1130;
        case 0x3d1134u: goto label_3d1134;
        case 0x3d1138u: goto label_3d1138;
        case 0x3d113cu: goto label_3d113c;
        case 0x3d1140u: goto label_3d1140;
        case 0x3d1144u: goto label_3d1144;
        case 0x3d1148u: goto label_3d1148;
        case 0x3d114cu: goto label_3d114c;
        case 0x3d1150u: goto label_3d1150;
        case 0x3d1154u: goto label_3d1154;
        case 0x3d1158u: goto label_3d1158;
        case 0x3d115cu: goto label_3d115c;
        case 0x3d1160u: goto label_3d1160;
        case 0x3d1164u: goto label_3d1164;
        case 0x3d1168u: goto label_3d1168;
        case 0x3d116cu: goto label_3d116c;
        case 0x3d1170u: goto label_3d1170;
        case 0x3d1174u: goto label_3d1174;
        case 0x3d1178u: goto label_3d1178;
        case 0x3d117cu: goto label_3d117c;
        case 0x3d1180u: goto label_3d1180;
        case 0x3d1184u: goto label_3d1184;
        case 0x3d1188u: goto label_3d1188;
        case 0x3d118cu: goto label_3d118c;
        case 0x3d1190u: goto label_3d1190;
        case 0x3d1194u: goto label_3d1194;
        case 0x3d1198u: goto label_3d1198;
        case 0x3d119cu: goto label_3d119c;
        case 0x3d11a0u: goto label_3d11a0;
        case 0x3d11a4u: goto label_3d11a4;
        case 0x3d11a8u: goto label_3d11a8;
        case 0x3d11acu: goto label_3d11ac;
        case 0x3d11b0u: goto label_3d11b0;
        case 0x3d11b4u: goto label_3d11b4;
        case 0x3d11b8u: goto label_3d11b8;
        case 0x3d11bcu: goto label_3d11bc;
        case 0x3d11c0u: goto label_3d11c0;
        case 0x3d11c4u: goto label_3d11c4;
        case 0x3d11c8u: goto label_3d11c8;
        case 0x3d11ccu: goto label_3d11cc;
        case 0x3d11d0u: goto label_3d11d0;
        case 0x3d11d4u: goto label_3d11d4;
        case 0x3d11d8u: goto label_3d11d8;
        case 0x3d11dcu: goto label_3d11dc;
        case 0x3d11e0u: goto label_3d11e0;
        case 0x3d11e4u: goto label_3d11e4;
        case 0x3d11e8u: goto label_3d11e8;
        case 0x3d11ecu: goto label_3d11ec;
        case 0x3d11f0u: goto label_3d11f0;
        case 0x3d11f4u: goto label_3d11f4;
        case 0x3d11f8u: goto label_3d11f8;
        case 0x3d11fcu: goto label_3d11fc;
        case 0x3d1200u: goto label_3d1200;
        case 0x3d1204u: goto label_3d1204;
        case 0x3d1208u: goto label_3d1208;
        case 0x3d120cu: goto label_3d120c;
        case 0x3d1210u: goto label_3d1210;
        case 0x3d1214u: goto label_3d1214;
        case 0x3d1218u: goto label_3d1218;
        case 0x3d121cu: goto label_3d121c;
        case 0x3d1220u: goto label_3d1220;
        case 0x3d1224u: goto label_3d1224;
        case 0x3d1228u: goto label_3d1228;
        case 0x3d122cu: goto label_3d122c;
        case 0x3d1230u: goto label_3d1230;
        case 0x3d1234u: goto label_3d1234;
        case 0x3d1238u: goto label_3d1238;
        case 0x3d123cu: goto label_3d123c;
        case 0x3d1240u: goto label_3d1240;
        case 0x3d1244u: goto label_3d1244;
        case 0x3d1248u: goto label_3d1248;
        case 0x3d124cu: goto label_3d124c;
        case 0x3d1250u: goto label_3d1250;
        case 0x3d1254u: goto label_3d1254;
        case 0x3d1258u: goto label_3d1258;
        case 0x3d125cu: goto label_3d125c;
        case 0x3d1260u: goto label_3d1260;
        case 0x3d1264u: goto label_3d1264;
        case 0x3d1268u: goto label_3d1268;
        case 0x3d126cu: goto label_3d126c;
        case 0x3d1270u: goto label_3d1270;
        case 0x3d1274u: goto label_3d1274;
        case 0x3d1278u: goto label_3d1278;
        case 0x3d127cu: goto label_3d127c;
        case 0x3d1280u: goto label_3d1280;
        case 0x3d1284u: goto label_3d1284;
        case 0x3d1288u: goto label_3d1288;
        case 0x3d128cu: goto label_3d128c;
        case 0x3d1290u: goto label_3d1290;
        case 0x3d1294u: goto label_3d1294;
        case 0x3d1298u: goto label_3d1298;
        case 0x3d129cu: goto label_3d129c;
        case 0x3d12a0u: goto label_3d12a0;
        case 0x3d12a4u: goto label_3d12a4;
        case 0x3d12a8u: goto label_3d12a8;
        case 0x3d12acu: goto label_3d12ac;
        case 0x3d12b0u: goto label_3d12b0;
        case 0x3d12b4u: goto label_3d12b4;
        case 0x3d12b8u: goto label_3d12b8;
        case 0x3d12bcu: goto label_3d12bc;
        case 0x3d12c0u: goto label_3d12c0;
        case 0x3d12c4u: goto label_3d12c4;
        case 0x3d12c8u: goto label_3d12c8;
        case 0x3d12ccu: goto label_3d12cc;
        case 0x3d12d0u: goto label_3d12d0;
        case 0x3d12d4u: goto label_3d12d4;
        case 0x3d12d8u: goto label_3d12d8;
        case 0x3d12dcu: goto label_3d12dc;
        case 0x3d12e0u: goto label_3d12e0;
        case 0x3d12e4u: goto label_3d12e4;
        case 0x3d12e8u: goto label_3d12e8;
        case 0x3d12ecu: goto label_3d12ec;
        case 0x3d12f0u: goto label_3d12f0;
        case 0x3d12f4u: goto label_3d12f4;
        case 0x3d12f8u: goto label_3d12f8;
        case 0x3d12fcu: goto label_3d12fc;
        case 0x3d1300u: goto label_3d1300;
        case 0x3d1304u: goto label_3d1304;
        case 0x3d1308u: goto label_3d1308;
        case 0x3d130cu: goto label_3d130c;
        case 0x3d1310u: goto label_3d1310;
        case 0x3d1314u: goto label_3d1314;
        case 0x3d1318u: goto label_3d1318;
        case 0x3d131cu: goto label_3d131c;
        case 0x3d1320u: goto label_3d1320;
        case 0x3d1324u: goto label_3d1324;
        case 0x3d1328u: goto label_3d1328;
        case 0x3d132cu: goto label_3d132c;
        case 0x3d1330u: goto label_3d1330;
        case 0x3d1334u: goto label_3d1334;
        case 0x3d1338u: goto label_3d1338;
        case 0x3d133cu: goto label_3d133c;
        case 0x3d1340u: goto label_3d1340;
        case 0x3d1344u: goto label_3d1344;
        case 0x3d1348u: goto label_3d1348;
        case 0x3d134cu: goto label_3d134c;
        case 0x3d1350u: goto label_3d1350;
        case 0x3d1354u: goto label_3d1354;
        case 0x3d1358u: goto label_3d1358;
        case 0x3d135cu: goto label_3d135c;
        case 0x3d1360u: goto label_3d1360;
        case 0x3d1364u: goto label_3d1364;
        case 0x3d1368u: goto label_3d1368;
        case 0x3d136cu: goto label_3d136c;
        case 0x3d1370u: goto label_3d1370;
        case 0x3d1374u: goto label_3d1374;
        case 0x3d1378u: goto label_3d1378;
        case 0x3d137cu: goto label_3d137c;
        case 0x3d1380u: goto label_3d1380;
        case 0x3d1384u: goto label_3d1384;
        case 0x3d1388u: goto label_3d1388;
        case 0x3d138cu: goto label_3d138c;
        case 0x3d1390u: goto label_3d1390;
        case 0x3d1394u: goto label_3d1394;
        case 0x3d1398u: goto label_3d1398;
        case 0x3d139cu: goto label_3d139c;
        case 0x3d13a0u: goto label_3d13a0;
        case 0x3d13a4u: goto label_3d13a4;
        case 0x3d13a8u: goto label_3d13a8;
        case 0x3d13acu: goto label_3d13ac;
        case 0x3d13b0u: goto label_3d13b0;
        case 0x3d13b4u: goto label_3d13b4;
        case 0x3d13b8u: goto label_3d13b8;
        case 0x3d13bcu: goto label_3d13bc;
        case 0x3d13c0u: goto label_3d13c0;
        case 0x3d13c4u: goto label_3d13c4;
        case 0x3d13c8u: goto label_3d13c8;
        case 0x3d13ccu: goto label_3d13cc;
        case 0x3d13d0u: goto label_3d13d0;
        case 0x3d13d4u: goto label_3d13d4;
        case 0x3d13d8u: goto label_3d13d8;
        case 0x3d13dcu: goto label_3d13dc;
        case 0x3d13e0u: goto label_3d13e0;
        case 0x3d13e4u: goto label_3d13e4;
        case 0x3d13e8u: goto label_3d13e8;
        case 0x3d13ecu: goto label_3d13ec;
        case 0x3d13f0u: goto label_3d13f0;
        case 0x3d13f4u: goto label_3d13f4;
        case 0x3d13f8u: goto label_3d13f8;
        case 0x3d13fcu: goto label_3d13fc;
        case 0x3d1400u: goto label_3d1400;
        case 0x3d1404u: goto label_3d1404;
        case 0x3d1408u: goto label_3d1408;
        case 0x3d140cu: goto label_3d140c;
        case 0x3d1410u: goto label_3d1410;
        case 0x3d1414u: goto label_3d1414;
        case 0x3d1418u: goto label_3d1418;
        case 0x3d141cu: goto label_3d141c;
        case 0x3d1420u: goto label_3d1420;
        case 0x3d1424u: goto label_3d1424;
        case 0x3d1428u: goto label_3d1428;
        case 0x3d142cu: goto label_3d142c;
        case 0x3d1430u: goto label_3d1430;
        case 0x3d1434u: goto label_3d1434;
        case 0x3d1438u: goto label_3d1438;
        case 0x3d143cu: goto label_3d143c;
        case 0x3d1440u: goto label_3d1440;
        case 0x3d1444u: goto label_3d1444;
        case 0x3d1448u: goto label_3d1448;
        case 0x3d144cu: goto label_3d144c;
        case 0x3d1450u: goto label_3d1450;
        case 0x3d1454u: goto label_3d1454;
        case 0x3d1458u: goto label_3d1458;
        case 0x3d145cu: goto label_3d145c;
        case 0x3d1460u: goto label_3d1460;
        case 0x3d1464u: goto label_3d1464;
        case 0x3d1468u: goto label_3d1468;
        case 0x3d146cu: goto label_3d146c;
        case 0x3d1470u: goto label_3d1470;
        case 0x3d1474u: goto label_3d1474;
        case 0x3d1478u: goto label_3d1478;
        case 0x3d147cu: goto label_3d147c;
        case 0x3d1480u: goto label_3d1480;
        case 0x3d1484u: goto label_3d1484;
        case 0x3d1488u: goto label_3d1488;
        case 0x3d148cu: goto label_3d148c;
        case 0x3d1490u: goto label_3d1490;
        case 0x3d1494u: goto label_3d1494;
        case 0x3d1498u: goto label_3d1498;
        case 0x3d149cu: goto label_3d149c;
        case 0x3d14a0u: goto label_3d14a0;
        case 0x3d14a4u: goto label_3d14a4;
        case 0x3d14a8u: goto label_3d14a8;
        case 0x3d14acu: goto label_3d14ac;
        case 0x3d14b0u: goto label_3d14b0;
        case 0x3d14b4u: goto label_3d14b4;
        case 0x3d14b8u: goto label_3d14b8;
        case 0x3d14bcu: goto label_3d14bc;
        case 0x3d14c0u: goto label_3d14c0;
        case 0x3d14c4u: goto label_3d14c4;
        case 0x3d14c8u: goto label_3d14c8;
        case 0x3d14ccu: goto label_3d14cc;
        case 0x3d14d0u: goto label_3d14d0;
        case 0x3d14d4u: goto label_3d14d4;
        case 0x3d14d8u: goto label_3d14d8;
        case 0x3d14dcu: goto label_3d14dc;
        case 0x3d14e0u: goto label_3d14e0;
        case 0x3d14e4u: goto label_3d14e4;
        case 0x3d14e8u: goto label_3d14e8;
        case 0x3d14ecu: goto label_3d14ec;
        case 0x3d14f0u: goto label_3d14f0;
        case 0x3d14f4u: goto label_3d14f4;
        case 0x3d14f8u: goto label_3d14f8;
        case 0x3d14fcu: goto label_3d14fc;
        case 0x3d1500u: goto label_3d1500;
        case 0x3d1504u: goto label_3d1504;
        case 0x3d1508u: goto label_3d1508;
        case 0x3d150cu: goto label_3d150c;
        case 0x3d1510u: goto label_3d1510;
        case 0x3d1514u: goto label_3d1514;
        case 0x3d1518u: goto label_3d1518;
        case 0x3d151cu: goto label_3d151c;
        case 0x3d1520u: goto label_3d1520;
        case 0x3d1524u: goto label_3d1524;
        case 0x3d1528u: goto label_3d1528;
        case 0x3d152cu: goto label_3d152c;
        case 0x3d1530u: goto label_3d1530;
        case 0x3d1534u: goto label_3d1534;
        case 0x3d1538u: goto label_3d1538;
        case 0x3d153cu: goto label_3d153c;
        case 0x3d1540u: goto label_3d1540;
        case 0x3d1544u: goto label_3d1544;
        case 0x3d1548u: goto label_3d1548;
        case 0x3d154cu: goto label_3d154c;
        case 0x3d1550u: goto label_3d1550;
        case 0x3d1554u: goto label_3d1554;
        case 0x3d1558u: goto label_3d1558;
        case 0x3d155cu: goto label_3d155c;
        case 0x3d1560u: goto label_3d1560;
        case 0x3d1564u: goto label_3d1564;
        case 0x3d1568u: goto label_3d1568;
        case 0x3d156cu: goto label_3d156c;
        case 0x3d1570u: goto label_3d1570;
        case 0x3d1574u: goto label_3d1574;
        case 0x3d1578u: goto label_3d1578;
        case 0x3d157cu: goto label_3d157c;
        case 0x3d1580u: goto label_3d1580;
        case 0x3d1584u: goto label_3d1584;
        case 0x3d1588u: goto label_3d1588;
        case 0x3d158cu: goto label_3d158c;
        case 0x3d1590u: goto label_3d1590;
        case 0x3d1594u: goto label_3d1594;
        case 0x3d1598u: goto label_3d1598;
        case 0x3d159cu: goto label_3d159c;
        case 0x3d15a0u: goto label_3d15a0;
        case 0x3d15a4u: goto label_3d15a4;
        case 0x3d15a8u: goto label_3d15a8;
        case 0x3d15acu: goto label_3d15ac;
        case 0x3d15b0u: goto label_3d15b0;
        case 0x3d15b4u: goto label_3d15b4;
        case 0x3d15b8u: goto label_3d15b8;
        case 0x3d15bcu: goto label_3d15bc;
        case 0x3d15c0u: goto label_3d15c0;
        case 0x3d15c4u: goto label_3d15c4;
        case 0x3d15c8u: goto label_3d15c8;
        case 0x3d15ccu: goto label_3d15cc;
        case 0x3d15d0u: goto label_3d15d0;
        case 0x3d15d4u: goto label_3d15d4;
        case 0x3d15d8u: goto label_3d15d8;
        case 0x3d15dcu: goto label_3d15dc;
        case 0x3d15e0u: goto label_3d15e0;
        case 0x3d15e4u: goto label_3d15e4;
        case 0x3d15e8u: goto label_3d15e8;
        case 0x3d15ecu: goto label_3d15ec;
        case 0x3d15f0u: goto label_3d15f0;
        case 0x3d15f4u: goto label_3d15f4;
        case 0x3d15f8u: goto label_3d15f8;
        case 0x3d15fcu: goto label_3d15fc;
        case 0x3d1600u: goto label_3d1600;
        case 0x3d1604u: goto label_3d1604;
        case 0x3d1608u: goto label_3d1608;
        case 0x3d160cu: goto label_3d160c;
        case 0x3d1610u: goto label_3d1610;
        case 0x3d1614u: goto label_3d1614;
        case 0x3d1618u: goto label_3d1618;
        case 0x3d161cu: goto label_3d161c;
        case 0x3d1620u: goto label_3d1620;
        case 0x3d1624u: goto label_3d1624;
        case 0x3d1628u: goto label_3d1628;
        case 0x3d162cu: goto label_3d162c;
        case 0x3d1630u: goto label_3d1630;
        case 0x3d1634u: goto label_3d1634;
        case 0x3d1638u: goto label_3d1638;
        case 0x3d163cu: goto label_3d163c;
        case 0x3d1640u: goto label_3d1640;
        case 0x3d1644u: goto label_3d1644;
        case 0x3d1648u: goto label_3d1648;
        case 0x3d164cu: goto label_3d164c;
        case 0x3d1650u: goto label_3d1650;
        case 0x3d1654u: goto label_3d1654;
        case 0x3d1658u: goto label_3d1658;
        case 0x3d165cu: goto label_3d165c;
        case 0x3d1660u: goto label_3d1660;
        case 0x3d1664u: goto label_3d1664;
        case 0x3d1668u: goto label_3d1668;
        case 0x3d166cu: goto label_3d166c;
        case 0x3d1670u: goto label_3d1670;
        case 0x3d1674u: goto label_3d1674;
        case 0x3d1678u: goto label_3d1678;
        case 0x3d167cu: goto label_3d167c;
        case 0x3d1680u: goto label_3d1680;
        case 0x3d1684u: goto label_3d1684;
        case 0x3d1688u: goto label_3d1688;
        case 0x3d168cu: goto label_3d168c;
        case 0x3d1690u: goto label_3d1690;
        case 0x3d1694u: goto label_3d1694;
        case 0x3d1698u: goto label_3d1698;
        case 0x3d169cu: goto label_3d169c;
        case 0x3d16a0u: goto label_3d16a0;
        case 0x3d16a4u: goto label_3d16a4;
        case 0x3d16a8u: goto label_3d16a8;
        case 0x3d16acu: goto label_3d16ac;
        case 0x3d16b0u: goto label_3d16b0;
        case 0x3d16b4u: goto label_3d16b4;
        case 0x3d16b8u: goto label_3d16b8;
        case 0x3d16bcu: goto label_3d16bc;
        case 0x3d16c0u: goto label_3d16c0;
        case 0x3d16c4u: goto label_3d16c4;
        case 0x3d16c8u: goto label_3d16c8;
        case 0x3d16ccu: goto label_3d16cc;
        case 0x3d16d0u: goto label_3d16d0;
        case 0x3d16d4u: goto label_3d16d4;
        case 0x3d16d8u: goto label_3d16d8;
        case 0x3d16dcu: goto label_3d16dc;
        case 0x3d16e0u: goto label_3d16e0;
        case 0x3d16e4u: goto label_3d16e4;
        case 0x3d16e8u: goto label_3d16e8;
        case 0x3d16ecu: goto label_3d16ec;
        case 0x3d16f0u: goto label_3d16f0;
        case 0x3d16f4u: goto label_3d16f4;
        case 0x3d16f8u: goto label_3d16f8;
        case 0x3d16fcu: goto label_3d16fc;
        case 0x3d1700u: goto label_3d1700;
        case 0x3d1704u: goto label_3d1704;
        case 0x3d1708u: goto label_3d1708;
        case 0x3d170cu: goto label_3d170c;
        case 0x3d1710u: goto label_3d1710;
        case 0x3d1714u: goto label_3d1714;
        case 0x3d1718u: goto label_3d1718;
        default: break;
    }

    ctx->pc = 0x3d0450u;

label_3d0450:
    // 0x3d0450: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3d0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3d0454:
    // 0x3d0454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d0454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d0458:
    // 0x3d0458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d0458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d045c:
    // 0x3d045c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d0460:
    // 0x3d0460: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d0460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d0464:
    // 0x3d0464: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_3d0468:
    if (ctx->pc == 0x3D0468u) {
        ctx->pc = 0x3D0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0464u;
        // 0x3d0468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D046Cu;
        goto label_3d046c;
    }
    ctx->pc = 0x3D0464u;
    {
        const bool branch_taken_0x3d0464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0464u;
        // 0x3d0468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0464) {
            ctx->pc = 0x3D0480u;
            goto label_3d0480;
        }
    }
    ctx->pc = 0x3D046Cu;
label_3d046c:
    // 0x3d046c: 0xc0c0830  jal         func_3020C0
label_3d0470:
    if (ctx->pc == 0x3D0470u) {
        ctx->pc = 0x3D0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D046Cu;
        // 0x3d0470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0474u;
        goto label_3d0474;
    }
    ctx->pc = 0x3D046Cu;
    SET_GPR_U32(ctx, 31, 0x3D0474u);
    ctx->pc = 0x3D0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D046Cu;
    // 0x3d0470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D046Cu, 0x3D0474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0474u;
label_3d0474:
    // 0x3d0474: 0x100004a4  b           . + 4 + (0x4A4 << 2)
label_3d0478:
    if (ctx->pc == 0x3D0478u) {
        ctx->pc = 0x3D047Cu;
        goto label_3d047c;
    }
    ctx->pc = 0x3D0474u;
    {
        const bool branch_taken_0x3d0474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0474) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D047Cu;
label_3d047c:
    // 0x3d047c: 0x0  nop
    ctx->pc = 0x3d047cu;
    // NOP
label_3d0480:
    // 0x3d0480: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3d0484:
    if (ctx->pc == 0x3D0484u) {
        ctx->pc = 0x3D0488u;
        goto label_3d0488;
    }
    ctx->pc = 0x3D0480u;
    {
        const bool branch_taken_0x3d0480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0480) {
            ctx->pc = 0x3D04A8u;
            goto label_3d04a8;
        }
    }
    ctx->pc = 0x3D0488u;
label_3d0488:
    // 0x3d0488: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3d0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_3d048c:
    // 0x3d048c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3d048cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3d0490:
    // 0x3d0490: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3d0494:
    if (ctx->pc == 0x3D0494u) {
        ctx->pc = 0x3D0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0490u;
        // 0x3d0494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0498u;
        goto label_3d0498;
    }
    ctx->pc = 0x3D0490u;
    {
        const bool branch_taken_0x3d0490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0490u;
        // 0x3d0494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0490) {
            ctx->pc = 0x3D04A8u;
            goto label_3d04a8;
        }
    }
    ctx->pc = 0x3D0498u;
label_3d0498:
    // 0x3d0498: 0xc0c0830  jal         func_3020C0
label_3d049c:
    if (ctx->pc == 0x3D049Cu) {
        ctx->pc = 0x3D04A0u;
        goto label_3d04a0;
    }
    ctx->pc = 0x3D0498u;
    SET_GPR_U32(ctx, 31, 0x3D04A0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D0498u, 0x3D04A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D04A0u;
label_3d04a0:
    // 0x3d04a0: 0x10000499  b           . + 4 + (0x499 << 2)
label_3d04a4:
    if (ctx->pc == 0x3D04A4u) {
        ctx->pc = 0x3D04A8u;
        goto label_3d04a8;
    }
    ctx->pc = 0x3D04A0u;
    {
        const bool branch_taken_0x3d04a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d04a0) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D04A8u;
label_3d04a8:
    // 0x3d04a8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d04a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d04ac:
    // 0x3d04ac: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3d04acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3d04b0:
    // 0x3d04b0: 0x10200495  beqz        $at, . + 4 + (0x495 << 2)
label_3d04b4:
    if (ctx->pc == 0x3D04B4u) {
        ctx->pc = 0x3D04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D04B0u;
        // 0x3d04b4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D04B8u;
        goto label_3d04b8;
    }
    ctx->pc = 0x3D04B0u;
    {
        const bool branch_taken_0x3d04b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D04B0u;
        // 0x3d04b4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d04b0) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D04B8u;
label_3d04b8:
    // 0x3d04b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d04bc:
    // 0x3d04bc: 0x24843190  addiu       $a0, $a0, 0x3190
    ctx->pc = 0x3d04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12688));
label_3d04c0:
    // 0x3d04c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d04c4:
    // 0x3d04c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d04c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d04c8:
    // 0x3d04c8: 0x600008  jr          $v1
label_3d04cc:
    if (ctx->pc == 0x3D04CCu) {
        ctx->pc = 0x3D04D0u;
        goto label_3d04d0;
    }
    ctx->pc = 0x3D04C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D04D0u: goto label_3d04d0;
            case 0x3D0548u: goto label_3d0548;
            case 0x3D07E8u: goto label_3d07e8;
            case 0x3D0F58u: goto label_3d0f58;
            case 0x3D1388u: goto label_3d1388;
            case 0x3D1498u: goto label_3d1498;
            case 0x3D1510u: goto label_3d1510;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D04C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D04D0u;
label_3d04d0:
    // 0x3d04d0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_3d04d4:
    if (ctx->pc == 0x3D04D4u) {
        ctx->pc = 0x3D04D8u;
        goto label_3d04d8;
    }
    ctx->pc = 0x3D04D0u;
    {
        const bool branch_taken_0x3d04d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d04d0) {
            ctx->pc = 0x3D0528u;
            goto label_3d0528;
        }
    }
    ctx->pc = 0x3D04D8u;
label_3d04d8:
    // 0x3d04d8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d04d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3d04dc:
    // 0x3d04dc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d04dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3d04e0:
    // 0x3d04e0: 0xc0aaac4  jal         func_2AAB10
label_3d04e4:
    if (ctx->pc == 0x3D04E4u) {
        ctx->pc = 0x3D04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D04E0u;
        // 0x3d04e4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D04E8u;
        goto label_3d04e8;
    }
    ctx->pc = 0x3D04E0u;
    SET_GPR_U32(ctx, 31, 0x3D04E8u);
    ctx->pc = 0x3D04E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D04E0u;
    // 0x3d04e4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAB10u, 0x3D04E0u, 0x3D04E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D04E8u;
label_3d04e8:
    // 0x3d04e8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3d04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_3d04ec:
    // 0x3d04ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d04ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3d04f0:
    // 0x3d04f0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d04f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3d04f4:
    // 0x3d04f4: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x3d04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
label_3d04f8:
    // 0x3d04f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3d04fc:
    // 0x3d04fc: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3d04fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
label_3d0500:
    // 0x3d0500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0504:
    // 0x3d0504: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d0504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d0508:
    // 0x3d0508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d0508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d050c:
    // 0x3d050c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d050cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0510:
    // 0x3d0510: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d0510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0514:
    // 0x3d0514: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d0514u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0518:
    // 0x3d0518: 0xc05e9e8  jal         func_17A7A0
label_3d051c:
    if (ctx->pc == 0x3D051Cu) {
        ctx->pc = 0x3D051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0518u;
        // 0x3d051c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0520u;
        goto label_3d0520;
    }
    ctx->pc = 0x3D0518u;
    SET_GPR_U32(ctx, 31, 0x3D0520u);
    ctx->pc = 0x3D051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0518u;
    // 0x3d051c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D0518u, 0x3D0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0520u;
label_3d0520:
    // 0x3d0520: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d0524:
    if (ctx->pc == 0x3D0524u) {
        ctx->pc = 0x3D0528u;
        goto label_3d0528;
    }
    ctx->pc = 0x3D0520u;
    {
        const bool branch_taken_0x3d0520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0520) {
            ctx->pc = 0x3D0538u;
            goto label_3d0538;
        }
    }
    ctx->pc = 0x3D0528u;
label_3d0528:
    // 0x3d0528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d052c:
    // 0x3d052c: 0xc0c0830  jal         func_3020C0
label_3d0530:
    if (ctx->pc == 0x3D0530u) {
        ctx->pc = 0x3D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D052Cu;
        // 0x3d0530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0534u;
        goto label_3d0534;
    }
    ctx->pc = 0x3D052Cu;
    SET_GPR_U32(ctx, 31, 0x3D0534u);
    ctx->pc = 0x3D0530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D052Cu;
    // 0x3d0530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D052Cu, 0x3D0534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0534u;
label_3d0534:
    // 0x3d0534: 0x0  nop
    ctx->pc = 0x3d0534u;
    // NOP
label_3d0538:
    // 0x3d0538: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d0538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d053c:
    // 0x3d053c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d0540:
    // 0x3d0540: 0x10000471  b           . + 4 + (0x471 << 2)
label_3d0544:
    if (ctx->pc == 0x3D0544u) {
        ctx->pc = 0x3D0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0540u;
        // 0x3d0544: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0548u;
        goto label_3d0548;
    }
    ctx->pc = 0x3D0540u;
    {
        const bool branch_taken_0x3d0540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0540u;
        // 0x3d0544: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0540) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D0548u;
label_3d0548:
    // 0x3d0548: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d054c:
    // 0x3d054c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0550:
    // 0x3d0550: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0554:
    // 0x3d0554: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0558:
    // 0x3d0558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d055c:
    // 0x3d055c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d055cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0560:
    // 0x3d0560: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0564:
    // 0x3d0564: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0568:
    // 0x3d0568: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d056c:
    if (ctx->pc == 0x3D056Cu) {
        ctx->pc = 0x3D056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0568u;
        // 0x3d056c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0570u;
        goto label_3d0570;
    }
    ctx->pc = 0x3D0568u;
    {
        const bool branch_taken_0x3d0568 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0568u;
        // 0x3d056c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0568) {
            ctx->pc = 0x3D057Cu;
            goto label_3d057c;
        }
    }
    ctx->pc = 0x3D0570u;
label_3d0570:
    // 0x3d0570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0574:
    // 0x3d0574: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d0578:
    if (ctx->pc == 0x3D0578u) {
        ctx->pc = 0x3D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0574u;
        // 0x3d0578: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D057Cu;
        goto label_3d057c;
    }
    ctx->pc = 0x3D0574u;
    {
        const bool branch_taken_0x3d0574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0574u;
        // 0x3d0578: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0574) {
            ctx->pc = 0x3D0594u;
            goto label_3d0594;
        }
    }
    ctx->pc = 0x3D057Cu;
label_3d057c:
    // 0x3d057c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0580:
    // 0x3d0580: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0584:
    // 0x3d0584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0588:
    // 0x3d0588: 0x0  nop
    ctx->pc = 0x3d0588u;
    // NOP
label_3d058c:
    // 0x3d058c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d058cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0590:
    // 0x3d0590: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0590u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0594:
    // 0x3d0594: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3d0594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_3d0598:
    // 0x3d0598: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d0598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d059c:
    // 0x3d059c: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3d059cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d05a0:
    // 0x3d05a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d05a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d05a4:
    // 0x3d05a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d05a8:
    // 0x3d05a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d05a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d05ac:
    // 0x3d05ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d05acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d05b0:
    // 0x3d05b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d05b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3d05b4:
    // 0x3d05b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d05b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3d05b8:
    // 0x3d05b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d05b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d05bc:
    // 0x3d05bc: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x3d05bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3d05c0:
    // 0x3d05c0: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x3d05c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
label_3d05c4:
    // 0x3d05c4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d05c8:
    // 0x3d05c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d05c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d05cc:
    // 0x3d05cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d05d0:
    // 0x3d05d0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d05d4:
    // 0x3d05d4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d05d8:
    // 0x3d05d8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d05dc:
    // 0x3d05dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d05e0:
    if (ctx->pc == 0x3D05E0u) {
        ctx->pc = 0x3D05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D05DCu;
        // 0x3d05e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D05E4u;
        goto label_3d05e4;
    }
    ctx->pc = 0x3D05DCu;
    {
        const bool branch_taken_0x3d05dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D05DCu;
        // 0x3d05e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d05dc) {
            ctx->pc = 0x3D05F0u;
            goto label_3d05f0;
        }
    }
    ctx->pc = 0x3D05E4u;
label_3d05e4:
    // 0x3d05e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d05e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d05e8:
    // 0x3d05e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d05ec:
    if (ctx->pc == 0x3D05ECu) {
        ctx->pc = 0x3D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D05E8u;
        // 0x3d05ec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D05F0u;
        goto label_3d05f0;
    }
    ctx->pc = 0x3D05E8u;
    {
        const bool branch_taken_0x3d05e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D05E8u;
        // 0x3d05ec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d05e8) {
            ctx->pc = 0x3D0608u;
            goto label_3d0608;
        }
    }
    ctx->pc = 0x3D05F0u;
label_3d05f0:
    // 0x3d05f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d05f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d05f4:
    // 0x3d05f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d05f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d05f8:
    // 0x3d05f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d05f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d05fc:
    // 0x3d05fc: 0x0  nop
    ctx->pc = 0x3d05fcu;
    // NOP
label_3d0600:
    // 0x3d0600: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0604:
    // 0x3d0604: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0604u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0608:
    // 0x3d0608: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3d0608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3d060c:
    // 0x3d060c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d0610:
    // 0x3d0610: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0614:
    // 0x3d0614: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3d0614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3d0618:
    // 0x3d0618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d061c:
    // 0x3d061c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0620:
    // 0x3d0620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d0620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0624:
    // 0x3d0624: 0x0  nop
    ctx->pc = 0x3d0624u;
    // NOP
label_3d0628:
    // 0x3d0628: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d0628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3d062c:
    // 0x3d062c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d062cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3d0630:
    // 0x3d0630: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d0630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d0634:
    // 0x3d0634: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x3d0634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_3d0638:
    // 0x3d0638: 0xc0766dc  jal         func_1D9B70
label_3d063c:
    if (ctx->pc == 0x3D063Cu) {
        ctx->pc = 0x3D063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0638u;
        // 0x3d063c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0640u;
        goto label_3d0640;
    }
    ctx->pc = 0x3D0638u;
    SET_GPR_U32(ctx, 31, 0x3D0640u);
    ctx->pc = 0x3D063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0638u;
    // 0x3d063c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3D0638u, 0x3D0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0640u;
label_3d0640:
    // 0x3d0640: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0644:
    // 0x3d0644: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0648:
    // 0x3d0648: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d064c:
    // 0x3d064c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d064cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0650:
    // 0x3d0650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0654:
    // 0x3d0654: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0658:
    // 0x3d0658: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d065c:
    // 0x3d065c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0660:
    // 0x3d0660: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0664:
    if (ctx->pc == 0x3D0664u) {
        ctx->pc = 0x3D0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0660u;
        // 0x3d0664: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0668u;
        goto label_3d0668;
    }
    ctx->pc = 0x3D0660u;
    {
        const bool branch_taken_0x3d0660 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0660u;
        // 0x3d0664: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0660) {
            ctx->pc = 0x3D0674u;
            goto label_3d0674;
        }
    }
    ctx->pc = 0x3D0668u;
label_3d0668:
    // 0x3d0668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d066c:
    // 0x3d066c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d0670:
    if (ctx->pc == 0x3D0670u) {
        ctx->pc = 0x3D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D066Cu;
        // 0x3d0670: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0674u;
        goto label_3d0674;
    }
    ctx->pc = 0x3D066Cu;
    {
        const bool branch_taken_0x3d066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D066Cu;
        // 0x3d0670: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d066c) {
            ctx->pc = 0x3D068Cu;
            goto label_3d068c;
        }
    }
    ctx->pc = 0x3D0674u;
label_3d0674:
    // 0x3d0674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0678:
    // 0x3d0678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d067c:
    // 0x3d067c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d067cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0680:
    // 0x3d0680: 0x0  nop
    ctx->pc = 0x3d0680u;
    // NOP
label_3d0684:
    // 0x3d0684: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d0684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d0688:
    // 0x3d0688: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d0688u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d068c:
    // 0x3d068c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3d068cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3d0690:
    // 0x3d0690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d0690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d0694:
    // 0x3d0694: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3d0694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0698:
    // 0x3d0698: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d0698u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d069c:
    // 0x3d069c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3d069cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_3d06a0:
    // 0x3d06a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d06a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d06a4:
    // 0x3d06a4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d06a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d06a8:
    // 0x3d06a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d06ac:
    // 0x3d06ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d06acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d06b0:
    // 0x3d06b0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3d06b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3d06b4:
    // 0x3d06b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d06b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d06b8:
    // 0x3d06b8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3d06b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d06bc:
    // 0x3d06bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d06bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d06c0:
    // 0x3d06c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d06c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d06c4:
    // 0x3d06c4: 0xe6200570  swc1        $f0, 0x570($s1)
    ctx->pc = 0x3d06c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
label_3d06c8:
    // 0x3d06c8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d06cc:
    // 0x3d06cc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d06ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d06d0:
    // 0x3d06d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d06d4:
    // 0x3d06d4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d06d8:
    // 0x3d06d8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d06dc:
    // 0x3d06dc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d06e0:
    // 0x3d06e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d06e4:
    if (ctx->pc == 0x3D06E4u) {
        ctx->pc = 0x3D06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06E0u;
        // 0x3d06e4: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D06E8u;
        goto label_3d06e8;
    }
    ctx->pc = 0x3D06E0u;
    {
        const bool branch_taken_0x3d06e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06E0u;
        // 0x3d06e4: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06e0) {
            ctx->pc = 0x3D06F4u;
            goto label_3d06f4;
        }
    }
    ctx->pc = 0x3D06E8u;
label_3d06e8:
    // 0x3d06e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d06e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d06ec:
    // 0x3d06ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d06f0:
    if (ctx->pc == 0x3D06F0u) {
        ctx->pc = 0x3D06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06ECu;
        // 0x3d06f0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D06F4u;
        goto label_3d06f4;
    }
    ctx->pc = 0x3D06ECu;
    {
        const bool branch_taken_0x3d06ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06ECu;
        // 0x3d06f0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06ec) {
            ctx->pc = 0x3D0710u;
            goto label_3d0710;
        }
    }
    ctx->pc = 0x3D06F4u;
label_3d06f4:
    // 0x3d06f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d06f8:
    // 0x3d06f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d06f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d06fc:
    // 0x3d06fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d06fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0700:
    // 0x3d0700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0704:
    // 0x3d0704: 0x0  nop
    ctx->pc = 0x3d0704u;
    // NOP
label_3d0708:
    // 0x3d0708: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d070c:
    // 0x3d070c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d070cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0710:
    // 0x3d0710: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x3d0710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_3d0714:
    // 0x3d0714: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3d0714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_3d0718:
    // 0x3d0718: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3d0718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d071c:
    // 0x3d071c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d071cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0720:
    // 0x3d0720: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0724:
    // 0x3d0724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0728:
    // 0x3d0728: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d072c:
    // 0x3d072c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d072cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0730:
    // 0x3d0730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0734:
    // 0x3d0734: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d0734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3d0738:
    // 0x3d0738: 0xe6200574  swc1        $f0, 0x574($s1)
    ctx->pc = 0x3d0738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
label_3d073c:
    // 0x3d073c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0740:
    // 0x3d0740: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0744:
    // 0x3d0744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0748:
    // 0x3d0748: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d074c:
    // 0x3d074c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0750:
    // 0x3d0750: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0754:
    // 0x3d0754: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0758:
    if (ctx->pc == 0x3D0758u) {
        ctx->pc = 0x3D0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0754u;
        // 0x3d0758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D075Cu;
        goto label_3d075c;
    }
    ctx->pc = 0x3D0754u;
    {
        const bool branch_taken_0x3d0754 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0754u;
        // 0x3d0758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0754) {
            ctx->pc = 0x3D0768u;
            goto label_3d0768;
        }
    }
    ctx->pc = 0x3D075Cu;
label_3d075c:
    // 0x3d075c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d075cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0760:
    // 0x3d0760: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d0764:
    if (ctx->pc == 0x3D0764u) {
        ctx->pc = 0x3D0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0760u;
        // 0x3d0764: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0768u;
        goto label_3d0768;
    }
    ctx->pc = 0x3D0760u;
    {
        const bool branch_taken_0x3d0760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0760u;
        // 0x3d0764: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0760) {
            ctx->pc = 0x3D0780u;
            goto label_3d0780;
        }
    }
    ctx->pc = 0x3D0768u;
label_3d0768:
    // 0x3d0768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d076c:
    // 0x3d076c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0770:
    // 0x3d0770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0774:
    // 0x3d0774: 0x0  nop
    ctx->pc = 0x3d0774u;
    // NOP
label_3d0778:
    // 0x3d0778: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d0778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d077c:
    // 0x3d077c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d077cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d0780:
    // 0x3d0780: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3d0780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_3d0784:
    // 0x3d0784: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d0784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d0788:
    // 0x3d0788: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3d0788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d078c:
    // 0x3d078c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d078cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d0790:
    // 0x3d0790: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_3d0794:
    // 0x3d0794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d0794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0798:
    // 0x3d0798: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x3d0798u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d079c:
    // 0x3d079c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3d079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_3d07a0:
    // 0x3d07a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3d07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3d07a4:
    // 0x3d07a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3d07a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d07a8:
    // 0x3d07a8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3d07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d07ac:
    // 0x3d07ac: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3d07acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3d07b0:
    // 0x3d07b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d07b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d07b4:
    // 0x3d07b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d07b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d07b8:
    // 0x3d07b8: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x3d07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
label_3d07bc:
    // 0x3d07bc: 0xae23057c  sw          $v1, 0x57C($s1)
    ctx->pc = 0x3d07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1404), GPR_U32(ctx, 3));
label_3d07c0:
    // 0x3d07c0: 0xae22055c  sw          $v0, 0x55C($s1)
    ctx->pc = 0x3d07c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1372), GPR_U32(ctx, 2));
label_3d07c4:
    // 0x3d07c4: 0xa6200560  sh          $zero, 0x560($s1)
    ctx->pc = 0x3d07c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1376), (uint16_t)GPR_U32(ctx, 0));
label_3d07c8:
    // 0x3d07c8: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3d07c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_3d07cc:
    // 0x3d07cc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d07ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3d07d0:
    // 0x3d07d0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d07d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3d07d4:
    // 0x3d07d4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d07d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3d07d8:
    // 0x3d07d8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d07d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3d07dc:
    // 0x3d07dc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d07dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d07e0:
    // 0x3d07e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d07e4:
    // 0x3d07e4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d07e8:
    // 0x3d07e8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3d07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3d07ec:
    // 0x3d07ec: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3d07ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d07f0:
    // 0x3d07f0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d07f4:
    // 0x3d07f4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3d07f8:
    // 0x3d07f8: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3d07f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3d07fc:
    // 0x3d07fc: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3d07fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_3d0800:
    // 0x3d0800: 0xc62c055c  lwc1        $f12, 0x55C($s1)
    ctx->pc = 0x3d0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d0804:
    // 0x3d0804: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3d0804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d0808:
    // 0x3d0808: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d0808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d080c:
    // 0x3d080c: 0xc0768b4  jal         func_1DA2D0
label_3d0810:
    if (ctx->pc == 0x3D0810u) {
        ctx->pc = 0x3D0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D080Cu;
        // 0x3d0810: 0x26260570  addiu       $a2, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0814u;
        goto label_3d0814;
    }
    ctx->pc = 0x3D080Cu;
    SET_GPR_U32(ctx, 31, 0x3D0814u);
    ctx->pc = 0x3D0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D080Cu;
    // 0x3d0810: 0x26260570  addiu       $a2, $s1, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3D080Cu, 0x3D0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0814u;
label_3d0814:
    // 0x3d0814: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x3d0814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_3d0818:
    // 0x3d0818: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3d0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3d081c:
    // 0x3d081c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d081cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0820:
    // 0x3d0820: 0x0  nop
    ctx->pc = 0x3d0820u;
    // NOP
label_3d0824:
    // 0x3d0824: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d0824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0828:
    // 0x3d0828: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_3d082c:
    if (ctx->pc == 0x3D082Cu) {
        ctx->pc = 0x3D0830u;
        goto label_3d0830;
    }
    ctx->pc = 0x3D0828u;
    {
        const bool branch_taken_0x3d0828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0828) {
            ctx->pc = 0x3D0848u;
            goto label_3d0848;
        }
    }
    ctx->pc = 0x3D0830u;
label_3d0830:
    // 0x3d0830: 0x86220560  lh          $v0, 0x560($s1)
    ctx->pc = 0x3d0830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1376)));
label_3d0834:
    // 0x3d0834: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3d0834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0838:
    // 0x3d0838: 0x284200c0  slti        $v0, $v0, 0xC0
    ctx->pc = 0x3d0838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)192) ? 1 : 0);
label_3d083c:
    // 0x3d083c: 0x14400164  bnez        $v0, . + 4 + (0x164 << 2)
label_3d0840:
    if (ctx->pc == 0x3D0840u) {
        ctx->pc = 0x3D0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D083Cu;
        // 0x3d0840: 0xa6230560  sh          $v1, 0x560($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1376), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0844u;
        goto label_3d0844;
    }
    ctx->pc = 0x3D083Cu;
    {
        const bool branch_taken_0x3d083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D083Cu;
        // 0x3d0840: 0xa6230560  sh          $v1, 0x560($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1376), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d083c) {
            ctx->pc = 0x3D0DD0u;
            goto label_3d0dd0;
        }
    }
    ctx->pc = 0x3D0844u;
label_3d0844:
    // 0x3d0844: 0x0  nop
    ctx->pc = 0x3d0844u;
    // NOP
label_3d0848:
    // 0x3d0848: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d084c:
    // 0x3d084c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0850:
    // 0x3d0850: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0854:
    // 0x3d0854: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0858:
    // 0x3d0858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d085c:
    // 0x3d085c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d085cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0860:
    // 0x3d0860: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0864:
    // 0x3d0864: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0864u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0868:
    // 0x3d0868: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d086c:
    if (ctx->pc == 0x3D086Cu) {
        ctx->pc = 0x3D086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0868u;
        // 0x3d086c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0870u;
        goto label_3d0870;
    }
    ctx->pc = 0x3D0868u;
    {
        const bool branch_taken_0x3d0868 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0868u;
        // 0x3d086c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0868) {
            ctx->pc = 0x3D087Cu;
            goto label_3d087c;
        }
    }
    ctx->pc = 0x3D0870u;
label_3d0870:
    // 0x3d0870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0874:
    // 0x3d0874: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d0878:
    if (ctx->pc == 0x3D0878u) {
        ctx->pc = 0x3D0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0874u;
        // 0x3d0878: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D087Cu;
        goto label_3d087c;
    }
    ctx->pc = 0x3D0874u;
    {
        const bool branch_taken_0x3d0874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0874u;
        // 0x3d0878: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0874) {
            ctx->pc = 0x3D0894u;
            goto label_3d0894;
        }
    }
    ctx->pc = 0x3D087Cu;
label_3d087c:
    // 0x3d087c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0880:
    // 0x3d0880: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0884:
    // 0x3d0884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0888:
    // 0x3d0888: 0x0  nop
    ctx->pc = 0x3d0888u;
    // NOP
label_3d088c:
    // 0x3d088c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d088cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d0890:
    // 0x3d0890: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d0890u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d0894:
    // 0x3d0894: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3d0894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3d0898:
    // 0x3d0898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d089c:
    // 0x3d089c: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3d089cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d08a0:
    // 0x3d08a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d08a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d08a4:
    // 0x3d08a4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3d08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_3d08a8:
    // 0x3d08a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d08a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d08ac:
    // 0x3d08ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d08acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d08b0:
    // 0x3d08b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d08b4:
    // 0x3d08b4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d08b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d08b8:
    // 0x3d08b8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3d08b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3d08bc:
    // 0x3d08bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d08bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d08c0:
    // 0x3d08c0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3d08c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d08c4:
    // 0x3d08c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d08c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d08c8:
    // 0x3d08c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d08c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d08cc:
    // 0x3d08cc: 0xe6200570  swc1        $f0, 0x570($s1)
    ctx->pc = 0x3d08ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
label_3d08d0:
    // 0x3d08d0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d08d4:
    // 0x3d08d4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d08d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d08d8:
    // 0x3d08d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d08dc:
    // 0x3d08dc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d08e0:
    // 0x3d08e0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d08e4:
    // 0x3d08e4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d08e8:
    // 0x3d08e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d08ec:
    if (ctx->pc == 0x3D08ECu) {
        ctx->pc = 0x3D08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D08E8u;
        // 0x3d08ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D08F0u;
        goto label_3d08f0;
    }
    ctx->pc = 0x3D08E8u;
    {
        const bool branch_taken_0x3d08e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D08E8u;
        // 0x3d08ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d08e8) {
            ctx->pc = 0x3D08FCu;
            goto label_3d08fc;
        }
    }
    ctx->pc = 0x3D08F0u;
label_3d08f0:
    // 0x3d08f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d08f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d08f4:
    // 0x3d08f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d08f8:
    if (ctx->pc == 0x3D08F8u) {
        ctx->pc = 0x3D08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D08F4u;
        // 0x3d08f8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D08FCu;
        goto label_3d08fc;
    }
    ctx->pc = 0x3D08F4u;
    {
        const bool branch_taken_0x3d08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D08F4u;
        // 0x3d08f8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d08f4) {
            ctx->pc = 0x3D0914u;
            goto label_3d0914;
        }
    }
    ctx->pc = 0x3D08FCu;
label_3d08fc:
    // 0x3d08fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d08fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0900:
    // 0x3d0900: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0904:
    // 0x3d0904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0908:
    // 0x3d0908: 0x0  nop
    ctx->pc = 0x3d0908u;
    // NOP
label_3d090c:
    // 0x3d090c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d090cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d0910:
    // 0x3d0910: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d0910u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d0914:
    // 0x3d0914: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3d0914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3d0918:
    // 0x3d0918: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d0918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d091c:
    // 0x3d091c: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3d091cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0920:
    // 0x3d0920: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d0920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d0924:
    // 0x3d0924: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3d0924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_3d0928:
    // 0x3d0928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d0928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d092c:
    // 0x3d092c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d092cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d0930:
    // 0x3d0930: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0934:
    // 0x3d0934: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0938:
    // 0x3d0938: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3d0938u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3d093c:
    // 0x3d093c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d093cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0940:
    // 0x3d0940: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3d0940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0944:
    // 0x3d0944: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0948:
    // 0x3d0948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d0948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d094c:
    // 0x3d094c: 0xe6200574  swc1        $f0, 0x574($s1)
    ctx->pc = 0x3d094cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
label_3d0950:
    // 0x3d0950: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0954:
    // 0x3d0954: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0958:
    // 0x3d0958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d095c:
    // 0x3d095c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d095cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0960:
    // 0x3d0960: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0964:
    // 0x3d0964: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0964u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0968:
    // 0x3d0968: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d096c:
    if (ctx->pc == 0x3D096Cu) {
        ctx->pc = 0x3D096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0968u;
        // 0x3d096c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0970u;
        goto label_3d0970;
    }
    ctx->pc = 0x3D0968u;
    {
        const bool branch_taken_0x3d0968 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0968u;
        // 0x3d096c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0968) {
            ctx->pc = 0x3D097Cu;
            goto label_3d097c;
        }
    }
    ctx->pc = 0x3D0970u;
label_3d0970:
    // 0x3d0970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0974:
    // 0x3d0974: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d0978:
    if (ctx->pc == 0x3D0978u) {
        ctx->pc = 0x3D0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0974u;
        // 0x3d0978: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D097Cu;
        goto label_3d097c;
    }
    ctx->pc = 0x3D0974u;
    {
        const bool branch_taken_0x3d0974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0974u;
        // 0x3d0978: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0974) {
            ctx->pc = 0x3D0994u;
            goto label_3d0994;
        }
    }
    ctx->pc = 0x3D097Cu;
label_3d097c:
    // 0x3d097c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0980:
    // 0x3d0980: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0984:
    // 0x3d0984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0988:
    // 0x3d0988: 0x0  nop
    ctx->pc = 0x3d0988u;
    // NOP
label_3d098c:
    // 0x3d098c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d098cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d0990:
    // 0x3d0990: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d0990u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d0994:
    // 0x3d0994: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3d0994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3d0998:
    // 0x3d0998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d0998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d099c:
    // 0x3d099c: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3d099cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d09a0:
    // 0x3d09a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d09a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d09a4:
    // 0x3d09a4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3d09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_3d09a8:
    // 0x3d09a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d09a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d09ac:
    // 0x3d09ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d09acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d09b0:
    // 0x3d09b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d09b4:
    // 0x3d09b4: 0x244230f0  addiu       $v0, $v0, 0x30F0
    ctx->pc = 0x3d09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12528));
label_3d09b8:
    // 0x3d09b8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3d09b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3d09bc:
    // 0x3d09bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d09bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d09c0:
    // 0x3d09c0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3d09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d09c4:
    // 0x3d09c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d09c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d09c8:
    // 0x3d09c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d09c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d09cc:
    // 0x3d09cc: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x3d09ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
label_3d09d0:
    // 0x3d09d0: 0x92240559  lbu         $a0, 0x559($s1)
    ctx->pc = 0x3d09d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d09d4:
    // 0x3d09d4: 0xc6210570  lwc1        $f1, 0x570($s1)
    ctx->pc = 0x3d09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d09d8:
    // 0x3d09d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3d09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d09dc:
    // 0x3d09dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d09dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d09e0:
    // 0x3d09e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d09e4:
    // 0x3d09e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d09e8:
    // 0x3d09e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d09e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d09ec:
    // 0x3d09ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d09ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d09f0:
    // 0x3d09f0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_3d09f4:
    if (ctx->pc == 0x3D09F4u) {
        ctx->pc = 0x3D09F8u;
        goto label_3d09f8;
    }
    ctx->pc = 0x3D09F0u;
    {
        const bool branch_taken_0x3d09f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d09f0) {
            ctx->pc = 0x3D0A78u;
            goto label_3d0a78;
        }
    }
    ctx->pc = 0x3D09F8u;
label_3d09f8:
    // 0x3d09f8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d09fc:
    // 0x3d09fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0a00:
    // 0x3d0a00: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0a04:
    // 0x3d0a04: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0a08:
    // 0x3d0a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0a0c:
    // 0x3d0a0c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0a10:
    // 0x3d0a10: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0a14:
    // 0x3d0a14: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0a18:
    // 0x3d0a18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0a1c:
    if (ctx->pc == 0x3D0A1Cu) {
        ctx->pc = 0x3D0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A18u;
        // 0x3d0a1c: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0A20u;
        goto label_3d0a20;
    }
    ctx->pc = 0x3D0A18u;
    {
        const bool branch_taken_0x3d0a18 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A18u;
        // 0x3d0a1c: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a18) {
            ctx->pc = 0x3D0A2Cu;
            goto label_3d0a2c;
        }
    }
    ctx->pc = 0x3D0A20u;
label_3d0a20:
    // 0x3d0a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0a24:
    // 0x3d0a24: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0a28:
    if (ctx->pc == 0x3D0A28u) {
        ctx->pc = 0x3D0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A24u;
        // 0x3d0a28: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0A2Cu;
        goto label_3d0a2c;
    }
    ctx->pc = 0x3D0A24u;
    {
        const bool branch_taken_0x3d0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A24u;
        // 0x3d0a28: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a24) {
            ctx->pc = 0x3D0A48u;
            goto label_3d0a48;
        }
    }
    ctx->pc = 0x3D0A2Cu;
label_3d0a2c:
    // 0x3d0a2c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d0a30:
    // 0x3d0a30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0a34:
    // 0x3d0a34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0a38:
    // 0x3d0a38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0a3c:
    // 0x3d0a3c: 0x0  nop
    ctx->pc = 0x3d0a3cu;
    // NOP
label_3d0a40:
    // 0x3d0a40: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0a44:
    // 0x3d0a44: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0a44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0a48:
    // 0x3d0a48: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d0a4c:
    // 0x3d0a4c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3d0a50:
    // 0x3d0a50: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0a54:
    // 0x3d0a54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0a58:
    // 0x3d0a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0a5c:
    // 0x3d0a5c: 0x0  nop
    ctx->pc = 0x3d0a5cu;
    // NOP
label_3d0a60:
    // 0x3d0a60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0a64:
    // 0x3d0a64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0a68:
    // 0x3d0a68: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d0a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3d0a6c:
    // 0x3d0a6c: 0x10000028  b           . + 4 + (0x28 << 2)
label_3d0a70:
    if (ctx->pc == 0x3D0A70u) {
        ctx->pc = 0x3D0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A6Cu;
        // 0x3d0a70: 0xe6200570  swc1        $f0, 0x570($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0A74u;
        goto label_3d0a74;
    }
    ctx->pc = 0x3D0A6Cu;
    {
        const bool branch_taken_0x3d0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A6Cu;
        // 0x3d0a70: 0xe6200570  swc1        $f0, 0x570($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a6c) {
            ctx->pc = 0x3D0B10u;
            goto label_3d0b10;
        }
    }
    ctx->pc = 0x3D0A74u;
label_3d0a74:
    // 0x3d0a74: 0x0  nop
    ctx->pc = 0x3d0a74u;
    // NOP
label_3d0a78:
    // 0x3d0a78: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d0a7c:
    // 0x3d0a7c: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x3d0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
label_3d0a80:
    // 0x3d0a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0a84:
    // 0x3d0a84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0a88:
    // 0x3d0a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d0a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0a8c:
    // 0x3d0a8c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_3d0a90:
    if (ctx->pc == 0x3D0A90u) {
        ctx->pc = 0x3D0A94u;
        goto label_3d0a94;
    }
    ctx->pc = 0x3D0A8Cu;
    {
        const bool branch_taken_0x3d0a8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0a8c) {
            ctx->pc = 0x3D0B10u;
            goto label_3d0b10;
        }
    }
    ctx->pc = 0x3D0A94u;
label_3d0a94:
    // 0x3d0a94: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0a98:
    // 0x3d0a98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0a9c:
    // 0x3d0a9c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0aa0:
    // 0x3d0aa0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0aa4:
    // 0x3d0aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0aa8:
    // 0x3d0aa8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0aac:
    // 0x3d0aac: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0ab0:
    // 0x3d0ab0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0ab4:
    // 0x3d0ab4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0ab8:
    if (ctx->pc == 0x3D0AB8u) {
        ctx->pc = 0x3D0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AB4u;
        // 0x3d0ab8: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0ABCu;
        goto label_3d0abc;
    }
    ctx->pc = 0x3D0AB4u;
    {
        const bool branch_taken_0x3d0ab4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AB4u;
        // 0x3d0ab8: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ab4) {
            ctx->pc = 0x3D0AC8u;
            goto label_3d0ac8;
        }
    }
    ctx->pc = 0x3D0ABCu;
label_3d0abc:
    // 0x3d0abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0ac0:
    // 0x3d0ac0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0ac4:
    if (ctx->pc == 0x3D0AC4u) {
        ctx->pc = 0x3D0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AC0u;
        // 0x3d0ac4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0AC8u;
        goto label_3d0ac8;
    }
    ctx->pc = 0x3D0AC0u;
    {
        const bool branch_taken_0x3d0ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AC0u;
        // 0x3d0ac4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ac0) {
            ctx->pc = 0x3D0AE4u;
            goto label_3d0ae4;
        }
    }
    ctx->pc = 0x3D0AC8u;
label_3d0ac8:
    // 0x3d0ac8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d0ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d0acc:
    // 0x3d0acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0ad0:
    // 0x3d0ad0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0ad4:
    // 0x3d0ad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0ad8:
    // 0x3d0ad8: 0x0  nop
    ctx->pc = 0x3d0ad8u;
    // NOP
label_3d0adc:
    // 0x3d0adc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0ae0:
    // 0x3d0ae0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0ae0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0ae4:
    // 0x3d0ae4: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d0ae8:
    // 0x3d0ae8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3d0aec:
    // 0x3d0aec: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0af0:
    // 0x3d0af0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0af4:
    // 0x3d0af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0af8:
    // 0x3d0af8: 0x0  nop
    ctx->pc = 0x3d0af8u;
    // NOP
label_3d0afc:
    // 0x3d0afc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0afcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0b00:
    // 0x3d0b00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0b04:
    // 0x3d0b04: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3d0b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d0b08:
    // 0x3d0b08: 0xe6200570  swc1        $f0, 0x570($s1)
    ctx->pc = 0x3d0b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
label_3d0b0c:
    // 0x3d0b0c: 0x0  nop
    ctx->pc = 0x3d0b0cu;
    // NOP
label_3d0b10:
    // 0x3d0b10: 0x92240559  lbu         $a0, 0x559($s1)
    ctx->pc = 0x3d0b10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d0b14:
    // 0x3d0b14: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d0b18:
    // 0x3d0b18: 0x244230f4  addiu       $v0, $v0, 0x30F4
    ctx->pc = 0x3d0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12532));
label_3d0b1c:
    // 0x3d0b1c: 0xc6210574  lwc1        $f1, 0x574($s1)
    ctx->pc = 0x3d0b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0b20:
    // 0x3d0b20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3d0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0b24:
    // 0x3d0b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0b28:
    // 0x3d0b28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d0b2c:
    // 0x3d0b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0b30:
    // 0x3d0b30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0b34:
    // 0x3d0b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d0b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0b38:
    // 0x3d0b38: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_3d0b3c:
    if (ctx->pc == 0x3D0B3Cu) {
        ctx->pc = 0x3D0B40u;
        goto label_3d0b40;
    }
    ctx->pc = 0x3D0B38u;
    {
        const bool branch_taken_0x3d0b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0b38) {
            ctx->pc = 0x3D0BC0u;
            goto label_3d0bc0;
        }
    }
    ctx->pc = 0x3D0B40u;
label_3d0b40:
    // 0x3d0b40: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0b44:
    // 0x3d0b44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0b48:
    // 0x3d0b48: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0b4c:
    // 0x3d0b4c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0b50:
    // 0x3d0b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0b54:
    // 0x3d0b54: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0b58:
    // 0x3d0b58: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0b5c:
    // 0x3d0b5c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0b60:
    // 0x3d0b60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0b64:
    if (ctx->pc == 0x3D0B64u) {
        ctx->pc = 0x3D0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B60u;
        // 0x3d0b64: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0B68u;
        goto label_3d0b68;
    }
    ctx->pc = 0x3D0B60u;
    {
        const bool branch_taken_0x3d0b60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B60u;
        // 0x3d0b64: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0b60) {
            ctx->pc = 0x3D0B74u;
            goto label_3d0b74;
        }
    }
    ctx->pc = 0x3D0B68u;
label_3d0b68:
    // 0x3d0b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0b6c:
    // 0x3d0b6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0b70:
    if (ctx->pc == 0x3D0B70u) {
        ctx->pc = 0x3D0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B6Cu;
        // 0x3d0b70: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0B74u;
        goto label_3d0b74;
    }
    ctx->pc = 0x3D0B6Cu;
    {
        const bool branch_taken_0x3d0b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B6Cu;
        // 0x3d0b70: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0b6c) {
            ctx->pc = 0x3D0B90u;
            goto label_3d0b90;
        }
    }
    ctx->pc = 0x3D0B74u;
label_3d0b74:
    // 0x3d0b74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d0b78:
    // 0x3d0b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0b7c:
    // 0x3d0b7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0b80:
    // 0x3d0b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0b84:
    // 0x3d0b84: 0x0  nop
    ctx->pc = 0x3d0b84u;
    // NOP
label_3d0b88:
    // 0x3d0b88: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0b8c:
    // 0x3d0b8c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0b8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0b90:
    // 0x3d0b90: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d0b94:
    // 0x3d0b94: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3d0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_3d0b98:
    // 0x3d0b98: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0b9c:
    // 0x3d0b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0ba0:
    // 0x3d0ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0ba4:
    // 0x3d0ba4: 0x0  nop
    ctx->pc = 0x3d0ba4u;
    // NOP
label_3d0ba8:
    // 0x3d0ba8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0bac:
    // 0x3d0bac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0bb0:
    // 0x3d0bb0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d0bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3d0bb4:
    // 0x3d0bb4: 0x10000028  b           . + 4 + (0x28 << 2)
label_3d0bb8:
    if (ctx->pc == 0x3D0BB8u) {
        ctx->pc = 0x3D0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BB4u;
        // 0x3d0bb8: 0xe6200574  swc1        $f0, 0x574($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0BBCu;
        goto label_3d0bbc;
    }
    ctx->pc = 0x3D0BB4u;
    {
        const bool branch_taken_0x3d0bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BB4u;
        // 0x3d0bb8: 0xe6200574  swc1        $f0, 0x574($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0bb4) {
            ctx->pc = 0x3D0C58u;
            goto label_3d0c58;
        }
    }
    ctx->pc = 0x3D0BBCu;
label_3d0bbc:
    // 0x3d0bbc: 0x0  nop
    ctx->pc = 0x3d0bbcu;
    // NOP
label_3d0bc0:
    // 0x3d0bc0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d0bc4:
    // 0x3d0bc4: 0x24423104  addiu       $v0, $v0, 0x3104
    ctx->pc = 0x3d0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12548));
label_3d0bc8:
    // 0x3d0bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0bcc:
    // 0x3d0bcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0bd0:
    // 0x3d0bd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d0bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0bd4:
    // 0x3d0bd4: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_3d0bd8:
    if (ctx->pc == 0x3D0BD8u) {
        ctx->pc = 0x3D0BDCu;
        goto label_3d0bdc;
    }
    ctx->pc = 0x3D0BD4u;
    {
        const bool branch_taken_0x3d0bd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0bd4) {
            ctx->pc = 0x3D0C58u;
            goto label_3d0c58;
        }
    }
    ctx->pc = 0x3D0BDCu;
label_3d0bdc:
    // 0x3d0bdc: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0be0:
    // 0x3d0be0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0be4:
    // 0x3d0be4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0be8:
    // 0x3d0be8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0bec:
    // 0x3d0bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0bf0:
    // 0x3d0bf0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0bf4:
    // 0x3d0bf4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0bf8:
    // 0x3d0bf8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0bfc:
    // 0x3d0bfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0c00:
    if (ctx->pc == 0x3D0C00u) {
        ctx->pc = 0x3D0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BFCu;
        // 0x3d0c00: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C04u;
        goto label_3d0c04;
    }
    ctx->pc = 0x3D0BFCu;
    {
        const bool branch_taken_0x3d0bfc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BFCu;
        // 0x3d0c00: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0bfc) {
            ctx->pc = 0x3D0C10u;
            goto label_3d0c10;
        }
    }
    ctx->pc = 0x3D0C04u;
label_3d0c04:
    // 0x3d0c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0c08:
    // 0x3d0c08: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0c0c:
    if (ctx->pc == 0x3D0C0Cu) {
        ctx->pc = 0x3D0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C08u;
        // 0x3d0c0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C10u;
        goto label_3d0c10;
    }
    ctx->pc = 0x3D0C08u;
    {
        const bool branch_taken_0x3d0c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C08u;
        // 0x3d0c0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c08) {
            ctx->pc = 0x3D0C2Cu;
            goto label_3d0c2c;
        }
    }
    ctx->pc = 0x3D0C10u;
label_3d0c10:
    // 0x3d0c10: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d0c14:
    // 0x3d0c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0c18:
    // 0x3d0c18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0c1c:
    // 0x3d0c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0c20:
    // 0x3d0c20: 0x0  nop
    ctx->pc = 0x3d0c20u;
    // NOP
label_3d0c24:
    // 0x3d0c24: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0c28:
    // 0x3d0c28: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0c28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0c2c:
    // 0x3d0c2c: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d0c30:
    // 0x3d0c30: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3d0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_3d0c34:
    // 0x3d0c34: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0c38:
    // 0x3d0c38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0c3c:
    // 0x3d0c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0c40:
    // 0x3d0c40: 0x0  nop
    ctx->pc = 0x3d0c40u;
    // NOP
label_3d0c44:
    // 0x3d0c44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0c48:
    // 0x3d0c48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0c4c:
    // 0x3d0c4c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3d0c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d0c50:
    // 0x3d0c50: 0xe6200574  swc1        $f0, 0x574($s1)
    ctx->pc = 0x3d0c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
label_3d0c54:
    // 0x3d0c54: 0x0  nop
    ctx->pc = 0x3d0c54u;
    // NOP
label_3d0c58:
    // 0x3d0c58: 0x92240559  lbu         $a0, 0x559($s1)
    ctx->pc = 0x3d0c58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d0c5c:
    // 0x3d0c5c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d0c60:
    // 0x3d0c60: 0x244230f8  addiu       $v0, $v0, 0x30F8
    ctx->pc = 0x3d0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12536));
label_3d0c64:
    // 0x3d0c64: 0xc6210578  lwc1        $f1, 0x578($s1)
    ctx->pc = 0x3d0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0c68:
    // 0x3d0c68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3d0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0c6c:
    // 0x3d0c6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0c70:
    // 0x3d0c70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d0c74:
    // 0x3d0c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0c78:
    // 0x3d0c78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0c7c:
    // 0x3d0c7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d0c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0c80:
    // 0x3d0c80: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_3d0c84:
    if (ctx->pc == 0x3D0C84u) {
        ctx->pc = 0x3D0C88u;
        goto label_3d0c88;
    }
    ctx->pc = 0x3D0C80u;
    {
        const bool branch_taken_0x3d0c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0c80) {
            ctx->pc = 0x3D0D08u;
            goto label_3d0d08;
        }
    }
    ctx->pc = 0x3D0C88u;
label_3d0c88:
    // 0x3d0c88: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0c8c:
    // 0x3d0c8c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0c90:
    // 0x3d0c90: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0c94:
    // 0x3d0c94: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0c98:
    // 0x3d0c98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0c9c:
    // 0x3d0c9c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0ca0:
    // 0x3d0ca0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0ca4:
    // 0x3d0ca4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0ca8:
    // 0x3d0ca8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0cac:
    if (ctx->pc == 0x3D0CACu) {
        ctx->pc = 0x3D0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CA8u;
        // 0x3d0cac: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0CB0u;
        goto label_3d0cb0;
    }
    ctx->pc = 0x3D0CA8u;
    {
        const bool branch_taken_0x3d0ca8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CA8u;
        // 0x3d0cac: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ca8) {
            ctx->pc = 0x3D0CBCu;
            goto label_3d0cbc;
        }
    }
    ctx->pc = 0x3D0CB0u;
label_3d0cb0:
    // 0x3d0cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0cb4:
    // 0x3d0cb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0cb8:
    if (ctx->pc == 0x3D0CB8u) {
        ctx->pc = 0x3D0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CB4u;
        // 0x3d0cb8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0CBCu;
        goto label_3d0cbc;
    }
    ctx->pc = 0x3D0CB4u;
    {
        const bool branch_taken_0x3d0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CB4u;
        // 0x3d0cb8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0cb4) {
            ctx->pc = 0x3D0CD8u;
            goto label_3d0cd8;
        }
    }
    ctx->pc = 0x3D0CBCu;
label_3d0cbc:
    // 0x3d0cbc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d0cc0:
    // 0x3d0cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0cc4:
    // 0x3d0cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0cc8:
    // 0x3d0cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0ccc:
    // 0x3d0ccc: 0x0  nop
    ctx->pc = 0x3d0cccu;
    // NOP
label_3d0cd0:
    // 0x3d0cd0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0cd4:
    // 0x3d0cd4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0cd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0cd8:
    // 0x3d0cd8: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d0cdc:
    // 0x3d0cdc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3d0ce0:
    // 0x3d0ce0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0ce4:
    // 0x3d0ce4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0ce8:
    // 0x3d0ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0cec:
    // 0x3d0cec: 0x0  nop
    ctx->pc = 0x3d0cecu;
    // NOP
label_3d0cf0:
    // 0x3d0cf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0cf4:
    // 0x3d0cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0cf8:
    // 0x3d0cf8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d0cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3d0cfc:
    // 0x3d0cfc: 0x10000028  b           . + 4 + (0x28 << 2)
label_3d0d00:
    if (ctx->pc == 0x3D0D00u) {
        ctx->pc = 0x3D0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CFCu;
        // 0x3d0d00: 0xe6200578  swc1        $f0, 0x578($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0D04u;
        goto label_3d0d04;
    }
    ctx->pc = 0x3D0CFCu;
    {
        const bool branch_taken_0x3d0cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CFCu;
        // 0x3d0d00: 0xe6200578  swc1        $f0, 0x578($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0cfc) {
            ctx->pc = 0x3D0DA0u;
            goto label_3d0da0;
        }
    }
    ctx->pc = 0x3D0D04u;
label_3d0d04:
    // 0x3d0d04: 0x0  nop
    ctx->pc = 0x3d0d04u;
    // NOP
label_3d0d08:
    // 0x3d0d08: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d0d0c:
    // 0x3d0d0c: 0x24423108  addiu       $v0, $v0, 0x3108
    ctx->pc = 0x3d0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12552));
label_3d0d10:
    // 0x3d0d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0d14:
    // 0x3d0d14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0d18:
    // 0x3d0d18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d0d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0d1c:
    // 0x3d0d1c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_3d0d20:
    if (ctx->pc == 0x3D0D20u) {
        ctx->pc = 0x3D0D24u;
        goto label_3d0d24;
    }
    ctx->pc = 0x3D0D1Cu;
    {
        const bool branch_taken_0x3d0d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0d1c) {
            ctx->pc = 0x3D0DA0u;
            goto label_3d0da0;
        }
    }
    ctx->pc = 0x3D0D24u;
label_3d0d24:
    // 0x3d0d24: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0d28:
    // 0x3d0d28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0d2c:
    // 0x3d0d2c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0d30:
    // 0x3d0d30: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d0d34:
    // 0x3d0d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0d38:
    // 0x3d0d38: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d0d3c:
    // 0x3d0d3c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0d40:
    // 0x3d0d40: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d0d44:
    // 0x3d0d44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d0d48:
    if (ctx->pc == 0x3D0D48u) {
        ctx->pc = 0x3D0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D44u;
        // 0x3d0d48: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0D4Cu;
        goto label_3d0d4c;
    }
    ctx->pc = 0x3D0D44u;
    {
        const bool branch_taken_0x3d0d44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D44u;
        // 0x3d0d48: 0xc6230024  lwc1        $f3, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d44) {
            ctx->pc = 0x3D0D58u;
            goto label_3d0d58;
        }
    }
    ctx->pc = 0x3D0D4Cu;
label_3d0d4c:
    // 0x3d0d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0d50:
    // 0x3d0d50: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0d54:
    if (ctx->pc == 0x3D0D54u) {
        ctx->pc = 0x3D0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D50u;
        // 0x3d0d54: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0D58u;
        goto label_3d0d58;
    }
    ctx->pc = 0x3D0D50u;
    {
        const bool branch_taken_0x3d0d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D50u;
        // 0x3d0d54: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0d50) {
            ctx->pc = 0x3D0D74u;
            goto label_3d0d74;
        }
    }
    ctx->pc = 0x3D0D58u;
label_3d0d58:
    // 0x3d0d58: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d0d5c:
    // 0x3d0d5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d0d60:
    // 0x3d0d60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d0d64:
    // 0x3d0d64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0d68:
    // 0x3d0d68: 0x0  nop
    ctx->pc = 0x3d0d68u;
    // NOP
label_3d0d6c:
    // 0x3d0d6c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0d70:
    // 0x3d0d70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0d70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0d74:
    // 0x3d0d74: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d0d78:
    // 0x3d0d78: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3d0d7c:
    // 0x3d0d7c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d0d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d0d80:
    // 0x3d0d80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0d84:
    // 0x3d0d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0d88:
    // 0x3d0d88: 0x0  nop
    ctx->pc = 0x3d0d88u;
    // NOP
label_3d0d8c:
    // 0x3d0d8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d0d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d0d90:
    // 0x3d0d90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d0d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d0d94:
    // 0x3d0d94: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3d0d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d0d98:
    // 0x3d0d98: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x3d0d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
label_3d0d9c:
    // 0x3d0d9c: 0x0  nop
    ctx->pc = 0x3d0d9cu;
    // NOP
label_3d0da0:
    // 0x3d0da0: 0x92250559  lbu         $a1, 0x559($s1)
    ctx->pc = 0x3d0da0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d0da4:
    // 0x3d0da4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d0da8:
    // 0x3d0da8: 0x26240570  addiu       $a0, $s1, 0x570
    ctx->pc = 0x3d0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
label_3d0dac:
    // 0x3d0dac: 0x244230f0  addiu       $v0, $v0, 0x30F0
    ctx->pc = 0x3d0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12528));
label_3d0db0:
    // 0x3d0db0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d0db4:
    // 0x3d0db4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d0db8:
    // 0x3d0db8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d0dbc:
    // 0x3d0dbc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3d0dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0dc0:
    // 0x3d0dc0: 0xc0765e0  jal         func_1D9780
label_3d0dc4:
    if (ctx->pc == 0x3D0DC4u) {
        ctx->pc = 0x3D0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DC0u;
        // 0x3d0dc4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0DC8u;
        goto label_3d0dc8;
    }
    ctx->pc = 0x3D0DC0u;
    SET_GPR_U32(ctx, 31, 0x3D0DC8u);
    ctx->pc = 0x3D0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0DC0u;
    // 0x3d0dc4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9780u, 0x3D0DC0u, 0x3D0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0DC8u;
label_3d0dc8:
    // 0x3d0dc8: 0xa6200560  sh          $zero, 0x560($s1)
    ctx->pc = 0x3d0dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1376), (uint16_t)GPR_U32(ctx, 0));
label_3d0dcc:
    // 0x3d0dcc: 0x0  nop
    ctx->pc = 0x3d0dccu;
    // NOP
label_3d0dd0:
    // 0x3d0dd0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3d0dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3d0dd4:
    // 0x3d0dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0dd8:
    // 0x3d0dd8: 0xc0c08b4  jal         func_3022D0
label_3d0ddc:
    if (ctx->pc == 0x3D0DDCu) {
        ctx->pc = 0x3D0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DD8u;
        // 0x3d0ddc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0DE0u;
        goto label_3d0de0;
    }
    ctx->pc = 0x3D0DD8u;
    SET_GPR_U32(ctx, 31, 0x3D0DE0u);
    ctx->pc = 0x3D0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0DD8u;
    // 0x3d0ddc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D0DD8u, 0x3D0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0DE0u;
label_3d0de0:
    // 0x3d0de0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d0de4:
    if (ctx->pc == 0x3D0DE4u) {
        ctx->pc = 0x3D0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DE0u;
        // 0x3d0de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0DE8u;
        goto label_3d0de8;
    }
    ctx->pc = 0x3D0DE0u;
    {
        const bool branch_taken_0x3d0de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DE0u;
        // 0x3d0de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0de0) {
            ctx->pc = 0x3D0DF0u;
            goto label_3d0df0;
        }
    }
    ctx->pc = 0x3D0DE8u;
label_3d0de8:
    // 0x3d0de8: 0xc0c0830  jal         func_3020C0
label_3d0dec:
    if (ctx->pc == 0x3D0DECu) {
        ctx->pc = 0x3D0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DE8u;
        // 0x3d0dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0DF0u;
        goto label_3d0df0;
    }
    ctx->pc = 0x3D0DE8u;
    SET_GPR_U32(ctx, 31, 0x3D0DF0u);
    ctx->pc = 0x3D0DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0DE8u;
    // 0x3d0dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D0DE8u, 0x3D0DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0DF0u;
label_3d0df0:
    // 0x3d0df0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d0df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3d0df4:
    // 0x3d0df4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d0df8:
    if (ctx->pc == 0x3D0DF8u) {
        ctx->pc = 0x3D0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DF4u;
        // 0x3d0df8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0DFCu;
        goto label_3d0dfc;
    }
    ctx->pc = 0x3D0DF4u;
    {
        const bool branch_taken_0x3d0df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0DF4u;
        // 0x3d0df8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0df4) {
            ctx->pc = 0x3D0E08u;
            goto label_3d0e08;
        }
    }
    ctx->pc = 0x3D0DFCu;
label_3d0dfc:
    // 0x3d0dfc: 0x10000022  b           . + 4 + (0x22 << 2)
label_3d0e00:
    if (ctx->pc == 0x3D0E00u) {
        ctx->pc = 0x3D0E04u;
        goto label_3d0e04;
    }
    ctx->pc = 0x3D0DFCu;
    {
        const bool branch_taken_0x3d0dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0dfc) {
            ctx->pc = 0x3D0E88u;
            goto label_3d0e88;
        }
    }
    ctx->pc = 0x3D0E04u;
label_3d0e04:
    // 0x3d0e04: 0x0  nop
    ctx->pc = 0x3d0e04u;
    // NOP
label_3d0e08:
    // 0x3d0e08: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d0e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d0e0c:
    // 0x3d0e0c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3d0e10:
    // 0x3d0e10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3d0e14:
    // 0x3d0e14: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d0e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d0e18:
    // 0x3d0e18: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d0e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3d0e1c:
    // 0x3d0e1c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3d0e20:
    if (ctx->pc == 0x3D0E20u) {
        ctx->pc = 0x3D0E24u;
        goto label_3d0e24;
    }
    ctx->pc = 0x3D0E1Cu;
    {
        const bool branch_taken_0x3d0e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d0e1c) {
            ctx->pc = 0x3D0E58u;
            goto label_3d0e58;
        }
    }
    ctx->pc = 0x3D0E24u;
label_3d0e24:
    // 0x3d0e24: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d0e24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d0e28:
    // 0x3d0e28: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d0e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3d0e2c:
    // 0x3d0e2c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3d0e30:
    if (ctx->pc == 0x3D0E30u) {
        ctx->pc = 0x3D0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E2Cu;
        // 0x3d0e30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0E34u;
        goto label_3d0e34;
    }
    ctx->pc = 0x3D0E2Cu;
    {
        const bool branch_taken_0x3d0e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E2Cu;
        // 0x3d0e30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e2c) {
            ctx->pc = 0x3D0E80u;
            goto label_3d0e80;
        }
    }
    ctx->pc = 0x3D0E34u;
label_3d0e34:
    // 0x3d0e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0e38:
    // 0x3d0e38: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d0e38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3d0e3c:
    // 0x3d0e3c: 0x0  nop
    ctx->pc = 0x3d0e3cu;
    // NOP
label_3d0e40:
    // 0x3d0e40: 0x0  nop
    ctx->pc = 0x3d0e40u;
    // NOP
label_3d0e44:
    // 0x3d0e44: 0x2010  mfhi        $a0
    ctx->pc = 0x3d0e44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3d0e48:
    // 0x3d0e48: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d0e48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d0e4c:
    // 0x3d0e4c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d0e50:
    if (ctx->pc == 0x3D0E50u) {
        ctx->pc = 0x3D0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E4Cu;
        // 0x3d0e50: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0E54u;
        goto label_3d0e54;
    }
    ctx->pc = 0x3D0E4Cu;
    {
        const bool branch_taken_0x3d0e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E4Cu;
        // 0x3d0e50: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e4c) {
            ctx->pc = 0x3D0E80u;
            goto label_3d0e80;
        }
    }
    ctx->pc = 0x3D0E54u;
label_3d0e54:
    // 0x3d0e54: 0x0  nop
    ctx->pc = 0x3d0e54u;
    // NOP
label_3d0e58:
    // 0x3d0e58: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d0e58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d0e5c:
    // 0x3d0e5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d0e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d0e60:
    // 0x3d0e60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3d0e64:
    if (ctx->pc == 0x3D0E64u) {
        ctx->pc = 0x3D0E68u;
        goto label_3d0e68;
    }
    ctx->pc = 0x3D0E60u;
    {
        const bool branch_taken_0x3d0e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0e60) {
            ctx->pc = 0x3D0E80u;
            goto label_3d0e80;
        }
    }
    ctx->pc = 0x3D0E68u;
label_3d0e68:
    // 0x3d0e68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d0e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d0e6c:
    // 0x3d0e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0e70:
    // 0x3d0e70: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d0e70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3d0e74:
    // 0x3d0e74: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d0e78:
    if (ctx->pc == 0x3D0E78u) {
        ctx->pc = 0x3D0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E74u;
        // 0x3d0e78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0E7Cu;
        goto label_3d0e7c;
    }
    ctx->pc = 0x3D0E74u;
    {
        const bool branch_taken_0x3d0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E74u;
        // 0x3d0e78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e74) {
            ctx->pc = 0x3D0E88u;
            goto label_3d0e88;
        }
    }
    ctx->pc = 0x3D0E7Cu;
label_3d0e7c:
    // 0x3d0e7c: 0x0  nop
    ctx->pc = 0x3d0e7cu;
    // NOP
label_3d0e80:
    // 0x3d0e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0e84:
    // 0x3d0e84: 0x0  nop
    ctx->pc = 0x3d0e84u;
    // NOP
label_3d0e88:
    // 0x3d0e88: 0x1460021f  bnez        $v1, . + 4 + (0x21F << 2)
label_3d0e8c:
    if (ctx->pc == 0x3D0E8Cu) {
        ctx->pc = 0x3D0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E88u;
        // 0x3d0e8c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0E90u;
        goto label_3d0e90;
    }
    ctx->pc = 0x3D0E88u;
    {
        const bool branch_taken_0x3d0e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E88u;
        // 0x3d0e8c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e88) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D0E90u;
label_3d0e90:
    // 0x3d0e90: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3d0e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d0e94:
    // 0x3d0e94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d0e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d0e98:
    // 0x3d0e98: 0xc097080  jal         func_25C200
label_3d0e9c:
    if (ctx->pc == 0x3D0E9Cu) {
        ctx->pc = 0x3D0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E98u;
        // 0x3d0e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0EA0u;
        goto label_3d0ea0;
    }
    ctx->pc = 0x3D0E98u;
    SET_GPR_U32(ctx, 31, 0x3D0EA0u);
    ctx->pc = 0x3D0E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0E98u;
    // 0x3d0e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x3D0E98u, 0x3D0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0EA0u;
label_3d0ea0:
    // 0x3d0ea0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3d0ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d0ea4:
    // 0x3d0ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0ea8:
    // 0x3d0ea8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_3d0eac:
    if (ctx->pc == 0x3D0EACu) {
        ctx->pc = 0x3D0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EA8u;
        // 0x3d0eac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0EB0u;
        goto label_3d0eb0;
    }
    ctx->pc = 0x3D0EA8u;
    {
        const bool branch_taken_0x3d0ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EA8u;
        // 0x3d0eac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ea8) {
            ctx->pc = 0x3D0F00u;
            goto label_3d0f00;
        }
    }
    ctx->pc = 0x3D0EB0u;
label_3d0eb0:
    // 0x3d0eb0: 0x92250559  lbu         $a1, 0x559($s1)
    ctx->pc = 0x3d0eb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d0eb4:
    // 0x3d0eb4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3d0eb8:
    // 0x3d0eb8: 0x246330f0  addiu       $v1, $v1, 0x30F0
    ctx->pc = 0x3d0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12528));
label_3d0ebc:
    // 0x3d0ebc: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x3d0ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d0ec0:
    // 0x3d0ec0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3d0ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d0ec4:
    // 0x3d0ec4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d0ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d0ec8:
    // 0x3d0ec8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3d0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3d0ecc:
    // 0x3d0ecc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0ed0:
    // 0x3d0ed0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3d0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3d0ed4:
    // 0x3d0ed4: 0x0  nop
    ctx->pc = 0x3d0ed4u;
    // NOP
label_3d0ed8:
    // 0x3d0ed8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3d0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d0edc:
    // 0x3d0edc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3d0edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3d0ee0:
    // 0x3d0ee0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_3d0ee4:
    if (ctx->pc == 0x3D0EE4u) {
        ctx->pc = 0x3D0EE8u;
        goto label_3d0ee8;
    }
    ctx->pc = 0x3D0EE0u;
    {
        const bool branch_taken_0x3d0ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d0ee0) {
            ctx->pc = 0x3D0EF0u;
            goto label_3d0ef0;
        }
    }
    ctx->pc = 0x3D0EE8u;
label_3d0ee8:
    // 0x3d0ee8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d0ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3d0eec:
    // 0x3d0eec: 0x0  nop
    ctx->pc = 0x3d0eecu;
    // NOP
label_3d0ef0:
    // 0x3d0ef0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d0ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3d0ef4:
    // 0x3d0ef4: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x3d0ef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d0ef8:
    // 0x3d0ef8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3d0efc:
    if (ctx->pc == 0x3D0EFCu) {
        ctx->pc = 0x3D0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EF8u;
        // 0x3d0efc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0F00u;
        goto label_3d0f00;
    }
    ctx->pc = 0x3D0EF8u;
    {
        const bool branch_taken_0x3d0ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EF8u;
        // 0x3d0efc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ef8) {
            ctx->pc = 0x3D0ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0ed8;
        }
    }
    ctx->pc = 0x3D0F00u;
label_3d0f00:
    // 0x3d0f00: 0xc0f4084  jal         func_3D0210
label_3d0f04:
    if (ctx->pc == 0x3D0F04u) {
        ctx->pc = 0x3D0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F00u;
        // 0x3d0f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0F08u;
        goto label_3d0f08;
    }
    ctx->pc = 0x3D0F00u;
    SET_GPR_U32(ctx, 31, 0x3D0F08u);
    ctx->pc = 0x3D0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0F00u;
    // 0x3d0f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0210u, 0x3D0F00u, 0x3D0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F08u;
label_3d0f08:
    // 0x3d0f08: 0x92270559  lbu         $a3, 0x559($s1)
    ctx->pc = 0x3d0f08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d0f0c:
    // 0x3d0f0c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3d0f10:
    // 0x3d0f10: 0x24633134  addiu       $v1, $v1, 0x3134
    ctx->pc = 0x3d0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12596));
label_3d0f14:
    // 0x3d0f14: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3d0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d0f18:
    // 0x3d0f18: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x3d0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3d0f1c:
    // 0x3d0f1c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3d0f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3d0f20:
    // 0x3d0f20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3d0f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3d0f24:
    // 0x3d0f24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d0f28:
    // 0x3d0f28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d0f2c:
    // 0x3d0f2c: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x3d0f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d0f30:
    // 0x3d0f30: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_3d0f34:
    if (ctx->pc == 0x3D0F34u) {
        ctx->pc = 0x3D0F38u;
        goto label_3d0f38;
    }
    ctx->pc = 0x3D0F30u;
    {
        const bool branch_taken_0x3d0f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0f30) {
            ctx->pc = 0x3D0F48u;
            goto label_3d0f48;
        }
    }
    ctx->pc = 0x3D0F38u;
label_3d0f38:
    // 0x3d0f38: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d0f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d0f3c:
    // 0x3d0f3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d0f40:
    // 0x3d0f40: 0x100001f1  b           . + 4 + (0x1F1 << 2)
label_3d0f44:
    if (ctx->pc == 0x3D0F44u) {
        ctx->pc = 0x3D0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F40u;
        // 0x3d0f44: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0F48u;
        goto label_3d0f48;
    }
    ctx->pc = 0x3D0F40u;
    {
        const bool branch_taken_0x3d0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F40u;
        // 0x3d0f44: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f40) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D0F48u;
label_3d0f48:
    // 0x3d0f48: 0xc0c0830  jal         func_3020C0
label_3d0f4c:
    if (ctx->pc == 0x3D0F4Cu) {
        ctx->pc = 0x3D0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F48u;
        // 0x3d0f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0F50u;
        goto label_3d0f50;
    }
    ctx->pc = 0x3D0F48u;
    SET_GPR_U32(ctx, 31, 0x3D0F50u);
    ctx->pc = 0x3D0F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0F48u;
    // 0x3d0f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D0F48u, 0x3D0F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F50u;
label_3d0f50:
    // 0x3d0f50: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_3d0f54:
    if (ctx->pc == 0x3D0F54u) {
        ctx->pc = 0x3D0F58u;
        goto label_3d0f58;
    }
    ctx->pc = 0x3D0F50u;
    {
        const bool branch_taken_0x3d0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0f50) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D0F58u;
label_3d0f58:
    // 0x3d0f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0f5c:
    // 0x3d0f5c: 0xa222055a  sb          $v0, 0x55A($s1)
    ctx->pc = 0x3d0f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1370), (uint8_t)GPR_U32(ctx, 2));
label_3d0f60:
    // 0x3d0f60: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3d0f64:
    // 0x3d0f64: 0x92240559  lbu         $a0, 0x559($s1)
    ctx->pc = 0x3d0f64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d0f68:
    // 0x3d0f68: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3d0f6c:
    // 0x3d0f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d0f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0f70:
    // 0x3d0f70: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x3d0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
label_3d0f74:
    // 0x3d0f74: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x3d0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d0f78:
    // 0x3d0f78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3d0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0f7c:
    // 0x3d0f7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d0f80:
    // 0x3d0f80: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3d0f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d0f84:
    // 0x3d0f84: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0f88:
    // 0x3d0f88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d0f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0f8c:
    // 0x3d0f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d0f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3d0f90:
    // 0x3d0f90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3d0f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0f94:
    // 0x3d0f94: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_3d0f98:
    if (ctx->pc == 0x3D0F98u) {
        ctx->pc = 0x3D0F9Cu;
        goto label_3d0f9c;
    }
    ctx->pc = 0x3D0F94u;
    {
        const bool branch_taken_0x3d0f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0f94) {
            ctx->pc = 0x3D1018u;
            goto label_3d1018;
        }
    }
    ctx->pc = 0x3D0F9Cu;
label_3d0f9c:
    // 0x3d0f9c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0fa0:
    // 0x3d0fa0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d0fa4:
    // 0x3d0fa4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d0fa8:
    // 0x3d0fa8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3d0fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d0fac:
    // 0x3d0fac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d0facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d0fb0:
    // 0x3d0fb0: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_3d0fb4:
    // 0x3d0fb4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d0fb8:
    // 0x3d0fb8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3d0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_3d0fbc:
    // 0x3d0fbc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3d0fc0:
    if (ctx->pc == 0x3D0FC0u) {
        ctx->pc = 0x3D0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FBCu;
        // 0x3d0fc0: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0FC4u;
        goto label_3d0fc4;
    }
    ctx->pc = 0x3D0FBCu;
    {
        const bool branch_taken_0x3d0fbc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FBCu;
        // 0x3d0fc0: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0fbc) {
            ctx->pc = 0x3D0FD0u;
            goto label_3d0fd0;
        }
    }
    ctx->pc = 0x3D0FC4u;
label_3d0fc4:
    // 0x3d0fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0fc8:
    // 0x3d0fc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d0fcc:
    if (ctx->pc == 0x3D0FCCu) {
        ctx->pc = 0x3D0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FC8u;
        // 0x3d0fcc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0FD0u;
        goto label_3d0fd0;
    }
    ctx->pc = 0x3D0FC8u;
    {
        const bool branch_taken_0x3d0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FC8u;
        // 0x3d0fcc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0fc8) {
            ctx->pc = 0x3D0FECu;
            goto label_3d0fec;
        }
    }
    ctx->pc = 0x3D0FD0u;
label_3d0fd0:
    // 0x3d0fd0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3d0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3d0fd4:
    // 0x3d0fd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d0fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d0fd8:
    // 0x3d0fd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d0fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3d0fdc:
    // 0x3d0fdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d0fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0fe0:
    // 0x3d0fe0: 0x0  nop
    ctx->pc = 0x3d0fe0u;
    // NOP
label_3d0fe4:
    // 0x3d0fe4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d0fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d0fe8:
    // 0x3d0fe8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0fe8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0fec:
    // 0x3d0fec: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x3d0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_3d0ff0:
    // 0x3d0ff0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3d0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3d0ff4:
    // 0x3d0ff4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3d0ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3d0ff8:
    // 0x3d0ff8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d0ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d0ffc:
    // 0x3d0ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1000:
    // 0x3d1000: 0x0  nop
    ctx->pc = 0x3d1000u;
    // NOP
label_3d1004:
    // 0x3d1004: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d1004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d1008:
    // 0x3d1008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d1008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d100c:
    // 0x3d100c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d100cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3d1010:
    // 0x3d1010: 0x10000049  b           . + 4 + (0x49 << 2)
label_3d1014:
    if (ctx->pc == 0x3D1014u) {
        ctx->pc = 0x3D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1010u;
        // 0x3d1014: 0xe6200570  swc1        $f0, 0x570($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1018u;
        goto label_3d1018;
    }
    ctx->pc = 0x3D1010u;
    {
        const bool branch_taken_0x3d1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1010u;
        // 0x3d1014: 0xe6200570  swc1        $f0, 0x570($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1010) {
            ctx->pc = 0x3D1138u;
            goto label_3d1138;
        }
    }
    ctx->pc = 0x3D1018u;
label_3d1018:
    // 0x3d1018: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d1018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d101c:
    // 0x3d101c: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x3d101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_3d1020:
    // 0x3d1020: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d1024:
    // 0x3d1024: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1028:
    // 0x3d1028: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d1028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3d102c:
    // 0x3d102c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3d102cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d1030:
    // 0x3d1030: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_3d1034:
    if (ctx->pc == 0x3D1034u) {
        ctx->pc = 0x3D1038u;
        goto label_3d1038;
    }
    ctx->pc = 0x3D1030u;
    {
        const bool branch_taken_0x3d1030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1030) {
            ctx->pc = 0x3D10B8u;
            goto label_3d10b8;
        }
    }
    ctx->pc = 0x3D1038u;
label_3d1038:
    // 0x3d1038: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d103c:
    // 0x3d103c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d1040:
    // 0x3d1040: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d1040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d1044:
    // 0x3d1044: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3d1044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d1048:
    // 0x3d1048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d1048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d104c:
    // 0x3d104c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d104cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_3d1050:
    // 0x3d1050: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d1054:
    // 0x3d1054: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3d1054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_3d1058:
    // 0x3d1058: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3d105c:
    if (ctx->pc == 0x3D105Cu) {
        ctx->pc = 0x3D105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1058u;
        // 0x3d105c: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1060u;
        goto label_3d1060;
    }
    ctx->pc = 0x3D1058u;
    {
        const bool branch_taken_0x3d1058 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1058u;
        // 0x3d105c: 0xc6230020  lwc1        $f3, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1058) {
            ctx->pc = 0x3D106Cu;
            goto label_3d106c;
        }
    }
    ctx->pc = 0x3D1060u;
label_3d1060:
    // 0x3d1060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1064:
    // 0x3d1064: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d1068:
    if (ctx->pc == 0x3D1068u) {
        ctx->pc = 0x3D1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1064u;
        // 0x3d1068: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D106Cu;
        goto label_3d106c;
    }
    ctx->pc = 0x3D1064u;
    {
        const bool branch_taken_0x3d1064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1064u;
        // 0x3d1068: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1064) {
            ctx->pc = 0x3D1088u;
            goto label_3d1088;
        }
    }
    ctx->pc = 0x3D106Cu;
label_3d106c:
    // 0x3d106c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3d106cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3d1070:
    // 0x3d1070: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d1070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d1074:
    // 0x3d1074: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d1074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3d1078:
    // 0x3d1078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d1078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d107c:
    // 0x3d107c: 0x0  nop
    ctx->pc = 0x3d107cu;
    // NOP
label_3d1080:
    // 0x3d1080: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d1080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d1084:
    // 0x3d1084: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d1084u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d1088:
    // 0x3d1088: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x3d1088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
label_3d108c:
    // 0x3d108c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3d108cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3d1090:
    // 0x3d1090: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3d1090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3d1094:
    // 0x3d1094: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d1094u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1098:
    // 0x3d1098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d109c:
    // 0x3d109c: 0x0  nop
    ctx->pc = 0x3d109cu;
    // NOP
label_3d10a0:
    // 0x3d10a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d10a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d10a4:
    // 0x3d10a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d10a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d10a8:
    // 0x3d10a8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3d10a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d10ac:
    // 0x3d10ac: 0x10000022  b           . + 4 + (0x22 << 2)
label_3d10b0:
    if (ctx->pc == 0x3D10B0u) {
        ctx->pc = 0x3D10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10ACu;
        // 0x3d10b0: 0xe6200570  swc1        $f0, 0x570($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10B4u;
        goto label_3d10b4;
    }
    ctx->pc = 0x3D10ACu;
    {
        const bool branch_taken_0x3d10ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10ACu;
        // 0x3d10b0: 0xe6200570  swc1        $f0, 0x570($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10ac) {
            ctx->pc = 0x3D1138u;
            goto label_3d1138;
        }
    }
    ctx->pc = 0x3D10B4u;
label_3d10b4:
    // 0x3d10b4: 0x0  nop
    ctx->pc = 0x3d10b4u;
    // NOP
label_3d10b8:
    // 0x3d10b8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d10bc:
    // 0x3d10bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3d10c0:
    // 0x3d10c0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d10c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3d10c4:
    // 0x3d10c4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3d10c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3d10c8:
    // 0x3d10c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d10cc:
    // 0x3d10cc: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_3d10d0:
    // 0x3d10d0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d10d4:
    // 0x3d10d4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3d10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_3d10d8:
    // 0x3d10d8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3d10dc:
    if (ctx->pc == 0x3D10DCu) {
        ctx->pc = 0x3D10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10D8u;
        // 0x3d10dc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10E0u;
        goto label_3d10e0;
    }
    ctx->pc = 0x3D10D8u;
    {
        const bool branch_taken_0x3d10d8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10D8u;
        // 0x3d10dc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10d8) {
            ctx->pc = 0x3D10ECu;
            goto label_3d10ec;
        }
    }
    ctx->pc = 0x3D10E0u;
label_3d10e0:
    // 0x3d10e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d10e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d10e4:
    // 0x3d10e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d10e8:
    if (ctx->pc == 0x3D10E8u) {
        ctx->pc = 0x3D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10E4u;
        // 0x3d10e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D10ECu;
        goto label_3d10ec;
    }
    ctx->pc = 0x3D10E4u;
    {
        const bool branch_taken_0x3d10e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10E4u;
        // 0x3d10e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d10e4) {
            ctx->pc = 0x3D1104u;
            goto label_3d1104;
        }
    }
    ctx->pc = 0x3D10ECu;
label_3d10ec:
    // 0x3d10ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d10f0:
    // 0x3d10f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d10f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3d10f4:
    // 0x3d10f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d10f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d10f8:
    // 0x3d10f8: 0x0  nop
    ctx->pc = 0x3d10f8u;
    // NOP
label_3d10fc:
    // 0x3d10fc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d10fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d1100:
    // 0x3d1100: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d1100u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d1104:
    // 0x3d1104: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3d1104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_3d1108:
    // 0x3d1108: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3d1108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3d110c:
    // 0x3d110c: 0x34650008  ori         $a1, $v1, 0x8
    ctx->pc = 0x3d110cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d1110:
    // 0x3d1110: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3d1110u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d1114:
    // 0x3d1114: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3d1114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3d1118:
    // 0x3d1118: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d1118u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d111c:
    // 0x3d111c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d111cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d1120:
    // 0x3d1120: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3d1120u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3d1124:
    // 0x3d1124: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d1124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1128:
    // 0x3d1128: 0xc6200570  lwc1        $f0, 0x570($s1)
    ctx->pc = 0x3d1128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d112c:
    // 0x3d112c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d112cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d1130:
    // 0x3d1130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d1130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d1134:
    // 0x3d1134: 0xe6200570  swc1        $f0, 0x570($s1)
    ctx->pc = 0x3d1134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
label_3d1138:
    // 0x3d1138: 0x92250559  lbu         $a1, 0x559($s1)
    ctx->pc = 0x3d1138u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d113c:
    // 0x3d113c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3d113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3d1140:
    // 0x3d1140: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3d1140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_3d1144:
    // 0x3d1144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d1144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1148:
    // 0x3d1148: 0x24843118  addiu       $a0, $a0, 0x3118
    ctx->pc = 0x3d1148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12568));
label_3d114c:
    // 0x3d114c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3d114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d1150:
    // 0x3d1150: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d1150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d1154:
    // 0x3d1154: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d1154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d1158:
    // 0x3d1158: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3d1158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d115c:
    // 0x3d115c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3d115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d1160:
    // 0x3d1160: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1164:
    // 0x3d1164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d1164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3d1168:
    // 0x3d1168: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3d1168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d116c:
    // 0x3d116c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_3d1170:
    if (ctx->pc == 0x3D1170u) {
        ctx->pc = 0x3D1174u;
        goto label_3d1174;
    }
    ctx->pc = 0x3D116Cu;
    {
        const bool branch_taken_0x3d116c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d116c) {
            ctx->pc = 0x3D11E8u;
            goto label_3d11e8;
        }
    }
    ctx->pc = 0x3D1174u;
label_3d1174:
    // 0x3d1174: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d1178:
    // 0x3d1178: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d1178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d117c:
    // 0x3d117c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d1180:
    // 0x3d1180: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d1184:
    // 0x3d1184: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d1188:
    // 0x3d1188: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d1188u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d118c:
    // 0x3d118c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d1190:
    if (ctx->pc == 0x3D1190u) {
        ctx->pc = 0x3D1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D118Cu;
        // 0x3d1190: 0xc6230028  lwc1        $f3, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1194u;
        goto label_3d1194;
    }
    ctx->pc = 0x3D118Cu;
    {
        const bool branch_taken_0x3d118c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D118Cu;
        // 0x3d1190: 0xc6230028  lwc1        $f3, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d118c) {
            ctx->pc = 0x3D11A0u;
            goto label_3d11a0;
        }
    }
    ctx->pc = 0x3D1194u;
label_3d1194:
    // 0x3d1194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1198:
    // 0x3d1198: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d119c:
    if (ctx->pc == 0x3D119Cu) {
        ctx->pc = 0x3D119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1198u;
        // 0x3d119c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D11A0u;
        goto label_3d11a0;
    }
    ctx->pc = 0x3D1198u;
    {
        const bool branch_taken_0x3d1198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1198u;
        // 0x3d119c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1198) {
            ctx->pc = 0x3D11BCu;
            goto label_3d11bc;
        }
    }
    ctx->pc = 0x3D11A0u;
label_3d11a0:
    // 0x3d11a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d11a4:
    // 0x3d11a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d11a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d11a8:
    // 0x3d11a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d11a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d11ac:
    // 0x3d11ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d11acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d11b0:
    // 0x3d11b0: 0x0  nop
    ctx->pc = 0x3d11b0u;
    // NOP
label_3d11b4:
    // 0x3d11b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d11b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d11b8:
    // 0x3d11b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d11b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d11bc:
    // 0x3d11bc: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d11c0:
    // 0x3d11c0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3d11c4:
    // 0x3d11c4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d11c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d11c8:
    // 0x3d11c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d11c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d11cc:
    // 0x3d11cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d11ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d11d0:
    // 0x3d11d0: 0x0  nop
    ctx->pc = 0x3d11d0u;
    // NOP
label_3d11d4:
    // 0x3d11d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d11d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d11d8:
    // 0x3d11d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d11d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d11dc:
    // 0x3d11dc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d11dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3d11e0:
    // 0x3d11e0: 0x10000045  b           . + 4 + (0x45 << 2)
label_3d11e4:
    if (ctx->pc == 0x3D11E4u) {
        ctx->pc = 0x3D11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D11E0u;
        // 0x3d11e4: 0xe6200578  swc1        $f0, 0x578($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D11E8u;
        goto label_3d11e8;
    }
    ctx->pc = 0x3D11E0u;
    {
        const bool branch_taken_0x3d11e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D11E0u;
        // 0x3d11e4: 0xe6200578  swc1        $f0, 0x578($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d11e0) {
            ctx->pc = 0x3D12F8u;
            goto label_3d12f8;
        }
    }
    ctx->pc = 0x3D11E8u;
label_3d11e8:
    // 0x3d11e8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3d11ec:
    // 0x3d11ec: 0x24633128  addiu       $v1, $v1, 0x3128
    ctx->pc = 0x3d11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12584));
label_3d11f0:
    // 0x3d11f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d11f4:
    // 0x3d11f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d11f8:
    // 0x3d11f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d11f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3d11fc:
    // 0x3d11fc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3d11fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d1200:
    // 0x3d1200: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_3d1204:
    if (ctx->pc == 0x3D1204u) {
        ctx->pc = 0x3D1208u;
        goto label_3d1208;
    }
    ctx->pc = 0x3D1200u;
    {
        const bool branch_taken_0x3d1200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1200) {
            ctx->pc = 0x3D1280u;
            goto label_3d1280;
        }
    }
    ctx->pc = 0x3D1208u;
label_3d1208:
    // 0x3d1208: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d120c:
    // 0x3d120c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d120cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d1210:
    // 0x3d1210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d1214:
    // 0x3d1214: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d1218:
    // 0x3d1218: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d121c:
    // 0x3d121c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d121cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d1220:
    // 0x3d1220: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d1224:
    if (ctx->pc == 0x3D1224u) {
        ctx->pc = 0x3D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1220u;
        // 0x3d1224: 0xc6230028  lwc1        $f3, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1228u;
        goto label_3d1228;
    }
    ctx->pc = 0x3D1220u;
    {
        const bool branch_taken_0x3d1220 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1220u;
        // 0x3d1224: 0xc6230028  lwc1        $f3, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1220) {
            ctx->pc = 0x3D1234u;
            goto label_3d1234;
        }
    }
    ctx->pc = 0x3D1228u;
label_3d1228:
    // 0x3d1228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d122c:
    // 0x3d122c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d1230:
    if (ctx->pc == 0x3D1230u) {
        ctx->pc = 0x3D1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D122Cu;
        // 0x3d1230: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1234u;
        goto label_3d1234;
    }
    ctx->pc = 0x3D122Cu;
    {
        const bool branch_taken_0x3d122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D122Cu;
        // 0x3d1230: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d122c) {
            ctx->pc = 0x3D1250u;
            goto label_3d1250;
        }
    }
    ctx->pc = 0x3D1234u;
label_3d1234:
    // 0x3d1234: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3d1234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3d1238:
    // 0x3d1238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d123c:
    // 0x3d123c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d1240:
    // 0x3d1240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1244:
    // 0x3d1244: 0x0  nop
    ctx->pc = 0x3d1244u;
    // NOP
label_3d1248:
    // 0x3d1248: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d1248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d124c:
    // 0x3d124c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d124cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d1250:
    // 0x3d1250: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d1250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_3d1254:
    // 0x3d1254: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d1254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3d1258:
    // 0x3d1258: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d1258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d125c:
    // 0x3d125c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d125cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1260:
    // 0x3d1260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1264:
    // 0x3d1264: 0x0  nop
    ctx->pc = 0x3d1264u;
    // NOP
label_3d1268:
    // 0x3d1268: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d1268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d126c:
    // 0x3d126c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d126cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d1270:
    // 0x3d1270: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3d1270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3d1274:
    // 0x3d1274: 0x10000020  b           . + 4 + (0x20 << 2)
label_3d1278:
    if (ctx->pc == 0x3D1278u) {
        ctx->pc = 0x3D1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1274u;
        // 0x3d1278: 0xe6200578  swc1        $f0, 0x578($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D127Cu;
        goto label_3d127c;
    }
    ctx->pc = 0x3D1274u;
    {
        const bool branch_taken_0x3d1274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1274u;
        // 0x3d1278: 0xe6200578  swc1        $f0, 0x578($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1274) {
            ctx->pc = 0x3D12F8u;
            goto label_3d12f8;
        }
    }
    ctx->pc = 0x3D127Cu;
label_3d127c:
    // 0x3d127c: 0x0  nop
    ctx->pc = 0x3d127cu;
    // NOP
label_3d1280:
    // 0x3d1280: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d1280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d1284:
    // 0x3d1284: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d1284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d1288:
    // 0x3d1288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d128c:
    // 0x3d128c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d128cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3d1290:
    // 0x3d1290: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3d1294:
    // 0x3d1294: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d1294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3d1298:
    // 0x3d1298: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3d129c:
    if (ctx->pc == 0x3D129Cu) {
        ctx->pc = 0x3D129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1298u;
        // 0x3d129c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D12A0u;
        goto label_3d12a0;
    }
    ctx->pc = 0x3D1298u;
    {
        const bool branch_taken_0x3d1298 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1298u;
        // 0x3d129c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1298) {
            ctx->pc = 0x3D12ACu;
            goto label_3d12ac;
        }
    }
    ctx->pc = 0x3D12A0u;
label_3d12a0:
    // 0x3d12a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d12a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d12a4:
    // 0x3d12a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d12a8:
    if (ctx->pc == 0x3D12A8u) {
        ctx->pc = 0x3D12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12A4u;
        // 0x3d12a8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D12ACu;
        goto label_3d12ac;
    }
    ctx->pc = 0x3D12A4u;
    {
        const bool branch_taken_0x3d12a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12A4u;
        // 0x3d12a8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d12a4) {
            ctx->pc = 0x3D12C4u;
            goto label_3d12c4;
        }
    }
    ctx->pc = 0x3D12ACu;
label_3d12ac:
    // 0x3d12ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d12acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d12b0:
    // 0x3d12b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d12b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d12b4:
    // 0x3d12b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d12b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d12b8:
    // 0x3d12b8: 0x0  nop
    ctx->pc = 0x3d12b8u;
    // NOP
label_3d12bc:
    // 0x3d12bc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3d12bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3d12c0:
    // 0x3d12c0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3d12c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3d12c4:
    // 0x3d12c4: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3d12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_3d12c8:
    // 0x3d12c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d12cc:
    // 0x3d12cc: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3d12ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d12d0:
    // 0x3d12d0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3d12d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d12d4:
    // 0x3d12d4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3d12d8:
    // 0x3d12d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d12d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d12dc:
    // 0x3d12dc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d12dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d12e0:
    // 0x3d12e0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3d12e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3d12e4:
    // 0x3d12e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d12e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d12e8:
    // 0x3d12e8: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3d12e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d12ec:
    // 0x3d12ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d12ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d12f0:
    // 0x3d12f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d12f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d12f4:
    // 0x3d12f4: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x3d12f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
label_3d12f8:
    // 0x3d12f8: 0x92250559  lbu         $a1, 0x559($s1)
    ctx->pc = 0x3d12f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d12fc:
    // 0x3d12fc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d1300:
    // 0x3d1300: 0x26240570  addiu       $a0, $s1, 0x570
    ctx->pc = 0x3d1300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
label_3d1304:
    // 0x3d1304: 0x244230f0  addiu       $v0, $v0, 0x30F0
    ctx->pc = 0x3d1304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12528));
label_3d1308:
    // 0x3d1308: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d1308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d130c:
    // 0x3d130c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d130cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d1310:
    // 0x3d1310: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d1310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d1314:
    // 0x3d1314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d1314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d1318:
    // 0x3d1318: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3d1318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3d131c:
    // 0x3d131c: 0xc0765e0  jal         func_1D9780
label_3d1320:
    if (ctx->pc == 0x3D1320u) {
        ctx->pc = 0x3D1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D131Cu;
        // 0x3d1320: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1324u;
        goto label_3d1324;
    }
    ctx->pc = 0x3D131Cu;
    SET_GPR_U32(ctx, 31, 0x3D1324u);
    ctx->pc = 0x3D1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D131Cu;
    // 0x3d1320: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9780u, 0x3D131Cu, 0x3D1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1324u;
label_3d1324:
    // 0x3d1324: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3d1324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1328:
    // 0x3d1328: 0x26240570  addiu       $a0, $s1, 0x570
    ctx->pc = 0x3d1328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
label_3d132c:
    // 0x3d132c: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x3d132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_3d1330:
    // 0x3d1330: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x3d1330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3d1334:
    // 0x3d1334: 0xc096cb8  jal         func_25B2E0
label_3d1338:
    if (ctx->pc == 0x3D1338u) {
        ctx->pc = 0x3D1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1334u;
        // 0x3d1338: 0xe6200574  swc1        $f0, 0x574($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D133Cu;
        goto label_3d133c;
    }
    ctx->pc = 0x3D1334u;
    SET_GPR_U32(ctx, 31, 0x3D133Cu);
    ctx->pc = 0x3D1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1334u;
    // 0x3d1338: 0xe6200574  swc1        $f0, 0x574($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3D1334u, 0x3D133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D133Cu;
label_3d133c:
    // 0x3d133c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d1340:
    if (ctx->pc == 0x3D1340u) {
        ctx->pc = 0x3D1344u;
        goto label_3d1344;
    }
    ctx->pc = 0x3D133Cu;
    {
        const bool branch_taken_0x3d133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d133c) {
            ctx->pc = 0x3D1350u;
            goto label_3d1350;
        }
    }
    ctx->pc = 0x3D1344u;
label_3d1344:
    // 0x3d1344: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x3d1344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1348:
    // 0x3d1348: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d134c:
    if (ctx->pc == 0x3D134Cu) {
        ctx->pc = 0x3D134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1348u;
        // 0x3d134c: 0xe6200574  swc1        $f0, 0x574($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1350u;
        goto label_3d1350;
    }
    ctx->pc = 0x3D1348u;
    {
        const bool branch_taken_0x3d1348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1348u;
        // 0x3d134c: 0xe6200574  swc1        $f0, 0x574($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1348) {
            ctx->pc = 0x3D1368u;
            goto label_3d1368;
        }
    }
    ctx->pc = 0x3D1350u;
label_3d1350:
    // 0x3d1350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1354:
    // 0x3d1354: 0xc0c0830  jal         func_3020C0
label_3d1358:
    if (ctx->pc == 0x3D1358u) {
        ctx->pc = 0x3D1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1354u;
        // 0x3d1358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D135Cu;
        goto label_3d135c;
    }
    ctx->pc = 0x3D1354u;
    SET_GPR_U32(ctx, 31, 0x3D135Cu);
    ctx->pc = 0x3D1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1354u;
    // 0x3d1358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1354u, 0x3D135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D135Cu;
label_3d135c:
    // 0x3d135c: 0x100000ea  b           . + 4 + (0xEA << 2)
label_3d1360:
    if (ctx->pc == 0x3D1360u) {
        ctx->pc = 0x3D1364u;
        goto label_3d1364;
    }
    ctx->pc = 0x3D135Cu;
    {
        const bool branch_taken_0x3d135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d135c) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D1364u;
label_3d1364:
    // 0x3d1364: 0x0  nop
    ctx->pc = 0x3d1364u;
    // NOP
label_3d1368:
    // 0x3d1368: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3d1368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_3d136c:
    // 0x3d136c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d136cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3d1370:
    // 0x3d1370: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d1370u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3d1374:
    // 0x3d1374: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d1374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3d1378:
    // 0x3d1378: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d1378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3d137c:
    // 0x3d137c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d137cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d1380:
    // 0x3d1380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d1384:
    // 0x3d1384: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d1384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d1388:
    // 0x3d1388: 0x3c0242a6  lui         $v0, 0x42A6
    ctx->pc = 0x3d1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17062 << 16));
label_3d138c:
    // 0x3d138c: 0xc621055c  lwc1        $f1, 0x55C($s1)
    ctx->pc = 0x3d138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1390:
    // 0x3d1390: 0x3442aaa6  ori         $v0, $v0, 0xAAA6
    ctx->pc = 0x3d1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43686);
label_3d1394:
    // 0x3d1394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1398:
    // 0x3d1398: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d1398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d139c:
    // 0x3d139c: 0x26250570  addiu       $a1, $s1, 0x570
    ctx->pc = 0x3d139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
label_3d13a0:
    // 0x3d13a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d13a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3d13a4:
    // 0x3d13a4: 0xe620055c  swc1        $f0, 0x55C($s1)
    ctx->pc = 0x3d13a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
label_3d13a8:
    // 0x3d13a8: 0xc097414  jal         func_25D050
label_3d13ac:
    if (ctx->pc == 0x3D13ACu) {
        ctx->pc = 0x3D13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13A8u;
        // 0x3d13ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13B0u;
        goto label_3d13b0;
    }
    ctx->pc = 0x3D13A8u;
    SET_GPR_U32(ctx, 31, 0x3D13B0u);
    ctx->pc = 0x3D13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D13A8u;
    // 0x3d13ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x3D13A8u, 0x3D13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D13B0u;
label_3d13b0:
    // 0x3d13b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d13b4:
    if (ctx->pc == 0x3D13B4u) {
        ctx->pc = 0x3D13B8u;
        goto label_3d13b8;
    }
    ctx->pc = 0x3D13B0u;
    {
        const bool branch_taken_0x3d13b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d13b0) {
            ctx->pc = 0x3D13C8u;
            goto label_3d13c8;
        }
    }
    ctx->pc = 0x3D13B8u;
label_3d13b8:
    // 0x3d13b8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d13b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d13bc:
    // 0x3d13bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d13c0:
    // 0x3d13c0: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_3d13c4:
    if (ctx->pc == 0x3D13C4u) {
        ctx->pc = 0x3D13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13C0u;
        // 0x3d13c4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13C8u;
        goto label_3d13c8;
    }
    ctx->pc = 0x3D13C0u;
    {
        const bool branch_taken_0x3d13c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13C0u;
        // 0x3d13c4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13c0) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D13C8u;
label_3d13c8:
    // 0x3d13c8: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3d13c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3d13cc:
    // 0x3d13cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d13ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d13d0:
    // 0x3d13d0: 0xc0c08b4  jal         func_3022D0
label_3d13d4:
    if (ctx->pc == 0x3D13D4u) {
        ctx->pc = 0x3D13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13D0u;
        // 0x3d13d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13D8u;
        goto label_3d13d8;
    }
    ctx->pc = 0x3D13D0u;
    SET_GPR_U32(ctx, 31, 0x3D13D8u);
    ctx->pc = 0x3D13D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D13D0u;
    // 0x3d13d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D13D0u, 0x3D13D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D13D8u;
label_3d13d8:
    // 0x3d13d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d13dc:
    if (ctx->pc == 0x3D13DCu) {
        ctx->pc = 0x3D13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13D8u;
        // 0x3d13dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13E0u;
        goto label_3d13e0;
    }
    ctx->pc = 0x3D13D8u;
    {
        const bool branch_taken_0x3d13d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13D8u;
        // 0x3d13dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13d8) {
            ctx->pc = 0x3D13E8u;
            goto label_3d13e8;
        }
    }
    ctx->pc = 0x3D13E0u;
label_3d13e0:
    // 0x3d13e0: 0xc0c0830  jal         func_3020C0
label_3d13e4:
    if (ctx->pc == 0x3D13E4u) {
        ctx->pc = 0x3D13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13E0u;
        // 0x3d13e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13E8u;
        goto label_3d13e8;
    }
    ctx->pc = 0x3D13E0u;
    SET_GPR_U32(ctx, 31, 0x3D13E8u);
    ctx->pc = 0x3D13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D13E0u;
    // 0x3d13e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D13E0u, 0x3D13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D13E8u;
label_3d13e8:
    // 0x3d13e8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d13e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3d13ec:
    // 0x3d13ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d13f0:
    if (ctx->pc == 0x3D13F0u) {
        ctx->pc = 0x3D13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13ECu;
        // 0x3d13f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D13F4u;
        goto label_3d13f4;
    }
    ctx->pc = 0x3D13ECu;
    {
        const bool branch_taken_0x3d13ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13ECu;
        // 0x3d13f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13ec) {
            ctx->pc = 0x3D1400u;
            goto label_3d1400;
        }
    }
    ctx->pc = 0x3D13F4u;
label_3d13f4:
    // 0x3d13f4: 0x10000022  b           . + 4 + (0x22 << 2)
label_3d13f8:
    if (ctx->pc == 0x3D13F8u) {
        ctx->pc = 0x3D13FCu;
        goto label_3d13fc;
    }
    ctx->pc = 0x3D13F4u;
    {
        const bool branch_taken_0x3d13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d13f4) {
            ctx->pc = 0x3D1480u;
            goto label_3d1480;
        }
    }
    ctx->pc = 0x3D13FCu;
label_3d13fc:
    // 0x3d13fc: 0x0  nop
    ctx->pc = 0x3d13fcu;
    // NOP
label_3d1400:
    // 0x3d1400: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d1400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d1404:
    // 0x3d1404: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3d1408:
    // 0x3d1408: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d1408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3d140c:
    // 0x3d140c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d140cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d1410:
    // 0x3d1410: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d1410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3d1414:
    // 0x3d1414: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3d1418:
    if (ctx->pc == 0x3D1418u) {
        ctx->pc = 0x3D141Cu;
        goto label_3d141c;
    }
    ctx->pc = 0x3D1414u;
    {
        const bool branch_taken_0x3d1414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1414) {
            ctx->pc = 0x3D1450u;
            goto label_3d1450;
        }
    }
    ctx->pc = 0x3D141Cu;
label_3d141c:
    // 0x3d141c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d141cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d1420:
    // 0x3d1420: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d1420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3d1424:
    // 0x3d1424: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3d1428:
    if (ctx->pc == 0x3D1428u) {
        ctx->pc = 0x3D1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1424u;
        // 0x3d1428: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D142Cu;
        goto label_3d142c;
    }
    ctx->pc = 0x3D1424u;
    {
        const bool branch_taken_0x3d1424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1424u;
        // 0x3d1428: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1424) {
            ctx->pc = 0x3D1478u;
            goto label_3d1478;
        }
    }
    ctx->pc = 0x3D142Cu;
label_3d142c:
    // 0x3d142c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d1430:
    // 0x3d1430: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d1430u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3d1434:
    // 0x3d1434: 0x0  nop
    ctx->pc = 0x3d1434u;
    // NOP
label_3d1438:
    // 0x3d1438: 0x0  nop
    ctx->pc = 0x3d1438u;
    // NOP
label_3d143c:
    // 0x3d143c: 0x2010  mfhi        $a0
    ctx->pc = 0x3d143cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3d1440:
    // 0x3d1440: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d1444:
    // 0x3d1444: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d1448:
    if (ctx->pc == 0x3D1448u) {
        ctx->pc = 0x3D1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1444u;
        // 0x3d1448: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D144Cu;
        goto label_3d144c;
    }
    ctx->pc = 0x3D1444u;
    {
        const bool branch_taken_0x3d1444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1444u;
        // 0x3d1448: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1444) {
            ctx->pc = 0x3D1478u;
            goto label_3d1478;
        }
    }
    ctx->pc = 0x3D144Cu;
label_3d144c:
    // 0x3d144c: 0x0  nop
    ctx->pc = 0x3d144cu;
    // NOP
label_3d1450:
    // 0x3d1450: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d1450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d1454:
    // 0x3d1454: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d1454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d1458:
    // 0x3d1458: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3d145c:
    if (ctx->pc == 0x3D145Cu) {
        ctx->pc = 0x3D1460u;
        goto label_3d1460;
    }
    ctx->pc = 0x3D1458u;
    {
        const bool branch_taken_0x3d1458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1458) {
            ctx->pc = 0x3D1478u;
            goto label_3d1478;
        }
    }
    ctx->pc = 0x3D1460u;
label_3d1460:
    // 0x3d1460: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1460u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d1464:
    // 0x3d1464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d1468:
    // 0x3d1468: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d1468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3d146c:
    // 0x3d146c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d1470:
    if (ctx->pc == 0x3D1470u) {
        ctx->pc = 0x3D1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D146Cu;
        // 0x3d1470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1474u;
        goto label_3d1474;
    }
    ctx->pc = 0x3D146Cu;
    {
        const bool branch_taken_0x3d146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D146Cu;
        // 0x3d1470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d146c) {
            ctx->pc = 0x3D1480u;
            goto label_3d1480;
        }
    }
    ctx->pc = 0x3D1474u;
label_3d1474:
    // 0x3d1474: 0x0  nop
    ctx->pc = 0x3d1474u;
    // NOP
label_3d1478:
    // 0x3d1478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d147c:
    // 0x3d147c: 0x0  nop
    ctx->pc = 0x3d147cu;
    // NOP
label_3d1480:
    // 0x3d1480: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
label_3d1484:
    if (ctx->pc == 0x3D1484u) {
        ctx->pc = 0x3D1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1480u;
        // 0x3d1484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1488u;
        goto label_3d1488;
    }
    ctx->pc = 0x3D1480u;
    {
        const bool branch_taken_0x3d1480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1480u;
        // 0x3d1484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1480) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D1488u;
label_3d1488:
    // 0x3d1488: 0xc0c0830  jal         func_3020C0
label_3d148c:
    if (ctx->pc == 0x3D148Cu) {
        ctx->pc = 0x3D148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1488u;
        // 0x3d148c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1490u;
        goto label_3d1490;
    }
    ctx->pc = 0x3D1488u;
    SET_GPR_U32(ctx, 31, 0x3D1490u);
    ctx->pc = 0x3D148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1488u;
    // 0x3d148c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1488u, 0x3D1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1490u;
label_3d1490:
    // 0x3d1490: 0x1000009d  b           . + 4 + (0x9D << 2)
label_3d1494:
    if (ctx->pc == 0x3D1494u) {
        ctx->pc = 0x3D1498u;
        goto label_3d1498;
    }
    ctx->pc = 0x3D1490u;
    {
        const bool branch_taken_0x3d1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1490) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D1498u;
label_3d1498:
    // 0x3d1498: 0xc096c3c  jal         func_25B0F0
label_3d149c:
    if (ctx->pc == 0x3D149Cu) {
        ctx->pc = 0x3D149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1498u;
        // 0x3d149c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D14A0u;
        goto label_3d14a0;
    }
    ctx->pc = 0x3D1498u;
    SET_GPR_U32(ctx, 31, 0x3D14A0u);
    ctx->pc = 0x3D149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1498u;
    // 0x3d149c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3D1498u, 0x3D14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D14A0u;
label_3d14a0:
    // 0x3d14a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3d14a4:
    if (ctx->pc == 0x3D14A4u) {
        ctx->pc = 0x3D14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D14A0u;
        // 0x3d14a4: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D14A8u;
        goto label_3d14a8;
    }
    ctx->pc = 0x3D14A0u;
    {
        const bool branch_taken_0x3d14a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D14A0u;
        // 0x3d14a4: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d14a0) {
            ctx->pc = 0x3D14F0u;
            goto label_3d14f0;
        }
    }
    ctx->pc = 0x3D14A8u;
label_3d14a8:
    // 0x3d14a8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d14a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3d14ac:
    // 0x3d14ac: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d14acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3d14b0:
    // 0x3d14b0: 0xc0aaad4  jal         func_2AAB50
label_3d14b4:
    if (ctx->pc == 0x3D14B4u) {
        ctx->pc = 0x3D14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D14B0u;
        // 0x3d14b4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D14B8u;
        goto label_3d14b8;
    }
    ctx->pc = 0x3D14B0u;
    SET_GPR_U32(ctx, 31, 0x3D14B8u);
    ctx->pc = 0x3D14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D14B0u;
    // 0x3d14b4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAB50u, 0x3D14B0u, 0x3D14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D14B8u;
label_3d14b8:
    // 0x3d14b8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3d14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_3d14bc:
    // 0x3d14bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3d14c0:
    // 0x3d14c0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d14c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3d14c4:
    // 0x3d14c4: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x3d14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
label_3d14c8:
    // 0x3d14c8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3d14cc:
    // 0x3d14cc: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3d14ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
label_3d14d0:
    // 0x3d14d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d14d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d14d4:
    // 0x3d14d4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d14d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d14d8:
    // 0x3d14d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d14d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d14dc:
    // 0x3d14dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d14dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d14e0:
    // 0x3d14e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d14e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d14e4:
    // 0x3d14e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d14e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d14e8:
    // 0x3d14e8: 0xc05e9e8  jal         func_17A7A0
label_3d14ec:
    if (ctx->pc == 0x3D14ECu) {
        ctx->pc = 0x3D14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D14E8u;
        // 0x3d14ec: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D14F0u;
        goto label_3d14f0;
    }
    ctx->pc = 0x3D14E8u;
    SET_GPR_U32(ctx, 31, 0x3D14F0u);
    ctx->pc = 0x3D14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D14E8u;
    // 0x3d14ec: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D14E8u, 0x3D14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D14F0u;
label_3d14f0:
    // 0x3d14f0: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x3d14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3d14f4:
    // 0x3d14f4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d14f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3d14f8:
    // 0x3d14f8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d14f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3d14fc:
    // 0x3d14fc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d14fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3d1500:
    // 0x3d1500: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d1500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3d1504:
    // 0x3d1504: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d1504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3d1508:
    // 0x3d1508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d150c:
    // 0x3d150c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d150cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d1510:
    // 0x3d1510: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3d1510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3d1514:
    // 0x3d1514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1518:
    // 0x3d1518: 0xc0c08b4  jal         func_3022D0
label_3d151c:
    if (ctx->pc == 0x3D151Cu) {
        ctx->pc = 0x3D151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1518u;
        // 0x3d151c: 0x26250570  addiu       $a1, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1520u;
        goto label_3d1520;
    }
    ctx->pc = 0x3D1518u;
    SET_GPR_U32(ctx, 31, 0x3D1520u);
    ctx->pc = 0x3D151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1518u;
    // 0x3d151c: 0x26250570  addiu       $a1, $s1, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D1518u, 0x3D1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1520u;
label_3d1520:
    // 0x3d1520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d1524:
    if (ctx->pc == 0x3D1524u) {
        ctx->pc = 0x3D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1520u;
        // 0x3d1524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1528u;
        goto label_3d1528;
    }
    ctx->pc = 0x3D1520u;
    {
        const bool branch_taken_0x3d1520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1520u;
        // 0x3d1524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1520) {
            ctx->pc = 0x3D1530u;
            goto label_3d1530;
        }
    }
    ctx->pc = 0x3D1528u;
label_3d1528:
    // 0x3d1528: 0xc0c0830  jal         func_3020C0
label_3d152c:
    if (ctx->pc == 0x3D152Cu) {
        ctx->pc = 0x3D152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1528u;
        // 0x3d152c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1530u;
        goto label_3d1530;
    }
    ctx->pc = 0x3D1528u;
    SET_GPR_U32(ctx, 31, 0x3D1530u);
    ctx->pc = 0x3D152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1528u;
    // 0x3d152c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1528u, 0x3D1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1530u;
label_3d1530:
    // 0x3d1530: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d1530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d1534:
    // 0x3d1534: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3d1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d1538:
    // 0x3d1538: 0x14830049  bne         $a0, $v1, . + 4 + (0x49 << 2)
label_3d153c:
    if (ctx->pc == 0x3D153Cu) {
        ctx->pc = 0x3D153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1538u;
        // 0x3d153c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1540u;
        goto label_3d1540;
    }
    ctx->pc = 0x3D1538u;
    {
        const bool branch_taken_0x3d1538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1538u;
        // 0x3d153c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1538) {
            ctx->pc = 0x3D1660u;
            goto label_3d1660;
        }
    }
    ctx->pc = 0x3D1540u;
label_3d1540:
    // 0x3d1540: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3d1540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d1544:
    // 0x3d1544: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d1544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d1548:
    // 0x3d1548: 0xc097080  jal         func_25C200
label_3d154c:
    if (ctx->pc == 0x3D154Cu) {
        ctx->pc = 0x3D154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1548u;
        // 0x3d154c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1550u;
        goto label_3d1550;
    }
    ctx->pc = 0x3D1548u;
    SET_GPR_U32(ctx, 31, 0x3D1550u);
    ctx->pc = 0x3D154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1548u;
    // 0x3d154c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x3D1548u, 0x3D1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1550u;
label_3d1550:
    // 0x3d1550: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3d1550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d1554:
    // 0x3d1554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d1554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1558:
    // 0x3d1558: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_3d155c:
    if (ctx->pc == 0x3D155Cu) {
        ctx->pc = 0x3D155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1558u;
        // 0x3d155c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1560u;
        goto label_3d1560;
    }
    ctx->pc = 0x3D1558u;
    {
        const bool branch_taken_0x3d1558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1558u;
        // 0x3d155c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1558) {
            ctx->pc = 0x3D15B0u;
            goto label_3d15b0;
        }
    }
    ctx->pc = 0x3D1560u;
label_3d1560:
    // 0x3d1560: 0x92250559  lbu         $a1, 0x559($s1)
    ctx->pc = 0x3d1560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d1564:
    // 0x3d1564: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d1564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3d1568:
    // 0x3d1568: 0x246330f0  addiu       $v1, $v1, 0x30F0
    ctx->pc = 0x3d1568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12528));
label_3d156c:
    // 0x3d156c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3d156cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d1570:
    // 0x3d1570: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3d1570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d1574:
    // 0x3d1574: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d1574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d1578:
    // 0x3d1578: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3d1578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3d157c:
    // 0x3d157c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d1580:
    // 0x3d1580: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3d1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3d1584:
    // 0x3d1584: 0x0  nop
    ctx->pc = 0x3d1584u;
    // NOP
label_3d1588:
    // 0x3d1588: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3d1588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d158c:
    // 0x3d158c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3d158cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3d1590:
    // 0x3d1590: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_3d1594:
    if (ctx->pc == 0x3D1594u) {
        ctx->pc = 0x3D1598u;
        goto label_3d1598;
    }
    ctx->pc = 0x3D1590u;
    {
        const bool branch_taken_0x3d1590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d1590) {
            ctx->pc = 0x3D15A0u;
            goto label_3d15a0;
        }
    }
    ctx->pc = 0x3D1598u;
label_3d1598:
    // 0x3d1598: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d1598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3d159c:
    // 0x3d159c: 0x0  nop
    ctx->pc = 0x3d159cu;
    // NOP
label_3d15a0:
    // 0x3d15a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d15a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3d15a4:
    // 0x3d15a4: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x3d15a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d15a8:
    // 0x3d15a8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3d15ac:
    if (ctx->pc == 0x3D15ACu) {
        ctx->pc = 0x3D15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15A8u;
        // 0x3d15ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D15B0u;
        goto label_3d15b0;
    }
    ctx->pc = 0x3D15A8u;
    {
        const bool branch_taken_0x3d15a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15A8u;
        // 0x3d15ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d15a8) {
            ctx->pc = 0x3D1588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1588;
        }
    }
    ctx->pc = 0x3D15B0u;
label_3d15b0:
    // 0x3d15b0: 0xc0f4084  jal         func_3D0210
label_3d15b4:
    if (ctx->pc == 0x3D15B4u) {
        ctx->pc = 0x3D15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15B0u;
        // 0x3d15b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D15B8u;
        goto label_3d15b8;
    }
    ctx->pc = 0x3D15B0u;
    SET_GPR_U32(ctx, 31, 0x3D15B8u);
    ctx->pc = 0x3D15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D15B0u;
    // 0x3d15b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0210u, 0x3D15B0u, 0x3D15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D15B8u;
label_3d15b8:
    // 0x3d15b8: 0x92250559  lbu         $a1, 0x559($s1)
    ctx->pc = 0x3d15b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_3d15bc:
    // 0x3d15bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3d15bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3d15c0:
    // 0x3d15c0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d15c4:
    // 0x3d15c4: 0x24423134  addiu       $v0, $v0, 0x3134
    ctx->pc = 0x3d15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12596));
label_3d15c8:
    // 0x3d15c8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d15cc:
    // 0x3d15cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d15d0:
    // 0x3d15d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d15d4:
    // 0x3d15d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d15d8:
    // 0x3d15d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d15dc:
    // 0x3d15dc: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x3d15dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d15e0:
    // 0x3d15e0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_3d15e4:
    if (ctx->pc == 0x3D15E4u) {
        ctx->pc = 0x3D15E8u;
        goto label_3d15e8;
    }
    ctx->pc = 0x3D15E0u;
    {
        const bool branch_taken_0x3d15e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d15e0) {
            ctx->pc = 0x3D1658u;
            goto label_3d1658;
        }
    }
    ctx->pc = 0x3D15E8u;
label_3d15e8:
    // 0x3d15e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3d15ec:
    // 0x3d15ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d15ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d15f0:
    // 0x3d15f0: 0x24423130  addiu       $v0, $v0, 0x3130
    ctx->pc = 0x3d15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12592));
label_3d15f4:
    // 0x3d15f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d15f8:
    // 0x3d15f8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3d15f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3d15fc:
    // 0x3d15fc: 0xc0b2ebc  jal         func_2CBAF0
label_3d1600:
    if (ctx->pc == 0x3D1600u) {
        ctx->pc = 0x3D1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D15FCu;
        // 0x3d1600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1604u;
        goto label_3d1604;
    }
    ctx->pc = 0x3D15FCu;
    SET_GPR_U32(ctx, 31, 0x3D1604u);
    ctx->pc = 0x3D1600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D15FCu;
    // 0x3d1600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3D15FCu, 0x3D1604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1604u;
label_3d1604:
    // 0x3d1604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d1604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1608:
    // 0x3d1608: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_3d160c:
    if (ctx->pc == 0x3D160Cu) {
        ctx->pc = 0x3D1610u;
        goto label_3d1610;
    }
    ctx->pc = 0x3D1608u;
    {
        const bool branch_taken_0x3d1608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1608) {
            ctx->pc = 0x3D1660u;
            goto label_3d1660;
        }
    }
    ctx->pc = 0x3D1610u;
label_3d1610:
    // 0x3d1610: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3d1610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3d1614:
    // 0x3d1614: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3d1614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3d1618:
    // 0x3d1618: 0x320f809  jalr        $t9
label_3d161c:
    if (ctx->pc == 0x3D161Cu) {
        ctx->pc = 0x3D161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1618u;
        // 0x3d161c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1620u;
        goto label_3d1620;
    }
    ctx->pc = 0x3D1618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D1620u);
        ctx->pc = 0x3D161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1618u;
        // 0x3d161c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1618u, 0x3D1620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1620u;
label_3d1620:
    // 0x3d1620: 0x7a230570  lq          $v1, 0x570($s1)
    ctx->pc = 0x3d1620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1392)));
label_3d1624:
    // 0x3d1624: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d1624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d1628:
    // 0x3d1628: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3d1628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d162c:
    // 0x3d162c: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x3d162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_3d1630:
    // 0x3d1630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d1630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1634:
    // 0x3d1634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d1634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1638:
    // 0x3d1638: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3d1638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d163c:
    // 0x3d163c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3d163cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3d1640:
    // 0x3d1640: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3d1640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_3d1644:
    // 0x3d1644: 0xc0b273c  jal         func_2C9CF0
label_3d1648:
    if (ctx->pc == 0x3D1648u) {
        ctx->pc = 0x3D1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1644u;
        // 0x3d1648: 0xa2070640  sb          $a3, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D164Cu;
        goto label_3d164c;
    }
    ctx->pc = 0x3D1644u;
    SET_GPR_U32(ctx, 31, 0x3D164Cu);
    ctx->pc = 0x3D1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1644u;
    // 0x3d1648: 0xa2070640  sb          $a3, 0x640($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x3D1644u, 0x3D164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D164Cu;
label_3d164c:
    // 0x3d164c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d1650:
    if (ctx->pc == 0x3D1650u) {
        ctx->pc = 0x3D1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D164Cu;
        // 0x3d1650: 0xa220055a  sb          $zero, 0x55A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1370), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1654u;
        goto label_3d1654;
    }
    ctx->pc = 0x3D164Cu;
    {
        const bool branch_taken_0x3d164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D164Cu;
        // 0x3d1650: 0xa220055a  sb          $zero, 0x55A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1370), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d164c) {
            ctx->pc = 0x3D1660u;
            goto label_3d1660;
        }
    }
    ctx->pc = 0x3D1654u;
label_3d1654:
    // 0x3d1654: 0x0  nop
    ctx->pc = 0x3d1654u;
    // NOP
label_3d1658:
    // 0x3d1658: 0xc0c0830  jal         func_3020C0
label_3d165c:
    if (ctx->pc == 0x3D165Cu) {
        ctx->pc = 0x3D165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1658u;
        // 0x3d165c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1660u;
        goto label_3d1660;
    }
    ctx->pc = 0x3D1658u;
    SET_GPR_U32(ctx, 31, 0x3D1660u);
    ctx->pc = 0x3D165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1658u;
    // 0x3d165c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1658u, 0x3D1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1660u;
label_3d1660:
    // 0x3d1660: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d1660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3d1664:
    // 0x3d1664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d1668:
    if (ctx->pc == 0x3D1668u) {
        ctx->pc = 0x3D1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1664u;
        // 0x3d1668: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D166Cu;
        goto label_3d166c;
    }
    ctx->pc = 0x3D1664u;
    {
        const bool branch_taken_0x3d1664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1664u;
        // 0x3d1668: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1664) {
            ctx->pc = 0x3D1678u;
            goto label_3d1678;
        }
    }
    ctx->pc = 0x3D166Cu;
label_3d166c:
    // 0x3d166c: 0x10000022  b           . + 4 + (0x22 << 2)
label_3d1670:
    if (ctx->pc == 0x3D1670u) {
        ctx->pc = 0x3D1674u;
        goto label_3d1674;
    }
    ctx->pc = 0x3D166Cu;
    {
        const bool branch_taken_0x3d166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d166c) {
            ctx->pc = 0x3D16F8u;
            goto label_3d16f8;
        }
    }
    ctx->pc = 0x3D1674u;
label_3d1674:
    // 0x3d1674: 0x0  nop
    ctx->pc = 0x3d1674u;
    // NOP
label_3d1678:
    // 0x3d1678: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d1678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d167c:
    // 0x3d167c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3d1680:
    // 0x3d1680: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d1680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3d1684:
    // 0x3d1684: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d1684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d1688:
    // 0x3d1688: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d1688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3d168c:
    // 0x3d168c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3d1690:
    if (ctx->pc == 0x3D1690u) {
        ctx->pc = 0x3D1694u;
        goto label_3d1694;
    }
    ctx->pc = 0x3D168Cu;
    {
        const bool branch_taken_0x3d168c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d168c) {
            ctx->pc = 0x3D16C8u;
            goto label_3d16c8;
        }
    }
    ctx->pc = 0x3D1694u;
label_3d1694:
    // 0x3d1694: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d1694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d1698:
    // 0x3d1698: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d1698u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3d169c:
    // 0x3d169c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3d16a0:
    if (ctx->pc == 0x3D16A0u) {
        ctx->pc = 0x3D16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D169Cu;
        // 0x3d16a0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D16A4u;
        goto label_3d16a4;
    }
    ctx->pc = 0x3D169Cu;
    {
        const bool branch_taken_0x3d169c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D169Cu;
        // 0x3d16a0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d169c) {
            ctx->pc = 0x3D16F0u;
            goto label_3d16f0;
        }
    }
    ctx->pc = 0x3D16A4u;
label_3d16a4:
    // 0x3d16a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d16a8:
    // 0x3d16a8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d16a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3d16ac:
    // 0x3d16ac: 0x0  nop
    ctx->pc = 0x3d16acu;
    // NOP
label_3d16b0:
    // 0x3d16b0: 0x0  nop
    ctx->pc = 0x3d16b0u;
    // NOP
label_3d16b4:
    // 0x3d16b4: 0x2010  mfhi        $a0
    ctx->pc = 0x3d16b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3d16b8:
    // 0x3d16b8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d16b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d16bc:
    // 0x3d16bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d16c0:
    if (ctx->pc == 0x3D16C0u) {
        ctx->pc = 0x3D16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16BCu;
        // 0x3d16c0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D16C4u;
        goto label_3d16c4;
    }
    ctx->pc = 0x3D16BCu;
    {
        const bool branch_taken_0x3d16bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16BCu;
        // 0x3d16c0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d16bc) {
            ctx->pc = 0x3D16F0u;
            goto label_3d16f0;
        }
    }
    ctx->pc = 0x3D16C4u;
label_3d16c4:
    // 0x3d16c4: 0x0  nop
    ctx->pc = 0x3d16c4u;
    // NOP
label_3d16c8:
    // 0x3d16c8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d16c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3d16cc:
    // 0x3d16cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d16ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d16d0:
    // 0x3d16d0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3d16d4:
    if (ctx->pc == 0x3D16D4u) {
        ctx->pc = 0x3D16D8u;
        goto label_3d16d8;
    }
    ctx->pc = 0x3D16D0u;
    {
        const bool branch_taken_0x3d16d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d16d0) {
            ctx->pc = 0x3D16F0u;
            goto label_3d16f0;
        }
    }
    ctx->pc = 0x3D16D8u;
label_3d16d8:
    // 0x3d16d8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d16d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3d16dc:
    // 0x3d16dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d16e0:
    // 0x3d16e0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d16e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3d16e4:
    // 0x3d16e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d16e8:
    if (ctx->pc == 0x3D16E8u) {
        ctx->pc = 0x3D16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16E4u;
        // 0x3d16e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D16ECu;
        goto label_3d16ec;
    }
    ctx->pc = 0x3D16E4u;
    {
        const bool branch_taken_0x3d16e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16E4u;
        // 0x3d16e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d16e4) {
            ctx->pc = 0x3D16F8u;
            goto label_3d16f8;
        }
    }
    ctx->pc = 0x3D16ECu;
label_3d16ec:
    // 0x3d16ec: 0x0  nop
    ctx->pc = 0x3d16ecu;
    // NOP
label_3d16f0:
    // 0x3d16f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d16f4:
    // 0x3d16f4: 0x0  nop
    ctx->pc = 0x3d16f4u;
    // NOP
label_3d16f8:
    // 0x3d16f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3d16fc:
    if (ctx->pc == 0x3D16FCu) {
        ctx->pc = 0x3D16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16F8u;
        // 0x3d16fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1700u;
        goto label_3d1700;
    }
    ctx->pc = 0x3D16F8u;
    {
        const bool branch_taken_0x3d16f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D16F8u;
        // 0x3d16fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d16f8) {
            ctx->pc = 0x3D1708u;
            goto label_3d1708;
        }
    }
    ctx->pc = 0x3D1700u;
label_3d1700:
    // 0x3d1700: 0xc0c0830  jal         func_3020C0
label_3d1704:
    if (ctx->pc == 0x3D1704u) {
        ctx->pc = 0x3D1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1700u;
        // 0x3d1704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1708u;
        goto label_3d1708;
    }
    ctx->pc = 0x3D1700u;
    SET_GPR_U32(ctx, 31, 0x3D1708u);
    ctx->pc = 0x3D1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1700u;
    // 0x3d1704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D1700u, 0x3D1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1708u;
label_3d1708:
    // 0x3d1708: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d1708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d170c:
    // 0x3d170c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d170cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1710:
    // 0x3d1710: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d1710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1714:
    // 0x3d1714: 0x3e00008  jr          $ra
label_3d1718:
    if (ctx->pc == 0x3D1718u) {
        ctx->pc = 0x3D1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1714u;
        // 0x3d1718: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D171Cu;
        goto label_fallthrough_0x3d1714;
    }
    ctx->pc = 0x3D1714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1714u;
        // 0x3d1718: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d1714:
    ctx->pc = 0x3D171Cu;
}
