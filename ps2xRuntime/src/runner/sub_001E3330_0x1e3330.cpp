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

// Function: sub_001E3330
// Address: 0x1e3330 - 0x1e3a5c
void sub_001E3330_0x1e3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3330_0x1e3330");
#endif

    switch (ctx->pc) {
        case 0x1e3330u: goto label_1e3330;
        case 0x1e3334u: goto label_1e3334;
        case 0x1e3338u: goto label_1e3338;
        case 0x1e333cu: goto label_1e333c;
        case 0x1e3340u: goto label_1e3340;
        case 0x1e3344u: goto label_1e3344;
        case 0x1e3348u: goto label_1e3348;
        case 0x1e334cu: goto label_1e334c;
        case 0x1e3350u: goto label_1e3350;
        case 0x1e3354u: goto label_1e3354;
        case 0x1e3358u: goto label_1e3358;
        case 0x1e335cu: goto label_1e335c;
        case 0x1e3360u: goto label_1e3360;
        case 0x1e3364u: goto label_1e3364;
        case 0x1e3368u: goto label_1e3368;
        case 0x1e336cu: goto label_1e336c;
        case 0x1e3370u: goto label_1e3370;
        case 0x1e3374u: goto label_1e3374;
        case 0x1e3378u: goto label_1e3378;
        case 0x1e337cu: goto label_1e337c;
        case 0x1e3380u: goto label_1e3380;
        case 0x1e3384u: goto label_1e3384;
        case 0x1e3388u: goto label_1e3388;
        case 0x1e338cu: goto label_1e338c;
        case 0x1e3390u: goto label_1e3390;
        case 0x1e3394u: goto label_1e3394;
        case 0x1e3398u: goto label_1e3398;
        case 0x1e339cu: goto label_1e339c;
        case 0x1e33a0u: goto label_1e33a0;
        case 0x1e33a4u: goto label_1e33a4;
        case 0x1e33a8u: goto label_1e33a8;
        case 0x1e33acu: goto label_1e33ac;
        case 0x1e33b0u: goto label_1e33b0;
        case 0x1e33b4u: goto label_1e33b4;
        case 0x1e33b8u: goto label_1e33b8;
        case 0x1e33bcu: goto label_1e33bc;
        case 0x1e33c0u: goto label_1e33c0;
        case 0x1e33c4u: goto label_1e33c4;
        case 0x1e33c8u: goto label_1e33c8;
        case 0x1e33ccu: goto label_1e33cc;
        case 0x1e33d0u: goto label_1e33d0;
        case 0x1e33d4u: goto label_1e33d4;
        case 0x1e33d8u: goto label_1e33d8;
        case 0x1e33dcu: goto label_1e33dc;
        case 0x1e33e0u: goto label_1e33e0;
        case 0x1e33e4u: goto label_1e33e4;
        case 0x1e33e8u: goto label_1e33e8;
        case 0x1e33ecu: goto label_1e33ec;
        case 0x1e33f0u: goto label_1e33f0;
        case 0x1e33f4u: goto label_1e33f4;
        case 0x1e33f8u: goto label_1e33f8;
        case 0x1e33fcu: goto label_1e33fc;
        case 0x1e3400u: goto label_1e3400;
        case 0x1e3404u: goto label_1e3404;
        case 0x1e3408u: goto label_1e3408;
        case 0x1e340cu: goto label_1e340c;
        case 0x1e3410u: goto label_1e3410;
        case 0x1e3414u: goto label_1e3414;
        case 0x1e3418u: goto label_1e3418;
        case 0x1e341cu: goto label_1e341c;
        case 0x1e3420u: goto label_1e3420;
        case 0x1e3424u: goto label_1e3424;
        case 0x1e3428u: goto label_1e3428;
        case 0x1e342cu: goto label_1e342c;
        case 0x1e3430u: goto label_1e3430;
        case 0x1e3434u: goto label_1e3434;
        case 0x1e3438u: goto label_1e3438;
        case 0x1e343cu: goto label_1e343c;
        case 0x1e3440u: goto label_1e3440;
        case 0x1e3444u: goto label_1e3444;
        case 0x1e3448u: goto label_1e3448;
        case 0x1e344cu: goto label_1e344c;
        case 0x1e3450u: goto label_1e3450;
        case 0x1e3454u: goto label_1e3454;
        case 0x1e3458u: goto label_1e3458;
        case 0x1e345cu: goto label_1e345c;
        case 0x1e3460u: goto label_1e3460;
        case 0x1e3464u: goto label_1e3464;
        case 0x1e3468u: goto label_1e3468;
        case 0x1e346cu: goto label_1e346c;
        case 0x1e3470u: goto label_1e3470;
        case 0x1e3474u: goto label_1e3474;
        case 0x1e3478u: goto label_1e3478;
        case 0x1e347cu: goto label_1e347c;
        case 0x1e3480u: goto label_1e3480;
        case 0x1e3484u: goto label_1e3484;
        case 0x1e3488u: goto label_1e3488;
        case 0x1e348cu: goto label_1e348c;
        case 0x1e3490u: goto label_1e3490;
        case 0x1e3494u: goto label_1e3494;
        case 0x1e3498u: goto label_1e3498;
        case 0x1e349cu: goto label_1e349c;
        case 0x1e34a0u: goto label_1e34a0;
        case 0x1e34a4u: goto label_1e34a4;
        case 0x1e34a8u: goto label_1e34a8;
        case 0x1e34acu: goto label_1e34ac;
        case 0x1e34b0u: goto label_1e34b0;
        case 0x1e34b4u: goto label_1e34b4;
        case 0x1e34b8u: goto label_1e34b8;
        case 0x1e34bcu: goto label_1e34bc;
        case 0x1e34c0u: goto label_1e34c0;
        case 0x1e34c4u: goto label_1e34c4;
        case 0x1e34c8u: goto label_1e34c8;
        case 0x1e34ccu: goto label_1e34cc;
        case 0x1e34d0u: goto label_1e34d0;
        case 0x1e34d4u: goto label_1e34d4;
        case 0x1e34d8u: goto label_1e34d8;
        case 0x1e34dcu: goto label_1e34dc;
        case 0x1e34e0u: goto label_1e34e0;
        case 0x1e34e4u: goto label_1e34e4;
        case 0x1e34e8u: goto label_1e34e8;
        case 0x1e34ecu: goto label_1e34ec;
        case 0x1e34f0u: goto label_1e34f0;
        case 0x1e34f4u: goto label_1e34f4;
        case 0x1e34f8u: goto label_1e34f8;
        case 0x1e34fcu: goto label_1e34fc;
        case 0x1e3500u: goto label_1e3500;
        case 0x1e3504u: goto label_1e3504;
        case 0x1e3508u: goto label_1e3508;
        case 0x1e350cu: goto label_1e350c;
        case 0x1e3510u: goto label_1e3510;
        case 0x1e3514u: goto label_1e3514;
        case 0x1e3518u: goto label_1e3518;
        case 0x1e351cu: goto label_1e351c;
        case 0x1e3520u: goto label_1e3520;
        case 0x1e3524u: goto label_1e3524;
        case 0x1e3528u: goto label_1e3528;
        case 0x1e352cu: goto label_1e352c;
        case 0x1e3530u: goto label_1e3530;
        case 0x1e3534u: goto label_1e3534;
        case 0x1e3538u: goto label_1e3538;
        case 0x1e353cu: goto label_1e353c;
        case 0x1e3540u: goto label_1e3540;
        case 0x1e3544u: goto label_1e3544;
        case 0x1e3548u: goto label_1e3548;
        case 0x1e354cu: goto label_1e354c;
        case 0x1e3550u: goto label_1e3550;
        case 0x1e3554u: goto label_1e3554;
        case 0x1e3558u: goto label_1e3558;
        case 0x1e355cu: goto label_1e355c;
        case 0x1e3560u: goto label_1e3560;
        case 0x1e3564u: goto label_1e3564;
        case 0x1e3568u: goto label_1e3568;
        case 0x1e356cu: goto label_1e356c;
        case 0x1e3570u: goto label_1e3570;
        case 0x1e3574u: goto label_1e3574;
        case 0x1e3578u: goto label_1e3578;
        case 0x1e357cu: goto label_1e357c;
        case 0x1e3580u: goto label_1e3580;
        case 0x1e3584u: goto label_1e3584;
        case 0x1e3588u: goto label_1e3588;
        case 0x1e358cu: goto label_1e358c;
        case 0x1e3590u: goto label_1e3590;
        case 0x1e3594u: goto label_1e3594;
        case 0x1e3598u: goto label_1e3598;
        case 0x1e359cu: goto label_1e359c;
        case 0x1e35a0u: goto label_1e35a0;
        case 0x1e35a4u: goto label_1e35a4;
        case 0x1e35a8u: goto label_1e35a8;
        case 0x1e35acu: goto label_1e35ac;
        case 0x1e35b0u: goto label_1e35b0;
        case 0x1e35b4u: goto label_1e35b4;
        case 0x1e35b8u: goto label_1e35b8;
        case 0x1e35bcu: goto label_1e35bc;
        case 0x1e35c0u: goto label_1e35c0;
        case 0x1e35c4u: goto label_1e35c4;
        case 0x1e35c8u: goto label_1e35c8;
        case 0x1e35ccu: goto label_1e35cc;
        case 0x1e35d0u: goto label_1e35d0;
        case 0x1e35d4u: goto label_1e35d4;
        case 0x1e35d8u: goto label_1e35d8;
        case 0x1e35dcu: goto label_1e35dc;
        case 0x1e35e0u: goto label_1e35e0;
        case 0x1e35e4u: goto label_1e35e4;
        case 0x1e35e8u: goto label_1e35e8;
        case 0x1e35ecu: goto label_1e35ec;
        case 0x1e35f0u: goto label_1e35f0;
        case 0x1e35f4u: goto label_1e35f4;
        case 0x1e35f8u: goto label_1e35f8;
        case 0x1e35fcu: goto label_1e35fc;
        case 0x1e3600u: goto label_1e3600;
        case 0x1e3604u: goto label_1e3604;
        case 0x1e3608u: goto label_1e3608;
        case 0x1e360cu: goto label_1e360c;
        case 0x1e3610u: goto label_1e3610;
        case 0x1e3614u: goto label_1e3614;
        case 0x1e3618u: goto label_1e3618;
        case 0x1e361cu: goto label_1e361c;
        case 0x1e3620u: goto label_1e3620;
        case 0x1e3624u: goto label_1e3624;
        case 0x1e3628u: goto label_1e3628;
        case 0x1e362cu: goto label_1e362c;
        case 0x1e3630u: goto label_1e3630;
        case 0x1e3634u: goto label_1e3634;
        case 0x1e3638u: goto label_1e3638;
        case 0x1e363cu: goto label_1e363c;
        case 0x1e3640u: goto label_1e3640;
        case 0x1e3644u: goto label_1e3644;
        case 0x1e3648u: goto label_1e3648;
        case 0x1e364cu: goto label_1e364c;
        case 0x1e3650u: goto label_1e3650;
        case 0x1e3654u: goto label_1e3654;
        case 0x1e3658u: goto label_1e3658;
        case 0x1e365cu: goto label_1e365c;
        case 0x1e3660u: goto label_1e3660;
        case 0x1e3664u: goto label_1e3664;
        case 0x1e3668u: goto label_1e3668;
        case 0x1e366cu: goto label_1e366c;
        case 0x1e3670u: goto label_1e3670;
        case 0x1e3674u: goto label_1e3674;
        case 0x1e3678u: goto label_1e3678;
        case 0x1e367cu: goto label_1e367c;
        case 0x1e3680u: goto label_1e3680;
        case 0x1e3684u: goto label_1e3684;
        case 0x1e3688u: goto label_1e3688;
        case 0x1e368cu: goto label_1e368c;
        case 0x1e3690u: goto label_1e3690;
        case 0x1e3694u: goto label_1e3694;
        case 0x1e3698u: goto label_1e3698;
        case 0x1e369cu: goto label_1e369c;
        case 0x1e36a0u: goto label_1e36a0;
        case 0x1e36a4u: goto label_1e36a4;
        case 0x1e36a8u: goto label_1e36a8;
        case 0x1e36acu: goto label_1e36ac;
        case 0x1e36b0u: goto label_1e36b0;
        case 0x1e36b4u: goto label_1e36b4;
        case 0x1e36b8u: goto label_1e36b8;
        case 0x1e36bcu: goto label_1e36bc;
        case 0x1e36c0u: goto label_1e36c0;
        case 0x1e36c4u: goto label_1e36c4;
        case 0x1e36c8u: goto label_1e36c8;
        case 0x1e36ccu: goto label_1e36cc;
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e36d4u: goto label_1e36d4;
        case 0x1e36d8u: goto label_1e36d8;
        case 0x1e36dcu: goto label_1e36dc;
        case 0x1e36e0u: goto label_1e36e0;
        case 0x1e36e4u: goto label_1e36e4;
        case 0x1e36e8u: goto label_1e36e8;
        case 0x1e36ecu: goto label_1e36ec;
        case 0x1e36f0u: goto label_1e36f0;
        case 0x1e36f4u: goto label_1e36f4;
        case 0x1e36f8u: goto label_1e36f8;
        case 0x1e36fcu: goto label_1e36fc;
        case 0x1e3700u: goto label_1e3700;
        case 0x1e3704u: goto label_1e3704;
        case 0x1e3708u: goto label_1e3708;
        case 0x1e370cu: goto label_1e370c;
        case 0x1e3710u: goto label_1e3710;
        case 0x1e3714u: goto label_1e3714;
        case 0x1e3718u: goto label_1e3718;
        case 0x1e371cu: goto label_1e371c;
        case 0x1e3720u: goto label_1e3720;
        case 0x1e3724u: goto label_1e3724;
        case 0x1e3728u: goto label_1e3728;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e3730u: goto label_1e3730;
        case 0x1e3734u: goto label_1e3734;
        case 0x1e3738u: goto label_1e3738;
        case 0x1e373cu: goto label_1e373c;
        case 0x1e3740u: goto label_1e3740;
        case 0x1e3744u: goto label_1e3744;
        case 0x1e3748u: goto label_1e3748;
        case 0x1e374cu: goto label_1e374c;
        case 0x1e3750u: goto label_1e3750;
        case 0x1e3754u: goto label_1e3754;
        case 0x1e3758u: goto label_1e3758;
        case 0x1e375cu: goto label_1e375c;
        case 0x1e3760u: goto label_1e3760;
        case 0x1e3764u: goto label_1e3764;
        case 0x1e3768u: goto label_1e3768;
        case 0x1e376cu: goto label_1e376c;
        case 0x1e3770u: goto label_1e3770;
        case 0x1e3774u: goto label_1e3774;
        case 0x1e3778u: goto label_1e3778;
        case 0x1e377cu: goto label_1e377c;
        case 0x1e3780u: goto label_1e3780;
        case 0x1e3784u: goto label_1e3784;
        case 0x1e3788u: goto label_1e3788;
        case 0x1e378cu: goto label_1e378c;
        case 0x1e3790u: goto label_1e3790;
        case 0x1e3794u: goto label_1e3794;
        case 0x1e3798u: goto label_1e3798;
        case 0x1e379cu: goto label_1e379c;
        case 0x1e37a0u: goto label_1e37a0;
        case 0x1e37a4u: goto label_1e37a4;
        case 0x1e37a8u: goto label_1e37a8;
        case 0x1e37acu: goto label_1e37ac;
        case 0x1e37b0u: goto label_1e37b0;
        case 0x1e37b4u: goto label_1e37b4;
        case 0x1e37b8u: goto label_1e37b8;
        case 0x1e37bcu: goto label_1e37bc;
        case 0x1e37c0u: goto label_1e37c0;
        case 0x1e37c4u: goto label_1e37c4;
        case 0x1e37c8u: goto label_1e37c8;
        case 0x1e37ccu: goto label_1e37cc;
        case 0x1e37d0u: goto label_1e37d0;
        case 0x1e37d4u: goto label_1e37d4;
        case 0x1e37d8u: goto label_1e37d8;
        case 0x1e37dcu: goto label_1e37dc;
        case 0x1e37e0u: goto label_1e37e0;
        case 0x1e37e4u: goto label_1e37e4;
        case 0x1e37e8u: goto label_1e37e8;
        case 0x1e37ecu: goto label_1e37ec;
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e37f4u: goto label_1e37f4;
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e37fcu: goto label_1e37fc;
        case 0x1e3800u: goto label_1e3800;
        case 0x1e3804u: goto label_1e3804;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e380cu: goto label_1e380c;
        case 0x1e3810u: goto label_1e3810;
        case 0x1e3814u: goto label_1e3814;
        case 0x1e3818u: goto label_1e3818;
        case 0x1e381cu: goto label_1e381c;
        case 0x1e3820u: goto label_1e3820;
        case 0x1e3824u: goto label_1e3824;
        case 0x1e3828u: goto label_1e3828;
        case 0x1e382cu: goto label_1e382c;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3834u: goto label_1e3834;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e383cu: goto label_1e383c;
        case 0x1e3840u: goto label_1e3840;
        case 0x1e3844u: goto label_1e3844;
        case 0x1e3848u: goto label_1e3848;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e3850u: goto label_1e3850;
        case 0x1e3854u: goto label_1e3854;
        case 0x1e3858u: goto label_1e3858;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3860u: goto label_1e3860;
        case 0x1e3864u: goto label_1e3864;
        case 0x1e3868u: goto label_1e3868;
        case 0x1e386cu: goto label_1e386c;
        case 0x1e3870u: goto label_1e3870;
        case 0x1e3874u: goto label_1e3874;
        case 0x1e3878u: goto label_1e3878;
        case 0x1e387cu: goto label_1e387c;
        case 0x1e3880u: goto label_1e3880;
        case 0x1e3884u: goto label_1e3884;
        case 0x1e3888u: goto label_1e3888;
        case 0x1e388cu: goto label_1e388c;
        case 0x1e3890u: goto label_1e3890;
        case 0x1e3894u: goto label_1e3894;
        case 0x1e3898u: goto label_1e3898;
        case 0x1e389cu: goto label_1e389c;
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38a4u: goto label_1e38a4;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38acu: goto label_1e38ac;
        case 0x1e38b0u: goto label_1e38b0;
        case 0x1e38b4u: goto label_1e38b4;
        case 0x1e38b8u: goto label_1e38b8;
        case 0x1e38bcu: goto label_1e38bc;
        case 0x1e38c0u: goto label_1e38c0;
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e38c8u: goto label_1e38c8;
        case 0x1e38ccu: goto label_1e38cc;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38d4u: goto label_1e38d4;
        case 0x1e38d8u: goto label_1e38d8;
        case 0x1e38dcu: goto label_1e38dc;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e38e8u: goto label_1e38e8;
        case 0x1e38ecu: goto label_1e38ec;
        case 0x1e38f0u: goto label_1e38f0;
        case 0x1e38f4u: goto label_1e38f4;
        case 0x1e38f8u: goto label_1e38f8;
        case 0x1e38fcu: goto label_1e38fc;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3904u: goto label_1e3904;
        case 0x1e3908u: goto label_1e3908;
        case 0x1e390cu: goto label_1e390c;
        case 0x1e3910u: goto label_1e3910;
        case 0x1e3914u: goto label_1e3914;
        case 0x1e3918u: goto label_1e3918;
        case 0x1e391cu: goto label_1e391c;
        case 0x1e3920u: goto label_1e3920;
        case 0x1e3924u: goto label_1e3924;
        case 0x1e3928u: goto label_1e3928;
        case 0x1e392cu: goto label_1e392c;
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3934u: goto label_1e3934;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e393cu: goto label_1e393c;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e3944u: goto label_1e3944;
        case 0x1e3948u: goto label_1e3948;
        case 0x1e394cu: goto label_1e394c;
        case 0x1e3950u: goto label_1e3950;
        case 0x1e3954u: goto label_1e3954;
        case 0x1e3958u: goto label_1e3958;
        case 0x1e395cu: goto label_1e395c;
        case 0x1e3960u: goto label_1e3960;
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3968u: goto label_1e3968;
        case 0x1e396cu: goto label_1e396c;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e3974u: goto label_1e3974;
        case 0x1e3978u: goto label_1e3978;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3984u: goto label_1e3984;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e398cu: goto label_1e398c;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e3994u: goto label_1e3994;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a0u: goto label_1e39a0;
        case 0x1e39a4u: goto label_1e39a4;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39acu: goto label_1e39ac;
        case 0x1e39b0u: goto label_1e39b0;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39bcu: goto label_1e39bc;
        case 0x1e39c0u: goto label_1e39c0;
        case 0x1e39c4u: goto label_1e39c4;
        case 0x1e39c8u: goto label_1e39c8;
        case 0x1e39ccu: goto label_1e39cc;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39d4u: goto label_1e39d4;
        case 0x1e39d8u: goto label_1e39d8;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39e0u: goto label_1e39e0;
        case 0x1e39e4u: goto label_1e39e4;
        case 0x1e39e8u: goto label_1e39e8;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e39f0u: goto label_1e39f0;
        case 0x1e39f4u: goto label_1e39f4;
        case 0x1e39f8u: goto label_1e39f8;
        case 0x1e39fcu: goto label_1e39fc;
        case 0x1e3a00u: goto label_1e3a00;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a08u: goto label_1e3a08;
        case 0x1e3a0cu: goto label_1e3a0c;
        case 0x1e3a10u: goto label_1e3a10;
        case 0x1e3a14u: goto label_1e3a14;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a1cu: goto label_1e3a1c;
        case 0x1e3a20u: goto label_1e3a20;
        case 0x1e3a24u: goto label_1e3a24;
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a30u: goto label_1e3a30;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a38u: goto label_1e3a38;
        case 0x1e3a3cu: goto label_1e3a3c;
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a44u: goto label_1e3a44;
        case 0x1e3a48u: goto label_1e3a48;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        default: break;
    }

    ctx->pc = 0x1e3330u;

