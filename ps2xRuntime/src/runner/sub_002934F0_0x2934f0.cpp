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

// Function: sub_002934F0
// Address: 0x2934f0 - 0x293870
void sub_002934F0_0x2934f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002934F0_0x2934f0");
#endif

    switch (ctx->pc) {
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f4u: goto label_2934f4;
        case 0x2934f8u: goto label_2934f8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293500u: goto label_293500;
        case 0x293504u: goto label_293504;
        case 0x293508u: goto label_293508;
        case 0x29350cu: goto label_29350c;
        case 0x293510u: goto label_293510;
        case 0x293514u: goto label_293514;
        case 0x293518u: goto label_293518;
        case 0x29351cu: goto label_29351c;
        case 0x293520u: goto label_293520;
        case 0x293524u: goto label_293524;
        case 0x293528u: goto label_293528;
        case 0x29352cu: goto label_29352c;
        case 0x293530u: goto label_293530;
        case 0x293534u: goto label_293534;
        case 0x293538u: goto label_293538;
        case 0x29353cu: goto label_29353c;
        case 0x293540u: goto label_293540;
        case 0x293544u: goto label_293544;
        case 0x293548u: goto label_293548;
        case 0x29354cu: goto label_29354c;
        case 0x293550u: goto label_293550;
        case 0x293554u: goto label_293554;
        case 0x293558u: goto label_293558;
        case 0x29355cu: goto label_29355c;
        case 0x293560u: goto label_293560;
        case 0x293564u: goto label_293564;
        case 0x293568u: goto label_293568;
        case 0x29356cu: goto label_29356c;
        case 0x293570u: goto label_293570;
        case 0x293574u: goto label_293574;
        case 0x293578u: goto label_293578;
        case 0x29357cu: goto label_29357c;
        case 0x293580u: goto label_293580;
        case 0x293584u: goto label_293584;
        case 0x293588u: goto label_293588;
        case 0x29358cu: goto label_29358c;
        case 0x293590u: goto label_293590;
        case 0x293594u: goto label_293594;
        case 0x293598u: goto label_293598;
        case 0x29359cu: goto label_29359c;
        case 0x2935a0u: goto label_2935a0;
        case 0x2935a4u: goto label_2935a4;
        case 0x2935a8u: goto label_2935a8;
        case 0x2935acu: goto label_2935ac;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935b4u: goto label_2935b4;
        case 0x2935b8u: goto label_2935b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c0u: goto label_2935c0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935c8u: goto label_2935c8;
        case 0x2935ccu: goto label_2935cc;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935d4u: goto label_2935d4;
        case 0x2935d8u: goto label_2935d8;
        case 0x2935dcu: goto label_2935dc;
        case 0x2935e0u: goto label_2935e0;
        case 0x2935e4u: goto label_2935e4;
        case 0x2935e8u: goto label_2935e8;
        case 0x2935ecu: goto label_2935ec;
        case 0x2935f0u: goto label_2935f0;
        case 0x2935f4u: goto label_2935f4;
        case 0x2935f8u: goto label_2935f8;
        case 0x2935fcu: goto label_2935fc;
        case 0x293600u: goto label_293600;
        case 0x293604u: goto label_293604;
        case 0x293608u: goto label_293608;
        case 0x29360cu: goto label_29360c;
        case 0x293610u: goto label_293610;
        case 0x293614u: goto label_293614;
        case 0x293618u: goto label_293618;
        case 0x29361cu: goto label_29361c;
        case 0x293620u: goto label_293620;
        case 0x293624u: goto label_293624;
        case 0x293628u: goto label_293628;
        case 0x29362cu: goto label_29362c;
        case 0x293630u: goto label_293630;
        case 0x293634u: goto label_293634;
        case 0x293638u: goto label_293638;
        case 0x29363cu: goto label_29363c;
        case 0x293640u: goto label_293640;
        case 0x293644u: goto label_293644;
        case 0x293648u: goto label_293648;
        case 0x29364cu: goto label_29364c;
        case 0x293650u: goto label_293650;
        case 0x293654u: goto label_293654;
        case 0x293658u: goto label_293658;
        case 0x29365cu: goto label_29365c;
        case 0x293660u: goto label_293660;
        case 0x293664u: goto label_293664;
        case 0x293668u: goto label_293668;
        case 0x29366cu: goto label_29366c;
        case 0x293670u: goto label_293670;
        case 0x293674u: goto label_293674;
        case 0x293678u: goto label_293678;
        case 0x29367cu: goto label_29367c;
        case 0x293680u: goto label_293680;
        case 0x293684u: goto label_293684;
        case 0x293688u: goto label_293688;
        case 0x29368cu: goto label_29368c;
        case 0x293690u: goto label_293690;
        case 0x293694u: goto label_293694;
        case 0x293698u: goto label_293698;
        case 0x29369cu: goto label_29369c;
        case 0x2936a0u: goto label_2936a0;
        case 0x2936a4u: goto label_2936a4;
        case 0x2936a8u: goto label_2936a8;
        case 0x2936acu: goto label_2936ac;
        case 0x2936b0u: goto label_2936b0;
        case 0x2936b4u: goto label_2936b4;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936bcu: goto label_2936bc;
        case 0x2936c0u: goto label_2936c0;
        case 0x2936c4u: goto label_2936c4;
        case 0x2936c8u: goto label_2936c8;
        case 0x2936ccu: goto label_2936cc;
        case 0x2936d0u: goto label_2936d0;
        case 0x2936d4u: goto label_2936d4;
        case 0x2936d8u: goto label_2936d8;
        case 0x2936dcu: goto label_2936dc;
        case 0x2936e0u: goto label_2936e0;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936e8u: goto label_2936e8;
        case 0x2936ecu: goto label_2936ec;
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        case 0x293840u: goto label_293840;
        case 0x293844u: goto label_293844;
        case 0x293848u: goto label_293848;
        case 0x29384cu: goto label_29384c;
        case 0x293850u: goto label_293850;
        case 0x293854u: goto label_293854;
        case 0x293858u: goto label_293858;
        case 0x29385cu: goto label_29385c;
        case 0x293860u: goto label_293860;
        case 0x293864u: goto label_293864;
        case 0x293868u: goto label_293868;
        case 0x29386cu: goto label_29386c;
        default: break;
    }

    ctx->pc = 0x2934f0u;

