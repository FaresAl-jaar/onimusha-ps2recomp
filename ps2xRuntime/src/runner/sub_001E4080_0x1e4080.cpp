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

// Function: sub_001E4080
// Address: 0x1e4080 - 0x1e46e4
void sub_001E4080_0x1e4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4080_0x1e4080");
#endif

    switch (ctx->pc) {
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        case 0x1e40d8u: goto label_1e40d8;
        case 0x1e40dcu: goto label_1e40dc;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40e4u: goto label_1e40e4;
        case 0x1e40e8u: goto label_1e40e8;
        case 0x1e40ecu: goto label_1e40ec;
        case 0x1e40f0u: goto label_1e40f0;
        case 0x1e40f4u: goto label_1e40f4;
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4104u: goto label_1e4104;
        case 0x1e4108u: goto label_1e4108;
        case 0x1e410cu: goto label_1e410c;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4114u: goto label_1e4114;
        case 0x1e4118u: goto label_1e4118;
        case 0x1e411cu: goto label_1e411c;
        case 0x1e4120u: goto label_1e4120;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e412cu: goto label_1e412c;
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        case 0x1e41f0u: goto label_1e41f0;
        case 0x1e41f4u: goto label_1e41f4;
        case 0x1e41f8u: goto label_1e41f8;
        case 0x1e41fcu: goto label_1e41fc;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4204u: goto label_1e4204;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e420cu: goto label_1e420c;
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42b8u: goto label_1e42b8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c0u: goto label_1e42c0;
        case 0x1e42c4u: goto label_1e42c4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42ccu: goto label_1e42cc;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        case 0x1e43b8u: goto label_1e43b8;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4428u: goto label_1e4428;
        case 0x1e442cu: goto label_1e442c;
        case 0x1e4430u: goto label_1e4430;
        case 0x1e4434u: goto label_1e4434;
        case 0x1e4438u: goto label_1e4438;
        case 0x1e443cu: goto label_1e443c;
        case 0x1e4440u: goto label_1e4440;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e4448u: goto label_1e4448;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e4450u: goto label_1e4450;
        case 0x1e4454u: goto label_1e4454;
        case 0x1e4458u: goto label_1e4458;
        case 0x1e445cu: goto label_1e445c;
        case 0x1e4460u: goto label_1e4460;
        case 0x1e4464u: goto label_1e4464;
        case 0x1e4468u: goto label_1e4468;
        case 0x1e446cu: goto label_1e446c;
        case 0x1e4470u: goto label_1e4470;
        case 0x1e4474u: goto label_1e4474;
        case 0x1e4478u: goto label_1e4478;
        case 0x1e447cu: goto label_1e447c;
        case 0x1e4480u: goto label_1e4480;
        case 0x1e4484u: goto label_1e4484;
        case 0x1e4488u: goto label_1e4488;
        case 0x1e448cu: goto label_1e448c;
        case 0x1e4490u: goto label_1e4490;
        case 0x1e4494u: goto label_1e4494;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e449cu: goto label_1e449c;
        case 0x1e44a0u: goto label_1e44a0;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e44a8u: goto label_1e44a8;
        case 0x1e44acu: goto label_1e44ac;
        case 0x1e44b0u: goto label_1e44b0;
        case 0x1e44b4u: goto label_1e44b4;
        case 0x1e44b8u: goto label_1e44b8;
        case 0x1e44bcu: goto label_1e44bc;
        case 0x1e44c0u: goto label_1e44c0;
        case 0x1e44c4u: goto label_1e44c4;
        case 0x1e44c8u: goto label_1e44c8;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44d0u: goto label_1e44d0;
        case 0x1e44d4u: goto label_1e44d4;
        case 0x1e44d8u: goto label_1e44d8;
        case 0x1e44dcu: goto label_1e44dc;
        case 0x1e44e0u: goto label_1e44e0;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e44e8u: goto label_1e44e8;
        case 0x1e44ecu: goto label_1e44ec;
        case 0x1e44f0u: goto label_1e44f0;
        case 0x1e44f4u: goto label_1e44f4;
        case 0x1e44f8u: goto label_1e44f8;
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e4508u: goto label_1e4508;
        case 0x1e450cu: goto label_1e450c;
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        case 0x1e453cu: goto label_1e453c;
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4544u: goto label_1e4544;
        case 0x1e4548u: goto label_1e4548;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e4550u: goto label_1e4550;
        case 0x1e4554u: goto label_1e4554;
        case 0x1e4558u: goto label_1e4558;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e4574u: goto label_1e4574;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4580u: goto label_1e4580;
        case 0x1e4584u: goto label_1e4584;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4590u: goto label_1e4590;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e4598u: goto label_1e4598;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45a4u: goto label_1e45a4;
        case 0x1e45a8u: goto label_1e45a8;
        case 0x1e45acu: goto label_1e45ac;
        case 0x1e45b0u: goto label_1e45b0;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45b8u: goto label_1e45b8;
        case 0x1e45bcu: goto label_1e45bc;
        case 0x1e45c0u: goto label_1e45c0;
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e45ccu: goto label_1e45cc;
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45d4u: goto label_1e45d4;
        case 0x1e45d8u: goto label_1e45d8;
        case 0x1e45dcu: goto label_1e45dc;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45e8u: goto label_1e45e8;
        case 0x1e45ecu: goto label_1e45ec;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45f4u: goto label_1e45f4;
        case 0x1e45f8u: goto label_1e45f8;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e4600u: goto label_1e4600;
        case 0x1e4604u: goto label_1e4604;
        case 0x1e4608u: goto label_1e4608;
        case 0x1e460cu: goto label_1e460c;
        case 0x1e4610u: goto label_1e4610;
        case 0x1e4614u: goto label_1e4614;
        case 0x1e4618u: goto label_1e4618;
        case 0x1e461cu: goto label_1e461c;
        case 0x1e4620u: goto label_1e4620;
        case 0x1e4624u: goto label_1e4624;
        case 0x1e4628u: goto label_1e4628;
        case 0x1e462cu: goto label_1e462c;
        case 0x1e4630u: goto label_1e4630;
        case 0x1e4634u: goto label_1e4634;
        case 0x1e4638u: goto label_1e4638;
        case 0x1e463cu: goto label_1e463c;
        case 0x1e4640u: goto label_1e4640;
        case 0x1e4644u: goto label_1e4644;
        case 0x1e4648u: goto label_1e4648;
        case 0x1e464cu: goto label_1e464c;
        case 0x1e4650u: goto label_1e4650;
        case 0x1e4654u: goto label_1e4654;
        case 0x1e4658u: goto label_1e4658;
        case 0x1e465cu: goto label_1e465c;
        case 0x1e4660u: goto label_1e4660;
        case 0x1e4664u: goto label_1e4664;
        case 0x1e4668u: goto label_1e4668;
        case 0x1e466cu: goto label_1e466c;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e4674u: goto label_1e4674;
        case 0x1e4678u: goto label_1e4678;
        case 0x1e467cu: goto label_1e467c;
        case 0x1e4680u: goto label_1e4680;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e468cu: goto label_1e468c;
        case 0x1e4690u: goto label_1e4690;
        case 0x1e4694u: goto label_1e4694;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a0u: goto label_1e46a0;
        case 0x1e46a4u: goto label_1e46a4;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46acu: goto label_1e46ac;
        case 0x1e46b0u: goto label_1e46b0;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46b8u: goto label_1e46b8;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        default: break;
    }

    ctx->pc = 0x1e4080u;

