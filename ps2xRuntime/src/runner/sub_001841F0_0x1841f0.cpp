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

// Function: sub_001841F0
// Address: 0x1841f0 - 0x184ec0
void sub_001841F0_0x1841f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001841F0_0x1841f0");
#endif

    switch (ctx->pc) {
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        case 0x184300u: goto label_184300;
        case 0x184304u: goto label_184304;
        case 0x184308u: goto label_184308;
        case 0x18430cu: goto label_18430c;
        case 0x184310u: goto label_184310;
        case 0x184314u: goto label_184314;
        case 0x184318u: goto label_184318;
        case 0x18431cu: goto label_18431c;
        case 0x184320u: goto label_184320;
        case 0x184324u: goto label_184324;
        case 0x184328u: goto label_184328;
        case 0x18432cu: goto label_18432c;
        case 0x184330u: goto label_184330;
        case 0x184334u: goto label_184334;
        case 0x184338u: goto label_184338;
        case 0x18433cu: goto label_18433c;
        case 0x184340u: goto label_184340;
        case 0x184344u: goto label_184344;
        case 0x184348u: goto label_184348;
        case 0x18434cu: goto label_18434c;
        case 0x184350u: goto label_184350;
        case 0x184354u: goto label_184354;
        case 0x184358u: goto label_184358;
        case 0x18435cu: goto label_18435c;
        case 0x184360u: goto label_184360;
        case 0x184364u: goto label_184364;
        case 0x184368u: goto label_184368;
        case 0x18436cu: goto label_18436c;
        case 0x184370u: goto label_184370;
        case 0x184374u: goto label_184374;
        case 0x184378u: goto label_184378;
        case 0x18437cu: goto label_18437c;
        case 0x184380u: goto label_184380;
        case 0x184384u: goto label_184384;
        case 0x184388u: goto label_184388;
        case 0x18438cu: goto label_18438c;
        case 0x184390u: goto label_184390;
        case 0x184394u: goto label_184394;
        case 0x184398u: goto label_184398;
        case 0x18439cu: goto label_18439c;
        case 0x1843a0u: goto label_1843a0;
        case 0x1843a4u: goto label_1843a4;
        case 0x1843a8u: goto label_1843a8;
        case 0x1843acu: goto label_1843ac;
        case 0x1843b0u: goto label_1843b0;
        case 0x1843b4u: goto label_1843b4;
        case 0x1843b8u: goto label_1843b8;
        case 0x1843bcu: goto label_1843bc;
        case 0x1843c0u: goto label_1843c0;
        case 0x1843c4u: goto label_1843c4;
        case 0x1843c8u: goto label_1843c8;
        case 0x1843ccu: goto label_1843cc;
        case 0x1843d0u: goto label_1843d0;
        case 0x1843d4u: goto label_1843d4;
        case 0x1843d8u: goto label_1843d8;
        case 0x1843dcu: goto label_1843dc;
        case 0x1843e0u: goto label_1843e0;
        case 0x1843e4u: goto label_1843e4;
        case 0x1843e8u: goto label_1843e8;
        case 0x1843ecu: goto label_1843ec;
        case 0x1843f0u: goto label_1843f0;
        case 0x1843f4u: goto label_1843f4;
        case 0x1843f8u: goto label_1843f8;
        case 0x1843fcu: goto label_1843fc;
        case 0x184400u: goto label_184400;
        case 0x184404u: goto label_184404;
        case 0x184408u: goto label_184408;
        case 0x18440cu: goto label_18440c;
        case 0x184410u: goto label_184410;
        case 0x184414u: goto label_184414;
        case 0x184418u: goto label_184418;
        case 0x18441cu: goto label_18441c;
        case 0x184420u: goto label_184420;
        case 0x184424u: goto label_184424;
        case 0x184428u: goto label_184428;
        case 0x18442cu: goto label_18442c;
        case 0x184430u: goto label_184430;
        case 0x184434u: goto label_184434;
        case 0x184438u: goto label_184438;
        case 0x18443cu: goto label_18443c;
        case 0x184440u: goto label_184440;
        case 0x184444u: goto label_184444;
        case 0x184448u: goto label_184448;
        case 0x18444cu: goto label_18444c;
        case 0x184450u: goto label_184450;
        case 0x184454u: goto label_184454;
        case 0x184458u: goto label_184458;
        case 0x18445cu: goto label_18445c;
        case 0x184460u: goto label_184460;
        case 0x184464u: goto label_184464;
        case 0x184468u: goto label_184468;
        case 0x18446cu: goto label_18446c;
        case 0x184470u: goto label_184470;
        case 0x184474u: goto label_184474;
        case 0x184478u: goto label_184478;
        case 0x18447cu: goto label_18447c;
        case 0x184480u: goto label_184480;
        case 0x184484u: goto label_184484;
        case 0x184488u: goto label_184488;
        case 0x18448cu: goto label_18448c;
        case 0x184490u: goto label_184490;
        case 0x184494u: goto label_184494;
        case 0x184498u: goto label_184498;
        case 0x18449cu: goto label_18449c;
        case 0x1844a0u: goto label_1844a0;
        case 0x1844a4u: goto label_1844a4;
        case 0x1844a8u: goto label_1844a8;
        case 0x1844acu: goto label_1844ac;
        case 0x1844b0u: goto label_1844b0;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844b8u: goto label_1844b8;
        case 0x1844bcu: goto label_1844bc;
        case 0x1844c0u: goto label_1844c0;
        case 0x1844c4u: goto label_1844c4;
        case 0x1844c8u: goto label_1844c8;
        case 0x1844ccu: goto label_1844cc;
        case 0x1844d0u: goto label_1844d0;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844d8u: goto label_1844d8;
        case 0x1844dcu: goto label_1844dc;
        case 0x1844e0u: goto label_1844e0;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844e8u: goto label_1844e8;
        case 0x1844ecu: goto label_1844ec;
        case 0x1844f0u: goto label_1844f0;
        case 0x1844f4u: goto label_1844f4;
        case 0x1844f8u: goto label_1844f8;
        case 0x1844fcu: goto label_1844fc;
        case 0x184500u: goto label_184500;
        case 0x184504u: goto label_184504;
        case 0x184508u: goto label_184508;
        case 0x18450cu: goto label_18450c;
        case 0x184510u: goto label_184510;
        case 0x184514u: goto label_184514;
        case 0x184518u: goto label_184518;
        case 0x18451cu: goto label_18451c;
        case 0x184520u: goto label_184520;
        case 0x184524u: goto label_184524;
        case 0x184528u: goto label_184528;
        case 0x18452cu: goto label_18452c;
        case 0x184530u: goto label_184530;
        case 0x184534u: goto label_184534;
        case 0x184538u: goto label_184538;
        case 0x18453cu: goto label_18453c;
        case 0x184540u: goto label_184540;
        case 0x184544u: goto label_184544;
        case 0x184548u: goto label_184548;
        case 0x18454cu: goto label_18454c;
        case 0x184550u: goto label_184550;
        case 0x184554u: goto label_184554;
        case 0x184558u: goto label_184558;
        case 0x18455cu: goto label_18455c;
        case 0x184560u: goto label_184560;
        case 0x184564u: goto label_184564;
        case 0x184568u: goto label_184568;
        case 0x18456cu: goto label_18456c;
        case 0x184570u: goto label_184570;
        case 0x184574u: goto label_184574;
        case 0x184578u: goto label_184578;
        case 0x18457cu: goto label_18457c;
        case 0x184580u: goto label_184580;
        case 0x184584u: goto label_184584;
        case 0x184588u: goto label_184588;
        case 0x18458cu: goto label_18458c;
        case 0x184590u: goto label_184590;
        case 0x184594u: goto label_184594;
        case 0x184598u: goto label_184598;
        case 0x18459cu: goto label_18459c;
        case 0x1845a0u: goto label_1845a0;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845a8u: goto label_1845a8;
        case 0x1845acu: goto label_1845ac;
        case 0x1845b0u: goto label_1845b0;
        case 0x1845b4u: goto label_1845b4;
        case 0x1845b8u: goto label_1845b8;
        case 0x1845bcu: goto label_1845bc;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845c4u: goto label_1845c4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ccu: goto label_1845cc;
        case 0x1845d0u: goto label_1845d0;
        case 0x1845d4u: goto label_1845d4;
        case 0x1845d8u: goto label_1845d8;
        case 0x1845dcu: goto label_1845dc;
        case 0x1845e0u: goto label_1845e0;
        case 0x1845e4u: goto label_1845e4;
        case 0x1845e8u: goto label_1845e8;
        case 0x1845ecu: goto label_1845ec;
        case 0x1845f0u: goto label_1845f0;
        case 0x1845f4u: goto label_1845f4;
        case 0x1845f8u: goto label_1845f8;
        case 0x1845fcu: goto label_1845fc;
        case 0x184600u: goto label_184600;
        case 0x184604u: goto label_184604;
        case 0x184608u: goto label_184608;
        case 0x18460cu: goto label_18460c;
        case 0x184610u: goto label_184610;
        case 0x184614u: goto label_184614;
        case 0x184618u: goto label_184618;
        case 0x18461cu: goto label_18461c;
        case 0x184620u: goto label_184620;
        case 0x184624u: goto label_184624;
        case 0x184628u: goto label_184628;
        case 0x18462cu: goto label_18462c;
        case 0x184630u: goto label_184630;
        case 0x184634u: goto label_184634;
        case 0x184638u: goto label_184638;
        case 0x18463cu: goto label_18463c;
        case 0x184640u: goto label_184640;
        case 0x184644u: goto label_184644;
        case 0x184648u: goto label_184648;
        case 0x18464cu: goto label_18464c;
        case 0x184650u: goto label_184650;
        case 0x184654u: goto label_184654;
        case 0x184658u: goto label_184658;
        case 0x18465cu: goto label_18465c;
        case 0x184660u: goto label_184660;
        case 0x184664u: goto label_184664;
        case 0x184668u: goto label_184668;
        case 0x18466cu: goto label_18466c;
        case 0x184670u: goto label_184670;
        case 0x184674u: goto label_184674;
        case 0x184678u: goto label_184678;
        case 0x18467cu: goto label_18467c;
        case 0x184680u: goto label_184680;
        case 0x184684u: goto label_184684;
        case 0x184688u: goto label_184688;
        case 0x18468cu: goto label_18468c;
        case 0x184690u: goto label_184690;
        case 0x184694u: goto label_184694;
        case 0x184698u: goto label_184698;
        case 0x18469cu: goto label_18469c;
        case 0x1846a0u: goto label_1846a0;
        case 0x1846a4u: goto label_1846a4;
        case 0x1846a8u: goto label_1846a8;
        case 0x1846acu: goto label_1846ac;
        case 0x1846b0u: goto label_1846b0;
        case 0x1846b4u: goto label_1846b4;
        case 0x1846b8u: goto label_1846b8;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846c0u: goto label_1846c0;
        case 0x1846c4u: goto label_1846c4;
        case 0x1846c8u: goto label_1846c8;
        case 0x1846ccu: goto label_1846cc;
        case 0x1846d0u: goto label_1846d0;
        case 0x1846d4u: goto label_1846d4;
        case 0x1846d8u: goto label_1846d8;
        case 0x1846dcu: goto label_1846dc;
        case 0x1846e0u: goto label_1846e0;
        case 0x1846e4u: goto label_1846e4;
        case 0x1846e8u: goto label_1846e8;
        case 0x1846ecu: goto label_1846ec;
        case 0x1846f0u: goto label_1846f0;
        case 0x1846f4u: goto label_1846f4;
        case 0x1846f8u: goto label_1846f8;
        case 0x1846fcu: goto label_1846fc;
        case 0x184700u: goto label_184700;
        case 0x184704u: goto label_184704;
        case 0x184708u: goto label_184708;
        case 0x18470cu: goto label_18470c;
        case 0x184710u: goto label_184710;
        case 0x184714u: goto label_184714;
        case 0x184718u: goto label_184718;
        case 0x18471cu: goto label_18471c;
        case 0x184720u: goto label_184720;
        case 0x184724u: goto label_184724;
        case 0x184728u: goto label_184728;
        case 0x18472cu: goto label_18472c;
        case 0x184730u: goto label_184730;
        case 0x184734u: goto label_184734;
        case 0x184738u: goto label_184738;
        case 0x18473cu: goto label_18473c;
        case 0x184740u: goto label_184740;
        case 0x184744u: goto label_184744;
        case 0x184748u: goto label_184748;
        case 0x18474cu: goto label_18474c;
        case 0x184750u: goto label_184750;
        case 0x184754u: goto label_184754;
        case 0x184758u: goto label_184758;
        case 0x18475cu: goto label_18475c;
        case 0x184760u: goto label_184760;
        case 0x184764u: goto label_184764;
        case 0x184768u: goto label_184768;
        case 0x18476cu: goto label_18476c;
        case 0x184770u: goto label_184770;
        case 0x184774u: goto label_184774;
        case 0x184778u: goto label_184778;
        case 0x18477cu: goto label_18477c;
        case 0x184780u: goto label_184780;
        case 0x184784u: goto label_184784;
        case 0x184788u: goto label_184788;
        case 0x18478cu: goto label_18478c;
        case 0x184790u: goto label_184790;
        case 0x184794u: goto label_184794;
        case 0x184798u: goto label_184798;
        case 0x18479cu: goto label_18479c;
        case 0x1847a0u: goto label_1847a0;
        case 0x1847a4u: goto label_1847a4;
        case 0x1847a8u: goto label_1847a8;
        case 0x1847acu: goto label_1847ac;
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        case 0x184810u: goto label_184810;
        case 0x184814u: goto label_184814;
        case 0x184818u: goto label_184818;
        case 0x18481cu: goto label_18481c;
        case 0x184820u: goto label_184820;
        case 0x184824u: goto label_184824;
        case 0x184828u: goto label_184828;
        case 0x18482cu: goto label_18482c;
        case 0x184830u: goto label_184830;
        case 0x184834u: goto label_184834;
        case 0x184838u: goto label_184838;
        case 0x18483cu: goto label_18483c;
        case 0x184840u: goto label_184840;
        case 0x184844u: goto label_184844;
        case 0x184848u: goto label_184848;
        case 0x18484cu: goto label_18484c;
        case 0x184850u: goto label_184850;
        case 0x184854u: goto label_184854;
        case 0x184858u: goto label_184858;
        case 0x18485cu: goto label_18485c;
        case 0x184860u: goto label_184860;
        case 0x184864u: goto label_184864;
        case 0x184868u: goto label_184868;
        case 0x18486cu: goto label_18486c;
        case 0x184870u: goto label_184870;
        case 0x184874u: goto label_184874;
        case 0x184878u: goto label_184878;
        case 0x18487cu: goto label_18487c;
        case 0x184880u: goto label_184880;
        case 0x184884u: goto label_184884;
        case 0x184888u: goto label_184888;
        case 0x18488cu: goto label_18488c;
        case 0x184890u: goto label_184890;
        case 0x184894u: goto label_184894;
        case 0x184898u: goto label_184898;
        case 0x18489cu: goto label_18489c;
        case 0x1848a0u: goto label_1848a0;
        case 0x1848a4u: goto label_1848a4;
        case 0x1848a8u: goto label_1848a8;
        case 0x1848acu: goto label_1848ac;
        case 0x1848b0u: goto label_1848b0;
        case 0x1848b4u: goto label_1848b4;
        case 0x1848b8u: goto label_1848b8;
        case 0x1848bcu: goto label_1848bc;
        case 0x1848c0u: goto label_1848c0;
        case 0x1848c4u: goto label_1848c4;
        case 0x1848c8u: goto label_1848c8;
        case 0x1848ccu: goto label_1848cc;
        case 0x1848d0u: goto label_1848d0;
        case 0x1848d4u: goto label_1848d4;
        case 0x1848d8u: goto label_1848d8;
        case 0x1848dcu: goto label_1848dc;
        case 0x1848e0u: goto label_1848e0;
        case 0x1848e4u: goto label_1848e4;
        case 0x1848e8u: goto label_1848e8;
        case 0x1848ecu: goto label_1848ec;
        case 0x1848f0u: goto label_1848f0;
        case 0x1848f4u: goto label_1848f4;
        case 0x1848f8u: goto label_1848f8;
        case 0x1848fcu: goto label_1848fc;
        case 0x184900u: goto label_184900;
        case 0x184904u: goto label_184904;
        case 0x184908u: goto label_184908;
        case 0x18490cu: goto label_18490c;
        case 0x184910u: goto label_184910;
        case 0x184914u: goto label_184914;
        case 0x184918u: goto label_184918;
        case 0x18491cu: goto label_18491c;
        case 0x184920u: goto label_184920;
        case 0x184924u: goto label_184924;
        case 0x184928u: goto label_184928;
        case 0x18492cu: goto label_18492c;
        case 0x184930u: goto label_184930;
        case 0x184934u: goto label_184934;
        case 0x184938u: goto label_184938;
        case 0x18493cu: goto label_18493c;
        case 0x184940u: goto label_184940;
        case 0x184944u: goto label_184944;
        case 0x184948u: goto label_184948;
        case 0x18494cu: goto label_18494c;
        case 0x184950u: goto label_184950;
        case 0x184954u: goto label_184954;
        case 0x184958u: goto label_184958;
        case 0x18495cu: goto label_18495c;
        case 0x184960u: goto label_184960;
        case 0x184964u: goto label_184964;
        case 0x184968u: goto label_184968;
        case 0x18496cu: goto label_18496c;
        case 0x184970u: goto label_184970;
        case 0x184974u: goto label_184974;
        case 0x184978u: goto label_184978;
        case 0x18497cu: goto label_18497c;
        case 0x184980u: goto label_184980;
        case 0x184984u: goto label_184984;
        case 0x184988u: goto label_184988;
        case 0x18498cu: goto label_18498c;
        case 0x184990u: goto label_184990;
        case 0x184994u: goto label_184994;
        case 0x184998u: goto label_184998;
        case 0x18499cu: goto label_18499c;
        case 0x1849a0u: goto label_1849a0;
        case 0x1849a4u: goto label_1849a4;
        case 0x1849a8u: goto label_1849a8;
        case 0x1849acu: goto label_1849ac;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849b4u: goto label_1849b4;
        case 0x1849b8u: goto label_1849b8;
        case 0x1849bcu: goto label_1849bc;
        case 0x1849c0u: goto label_1849c0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849c8u: goto label_1849c8;
        case 0x1849ccu: goto label_1849cc;
        case 0x1849d0u: goto label_1849d0;
        case 0x1849d4u: goto label_1849d4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849dcu: goto label_1849dc;
        case 0x1849e0u: goto label_1849e0;
        case 0x1849e4u: goto label_1849e4;
        case 0x1849e8u: goto label_1849e8;
        case 0x1849ecu: goto label_1849ec;
        case 0x1849f0u: goto label_1849f0;
        case 0x1849f4u: goto label_1849f4;
        case 0x1849f8u: goto label_1849f8;
        case 0x1849fcu: goto label_1849fc;
        case 0x184a00u: goto label_184a00;
        case 0x184a04u: goto label_184a04;
        case 0x184a08u: goto label_184a08;
        case 0x184a0cu: goto label_184a0c;
        case 0x184a10u: goto label_184a10;
        case 0x184a14u: goto label_184a14;
        case 0x184a18u: goto label_184a18;
        case 0x184a1cu: goto label_184a1c;
        case 0x184a20u: goto label_184a20;
        case 0x184a24u: goto label_184a24;
        case 0x184a28u: goto label_184a28;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a30u: goto label_184a30;
        case 0x184a34u: goto label_184a34;
        case 0x184a38u: goto label_184a38;
        case 0x184a3cu: goto label_184a3c;
        case 0x184a40u: goto label_184a40;
        case 0x184a44u: goto label_184a44;
        case 0x184a48u: goto label_184a48;
        case 0x184a4cu: goto label_184a4c;
        case 0x184a50u: goto label_184a50;
        case 0x184a54u: goto label_184a54;
        case 0x184a58u: goto label_184a58;
        case 0x184a5cu: goto label_184a5c;
        case 0x184a60u: goto label_184a60;
        case 0x184a64u: goto label_184a64;
        case 0x184a68u: goto label_184a68;
        case 0x184a6cu: goto label_184a6c;
        case 0x184a70u: goto label_184a70;
        case 0x184a74u: goto label_184a74;
        case 0x184a78u: goto label_184a78;
        case 0x184a7cu: goto label_184a7c;
        case 0x184a80u: goto label_184a80;
        case 0x184a84u: goto label_184a84;
        case 0x184a88u: goto label_184a88;
        case 0x184a8cu: goto label_184a8c;
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        case 0x184b60u: goto label_184b60;
        case 0x184b64u: goto label_184b64;
        case 0x184b68u: goto label_184b68;
        case 0x184b6cu: goto label_184b6c;
        case 0x184b70u: goto label_184b70;
        case 0x184b74u: goto label_184b74;
        case 0x184b78u: goto label_184b78;
        case 0x184b7cu: goto label_184b7c;
        case 0x184b80u: goto label_184b80;
        case 0x184b84u: goto label_184b84;
        case 0x184b88u: goto label_184b88;
        case 0x184b8cu: goto label_184b8c;
        case 0x184b90u: goto label_184b90;
        case 0x184b94u: goto label_184b94;
        case 0x184b98u: goto label_184b98;
        case 0x184b9cu: goto label_184b9c;
        case 0x184ba0u: goto label_184ba0;
        case 0x184ba4u: goto label_184ba4;
        case 0x184ba8u: goto label_184ba8;
        case 0x184bacu: goto label_184bac;
        case 0x184bb0u: goto label_184bb0;
        case 0x184bb4u: goto label_184bb4;
        case 0x184bb8u: goto label_184bb8;
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc0u: goto label_184bc0;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bccu: goto label_184bcc;
        case 0x184bd0u: goto label_184bd0;
        case 0x184bd4u: goto label_184bd4;
        case 0x184bd8u: goto label_184bd8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184be0u: goto label_184be0;
        case 0x184be4u: goto label_184be4;
        case 0x184be8u: goto label_184be8;
        case 0x184becu: goto label_184bec;
        case 0x184bf0u: goto label_184bf0;
        case 0x184bf4u: goto label_184bf4;
        case 0x184bf8u: goto label_184bf8;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c00u: goto label_184c00;
        case 0x184c04u: goto label_184c04;
        case 0x184c08u: goto label_184c08;
        case 0x184c0cu: goto label_184c0c;
        case 0x184c10u: goto label_184c10;
        case 0x184c14u: goto label_184c14;
        case 0x184c18u: goto label_184c18;
        case 0x184c1cu: goto label_184c1c;
        case 0x184c20u: goto label_184c20;
        case 0x184c24u: goto label_184c24;
        case 0x184c28u: goto label_184c28;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c30u: goto label_184c30;
        case 0x184c34u: goto label_184c34;
        case 0x184c38u: goto label_184c38;
        case 0x184c3cu: goto label_184c3c;
        case 0x184c40u: goto label_184c40;
        case 0x184c44u: goto label_184c44;
        case 0x184c48u: goto label_184c48;
        case 0x184c4cu: goto label_184c4c;
        case 0x184c50u: goto label_184c50;
        case 0x184c54u: goto label_184c54;
        case 0x184c58u: goto label_184c58;
        case 0x184c5cu: goto label_184c5c;
        case 0x184c60u: goto label_184c60;
        case 0x184c64u: goto label_184c64;
        case 0x184c68u: goto label_184c68;
        case 0x184c6cu: goto label_184c6c;
        case 0x184c70u: goto label_184c70;
        case 0x184c74u: goto label_184c74;
        case 0x184c78u: goto label_184c78;
        case 0x184c7cu: goto label_184c7c;
        case 0x184c80u: goto label_184c80;
        case 0x184c84u: goto label_184c84;
        case 0x184c88u: goto label_184c88;
        case 0x184c8cu: goto label_184c8c;
        case 0x184c90u: goto label_184c90;
        case 0x184c94u: goto label_184c94;
        case 0x184c98u: goto label_184c98;
        case 0x184c9cu: goto label_184c9c;
        case 0x184ca0u: goto label_184ca0;
        case 0x184ca4u: goto label_184ca4;
        case 0x184ca8u: goto label_184ca8;
        case 0x184cacu: goto label_184cac;
        case 0x184cb0u: goto label_184cb0;
        case 0x184cb4u: goto label_184cb4;
        case 0x184cb8u: goto label_184cb8;
        case 0x184cbcu: goto label_184cbc;
        case 0x184cc0u: goto label_184cc0;
        case 0x184cc4u: goto label_184cc4;
        case 0x184cc8u: goto label_184cc8;
        case 0x184cccu: goto label_184ccc;
        case 0x184cd0u: goto label_184cd0;
        case 0x184cd4u: goto label_184cd4;
        case 0x184cd8u: goto label_184cd8;
        case 0x184cdcu: goto label_184cdc;
        case 0x184ce0u: goto label_184ce0;
        case 0x184ce4u: goto label_184ce4;
        case 0x184ce8u: goto label_184ce8;
        case 0x184cecu: goto label_184cec;
        case 0x184cf0u: goto label_184cf0;
        case 0x184cf4u: goto label_184cf4;
        case 0x184cf8u: goto label_184cf8;
        case 0x184cfcu: goto label_184cfc;
        case 0x184d00u: goto label_184d00;
        case 0x184d04u: goto label_184d04;
        case 0x184d08u: goto label_184d08;
        case 0x184d0cu: goto label_184d0c;
        case 0x184d10u: goto label_184d10;
        case 0x184d14u: goto label_184d14;
        case 0x184d18u: goto label_184d18;
        case 0x184d1cu: goto label_184d1c;
        case 0x184d20u: goto label_184d20;
        case 0x184d24u: goto label_184d24;
        case 0x184d28u: goto label_184d28;
        case 0x184d2cu: goto label_184d2c;
        case 0x184d30u: goto label_184d30;
        case 0x184d34u: goto label_184d34;
        case 0x184d38u: goto label_184d38;
        case 0x184d3cu: goto label_184d3c;
        case 0x184d40u: goto label_184d40;
        case 0x184d44u: goto label_184d44;
        case 0x184d48u: goto label_184d48;
        case 0x184d4cu: goto label_184d4c;
        case 0x184d50u: goto label_184d50;
        case 0x184d54u: goto label_184d54;
        case 0x184d58u: goto label_184d58;
        case 0x184d5cu: goto label_184d5c;
        case 0x184d60u: goto label_184d60;
        case 0x184d64u: goto label_184d64;
        case 0x184d68u: goto label_184d68;
        case 0x184d6cu: goto label_184d6c;
        case 0x184d70u: goto label_184d70;
        case 0x184d74u: goto label_184d74;
        case 0x184d78u: goto label_184d78;
        case 0x184d7cu: goto label_184d7c;
        case 0x184d80u: goto label_184d80;
        case 0x184d84u: goto label_184d84;
        case 0x184d88u: goto label_184d88;
        case 0x184d8cu: goto label_184d8c;
        case 0x184d90u: goto label_184d90;
        case 0x184d94u: goto label_184d94;
        case 0x184d98u: goto label_184d98;
        case 0x184d9cu: goto label_184d9c;
        case 0x184da0u: goto label_184da0;
        case 0x184da4u: goto label_184da4;
        case 0x184da8u: goto label_184da8;
        case 0x184dacu: goto label_184dac;
        case 0x184db0u: goto label_184db0;
        case 0x184db4u: goto label_184db4;
        case 0x184db8u: goto label_184db8;
        case 0x184dbcu: goto label_184dbc;
        case 0x184dc0u: goto label_184dc0;
        case 0x184dc4u: goto label_184dc4;
        case 0x184dc8u: goto label_184dc8;
        case 0x184dccu: goto label_184dcc;
        case 0x184dd0u: goto label_184dd0;
        case 0x184dd4u: goto label_184dd4;
        case 0x184dd8u: goto label_184dd8;
        case 0x184ddcu: goto label_184ddc;
        case 0x184de0u: goto label_184de0;
        case 0x184de4u: goto label_184de4;
        case 0x184de8u: goto label_184de8;
        case 0x184decu: goto label_184dec;
        case 0x184df0u: goto label_184df0;
        case 0x184df4u: goto label_184df4;
        case 0x184df8u: goto label_184df8;
        case 0x184dfcu: goto label_184dfc;
        case 0x184e00u: goto label_184e00;
        case 0x184e04u: goto label_184e04;
        case 0x184e08u: goto label_184e08;
        case 0x184e0cu: goto label_184e0c;
        case 0x184e10u: goto label_184e10;
        case 0x184e14u: goto label_184e14;
        case 0x184e18u: goto label_184e18;
        case 0x184e1cu: goto label_184e1c;
        case 0x184e20u: goto label_184e20;
        case 0x184e24u: goto label_184e24;
        case 0x184e28u: goto label_184e28;
        case 0x184e2cu: goto label_184e2c;
        case 0x184e30u: goto label_184e30;
        case 0x184e34u: goto label_184e34;
        case 0x184e38u: goto label_184e38;
        case 0x184e3cu: goto label_184e3c;
        case 0x184e40u: goto label_184e40;
        case 0x184e44u: goto label_184e44;
        case 0x184e48u: goto label_184e48;
        case 0x184e4cu: goto label_184e4c;
        case 0x184e50u: goto label_184e50;
        case 0x184e54u: goto label_184e54;
        case 0x184e58u: goto label_184e58;
        case 0x184e5cu: goto label_184e5c;
        case 0x184e60u: goto label_184e60;
        case 0x184e64u: goto label_184e64;
        case 0x184e68u: goto label_184e68;
        case 0x184e6cu: goto label_184e6c;
        case 0x184e70u: goto label_184e70;
        case 0x184e74u: goto label_184e74;
        case 0x184e78u: goto label_184e78;
        case 0x184e7cu: goto label_184e7c;
        case 0x184e80u: goto label_184e80;
        case 0x184e84u: goto label_184e84;
        case 0x184e88u: goto label_184e88;
        case 0x184e8cu: goto label_184e8c;
        case 0x184e90u: goto label_184e90;
        case 0x184e94u: goto label_184e94;
        case 0x184e98u: goto label_184e98;
        case 0x184e9cu: goto label_184e9c;
        case 0x184ea0u: goto label_184ea0;
        case 0x184ea4u: goto label_184ea4;
        case 0x184ea8u: goto label_184ea8;
        case 0x184eacu: goto label_184eac;
        case 0x184eb0u: goto label_184eb0;
        case 0x184eb4u: goto label_184eb4;
        case 0x184eb8u: goto label_184eb8;
        case 0x184ebcu: goto label_184ebc;
        default: break;
    }

    ctx->pc = 0x1841f0u;