label_2934f0:
    // 0x2934f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2934f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2934f4:
    // 0x2934f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2934f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2934f8:
    // 0x2934f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2934f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2934fc:
    // 0x2934fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2934fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_293500:
    // 0x293500: 0xa0802b07  sb          $zero, 0x2B07($a0)
    ctx->pc = 0x293500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11015), (uint8_t)GPR_U32(ctx, 0));
label_293504:
    // 0x293504: 0x90832ab0  lbu         $v1, 0x2AB0($a0)
    ctx->pc = 0x293504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
label_293508:
    // 0x293508: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x293508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_29350c:
    // 0x29350c: 0xa0832ab1  sb          $v1, 0x2AB1($a0)
    ctx->pc = 0x29350cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10929), (uint8_t)GPR_U32(ctx, 3));
label_293510:
    // 0x293510: 0x90832ab0  lbu         $v1, 0x2AB0($a0)
    ctx->pc = 0x293510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
label_293514:
    // 0x293514: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x293514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_293518:
    // 0x293518: 0xa0832ab0  sb          $v1, 0x2AB0($a0)
    ctx->pc = 0x293518u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 3));
label_29351c:
    // 0x29351c: 0x90832ab0  lbu         $v1, 0x2AB0($a0)
    ctx->pc = 0x29351cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
label_293520:
    // 0x293520: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x293520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
label_293524:
    // 0x293524: 0xa0832ab0  sb          $v1, 0x2AB0($a0)
    ctx->pc = 0x293524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 3));
label_293528:
    // 0x293528: 0x90832ab0  lbu         $v1, 0x2AB0($a0)
    ctx->pc = 0x293528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
label_29352c:
    // 0x29352c: 0x306300df  andi        $v1, $v1, 0xDF
    ctx->pc = 0x29352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)223);
label_293530:
    // 0x293530: 0xa0832ab0  sb          $v1, 0x2AB0($a0)
    ctx->pc = 0x293530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 3));
label_293534:
    // 0x293534: 0x94830824  lhu         $v1, 0x824($a0)
    ctx->pc = 0x293534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2084)));
label_293538:
    // 0x293538: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_29353c:
    if (ctx->pc == 0x29353Cu) {
        ctx->pc = 0x29353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293538u;
        // 0x29353c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293540u;
        goto label_293540;
    }
    ctx->pc = 0x293538u;
    {
        const bool branch_taken_0x293538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293538u;
        // 0x29353c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293538) {
            ctx->pc = 0x293550u;
            goto label_293550;
        }
    }
    ctx->pc = 0x293540u;
label_293540:
    // 0x293540: 0x92022ab0  lbu         $v0, 0x2AB0($s0)
    ctx->pc = 0x293540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
label_293544:
    // 0x293544: 0x304200f3  andi        $v0, $v0, 0xF3
    ctx->pc = 0x293544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)243);
label_293548:
    // 0x293548: 0xa2022ab0  sb          $v0, 0x2AB0($s0)
    ctx->pc = 0x293548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 2));
label_29354c:
    // 0x29354c: 0x0  nop
    ctx->pc = 0x29354cu;
    // NOP
label_293550:
    // 0x293550: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x293550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
label_293554:
    // 0x293554: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x293554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_293558:
    // 0x293558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29355c:
    if (ctx->pc == 0x29355Cu) {
        ctx->pc = 0x293560u;
        goto label_293560;
    }
    ctx->pc = 0x293558u;
    {
        const bool branch_taken_0x293558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293558) {
            ctx->pc = 0x293578u;
            goto label_293578;
        }
    }
    ctx->pc = 0x293560u;