label_1e3330:
    // 0x1e3330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e3330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e3334:
    // 0x1e3334: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e3338:
    // 0x1e3338: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e3338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e333c:
    // 0x1e333c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e3340:
    // 0x1e3340: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e3344:
    // 0x1e3344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e3348:
    // 0x1e3348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e334c:
    // 0x1e334c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3350:
    // 0x1e3350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3354:
    // 0x1e3354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3358:
    // 0x1e3358: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e3358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e335c:
    // 0x1e335c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1e3360:
    if (ctx->pc == 0x1E3360u) {
        ctx->pc = 0x1E3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E335Cu;
        // 0x1e3360: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3364u;
        goto label_1e3364;
    }
    ctx->pc = 0x1E335Cu;
    {
        const bool branch_taken_0x1e335c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E335Cu;
        // 0x1e3360: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e335c) {
            ctx->pc = 0x1E3370u;
            goto label_1e3370;
        }
    }
    ctx->pc = 0x1E3364u;
label_1e3364:
    // 0x1e3364: 0x100001b4  b           . + 4 + (0x1B4 << 2)
label_1e3368:
    if (ctx->pc == 0x1E3368u) {
        ctx->pc = 0x1E3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3364u;
        // 0x1e3368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E336Cu;
        goto label_1e336c;
    }
    ctx->pc = 0x1E3364u;
    {
        const bool branch_taken_0x1e3364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3364u;
        // 0x1e3368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3364) {
            ctx->pc = 0x1E3A38u;
            goto label_1e3a38;
        }
    }
    ctx->pc = 0x1E336Cu;