label_1841f0:
    // 0x1841f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1841f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1841f4:
    // 0x1841f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1841f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1841f8:
    // 0x1841f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1841f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1841fc:
    // 0x1841fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1841fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_184200:
    // 0x184200: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x184200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_184204:
    // 0x184204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_184208:
    // 0x184208: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x184208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18420c:
    // 0x18420c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_184210:
    // 0x184210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_184214:
    // 0x184214: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x184214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184218:
    // 0x184218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18421c:
    // 0x18421c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18421cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184220:
    // 0x184220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184224:
    // 0x184224: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x184224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_184228:
    // 0x184228: 0x8ca211c4  lw          $v0, 0x11C4($a1)
    ctx->pc = 0x184228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4548)));
label_18422c:
    // 0x18422c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_184230:
    if (ctx->pc == 0x184230u) {
        ctx->pc = 0x184230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18422Cu;
        // 0x184230: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184234u;
        goto label_184234;
    }
    ctx->pc = 0x18422Cu;
    {
        const bool branch_taken_0x18422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18422Cu;
        // 0x184230: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18422c) {
            ctx->pc = 0x184240u;
            goto label_184240;
        }
    }
    ctx->pc = 0x184234u;
label_184234:
    // 0x184234: 0x10000316  b           . + 4 + (0x316 << 2)