label_293560:
    // 0x293560: 0x96022a02  lhu         $v0, 0x2A02($s0)
    ctx->pc = 0x293560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10754)));
label_293564:
    // 0x293564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_293568:
    if (ctx->pc == 0x293568u) {
        ctx->pc = 0x29356Cu;
        goto label_29356c;
    }
    ctx->pc = 0x293564u;
    {
        const bool branch_taken_0x293564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293564) {
            ctx->pc = 0x293578u;
            goto label_293578;
        }
    }
    ctx->pc = 0x29356Cu;
label_29356c:
    // 0x29356c: 0x92022ab0  lbu         $v0, 0x2AB0($s0)
    ctx->pc = 0x29356cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
label_293570:
    // 0x293570: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x293570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_293574:
    // 0x293574: 0xa2022ab0  sb          $v0, 0x2AB0($s0)
    ctx->pc = 0x293574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 2));
label_293578:
    // 0x293578: 0x96022ab4  lhu         $v0, 0x2AB4($s0)
    ctx->pc = 0x293578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10932)));
label_29357c:
    // 0x29357c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_293580:
    if (ctx->pc == 0x293580u) {
        ctx->pc = 0x293584u;
        goto label_293584;
    }
    ctx->pc = 0x29357Cu;
    {
        const bool branch_taken_0x29357c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29357c) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x293584u;
label_293584:
    // 0x293584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x293584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_293588:
    // 0x293588: 0xa6022ab4  sh          $v0, 0x2AB4($s0)
    ctx->pc = 0x293588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
label_29358c:
    // 0x29358c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293590:
    // 0x293590: 0x1c40001f  bgtz        $v0, . + 4 + (0x1F << 2)
label_293594:
    if (ctx->pc == 0x293594u) {
        ctx->pc = 0x293598u;
        goto label_293598;
    }
    ctx->pc = 0x293590u;
    {
        const bool branch_taken_0x293590 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x293590) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x293598u;
label_293598:
    // 0x293598: 0x92032ab6  lbu         $v1, 0x2AB6($s0)
    ctx->pc = 0x293598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10934)));
label_29359c:
    // 0x29359c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2935a0:
    // 0x2935a0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_2935a4:
    if (ctx->pc == 0x2935A4u) {
        ctx->pc = 0x2935A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935A0u;
        // 0x2935a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2935A8u;
        goto label_2935a8;
    }
    ctx->pc = 0x2935A0u;
    {
        const bool branch_taken_0x2935a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2935A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935A0u;
        // 0x2935a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935a0) {
            ctx->pc = 0x2935F8u;
            goto label_2935f8;
        }
    }
    ctx->pc = 0x2935A8u;
label_2935a8:
    // 0x2935a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2935ac:
    if (ctx->pc == 0x2935ACu) {
        ctx->pc = 0x2935B0u;
        goto label_2935b0;
    }
    ctx->pc = 0x2935A8u;
    {
        const bool branch_taken_0x2935a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2935a8) {
            ctx->pc = 0x2935D0u;
            goto label_2935d0;
        }
    }
    ctx->pc = 0x2935B0u;
label_2935b0:
    // 0x2935b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2935b4:
    if (ctx->pc == 0x2935B4u) {
        ctx->pc = 0x2935B8u;
        goto label_2935b8;
    }
    ctx->pc = 0x2935B0u;
    {
        const bool branch_taken_0x2935b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935b0) {
            ctx->pc = 0x2935C0u;
            goto label_2935c0;
        }
    }
    ctx->pc = 0x2935B8u;
label_2935b8:
    // 0x2935b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2935bc:
    if (ctx->pc == 0x2935BCu) {
        ctx->pc = 0x2935C0u;
        goto label_2935c0;
    }
    ctx->pc = 0x2935B8u;
    {
        const bool branch_taken_0x2935b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935b8) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x2935C0u;
label_2935c0:
    // 0x2935c0: 0xc0a4cc4  jal         func_293310
label_2935c4:
    if (ctx->pc == 0x2935C4u) {
        ctx->pc = 0x2935C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935C0u;
        // 0x2935c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2935C8u;
        goto label_2935c8;
    }
    ctx->pc = 0x2935C0u;
    SET_GPR_U32(ctx, 31, 0x2935C8u);
    ctx->pc = 0x2935C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935C0u;
    // 0x2935c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293310u, 0x2935C0u, 0x2935C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935C8u;
label_2935c8:
    // 0x2935c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2935cc:
    if (ctx->pc == 0x2935CCu) {
        ctx->pc = 0x2935D0u;
        goto label_2935d0;
    }
    ctx->pc = 0x2935C8u;
    {
        const bool branch_taken_0x2935c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935c8) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x2935D0u;
label_2935d0:
    // 0x2935d0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2935d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2935d4:
    // 0x2935d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2935d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2935d8:
    // 0x2935d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2935d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2935dc:
    // 0x2935dc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2935dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2935e0:
    // 0x2935e0: 0x320f809  jalr        $t9