label_1e4080:
    // 0x1e4080: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e4084:
    // 0x1e4084: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e4084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e4088:
    // 0x1e4088: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e408c:
    // 0x1e408c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1e4090:
    // 0x1e4090: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e4094:
    // 0x1e4094: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e4094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e4098:
    // 0x1e4098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e4098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e409c:
    // 0x1e409c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e40a0:
    // 0x1e40a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e40a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e40a4:
    // 0x1e40a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e40a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e40a8:
    // 0x1e40a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e40a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e40ac:
    // 0x1e40ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e40acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e40b0:
    // 0x1e40b0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e40b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e40b4:
    // 0x1e40b4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1e40b8:
    if (ctx->pc == 0x1E40B8u) {
        ctx->pc = 0x1E40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40B4u;
        // 0x1e40b8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40BCu;
        goto label_1e40bc;
    }
    ctx->pc = 0x1E40B4u;
    {
        const bool branch_taken_0x1e40b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40B4u;
        // 0x1e40b8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40b4) {
            ctx->pc = 0x1E40C8u;
            goto label_1e40c8;
        }
    }
    ctx->pc = 0x1E40BCu;
label_1e40bc:
    // 0x1e40bc: 0x1000017e  b           . + 4 + (0x17E << 2)
label_1e40c0:
    if (ctx->pc == 0x1E40C0u) {
        ctx->pc = 0x1E40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40BCu;
        // 0x1e40c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40C4u;
        goto label_1e40c4;
    }
    ctx->pc = 0x1E40BCu;
    {
        const bool branch_taken_0x1e40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40BCu;
        // 0x1e40c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40bc) {
            ctx->pc = 0x1E46B8u;
            goto label_1e46b8;
        }
    }
    ctx->pc = 0x1E40C4u;
label_1e40c4:
    // 0x1e40c4: 0x0  nop
    ctx->pc = 0x1e40c4u;
    // NOP
label_1e40c8:
    // 0x1e40c8: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x1e40c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_1e40cc:
    // 0x1e40cc: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_1e40d0:
    if (ctx->pc == 0x1E40D0u) {
        ctx->pc = 0x1E40D4u;
        goto label_1e40d4;
    }
    ctx->pc = 0x1E40CCu;
    {
        const bool branch_taken_0x1e40cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40cc) {
            ctx->pc = 0x1E4418u;
            goto label_1e4418;
        }
    }
    ctx->pc = 0x1E40D4u;
label_1e40d4:
    // 0x1e40d4: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x1e40d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1e40d8:
    // 0x1e40d8: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e40dc:
    // 0x1e40dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e40e0:
    if (ctx->pc == 0x1E40E0u) {
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40DCu;
        // 0x1e40e0: 0x64082a  slt         $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40E4u;
        goto label_1e40e4;
    }
    ctx->pc = 0x1E40DCu;
    {
        const bool branch_taken_0x1e40dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40DCu;
        // 0x1e40e0: 0x64082a  slt         $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40dc) {
            ctx->pc = 0x1E40F0u;
            goto label_1e40f0;
        }
    }
    ctx->pc = 0x1E40E4u;
label_1e40e4:
    // 0x1e40e4: 0x142000cc  bnez        $at, . + 4 + (0xCC << 2)
label_1e40e8:
    if (ctx->pc == 0x1E40E8u) {
        ctx->pc = 0x1E40ECu;
        goto label_1e40ec;
    }
    ctx->pc = 0x1E40E4u;
    {
        const bool branch_taken_0x1e40e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e40e4) {
            ctx->pc = 0x1E4418u;
            goto label_1e4418;
        }
    }
    ctx->pc = 0x1E40ECu;
label_1e40ec:
    // 0x1e40ec: 0x0  nop
    ctx->pc = 0x1e40ecu;
    // NOP
label_1e40f0:
    // 0x1e40f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e40f4:
    // 0x1e40f4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e40f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e40f8:
    // 0x1e40f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e40fc:
    if (ctx->pc == 0x1E40FCu) {
        ctx->pc = 0x1E4100u;
        goto label_1e4100;
    }
    ctx->pc = 0x1E40F8u;
    {
        const bool branch_taken_0x1e40f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40f8) {
            ctx->pc = 0x1E4120u;
            goto label_1e4120;
        }
    }
    ctx->pc = 0x1E4100u;
label_1e4100:
    // 0x1e4100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e4100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4104:
    // 0x1e4104: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1e4104u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4108:
    // 0x1e4108: 0x0  nop
    ctx->pc = 0x1e4108u;
    // NOP
label_1e410c:
    // 0x1e410c: 0x0  nop
    ctx->pc = 0x1e410cu;
    // NOP
label_1e4110:
    // 0x1e4110: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4110u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4114:
    // 0x1e4114: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
label_1e4118:
    if (ctx->pc == 0x1E4118u) {
        ctx->pc = 0x1E411Cu;
        goto label_1e411c;
    }
    ctx->pc = 0x1E4114u;
    {
        const bool branch_taken_0x1e4114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4114) {
            ctx->pc = 0x1E4418u;
            goto label_1e4418;
        }
    }
    ctx->pc = 0x1E411Cu;
label_1e411c:
    // 0x1e411c: 0x0  nop
    ctx->pc = 0x1e411cu;
    // NOP
label_1e4120:
    // 0x1e4120: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1e4120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1e4124:
    // 0x1e4124: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e4124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4128:
    // 0x1e4128: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
label_1e412c:
    if (ctx->pc == 0x1E412Cu) {
        ctx->pc = 0x1E412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4128u;
        // 0x1e412c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4130u;
        goto label_1e4130;
    }
    ctx->pc = 0x1E4128u;
    {
        const bool branch_taken_0x1e4128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4128u;
        // 0x1e412c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4128) {
            ctx->pc = 0x1E4418u;
            goto label_1e4418;
        }
    }
    ctx->pc = 0x1E4130u;
label_1e4130:
    // 0x1e4130: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x1e4130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_1e4134:
    // 0x1e4134: 0x9205003c  lbu         $a1, 0x3C($s0)
    ctx->pc = 0x1e4134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e4138:
    // 0x1e4138: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e4138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e413c:
    // 0x1e413c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e4140:
    // 0x1e4140: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1e4140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e4144:
    // 0x1e4144: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e4144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e4148:
    // 0x1e4148: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e4148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e414c:
    // 0x1e414c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1e414cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e4150:
    // 0x1e4150: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x1e4150u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e4154:
    // 0x1e4154: 0xa640003a  sh          $zero, 0x3A($s2)
    ctx->pc = 0x1e4154u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 58), (uint16_t)GPR_U32(ctx, 0));
label_1e4158:
    // 0x1e4158: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e415c:
    // 0x1e415c: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x1e415cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_1e4160:
    // 0x1e4160: 0xa642003c  sh          $v0, 0x3C($s2)
    ctx->pc = 0x1e4160u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