label_1e336c:
    // 0x1e336c: 0x0  nop
    ctx->pc = 0x1e336cu;
    // NOP
label_1e3370:
    // 0x1e3370: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1e3370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e3374:
    // 0x1e3374: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_1e3378:
    if (ctx->pc == 0x1E3378u) {
        ctx->pc = 0x1E337Cu;
        goto label_1e337c;
    }
    ctx->pc = 0x1E3374u;
    {
        const bool branch_taken_0x1e3374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3374) {
            ctx->pc = 0x1E36E8u;
            goto label_1e36e8;
        }
    }
    ctx->pc = 0x1E337Cu;
label_1e337c:
    // 0x1e337c: 0x8603003a  lh          $v1, 0x3A($s0)
    ctx->pc = 0x1e337cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_1e3380:
    // 0x1e3380: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e3384:
    // 0x1e3384: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e3388:
    if (ctx->pc == 0x1E3388u) {
        ctx->pc = 0x1E338Cu;
        goto label_1e338c;
    }
    ctx->pc = 0x1E3384u;
    {
        const bool branch_taken_0x1e3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3384) {
            ctx->pc = 0x1E3398u;
            goto label_1e3398;
        }
    }
    ctx->pc = 0x1E338Cu;
label_1e338c:
    // 0x1e338c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1e338cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e3390:
    // 0x1e3390: 0x142000d5  bnez        $at, . + 4 + (0xD5 << 2)
label_1e3394:
    if (ctx->pc == 0x1E3394u) {
        ctx->pc = 0x1E3398u;
        goto label_1e3398;
    }
    ctx->pc = 0x1E3390u;
    {
        const bool branch_taken_0x1e3390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3390) {
            ctx->pc = 0x1E36E8u;
            goto label_1e36e8;
        }
    }
    ctx->pc = 0x1E3398u;
label_1e3398:
    // 0x1e3398: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e339c:
    // 0x1e339c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e339cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e33a0:
    // 0x1e33a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e33a4:
    if (ctx->pc == 0x1E33A4u) {
        ctx->pc = 0x1E33A8u;
        goto label_1e33a8;
    }
    ctx->pc = 0x1E33A0u;
    {
        const bool branch_taken_0x1e33a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33a0) {
            ctx->pc = 0x1E33C8u;
            goto label_1e33c8;
        }
    }
    ctx->pc = 0x1E33A8u;
label_1e33a8:
    // 0x1e33a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e33a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e33ac:
    // 0x1e33ac: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1e33acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e33b0:
    // 0x1e33b0: 0x0  nop
    ctx->pc = 0x1e33b0u;
    // NOP
label_1e33b4:
    // 0x1e33b4: 0x0  nop
    ctx->pc = 0x1e33b4u;
    // NOP
label_1e33b8:
    // 0x1e33b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e33b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e33bc:
    // 0x1e33bc: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
label_1e33c0:
    if (ctx->pc == 0x1E33C0u) {
        ctx->pc = 0x1E33C4u;
        goto label_1e33c4;
    }
    ctx->pc = 0x1E33BCu;
    {
        const bool branch_taken_0x1e33bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e33bc) {
            ctx->pc = 0x1E36E8u;
            goto label_1e36e8;
        }
    }
    ctx->pc = 0x1E33C4u;
label_1e33c4:
    // 0x1e33c4: 0x0  nop
    ctx->pc = 0x1e33c4u;
    // NOP
label_1e33c8:
    // 0x1e33c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1e33c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1e33cc:
    // 0x1e33cc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e33ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e33d0:
    // 0x1e33d0: 0x102000c5  beqz        $at, . + 4 + (0xC5 << 2)
label_1e33d4:
    if (ctx->pc == 0x1E33D4u) {
        ctx->pc = 0x1E33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33D0u;
        // 0x1e33d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33D8u;
        goto label_1e33d8;
    }
    ctx->pc = 0x1E33D0u;
    {
        const bool branch_taken_0x1e33d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33D0u;
        // 0x1e33d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33d0) {
            ctx->pc = 0x1E36E8u;
            goto label_1e36e8;
        }
    }
    ctx->pc = 0x1E33D8u;
label_1e33d8:
    // 0x1e33d8: 0x92040038  lbu         $a0, 0x38($s0)
    ctx->pc = 0x1e33d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_1e33dc:
    // 0x1e33dc: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x1e33dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_1e33e0:
    // 0x1e33e0: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x1e33e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
label_1e33e4:
    // 0x1e33e4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e33e8:
    // 0x1e33e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e33ec:
    // 0x1e33ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e33f0:
    // 0x1e33f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1e33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e33f4:
    // 0x1e33f4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1e33f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e33f8:
    // 0x1e33f8: 0xc074350  jal         func_1D0D40
label_1e33fc:
    if (ctx->pc == 0x1E33FCu) {
        ctx->pc = 0x1E33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33F8u;
        // 0x1e33fc: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3400u;
        goto label_1e3400;
    }
    ctx->pc = 0x1E33F8u;
    SET_GPR_U32(ctx, 31, 0x1E3400u);
    ctx->pc = 0x1E33FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E33F8u;
    // 0x1e33fc: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E33F8u, 0x1E3400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3400u;
label_1e3400:
    // 0x1e3400: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3404:
    // 0x1e3404: 0x9052000a  lbu         $s2, 0xA($v0)
    ctx->pc = 0x1e3404u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_1e3408:
    // 0x1e3408: 0x9051000b  lbu         $s1, 0xB($v0)
    ctx->pc = 0x1e3408u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_1e340c:
    // 0x1e340c: 0x8445001a  lh          $a1, 0x1A($v0)
    ctx->pc = 0x1e340cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
label_1e3410:
    // 0x1e3410: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1e3414:
    // 0x1e3414: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1e3418:
    // 0x1e3418: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e341c:
    if (ctx->pc == 0x1E341Cu) {
        ctx->pc = 0x1E3420u;
        goto label_1e3420;
    }
    ctx->pc = 0x1E3418u;
    {
        const bool branch_taken_0x1e3418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3418) {
            ctx->pc = 0x1E3450u;
            goto label_1e3450;
        }
    }
    ctx->pc = 0x1E3420u;
label_1e3420:
    // 0x1e3420: 0xc078eac  jal         func_1E3AB0
label_1e3424:
    if (ctx->pc == 0x1E3424u) {
        ctx->pc = 0x1E3428u;
        goto label_1e3428;
    }
    ctx->pc = 0x1E3420u;
    SET_GPR_U32(ctx, 31, 0x1E3428u);
    ctx->pc = 0x1E3AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3AB0u, 0x1E3420u, 0x1E3428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3428u;
label_1e3428:
    // 0x1e3428: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1e3428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1e342c:
    // 0x1e342c: 0xc074360  jal         func_1D0D80
label_1e3430:
    if (ctx->pc == 0x1E3430u) {
        ctx->pc = 0x1E3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E342Cu;
        // 0x1e3430: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3434u;
        goto label_1e3434;
    }
    ctx->pc = 0x1E342Cu;
    SET_GPR_U32(ctx, 31, 0x1E3434u);
    ctx->pc = 0x1E3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E342Cu;
    // 0x1e3430: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D80u, 0x1E342Cu, 0x1E3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3434u;
label_1e3434:
    // 0x1e3434: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_1e3438:
    if (ctx->pc == 0x1E3438u) {
        ctx->pc = 0x1E3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3434u;
        // 0x1e3438: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E343Cu;
        goto label_1e343c;
    }
    ctx->pc = 0x1E3434u;
    {
        const bool branch_taken_0x1e3434 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1E3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3434u;
        // 0x1e3438: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3434) {
            ctx->pc = 0x1E3444u;
            goto label_1e3444;
        }
    }
    ctx->pc = 0x1E343Cu;