label_184238:
    if (ctx->pc == 0x184238u) {
        ctx->pc = 0x184238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184234u;
        // 0x184238: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18423Cu;
        goto label_18423c;
    }
    ctx->pc = 0x184234u;
    {
        const bool branch_taken_0x184234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184234u;
        // 0x184238: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184234) {
            ctx->pc = 0x184E90u;
            goto label_184e90;
        }
    }
    ctx->pc = 0x18423Cu;
label_18423c:
    // 0x18423c: 0x0  nop
    ctx->pc = 0x18423cu;
    // NOP
label_184240:
    // 0x184240: 0x8e760048  lw          $s6, 0x48($s3)
    ctx->pc = 0x184240u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_184244:
    // 0x184244: 0x8e4211d4  lw          $v0, 0x11D4($s2)
    ctx->pc = 0x184244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
label_184248:
    // 0x184248: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x184248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_18424c:
    // 0x18424c: 0x8e5411d8  lw          $s4, 0x11D8($s2)
    ctx->pc = 0x18424cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4568)));
label_184250:
    // 0x184250: 0x8e5011e0  lw          $s0, 0x11E0($s2)
    ctx->pc = 0x184250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_184254:
    // 0x184254: 0xae7201e8  sw          $s2, 0x1E8($s3)
    ctx->pc = 0x184254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 488), GPR_U32(ctx, 18));
label_184258:
    // 0x184258: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_18425c:
    if (ctx->pc == 0x18425Cu) {
        ctx->pc = 0x18425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184258u;
        // 0x18425c: 0xae7001ec  sw          $s0, 0x1EC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184260u;
        goto label_184260;
    }
    ctx->pc = 0x184258u;
    {
        const bool branch_taken_0x184258 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x18425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184258u;
        // 0x18425c: 0xae7001ec  sw          $s0, 0x1EC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184258) {
            ctx->pc = 0x18426Cu;
            goto label_18426c;
        }
    }
    ctx->pc = 0x184260u;
label_184260:
    // 0x184260: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x184260u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184264:
    // 0x184264: 0x10000008  b           . + 4 + (0x8 << 2)
label_184268:
    if (ctx->pc == 0x184268u) {
        ctx->pc = 0x184268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184264u;
        // 0x184268: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18426Cu;
        goto label_18426c;
    }
    ctx->pc = 0x184264u;
    {
        const bool branch_taken_0x184264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184264u;
        // 0x184268: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184264) {
            ctx->pc = 0x184288u;
            goto label_184288;
        }
    }
    ctx->pc = 0x18426Cu;
label_18426c:
    // 0x18426c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x18426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_184270:
    // 0x184270: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x184270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_184274:
    // 0x184274: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_184278:
    // 0x184278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18427c:
    // 0x18427c: 0x0  nop
    ctx->pc = 0x18427cu;
    // NOP
label_184280:
    // 0x184280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_184284:
    // 0x184284: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184288:
    // 0x184288: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x184288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_18428c:
    // 0x18428c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18428cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184290:
    // 0x184290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184294:
    // 0x184294: 0x0  nop
    ctx->pc = 0x184294u;
    // NOP
label_184298:
    // 0x184298: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x184298u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18429c:
    // 0x18429c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1842a0:
    // 0x1842a0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1842a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1842a4:
    // 0x1842a4: 0x0  nop
    ctx->pc = 0x1842a4u;
    // NOP
label_1842a8:
    // 0x1842a8: 0x0  nop
    ctx->pc = 0x1842a8u;
    // NOP
label_1842ac:
    // 0x1842ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1842b0:
    if (ctx->pc == 0x1842B0u) {
        ctx->pc = 0x1842B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842ACu;
        // 0x1842b0: 0xe66001f0  swc1        $f0, 0x1F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842B4u;
        goto label_1842b4;
    }
    ctx->pc = 0x1842ACu;
    {
        const bool branch_taken_0x1842ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842ACu;
        // 0x1842b0: 0xe66001f0  swc1        $f0, 0x1F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842ac) {
            ctx->pc = 0x1842B8u;
            goto label_1842b8;
        }
    }
    ctx->pc = 0x1842B4u;
label_1842b4:
    // 0x1842b4: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x1842b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
label_1842b8:
    // 0x1842b8: 0x824611dc  lb          $a2, 0x11DC($s2)
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4572)));
label_1842bc:
    // 0x1842bc: 0x4c00052  bltz        $a2, . + 4 + (0x52 << 2)
label_1842c0:
    if (ctx->pc == 0x1842C0u) {
        ctx->pc = 0x1842C4u;
        goto label_1842c4;
    }
    ctx->pc = 0x1842BCu;
    {
        const bool branch_taken_0x1842bc = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x1842bc) {
            ctx->pc = 0x184408u;
            goto label_184408;
        }
    }
    ctx->pc = 0x1842C4u;
label_1842c4:
    // 0x1842c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1842c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1842c8:
    // 0x1842c8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1842c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1842cc:
    // 0x1842cc: 0xc0613b0  jal         func_184EC0
label_1842d0:
    if (ctx->pc == 0x1842D0u) {
        ctx->pc = 0x1842D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842CCu;
        // 0x1842d0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842D4u;
        goto label_1842d4;
    }
    ctx->pc = 0x1842CCu;
    SET_GPR_U32(ctx, 31, 0x1842D4u);
    ctx->pc = 0x1842D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1842CCu;
    // 0x1842d0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x1842CCu, 0x1842D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842D4u;
label_1842d4:
    // 0x1842d4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1842d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1842d8:
    // 0x1842d8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1842d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1842dc:
    // 0x1842dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1842dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1842e0:
    // 0x1842e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1842e4:
    if (ctx->pc == 0x1842E4u) {
        ctx->pc = 0x1842E8u;
        goto label_1842e8;
    }
    ctx->pc = 0x1842E0u;
    {
        const bool branch_taken_0x1842e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1842e0) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x1842E8u;
label_1842e8:
    // 0x1842e8: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x1842e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_1842ec:
    // 0x1842ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1842ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1842f0:
    // 0x1842f0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1842f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1842f4:
    // 0x1842f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1842f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1842f8:
    // 0x1842f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1842f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1842fc:
    // 0x1842fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1842fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_184300:
    // 0x184300: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x184300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_184304:
    // 0x184304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184308:
    // 0x184308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x184308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18430c:
    // 0x18430c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x18430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_184310:
    // 0x184310: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x184310u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_184314:
    // 0x184314: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x184314u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_184318:
    // 0x184318: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x184318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_18431c:
    // 0x18431c: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x18431cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_184320:
    // 0x184320: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x184320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_184324:
    // 0x184324: 0x1000003c  b           . + 4 + (0x3C << 2)
label_184328:
    if (ctx->pc == 0x184328u) {
        ctx->pc = 0x184328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184324u;
        // 0x184328: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18432Cu;
        goto label_18432c;
    }
    ctx->pc = 0x184324u;
    {
        const bool branch_taken_0x184324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184324u;
        // 0x184328: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184324) {
            ctx->pc = 0x184418u;
            goto label_184418;
        }
    }
    ctx->pc = 0x18432Cu;
label_18432c:
    // 0x18432c: 0x0  nop
    ctx->pc = 0x18432cu;
    // NOP
label_184330:
    // 0x184330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184334:
    // 0x184334: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_184338:
    // 0x184338: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x184338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_18433c:
    // 0x18433c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x18433cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_184340:
    // 0x184340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184344:
    // 0x184344: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x184344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_184348:
    // 0x184348: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_18434c:
    // 0x18434c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18434cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184350:
    // 0x184350: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x184350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184354:
    // 0x184354: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x184354u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_184358:
    // 0x184358: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x184358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_18435c:
    // 0x18435c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x18435cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_184360:
    // 0x184360: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x184360u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_184364:
    // 0x184364: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_184368:
    if (ctx->pc == 0x184368u) {
        ctx->pc = 0x184368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184364u;
        // 0x184368: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18436Cu;
        goto label_18436c;
    }
    ctx->pc = 0x184364u;
    {
        const bool branch_taken_0x184364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184364u;
        // 0x184368: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184364) {
            ctx->pc = 0x184390u;
            goto label_184390;
        }
    }
    ctx->pc = 0x18436Cu;
label_18436c:
    // 0x18436c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_184370:
    // 0x184370: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_184374:
    if (ctx->pc == 0x184374u) {
        ctx->pc = 0x184378u;
        goto label_184378;
    }
    ctx->pc = 0x184370u;
    {
        const bool branch_taken_0x184370 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x184370) {
            ctx->pc = 0x1843A8u;
            goto label_1843a8;
        }
    }
    ctx->pc = 0x184378u;
label_184378:
    // 0x184378: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x184378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18437c:
    // 0x18437c: 0xc0414ca  jal         func_105328
label_184380:
    if (ctx->pc == 0x184380u) {
        ctx->pc = 0x184380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18437Cu;
        // 0x184380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184384u;
        goto label_184384;
    }
    ctx->pc = 0x18437Cu;
    SET_GPR_U32(ctx, 31, 0x184384u);
    ctx->pc = 0x184380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18437Cu;
    // 0x184380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x18437Cu, 0x184384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184384u;
label_184384:
    // 0x184384: 0x10000008  b           . + 4 + (0x8 << 2)
label_184388:
    if (ctx->pc == 0x184388u) {
        ctx->pc = 0x18438Cu;
        goto label_18438c;
    }
    ctx->pc = 0x184384u;
    {
        const bool branch_taken_0x184384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184384) {
            ctx->pc = 0x1843A8u;
            goto label_1843a8;
        }
    }
    ctx->pc = 0x18438Cu;
label_18438c:
    // 0x18438c: 0x0  nop
    ctx->pc = 0x18438cu;
    // NOP
label_184390:
    // 0x184390: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x184390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184394:
    // 0x184394: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_184398:
    if (ctx->pc == 0x184398u) {
        ctx->pc = 0x18439Cu;
        goto label_18439c;
    }
    ctx->pc = 0x184394u;
    {
        const bool branch_taken_0x184394 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x184394) {
            ctx->pc = 0x1843A8u;
            goto label_1843a8;
        }
    }
    ctx->pc = 0x18439Cu;
label_18439c:
    // 0x18439c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1843a0:
    // 0x1843a0: 0xc0414ca  jal         func_105328
label_1843a4:
    if (ctx->pc == 0x1843A4u) {
        ctx->pc = 0x1843A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843A0u;
        // 0x1843a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843A8u;
        goto label_1843a8;
    }
    ctx->pc = 0x1843A0u;
    SET_GPR_U32(ctx, 31, 0x1843A8u);
    ctx->pc = 0x1843A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843A0u;
    // 0x1843a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1843A0u, 0x1843A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843A8u;
label_1843a8:
    // 0x1843a8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1843ac:
    // 0x1843ac: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1843acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1843b0:
    // 0x1843b0: 0xc0414d0  jal         func_105340
label_1843b4:
    if (ctx->pc == 0x1843B4u) {
        ctx->pc = 0x1843B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843B0u;
        // 0x1843b4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843B8u;
        goto label_1843b8;
    }
    ctx->pc = 0x1843B0u;
    SET_GPR_U32(ctx, 31, 0x1843B8u);
    ctx->pc = 0x1843B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843B0u;
    // 0x1843b4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1843B0u, 0x1843B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843B8u;
label_1843b8:
    // 0x1843b8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1843b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_1843bc:
    // 0x1843bc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1843bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_1843c0:
    // 0x1843c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1843c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1843c4:
    // 0x1843c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1843c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1843c8:
    // 0x1843c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1843cc:
    if (ctx->pc == 0x1843CCu) {
        ctx->pc = 0x1843D0u;
        goto label_1843d0;
    }
    ctx->pc = 0x1843C8u;
    {
        const bool branch_taken_0x1843c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843c8) {
            ctx->pc = 0x1843E0u;
            goto label_1843e0;
        }
    }
    ctx->pc = 0x1843D0u;
label_1843d0:
    // 0x1843d0: 0xc66c0070  lwc1        $f12, 0x70($s3)
    ctx->pc = 0x1843d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1843d4:
    // 0x1843d4: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1843d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1843d8:
    // 0x1843d8: 0xc0414dc  jal         func_105370
label_1843dc:
    if (ctx->pc == 0x1843DCu) {
        ctx->pc = 0x1843DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843D8u;
        // 0x1843dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843E0u;
        goto label_1843e0;
    }
    ctx->pc = 0x1843D8u;
    SET_GPR_U32(ctx, 31, 0x1843E0u);
    ctx->pc = 0x1843DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843D8u;
    // 0x1843dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1843D8u, 0x1843E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843E0u;
label_1843e0:
    // 0x1843e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1843e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1843e4:
    // 0x1843e4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1843e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1843e8:
    // 0x1843e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1843e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1843ec:
    // 0x1843ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1843f0:
    if (ctx->pc == 0x1843F0u) {
        ctx->pc = 0x1843F4u;
        goto label_1843f4;
    }
    ctx->pc = 0x1843ECu;
    {
        const bool branch_taken_0x1843ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843ec) {
            ctx->pc = 0x184418u;
            goto label_184418;
        }
    }
    ctx->pc = 0x1843F4u;
label_1843f4:
    // 0x1843f4: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x1843f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1843f8:
    // 0x1843f8: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x1843f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1843fc:
    // 0x1843fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1843fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_184400:
    // 0x184400: 0x10000005  b           . + 4 + (0x5 << 2)
label_184404:
    if (ctx->pc == 0x184404u) {
        ctx->pc = 0x184404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184400u;
        // 0x184404: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184408u;
        goto label_184408;
    }
    ctx->pc = 0x184400u;
    {
        const bool branch_taken_0x184400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184400u;
        // 0x184404: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184400) {
            ctx->pc = 0x184418u;
            goto label_184418;
        }
    }
    ctx->pc = 0x184408u;