label_1e4164:
    // 0x1e4164: 0x86420038  lh          $v0, 0x38($s2)
    ctx->pc = 0x1e4164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_1e4168:
    // 0x1e4168: 0xa642003e  sh          $v0, 0x3E($s2)
    ctx->pc = 0x1e4168u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 2));
label_1e416c:
    // 0x1e416c: 0x8e150030  lw          $s5, 0x30($s0)
    ctx->pc = 0x1e416cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4170:
    // 0x1e4170: 0xc078bac  jal         func_1E2EB0
label_1e4174:
    if (ctx->pc == 0x1E4174u) {
        ctx->pc = 0x1E4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4170u;
        // 0x1e4174: 0x86b10008  lh          $s1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4178u;
        goto label_1e4178;
    }
    ctx->pc = 0x1E4170u;
    SET_GPR_U32(ctx, 31, 0x1E4178u);
    ctx->pc = 0x1E4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4170u;
    // 0x1e4174: 0x86b10008  lh          $s1, 0x8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E4170u, 0x1E4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4178u;
label_1e4178:
    // 0x1e4178: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e4178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1e417c:
    // 0x1e417c: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x1e417cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_1e4180:
    // 0x1e4180: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e4180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e4184:
    // 0x1e4184: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e4184u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e4188:
    // 0x1e4188: 0x0  nop
    ctx->pc = 0x1e4188u;
    // NOP
label_1e418c:
    // 0x1e418c: 0x0  nop
    ctx->pc = 0x1e418cu;
    // NOP
label_1e4190:
    // 0x1e4190: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4190u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4194:
    // 0x1e4194: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e4198:
    // 0x1e4198: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e419c:
    // 0x1e419c: 0xa6420032  sh          $v0, 0x32($s2)
    ctx->pc = 0x1e419cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
label_1e41a0:
    // 0x1e41a0: 0x86420032  lh          $v0, 0x32($s2)
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_1e41a4:
    // 0x1e41a4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_1e41a8:
    if (ctx->pc == 0x1E41A8u) {
        ctx->pc = 0x1E41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41A4u;
        // 0x1e41a8: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E41ACu;
        goto label_1e41ac;
    }
    ctx->pc = 0x1E41A4u;
    {
        const bool branch_taken_0x1e41a4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1E41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41A4u;
        // 0x1e41a8: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41a4) {
            ctx->pc = 0x1E41B4u;
            goto label_1e41b4;
        }
    }
    ctx->pc = 0x1E41ACu;
label_1e41ac:
    // 0x1e41ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e41b0:
    if (ctx->pc == 0x1E41B0u) {
        ctx->pc = 0x1E41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41ACu;
        // 0x1e41b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E41B4u;
        goto label_1e41b4;
    }
    ctx->pc = 0x1E41ACu;
    {
        const bool branch_taken_0x1e41ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41ACu;
        // 0x1e41b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41ac) {
            ctx->pc = 0x1E41C4u;
            goto label_1e41c4;
        }
    }
    ctx->pc = 0x1E41B4u;
label_1e41b4:
    // 0x1e41b4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e41b8:
    if (ctx->pc == 0x1E41B8u) {
        ctx->pc = 0x1E41BCu;
        goto label_1e41bc;
    }
    ctx->pc = 0x1E41B4u;
    {
        const bool branch_taken_0x1e41b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e41b4) {
            ctx->pc = 0x1E41C4u;
            goto label_1e41c4;
        }
    }
    ctx->pc = 0x1E41BCu;
label_1e41bc:
    // 0x1e41bc: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e41c0:
    if (ctx->pc == 0x1E41C0u) {
        ctx->pc = 0x1E41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41BCu;
        // 0x1e41c0: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E41C4u;
        goto label_1e41c4;
    }
    ctx->pc = 0x1E41BCu;
    {
        const bool branch_taken_0x1e41bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41BCu;
        // 0x1e41c0: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41bc) {
            ctx->pc = 0x1E41C4u;
            goto label_1e41c4;
        }
    }
    ctx->pc = 0x1E41C4u;
label_1e41c4:
    // 0x1e41c4: 0xa6420032  sh          $v0, 0x32($s2)
    ctx->pc = 0x1e41c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
label_1e41c8:
    // 0x1e41c8: 0xa6400030  sh          $zero, 0x30($s2)
    ctx->pc = 0x1e41c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 0));
label_1e41cc:
    // 0x1e41cc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1e41d0:
    // 0x1e41d0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e41d4:
    // 0x1e41d4: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x1e41d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e41d8:
    // 0x1e41d8: 0x86420032  lh          $v0, 0x32($s2)
    ctx->pc = 0x1e41d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_1e41dc:
    // 0x1e41dc: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1e41dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_1e41e0:
    // 0x1e41e0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1e41e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1e41e4:
    // 0x1e41e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e41e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e41e8:
    // 0x1e41e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e41e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e41ec:
    // 0x1e41ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e41ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e41f0:
    // 0x1e41f0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1e41f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e41f4:
    // 0x1e41f4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e41f8:
    // 0x1e41f8: 0x0  nop
    ctx->pc = 0x1e41f8u;
    // NOP
label_1e41fc:
    // 0x1e41fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1e41fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4200:
    // 0x1e4200: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e4200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e4204:
    // 0x1e4204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4208:
    // 0x1e4208: 0xa6420048  sh          $v0, 0x48($s2)
    ctx->pc = 0x1e4208u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 72), (uint16_t)GPR_U32(ctx, 2));
label_1e420c:
    // 0x1e420c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4210:
    // 0x1e4210: 0x86440032  lh          $a0, 0x32($s2)
    ctx->pc = 0x1e4210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_1e4214:
    // 0x1e4214: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x1e4214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_1e4218:
    // 0x1e4218: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e4218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1e421c:
    // 0x1e421c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1e421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1e4220:
    // 0x1e4220: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e4220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1e4224:
    // 0x1e4224: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e4224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e4228:
    // 0x1e4228: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x1e4228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e422c:
    // 0x1e422c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1e422cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e4230:
    // 0x1e4230: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e4234:
    // 0x1e4234: 0x0  nop
    ctx->pc = 0x1e4234u;
    // NOP
label_1e4238:
    // 0x1e4238: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e423c:
    // 0x1e423c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e423cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e4240:
    // 0x1e4240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4244:
    // 0x1e4244: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1e4244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e4248:
    // 0x1e4248: 0xa642004a  sh          $v0, 0x4A($s2)
    ctx->pc = 0x1e4248u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 2));
label_1e424c:
    // 0x1e424c: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x1e424cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4250:
    // 0x1e4250: 0xc078b88  jal         func_1E2E20
label_1e4254:
    if (ctx->pc == 0x1E4254u) {
        ctx->pc = 0x1E4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4250u;
        // 0x1e4254: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4258u;
        goto label_1e4258;
    }
    ctx->pc = 0x1E4250u;
    SET_GPR_U32(ctx, 31, 0x1E4258u);
    ctx->pc = 0x1E4254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4250u;
    // 0x1e4254: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4250u, 0x1E4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4258u;
label_1e4258:
    // 0x1e4258: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1e4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e425c:
    // 0x1e425c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e425cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4260:
    // 0x1e4260: 0x0  nop
    ctx->pc = 0x1e4260u;
    // NOP