label_1e343c:
    // 0x1e343c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3440:
    if (ctx->pc == 0x1E3440u) {
        ctx->pc = 0x1E3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E343Cu;
        // 0x1e3440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3444u;
        goto label_1e3444;
    }
    ctx->pc = 0x1E343Cu;
    {
        const bool branch_taken_0x1e343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E343Cu;
        // 0x1e3440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e343c) {
            ctx->pc = 0x1E344Cu;
            goto label_1e344c;
        }
    }
    ctx->pc = 0x1E3444u;
label_1e3444:
    // 0x1e3444: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x1e3444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e3448:
    // 0x1e3448: 0x241100a  movz        $v0, $s2, $at
    ctx->pc = 0x1e3448u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_1e344c:
    // 0x1e344c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e344cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3450:
    // 0x1e3450: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3454:
    // 0x1e3454: 0x8445001e  lh          $a1, 0x1E($v0)
    ctx->pc = 0x1e3454u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
label_1e3458:
    // 0x1e3458: 0x8444001c  lh          $a0, 0x1C($v0)
    ctx->pc = 0x1e3458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_1e345c:
    // 0x1e345c: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1e345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1e3460:
    // 0x1e3460: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1e3464:
    if (ctx->pc == 0x1E3464u) {
        ctx->pc = 0x1E3468u;
        goto label_1e3468;
    }
    ctx->pc = 0x1E3460u;
    {
        const bool branch_taken_0x1e3460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3460) {
            ctx->pc = 0x1E34A0u;
            goto label_1e34a0;
        }
    }
    ctx->pc = 0x1E3468u;
label_1e3468:
    // 0x1e3468: 0xc078eac  jal         func_1E3AB0
label_1e346c:
    if (ctx->pc == 0x1E346Cu) {
        ctx->pc = 0x1E3470u;
        goto label_1e3470;
    }
    ctx->pc = 0x1E3468u;
    SET_GPR_U32(ctx, 31, 0x1E3470u);
    ctx->pc = 0x1E3AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3AB0u, 0x1E3468u, 0x1E3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3470u;
label_1e3470:
    // 0x1e3470: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e3470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e3474:
    // 0x1e3474: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1e3478:
    // 0x1e3478: 0xc0743b0  jal         func_1D0EC0
label_1e347c:
    if (ctx->pc == 0x1E347Cu) {
        ctx->pc = 0x1E347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3478u;
        // 0x1e347c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3480u;
        goto label_1e3480;
    }
    ctx->pc = 0x1E3478u;
    SET_GPR_U32(ctx, 31, 0x1E3480u);
    ctx->pc = 0x1E347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3478u;
    // 0x1e347c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0EC0u, 0x1E3478u, 0x1E3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3480u;
label_1e3480:
    // 0x1e3480: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1e3484:
    if (ctx->pc == 0x1E3484u) {
        ctx->pc = 0x1E3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3480u;
        // 0x1e3484: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3488u;
        goto label_1e3488;
    }
    ctx->pc = 0x1E3480u;
    {
        const bool branch_taken_0x1e3480 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3480u;
        // 0x1e3484: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3480) {
            ctx->pc = 0x1E3490u;
            goto label_1e3490;
        }
    }
    ctx->pc = 0x1E3488u;
label_1e3488:
    // 0x1e3488: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e348c:
    if (ctx->pc == 0x1E348Cu) {
        ctx->pc = 0x1E348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3488u;
        // 0x1e348c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3490u;
        goto label_1e3490;
    }
    ctx->pc = 0x1E3488u;
    {
        const bool branch_taken_0x1e3488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3488u;
        // 0x1e348c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3488) {
            ctx->pc = 0x1E3498u;
            goto label_1e3498;
        }
    }
    ctx->pc = 0x1E3490u;
label_1e3490:
    // 0x1e3490: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1e3490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e3494:
    // 0x1e3494: 0x221100a  movz        $v0, $s1, $at
    ctx->pc = 0x1e3494u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_1e3498:
    // 0x1e3498: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e349c:
    // 0x1e349c: 0x0  nop
    ctx->pc = 0x1e349cu;
    // NOP
label_1e34a0:
    // 0x1e34a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e34a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e34a4:
    // 0x1e34a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e34a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e34a8:
    // 0x1e34a8: 0xc074378  jal         func_1D0DE0
label_1e34ac:
    if (ctx->pc == 0x1E34ACu) {
        ctx->pc = 0x1E34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34A8u;
        // 0x1e34ac: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34B0u;
        goto label_1e34b0;
    }
    ctx->pc = 0x1E34A8u;
    SET_GPR_U32(ctx, 31, 0x1E34B0u);
    ctx->pc = 0x1E34ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34A8u;
    // 0x1e34ac: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E34A8u, 0x1E34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34B0u;
label_1e34b0:
    // 0x1e34b0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e34b4:
    // 0x1e34b4: 0xc078e9c  jal         func_1E3A70
label_1e34b8:
    if (ctx->pc == 0x1E34B8u) {
        ctx->pc = 0x1E34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34B4u;
        // 0x1e34b8: 0x8444000e  lh          $a0, 0xE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34BCu;
        goto label_1e34bc;
    }
    ctx->pc = 0x1E34B4u;
    SET_GPR_U32(ctx, 31, 0x1E34BCu);
    ctx->pc = 0x1E34B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34B4u;
    // 0x1e34b8: 0x8444000e  lh          $a0, 0xE($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A70u, 0x1E34B4u, 0x1E34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34BCu;
label_1e34bc:
    // 0x1e34bc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e34c0:
    // 0x1e34c0: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1e34c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1e34c4:
    // 0x1e34c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e34c8:
    // 0x1e34c8: 0xa6620046  sh          $v0, 0x46($s3)
    ctx->pc = 0x1e34c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
label_1e34cc:
    // 0x1e34cc: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x1e34ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e34d0:
    // 0x1e34d0: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_1e34d4:
    if (ctx->pc == 0x1E34D4u) {
        ctx->pc = 0x1E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D0u;
        // 0x1e34d4: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34D8u;
        goto label_1e34d8;
    }
    ctx->pc = 0x1E34D0u;
    {
        const bool branch_taken_0x1e34d0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D0u;
        // 0x1e34d4: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34d0) {
            ctx->pc = 0x1E34E4u;
            goto label_1e34e4;
        }
    }
    ctx->pc = 0x1E34D8u;
label_1e34d8:
    // 0x1e34d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e34dc:
    if (ctx->pc == 0x1E34DCu) {
        ctx->pc = 0x1E34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D8u;
        // 0x1e34dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34E0u;
        goto label_1e34e0;
    }
    ctx->pc = 0x1E34D8u;
    {
        const bool branch_taken_0x1e34d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D8u;
        // 0x1e34dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34d8) {
            ctx->pc = 0x1E34F4u;
            goto label_1e34f4;
        }
    }
    ctx->pc = 0x1E34E0u;
label_1e34e0:
    // 0x1e34e0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e34e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e34e4:
    // 0x1e34e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e34e8:
    if (ctx->pc == 0x1E34E8u) {
        ctx->pc = 0x1E34ECu;
        goto label_1e34ec;
    }
    ctx->pc = 0x1E34E4u;
    {
        const bool branch_taken_0x1e34e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e34e4) {
            ctx->pc = 0x1E34F4u;
            goto label_1e34f4;
        }
    }
    ctx->pc = 0x1E34ECu;
label_1e34ec:
    // 0x1e34ec: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e34f0:
    if (ctx->pc == 0x1E34F0u) {
        ctx->pc = 0x1E34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34ECu;
        // 0x1e34f0: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34F4u;
        goto label_1e34f4;
    }
    ctx->pc = 0x1E34ECu;
    {
        const bool branch_taken_0x1e34ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34ECu;
        // 0x1e34f0: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34ec) {
            ctx->pc = 0x1E34F4u;
            goto label_1e34f4;
        }
    }
    ctx->pc = 0x1E34F4u;
label_1e34f4:
    // 0x1e34f4: 0xa6620046  sh          $v0, 0x46($s3)
    ctx->pc = 0x1e34f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
label_1e34f8:
    // 0x1e34f8: 0xa6600044  sh          $zero, 0x44($s3)
    ctx->pc = 0x1e34f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 0));
label_1e34fc:
    // 0x1e34fc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1e3500:
    // 0x1e3500: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e3500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3504:
    // 0x1e3504: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x1e3504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e3508:
    // 0x1e3508: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x1e3508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e350c:
    // 0x1e350c: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x1e350cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_1e3510:
    // 0x1e3510: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1e3510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1e3514:
    // 0x1e3514: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e3514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e3518:
    // 0x1e3518: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e3518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e351c:
    // 0x1e351c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e351cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e3520:
    // 0x1e3520: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1e3520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e3524:
    // 0x1e3524: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e3524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e3528:
    // 0x1e3528: 0x0  nop
    ctx->pc = 0x1e3528u;
    // NOP
label_1e352c:
    // 0x1e352c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e352cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e3530:
    // 0x1e3530: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e3530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e3534:
    // 0x1e3534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3538:
    // 0x1e3538: 0xa662004a  sh          $v0, 0x4A($s3)
    ctx->pc = 0x1e3538u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 74), (uint16_t)GPR_U32(ctx, 2));
label_1e353c:
    // 0x1e353c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3540:
    // 0x1e3540: 0x86640046  lh          $a0, 0x46($s3)
    ctx->pc = 0x1e3540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e3544:
    // 0x1e3544: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x1e3544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_1e3548:
    // 0x1e3548: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e3548u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1e354c:
    // 0x1e354c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1e354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1e3550:
    // 0x1e3550: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e3550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1e3554:
    // 0x1e3554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e3558:
    // 0x1e3558: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x1e3558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e355c:
    // 0x1e355c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1e355cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e3560:
    // 0x1e3560: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e3560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e3564:
    // 0x1e3564: 0x0  nop
    ctx->pc = 0x1e3564u;
    // NOP
label_1e3568:
    // 0x1e3568: 0x1010  mfhi        $v0
    ctx->pc = 0x1e3568u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e356c:
    // 0x1e356c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e356cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e3570:
    // 0x1e3570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3574:
    // 0x1e3574: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1e3574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e3578:
    // 0x1e3578: 0xa662004c  sh          $v0, 0x4C($s3)
    ctx->pc = 0x1e3578u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 76), (uint16_t)GPR_U32(ctx, 2));