label_2935e4:
    if (ctx->pc == 0x2935E4u) {
        ctx->pc = 0x2935E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935E0u;
        // 0x2935e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2935E8u;
        goto label_2935e8;
    }
    ctx->pc = 0x2935E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2935E8u);
        ctx->pc = 0x2935E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935E0u;
        // 0x2935e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2935E0u, 0x2935E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2935E8u;
label_2935e8:
    // 0x2935e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2935e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2935ec:
    // 0x2935ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2935f0:
    if (ctx->pc == 0x2935F0u) {
        ctx->pc = 0x2935F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935ECu;
        // 0x2935f0: 0xa6020786  sh          $v0, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2935F4u;
        goto label_2935f4;
    }
    ctx->pc = 0x2935ECu;
    {
        const bool branch_taken_0x2935ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935ECu;
        // 0x2935f0: 0xa6020786  sh          $v0, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935ec) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x2935F4u;
label_2935f4:
    // 0x2935f4: 0x0  nop
    ctx->pc = 0x2935f4u;
    // NOP
label_2935f8:
    // 0x2935f8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2935f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2935fc:
    // 0x2935fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_293600:
    // 0x293600: 0x320f809  jalr        $t9
label_293604:
    if (ctx->pc == 0x293604u) {
        ctx->pc = 0x293604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293600u;
        // 0x293604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293608u;
        goto label_293608;
    }
    ctx->pc = 0x293600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x293608u);
        ctx->pc = 0x293604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293600u;
        // 0x293604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293600u, 0x293608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293608u;
label_293608:
    // 0x293608: 0x10000095  b           . + 4 + (0x95 << 2)
label_29360c:
    if (ctx->pc == 0x29360Cu) {
        ctx->pc = 0x293610u;
        goto label_293610;
    }
    ctx->pc = 0x293608u;
    {
        const bool branch_taken_0x293608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293608) {
            ctx->pc = 0x293860u;
            goto label_293860;
        }
    }
    ctx->pc = 0x293610u;
label_293610:
    // 0x293610: 0x92022ab7  lbu         $v0, 0x2AB7($s0)
    ctx->pc = 0x293610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10935)));
label_293614:
    // 0x293614: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_293618:
    if (ctx->pc == 0x293618u) {
        ctx->pc = 0x29361Cu;
        goto label_29361c;
    }
    ctx->pc = 0x293614u;
    {
        const bool branch_taken_0x293614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293614) {
            ctx->pc = 0x293648u;
            goto label_293648;
        }
    }
    ctx->pc = 0x29361Cu;
label_29361c:
    // 0x29361c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_293620:
    // 0x293620: 0xa2022ab7  sb          $v0, 0x2AB7($s0)
    ctx->pc = 0x293620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10935), (uint8_t)GPR_U32(ctx, 2));
label_293624:
    // 0x293624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293628:
    // 0x293628: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_29362c:
    if (ctx->pc == 0x29362Cu) {
        ctx->pc = 0x293630u;
        goto label_293630;
    }
    ctx->pc = 0x293628u;
    {
        const bool branch_taken_0x293628 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x293628) {
            ctx->pc = 0x293648u;
            goto label_293648;
        }
    }
    ctx->pc = 0x293630u;
label_293630:
    // 0x293630: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x293630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_293634:
    // 0x293634: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x293634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_293638:
    // 0x293638: 0x320f809  jalr        $t9
label_29363c:
    if (ctx->pc == 0x29363Cu) {
        ctx->pc = 0x29363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293638u;
        // 0x29363c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293640u;
        goto label_293640;
    }
    ctx->pc = 0x293638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x293640u);
        ctx->pc = 0x29363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293638u;
        // 0x29363c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293638u, 0x293640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293640u;
label_293640:
    // 0x293640: 0x10000087  b           . + 4 + (0x87 << 2)
label_293644:
    if (ctx->pc == 0x293644u) {
        ctx->pc = 0x293648u;
        goto label_293648;
    }
    ctx->pc = 0x293640u;
    {
        const bool branch_taken_0x293640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293640) {
            ctx->pc = 0x293860u;
            goto label_293860;
        }
    }
    ctx->pc = 0x293648u;
label_293648:
    // 0x293648: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x293648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_29364c:
    // 0x29364c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x29364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_293650:
    // 0x293650: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_293654:
    if (ctx->pc == 0x293654u) {
        ctx->pc = 0x293658u;
        goto label_293658;
    }
    ctx->pc = 0x293650u;
    {
        const bool branch_taken_0x293650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293650) {
            ctx->pc = 0x2936E0u;
            goto label_2936e0;
        }
    }
    ctx->pc = 0x293658u;
label_293658:
    // 0x293658: 0x8e0206b8  lw          $v0, 0x6B8($s0)
    ctx->pc = 0x293658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1720)));
label_29365c:
    // 0x29365c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293660:
    // 0x293660: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x293660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_293664:
    // 0x293664: 0xae0206b8  sw          $v0, 0x6B8($s0)
    ctx->pc = 0x293664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 2));