label_1e4264:
    // 0x1e4264: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x1e4264u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e4268:
    // 0x1e4268: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1e4268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e426c:
    // 0x1e426c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e4270:
    if (ctx->pc == 0x1E4270u) {
        ctx->pc = 0x1E4274u;
        goto label_1e4274;
    }
    ctx->pc = 0x1E426Cu;
    {
        const bool branch_taken_0x1e426c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e426c) {
            ctx->pc = 0x1E4278u;
            goto label_1e4278;
        }
    }
    ctx->pc = 0x1E4274u;
label_1e4274:
    // 0x1e4274: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1e4274u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1e4278:
    // 0x1e4278: 0xc078b88  jal         func_1E2E20
label_1e427c:
    if (ctx->pc == 0x1E427Cu) {
        ctx->pc = 0x1E427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4278u;
        // 0x1e427c: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4280u;
        goto label_1e4280;
    }
    ctx->pc = 0x1E4278u;
    SET_GPR_U32(ctx, 31, 0x1E4280u);
    ctx->pc = 0x1E427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4278u;
    // 0x1e427c: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4278u, 0x1E4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4280u;
label_1e4280:
    // 0x1e4280: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4284:
    // 0x1e4284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e4284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4288:
    // 0x1e4288: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1e4288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1e428c:
    // 0x1e428c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1e428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4290:
    // 0x1e4290: 0xc078ba8  jal         func_1E2EA0
label_1e4294:
    if (ctx->pc == 0x1E4294u) {
        ctx->pc = 0x1E4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4290u;
        // 0x1e4294: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4298u;
        goto label_1e4298;
    }
    ctx->pc = 0x1E4290u;
    SET_GPR_U32(ctx, 31, 0x1E4298u);
    ctx->pc = 0x1E4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4290u;
    // 0x1e4294: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E4290u, 0x1E4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4298u;
label_1e4298:
    // 0x1e4298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e4298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e429c:
    // 0x1e429c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e42a0:
    // 0x1e42a0: 0xc07679c  jal         func_1D9E70
label_1e42a4:
    if (ctx->pc == 0x1E42A4u) {
        ctx->pc = 0x1E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42A0u;
        // 0x1e42a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42A8u;
        goto label_1e42a8;
    }
    ctx->pc = 0x1E42A0u;
    SET_GPR_U32(ctx, 31, 0x1E42A8u);
    ctx->pc = 0x1E42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42A0u;
    // 0x1e42a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E42A0u, 0x1E42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42A8u;
label_1e42a8:
    // 0x1e42a8: 0x86430038  lh          $v1, 0x38($s2)
    ctx->pc = 0x1e42a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_1e42ac:
    // 0x1e42ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e42acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e42b0:
    // 0x1e42b0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1e42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e42b4:
    // 0x1e42b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e42b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e42b8:
    // 0x1e42b8: 0xc078ba8  jal         func_1E2EA0
label_1e42bc:
    if (ctx->pc == 0x1E42BCu) {
        ctx->pc = 0x1E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B8u;
        // 0x1e42bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42C0u;
        goto label_1e42c0;
    }
    ctx->pc = 0x1E42B8u;
    SET_GPR_U32(ctx, 31, 0x1E42C0u);
    ctx->pc = 0x1E42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42B8u;
    // 0x1e42bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E42B8u, 0x1E42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42C0u;
label_1e42c0:
    // 0x1e42c0: 0x86420038  lh          $v0, 0x38($s2)
    ctx->pc = 0x1e42c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_1e42c4:
    // 0x1e42c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e42c8:
    // 0x1e42c8: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x1e42c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e42cc:
    // 0x1e42cc: 0x86430038  lh          $v1, 0x38($s2)
    ctx->pc = 0x1e42ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_1e42d0:
    // 0x1e42d0: 0x8642003e  lh          $v0, 0x3E($s2)
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
label_1e42d4:
    // 0x1e42d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e42d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e42d8:
    // 0x1e42d8: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x1e42d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e42dc:
    // 0x1e42dc: 0x8643003a  lh          $v1, 0x3A($s2)
    ctx->pc = 0x1e42dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
label_1e42e0:
    // 0x1e42e0: 0x8642003c  lh          $v0, 0x3C($s2)
    ctx->pc = 0x1e42e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_1e42e4:
    // 0x1e42e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e42e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e42e8:
    // 0x1e42e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e42ec:
    if (ctx->pc == 0x1E42ECu) {
        ctx->pc = 0x1E42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42E8u;
        // 0x1e42ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42F0u;
        goto label_1e42f0;
    }
    ctx->pc = 0x1E42E8u;
    {
        const bool branch_taken_0x1e42e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42E8u;
        // 0x1e42ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42e8) {
            ctx->pc = 0x1E42F8u;
            goto label_1e42f8;
        }
    }
    ctx->pc = 0x1E42F0u;
label_1e42f0:
    // 0x1e42f0: 0xa642003a  sh          $v0, 0x3A($s2)
    ctx->pc = 0x1e42f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 58), (uint16_t)GPR_U32(ctx, 2));
label_1e42f4:
    // 0x1e42f4: 0x0  nop
    ctx->pc = 0x1e42f4u;
    // NOP
label_1e42f8:
    // 0x1e42f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e42fc:
    // 0x1e42fc: 0xc078b88  jal         func_1E2E20
label_1e4300:
    if (ctx->pc == 0x1E4300u) {
        ctx->pc = 0x1E4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42FCu;
        // 0x1e4300: 0xc44c0040  lwc1        $f12, 0x40($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4304u;
        goto label_1e4304;
    }
    ctx->pc = 0x1E42FCu;
    SET_GPR_U32(ctx, 31, 0x1E4304u);
    ctx->pc = 0x1E4300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42FCu;
    // 0x1e4300: 0xc44c0040  lwc1        $f12, 0x40($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E42FCu, 0x1E4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4304u;
label_1e4304:
    // 0x1e4304: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4308:
    // 0x1e4308: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1e4308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e430c:
    // 0x1e430c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e430cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4310:
    // 0x1e4310: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1e4310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1e4314:
    // 0x1e4314: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4318:
    // 0x1e4318: 0xc078b88  jal         func_1E2E20
label_1e431c:
    if (ctx->pc == 0x1E431Cu) {
        ctx->pc = 0x1E431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4318u;
        // 0x1e431c: 0xc44c0044  lwc1        $f12, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4320u;
        goto label_1e4320;
    }
    ctx->pc = 0x1E4318u;
    SET_GPR_U32(ctx, 31, 0x1E4320u);
    ctx->pc = 0x1E431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4318u;
    // 0x1e431c: 0xc44c0044  lwc1        $f12, 0x44($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4318u, 0x1E4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4320u;
label_1e4320:
    // 0x1e4320: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4324:
    // 0x1e4324: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1e4324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4328:
    // 0x1e4328: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e432c:
    // 0x1e432c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1e432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1e4330:
    // 0x1e4330: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4334:
    // 0x1e4334: 0xc078b88  jal         func_1E2E20
label_1e4338:
    if (ctx->pc == 0x1E4338u) {
        ctx->pc = 0x1E4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4334u;
        // 0x1e4338: 0xc44c0048  lwc1        $f12, 0x48($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E433Cu;
        goto label_1e433c;
    }
    ctx->pc = 0x1E4334u;
    SET_GPR_U32(ctx, 31, 0x1E433Cu);
    ctx->pc = 0x1E4338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4334u;
    // 0x1e4338: 0xc44c0048  lwc1        $f12, 0x48($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4334u, 0x1E433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E433Cu;