label_184408:
    // 0x184408: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x184408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_18440c:
    // 0x18440c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x18440cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_184410:
    // 0x184410: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x184410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_184414:
    // 0x184414: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x184414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_184418:
    // 0x184418: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_18441c:
    if (ctx->pc == 0x18441Cu) {
        ctx->pc = 0x18441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184418u;
        // 0x18441c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184420u;
        goto label_184420;
    }
    ctx->pc = 0x184418u;
    {
        const bool branch_taken_0x184418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184418u;
        // 0x18441c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184418) {
            ctx->pc = 0x184BC0u;
            goto label_184bc0;
        }
    }
    ctx->pc = 0x184420u;
label_184420:
    // 0x184420: 0x8e4211cc  lw          $v0, 0x11CC($s2)
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4556)));
label_184424:
    // 0x184424: 0x8e4311c8  lw          $v1, 0x11C8($s2)
    ctx->pc = 0x184424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
label_184428:
    // 0x184428: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x184428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_18442c:
    // 0x18442c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18442cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_184430:
    // 0x184430: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x184430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
label_184434:
    // 0x184434: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x184434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_184438:
    // 0x184438: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18443c:
    // 0x18443c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x18443cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_184440:
    // 0x184440: 0x146001dd  bnez        $v1, . + 4 + (0x1DD << 2)
label_184444:
    if (ctx->pc == 0x184444u) {
        ctx->pc = 0x184448u;
        goto label_184448;
    }
    ctx->pc = 0x184440u;
    {
        const bool branch_taken_0x184440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184440) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x184448u;
label_184448:
    // 0x184448: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x184448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_18444c:
    // 0x18444c: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x18444cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
label_184450:
    // 0x184450: 0x96c4006a  lhu         $a0, 0x6A($s6)
    ctx->pc = 0x184450u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 106)));
label_184454:
    // 0x184454: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x184454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_184458:
    // 0x184458: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x184458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_18445c:
    // 0x18445c: 0x102001d6  beqz        $at, . + 4 + (0x1D6 << 2)
label_184460:
    if (ctx->pc == 0x184460u) {
        ctx->pc = 0x184464u;
        goto label_184464;
    }
    ctx->pc = 0x18445Cu;
    {
        const bool branch_taken_0x18445c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18445c) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x184464u;
label_184464:
    // 0x184464: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x184464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_184468:
    // 0x184468: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_18446c:
    if (ctx->pc == 0x18446Cu) {
        ctx->pc = 0x184470u;
        goto label_184470;
    }
    ctx->pc = 0x184468u;
    {
        const bool branch_taken_0x184468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184468) {
            ctx->pc = 0x1844D0u;
            goto label_1844d0;
        }
    }
    ctx->pc = 0x184470u;
label_184470:
    // 0x184470: 0x8e7e004c  lw          $fp, 0x4C($s3)
    ctx->pc = 0x184470u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_184474:
    // 0x184474: 0x13c001d0  beqz        $fp, . + 4 + (0x1D0 << 2)
label_184478:
    if (ctx->pc == 0x184478u) {
        ctx->pc = 0x18447Cu;
        goto label_18447c;
    }
    ctx->pc = 0x184474u;
    {
        const bool branch_taken_0x184474 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x184474) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x18447Cu;
label_18447c:
    // 0x18447c: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x18447cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_184480:
    // 0x184480: 0x8fc90070  lw          $t1, 0x70($fp)
    ctx->pc = 0x184480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_184484:
    // 0x184484: 0x8fc70080  lw          $a3, 0x80($fp)
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_184488:
    // 0x184488: 0x926600cd  lbu         $a2, 0xCD($s3)
    ctx->pc = 0x184488u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 205)));
label_18448c:
    // 0x18448c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184490:
    // 0x184490: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184494:
    // 0x184494: 0x34140  sll         $t0, $v1, 5
    ctx->pc = 0x184494u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_184498:
    // 0x184498: 0x97c4006a  lhu         $a0, 0x6A($fp)
    ctx->pc = 0x184498u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 106)));
label_18449c:
    // 0x18449c: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x18449cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_1844a0:
    // 0x1844a0: 0xe8b821  addu        $s7, $a3, $t0
    ctx->pc = 0x1844a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1844a4:
    // 0x1844a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1844a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1844a8:
    // 0x1844a8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1844a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1844ac:
    // 0x1844ac: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1844acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1844b0:
    // 0x1844b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1844b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1844b4:
    // 0x1844b4: 0xa3a300a0  sb          $v1, 0xA0($sp)
    ctx->pc = 0x1844b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
label_1844b8:
    // 0x1844b8: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1844b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_1844bc:
    // 0x1844bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1844bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1844c0:
    // 0x1844c0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
label_1844c4:
    if (ctx->pc == 0x1844C4u) {
        ctx->pc = 0x1844C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844C0u;
        // 0x1844c4: 0xa3a300c0  sb          $v1, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844C8u;
        goto label_1844c8;
    }
    ctx->pc = 0x1844C0u;
    {
        const bool branch_taken_0x1844c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1844C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844C0u;
        // 0x1844c4: 0xa3a300c0  sb          $v1, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844c0) {
            ctx->pc = 0x184500u;
            goto label_184500;
        }
    }
    ctx->pc = 0x1844C8u;
label_1844c8:
    // 0x1844c8: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_1844cc:
    if (ctx->pc == 0x1844CCu) {
        ctx->pc = 0x1844D0u;
        goto label_1844d0;
    }
    ctx->pc = 0x1844C8u;
    {
        const bool branch_taken_0x1844c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844c8) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x1844D0u;
label_1844d0:
    // 0x1844d0: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1844d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_1844d4:
    // 0x1844d4: 0x8ec60070  lw          $a2, 0x70($s6)
    ctx->pc = 0x1844d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_1844d8:
    // 0x1844d8: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x1844d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1844dc:
    // 0x1844dc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1844dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1844e0:
    // 0x1844e0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1844e4:
    // 0x1844e4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1844e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1844e8:
    // 0x1844e8: 0x8ec40080  lw          $a0, 0x80($s6)
    ctx->pc = 0x1844e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_1844ec:
    // 0x1844ec: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1844ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_1844f0:
    // 0x1844f0: 0x85b821  addu        $s7, $a0, $a1
    ctx->pc = 0x1844f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1844f4:
    // 0x1844f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1844f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1844f8:
    // 0x1844f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1844f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1844fc:
    // 0x1844fc: 0xa3a300a0  sb          $v1, 0xA0($sp)
    ctx->pc = 0x1844fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
label_184500:
    // 0x184500: 0x96e400c6  lhu         $a0, 0xC6($s7)
    ctx->pc = 0x184500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 198)));
label_184504:
    // 0x184504: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x184504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_184508:
    // 0x184508: 0x146001ab  bnez        $v1, . + 4 + (0x1AB << 2)
label_18450c:
    if (ctx->pc == 0x18450Cu) {
        ctx->pc = 0x184510u;
        goto label_184510;
    }
    ctx->pc = 0x184508u;
    {
        const bool branch_taken_0x184508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184508) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x184510u;
label_184510:
    // 0x184510: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184514:
    // 0x184514: 0x30630005  andi        $v1, $v1, 0x5
    ctx->pc = 0x184514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
label_184518:
    // 0x184518: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_18451c:
    if (ctx->pc == 0x18451Cu) {
        ctx->pc = 0x184520u;
        goto label_184520;
    }
    ctx->pc = 0x184518u;
    {
        const bool branch_taken_0x184518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184518) {
            ctx->pc = 0x184558u;
            goto label_184558;
        }
    }
    ctx->pc = 0x184520u;
label_184520:
    // 0x184520: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x184520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184524:
    // 0x184524: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x184524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_184528:
    // 0x184528: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18452c:
    if (ctx->pc == 0x18452Cu) {
        ctx->pc = 0x184530u;
        goto label_184530;
    }
    ctx->pc = 0x184528u;
    {
        const bool branch_taken_0x184528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184528) {
            ctx->pc = 0x184548u;
            goto label_184548;
        }
    }
    ctx->pc = 0x184530u;
label_184530:
    // 0x184530: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x184530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_184534:
    // 0x184534: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_184538:
    if (ctx->pc == 0x184538u) {
        ctx->pc = 0x18453Cu;
        goto label_18453c;
    }
    ctx->pc = 0x184534u;
    {
        const bool branch_taken_0x184534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184534) {
            ctx->pc = 0x184558u;
            goto label_184558;
        }
    }
    ctx->pc = 0x18453Cu;
label_18453c:
    // 0x18453c: 0x1000019e  b           . + 4 + (0x19E << 2)
label_184540:
    if (ctx->pc == 0x184540u) {
        ctx->pc = 0x184544u;
        goto label_184544;
    }
    ctx->pc = 0x18453Cu;
    {
        const bool branch_taken_0x18453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18453c) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x184544u;
label_184544:
    // 0x184544: 0x0  nop
    ctx->pc = 0x184544u;
    // NOP
label_184548:
    // 0x184548: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x184548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_18454c:
    // 0x18454c: 0x1060019a  beqz        $v1, . + 4 + (0x19A << 2)
label_184550:
    if (ctx->pc == 0x184550u) {
        ctx->pc = 0x184554u;
        goto label_184554;
    }
    ctx->pc = 0x18454Cu;
    {
        const bool branch_taken_0x18454c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18454c) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x184554u;
label_184554:
    // 0x184554: 0x0  nop
    ctx->pc = 0x184554u;
    // NOP
label_184558:
    // 0x184558: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x184558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18455c:
    // 0x18455c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x18455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_184560:
    // 0x184560: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_184564:
    if (ctx->pc == 0x184564u) {
        ctx->pc = 0x184568u;
        goto label_184568;
    }
    ctx->pc = 0x184560u;
    {
        const bool branch_taken_0x184560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184560) {
            ctx->pc = 0x184650u;
            goto label_184650;
        }
    }
    ctx->pc = 0x184568u;
label_184568:
    // 0x184568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18456c:
    // 0x18456c: 0x26e500c8  addiu       $a1, $s7, 0xC8
    ctx->pc = 0x18456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 200));
label_184570:
    // 0x184570: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184574:
    // 0x184574: 0xc0613b0  jal         func_184EC0
label_184578:
    if (ctx->pc == 0x184578u) {
        ctx->pc = 0x184578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184574u;
        // 0x184578: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18457Cu;
        goto label_18457c;
    }
    ctx->pc = 0x184574u;
    SET_GPR_U32(ctx, 31, 0x18457Cu);
    ctx->pc = 0x184578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184574u;
    // 0x184578: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184574u, 0x18457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18457Cu;
label_18457c:
    // 0x18457c: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x18457cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_184580:
    // 0x184580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184584:
    // 0x184584: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x184584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_184588:
    // 0x184588: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_18458c:
    if (ctx->pc == 0x18458Cu) {
        ctx->pc = 0x184590u;
        goto label_184590;
    }
    ctx->pc = 0x184588u;
    {
        const bool branch_taken_0x184588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184588) {
            ctx->pc = 0x1845E8u;
            goto label_1845e8;
        }
    }
    ctx->pc = 0x184590u;
label_184590:
    // 0x184590: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x184590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_184594:
    // 0x184594: 0xc6e000c8  lwc1        $f0, 0xC8($s7)
    ctx->pc = 0x184594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184598:
    // 0x184598: 0x8fc3006c  lw          $v1, 0x6C($fp)
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 108)));
label_18459c:
    // 0x18459c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18459cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1845a0:
    // 0x1845a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1845a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1845a4:
    // 0x1845a4: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x1845a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_1845a8:
    // 0x1845a8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1845a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1845ac:
    // 0x1845ac: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1845acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1845b0:
    // 0x1845b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1845b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1845b4:
    // 0x1845b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1845b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1845b8:
    // 0x1845b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1845b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1845bc:
    // 0x1845bc: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1845bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1845c0:
    // 0x1845c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1845c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1845c4:
    // 0x1845c4: 0xe6e000c8  swc1        $f0, 0xC8($s7)
    ctx->pc = 0x1845c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 200), bits); }
label_1845c8:
    // 0x1845c8: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1845c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1845cc:
    // 0x1845cc: 0xc6e000cc  lwc1        $f0, 0xCC($s7)
    ctx->pc = 0x1845ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1845d0:
    // 0x1845d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1845d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1845d4:
    // 0x1845d4: 0xe6e000cc  swc1        $f0, 0xCC($s7)
    ctx->pc = 0x1845d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 204), bits); }
label_1845d8:
    // 0x1845d8: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1845d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1845dc:
    // 0x1845dc: 0xc6e000d0  lwc1        $f0, 0xD0($s7)
    ctx->pc = 0x1845dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1845e0:
    // 0x1845e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1845e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1845e4:
    // 0x1845e4: 0xe6e000d0  swc1        $f0, 0xD0($s7)
    ctx->pc = 0x1845e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 208), bits); }
label_1845e8:
    // 0x1845e8: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x1845e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_1845ec:
    // 0x1845ec: 0x26e500c8  addiu       $a1, $s7, 0xC8
    ctx->pc = 0x1845ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 200));
label_1845f0:
    // 0x1845f0: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1845f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1845f4:
    // 0x1845f4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1845f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1845f8:
    // 0x1845f8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1845fc:
    // 0x1845fc: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1845fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184600:
    // 0x184600: 0xc04d660  jal         func_135980
label_184604:
    if (ctx->pc == 0x184604u) {
        ctx->pc = 0x184604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184600u;
        // 0x184604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184608u;
        goto label_184608;
    }
    ctx->pc = 0x184600u;
    SET_GPR_U32(ctx, 31, 0x184608u);
    ctx->pc = 0x184604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184600u;
    // 0x184604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x184600u, 0x184608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184608u;
label_184608:
    // 0x184608: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x184608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_18460c:
    // 0x18460c: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x18460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_184610:
    // 0x184610: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x184610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184614:
    // 0x184614: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_184618:
    // 0x184618: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18461c:
    // 0x18461c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18461cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_184620:
    // 0x184620: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x184620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184624:
    // 0x184624: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x184624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
label_184628:
    // 0x184628: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_18462c:
    // 0x18462c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184630:
    // 0x184630: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x184630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184634:
    // 0x184634: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x184634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_184638:
    // 0x184638: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x184638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_18463c:
    // 0x18463c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184640:
    // 0x184640: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x184640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184644:
    // 0x184644: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x184644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_184648:
    // 0x184648: 0x10000157  b           . + 4 + (0x157 << 2)
label_18464c:
    if (ctx->pc == 0x18464Cu) {
        ctx->pc = 0x18464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184648u;
        // 0x18464c: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184650u;
        goto label_184650;
    }
    ctx->pc = 0x184648u;
    {
        const bool branch_taken_0x184648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184648u;
        // 0x18464c: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184648) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184650u;
label_184650:
    // 0x184650: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x184650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_184654:
    // 0x184654: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
label_184658:
    if (ctx->pc == 0x184658u) {
        ctx->pc = 0x18465Cu;
        goto label_18465c;
    }
    ctx->pc = 0x184654u;
    {
        const bool branch_taken_0x184654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184654) {
            ctx->pc = 0x184A68u;
            goto label_184a68;
        }
    }
    ctx->pc = 0x18465Cu;
label_18465c:
    // 0x18465c: 0x83a200c0  lb          $v0, 0xC0($sp)
    ctx->pc = 0x18465cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184660:
    // 0x184660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184664:
    // 0x184664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x184664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184668:
    // 0x184668: 0xc0614a8  jal         func_1852A0
label_18466c:
    if (ctx->pc == 0x18466Cu) {
        ctx->pc = 0x18466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184668u;
        // 0x18466c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184670u;
        goto label_184670;
    }
    ctx->pc = 0x184668u;
    SET_GPR_U32(ctx, 31, 0x184670u);
    ctx->pc = 0x18466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184668u;
    // 0x18466c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1852A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1852A0u, 0x184668u, 0x184670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184670u;