label_293668:
    // 0x293668: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29366c:
    // 0x29366c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x29366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_293670:
    // 0x293670: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x293670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_293674:
    // 0x293674: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_293678:
    // 0x293678: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x293678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_29367c:
    // 0x29367c: 0xc0a4978  jal         func_2925E0
label_293680:
    if (ctx->pc == 0x293680u) {
        ctx->pc = 0x293680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29367Cu;
        // 0x293680: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293684u;
        goto label_293684;
    }
    ctx->pc = 0x29367Cu;
    SET_GPR_U32(ctx, 31, 0x293684u);
    ctx->pc = 0x293680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29367Cu;
    // 0x293680: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2925E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2925E0u, 0x29367Cu, 0x293684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293684u;
label_293684:
    // 0x293684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_293688:
    if (ctx->pc == 0x293688u) {
        ctx->pc = 0x29368Cu;
        goto label_29368c;
    }
    ctx->pc = 0x293684u;
    {
        const bool branch_taken_0x293684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293684) {
            ctx->pc = 0x2936A8u;
            goto label_2936a8;
        }
    }
    ctx->pc = 0x29368Cu;
label_29368c:
    // 0x29368c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x29368cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_293690:
    // 0x293690: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_293694:
    // 0x293694: 0x320f809  jalr        $t9
label_293698:
    if (ctx->pc == 0x293698u) {
        ctx->pc = 0x293698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293694u;
        // 0x293698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29369Cu;
        goto label_29369c;
    }
    ctx->pc = 0x293694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29369Cu);
        ctx->pc = 0x293698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293694u;
        // 0x293698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293694u, 0x29369Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29369Cu;
label_29369c:
    // 0x29369c: 0x10000070  b           . + 4 + (0x70 << 2)
label_2936a0:
    if (ctx->pc == 0x2936A0u) {
        ctx->pc = 0x2936A4u;
        goto label_2936a4;
    }
    ctx->pc = 0x29369Cu;
    {
        const bool branch_taken_0x29369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29369c) {
            ctx->pc = 0x293860u;
            goto label_293860;
        }
    }
    ctx->pc = 0x2936A4u;
label_2936a4:
    // 0x2936a4: 0x0  nop
    ctx->pc = 0x2936a4u;
    // NOP
label_2936a8:
    // 0x2936a8: 0x86022b04  lh          $v0, 0x2B04($s0)
    ctx->pc = 0x2936a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11012)));
label_2936ac:
    // 0x2936ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2936acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2936b0:
    // 0x2936b0: 0xa6022b04  sh          $v0, 0x2B04($s0)
    ctx->pc = 0x2936b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11012), (uint16_t)GPR_U32(ctx, 2));
label_2936b4:
    // 0x2936b4: 0x86022b04  lh          $v0, 0x2B04($s0)
    ctx->pc = 0x2936b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11012)));
label_2936b8:
    // 0x2936b8: 0x2841021d  slti        $at, $v0, 0x21D
    ctx->pc = 0x2936b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)541) ? 1 : 0);
label_2936bc:
    // 0x2936bc: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
label_2936c0:
    if (ctx->pc == 0x2936C0u) {
        ctx->pc = 0x2936C4u;
        goto label_2936c4;
    }
    ctx->pc = 0x2936BCu;
    {
        const bool branch_taken_0x2936bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2936bc) {
            ctx->pc = 0x2937A0u;
            goto label_2937a0;
        }
    }
    ctx->pc = 0x2936C4u;
label_2936c4:
    // 0x2936c4: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2936c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2936c8:
    // 0x2936c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2936c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2936cc:
    // 0x2936cc: 0x320f809  jalr        $t9
label_2936d0:
    if (ctx->pc == 0x2936D0u) {
        ctx->pc = 0x2936D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936CCu;
        // 0x2936d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2936D4u;
        goto label_2936d4;
    }
    ctx->pc = 0x2936CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2936D4u);
        ctx->pc = 0x2936D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936CCu;
        // 0x2936d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2936CCu, 0x2936D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2936D4u;
label_2936d4:
    // 0x2936d4: 0x10000062  b           . + 4 + (0x62 << 2)
label_2936d8:
    if (ctx->pc == 0x2936D8u) {
        ctx->pc = 0x2936DCu;
        goto label_2936dc;
    }
    ctx->pc = 0x2936D4u;
    {
        const bool branch_taken_0x2936d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2936d4) {
            ctx->pc = 0x293860u;
            goto label_293860;
        }
    }
    ctx->pc = 0x2936DCu;
label_2936dc:
    // 0x2936dc: 0x0  nop
    ctx->pc = 0x2936dcu;
    // NOP
label_2936e0:
    // 0x2936e0: 0x96030786  lhu         $v1, 0x786($s0)
    ctx->pc = 0x2936e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1926)));