label_1e357c:
    // 0x1e357c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3580:
    // 0x1e3580: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x1e3580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_1e3584:
    // 0x1e3584: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e3584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1e3588:
    // 0x1e3588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e358c:
    if (ctx->pc == 0x1E358Cu) {
        ctx->pc = 0x1E3590u;
        goto label_1e3590;
    }
    ctx->pc = 0x1E3588u;
    {
        const bool branch_taken_0x1e3588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3588) {
            ctx->pc = 0x1E35A0u;
            goto label_1e35a0;
        }
    }
    ctx->pc = 0x1E3590u;
label_1e3590:
    // 0x1e3590: 0xc096d80  jal         func_25B600
label_1e3594:
    if (ctx->pc == 0x1E3594u) {
        ctx->pc = 0x1E3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3590u;
        // 0x1e3594: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3598u;
        goto label_1e3598;
    }
    ctx->pc = 0x1E3590u;
    SET_GPR_U32(ctx, 31, 0x1E3598u);
    ctx->pc = 0x1E3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3590u;
    // 0x1e3594: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x1E3590u, 0x1E3598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3598u;
label_1e3598:
    // 0x1e3598: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e359c:
    if (ctx->pc == 0x1E359Cu) {
        ctx->pc = 0x1E359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3598u;
        // 0x1e359c: 0xa2620048  sb          $v0, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35A0u;
        goto label_1e35a0;
    }
    ctx->pc = 0x1E3598u;
    {
        const bool branch_taken_0x1e3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3598u;
        // 0x1e359c: 0xa2620048  sb          $v0, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3598) {
            ctx->pc = 0x1E35A8u;
            goto label_1e35a8;
        }
    }
    ctx->pc = 0x1E35A0u;
label_1e35a0:
    // 0x1e35a0: 0xa2600048  sb          $zero, 0x48($s3)
    ctx->pc = 0x1e35a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
label_1e35a4:
    // 0x1e35a4: 0x0  nop
    ctx->pc = 0x1e35a4u;
    // NOP
label_1e35a8:
    // 0x1e35a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e35ac:
    // 0x1e35ac: 0xc078b88  jal         func_1E2E20
label_1e35b0:
    if (ctx->pc == 0x1E35B0u) {
        ctx->pc = 0x1E35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35ACu;
        // 0x1e35b0: 0xc44c0028  lwc1        $f12, 0x28($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35B4u;
        goto label_1e35b4;
    }
    ctx->pc = 0x1E35ACu;
    SET_GPR_U32(ctx, 31, 0x1E35B4u);
    ctx->pc = 0x1E35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35ACu;
    // 0x1e35b0: 0xc44c0028  lwc1        $f12, 0x28($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E35ACu, 0x1E35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35B4u;
label_1e35b4:
    // 0x1e35b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e35b8:
    // 0x1e35b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e35b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e35bc:
    // 0x1e35bc: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1e35bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e35c0:
    // 0x1e35c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1e35c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e35c4:
    // 0x1e35c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e35c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e35c8:
    // 0x1e35c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e35cc:
    if (ctx->pc == 0x1E35CCu) {
        ctx->pc = 0x1E35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35C8u;
        // 0x1e35cc: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35D0u;
        goto label_1e35d0;
    }
    ctx->pc = 0x1E35C8u;
    {
        const bool branch_taken_0x1e35c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35C8u;
        // 0x1e35cc: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35c8) {
            ctx->pc = 0x1E35D8u;
            goto label_1e35d8;
        }
    }
    ctx->pc = 0x1E35D0u;
label_1e35d0:
    // 0x1e35d0: 0xe6610040  swc1        $f1, 0x40($s3)
    ctx->pc = 0x1e35d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_1e35d4:
    // 0x1e35d4: 0x0  nop
    ctx->pc = 0x1e35d4u;
    // NOP
label_1e35d8:
    // 0x1e35d8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e35d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e35dc:
    // 0x1e35dc: 0xc078ba8  jal         func_1E2EA0
label_1e35e0:
    if (ctx->pc == 0x1E35E0u) {
        ctx->pc = 0x1E35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35DCu;
        // 0x1e35e0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35E4u;
        goto label_1e35e4;
    }
    ctx->pc = 0x1E35DCu;
    SET_GPR_U32(ctx, 31, 0x1E35E4u);
    ctx->pc = 0x1E35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35DCu;
    // 0x1e35e0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E35DCu, 0x1E35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35E4u;
label_1e35e4:
    // 0x1e35e4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e35e8:
    // 0x1e35e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e35e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e35ec:
    // 0x1e35ec: 0xc07679c  jal         func_1D9E70
label_1e35f0:
    if (ctx->pc == 0x1E35F0u) {
        ctx->pc = 0x1E35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35ECu;
        // 0x1e35f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35F4u;
        goto label_1e35f4;
    }
    ctx->pc = 0x1E35ECu;
    SET_GPR_U32(ctx, 31, 0x1E35F4u);
    ctx->pc = 0x1E35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35ECu;
    // 0x1e35f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E35ECu, 0x1E35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35F4u;
label_1e35f4:
    // 0x1e35f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e35f8:
    // 0x1e35f8: 0xc078b88  jal         func_1E2E20
label_1e35fc:
    if (ctx->pc == 0x1E35FCu) {
        ctx->pc = 0x1E35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35F8u;
        // 0x1e35fc: 0xc44c0050  lwc1        $f12, 0x50($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3600u;
        goto label_1e3600;
    }
    ctx->pc = 0x1E35F8u;
    SET_GPR_U32(ctx, 31, 0x1E3600u);
    ctx->pc = 0x1E35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35F8u;
    // 0x1e35fc: 0xc44c0050  lwc1        $f12, 0x50($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E35F8u, 0x1E3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3600u;
label_1e3600:
    // 0x1e3600: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3604:
    // 0x1e3604: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1e3604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3608:
    // 0x1e3608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e3608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e360c:
    // 0x1e360c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1e360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1e3610:
    // 0x1e3610: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3614:
    // 0x1e3614: 0xc078b88  jal         func_1E2E20
label_1e3618:
    if (ctx->pc == 0x1E3618u) {
        ctx->pc = 0x1E3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3614u;
        // 0x1e3618: 0xc44c0054  lwc1        $f12, 0x54($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E361Cu;
        goto label_1e361c;
    }
    ctx->pc = 0x1E3614u;
    SET_GPR_U32(ctx, 31, 0x1E361Cu);
    ctx->pc = 0x1E3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3614u;
    // 0x1e3618: 0xc44c0054  lwc1        $f12, 0x54($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E3614u, 0x1E361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E361Cu;
label_1e361c:
    // 0x1e361c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3620:
    // 0x1e3620: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x1e3620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3624:
    // 0x1e3624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e3624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e3628:
    // 0x1e3628: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1e3628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_1e362c:
    // 0x1e362c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3630:
    // 0x1e3630: 0xc078b88  jal         func_1E2E20
label_1e3634:
    if (ctx->pc == 0x1E3634u) {
        ctx->pc = 0x1E3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3630u;
        // 0x1e3634: 0xc44c0058  lwc1        $f12, 0x58($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3638u;
        goto label_1e3638;
    }
    ctx->pc = 0x1E3630u;
    SET_GPR_U32(ctx, 31, 0x1E3638u);
    ctx->pc = 0x1E3634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3630u;
    // 0x1e3634: 0xc44c0058  lwc1        $f12, 0x58($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E3630u, 0x1E3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3638u;
label_1e3638:
    // 0x1e3638: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e363c:
    // 0x1e363c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1e363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e3640:
    // 0x1e3640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e3644:
    // 0x1e3644: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e3644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e3648:
    // 0x1e3648: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e3648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e364c:
    // 0x1e364c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1e364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3650:
    // 0x1e3650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e3650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e3654:
    // 0x1e3654: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x1e3654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_1e3658:
    // 0x1e3658: 0xc0767a8  jal         func_1D9EA0
label_1e365c:
    if (ctx->pc == 0x1E365Cu) {
        ctx->pc = 0x1E365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3658u;
        // 0x1e365c: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3660u;
        goto label_1e3660;
    }
    ctx->pc = 0x1E3658u;
    SET_GPR_U32(ctx, 31, 0x1E3660u);
    ctx->pc = 0x1E365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3658u;
    // 0x1e365c: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x1E3658u, 0x1E3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3660u;
label_1e3660:
    // 0x1e3660: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3664:
    // 0x1e3664: 0xc078b88  jal         func_1E2E20
label_1e3668:
    if (ctx->pc == 0x1E3668u) {
        ctx->pc = 0x1E3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3664u;
        // 0x1e3668: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E366Cu;
        goto label_1e366c;
    }
    ctx->pc = 0x1E3664u;
    SET_GPR_U32(ctx, 31, 0x1E366Cu);
    ctx->pc = 0x1E3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3664u;
    // 0x1e3668: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E3664u, 0x1E366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E366Cu;
label_1e366c:
    // 0x1e366c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3670:
    // 0x1e3670: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1e3670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e3674:
    // 0x1e3674: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e3674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3678:
    // 0x1e3678: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1e3678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e367c:
    // 0x1e367c: 0xc076690  jal         func_1D9A40
label_1e3680:
    if (ctx->pc == 0x1E3680u) {
        ctx->pc = 0x1E3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E367Cu;
        // 0x1e3680: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3684u;
        goto label_1e3684;
    }
    ctx->pc = 0x1E367Cu;
    SET_GPR_U32(ctx, 31, 0x1E3684u);
    ctx->pc = 0x1E3680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E367Cu;
    // 0x1e3680: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E367Cu, 0x1E3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3684u;
label_1e3684:
    // 0x1e3684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e3684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3688:
    // 0x1e3688: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1e3688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e368c:
    // 0x1e368c: 0xc0766a8  jal         func_1D9AA0
label_1e3690:
    if (ctx->pc == 0x1E3690u) {
        ctx->pc = 0x1E3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E368Cu;
        // 0x1e3690: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3694u;
        goto label_1e3694;
    }
    ctx->pc = 0x1E368Cu;
    SET_GPR_U32(ctx, 31, 0x1E3694u);
    ctx->pc = 0x1E3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E368Cu;
    // 0x1e3690: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E368Cu, 0x1E3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3694u;
label_1e3694:
    // 0x1e3694: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3698:
    // 0x1e3698: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1e369c:
    // 0x1e369c: 0xc078e98  jal         func_1E3A60