label_184670:
    // 0x184670: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x184670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184674:
    // 0x184674: 0x16800012  bnez        $s4, . + 4 + (0x12 << 2)
label_184678:
    if (ctx->pc == 0x184678u) {
        ctx->pc = 0x18467Cu;
        goto label_18467c;
    }
    ctx->pc = 0x184674u;
    {
        const bool branch_taken_0x184674 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x184674) {
            ctx->pc = 0x1846C0u;
            goto label_1846c0;
        }
    }
    ctx->pc = 0x18467Cu;
label_18467c:
    // 0x18467c: 0x8e4511cc  lw          $a1, 0x11CC($s2)
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4556)));
label_184680:
    // 0x184680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184684:
    // 0x184684: 0x8ec40070  lw          $a0, 0x70($s6)
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_184688:
    // 0x184688: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18468c:
    // 0x18468c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x18468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_184690:
    // 0x184690: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_184694:
    // 0x184694: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x184694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184698:
    // 0x184698: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18469c:
    // 0x18469c: 0x14430146  bne         $v0, $v1, . + 4 + (0x146 << 2)
label_1846a0:
    if (ctx->pc == 0x1846A0u) {
        ctx->pc = 0x1846A4u;
        goto label_1846a4;
    }
    ctx->pc = 0x18469Cu;
    {
        const bool branch_taken_0x18469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18469c) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x1846A4u;
label_1846a4:
    // 0x1846a4: 0x924211de  lbu         $v0, 0x11DE($s2)
    ctx->pc = 0x1846a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4574)));
label_1846a8:
    // 0x1846a8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1846a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1846ac:
    // 0x1846ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1846b0:
    if (ctx->pc == 0x1846B0u) {
        ctx->pc = 0x1846B4u;
        goto label_1846b4;
    }
    ctx->pc = 0x1846ACu;
    {
        const bool branch_taken_0x1846ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1846ac) {
            ctx->pc = 0x184688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184688;
        }
    }
    ctx->pc = 0x1846B4u;
label_1846b4:
    // 0x1846b4: 0x10000140  b           . + 4 + (0x140 << 2)
label_1846b8:
    if (ctx->pc == 0x1846B8u) {
        ctx->pc = 0x1846BCu;
        goto label_1846bc;
    }
    ctx->pc = 0x1846B4u;
    {
        const bool branch_taken_0x1846b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846b4) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x1846BCu;
label_1846bc:
    // 0x1846bc: 0x0  nop
    ctx->pc = 0x1846bcu;
    // NOP
label_1846c0:
    // 0x1846c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1846c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1846c4:
    // 0x1846c4: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1846c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1846c8:
    // 0x1846c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1846c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1846cc:
    // 0x1846cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1846ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1846d0:
    // 0x1846d0: 0xc0613b0  jal         func_184EC0
label_1846d4:
    if (ctx->pc == 0x1846D4u) {
        ctx->pc = 0x1846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846D0u;
        // 0x1846d4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846D8u;
        goto label_1846d8;
    }
    ctx->pc = 0x1846D0u;
    SET_GPR_U32(ctx, 31, 0x1846D8u);
    ctx->pc = 0x1846D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846D0u;
    // 0x1846d4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x1846D0u, 0x1846D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846D8u;
label_1846d8:
    // 0x1846d8: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1846d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_1846dc:
    // 0x1846dc: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1846dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1846e0:
    // 0x1846e0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1846e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_1846e4:
    // 0x1846e4: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1846e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1846e8:
    // 0x1846e8: 0x1020012f  beqz        $at, . + 4 + (0x12F << 2)
label_1846ec:
    if (ctx->pc == 0x1846ECu) {
        ctx->pc = 0x1846F0u;
        goto label_1846f0;
    }
    ctx->pc = 0x1846E8u;
    {
        const bool branch_taken_0x1846e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846e8) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x1846F0u;
label_1846f0:
    // 0x1846f0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1846f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_1846f4:
    // 0x1846f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1846f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1846f8:
    // 0x1846f8: 0x24635620  addiu       $v1, $v1, 0x5620
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22048));
label_1846fc:
    // 0x1846fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184700:
    // 0x184700: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_184704:
    // 0x184704: 0x400008  jr          $v0
label_184708:
    if (ctx->pc == 0x184708u) {
        ctx->pc = 0x18470Cu;
        goto label_18470c;
    }
    ctx->pc = 0x184704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184710u: goto label_184710;
            case 0x1847C8u: goto label_1847c8;
            case 0x184888u: goto label_184888;
            case 0x184970u: goto label_184970;
            case 0x1849F8u: goto label_1849f8;
            case 0x184BA8u: goto label_184ba8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184704u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18470Cu;
label_18470c:
    // 0x18470c: 0x0  nop
    ctx->pc = 0x18470cu;
    // NOP
label_184710:
    // 0x184710: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184714:
    // 0x184714: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x184714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_184718:
    // 0x184718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18471c:
    // 0x18471c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_184720:
    // 0x184720: 0xc0613b0  jal         func_184EC0
label_184724:
    if (ctx->pc == 0x184724u) {
        ctx->pc = 0x184724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184720u;
        // 0x184724: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184728u;
        goto label_184728;
    }
    ctx->pc = 0x184720u;
    SET_GPR_U32(ctx, 31, 0x184728u);
    ctx->pc = 0x184724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184720u;
    // 0x184724: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184720u, 0x184728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184728u;
label_184728:
    // 0x184728: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18472c:
    // 0x18472c: 0x36a70002  ori         $a3, $s5, 0x2
    ctx->pc = 0x18472cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
label_184730:
    // 0x184730: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x184730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_184734:
    // 0x184734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184738:
    // 0x184738: 0xc0613b0  jal         func_184EC0
label_18473c:
    if (ctx->pc == 0x18473Cu) {
        ctx->pc = 0x18473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184738u;
        // 0x18473c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184740u;
        goto label_184740;
    }
    ctx->pc = 0x184738u;
    SET_GPR_U32(ctx, 31, 0x184740u);
    ctx->pc = 0x18473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184738u;
    // 0x18473c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184738u, 0x184740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184740u;
label_184740:
    // 0x184740: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x184740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184744:
    // 0x184744: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x184744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_184748:
    // 0x184748: 0xc0414d0  jal         func_105340
label_18474c:
    if (ctx->pc == 0x18474Cu) {
        ctx->pc = 0x18474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184748u;
        // 0x18474c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184750u;
        goto label_184750;
    }
    ctx->pc = 0x184748u;
    SET_GPR_U32(ctx, 31, 0x184750u);
    ctx->pc = 0x18474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184748u;
    // 0x18474c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x184748u, 0x184750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184750u;
label_184750:
    // 0x184750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184754:
    // 0x184754: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x184754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_184758:
    // 0x184758: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18475c:
    // 0x18475c: 0xc0613b0  jal         func_184EC0
label_184760:
    if (ctx->pc == 0x184760u) {
        ctx->pc = 0x184760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18475Cu;
        // 0x184760: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184764u;
        goto label_184764;
    }
    ctx->pc = 0x18475Cu;
    SET_GPR_U32(ctx, 31, 0x184764u);
    ctx->pc = 0x184760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18475Cu;
    // 0x184760: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x18475Cu, 0x184764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184764u;
label_184764:
    // 0x184764: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x184764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184768:
    // 0x184768: 0x8e8500e0  lw          $a1, 0xE0($s4)
    ctx->pc = 0x184768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_18476c:
    // 0x18476c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18476cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184770:
    // 0x184770: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184774:
    // 0x184774: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x184774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184778:
    // 0x184778: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x184778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_18477c:
    // 0x18477c: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x18477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_184780:
    // 0x184780: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x184780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_184784:
    // 0x184784: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184788:
    // 0x184788: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18478c:
    // 0x18478c: 0x946201a6  lhu         $v0, 0x1A6($v1)
    ctx->pc = 0x18478cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 422)));
label_184790:
    // 0x184790: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184794:
    // 0x184794: 0xa46201a6  sh          $v0, 0x1A6($v1)
    ctx->pc = 0x184794u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 422), (uint16_t)GPR_U32(ctx, 2));
label_184798:
    // 0x184798: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_18479c:
    // 0x18479c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x18479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1847a0:
    // 0x1847a0: 0x94620286  lhu         $v0, 0x286($v1)
    ctx->pc = 0x1847a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 646)));
label_1847a4:
    // 0x1847a4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1847a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1847a8:
    // 0x1847a8: 0xa4620286  sh          $v0, 0x286($v1)
    ctx->pc = 0x1847a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
label_1847ac:
    // 0x1847ac: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x1847acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_1847b0:
    // 0x1847b0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1847b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1847b4:
    // 0x1847b4: 0x94620366  lhu         $v0, 0x366($v1)
    ctx->pc = 0x1847b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 870)));
label_1847b8:
    // 0x1847b8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1847b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1847bc:
    // 0x1847bc: 0x100000fa  b           . + 4 + (0xFA << 2)
label_1847c0:
    if (ctx->pc == 0x1847C0u) {
        ctx->pc = 0x1847C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847BCu;
        // 0x1847c0: 0xa4620366  sh          $v0, 0x366($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 870), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847C4u;
        goto label_1847c4;
    }
    ctx->pc = 0x1847BCu;
    {
        const bool branch_taken_0x1847bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1847C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847BCu;
        // 0x1847c0: 0xa4620366  sh          $v0, 0x366($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 870), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847bc) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x1847C4u;
label_1847c4:
    // 0x1847c4: 0x0  nop
    ctx->pc = 0x1847c4u;
    // NOP
label_1847c8:
    // 0x1847c8: 0x8e4211c8  lw          $v0, 0x11C8($s2)
    ctx->pc = 0x1847c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
label_1847cc:
    // 0x1847cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1847ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1847d0:
    // 0x1847d0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1847d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1847d4:
    // 0x1847d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1847d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1847d8:
    // 0x1847d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1847dc:
    if (ctx->pc == 0x1847DCu) {
        ctx->pc = 0x1847E0u;
        goto label_1847e0;
    }
    ctx->pc = 0x1847D8u;
    {
        const bool branch_taken_0x1847d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1847d8) {
            ctx->pc = 0x1847F8u;
            goto label_1847f8;
        }
    }
    ctx->pc = 0x1847E0u;
label_1847e0:
    // 0x1847e0: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x1847e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_1847e4:
    // 0x1847e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1847e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1847e8:
    // 0x1847e8: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x1847e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
label_1847ec:
    // 0x1847ec: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x1847ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_1847f0:
    // 0x1847f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1847f4:
    if (ctx->pc == 0x1847F4u) {
        ctx->pc = 0x1847F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847F0u;
        // 0x1847f4: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847F8u;
        goto label_1847f8;
    }
    ctx->pc = 0x1847F0u;
    {
        const bool branch_taken_0x1847f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1847F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847F0u;
        // 0x1847f4: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847f0) {
            ctx->pc = 0x184810u;
            goto label_184810;
        }
    }
    ctx->pc = 0x1847F8u;
label_1847f8:
    // 0x1847f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1847fc:
    // 0x1847fc: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1847fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_184800:
    // 0x184800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184804:
    // 0x184804: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_184808:
    // 0x184808: 0xc0613b0  jal         func_184EC0
label_18480c:
    if (ctx->pc == 0x18480Cu) {
        ctx->pc = 0x18480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184808u;
        // 0x18480c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184810u;
        goto label_184810;
    }
    ctx->pc = 0x184808u;
    SET_GPR_U32(ctx, 31, 0x184810u);
    ctx->pc = 0x18480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184808u;
    // 0x18480c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184808u, 0x184810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184810u;
label_184810:
    // 0x184810: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184814:
    // 0x184814: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x184814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_184818:
    // 0x184818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18481c:
    // 0x18481c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x18481cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_184820:
    // 0x184820: 0xc0613b0  jal         func_184EC0
label_184824:
    if (ctx->pc == 0x184824u) {
        ctx->pc = 0x184824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184820u;
        // 0x184824: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184828u;
        goto label_184828;
    }
    ctx->pc = 0x184820u;
    SET_GPR_U32(ctx, 31, 0x184828u);
    ctx->pc = 0x184824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184820u;
    // 0x184824: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184820u, 0x184828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184828u;
label_184828:
    // 0x184828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18482c:
    // 0x18482c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x18482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184830:
    // 0x184830: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184834:
    // 0x184834: 0xc0613b0  jal         func_184EC0
label_184838:
    if (ctx->pc == 0x184838u) {
        ctx->pc = 0x184838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184834u;
        // 0x184838: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18483Cu;
        goto label_18483c;
    }
    ctx->pc = 0x184834u;
    SET_GPR_U32(ctx, 31, 0x18483Cu);
    ctx->pc = 0x184838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184834u;
    // 0x184838: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184834u, 0x18483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18483Cu;
label_18483c:
    // 0x18483c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x18483cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184840:
    // 0x184840: 0x8e8500e0  lw          $a1, 0xE0($s4)
    ctx->pc = 0x184840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_184844:
    // 0x184844: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184848:
    // 0x184848: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18484c:
    // 0x18484c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18484cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184850:
    // 0x184850: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x184850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_184854:
    // 0x184854: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x184854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_184858:
    // 0x184858: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x184858u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_18485c:
    // 0x18485c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x18485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184860:
    // 0x184860: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184864:
    // 0x184864: 0x946201a6  lhu         $v0, 0x1A6($v1)
    ctx->pc = 0x184864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 422)));
label_184868:
    // 0x184868: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18486c:
    // 0x18486c: 0xa46201a6  sh          $v0, 0x1A6($v1)
    ctx->pc = 0x18486cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 422), (uint16_t)GPR_U32(ctx, 2));
label_184870:
    // 0x184870: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184874:
    // 0x184874: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184878:
    // 0x184878: 0x94620286  lhu         $v0, 0x286($v1)
    ctx->pc = 0x184878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 646)));
label_18487c:
    // 0x18487c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184880:
    // 0x184880: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_184884:
    if (ctx->pc == 0x184884u) {
        ctx->pc = 0x184884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184880u;
        // 0x184884: 0xa4620286  sh          $v0, 0x286($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184888u;
        goto label_184888;
    }
    ctx->pc = 0x184880u;
    {
        const bool branch_taken_0x184880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184880u;
        // 0x184884: 0xa4620286  sh          $v0, 0x286($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184880) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184888u;
label_184888:
    // 0x184888: 0x8e4311cc  lw          $v1, 0x11CC($s2)
    ctx->pc = 0x184888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4556)));
label_18488c:
    // 0x18488c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x18488cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184890:
    // 0x184890: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x184890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_184894:
    // 0x184894: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x184894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_184898:
    // 0x184898: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x184898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18489c:
    // 0x18489c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1848a0:
    if (ctx->pc == 0x1848A0u) {
        ctx->pc = 0x1848A4u;
        goto label_1848a4;
    }
    ctx->pc = 0x18489Cu;
    {
        const bool branch_taken_0x18489c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18489c) {
            ctx->pc = 0x1848C8u;
            goto label_1848c8;
        }
    }
    ctx->pc = 0x1848A4u;
label_1848a4:
    // 0x1848a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1848a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1848a8:
    // 0x1848a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1848a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1848ac:
    // 0x1848ac: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1848acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1848b0:
    // 0x1848b0: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x1848b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1848b4:
    // 0x1848b4: 0xc0613b0  jal         func_184EC0