label_1e433c:
    // 0x1e433c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4340:
    // 0x1e4340: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e4340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e4344:
    // 0x1e4344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4348:
    // 0x1e4348: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e4348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e434c:
    // 0x1e434c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1e434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4350:
    // 0x1e4350: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4354:
    // 0x1e4354: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1e4354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1e4358:
    // 0x1e4358: 0xc0766dc  jal         func_1D9B70
label_1e435c:
    if (ctx->pc == 0x1E435Cu) {
        ctx->pc = 0x1E435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4358u;
        // 0x1e435c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4360u;
        goto label_1e4360;
    }
    ctx->pc = 0x1E4358u;
    SET_GPR_U32(ctx, 31, 0x1E4360u);
    ctx->pc = 0x1E435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4358u;
    // 0x1e435c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x1E4358u, 0x1E4360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4360u;
label_1e4360:
    // 0x1e4360: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e4364:
    // 0x1e4364: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e4364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4368:
    // 0x1e4368: 0xc0767a8  jal         func_1D9EA0
label_1e436c:
    if (ctx->pc == 0x1E436Cu) {
        ctx->pc = 0x1E436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4368u;
        // 0x1e436c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4370u;
        goto label_1e4370;
    }
    ctx->pc = 0x1E4368u;
    SET_GPR_U32(ctx, 31, 0x1E4370u);
    ctx->pc = 0x1E436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4368u;
    // 0x1e436c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x1E4368u, 0x1E4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4370u;
label_1e4370:
    // 0x1e4370: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e4370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e4374:
    // 0x1e4374: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e4378:
    // 0x1e4378: 0xc076690  jal         func_1D9A40
label_1e437c:
    if (ctx->pc == 0x1E437Cu) {
        ctx->pc = 0x1E437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4378u;
        // 0x1e437c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4380u;
        goto label_1e4380;
    }
    ctx->pc = 0x1E4378u;
    SET_GPR_U32(ctx, 31, 0x1E4380u);
    ctx->pc = 0x1E437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4378u;
    // 0x1e437c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E4378u, 0x1E4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4380u;
label_1e4380:
    // 0x1e4380: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4384:
    // 0x1e4384: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x1e4384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1e4388:
    // 0x1e4388: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e438c:
    if (ctx->pc == 0x1E438Cu) {
        ctx->pc = 0x1E438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4388u;
        // 0x1e438c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4390u;
        goto label_1e4390;
    }
    ctx->pc = 0x1E4388u;
    {
        const bool branch_taken_0x1e4388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4388u;
        // 0x1e438c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4388) {
            ctx->pc = 0x1E43B8u;
            goto label_1e43b8;
        }
    }
    ctx->pc = 0x1E4390u;
label_1e4390:
    // 0x1e4390: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e4390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e4394:
    // 0x1e4394: 0x24425dd0  addiu       $v0, $v0, 0x5DD0
    ctx->pc = 0x1e4394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24016));
label_1e4398:
    // 0x1e4398: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e4398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e439c:
    // 0x1e439c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e43a0:
    // 0x1e43a0: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x1e43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
label_1e43a4:
    // 0x1e43a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e43a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e43a8:
    // 0x1e43a8: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e43a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e43ac:
    // 0x1e43ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1e43acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e43b0:
    // 0x1e43b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e43b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e43b4:
    // 0x1e43b4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1e43b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1e43b8:
    // 0x1e43b8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e43bc:
    // 0x1e43bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e43bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e43c0:
    // 0x1e43c0: 0xc076690  jal         func_1D9A40
label_1e43c4:
    if (ctx->pc == 0x1E43C4u) {
        ctx->pc = 0x1E43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43C0u;
        // 0x1e43c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43C8u;
        goto label_1e43c8;
    }
    ctx->pc = 0x1E43C0u;
    SET_GPR_U32(ctx, 31, 0x1E43C8u);
    ctx->pc = 0x1E43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43C0u;
    // 0x1e43c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E43C0u, 0x1E43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43C8u;
label_1e43c8:
    // 0x1e43c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e43cc:
    // 0x1e43cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e43ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e43d0:
    // 0x1e43d0: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1e43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_1e43d4:
    // 0x1e43d4: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1e43d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e43d8:
    // 0x1e43d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e43dc:
    // 0x1e43dc: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x1e43dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_1e43e0:
    // 0x1e43e0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e43e4:
    // 0x1e43e4: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1e43e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e43e8:
    // 0x1e43e8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e43e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e43ec:
    // 0x1e43ec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e43ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e43f0:
    // 0x1e43f0: 0x0  nop
    ctx->pc = 0x1e43f0u;
    // NOP
label_1e43f4:
    // 0x1e43f4: 0x0  nop
    ctx->pc = 0x1e43f4u;
    // NOP
label_1e43f8:
    // 0x1e43f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e43f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e43fc:
    // 0x1e43fc: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x1e43fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_1e4400:
    // 0x1e4400: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4404:
    // 0x1e4404: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1e4404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1e4408:
    // 0x1e4408: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1e4408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e440c:
    // 0x1e440c: 0x1440ff48  bnez        $v0, . + 4 + (-0xB8 << 2)
label_1e4410:
    if (ctx->pc == 0x1E4410u) {
        ctx->pc = 0x1E4414u;
        goto label_1e4414;
    }
    ctx->pc = 0x1E440Cu;
    {
        const bool branch_taken_0x1e440c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e440c) {
            ctx->pc = 0x1E4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4130;
        }
    }
    ctx->pc = 0x1E4414u;
label_1e4414:
    // 0x1e4414: 0x0  nop
    ctx->pc = 0x1e4414u;
    // NOP
label_1e4418:
    // 0x1e4418: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e441c:
    // 0x1e441c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e441cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4420:
    // 0x1e4420: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1e4420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1e4424:
    // 0x1e4424: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e4424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4428:
    // 0x1e4428: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
label_1e442c:
    if (ctx->pc == 0x1E442Cu) {
        ctx->pc = 0x1E442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4428u;
        // 0x1e442c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4430u;
        goto label_1e4430;
    }
    ctx->pc = 0x1E4428u;
    {
        const bool branch_taken_0x1e4428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4428u;
        // 0x1e442c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4428) {
            ctx->pc = 0x1E45E0u;
            goto label_1e45e0;
        }
    }
    ctx->pc = 0x1E4430u;
label_1e4430:
    // 0x1e4430: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4434:
    // 0x1e4434: 0x0  nop
    ctx->pc = 0x1e4434u;
    // NOP
label_1e4438:
    // 0x1e4438: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e4438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e443c:
    // 0x1e443c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e4440:
    // 0x1e4440: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x1e4440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1e4444:
    // 0x1e4444: 0x86630030  lh          $v1, 0x30($s3)
    ctx->pc = 0x1e4444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e4448:
    // 0x1e4448: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