label_1e36a0:
    if (ctx->pc == 0x1E36A0u) {
        ctx->pc = 0x1E36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E369Cu;
        // 0x1e36a0: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E36A4u;
        goto label_1e36a4;
    }
    ctx->pc = 0x1E369Cu;
    SET_GPR_U32(ctx, 31, 0x1E36A4u);
    ctx->pc = 0x1E36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E369Cu;
    // 0x1e36a0: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x1E369Cu, 0x1E36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36A4u;
label_1e36a4:
    // 0x1e36a4: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x1e36a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_1e36a8:
    // 0x1e36a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e36ac:
    // 0x1e36ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e36b0:
    // 0x1e36b0: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x1e36b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
label_1e36b4:
    // 0x1e36b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e36b8:
    // 0x1e36b8: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x1e36b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_1e36bc:
    // 0x1e36bc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e36bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e36c0:
    // 0x1e36c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e36c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e36c4:
    // 0x1e36c4: 0x0  nop
    ctx->pc = 0x1e36c4u;
    // NOP
label_1e36c8:
    // 0x1e36c8: 0x0  nop
    ctx->pc = 0x1e36c8u;
    // NOP
label_1e36cc:
    // 0x1e36cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1e36ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e36d0:
    // 0x1e36d0: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x1e36d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
label_1e36d4:
    // 0x1e36d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e36d8:
    // 0x1e36d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1e36d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1e36dc:
    // 0x1e36dc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e36dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e36e0:
    // 0x1e36e0: 0x1440ff3d  bnez        $v0, . + 4 + (-0xC3 << 2)
label_1e36e4:
    if (ctx->pc == 0x1E36E4u) {
        ctx->pc = 0x1E36E8u;
        goto label_1e36e8;
    }
    ctx->pc = 0x1E36E0u;
    {
        const bool branch_taken_0x1e36e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e36e0) {
            ctx->pc = 0x1E33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33d8;
        }
    }
    ctx->pc = 0x1E36E8u;
label_1e36e8:
    // 0x1e36e8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e36ec:
    // 0x1e36ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e36ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e36f0:
    // 0x1e36f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e36f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e36f4:
    // 0x1e36f4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e36f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e36f8:
    // 0x1e36f8: 0x10200099  beqz        $at, . + 4 + (0x99 << 2)
label_1e36fc:
    if (ctx->pc == 0x1E36FCu) {
        ctx->pc = 0x1E36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36F8u;
        // 0x1e36fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3700u;
        goto label_1e3700;
    }
    ctx->pc = 0x1E36F8u;
    {
        const bool branch_taken_0x1e36f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36F8u;
        // 0x1e36fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36f8) {
            ctx->pc = 0x1E3960u;
            goto label_1e3960;
        }
    }
    ctx->pc = 0x1E3700u;
label_1e3700:
    // 0x1e3700: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e3700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3704:
    // 0x1e3704: 0x0  nop
    ctx->pc = 0x1e3704u;
    // NOP
label_1e3708:
    // 0x1e3708: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e370c:
    // 0x1e370c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e3710:
    // 0x1e3710: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x1e3710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1e3714:
    // 0x1e3714: 0x86640044  lh          $a0, 0x44($s3)
    ctx->pc = 0x1e3714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_1e3718:
    // 0x1e3718: 0x1082008b  beq         $a0, $v0, . + 4 + (0x8B << 2)
label_1e371c:
    if (ctx->pc == 0x1E371Cu) {
        ctx->pc = 0x1E3720u;
        goto label_1e3720;
    }
    ctx->pc = 0x1E3718u;
    {
        const bool branch_taken_0x1e3718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3718) {
            ctx->pc = 0x1E3948u;
            goto label_1e3948;
        }
    }
    ctx->pc = 0x1E3720u;
label_1e3720:
    // 0x1e3720: 0x86660046  lh          $a2, 0x46($s3)
    ctx->pc = 0x1e3720u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e3724:
    // 0x1e3724: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_1e3728:
    if (ctx->pc == 0x1E3728u) {
        ctx->pc = 0x1E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3724u;
        // 0x1e3728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E372Cu;
        goto label_1e372c;
    }
    ctx->pc = 0x1E3724u;
    {
        const bool branch_taken_0x1e3724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3724u;
        // 0x1e3728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3724) {
            ctx->pc = 0x1E3740u;
            goto label_1e3740;
        }
    }
    ctx->pc = 0x1E372Cu;
label_1e372c:
    // 0x1e372c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e3730:
    // 0x1e3730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3734:
    // 0x1e3734: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e3738:
    if (ctx->pc == 0x1E3738u) {
        ctx->pc = 0x1E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3734u;
        // 0x1e3738: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E373Cu;
        goto label_1e373c;
    }
    ctx->pc = 0x1E3734u;
    {
        const bool branch_taken_0x1e3734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3734u;
        // 0x1e3738: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3734) {
            ctx->pc = 0x1E374Cu;
            goto label_1e374c;
        }
    }
    ctx->pc = 0x1E373Cu;
label_1e373c:
    // 0x1e373c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3740:
    // 0x1e3740: 0xc0767d4  jal         func_1D9F50
label_1e3744:
    if (ctx->pc == 0x1E3744u) {
        ctx->pc = 0x1E3748u;
        goto label_1e3748;
    }
    ctx->pc = 0x1E3740u;
    SET_GPR_U32(ctx, 31, 0x1E3748u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E3740u, 0x1E3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3748u;
label_1e3748:
    // 0x1e3748: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e374c:
    // 0x1e374c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e3750:
    // 0x1e3750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3754:
    // 0x1e3754: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1e3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e3758:
    // 0x1e3758: 0xc076690  jal         func_1D9A40
label_1e375c:
    if (ctx->pc == 0x1E375Cu) {
        ctx->pc = 0x1E375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3758u;
        // 0x1e375c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3760u;
        goto label_1e3760;
    }
    ctx->pc = 0x1E3758u;
    SET_GPR_U32(ctx, 31, 0x1E3760u);
    ctx->pc = 0x1E375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3758u;
    // 0x1e375c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E3758u, 0x1E3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3760u;
label_1e3760:
    // 0x1e3760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e3760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e3764:
    // 0x1e3764: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e3768:
    // 0x1e3768: 0xc0766a8  jal         func_1D9AA0
label_1e376c:
    if (ctx->pc == 0x1E376Cu) {
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3770u;
        goto label_1e3770;
    }
    ctx->pc = 0x1E3768u;
    SET_GPR_U32(ctx, 31, 0x1E3770u);
    ctx->pc = 0x1E376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3768u;
    // 0x1e376c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E3768u, 0x1E3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3770u;
label_1e3770:
    // 0x1e3770: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3774:
    // 0x1e3774: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x1e3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3778:
    // 0x1e3778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e377c:
    // 0x1e377c: 0xc442002c  lwc1        $f2, 0x2C($v0)
    ctx->pc = 0x1e377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3780:
    // 0x1e3780: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e3780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e3784:
    // 0x1e3784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3788:
    // 0x1e3788: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e378c:
    if (ctx->pc == 0x1E378Cu) {
        ctx->pc = 0x1E378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3788u;
        // 0x1e378c: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3790u;
        goto label_1e3790;
    }
    ctx->pc = 0x1E3788u;
    {
        const bool branch_taken_0x1e3788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3788u;
        // 0x1e378c: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3788) {
            ctx->pc = 0x1E3798u;
            goto label_1e3798;
        }
    }
    ctx->pc = 0x1E3790u;
label_1e3790:
    // 0x1e3790: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x1e3790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_1e3794:
    // 0x1e3794: 0x0  nop
    ctx->pc = 0x1e3794u;
    // NOP
label_1e3798:
    // 0x1e3798: 0x8665004a  lh          $a1, 0x4A($s3)
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
label_1e379c:
    // 0x1e379c: 0x86640044  lh          $a0, 0x44($s3)
    ctx->pc = 0x1e379cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_1e37a0:
    // 0x1e37a0: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x1e37a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e37a4:
    // 0x1e37a4: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_1e37a8:
    if (ctx->pc == 0x1E37A8u) {
        ctx->pc = 0x1E37ACu;
        goto label_1e37ac;
    }
    ctx->pc = 0x1E37A4u;
    {
        const bool branch_taken_0x1e37a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e37a4) {
            ctx->pc = 0x1E3820u;
            goto label_1e3820;
        }
    }
    ctx->pc = 0x1E37ACu;
label_1e37ac:
    // 0x1e37ac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e37b0:
    // 0x1e37b0: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x1e37b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
label_1e37b4:
    // 0x1e37b4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e37b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1e37b8:
    // 0x1e37b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e37bc:
    if (ctx->pc == 0x1E37BCu) {
        ctx->pc = 0x1E37C0u;
        goto label_1e37c0;
    }
    ctx->pc = 0x1E37B8u;
    {
        const bool branch_taken_0x1e37b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e37b8) {
            ctx->pc = 0x1E37D0u;
            goto label_1e37d0;
        }
    }
    ctx->pc = 0x1E37C0u;
label_1e37c0:
    // 0x1e37c0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e37c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e37c4:
    // 0x1e37c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1e37c8:
    if (ctx->pc == 0x1E37C8u) {
        ctx->pc = 0x1E37CCu;
        goto label_1e37cc;
    }
    ctx->pc = 0x1E37C4u;
    {
        const bool branch_taken_0x1e37c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e37c4) {
            ctx->pc = 0x1E3820u;
            goto label_1e3820;
        }
    }
    ctx->pc = 0x1E37CCu;
label_1e37cc:
    // 0x1e37cc: 0x0  nop
    ctx->pc = 0x1e37ccu;
    // NOP
label_1e37d0:
    // 0x1e37d0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1e37d4:
    if (ctx->pc == 0x1E37D4u) {
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0x5343c  dsll32      $a2, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37D8u;
        goto label_1e37d8;
    }
    ctx->pc = 0x1E37D0u;
    {
        const bool branch_taken_0x1e37d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0x5343c  dsll32      $a2, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37d0) {
            ctx->pc = 0x1E37ECu;
            goto label_1e37ec;
        }
    }
    ctx->pc = 0x1E37D8u;
label_1e37d8:
    // 0x1e37d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e37dc:
    // 0x1e37dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e37dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e37e0:
    // 0x1e37e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e37e4:
    if (ctx->pc == 0x1E37E4u) {
        ctx->pc = 0x1E37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E0u;
        // 0x1e37e4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37E8u;
        goto label_1e37e8;
    }
    ctx->pc = 0x1E37E0u;
    {
        const bool branch_taken_0x1e37e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E0u;
        // 0x1e37e4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37e0) {
            ctx->pc = 0x1E3804u;
            goto label_1e3804;
        }
    }
    ctx->pc = 0x1E37E8u;