label_1848b8:
    if (ctx->pc == 0x1848B8u) {
        ctx->pc = 0x1848B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848B4u;
        // 0x1848b8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848BCu;
        goto label_1848bc;
    }
    ctx->pc = 0x1848B4u;
    SET_GPR_U32(ctx, 31, 0x1848BCu);
    ctx->pc = 0x1848B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1848B4u;
    // 0x1848b8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x1848B4u, 0x1848BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848BCu;
label_1848bc:
    // 0x1848bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1848c0:
    if (ctx->pc == 0x1848C0u) {
        ctx->pc = 0x1848C4u;
        goto label_1848c4;
    }
    ctx->pc = 0x1848BCu;
    {
        const bool branch_taken_0x1848bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1848bc) {
            ctx->pc = 0x1848E0u;
            goto label_1848e0;
        }
    }
    ctx->pc = 0x1848C4u;
label_1848c4:
    // 0x1848c4: 0x0  nop
    ctx->pc = 0x1848c4u;
    // NOP
label_1848c8:
    // 0x1848c8: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x1848c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_1848cc:
    // 0x1848cc: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x1848ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
label_1848d0:
    // 0x1848d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1848d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1848d4:
    // 0x1848d4: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x1848d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_1848d8:
    // 0x1848d8: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x1848d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_1848dc:
    // 0x1848dc: 0x0  nop
    ctx->pc = 0x1848dcu;
    // NOP
label_1848e0:
    // 0x1848e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1848e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1848e4:
    // 0x1848e4: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1848e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1848e8:
    // 0x1848e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1848e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1848ec:
    // 0x1848ec: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x1848ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1848f0:
    // 0x1848f0: 0xc0613b0  jal         func_184EC0
label_1848f4:
    if (ctx->pc == 0x1848F4u) {
        ctx->pc = 0x1848F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848F0u;
        // 0x1848f4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848F8u;
        goto label_1848f8;
    }
    ctx->pc = 0x1848F0u;
    SET_GPR_U32(ctx, 31, 0x1848F8u);
    ctx->pc = 0x1848F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1848F0u;
    // 0x1848f4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x1848F0u, 0x1848F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848F8u;
label_1848f8:
    // 0x1848f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1848f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1848fc:
    // 0x1848fc: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x1848fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184900:
    // 0x184900: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184904:
    // 0x184904: 0xc0613b0  jal         func_184EC0
label_184908:
    if (ctx->pc == 0x184908u) {
        ctx->pc = 0x184908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184904u;
        // 0x184908: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18490Cu;
        goto label_18490c;
    }
    ctx->pc = 0x184904u;
    SET_GPR_U32(ctx, 31, 0x18490Cu);
    ctx->pc = 0x184908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184904u;
    // 0x184908: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184904u, 0x18490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18490Cu;
label_18490c:
    // 0x18490c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x18490cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184910:
    // 0x184910: 0x8e8500e0  lw          $a1, 0xE0($s4)
    ctx->pc = 0x184910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_184914:
    // 0x184914: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184918:
    // 0x184918: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18491c:
    // 0x18491c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18491cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184920:
    // 0x184920: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_184924:
    // 0x184924: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x184924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_184928:
    // 0x184928: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x184928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_18492c:
    // 0x18492c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x18492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184930:
    // 0x184930: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184934:
    // 0x184934: 0x946201a6  lhu         $v0, 0x1A6($v1)
    ctx->pc = 0x184934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 422)));
label_184938:
    // 0x184938: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18493c:
    // 0x18493c: 0xa46201a6  sh          $v0, 0x1A6($v1)
    ctx->pc = 0x18493cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 422), (uint16_t)GPR_U32(ctx, 2));
label_184940:
    // 0x184940: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184944:
    // 0x184944: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184948:
    // 0x184948: 0x94620286  lhu         $v0, 0x286($v1)
    ctx->pc = 0x184948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 646)));
label_18494c:
    // 0x18494c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184950:
    // 0x184950: 0xa4620286  sh          $v0, 0x286($v1)
    ctx->pc = 0x184950u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
label_184954:
    // 0x184954: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184958:
    // 0x184958: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18495c:
    // 0x18495c: 0x94620366  lhu         $v0, 0x366($v1)
    ctx->pc = 0x18495cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 870)));
label_184960:
    // 0x184960: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184964:
    // 0x184964: 0x10000090  b           . + 4 + (0x90 << 2)
label_184968:
    if (ctx->pc == 0x184968u) {
        ctx->pc = 0x184968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184964u;
        // 0x184968: 0xa4620366  sh          $v0, 0x366($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 870), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18496Cu;
        goto label_18496c;
    }
    ctx->pc = 0x184964u;
    {
        const bool branch_taken_0x184964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184964u;
        // 0x184968: 0xa4620366  sh          $v0, 0x366($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 870), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184964) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x18496Cu;
label_18496c:
    // 0x18496c: 0x0  nop
    ctx->pc = 0x18496cu;
    // NOP
label_184970:
    // 0x184970: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184974:
    // 0x184974: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_184978:
    // 0x184978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18497c:
    // 0x18497c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_184980:
    // 0x184980: 0xc0613b0  jal         func_184EC0
label_184984:
    if (ctx->pc == 0x184984u) {
        ctx->pc = 0x184984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184980u;
        // 0x184984: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184988u;
        goto label_184988;
    }
    ctx->pc = 0x184980u;
    SET_GPR_U32(ctx, 31, 0x184988u);
    ctx->pc = 0x184984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184980u;
    // 0x184984: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184980u, 0x184988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184988u;
label_184988:
    // 0x184988: 0x36a70002  ori         $a3, $s5, 0x2
    ctx->pc = 0x184988u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
label_18498c:
    // 0x18498c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184990:
    // 0x184990: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184994:
    // 0x184994: 0xc0613b0  jal         func_184EC0
label_184998:
    if (ctx->pc == 0x184998u) {
        ctx->pc = 0x184998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184994u;
        // 0x184998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18499Cu;
        goto label_18499c;
    }
    ctx->pc = 0x184994u;
    SET_GPR_U32(ctx, 31, 0x18499Cu);
    ctx->pc = 0x184998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184994u;
    // 0x184998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184994u, 0x18499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18499Cu;
label_18499c:
    // 0x18499c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x18499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1849a0:
    // 0x1849a0: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1849a4:
    // 0x1849a4: 0xc0414d0  jal         func_105340
label_1849a8:
    if (ctx->pc == 0x1849A8u) {
        ctx->pc = 0x1849A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849A4u;
        // 0x1849a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849ACu;
        goto label_1849ac;
    }
    ctx->pc = 0x1849A4u;
    SET_GPR_U32(ctx, 31, 0x1849ACu);
    ctx->pc = 0x1849A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849A4u;
    // 0x1849a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1849A4u, 0x1849ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849ACu;
label_1849ac:
    // 0x1849ac: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x1849acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_1849b0:
    // 0x1849b0: 0x8e8500e0  lw          $a1, 0xE0($s4)
    ctx->pc = 0x1849b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1849b4:
    // 0x1849b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1849b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1849b8:
    // 0x1849b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1849b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1849bc:
    // 0x1849bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1849bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1849c0:
    // 0x1849c0: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1849c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1849c4:
    // 0x1849c4: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x1849c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_1849c8:
    // 0x1849c8: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x1849c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_1849cc:
    // 0x1849cc: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x1849ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_1849d0:
    // 0x1849d0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1849d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1849d4:
    // 0x1849d4: 0x946201a6  lhu         $v0, 0x1A6($v1)
    ctx->pc = 0x1849d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 422)));
label_1849d8:
    // 0x1849d8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1849d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1849dc:
    // 0x1849dc: 0xa46201a6  sh          $v0, 0x1A6($v1)
    ctx->pc = 0x1849dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 422), (uint16_t)GPR_U32(ctx, 2));
label_1849e0:
    // 0x1849e0: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_1849e4:
    // 0x1849e4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1849e8:
    // 0x1849e8: 0x94620286  lhu         $v0, 0x286($v1)
    ctx->pc = 0x1849e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 646)));
label_1849ec:
    // 0x1849ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1849ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1849f0:
    // 0x1849f0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1849f4:
    if (ctx->pc == 0x1849F4u) {
        ctx->pc = 0x1849F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849F0u;
        // 0x1849f4: 0xa4620286  sh          $v0, 0x286($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849F8u;
        goto label_1849f8;
    }
    ctx->pc = 0x1849F0u;
    {
        const bool branch_taken_0x1849f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1849F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849F0u;
        // 0x1849f4: 0xa4620286  sh          $v0, 0x286($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849f0) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x1849F8u;
label_1849f8:
    // 0x1849f8: 0x36a70002  ori         $a3, $s5, 0x2
    ctx->pc = 0x1849f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
label_1849fc:
    // 0x1849fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1849fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184a00:
    // 0x184a00: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184a04:
    // 0x184a04: 0xc0613b0  jal         func_184EC0
label_184a08:
    if (ctx->pc == 0x184A08u) {
        ctx->pc = 0x184A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A04u;
        // 0x184a08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A0Cu;
        goto label_184a0c;
    }
    ctx->pc = 0x184A04u;
    SET_GPR_U32(ctx, 31, 0x184A0Cu);
    ctx->pc = 0x184A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A04u;
    // 0x184a08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184A04u, 0x184A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A0Cu;
label_184a0c:
    // 0x184a0c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x184a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184a10:
    // 0x184a10: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x184a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_184a14:
    // 0x184a14: 0xc0414d0  jal         func_105340
label_184a18:
    if (ctx->pc == 0x184A18u) {
        ctx->pc = 0x184A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A14u;
        // 0x184a18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A1Cu;
        goto label_184a1c;
    }
    ctx->pc = 0x184A14u;
    SET_GPR_U32(ctx, 31, 0x184A1Cu);
    ctx->pc = 0x184A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A14u;
    // 0x184a18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x184A14u, 0x184A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A1Cu;
label_184a1c:
    // 0x184a1c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x184a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184a20:
    // 0x184a20: 0x8e8500e0  lw          $a1, 0xE0($s4)
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_184a24:
    // 0x184a24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184a28:
    // 0x184a28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184a2c:
    // 0x184a2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184a30:
    // 0x184a30: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x184a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_184a34:
    // 0x184a34: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x184a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_184a38:
    // 0x184a38: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x184a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_184a3c:
    // 0x184a3c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184a40:
    // 0x184a40: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184a44:
    // 0x184a44: 0x946201a6  lhu         $v0, 0x1A6($v1)
    ctx->pc = 0x184a44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 422)));
label_184a48:
    // 0x184a48: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184a4c:
    // 0x184a4c: 0xa46201a6  sh          $v0, 0x1A6($v1)
    ctx->pc = 0x184a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 422), (uint16_t)GPR_U32(ctx, 2));
label_184a50:
    // 0x184a50: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x184a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
label_184a54:
    // 0x184a54: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x184a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184a58:
    // 0x184a58: 0x94620286  lhu         $v0, 0x286($v1)
    ctx->pc = 0x184a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 646)));
label_184a5c:
    // 0x184a5c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184a60:
    // 0x184a60: 0x10000051  b           . + 4 + (0x51 << 2)
label_184a64:
    if (ctx->pc == 0x184A64u) {
        ctx->pc = 0x184A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A60u;
        // 0x184a64: 0xa4620286  sh          $v0, 0x286($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A68u;
        goto label_184a68;
    }
    ctx->pc = 0x184A60u;
    {
        const bool branch_taken_0x184a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A60u;
        // 0x184a64: 0xa4620286  sh          $v0, 0x286($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 646), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a60) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184A68u;
label_184a68:
    // 0x184a68: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_184a6c:
    // 0x184a6c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_184a70:
    if (ctx->pc == 0x184A70u) {
        ctx->pc = 0x184A74u;
        goto label_184a74;
    }
    ctx->pc = 0x184A6Cu;
    {
        const bool branch_taken_0x184a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a6c) {
            ctx->pc = 0x184AC0u;
            goto label_184ac0;
        }
    }
    ctx->pc = 0x184A74u;
label_184a74:
    // 0x184a74: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x184a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184a78:
    // 0x184a78: 0x96e300c6  lhu         $v1, 0xC6($s7)
    ctx->pc = 0x184a78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 198)));
label_184a7c:
    // 0x184a7c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x184a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184a80:
    // 0x184a80: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x184a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_184a84:
    // 0x184a84: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_184a88:
    // 0x184a88: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x184a88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_184a8c:
    // 0x184a8c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x184a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_184a90:
    // 0x184a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_184a94:
    if (ctx->pc == 0x184A94u) {
        ctx->pc = 0x184A98u;
        goto label_184a98;
    }
    ctx->pc = 0x184A90u;
    {
        const bool branch_taken_0x184a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184a90) {
            ctx->pc = 0x184AA0u;
            goto label_184aa0;
        }
    }
    ctx->pc = 0x184A98u;
label_184a98:
    // 0x184a98: 0xc04150c  jal         func_105430
label_184a9c:
    if (ctx->pc == 0x184A9Cu) {
        ctx->pc = 0x184A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A98u;
        // 0x184a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AA0u;
        goto label_184aa0;
    }
    ctx->pc = 0x184A98u;
    SET_GPR_U32(ctx, 31, 0x184AA0u);
    ctx->pc = 0x184A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A98u;
    // 0x184a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x184A98u, 0x184AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AA0u;
label_184aa0:
    // 0x184aa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184aa4:
    // 0x184aa4: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x184aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_184aa8:
    // 0x184aa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184aac:
    // 0x184aac: 0xc0613b0  jal         func_184EC0
label_184ab0:
    if (ctx->pc == 0x184AB0u) {
        ctx->pc = 0x184AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AACu;
        // 0x184ab0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AB4u;
        goto label_184ab4;
    }
    ctx->pc = 0x184AACu;
    SET_GPR_U32(ctx, 31, 0x184AB4u);
    ctx->pc = 0x184AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AACu;
    // 0x184ab0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184AACu, 0x184AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AB4u;
label_184ab4:
    // 0x184ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_184ab8:
    // 0x184ab8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_184abc:
    if (ctx->pc == 0x184ABCu) {
        ctx->pc = 0x184ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AB8u;
        // 0x184abc: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AC0u;
        goto label_184ac0;
    }
    ctx->pc = 0x184AB8u;
    {
        const bool branch_taken_0x184ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AB8u;
        // 0x184abc: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ab8) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184AC0u;
label_184ac0:
    // 0x184ac0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x184ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_184ac4:
    // 0x184ac4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_184ac8:
    if (ctx->pc == 0x184AC8u) {
        ctx->pc = 0x184ACCu;
        goto label_184acc;
    }
    ctx->pc = 0x184AC4u;
    {
        const bool branch_taken_0x184ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ac4) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184ACCu;
label_184acc:
    // 0x184acc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184ad0:
    // 0x184ad0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x184ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_184ad4:
    // 0x184ad4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184ad8:
    // 0x184ad8: 0xc0613b0  jal         func_184EC0
label_184adc:
    if (ctx->pc == 0x184ADCu) {
        ctx->pc = 0x184ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AD8u;
        // 0x184adc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AE0u;
        goto label_184ae0;
    }
    ctx->pc = 0x184AD8u;
    SET_GPR_U32(ctx, 31, 0x184AE0u);
    ctx->pc = 0x184ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AD8u;
    // 0x184adc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x184AD8u, 0x184AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AE0u;
label_184ae0:
    // 0x184ae0: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x184ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184ae4:
    // 0x184ae4: 0x96e300c6  lhu         $v1, 0xC6($s7)
    ctx->pc = 0x184ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 198)));