label_1e444c:
    if (ctx->pc == 0x1E444Cu) {
        ctx->pc = 0x1E4450u;
        goto label_1e4450;
    }
    ctx->pc = 0x1E4448u;
    {
        const bool branch_taken_0x1e4448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4448) {
            ctx->pc = 0x1E45C8u;
            goto label_1e45c8;
        }
    }
    ctx->pc = 0x1E4450u;
label_1e4450:
    // 0x1e4450: 0xc48d003c  lwc1        $f13, 0x3C($a0)
    ctx->pc = 0x1e4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4454:
    // 0x1e4454: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x1e4454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_1e4458:
    // 0x1e4458: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x1e4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_1e445c:
    // 0x1e445c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1e445cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e4460:
    // 0x1e4460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e4460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e4464:
    // 0x1e4464: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e4468:
    // 0x1e4468: 0xc07681c  jal         func_1DA070
label_1e446c:
    if (ctx->pc == 0x1E446Cu) {
        ctx->pc = 0x1E446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4468u;
        // 0x1e446c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4470u;
        goto label_1e4470;
    }
    ctx->pc = 0x1E4468u;
    SET_GPR_U32(ctx, 31, 0x1E4470u);
    ctx->pc = 0x1E446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4468u;
    // 0x1e446c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x1E4468u, 0x1E4470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4470u;
label_1e4470:
    // 0x1e4470: 0x86630038  lh          $v1, 0x38($s3)
    ctx->pc = 0x1e4470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e4474:
    // 0x1e4474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4478:
    // 0x1e4478: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1e4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1e447c:
    // 0x1e447c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e4480:
    // 0x1e4480: 0xc078ba8  jal         func_1E2EA0
label_1e4484:
    if (ctx->pc == 0x1E4484u) {
        ctx->pc = 0x1E4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4480u;
        // 0x1e4484: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4488u;
        goto label_1e4488;
    }
    ctx->pc = 0x1E4480u;
    SET_GPR_U32(ctx, 31, 0x1E4488u);
    ctx->pc = 0x1E4484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4480u;
    // 0x1e4484: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E4480u, 0x1E4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4488u;
label_1e4488:
    // 0x1e4488: 0x86620038  lh          $v0, 0x38($s3)
    ctx->pc = 0x1e4488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e448c:
    // 0x1e448c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e4490:
    // 0x1e4490: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e4490u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e4494:
    // 0x1e4494: 0x86630038  lh          $v1, 0x38($s3)
    ctx->pc = 0x1e4494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e4498:
    // 0x1e4498: 0x8662003e  lh          $v0, 0x3E($s3)
    ctx->pc = 0x1e4498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
label_1e449c:
    // 0x1e449c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e44a0:
    // 0x1e44a0: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e44a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e44a4:
    // 0x1e44a4: 0x8663003a  lh          $v1, 0x3A($s3)
    ctx->pc = 0x1e44a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_1e44a8:
    // 0x1e44a8: 0x8662003c  lh          $v0, 0x3C($s3)
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_1e44ac:
    // 0x1e44ac: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e44acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e44b0:
    // 0x1e44b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e44b4:
    if (ctx->pc == 0x1E44B4u) {
        ctx->pc = 0x1E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B0u;
        // 0x1e44b4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44B8u;
        goto label_1e44b8;
    }
    ctx->pc = 0x1E44B0u;
    {
        const bool branch_taken_0x1e44b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B0u;
        // 0x1e44b4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44b0) {
            ctx->pc = 0x1E44C0u;
            goto label_1e44c0;
        }
    }
    ctx->pc = 0x1E44B8u;
label_1e44b8:
    // 0x1e44b8: 0xa662003a  sh          $v0, 0x3A($s3)
    ctx->pc = 0x1e44b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 58), (uint16_t)GPR_U32(ctx, 2));
label_1e44bc:
    // 0x1e44bc: 0x0  nop
    ctx->pc = 0x1e44bcu;
    // NOP
label_1e44c0:
    // 0x1e44c0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e44c4:
    // 0x1e44c4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x1e44c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1e44c8:
    // 0x1e44c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e44cc:
    if (ctx->pc == 0x1E44CCu) {
        ctx->pc = 0x1E44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44C8u;
        // 0x1e44cc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44D0u;
        goto label_1e44d0;
    }
    ctx->pc = 0x1E44C8u;
    {
        const bool branch_taken_0x1e44c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44C8u;
        // 0x1e44cc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44c8) {
            ctx->pc = 0x1E4500u;
            goto label_1e4500;
        }
    }
    ctx->pc = 0x1E44D0u;
label_1e44d0:
    // 0x1e44d0: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x1e44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
label_1e44d4:
    // 0x1e44d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e44d8:
    // 0x1e44d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e44dc:
    // 0x1e44dc: 0x24425dd0  addiu       $v0, $v0, 0x5DD0
    ctx->pc = 0x1e44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24016));
label_1e44e0:
    // 0x1e44e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e44e4:
    // 0x1e44e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1e44e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e44e8:
    // 0x1e44e8: 0xc076690  jal         func_1D9A40
label_1e44ec:
    if (ctx->pc == 0x1E44ECu) {
        ctx->pc = 0x1E44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E8u;
        // 0x1e44ec: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44F0u;
        goto label_1e44f0;
    }
    ctx->pc = 0x1E44E8u;
    SET_GPR_U32(ctx, 31, 0x1E44F0u);
    ctx->pc = 0x1E44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44E8u;
    // 0x1e44ec: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E44E8u, 0x1E44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44F0u;
label_1e44f0:
    // 0x1e44f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e44f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e44f4:
    // 0x1e44f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e44f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e44f8:
    // 0x1e44f8: 0xc0766a8  jal         func_1D9AA0
label_1e44fc:
    if (ctx->pc == 0x1E44FCu) {
        ctx->pc = 0x1E44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44F8u;
        // 0x1e44fc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4500u;
        goto label_1e4500;
    }
    ctx->pc = 0x1E44F8u;
    SET_GPR_U32(ctx, 31, 0x1E4500u);
    ctx->pc = 0x1E44FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44F8u;
    // 0x1e44fc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E44F8u, 0x1E4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4500u;
label_1e4500:
    // 0x1e4500: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4504:
    // 0x1e4504: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x1e4504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_1e4508:
    // 0x1e4508: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e4508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e450c:
    // 0x1e450c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1e4510:
    if (ctx->pc == 0x1E4510u) {
        ctx->pc = 0x1E4514u;
        goto label_1e4514;
    }
    ctx->pc = 0x1E450Cu;
    {
        const bool branch_taken_0x1e450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e450c) {
            ctx->pc = 0x1E4598u;
            goto label_1e4598;
        }
    }
    ctx->pc = 0x1E4514u;
label_1e4514:
    // 0x1e4514: 0x86660048  lh          $a2, 0x48($s3)
    ctx->pc = 0x1e4514u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
label_1e4518:
    // 0x1e4518: 0x86640030  lh          $a0, 0x30($s3)
    ctx->pc = 0x1e4518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e451c:
    // 0x1e451c: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x1e451cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e4520:
    // 0x1e4520: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1e4524:
    if (ctx->pc == 0x1E4524u) {
        ctx->pc = 0x1E4528u;
        goto label_1e4528;
    }
    ctx->pc = 0x1E4520u;
    {
        const bool branch_taken_0x1e4520 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4520) {
            ctx->pc = 0x1E4550u;
            goto label_1e4550;
        }
    }
    ctx->pc = 0x1E4528u;