label_2936e4:
    // 0x2936e4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_2936e8:
    if (ctx->pc == 0x2936E8u) {
        ctx->pc = 0x2936ECu;
        goto label_2936ec;
    }
    ctx->pc = 0x2936E4u;
    {
        const bool branch_taken_0x2936e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2936e4) {
            ctx->pc = 0x2937A0u;
            goto label_2937a0;
        }
    }
    ctx->pc = 0x2936ECu;
label_2936ec:
    // 0x2936ec: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x2936ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
label_2936f0:
    // 0x2936f0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2936f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2936f4:
    // 0x2936f4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2936f8:
    if (ctx->pc == 0x2936F8u) {
        ctx->pc = 0x2936F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936F4u;
        // 0x2936f8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2936FCu;
        goto label_2936fc;
    }
    ctx->pc = 0x2936F4u;
    {
        const bool branch_taken_0x2936f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2936F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936F4u;
        // 0x2936f8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936f4) {
            ctx->pc = 0x2937A0u;
            goto label_2937a0;
        }
    }
    ctx->pc = 0x2936FCu;
label_2936fc:
    // 0x2936fc: 0xa6020786  sh          $v0, 0x786($s0)
    ctx->pc = 0x2936fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 2));
label_293700:
    // 0x293700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293704:
    // 0x293704: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
label_293708:
    if (ctx->pc == 0x293708u) {
        ctx->pc = 0x29370Cu;
        goto label_29370c;
    }
    ctx->pc = 0x293704u;
    {
        const bool branch_taken_0x293704 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x293704) {
            ctx->pc = 0x2937A0u;
            goto label_2937a0;
        }
    }
    ctx->pc = 0x29370Cu;
label_29370c:
    // 0x29370c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x29370cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_293710:
    // 0x293710: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x293710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_293714:
    // 0x293714: 0x320f809  jalr        $t9
label_293718:
    if (ctx->pc == 0x293718u) {
        ctx->pc = 0x293718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293714u;
        // 0x293718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29371Cu;
        goto label_29371c;
    }
    ctx->pc = 0x293714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29371Cu);
        ctx->pc = 0x293718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293714u;
        // 0x293718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293714u, 0x29371Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29371Cu;
label_29371c:
    // 0x29371c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x29371cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_293720:
    // 0x293720: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x293720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_293724:
    // 0x293724: 0x320f809  jalr        $t9
label_293728:
    if (ctx->pc == 0x293728u) {
        ctx->pc = 0x293728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293724u;
        // 0x293728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29372Cu;
        goto label_29372c;
    }
    ctx->pc = 0x293724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29372Cu);
        ctx->pc = 0x293728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293724u;
        // 0x293728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293724u, 0x29372Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29372Cu;
label_29372c:
    // 0x29372c: 0x92022b08  lbu         $v0, 0x2B08($s0)
    ctx->pc = 0x29372cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11016)));
label_293730:
    // 0x293730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_293734:
    if (ctx->pc == 0x293734u) {
        ctx->pc = 0x293738u;
        goto label_293738;
    }
    ctx->pc = 0x293730u;
    {
        const bool branch_taken_0x293730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293730) {
            ctx->pc = 0x293740u;
            goto label_293740;
        }
    }
    ctx->pc = 0x293738u;
label_293738:
    // 0x293738: 0x10000003  b           . + 4 + (0x3 << 2)
label_29373c:
    if (ctx->pc == 0x29373Cu) {
        ctx->pc = 0x29373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293738u;
        // 0x29373c: 0xa2002b0a  sb          $zero, 0x2B0A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11018), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293740u;
        goto label_293740;
    }
    ctx->pc = 0x293738u;
    {
        const bool branch_taken_0x293738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293738u;
        // 0x29373c: 0xa2002b0a  sb          $zero, 0x2B0A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11018), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293738) {
            ctx->pc = 0x293748u;
            goto label_293748;
        }
    }
    ctx->pc = 0x293740u;
label_293740:
    // 0x293740: 0x92022b09  lbu         $v0, 0x2B09($s0)
    ctx->pc = 0x293740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11017)));
label_293744:
    // 0x293744: 0xa2022b0a  sb          $v0, 0x2B0A($s0)
    ctx->pc = 0x293744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11018), (uint8_t)GPR_U32(ctx, 2));
label_293748:
    // 0x293748: 0x92072b0a  lbu         $a3, 0x2B0A($s0)
    ctx->pc = 0x293748u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11018)));
label_29374c:
    // 0x29374c: 0x27a4002e  addiu       $a0, $sp, 0x2E
    ctx->pc = 0x29374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
label_293750:
    // 0x293750: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x293750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_293754:
    // 0x293754: 0xc0a31b8  jal         func_28C6E0
label_293758:
    if (ctx->pc == 0x293758u) {
        ctx->pc = 0x293758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293754u;
        // 0x293758: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29375Cu;
        goto label_29375c;
    }
    ctx->pc = 0x293754u;
    SET_GPR_U32(ctx, 31, 0x29375Cu);
    ctx->pc = 0x293758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293754u;
    // 0x293758: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C6E0u, 0x293754u, 0x29375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29375Cu;