label_184ae8:
    // 0x184ae8: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x184ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184aec:
    // 0x184aec: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x184aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_184af0:
    // 0x184af0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x184af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_184af4:
    // 0x184af4: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x184af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_184af8:
    // 0x184af8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x184af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_184afc:
    // 0x184afc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_184b00:
    if (ctx->pc == 0x184B00u) {
        ctx->pc = 0x184B04u;
        goto label_184b04;
    }
    ctx->pc = 0x184AFCu;
    {
        const bool branch_taken_0x184afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184afc) {
            ctx->pc = 0x184B50u;
            goto label_184b50;
        }
    }
    ctx->pc = 0x184B04u;
label_184b04:
    // 0x184b04: 0xc04150c  jal         func_105430
label_184b08:
    if (ctx->pc == 0x184B08u) {
        ctx->pc = 0x184B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B04u;
        // 0x184b08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B0Cu;
        goto label_184b0c;
    }
    ctx->pc = 0x184B04u;
    SET_GPR_U32(ctx, 31, 0x184B0Cu);
    ctx->pc = 0x184B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B04u;
    // 0x184b08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x184B04u, 0x184B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B0Cu;
label_184b0c:
    // 0x184b0c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x184b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_184b10:
    // 0x184b10: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_184b14:
    // 0x184b14: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x184b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184b18:
    // 0x184b18: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x184b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_184b1c:
    // 0x184b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184b20:
    // 0x184b20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_184b24:
    // 0x184b24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x184b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184b28:
    // 0x184b28: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x184b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
label_184b2c:
    // 0x184b2c: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_184b30:
    // 0x184b30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x184b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184b34:
    // 0x184b34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x184b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184b38:
    // 0x184b38: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x184b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_184b3c:
    // 0x184b3c: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x184b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_184b40:
    // 0x184b40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x184b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184b44:
    // 0x184b44: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x184b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184b48:
    // 0x184b48: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x184b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
label_184b4c:
    // 0x184b4c: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x184b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_184b50:
    // 0x184b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184b54:
    // 0x184b54: 0xc041472  jal         func_1051C8
label_184b58:
    if (ctx->pc == 0x184B58u) {
        ctx->pc = 0x184B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B54u;
        // 0x184b58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B5Cu;
        goto label_184b5c;
    }
    ctx->pc = 0x184B54u;
    SET_GPR_U32(ctx, 31, 0x184B5Cu);
    ctx->pc = 0x184B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B54u;
    // 0x184b58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x184B54u, 0x184B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B5Cu;
label_184b5c:
    // 0x184b5c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x184b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184b60:
    // 0x184b60: 0xc041472  jal         func_1051C8
label_184b64:
    if (ctx->pc == 0x184B64u) {
        ctx->pc = 0x184B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B60u;
        // 0x184b64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B68u;
        goto label_184b68;
    }
    ctx->pc = 0x184B60u;
    SET_GPR_U32(ctx, 31, 0x184B68u);
    ctx->pc = 0x184B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B60u;
    // 0x184b64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x184B60u, 0x184B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B68u;
label_184b68:
    // 0x184b68: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x184b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_184b6c:
    // 0x184b6c: 0xc041472  jal         func_1051C8
label_184b70:
    if (ctx->pc == 0x184B70u) {
        ctx->pc = 0x184B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B6Cu;
        // 0x184b70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B74u;
        goto label_184b74;
    }
    ctx->pc = 0x184B6Cu;
    SET_GPR_U32(ctx, 31, 0x184B74u);
    ctx->pc = 0x184B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B6Cu;
    // 0x184b70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x184B6Cu, 0x184B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B74u;
label_184b74:
    // 0x184b74: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x184b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_184b78:
    // 0x184b78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184b7c:
    // 0x184b7c: 0xc0414dc  jal         func_105370
label_184b80:
    if (ctx->pc == 0x184B80u) {
        ctx->pc = 0x184B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B7Cu;
        // 0x184b80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B84u;
        goto label_184b84;
    }
    ctx->pc = 0x184B7Cu;
    SET_GPR_U32(ctx, 31, 0x184B84u);
    ctx->pc = 0x184B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B7Cu;
    // 0x184b80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x184B7Cu, 0x184B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B84u;
label_184b84:
    // 0x184b84: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x184b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_184b88:
    // 0x184b88: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x184b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_184b8c:
    // 0x184b8c: 0xc0414dc  jal         func_105370
label_184b90:
    if (ctx->pc == 0x184B90u) {
        ctx->pc = 0x184B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B8Cu;
        // 0x184b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B94u;
        goto label_184b94;
    }
    ctx->pc = 0x184B8Cu;
    SET_GPR_U32(ctx, 31, 0x184B94u);
    ctx->pc = 0x184B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B8Cu;
    // 0x184b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x184B8Cu, 0x184B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B94u;
label_184b94:
    // 0x184b94: 0xc7ac0118  lwc1        $f12, 0x118($sp)
    ctx->pc = 0x184b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_184b98:
    // 0x184b98: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x184b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_184b9c:
    // 0x184b9c: 0xc0414dc  jal         func_105370
label_184ba0:
    if (ctx->pc == 0x184BA0u) {
        ctx->pc = 0x184BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B9Cu;
        // 0x184ba0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BA4u;
        goto label_184ba4;
    }
    ctx->pc = 0x184B9Cu;
    SET_GPR_U32(ctx, 31, 0x184BA4u);
    ctx->pc = 0x184BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B9Cu;
    // 0x184ba0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x184B9Cu, 0x184BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BA4u;
label_184ba4:
    // 0x184ba4: 0x0  nop
    ctx->pc = 0x184ba4u;
    // NOP
label_184ba8:
    // 0x184ba8: 0x96e200c6  lhu         $v0, 0xC6($s7)
    ctx->pc = 0x184ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 198)));
label_184bac:
    // 0x184bac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_184bb0:
    // 0x184bb0: 0xa6e200c6  sh          $v0, 0xC6($s7)
    ctx->pc = 0x184bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 198), (uint16_t)GPR_U32(ctx, 2));
label_184bb4:
    // 0x184bb4: 0x0  nop
    ctx->pc = 0x184bb4u;
    // NOP
label_184bb8:
    // 0x184bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_184bbc:
    // 0x184bbc: 0x0  nop
    ctx->pc = 0x184bbcu;
    // NOP
label_184bc0:
    // 0x184bc0: 0x924211de  lbu         $v0, 0x11DE($s2)
    ctx->pc = 0x184bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4574)));
label_184bc4:
    // 0x184bc4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x184bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_184bc8:
    // 0x184bc8: 0x1440fe15  bnez        $v0, . + 4 + (-0x1EB << 2)
label_184bcc:
    if (ctx->pc == 0x184BCCu) {
        ctx->pc = 0x184BD0u;
        goto label_184bd0;
    }
    ctx->pc = 0x184BC8u;
    {
        const bool branch_taken_0x184bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184bc8) {
            ctx->pc = 0x184420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184420;
        }
    }
    ctx->pc = 0x184BD0u;
label_184bd0:
    // 0x184bd0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x184bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_184bd4:
    // 0x184bd4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x184bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_184bd8:
    // 0x184bd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_184bdc:
    if (ctx->pc == 0x184BDCu) {
        ctx->pc = 0x184BE0u;
        goto label_184be0;
    }
    ctx->pc = 0x184BD8u;
    {
        const bool branch_taken_0x184bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bd8) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184BE0u;
label_184be0:
    // 0x184be0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x184be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_184be4:
    // 0x184be4: 0x9263006f  lbu         $v1, 0x6F($s3)
    ctx->pc = 0x184be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 111)));
label_184be8:
    // 0x184be8: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x184be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_184bec:
    // 0x184bec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184bf0:
    // 0x184bf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184bf4:
    // 0x184bf4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x184bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_184bf8:
    // 0x184bf8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x184bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_184bfc:
    // 0x184bfc: 0x94a300c6  lhu         $v1, 0xC6($a1)
    ctx->pc = 0x184bfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 198)));
label_184c00:
    // 0x184c00: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x184c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_184c04:
    // 0x184c04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_184c08:
    if (ctx->pc == 0x184C08u) {
        ctx->pc = 0x184C0Cu;
        goto label_184c0c;
    }
    ctx->pc = 0x184C04u;
    {
        const bool branch_taken_0x184c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c04) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184C0Cu;
label_184c0c:
    // 0x184c0c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x184c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_184c10:
    // 0x184c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184c14:
    // 0x184c14: 0xa4a200c6  sh          $v0, 0xC6($a1)
    ctx->pc = 0x184c14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 198), (uint16_t)GPR_U32(ctx, 2));
label_184c18:
    // 0x184c18: 0x926200cd  lbu         $v0, 0xCD($s3)
    ctx->pc = 0x184c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 205)));
label_184c1c:
    // 0x184c1c: 0x9263006f  lbu         $v1, 0x6F($s3)
    ctx->pc = 0x184c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 111)));
label_184c20:
    // 0x184c20: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x184c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_184c24:
    // 0x184c24: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x184c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_184c28:
    // 0x184c28: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x184c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_184c2c:
    // 0x184c2c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x184c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_184c30:
    // 0x184c30: 0xc0603f4  jal         func_180FD0
label_184c34:
    if (ctx->pc == 0x184C34u) {
        ctx->pc = 0x184C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C30u;
        // 0x184c34: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C38u;
        goto label_184c38;
    }
    ctx->pc = 0x184C30u;
    SET_GPR_U32(ctx, 31, 0x184C38u);
    ctx->pc = 0x184C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C30u;
    // 0x184c34: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180FD0u, 0x184C30u, 0x184C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C38u;
label_184c38:
    // 0x184c38: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x184c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_184c3c:
    // 0x184c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_184c40:
    if (ctx->pc == 0x184C40u) {
        ctx->pc = 0x184C44u;
        goto label_184c44;
    }
    ctx->pc = 0x184C3Cu;
    {
        const bool branch_taken_0x184c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c3c) {
            ctx->pc = 0x184C50u;
            goto label_184c50;
        }
    }
    ctx->pc = 0x184C44u;
label_184c44:
    // 0x184c44: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x184c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_184c48:
    // 0x184c48: 0x40f809  jalr        $v0
label_184c4c:
    if (ctx->pc == 0x184C4Cu) {
        ctx->pc = 0x184C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C48u;
        // 0x184c4c: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C50u;
        goto label_184c50;
    }
    ctx->pc = 0x184C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184C50u);
        ctx->pc = 0x184C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C48u;
        // 0x184c4c: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C48u, 0x184C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184C50u;
label_184c50:
    // 0x184c50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x184c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184c54:
    // 0x184c54: 0x8e4311e4  lw          $v1, 0x11E4($s2)
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_184c58:
    // 0x184c58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x184c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184c5c:
    // 0x184c5c: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x184c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_184c60:
    // 0x184c60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x184c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184c64:
    // 0x184c64: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x184c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_184c68:
    // 0x184c68: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_184c6c:
    if (ctx->pc == 0x184C6Cu) {
        ctx->pc = 0x184C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C68u;
        // 0x184c6c: 0x24670100  addiu       $a3, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C70u;
        goto label_184c70;
    }
    ctx->pc = 0x184C68u;
    {
        const bool branch_taken_0x184c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C68u;
        // 0x184c6c: 0x24670100  addiu       $a3, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c68) {
            ctx->pc = 0x184CD0u;
            goto label_184cd0;
        }
    }
    ctx->pc = 0x184C70u;
label_184c70:
    // 0x184c70: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x184c70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_184c74:
    // 0x184c74: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_184c78:
    if (ctx->pc == 0x184C78u) {
        ctx->pc = 0x184C7Cu;
        goto label_184c7c;
    }
    ctx->pc = 0x184C74u;
    {
        const bool branch_taken_0x184c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c74) {
            ctx->pc = 0x184C90u;
            goto label_184c90;
        }
    }
    ctx->pc = 0x184C7Cu;
label_184c7c:
    // 0x184c7c: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x184c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_184c80:
    // 0x184c80: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x184c80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_184c84:
    // 0x184c84: 0x10000008  b           . + 4 + (0x8 << 2)
label_184c88:
    if (ctx->pc == 0x184C88u) {
        ctx->pc = 0x184C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C84u;
        // 0x184c88: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C8Cu;
        goto label_184c8c;
    }
    ctx->pc = 0x184C84u;
    {
        const bool branch_taken_0x184c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C84u;
        // 0x184c88: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c84) {
            ctx->pc = 0x184CA8u;
            goto label_184ca8;
        }
    }
    ctx->pc = 0x184C8Cu;
label_184c8c:
    // 0x184c8c: 0x0  nop
    ctx->pc = 0x184c8cu;
    // NOP
label_184c90:
    // 0x184c90: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_184c94:
    // 0x184c94: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x184c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_184c98:
    // 0x184c98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_184c9c:
    if (ctx->pc == 0x184C9Cu) {
        ctx->pc = 0x184CA0u;
        goto label_184ca0;
    }
    ctx->pc = 0x184C98u;
    {
        const bool branch_taken_0x184c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c98) {
            ctx->pc = 0x184CA8u;
            goto label_184ca8;
        }
    }
    ctx->pc = 0x184CA0u;
label_184ca0:
    // 0x184ca0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x184ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184ca4:
    // 0x184ca4: 0x0  nop
    ctx->pc = 0x184ca4u;
    // NOP
label_184ca8:
    // 0x184ca8: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_184cac:
    if (ctx->pc == 0x184CACu) {
        ctx->pc = 0x184CB0u;
        goto label_184cb0;
    }
    ctx->pc = 0x184CA8u;
    {
        const bool branch_taken_0x184ca8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ca8) {
            ctx->pc = 0x184D30u;
            goto label_184d30;
        }
    }
    ctx->pc = 0x184CB0u;
label_184cb0:
    // 0x184cb0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184cb4:
    // 0x184cb4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x184cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_184cb8:
    // 0x184cb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x184cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_184cbc:
    // 0x184cbc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_184cc0:
    if (ctx->pc == 0x184CC0u) {
        ctx->pc = 0x184CC4u;
        goto label_184cc4;
    }
    ctx->pc = 0x184CBCu;
    {
        const bool branch_taken_0x184cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184cbc) {
            ctx->pc = 0x184D30u;
            goto label_184d30;
        }
    }
    ctx->pc = 0x184CC4u;
label_184cc4:
    // 0x184cc4: 0xae4011e8  sw          $zero, 0x11E8($s2)
    ctx->pc = 0x184cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
label_184cc8:
    // 0x184cc8: 0x10000019  b           . + 4 + (0x19 << 2)
label_184ccc:
    if (ctx->pc == 0x184CCCu) {
        ctx->pc = 0x184CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CC8u;
        // 0x184ccc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CD0u;
        goto label_184cd0;
    }
    ctx->pc = 0x184CC8u;
    {
        const bool branch_taken_0x184cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CC8u;
        // 0x184ccc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cc8) {
            ctx->pc = 0x184D30u;
            goto label_184d30;
        }
    }
    ctx->pc = 0x184CD0u;