label_1e37e8:
    // 0x1e37e8: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x1e37e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_1e37ec:
    // 0x1e37ec: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1e37ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_1e37f0:
    // 0x1e37f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e37f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e37f4:
    // 0x1e37f4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1e37f4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1e37f8:
    // 0x1e37f8: 0xc0767d4  jal         func_1D9F50
label_1e37fc:
    if (ctx->pc == 0x1E37FCu) {
        ctx->pc = 0x1E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F8u;
        // 0x1e37fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3800u;
        goto label_1e3800;
    }
    ctx->pc = 0x1E37F8u;
    SET_GPR_U32(ctx, 31, 0x1E3800u);
    ctx->pc = 0x1E37FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E37F8u;
    // 0x1e37fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E37F8u, 0x1E3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3800u;
label_1e3800:
    // 0x1e3800: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3804:
    // 0x1e3804: 0xc441007c  lwc1        $f1, 0x7C($v0)
    ctx->pc = 0x1e3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3808:
    // 0x1e3808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e380c:
    // 0x1e380c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e380cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3810:
    // 0x1e3810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e3810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e3814:
    // 0x1e3814: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e3814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e3818:
    // 0x1e3818: 0x0  nop
    ctx->pc = 0x1e3818u;
    // NOP
label_1e381c:
    // 0x1e381c: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1e381cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1e3820:
    // 0x1e3820: 0x8665004c  lh          $a1, 0x4C($s3)
    ctx->pc = 0x1e3820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 76)));
label_1e3824:
    // 0x1e3824: 0x86640044  lh          $a0, 0x44($s3)
    ctx->pc = 0x1e3824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_1e3828:
    // 0x1e3828: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1e3828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e382c:
    // 0x1e382c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1e3830:
    if (ctx->pc == 0x1E3830u) {
        ctx->pc = 0x1E3834u;
        goto label_1e3834;
    }
    ctx->pc = 0x1E382Cu;
    {
        const bool branch_taken_0x1e382c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e382c) {
            ctx->pc = 0x1E38F0u;
            goto label_1e38f0;
        }
    }
    ctx->pc = 0x1E3834u;
label_1e3834:
    // 0x1e3834: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3838:
    // 0x1e3838: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x1e3838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
label_1e383c:
    // 0x1e383c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1e3840:
    // 0x1e3840: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e3844:
    if (ctx->pc == 0x1E3844u) {
        ctx->pc = 0x1E3848u;
        goto label_1e3848;
    }
    ctx->pc = 0x1E3840u;
    {
        const bool branch_taken_0x1e3840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3840) {
            ctx->pc = 0x1E3890u;
            goto label_1e3890;
        }
    }
    ctx->pc = 0x1E3848u;
label_1e3848:
    // 0x1e3848: 0x86660046  lh          $a2, 0x46($s3)
    ctx->pc = 0x1e3848u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e384c:
    // 0x1e384c: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1e3850:
    if (ctx->pc == 0x1E3850u) {
        ctx->pc = 0x1E3854u;
        goto label_1e3854;
    }
    ctx->pc = 0x1E384Cu;
    {
        const bool branch_taken_0x1e384c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e384c) {
            ctx->pc = 0x1E3864u;
            goto label_1e3864;
        }
    }
    ctx->pc = 0x1E3854u;
label_1e3854:
    // 0x1e3854: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e3858:
    // 0x1e3858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e385c:
    // 0x1e385c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e3860:
    if (ctx->pc == 0x1E3860u) {
        ctx->pc = 0x1E3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E385Cu;
        // 0x1e3860: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3864u;
        goto label_1e3864;
    }
    ctx->pc = 0x1E385Cu;
    {
        const bool branch_taken_0x1e385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E385Cu;
        // 0x1e3860: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e385c) {
            ctx->pc = 0x1E3870u;
            goto label_1e3870;
        }
    }
    ctx->pc = 0x1E3864u;
label_1e3864:
    // 0x1e3864: 0xc0767d4  jal         func_1D9F50
label_1e3868:
    if (ctx->pc == 0x1E3868u) {
        ctx->pc = 0x1E386Cu;
        goto label_1e386c;
    }
    ctx->pc = 0x1E3864u;
    SET_GPR_U32(ctx, 31, 0x1E386Cu);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E3864u, 0x1E386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E386Cu;
label_1e386c:
    // 0x1e386c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3870:
    // 0x1e3870: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e3870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e3874:
    // 0x1e3874: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1e3874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1e3878:
    // 0x1e3878: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x1e3878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1e387c:
    // 0x1e387c: 0xc0767f4  jal         func_1D9FD0
label_1e3880:
    if (ctx->pc == 0x1E3880u) {
        ctx->pc = 0x1E3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E387Cu;
        // 0x1e3880: 0x24460080  addiu       $a2, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3884u;
        goto label_1e3884;
    }
    ctx->pc = 0x1E387Cu;
    SET_GPR_U32(ctx, 31, 0x1E3884u);
    ctx->pc = 0x1E3880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E387Cu;
    // 0x1e3880: 0x24460080  addiu       $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x1E387Cu, 0x1E3884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3884u;
label_1e3884:
    // 0x1e3884: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e3888:
    if (ctx->pc == 0x1E3888u) {
        ctx->pc = 0x1E388Cu;
        goto label_1e388c;
    }
    ctx->pc = 0x1E3884u;
    {
        const bool branch_taken_0x1e3884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3884) {
            ctx->pc = 0x1E38F0u;
            goto label_1e38f0;
        }
    }
    ctx->pc = 0x1E388Cu;
label_1e388c:
    // 0x1e388c: 0x0  nop
    ctx->pc = 0x1e388cu;
    // NOP
label_1e3890:
    // 0x1e3890: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e3890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e3894:
    // 0x1e3894: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1e3898:
    if (ctx->pc == 0x1E3898u) {
        ctx->pc = 0x1E389Cu;
        goto label_1e389c;
    }
    ctx->pc = 0x1E3894u;
    {
        const bool branch_taken_0x1e3894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3894) {
            ctx->pc = 0x1E38F0u;
            goto label_1e38f0;
        }
    }
    ctx->pc = 0x1E389Cu;
label_1e389c:
    // 0x1e389c: 0x86660046  lh          $a2, 0x46($s3)
    ctx->pc = 0x1e389cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e38a0:
    // 0x1e38a0: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1e38a4:
    if (ctx->pc == 0x1E38A4u) {
        ctx->pc = 0x1E38A8u;
        goto label_1e38a8;
    }
    ctx->pc = 0x1E38A0u;
    {
        const bool branch_taken_0x1e38a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e38a0) {
            ctx->pc = 0x1E38B8u;
            goto label_1e38b8;
        }
    }
    ctx->pc = 0x1E38A8u;
label_1e38a8:
    // 0x1e38a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e38ac:
    // 0x1e38ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e38acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e38b0:
    // 0x1e38b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e38b4:
    if (ctx->pc == 0x1E38B4u) {
        ctx->pc = 0x1E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B0u;
        // 0x1e38b4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38B8u;
        goto label_1e38b8;
    }
    ctx->pc = 0x1E38B0u;
    {
        const bool branch_taken_0x1e38b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38B0u;
        // 0x1e38b4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b0) {
            ctx->pc = 0x1E38C4u;
            goto label_1e38c4;
        }
    }
    ctx->pc = 0x1E38B8u;
label_1e38b8:
    // 0x1e38b8: 0xc0767d4  jal         func_1D9F50
label_1e38bc:
    if (ctx->pc == 0x1E38BCu) {
        ctx->pc = 0x1E38C0u;
        goto label_1e38c0;
    }
    ctx->pc = 0x1E38B8u;
    SET_GPR_U32(ctx, 31, 0x1E38C0u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E38B8u, 0x1E38C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38C0u;
label_1e38c0:
    // 0x1e38c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e38c4:
    // 0x1e38c4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e38c8:
    // 0x1e38c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e38c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e38cc:
    // 0x1e38cc: 0x0  nop
    ctx->pc = 0x1e38ccu;
    // NOP
label_1e38d0:
    // 0x1e38d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e38d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e38d4:
    // 0x1e38d4: 0xc461007c  lwc1        $f1, 0x7C($v1)
    ctx->pc = 0x1e38d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e38d8:
    // 0x1e38d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e38d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e38dc:
    // 0x1e38dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e38dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e38e0:
    // 0x1e38e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e38e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e38e4:
    // 0x1e38e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e38e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e38e8:
    // 0x1e38e8: 0x0  nop
    ctx->pc = 0x1e38e8u;
    // NOP
label_1e38ec:
    // 0x1e38ec: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1e38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_1e38f0:
    // 0x1e38f0: 0xc0743c0  jal         func_1D0F00
label_1e38f4:
    if (ctx->pc == 0x1E38F4u) {
        ctx->pc = 0x1E38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38F0u;
        // 0x1e38f4: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38F8u;
        goto label_1e38f8;
    }
    ctx->pc = 0x1E38F0u;
    SET_GPR_U32(ctx, 31, 0x1E38F8u);
    ctx->pc = 0x1E38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38F0u;
    // 0x1e38f4: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E38F0u, 0x1E38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38F8u;
label_1e38f8:
    // 0x1e38f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e38fc:
    if (ctx->pc == 0x1E38FCu) {
        ctx->pc = 0x1E3900u;
        goto label_1e3900;
    }
    ctx->pc = 0x1E38F8u;
    {
        const bool branch_taken_0x1e38f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e38f8) {
            ctx->pc = 0x1E3910u;
            goto label_1e3910;
        }
    }
    ctx->pc = 0x1E3900u;
label_1e3900:
    // 0x1e3900: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e3900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e3904:
    // 0x1e3904: 0x10000010  b           . + 4 + (0x10 << 2)
label_1e3908:
    if (ctx->pc == 0x1E3908u) {
        ctx->pc = 0x1E3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3904u;
        // 0x1e3908: 0xa6620044  sh          $v0, 0x44($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E390Cu;
        goto label_1e390c;
    }
    ctx->pc = 0x1E3904u;
    {
        const bool branch_taken_0x1e3904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3904u;
        // 0x1e3908: 0xa6620044  sh          $v0, 0x44($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3904) {
            ctx->pc = 0x1E3948u;
            goto label_1e3948;
        }
    }
    ctx->pc = 0x1E390Cu;