label_29375c:
    // 0x29375c: 0x97a5002c  lhu         $a1, 0x2C($sp)
    ctx->pc = 0x29375cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 44)));
label_293760:
    // 0x293760: 0x97a6002e  lhu         $a2, 0x2E($sp)
    ctx->pc = 0x293760u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
label_293764:
    // 0x293764: 0xc0cbb34  jal         func_32ECD0
label_293768:
    if (ctx->pc == 0x293768u) {
        ctx->pc = 0x293768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293764u;
        // 0x293768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29376Cu;
        goto label_29376c;
    }
    ctx->pc = 0x293764u;
    SET_GPR_U32(ctx, 31, 0x29376Cu);
    ctx->pc = 0x293768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293764u;
    // 0x293768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECD0u, 0x293764u, 0x29376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29376Cu;
label_29376c:
    // 0x29376c: 0x8e0206b8  lw          $v0, 0x6B8($s0)
    ctx->pc = 0x29376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1720)));
label_293770:
    // 0x293770: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x293770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_293774:
    // 0x293774: 0xae0206b8  sw          $v0, 0x6B8($s0)
    ctx->pc = 0x293774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 2));
label_293778:
    // 0x293778: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29377c:
    // 0x29377c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x29377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_293780:
    // 0x293780: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x293780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_293784:
    // 0x293784: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_293788:
    // 0x293788: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x293788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_29378c:
    // 0x29378c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x29378cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_293790:
    // 0x293790: 0xa6002b04  sh          $zero, 0x2B04($s0)
    ctx->pc = 0x293790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11012), (uint16_t)GPR_U32(ctx, 0));
label_293794:
    // 0x293794: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x293794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_293798:
    // 0x293798: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x293798u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_29379c:
    // 0x29379c: 0x0  nop
    ctx->pc = 0x29379cu;
    // NOP
label_2937a0:
    // 0x2937a0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x2937a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_2937a4:
    // 0x2937a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2937a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2937a8:
    // 0x2937a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2937ac:
    if (ctx->pc == 0x2937ACu) {
        ctx->pc = 0x2937B0u;
        goto label_2937b0;
    }
    ctx->pc = 0x2937A8u;
    {
        const bool branch_taken_0x2937a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2937a8) {
            ctx->pc = 0x2937B8u;
            goto label_2937b8;
        }
    }
    ctx->pc = 0x2937B0u;
label_2937b0:
    // 0x2937b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2937b4:
    if (ctx->pc == 0x2937B4u) {
        ctx->pc = 0x2937B8u;
        goto label_2937b8;
    }
    ctx->pc = 0x2937B0u;
    {
        const bool branch_taken_0x2937b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2937b0) {
            ctx->pc = 0x2937C0u;
            goto label_2937c0;
        }
    }
    ctx->pc = 0x2937B8u;
label_2937b8:
    // 0x2937b8: 0xc0a4e1c  jal         func_293870
label_2937bc:
    if (ctx->pc == 0x2937BCu) {
        ctx->pc = 0x2937BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937B8u;
        // 0x2937bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937C0u;
        goto label_2937c0;
    }
    ctx->pc = 0x2937B8u;
    SET_GPR_U32(ctx, 31, 0x2937C0u);
    ctx->pc = 0x2937BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937B8u;
    // 0x2937bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293870u, 0x2937B8u, 0x2937C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937C0u;
label_2937c0:
    // 0x2937c0: 0xc0a5c00  jal         func_297000
label_2937c4:
    if (ctx->pc == 0x2937C4u) {
        ctx->pc = 0x2937C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937C0u;
        // 0x2937c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937C8u;
        goto label_2937c8;
    }
    ctx->pc = 0x2937C0u;
    SET_GPR_U32(ctx, 31, 0x2937C8u);
    ctx->pc = 0x2937C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937C0u;
    // 0x2937c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297000u, 0x2937C0u, 0x2937C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937C8u;
label_2937c8:
    // 0x2937c8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2937c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2937cc:
    // 0x2937cc: 0x2483ffa6  addiu       $v1, $a0, -0x5A
    ctx->pc = 0x2937ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967206));
label_2937d0:
    // 0x2937d0: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x2937d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2937d4:
    // 0x2937d4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_2937d8:
    if (ctx->pc == 0x2937D8u) {
        ctx->pc = 0x2937D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937D4u;
        // 0x2937d8: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937DCu;
        goto label_2937dc;
    }
    ctx->pc = 0x2937D4u;
    {
        const bool branch_taken_0x2937d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2937D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937D4u;
        // 0x2937d8: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937d4) {
            ctx->pc = 0x293810u;
            goto label_293810;
        }
    }
    ctx->pc = 0x2937DCu;
label_2937dc:
    // 0x2937dc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_2937e0:
    if (ctx->pc == 0x2937E0u) {
        ctx->pc = 0x2937E4u;
        goto label_2937e4;
    }
    ctx->pc = 0x2937DCu;
    {
        const bool branch_taken_0x2937dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2937dc) {
            ctx->pc = 0x293810u;
            goto label_293810;
        }
    }
    ctx->pc = 0x2937E4u;