label_184cd0:
    // 0x184cd0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x184cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_184cd4:
    // 0x184cd4: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x184cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_184cd8:
    // 0x184cd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_184cdc:
    if (ctx->pc == 0x184CDCu) {
        ctx->pc = 0x184CE0u;
        goto label_184ce0;
    }
    ctx->pc = 0x184CD8u;
    {
        const bool branch_taken_0x184cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184cd8) {
            ctx->pc = 0x184CF0u;
            goto label_184cf0;
        }
    }
    ctx->pc = 0x184CE0u;
label_184ce0:
    // 0x184ce0: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_184ce4:
    // 0x184ce4: 0x10000008  b           . + 4 + (0x8 << 2)
label_184ce8:
    if (ctx->pc == 0x184CE8u) {
        ctx->pc = 0x184CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE4u;
        // 0x184ce8: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CECu;
        goto label_184cec;
    }
    ctx->pc = 0x184CE4u;
    {
        const bool branch_taken_0x184ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE4u;
        // 0x184ce8: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ce4) {
            ctx->pc = 0x184D08u;
            goto label_184d08;
        }
    }
    ctx->pc = 0x184CECu;
label_184cec:
    // 0x184cec: 0x0  nop
    ctx->pc = 0x184cecu;
    // NOP
label_184cf0:
    // 0x184cf0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x184cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184cf4:
    // 0x184cf4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x184cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_184cf8:
    // 0x184cf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_184cfc:
    if (ctx->pc == 0x184CFCu) {
        ctx->pc = 0x184D00u;
        goto label_184d00;
    }
    ctx->pc = 0x184CF8u;
    {
        const bool branch_taken_0x184cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184cf8) {
            ctx->pc = 0x184D08u;
            goto label_184d08;
        }
    }
    ctx->pc = 0x184D00u;
label_184d00:
    // 0x184d00: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x184d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184d04:
    // 0x184d04: 0x0  nop
    ctx->pc = 0x184d04u;
    // NOP
label_184d08:
    // 0x184d08: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_184d0c:
    if (ctx->pc == 0x184D0Cu) {
        ctx->pc = 0x184D10u;
        goto label_184d10;
    }
    ctx->pc = 0x184D08u;
    {
        const bool branch_taken_0x184d08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d08) {
            ctx->pc = 0x184D30u;
            goto label_184d30;
        }
    }
    ctx->pc = 0x184D10u;
label_184d10:
    // 0x184d10: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x184d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184d14:
    // 0x184d14: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_184d18:
    // 0x184d18: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x184d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_184d1c:
    // 0x184d1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_184d20:
    if (ctx->pc == 0x184D20u) {
        ctx->pc = 0x184D24u;
        goto label_184d24;
    }
    ctx->pc = 0x184D1Cu;
    {
        const bool branch_taken_0x184d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d1c) {
            ctx->pc = 0x184D30u;
            goto label_184d30;
        }
    }
    ctx->pc = 0x184D24u;
label_184d24:
    // 0x184d24: 0xae4011e8  sw          $zero, 0x11E8($s2)
    ctx->pc = 0x184d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
label_184d28:
    // 0x184d28: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x184d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184d2c:
    // 0x184d2c: 0x0  nop
    ctx->pc = 0x184d2cu;
    // NOP
label_184d30:
    // 0x184d30: 0x964811f0  lhu         $t0, 0x11F0($s2)
    ctx->pc = 0x184d30u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4592)));
label_184d34:
    // 0x184d34: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x184d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_184d38:
    // 0x184d38: 0xae4411f0  sw          $a0, 0x11F0($s2)
    ctx->pc = 0x184d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4592), GPR_U32(ctx, 4));
label_184d3c:
    // 0x184d3c: 0x8e4411fc  lw          $a0, 0x11FC($s2)
    ctx->pc = 0x184d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4604)));
label_184d40:
    // 0x184d40: 0xae441200  sw          $a0, 0x1200($s2)
    ctx->pc = 0x184d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4608), GPR_U32(ctx, 4));
label_184d44:
    // 0x184d44: 0x8e4511f0  lw          $a1, 0x11F0($s2)
    ctx->pc = 0x184d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4592)));
label_184d48:
    // 0x184d48: 0x8e4411d0  lw          $a0, 0x11D0($s2)
    ctx->pc = 0x184d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4560)));
label_184d4c:
    // 0x184d4c: 0x14a80008  bne         $a1, $t0, . + 4 + (0x8 << 2)
label_184d50:
    if (ctx->pc == 0x184D50u) {
        ctx->pc = 0x184D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D4Cu;
        // 0x184d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D54u;
        goto label_184d54;
    }
    ctx->pc = 0x184D4Cu;
    {
        const bool branch_taken_0x184d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x184D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D4Cu;
        // 0x184d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d4c) {
            ctx->pc = 0x184D70u;
            goto label_184d70;
        }
    }
    ctx->pc = 0x184D54u;
label_184d54:
    // 0x184d54: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x184d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_184d58:
    // 0x184d58: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x184d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_184d5c:
    // 0x184d5c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x184d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184d60:
    // 0x184d60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_184d64:
    // 0x184d64: 0x601827  not         $v1, $v1
    ctx->pc = 0x184d64u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_184d68:
    // 0x184d68: 0x10000045  b           . + 4 + (0x45 << 2)
label_184d6c:
    if (ctx->pc == 0x184D6Cu) {
        ctx->pc = 0x184D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D68u;
        // 0x184d6c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D70u;
        goto label_184d70;
    }
    ctx->pc = 0x184D68u;
    {
        const bool branch_taken_0x184d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D68u;
        // 0x184d6c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d68) {
            ctx->pc = 0x184E80u;
            goto label_184e80;
        }
    }
    ctx->pc = 0x184D70u;
label_184d70:
    // 0x184d70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x184d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_184d74:
    // 0x184d74: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x184d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_184d78:
    // 0x184d78: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x184d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_184d7c:
    // 0x184d7c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x184d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_184d80:
    // 0x184d80: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_184d84:
    if (ctx->pc == 0x184D84u) {
        ctx->pc = 0x184D88u;
        goto label_184d88;
    }
    ctx->pc = 0x184D80u;
    {
        const bool branch_taken_0x184d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d80) {
            ctx->pc = 0x184E00u;
            goto label_184e00;
        }
    }
    ctx->pc = 0x184D88u;
label_184d88:
    // 0x184d88: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x184d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_184d8c:
    // 0x184d8c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_184d90:
    if (ctx->pc == 0x184D90u) {
        ctx->pc = 0x184D94u;
        goto label_184d94;
    }
    ctx->pc = 0x184D8Cu;
    {
        const bool branch_taken_0x184d8c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x184d8c) {
            ctx->pc = 0x184D98u;
            goto label_184d98;
        }
    }
    ctx->pc = 0x184D94u;
label_184d94:
    // 0x184d94: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x184d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_184d98:
    // 0x184d98: 0xd0082b  sltu        $at, $a2, $s0
    ctx->pc = 0x184d98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_184d9c:
    // 0x184d9c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_184da0:
    if (ctx->pc == 0x184DA0u) {
        ctx->pc = 0x184DA4u;
        goto label_184da4;
    }
    ctx->pc = 0x184D9Cu;
    {
        const bool branch_taken_0x184d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d9c) {
            ctx->pc = 0x184DB8u;
            goto label_184db8;
        }
    }
    ctx->pc = 0x184DA4u;
label_184da4:
    // 0x184da4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x184da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_184da8:
    // 0x184da8: 0x103202  srl         $a2, $s0, 8
    ctx->pc = 0x184da8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_184dac:
    // 0x184dac: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x184dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_184db0:
    // 0x184db0: 0x10000005  b           . + 4 + (0x5 << 2)
label_184db4:
    if (ctx->pc == 0x184DB4u) {
        ctx->pc = 0x184DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DB0u;
        // 0x184db4: 0xe68823  subu        $s1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DB8u;
        goto label_184db8;
    }
    ctx->pc = 0x184DB0u;
    {
        const bool branch_taken_0x184db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DB0u;
        // 0x184db4: 0xe68823  subu        $s1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184db0) {
            ctx->pc = 0x184DC8u;
            goto label_184dc8;
        }
    }
    ctx->pc = 0x184DB8u;
label_184db8:
    // 0x184db8: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x184db8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_184dbc:
    // 0x184dbc: 0x103202  srl         $a2, $s0, 8
    ctx->pc = 0x184dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_184dc0:
    // 0x184dc0: 0xe68823  subu        $s1, $a3, $a2
    ctx->pc = 0x184dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_184dc4:
    // 0x184dc4: 0x0  nop
    ctx->pc = 0x184dc4u;
    // NOP
label_184dc8:
    // 0x184dc8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x184dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_184dcc:
    // 0x184dcc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_184dd0:
    // 0x184dd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_184dd4:
    // 0x184dd4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_184dd8:
    // 0x184dd8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_184ddc:
    if (ctx->pc == 0x184DDCu) {
        ctx->pc = 0x184DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DD8u;
        // 0x184ddc: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DE0u;
        goto label_184de0;
    }
    ctx->pc = 0x184DD8u;
    {
        const bool branch_taken_0x184dd8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x184DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DD8u;
        // 0x184ddc: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dd8) {
            ctx->pc = 0x184DE8u;
            goto label_184de8;
        }
    }
    ctx->pc = 0x184DE0u;
label_184de0:
    // 0x184de0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x184de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_184de4:
    // 0x184de4: 0x0  nop
    ctx->pc = 0x184de4u;
    // NOP
label_184de8:
    // 0x184de8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x184de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_184dec:
    // 0x184dec: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
label_184df0:
    if (ctx->pc == 0x184DF0u) {
        ctx->pc = 0x184DF4u;
        goto label_184df4;
    }
    ctx->pc = 0x184DECu;
    {
        const bool branch_taken_0x184dec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x184dec) {
            ctx->pc = 0x184DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184dc8;
        }
    }
    ctx->pc = 0x184DF4u;
label_184df4:
    // 0x184df4: 0x10000022  b           . + 4 + (0x22 << 2)
label_184df8:
    if (ctx->pc == 0x184DF8u) {
        ctx->pc = 0x184DFCu;
        goto label_184dfc;
    }
    ctx->pc = 0x184DF4u;
    {
        const bool branch_taken_0x184df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184df4) {
            ctx->pc = 0x184E80u;
            goto label_184e80;
        }
    }
    ctx->pc = 0x184DFCu;
label_184dfc:
    // 0x184dfc: 0x0  nop
    ctx->pc = 0x184dfcu;
    // NOP
label_184e00:
    // 0x184e00: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x184e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_184e04:
    // 0x184e04: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x184e04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_184e08:
    // 0x184e08: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x184e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_184e0c:
    // 0x184e0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_184e10:
    if (ctx->pc == 0x184E10u) {
        ctx->pc = 0x184E14u;
        goto label_184e14;
    }
    ctx->pc = 0x184E0Cu;
    {
        const bool branch_taken_0x184e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e0c) {
            ctx->pc = 0x184E18u;
            goto label_184e18;
        }
    }
    ctx->pc = 0x184E14u;
label_184e14:
    // 0x184e14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x184e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184e18:
    // 0x184e18: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x184e18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_184e1c:
    // 0x184e1c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_184e20:
    if (ctx->pc == 0x184E20u) {
        ctx->pc = 0x184E24u;
        goto label_184e24;
    }
    ctx->pc = 0x184E1Cu;
    {
        const bool branch_taken_0x184e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e1c) {
            ctx->pc = 0x184E38u;
            goto label_184e38;
        }
    }
    ctx->pc = 0x184E24u;
label_184e24:
    // 0x184e24: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x184e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_184e28:
    // 0x184e28: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x184e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_184e2c:
    // 0x184e2c: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x184e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_184e30:
    // 0x184e30: 0x10000005  b           . + 4 + (0x5 << 2)
label_184e34:
    if (ctx->pc == 0x184E34u) {
        ctx->pc = 0x184E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E30u;
        // 0x184e34: 0xe68823  subu        $s1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E38u;
        goto label_184e38;
    }
    ctx->pc = 0x184E30u;
    {
        const bool branch_taken_0x184e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E30u;
        // 0x184e34: 0xe68823  subu        $s1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e30) {
            ctx->pc = 0x184E48u;
            goto label_184e48;
        }
    }
    ctx->pc = 0x184E38u;
label_184e38:
    // 0x184e38: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x184e38u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_184e3c:
    // 0x184e3c: 0x103a02  srl         $a3, $s0, 8
    ctx->pc = 0x184e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_184e40:
    // 0x184e40: 0xe68823  subu        $s1, $a3, $a2
    ctx->pc = 0x184e40u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_184e44:
    // 0x184e44: 0x0  nop
    ctx->pc = 0x184e44u;
    // NOP
label_184e48:
    // 0x184e48: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x184e48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_184e4c:
    // 0x184e4c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x184e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_184e50:
    // 0x184e50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x184e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_184e54:
    // 0x184e54: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_184e58:
    // 0x184e58: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x184e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_184e5c:
    // 0x184e5c: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x184e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_184e60:
    // 0x184e60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_184e64:
    if (ctx->pc == 0x184E64u) {
        ctx->pc = 0x184E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E60u;
        // 0x184e64: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E68u;
        goto label_184e68;
    }
    ctx->pc = 0x184E60u;
    {
        const bool branch_taken_0x184e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E60u;
        // 0x184e64: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e60) {
            ctx->pc = 0x184E70u;
            goto label_184e70;
        }
    }
    ctx->pc = 0x184E68u;
label_184e68:
    // 0x184e68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x184e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184e6c:
    // 0x184e6c: 0x0  nop
    ctx->pc = 0x184e6cu;
    // NOP
label_184e70:
    // 0x184e70: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x184e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_184e74:
    // 0x184e74: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_184e78:
    if (ctx->pc == 0x184E78u) {
        ctx->pc = 0x184E7Cu;
        goto label_184e7c;
    }
    ctx->pc = 0x184E74u;
    {
        const bool branch_taken_0x184e74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x184e74) {
            ctx->pc = 0x184E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184e48;
        }
    }
    ctx->pc = 0x184E7Cu;
label_184e7c:
    // 0x184e7c: 0x0  nop
    ctx->pc = 0x184e7cu;
    // NOP
label_184e80:
    // 0x184e80: 0xae5011e0  sw          $s0, 0x11E0($s2)
    ctx->pc = 0x184e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4576), GPR_U32(ctx, 16));
label_184e84:
    // 0x184e84: 0xae4211fc  sw          $v0, 0x11FC($s2)
    ctx->pc = 0x184e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4604), GPR_U32(ctx, 2));
label_184e88:
    // 0x184e88: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x184e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184e8c:
    // 0x184e8c: 0x0  nop
    ctx->pc = 0x184e8cu;
    // NOP
label_184e90:
    // 0x184e90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x184e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_184e94:
    // 0x184e94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x184e94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_184e98:
    // 0x184e98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x184e98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_184e9c:
    // 0x184e9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x184e9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_184ea0:
    // 0x184ea0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x184ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_184ea4:
    // 0x184ea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x184ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_184ea8:
    // 0x184ea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184eac:
    // 0x184eac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184eb0:
    // 0x184eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184eb4:
    // 0x184eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184eb8:
    // 0x184eb8: 0x3e00008  jr          $ra
label_184ebc:
    if (ctx->pc == 0x184EBCu) {
        ctx->pc = 0x184EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EB8u;
        // 0x184ebc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184EC0u;
        goto label_fallthrough_0x184eb8;
    }
    ctx->pc = 0x184EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EB8u;
        // 0x184ebc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184eb8:
    ctx->pc = 0x184EC0u;
}