label_1e4528:
    // 0x1e4528: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_1e452c:
    if (ctx->pc == 0x1E452Cu) {
        ctx->pc = 0x1E452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4528u;
        // 0x1e452c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4530u;
        goto label_1e4530;
    }
    ctx->pc = 0x1E4528u;
    {
        const bool branch_taken_0x1e4528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4528u;
        // 0x1e452c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4528) {
            ctx->pc = 0x1E4540u;
            goto label_1e4540;
        }
    }
    ctx->pc = 0x1E4530u;
label_1e4530:
    // 0x1e4530: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4534:
    // 0x1e4534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4538:
    // 0x1e4538: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e453c:
    if (ctx->pc == 0x1E453Cu) {
        ctx->pc = 0x1E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4538u;
        // 0x1e453c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4540u;
        goto label_1e4540;
    }
    ctx->pc = 0x1E4538u;
    {
        const bool branch_taken_0x1e4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4538u;
        // 0x1e453c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4538) {
            ctx->pc = 0x1E454Cu;
            goto label_1e454c;
        }
    }
    ctx->pc = 0x1E4540u;
label_1e4540:
    // 0x1e4540: 0xc0767d4  jal         func_1D9F50
label_1e4544:
    if (ctx->pc == 0x1E4544u) {
        ctx->pc = 0x1E4548u;
        goto label_1e4548;
    }
    ctx->pc = 0x1E4540u;
    SET_GPR_U32(ctx, 31, 0x1E4548u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E4540u, 0x1E4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4548u;
label_1e4548:
    // 0x1e4548: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1e4548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1e454c:
    // 0x1e454c: 0x0  nop
    ctx->pc = 0x1e454cu;
    // NOP
label_1e4550:
    // 0x1e4550: 0x8665004a  lh          $a1, 0x4A($s3)
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
label_1e4554:
    // 0x1e4554: 0x86640030  lh          $a0, 0x30($s3)
    ctx->pc = 0x1e4554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e4558:
    // 0x1e4558: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1e4558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e455c:
    // 0x1e455c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e4560:
    if (ctx->pc == 0x1E4560u) {
        ctx->pc = 0x1E4564u;
        goto label_1e4564;
    }
    ctx->pc = 0x1E455Cu;
    {
        const bool branch_taken_0x1e455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e455c) {
            ctx->pc = 0x1E4598u;
            goto label_1e4598;
        }
    }
    ctx->pc = 0x1E4564u;
label_1e4564:
    // 0x1e4564: 0x86660032  lh          $a2, 0x32($s3)
    ctx->pc = 0x1e4564u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e4568:
    // 0x1e4568: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_1e456c:
    if (ctx->pc == 0x1E456Cu) {
        ctx->pc = 0x1E456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4568u;
        // 0x1e456c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4570u;
        goto label_1e4570;
    }
    ctx->pc = 0x1E4568u;
    {
        const bool branch_taken_0x1e4568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4568u;
        // 0x1e456c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4568) {
            ctx->pc = 0x1E457Cu;
            goto label_1e457c;
        }
    }
    ctx->pc = 0x1E4570u;
label_1e4570:
    // 0x1e4570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4574:
    // 0x1e4574: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e4578:
    if (ctx->pc == 0x1E4578u) {
        ctx->pc = 0x1E4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4574u;
        // 0x1e4578: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E457Cu;
        goto label_1e457c;
    }
    ctx->pc = 0x1E4574u;
    {
        const bool branch_taken_0x1e4574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4574u;
        // 0x1e4578: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4574) {
            ctx->pc = 0x1E4588u;
            goto label_1e4588;
        }
    }
    ctx->pc = 0x1E457Cu;
label_1e457c:
    // 0x1e457c: 0xc0767d4  jal         func_1D9F50
label_1e4580:
    if (ctx->pc == 0x1E4580u) {
        ctx->pc = 0x1E4584u;
        goto label_1e4584;
    }
    ctx->pc = 0x1E457Cu;
    SET_GPR_U32(ctx, 31, 0x1E4584u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E457Cu, 0x1E4584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4584u;
label_1e4584:
    // 0x1e4584: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4588:
    // 0x1e4588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e458c:
    // 0x1e458c: 0x0  nop
    ctx->pc = 0x1e458cu;
    // NOP
label_1e4590:
    // 0x1e4590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e4590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e4594:
    // 0x1e4594: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1e4594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1e4598:
    // 0x1e4598: 0x86620030  lh          $v0, 0x30($s3)
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e459c:
    // 0x1e459c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e45a0:
    // 0x1e45a0: 0xa6620030  sh          $v0, 0x30($s3)
    ctx->pc = 0x1e45a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
label_1e45a4:
    // 0x1e45a4: 0x86630030  lh          $v1, 0x30($s3)
    ctx->pc = 0x1e45a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e45a8:
    // 0x1e45a8: 0x86620032  lh          $v0, 0x32($s3)
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e45ac:
    // 0x1e45ac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1e45acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e45b0:
    // 0x1e45b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e45b4:
    if (ctx->pc == 0x1E45B4u) {
        ctx->pc = 0x1E45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45B0u;
        // 0x1e45b4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45B8u;
        goto label_1e45b8;
    }
    ctx->pc = 0x1E45B0u;
    {
        const bool branch_taken_0x1e45b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45B0u;
        // 0x1e45b4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45b0) {
            ctx->pc = 0x1E45C0u;
            goto label_1e45c0;
        }
    }
    ctx->pc = 0x1E45B8u;
label_1e45b8:
    // 0x1e45b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e45bc:
    if (ctx->pc == 0x1E45BCu) {
        ctx->pc = 0x1E45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45B8u;
        // 0x1e45bc: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45C0u;
        goto label_1e45c0;
    }
    ctx->pc = 0x1E45B8u;
    {
        const bool branch_taken_0x1e45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45B8u;
        // 0x1e45bc: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45b8) {
            ctx->pc = 0x1E45C8u;
            goto label_1e45c8;
        }
    }
    ctx->pc = 0x1E45C0u;
label_1e45c0:
    // 0x1e45c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e45c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e45c4:
    // 0x1e45c4: 0x0  nop
    ctx->pc = 0x1e45c4u;
    // NOP
label_1e45c8:
    // 0x1e45c8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e45cc:
    // 0x1e45cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e45ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e45d0:
    // 0x1e45d0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1e45d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1e45d4:
    // 0x1e45d4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e45d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e45d8:
    // 0x1e45d8: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_1e45dc:
    if (ctx->pc == 0x1E45DCu) {
        ctx->pc = 0x1E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D8u;
        // 0x1e45dc: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45E0u;
        goto label_1e45e0;
    }
    ctx->pc = 0x1E45D8u;
    {
        const bool branch_taken_0x1e45d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D8u;
        // 0x1e45dc: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45d8) {
            ctx->pc = 0x1E4438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4438;
        }
    }
    ctx->pc = 0x1E45E0u;
label_1e45e0:
    // 0x1e45e0: 0xa212003d  sb          $s2, 0x3D($s0)
    ctx->pc = 0x1e45e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 18));