label_1e390c:
    // 0x1e390c: 0x0  nop
    ctx->pc = 0x1e390cu;
    // NOP
label_1e3910:
    // 0x1e3910: 0x86620044  lh          $v0, 0x44($s3)
    ctx->pc = 0x1e3910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_1e3914:
    // 0x1e3914: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e3918:
    // 0x1e3918: 0xa6620044  sh          $v0, 0x44($s3)
    ctx->pc = 0x1e3918u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
label_1e391c:
    // 0x1e391c: 0x86630044  lh          $v1, 0x44($s3)
    ctx->pc = 0x1e391cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_1e3920:
    // 0x1e3920: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e3924:
    // 0x1e3924: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1e3924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e3928:
    // 0x1e3928: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1e392c:
    if (ctx->pc == 0x1E392Cu) {
        ctx->pc = 0x1E3930u;
        goto label_1e3930;
    }
    ctx->pc = 0x1E3928u;
    {
        const bool branch_taken_0x1e3928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3928) {
            ctx->pc = 0x1E3940u;
            goto label_1e3940;
        }
    }
    ctx->pc = 0x1E3930u;
label_1e3930:
    // 0x1e3930: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e3930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e3934:
    // 0x1e3934: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e3938:
    if (ctx->pc == 0x1E3938u) {
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3934u;
        // 0x1e3938: 0xa6620044  sh          $v0, 0x44($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E393Cu;
        goto label_1e393c;
    }
    ctx->pc = 0x1E3934u;
    {
        const bool branch_taken_0x1e3934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3934u;
        // 0x1e3938: 0xa6620044  sh          $v0, 0x44($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3934) {
            ctx->pc = 0x1E3948u;
            goto label_1e3948;
        }
    }
    ctx->pc = 0x1E393Cu;
label_1e393c:
    // 0x1e393c: 0x0  nop
    ctx->pc = 0x1e393cu;
    // NOP
label_1e3940:
    // 0x1e3940: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e3944:
    // 0x1e3944: 0x0  nop
    ctx->pc = 0x1e3944u;
    // NOP
label_1e3948:
    // 0x1e3948: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e394c:
    // 0x1e394c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e394cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e3950:
    // 0x1e3950: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e3954:
    // 0x1e3954: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e3954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3958:
    // 0x1e3958: 0x1440ff6b  bnez        $v0, . + 4 + (-0x95 << 2)
label_1e395c:
    if (ctx->pc == 0x1E395Cu) {
        ctx->pc = 0x1E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3958u;
        // 0x1e395c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3960u;
        goto label_1e3960;
    }
    ctx->pc = 0x1E3958u;
    {
        const bool branch_taken_0x1e3958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3958u;
        // 0x1e395c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3958) {
            ctx->pc = 0x1E3708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3708;
        }
    }
    ctx->pc = 0x1E3960u;
label_1e3960:
    // 0x1e3960: 0xa2120039  sb          $s2, 0x39($s0)
    ctx->pc = 0x1e3960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 18));
label_1e3964:
    // 0x1e3964: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e3968:
    // 0x1e3968: 0x78420060  lq          $v0, 0x60($v0)
    ctx->pc = 0x1e3968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 96)));
label_1e396c:
    // 0x1e396c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e396cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e3970:
    // 0x1e3970: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e3970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3974:
    // 0x1e3974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e3978:
    // 0x1e3978: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e3978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e397c:
    // 0x1e397c: 0x92030039  lbu         $v1, 0x39($s0)
    ctx->pc = 0x1e397cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_1e3980:
    // 0x1e3980: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1e3980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e3984:
    // 0x1e3984: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e3984u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e3988:
    // 0x1e3988: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e3988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e398c:
    // 0x1e398c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e3990:
    // 0x1e3990: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e3994:
    // 0x1e3994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1e3994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e3998:
    // 0x1e3998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e399c:
    // 0x1e399c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e399cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e39a0:
    // 0x1e39a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e39a4:
    if (ctx->pc == 0x1E39A4u) {
        ctx->pc = 0x1E39A8u;
        goto label_1e39a8;
    }
    ctx->pc = 0x1E39A0u;
    {
        const bool branch_taken_0x1e39a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39a0) {
            ctx->pc = 0x1E39C0u;
            goto label_1e39c0;
        }
    }
    ctx->pc = 0x1E39A8u;
label_1e39a8:
    // 0x1e39a8: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e39a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e39ac:
    // 0x1e39ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e39acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e39b0:
    // 0x1e39b0: 0x320f809  jalr        $t9
label_1e39b4:
    if (ctx->pc == 0x1E39B4u) {
        ctx->pc = 0x1E39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39B0u;
        // 0x1e39b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39B8u;
        goto label_1e39b8;
    }
    ctx->pc = 0x1E39B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E39B8u);
        ctx->pc = 0x1E39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39B0u;
        // 0x1e39b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E39B0u, 0x1E39B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E39B8u;
label_1e39b8:
    // 0x1e39b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e39bc:
    if (ctx->pc == 0x1E39BCu) {
        ctx->pc = 0x1E39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39B8u;
        // 0x1e39bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39C0u;
        goto label_1e39c0;
    }
    ctx->pc = 0x1E39B8u;
    {
        const bool branch_taken_0x1e39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39B8u;
        // 0x1e39bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39b8) {
            ctx->pc = 0x1E3A38u;
            goto label_1e3a38;
        }
    }
    ctx->pc = 0x1E39C0u;
label_1e39c0:
    // 0x1e39c0: 0x8603003a  lh          $v1, 0x3A($s0)
    ctx->pc = 0x1e39c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_1e39c4:
    // 0x1e39c4: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e39c8:
    // 0x1e39c8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1e39cc:
    if (ctx->pc == 0x1E39CCu) {
        ctx->pc = 0x1E39D0u;
        goto label_1e39d0;
    }
    ctx->pc = 0x1E39C8u;
    {
        const bool branch_taken_0x1e39c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e39c8) {
            ctx->pc = 0x1E39F0u;
            goto label_1e39f0;
        }
    }
    ctx->pc = 0x1E39D0u;
label_1e39d0:
    // 0x1e39d0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e39d4:
    // 0x1e39d4: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e39d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e39d8:
    // 0x1e39d8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1e39dc:
    if (ctx->pc == 0x1E39DCu) {
        ctx->pc = 0x1E39E0u;
        goto label_1e39e0;
    }
    ctx->pc = 0x1E39D8u;
    {
        const bool branch_taken_0x1e39d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e39d8) {
            ctx->pc = 0x1E3A30u;
            goto label_1e3a30;
        }
    }
    ctx->pc = 0x1E39E0u;
label_1e39e0:
    // 0x1e39e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e39e4:
    // 0x1e39e4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e39e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e39e8:
    // 0x1e39e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e39ec:
    if (ctx->pc == 0x1E39ECu) {
        ctx->pc = 0x1E39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39E8u;
        // 0x1e39ec: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E39F0u;
        goto label_1e39f0;
    }
    ctx->pc = 0x1E39E8u;
    {
        const bool branch_taken_0x1e39e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39E8u;
        // 0x1e39ec: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39e8) {
            ctx->pc = 0x1E3A30u;
            goto label_1e3a30;
        }
    }
    ctx->pc = 0x1E39F0u;
label_1e39f0:
    // 0x1e39f0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e39f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e39f4:
    // 0x1e39f4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e39f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e39f8:
    // 0x1e39f8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1e39fc:
    if (ctx->pc == 0x1E39FCu) {
        ctx->pc = 0x1E3A00u;
        goto label_1e3a00;
    }
    ctx->pc = 0x1E39F8u;
    {
        const bool branch_taken_0x1e39f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39f8) {
            ctx->pc = 0x1E3A30u;
            goto label_1e3a30;
        }
    }
    ctx->pc = 0x1E3A00u;
label_1e3a00:
    // 0x1e3a00: 0x28427ff1  slti        $v0, $v0, 0x7FF1
    ctx->pc = 0x1e3a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e3a04:
    // 0x1e3a04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e3a08:
    // 0x1e3a08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3a0c:
    // 0x1e3a0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e3a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e3a10:
    // 0x1e3a10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e3a14:
    if (ctx->pc == 0x1E3A14u) {
        ctx->pc = 0x1E3A18u;
        goto label_1e3a18;
    }
    ctx->pc = 0x1E3A10u;
    {
        const bool branch_taken_0x1e3a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a10) {
            ctx->pc = 0x1E3A30u;
            goto label_1e3a30;
        }
    }
    ctx->pc = 0x1E3A18u;
label_1e3a18:
    // 0x1e3a18: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e3a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e3a1c:
    // 0x1e3a1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e3a20:
    // 0x1e3a20: 0x320f809  jalr        $t9
label_1e3a24:
    if (ctx->pc == 0x1E3A24u) {
        ctx->pc = 0x1E3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A20u;
        // 0x1e3a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A28u;
        goto label_1e3a28;
    }
    ctx->pc = 0x1E3A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3A28u);
        ctx->pc = 0x1E3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A20u;
        // 0x1e3a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A20u, 0x1E3A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3A28u;
label_1e3a28:
    // 0x1e3a28: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3a2c:
    if (ctx->pc == 0x1E3A2Cu) {
        ctx->pc = 0x1E3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A28u;
        // 0x1e3a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A30u;
        goto label_1e3a30;
    }
    ctx->pc = 0x1E3A28u;
    {
        const bool branch_taken_0x1e3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A28u;
        // 0x1e3a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a28) {
            ctx->pc = 0x1E3A38u;
            goto label_1e3a38;
        }
    }
    ctx->pc = 0x1E3A30u;
label_1e3a30:
    // 0x1e3a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3a34:
    // 0x1e3a34: 0x0  nop
    ctx->pc = 0x1e3a34u;
    // NOP
label_1e3a38:
    // 0x1e3a38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e3a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3a3c:
    // 0x1e3a3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e3a3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3a40:
    // 0x1e3a40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e3a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3a44:
    // 0x1e3a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3a48:
    // 0x1e3a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3a4c:
    // 0x1e3a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a50:
    // 0x1e3a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3a54:
    // 0x1e3a54: 0x3e00008  jr          $ra
label_1e3a58:
    if (ctx->pc == 0x1E3A58u) {
        ctx->pc = 0x1E3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A54u;
        // 0x1e3a58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A5Cu;
        goto label_fallthrough_0x1e3a54;
    }
    ctx->pc = 0x1E3A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A54u;
        // 0x1e3a58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3a54:
    ctx->pc = 0x1E3A5Cu;
}