label_2937e4:
    // 0x2937e4: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x2937e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2937e8:
    // 0x2937e8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_2937ec:
    if (ctx->pc == 0x2937ECu) {
        ctx->pc = 0x2937ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937E8u;
        // 0x2937ec: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937F0u;
        goto label_2937f0;
    }
    ctx->pc = 0x2937E8u;
    {
        const bool branch_taken_0x2937e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2937ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937E8u;
        // 0x2937ec: 0x2403004f  addiu       $v1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937e8) {
            ctx->pc = 0x293810u;
            goto label_293810;
        }
    }
    ctx->pc = 0x2937F0u;
label_2937f0:
    // 0x2937f0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2937f4:
    if (ctx->pc == 0x2937F4u) {
        ctx->pc = 0x2937F8u;
        goto label_2937f8;
    }
    ctx->pc = 0x2937F0u;
    {
        const bool branch_taken_0x2937f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2937f0) {
            ctx->pc = 0x293810u;
            goto label_293810;
        }
    }
    ctx->pc = 0x2937F8u;
label_2937f8:
    // 0x2937f8: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x2937f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2937fc:
    // 0x2937fc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_293800:
    if (ctx->pc == 0x293800u) {
        ctx->pc = 0x293800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937FCu;
        // 0x293800: 0x24030056  addiu       $v1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293804u;
        goto label_293804;
    }
    ctx->pc = 0x2937FCu;
    {
        const bool branch_taken_0x2937fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937FCu;
        // 0x293800: 0x24030056  addiu       $v1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937fc) {
            ctx->pc = 0x293810u;
            goto label_293810;
        }
    }
    ctx->pc = 0x293804u;
label_293804:
    // 0x293804: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_293808:
    if (ctx->pc == 0x293808u) {
        ctx->pc = 0x29380Cu;
        goto label_29380c;
    }
    ctx->pc = 0x293804u;
    {
        const bool branch_taken_0x293804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x293804) {
            ctx->pc = 0x293818u;
            goto label_293818;
        }
    }
    ctx->pc = 0x29380Cu;
label_29380c:
    // 0x29380c: 0x0  nop
    ctx->pc = 0x29380cu;
    // NOP
label_293810:
    // 0x293810: 0xa6000784  sh          $zero, 0x784($s0)
    ctx->pc = 0x293810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 0));
label_293814:
    // 0x293814: 0x0  nop
    ctx->pc = 0x293814u;
    // NOP
label_293818:
    // 0x293818: 0x92032ab7  lbu         $v1, 0x2AB7($s0)
    ctx->pc = 0x293818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10935)));
label_29381c:
    // 0x29381c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_293820:
    if (ctx->pc == 0x293820u) {
        ctx->pc = 0x293824u;
        goto label_293824;
    }
    ctx->pc = 0x29381Cu;
    {
        const bool branch_taken_0x29381c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29381c) {
            ctx->pc = 0x293860u;
            goto label_293860;
        }
    }
    ctx->pc = 0x293824u;
label_293824:
    // 0x293824: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_293828:
    // 0x293828: 0x26042ae0  addiu       $a0, $s0, 0x2AE0
    ctx->pc = 0x293828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10976));
label_29382c:
    // 0x29382c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29382cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293830:
    // 0x293830: 0x26062ad0  addiu       $a2, $s0, 0x2AD0
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10960));
label_293834:
    // 0x293834: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x293834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_293838:
    // 0x293838: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x293838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_29383c:
    // 0x29383c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_293840:
    // 0x293840: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x293840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_293844:
    // 0x293844: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x293844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_293848:
    // 0x293848: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29384c:
    // 0x29384c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x29384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_293850:
    // 0x293850: 0xc0414ca  jal         func_105328
label_293854:
    if (ctx->pc == 0x293854u) {
        ctx->pc = 0x293854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293850u;
        // 0x293854: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293858u;
        goto label_293858;
    }
    ctx->pc = 0x293850u;
    SET_GPR_U32(ctx, 31, 0x293858u);
    ctx->pc = 0x293854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293850u;
    // 0x293854: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x293850u, 0x293858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293858u;
label_293858:
    // 0x293858: 0x7a032ae0  lq          $v1, 0x2AE0($s0)
    ctx->pc = 0x293858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 10976)));
label_29385c:
    // 0x29385c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x29385cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_293860:
    // 0x293860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_293864:
    // 0x293864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_293868:
    // 0x293868: 0x3e00008  jr          $ra
label_29386c:
    if (ctx->pc == 0x29386Cu) {
        ctx->pc = 0x29386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293868u;
        // 0x29386c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293870u;
        goto label_fallthrough_0x293868;
    }
    ctx->pc = 0x293868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293868u;
        // 0x29386c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x293868:
    ctx->pc = 0x293870u;
}