label_1e45e4:
    // 0x1e45e4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e45e8:
    // 0x1e45e8: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1e45e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1e45ec:
    // 0x1e45ec: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e45f0:
    // 0x1e45f0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e45f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e45f4:
    // 0x1e45f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e45f8:
    // 0x1e45f8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e45f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e45fc:
    // 0x1e45fc: 0x9203003d  lbu         $v1, 0x3D($s0)
    ctx->pc = 0x1e45fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1e4600:
    // 0x1e4600: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x1e4600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_1e4604:
    // 0x1e4604: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e4604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4608:
    // 0x1e4608: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e4608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e460c:
    // 0x1e460c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e4610:
    // 0x1e4610: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4614:
    // 0x1e4614: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1e4614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e4618:
    // 0x1e4618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e4618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e461c:
    // 0x1e461c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e4620:
    // 0x1e4620: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e4624:
    if (ctx->pc == 0x1E4624u) {
        ctx->pc = 0x1E4628u;
        goto label_1e4628;
    }
    ctx->pc = 0x1E4620u;
    {
        const bool branch_taken_0x1e4620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4620) {
            ctx->pc = 0x1E4640u;
            goto label_1e4640;
        }
    }
    ctx->pc = 0x1E4628u;
label_1e4628:
    // 0x1e4628: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e4628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e462c:
    // 0x1e462c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e4630:
    // 0x1e4630: 0x320f809  jalr        $t9
label_1e4634:
    if (ctx->pc == 0x1E4634u) {
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4638u;
        goto label_1e4638;
    }
    ctx->pc = 0x1E4630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4638u);
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4630u, 0x1E4638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e463c:
    if (ctx->pc == 0x1E463Cu) {
        ctx->pc = 0x1E463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4638u;
        // 0x1e463c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4640u;
        goto label_1e4640;
    }
    ctx->pc = 0x1E4638u;
    {
        const bool branch_taken_0x1e4638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4638u;
        // 0x1e463c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4638) {
            ctx->pc = 0x1E46B8u;
            goto label_1e46b8;
        }
    }
    ctx->pc = 0x1E4640u;
label_1e4640:
    // 0x1e4640: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x1e4640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1e4644:
    // 0x1e4644: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e4648:
    // 0x1e4648: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1e464c:
    if (ctx->pc == 0x1E464Cu) {
        ctx->pc = 0x1E4650u;
        goto label_1e4650;
    }
    ctx->pc = 0x1E4648u;
    {
        const bool branch_taken_0x1e4648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4648) {
            ctx->pc = 0x1E4670u;
            goto label_1e4670;
        }
    }
    ctx->pc = 0x1E4650u;
label_1e4650:
    // 0x1e4650: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4654:
    // 0x1e4654: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e4654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e4658:
    // 0x1e4658: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1e465c:
    if (ctx->pc == 0x1E465Cu) {
        ctx->pc = 0x1E465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4658u;
        // 0x1e465c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4660u;
        goto label_1e4660;
    }
    ctx->pc = 0x1E4658u;
    {
        const bool branch_taken_0x1e4658 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4658u;
        // 0x1e465c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4658) {
            ctx->pc = 0x1E46B0u;
            goto label_1e46b0;
        }
    }
    ctx->pc = 0x1E4660u;
label_1e4660:
    // 0x1e4660: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e4660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e4664:
    // 0x1e4664: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e4668:
    if (ctx->pc == 0x1E4668u) {
        ctx->pc = 0x1E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4664u;
        // 0x1e4668: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E466Cu;
        goto label_1e466c;
    }
    ctx->pc = 0x1E4664u;
    {
        const bool branch_taken_0x1e4664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4664u;
        // 0x1e4668: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4664) {
            ctx->pc = 0x1E46B0u;
            goto label_1e46b0;
        }
    }
    ctx->pc = 0x1E466Cu;
label_1e466c:
    // 0x1e466c: 0x0  nop
    ctx->pc = 0x1e466cu;
    // NOP
label_1e4670:
    // 0x1e4670: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e4670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4674:
    // 0x1e4674: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e4674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4678:
    // 0x1e4678: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1e467c:
    if (ctx->pc == 0x1E467Cu) {
        ctx->pc = 0x1E4680u;
        goto label_1e4680;
    }
    ctx->pc = 0x1E4678u;
    {
        const bool branch_taken_0x1e4678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4678) {
            ctx->pc = 0x1E46B0u;
            goto label_1e46b0;
        }
    }
    ctx->pc = 0x1E4680u;
label_1e4680:
    // 0x1e4680: 0x28427ff1  slti        $v0, $v0, 0x7FF1
    ctx->pc = 0x1e4680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e4684:
    // 0x1e4684: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4688:
    // 0x1e4688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e4688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e468c:
    // 0x1e468c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e4690:
    // 0x1e4690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e4694:
    if (ctx->pc == 0x1E4694u) {
        ctx->pc = 0x1E4698u;
        goto label_1e4698;
    }
    ctx->pc = 0x1E4690u;
    {
        const bool branch_taken_0x1e4690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4690) {
            ctx->pc = 0x1E46B0u;
            goto label_1e46b0;
        }
    }
    ctx->pc = 0x1E4698u;
label_1e4698:
    // 0x1e4698: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e469c:
    // 0x1e469c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e46a0:
    // 0x1e46a0: 0x320f809  jalr        $t9
label_1e46a4:
    if (ctx->pc == 0x1E46A4u) {
        ctx->pc = 0x1E46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A0u;
        // 0x1e46a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46A8u;
        goto label_1e46a8;
    }
    ctx->pc = 0x1E46A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E46A8u);
        ctx->pc = 0x1E46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A0u;
        // 0x1e46a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E46A0u, 0x1E46A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E46A8u;
label_1e46a8:
    // 0x1e46a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e46ac:
    if (ctx->pc == 0x1E46ACu) {
        ctx->pc = 0x1E46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A8u;
        // 0x1e46ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46B0u;
        goto label_1e46b0;
    }
    ctx->pc = 0x1E46A8u;
    {
        const bool branch_taken_0x1e46a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A8u;
        // 0x1e46ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46a8) {
            ctx->pc = 0x1E46B8u;
            goto label_1e46b8;
        }
    }
    ctx->pc = 0x1E46B0u;
label_1e46b0:
    // 0x1e46b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e46b4:
    // 0x1e46b4: 0x0  nop
    ctx->pc = 0x1e46b4u;
    // NOP
label_1e46b8:
    // 0x1e46b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e46b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e46bc:
    // 0x1e46bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e46bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e46c0:
    // 0x1e46c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e46c4:
    // 0x1e46c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e46c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e46c8:
    // 0x1e46c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e46cc:
    // 0x1e46cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e46ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e46d0:
    // 0x1e46d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e46d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e46d4:
    // 0x1e46d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e46d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e46d8:
    // 0x1e46d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e46d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e46dc:
    // 0x1e46dc: 0x3e00008  jr          $ra
label_1e46e0:
    if (ctx->pc == 0x1E46E0u) {
        ctx->pc = 0x1E46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46DCu;
        // 0x1e46e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46E4u;
        goto label_fallthrough_0x1e46dc;
    }
    ctx->pc = 0x1E46DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46DCu;
        // 0x1e46e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E46DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e46dc:
    ctx->pc = 0x1E46E4u;
}
