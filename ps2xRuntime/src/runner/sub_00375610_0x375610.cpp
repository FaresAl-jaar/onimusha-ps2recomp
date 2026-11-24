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

// Function: sub_00375610
// Address: 0x375610 - 0x375b30
void sub_00375610_0x375610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375610_0x375610");
#endif

    switch (ctx->pc) {
        case 0x375610u: goto label_375610;
        case 0x375614u: goto label_375614;
        case 0x375618u: goto label_375618;
        case 0x37561cu: goto label_37561c;
        case 0x375620u: goto label_375620;
        case 0x375624u: goto label_375624;
        case 0x375628u: goto label_375628;
        case 0x37562cu: goto label_37562c;
        case 0x375630u: goto label_375630;
        case 0x375634u: goto label_375634;
        case 0x375638u: goto label_375638;
        case 0x37563cu: goto label_37563c;
        case 0x375640u: goto label_375640;
        case 0x375644u: goto label_375644;
        case 0x375648u: goto label_375648;
        case 0x37564cu: goto label_37564c;
        case 0x375650u: goto label_375650;
        case 0x375654u: goto label_375654;
        case 0x375658u: goto label_375658;
        case 0x37565cu: goto label_37565c;
        case 0x375660u: goto label_375660;
        case 0x375664u: goto label_375664;
        case 0x375668u: goto label_375668;
        case 0x37566cu: goto label_37566c;
        case 0x375670u: goto label_375670;
        case 0x375674u: goto label_375674;
        case 0x375678u: goto label_375678;
        case 0x37567cu: goto label_37567c;
        case 0x375680u: goto label_375680;
        case 0x375684u: goto label_375684;
        case 0x375688u: goto label_375688;
        case 0x37568cu: goto label_37568c;
        case 0x375690u: goto label_375690;
        case 0x375694u: goto label_375694;
        case 0x375698u: goto label_375698;
        case 0x37569cu: goto label_37569c;
        case 0x3756a0u: goto label_3756a0;
        case 0x3756a4u: goto label_3756a4;
        case 0x3756a8u: goto label_3756a8;
        case 0x3756acu: goto label_3756ac;
        case 0x3756b0u: goto label_3756b0;
        case 0x3756b4u: goto label_3756b4;
        case 0x3756b8u: goto label_3756b8;
        case 0x3756bcu: goto label_3756bc;
        case 0x3756c0u: goto label_3756c0;
        case 0x3756c4u: goto label_3756c4;
        case 0x3756c8u: goto label_3756c8;
        case 0x3756ccu: goto label_3756cc;
        case 0x3756d0u: goto label_3756d0;
        case 0x3756d4u: goto label_3756d4;
        case 0x3756d8u: goto label_3756d8;
        case 0x3756dcu: goto label_3756dc;
        case 0x3756e0u: goto label_3756e0;
        case 0x3756e4u: goto label_3756e4;
        case 0x3756e8u: goto label_3756e8;
        case 0x3756ecu: goto label_3756ec;
        case 0x3756f0u: goto label_3756f0;
        case 0x3756f4u: goto label_3756f4;
        case 0x3756f8u: goto label_3756f8;
        case 0x3756fcu: goto label_3756fc;
        case 0x375700u: goto label_375700;
        case 0x375704u: goto label_375704;
        case 0x375708u: goto label_375708;
        case 0x37570cu: goto label_37570c;
        case 0x375710u: goto label_375710;
        case 0x375714u: goto label_375714;
        case 0x375718u: goto label_375718;
        case 0x37571cu: goto label_37571c;
        case 0x375720u: goto label_375720;
        case 0x375724u: goto label_375724;
        case 0x375728u: goto label_375728;
        case 0x37572cu: goto label_37572c;
        case 0x375730u: goto label_375730;
        case 0x375734u: goto label_375734;
        case 0x375738u: goto label_375738;
        case 0x37573cu: goto label_37573c;
        case 0x375740u: goto label_375740;
        case 0x375744u: goto label_375744;
        case 0x375748u: goto label_375748;
        case 0x37574cu: goto label_37574c;
        case 0x375750u: goto label_375750;
        case 0x375754u: goto label_375754;
        case 0x375758u: goto label_375758;
        case 0x37575cu: goto label_37575c;
        case 0x375760u: goto label_375760;
        case 0x375764u: goto label_375764;
        case 0x375768u: goto label_375768;
        case 0x37576cu: goto label_37576c;
        case 0x375770u: goto label_375770;
        case 0x375774u: goto label_375774;
        case 0x375778u: goto label_375778;
        case 0x37577cu: goto label_37577c;
        case 0x375780u: goto label_375780;
        case 0x375784u: goto label_375784;
        case 0x375788u: goto label_375788;
        case 0x37578cu: goto label_37578c;
        case 0x375790u: goto label_375790;
        case 0x375794u: goto label_375794;
        case 0x375798u: goto label_375798;
        case 0x37579cu: goto label_37579c;
        case 0x3757a0u: goto label_3757a0;
        case 0x3757a4u: goto label_3757a4;
        case 0x3757a8u: goto label_3757a8;
        case 0x3757acu: goto label_3757ac;
        case 0x3757b0u: goto label_3757b0;
        case 0x3757b4u: goto label_3757b4;
        case 0x3757b8u: goto label_3757b8;
        case 0x3757bcu: goto label_3757bc;
        case 0x3757c0u: goto label_3757c0;
        case 0x3757c4u: goto label_3757c4;
        case 0x3757c8u: goto label_3757c8;
        case 0x3757ccu: goto label_3757cc;
        case 0x3757d0u: goto label_3757d0;
        case 0x3757d4u: goto label_3757d4;
        case 0x3757d8u: goto label_3757d8;
        case 0x3757dcu: goto label_3757dc;
        case 0x3757e0u: goto label_3757e0;
        case 0x3757e4u: goto label_3757e4;
        case 0x3757e8u: goto label_3757e8;
        case 0x3757ecu: goto label_3757ec;
        case 0x3757f0u: goto label_3757f0;
        case 0x3757f4u: goto label_3757f4;
        case 0x3757f8u: goto label_3757f8;
        case 0x3757fcu: goto label_3757fc;
        case 0x375800u: goto label_375800;
        case 0x375804u: goto label_375804;
        case 0x375808u: goto label_375808;
        case 0x37580cu: goto label_37580c;
        case 0x375810u: goto label_375810;
        case 0x375814u: goto label_375814;
        case 0x375818u: goto label_375818;
        case 0x37581cu: goto label_37581c;
        case 0x375820u: goto label_375820;
        case 0x375824u: goto label_375824;
        case 0x375828u: goto label_375828;
        case 0x37582cu: goto label_37582c;
        case 0x375830u: goto label_375830;
        case 0x375834u: goto label_375834;
        case 0x375838u: goto label_375838;
        case 0x37583cu: goto label_37583c;
        case 0x375840u: goto label_375840;
        case 0x375844u: goto label_375844;
        case 0x375848u: goto label_375848;
        case 0x37584cu: goto label_37584c;
        case 0x375850u: goto label_375850;
        case 0x375854u: goto label_375854;
        case 0x375858u: goto label_375858;
        case 0x37585cu: goto label_37585c;
        case 0x375860u: goto label_375860;
        case 0x375864u: goto label_375864;
        case 0x375868u: goto label_375868;
        case 0x37586cu: goto label_37586c;
        case 0x375870u: goto label_375870;
        case 0x375874u: goto label_375874;
        case 0x375878u: goto label_375878;
        case 0x37587cu: goto label_37587c;
        case 0x375880u: goto label_375880;
        case 0x375884u: goto label_375884;
        case 0x375888u: goto label_375888;
        case 0x37588cu: goto label_37588c;
        case 0x375890u: goto label_375890;
        case 0x375894u: goto label_375894;
        case 0x375898u: goto label_375898;
        case 0x37589cu: goto label_37589c;
        case 0x3758a0u: goto label_3758a0;
        case 0x3758a4u: goto label_3758a4;
        case 0x3758a8u: goto label_3758a8;
        case 0x3758acu: goto label_3758ac;
        case 0x3758b0u: goto label_3758b0;
        case 0x3758b4u: goto label_3758b4;
        case 0x3758b8u: goto label_3758b8;
        case 0x3758bcu: goto label_3758bc;
        case 0x3758c0u: goto label_3758c0;
        case 0x3758c4u: goto label_3758c4;
        case 0x3758c8u: goto label_3758c8;
        case 0x3758ccu: goto label_3758cc;
        case 0x3758d0u: goto label_3758d0;
        case 0x3758d4u: goto label_3758d4;
        case 0x3758d8u: goto label_3758d8;
        case 0x3758dcu: goto label_3758dc;
        case 0x3758e0u: goto label_3758e0;
        case 0x3758e4u: goto label_3758e4;
        case 0x3758e8u: goto label_3758e8;
        case 0x3758ecu: goto label_3758ec;
        case 0x3758f0u: goto label_3758f0;
        case 0x3758f4u: goto label_3758f4;
        case 0x3758f8u: goto label_3758f8;
        case 0x3758fcu: goto label_3758fc;
        case 0x375900u: goto label_375900;
        case 0x375904u: goto label_375904;
        case 0x375908u: goto label_375908;
        case 0x37590cu: goto label_37590c;
        case 0x375910u: goto label_375910;
        case 0x375914u: goto label_375914;
        case 0x375918u: goto label_375918;
        case 0x37591cu: goto label_37591c;
        case 0x375920u: goto label_375920;
        case 0x375924u: goto label_375924;
        case 0x375928u: goto label_375928;
        case 0x37592cu: goto label_37592c;
        case 0x375930u: goto label_375930;
        case 0x375934u: goto label_375934;
        case 0x375938u: goto label_375938;
        case 0x37593cu: goto label_37593c;
        case 0x375940u: goto label_375940;
        case 0x375944u: goto label_375944;
        case 0x375948u: goto label_375948;
        case 0x37594cu: goto label_37594c;
        case 0x375950u: goto label_375950;
        case 0x375954u: goto label_375954;
        case 0x375958u: goto label_375958;
        case 0x37595cu: goto label_37595c;
        case 0x375960u: goto label_375960;
        case 0x375964u: goto label_375964;
        case 0x375968u: goto label_375968;
        case 0x37596cu: goto label_37596c;
        case 0x375970u: goto label_375970;
        case 0x375974u: goto label_375974;
        case 0x375978u: goto label_375978;
        case 0x37597cu: goto label_37597c;
        case 0x375980u: goto label_375980;
        case 0x375984u: goto label_375984;
        case 0x375988u: goto label_375988;
        case 0x37598cu: goto label_37598c;
        case 0x375990u: goto label_375990;
        case 0x375994u: goto label_375994;
        case 0x375998u: goto label_375998;
        case 0x37599cu: goto label_37599c;
        case 0x3759a0u: goto label_3759a0;
        case 0x3759a4u: goto label_3759a4;
        case 0x3759a8u: goto label_3759a8;
        case 0x3759acu: goto label_3759ac;
        case 0x3759b0u: goto label_3759b0;
        case 0x3759b4u: goto label_3759b4;
        case 0x3759b8u: goto label_3759b8;
        case 0x3759bcu: goto label_3759bc;
        case 0x3759c0u: goto label_3759c0;
        case 0x3759c4u: goto label_3759c4;
        case 0x3759c8u: goto label_3759c8;
        case 0x3759ccu: goto label_3759cc;
        case 0x3759d0u: goto label_3759d0;
        case 0x3759d4u: goto label_3759d4;
        case 0x3759d8u: goto label_3759d8;
        case 0x3759dcu: goto label_3759dc;
        case 0x3759e0u: goto label_3759e0;
        case 0x3759e4u: goto label_3759e4;
        case 0x3759e8u: goto label_3759e8;
        case 0x3759ecu: goto label_3759ec;
        case 0x3759f0u: goto label_3759f0;
        case 0x3759f4u: goto label_3759f4;
        case 0x3759f8u: goto label_3759f8;
        case 0x3759fcu: goto label_3759fc;
        case 0x375a00u: goto label_375a00;
        case 0x375a04u: goto label_375a04;
        case 0x375a08u: goto label_375a08;
        case 0x375a0cu: goto label_375a0c;
        case 0x375a10u: goto label_375a10;
        case 0x375a14u: goto label_375a14;
        case 0x375a18u: goto label_375a18;
        case 0x375a1cu: goto label_375a1c;
        case 0x375a20u: goto label_375a20;
        case 0x375a24u: goto label_375a24;
        case 0x375a28u: goto label_375a28;
        case 0x375a2cu: goto label_375a2c;
        case 0x375a30u: goto label_375a30;
        case 0x375a34u: goto label_375a34;
        case 0x375a38u: goto label_375a38;
        case 0x375a3cu: goto label_375a3c;
        case 0x375a40u: goto label_375a40;
        case 0x375a44u: goto label_375a44;
        case 0x375a48u: goto label_375a48;
        case 0x375a4cu: goto label_375a4c;
        case 0x375a50u: goto label_375a50;
        case 0x375a54u: goto label_375a54;
        case 0x375a58u: goto label_375a58;
        case 0x375a5cu: goto label_375a5c;
        case 0x375a60u: goto label_375a60;
        case 0x375a64u: goto label_375a64;
        case 0x375a68u: goto label_375a68;
        case 0x375a6cu: goto label_375a6c;
        case 0x375a70u: goto label_375a70;
        case 0x375a74u: goto label_375a74;
        case 0x375a78u: goto label_375a78;
        case 0x375a7cu: goto label_375a7c;
        case 0x375a80u: goto label_375a80;
        case 0x375a84u: goto label_375a84;
        case 0x375a88u: goto label_375a88;
        case 0x375a8cu: goto label_375a8c;
        case 0x375a90u: goto label_375a90;
        case 0x375a94u: goto label_375a94;
        case 0x375a98u: goto label_375a98;
        case 0x375a9cu: goto label_375a9c;
        case 0x375aa0u: goto label_375aa0;
        case 0x375aa4u: goto label_375aa4;
        case 0x375aa8u: goto label_375aa8;
        case 0x375aacu: goto label_375aac;
        case 0x375ab0u: goto label_375ab0;
        case 0x375ab4u: goto label_375ab4;
        case 0x375ab8u: goto label_375ab8;
        case 0x375abcu: goto label_375abc;
        case 0x375ac0u: goto label_375ac0;
        case 0x375ac4u: goto label_375ac4;
        case 0x375ac8u: goto label_375ac8;
        case 0x375accu: goto label_375acc;
        case 0x375ad0u: goto label_375ad0;
        case 0x375ad4u: goto label_375ad4;
        case 0x375ad8u: goto label_375ad8;
        case 0x375adcu: goto label_375adc;
        case 0x375ae0u: goto label_375ae0;
        case 0x375ae4u: goto label_375ae4;
        case 0x375ae8u: goto label_375ae8;
        case 0x375aecu: goto label_375aec;
        case 0x375af0u: goto label_375af0;
        case 0x375af4u: goto label_375af4;
        case 0x375af8u: goto label_375af8;
        case 0x375afcu: goto label_375afc;
        case 0x375b00u: goto label_375b00;
        case 0x375b04u: goto label_375b04;
        case 0x375b08u: goto label_375b08;
        case 0x375b0cu: goto label_375b0c;
        case 0x375b10u: goto label_375b10;
        case 0x375b14u: goto label_375b14;
        case 0x375b18u: goto label_375b18;
        case 0x375b1cu: goto label_375b1c;
        case 0x375b20u: goto label_375b20;
        case 0x375b24u: goto label_375b24;
        case 0x375b28u: goto label_375b28;
        case 0x375b2cu: goto label_375b2c;
        default: break;
    }

    ctx->pc = 0x375610u;

label_375610:
    // 0x375610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x375610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_375614:
    // 0x375614: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x375614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_375618:
    // 0x375618: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x375618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_37561c:
    // 0x37561c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_375620:
    // 0x375620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_375624:
    // 0x375624: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x375624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_375628:
    // 0x375628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37562c:
    // 0x37562c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37562cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_375630:
    // 0x375630: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x375630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375634:
    // 0x375634: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x375634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_375638:
    // 0x375638: 0x908307d6  lbu         $v1, 0x7D6($a0)
    ctx->pc = 0x375638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2006)));
label_37563c:
    // 0x37563c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_375640:
    if (ctx->pc == 0x375640u) {
        ctx->pc = 0x375640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37563Cu;
        // 0x375640: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375644u;
        goto label_375644;
    }
    ctx->pc = 0x37563Cu;
    {
        const bool branch_taken_0x37563c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x375640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37563Cu;
        // 0x375640: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37563c) {
            ctx->pc = 0x375660u;
            goto label_375660;
        }
    }
    ctx->pc = 0x375644u;
label_375644:
    // 0x375644: 0x92420821  lbu         $v0, 0x821($s2)
    ctx->pc = 0x375644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
label_375648:
    // 0x375648: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x375648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_37564c:
    // 0x37564c: 0x9045004c  lbu         $a1, 0x4C($v0)
    ctx->pc = 0x37564cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
label_375650:
    // 0x375650: 0xc09ffb0  jal         func_27FEC0
label_375654:
    if (ctx->pc == 0x375654u) {
        ctx->pc = 0x375654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375650u;
        // 0x375654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375658u;
        goto label_375658;
    }
    ctx->pc = 0x375650u;
    SET_GPR_U32(ctx, 31, 0x375658u);
    ctx->pc = 0x375654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375650u;
    // 0x375654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x375650u, 0x375658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375658u;
label_375658:
    // 0x375658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x375658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37565c:
    // 0x37565c: 0x0  nop
    ctx->pc = 0x37565cu;
    // NOP
label_375660:
    // 0x375660: 0x92440821  lbu         $a0, 0x821($s2)
    ctx->pc = 0x375660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
label_375664:
    // 0x375664: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_375668:
    // 0x375668: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
label_37566c:
    if (ctx->pc == 0x37566Cu) {
        ctx->pc = 0x37566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375668u;
        // 0x37566c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375670u;
        goto label_375670;
    }
    ctx->pc = 0x375668u;
    {
        const bool branch_taken_0x375668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375668u;
        // 0x37566c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375668) {
            ctx->pc = 0x375A10u;
            goto label_375a10;
        }
    }
    ctx->pc = 0x375670u;
label_375670:
    // 0x375670: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
label_375674:
    if (ctx->pc == 0x375674u) {
        ctx->pc = 0x375678u;
        goto label_375678;
    }
    ctx->pc = 0x375670u;
    {
        const bool branch_taken_0x375670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375670) {
            ctx->pc = 0x3758B8u;
            goto label_3758b8;
        }
    }
    ctx->pc = 0x375678u;
label_375678:
    // 0x375678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37567c:
    // 0x37567c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_375680:
    if (ctx->pc == 0x375680u) {
        ctx->pc = 0x375684u;
        goto label_375684;
    }
    ctx->pc = 0x37567Cu;
    {
        const bool branch_taken_0x37567c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37567c) {
            ctx->pc = 0x3756E0u;
            goto label_3756e0;
        }
    }
    ctx->pc = 0x375684u;
label_375684:
    // 0x375684: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_375688:
    if (ctx->pc == 0x375688u) {
        ctx->pc = 0x37568Cu;
        goto label_37568c;
    }
    ctx->pc = 0x375684u;
    {
        const bool branch_taken_0x375684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375684) {
            ctx->pc = 0x375698u;
            goto label_375698;
        }
    }
    ctx->pc = 0x37568Cu;
label_37568c:
    // 0x37568c: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_375690:
    if (ctx->pc == 0x375690u) {
        ctx->pc = 0x375694u;
        goto label_375694;
    }
    ctx->pc = 0x37568Cu;
    {
        const bool branch_taken_0x37568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37568c) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x375694u;
label_375694:
    // 0x375694: 0x0  nop
    ctx->pc = 0x375694u;
    // NOP
label_375698:
    // 0x375698: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x375698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_37569c:
    // 0x37569c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3756a0:
    // 0x3756a0: 0xc096968  jal         func_25A5A0
label_3756a4:
    if (ctx->pc == 0x3756A4u) {
        ctx->pc = 0x3756A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756A0u;
        // 0x3756a4: 0xc64d07a4  lwc1        $f13, 0x7A4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3756A8u;
        goto label_3756a8;
    }
    ctx->pc = 0x3756A0u;
    SET_GPR_U32(ctx, 31, 0x3756A8u);
    ctx->pc = 0x3756A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3756A0u;
    // 0x3756a4: 0xc64d07a4  lwc1        $f13, 0x7A4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3756A0u, 0x3756A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3756A8u;
label_3756a8:
    // 0x3756a8: 0xe64007a4  swc1        $f0, 0x7A4($s2)
    ctx->pc = 0x3756a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
label_3756ac:
    // 0x3756ac: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x3756acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_3756b0:
    // 0x3756b0: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3756b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3756b4:
    // 0x3756b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3756b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3756b8:
    // 0x3756b8: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3756b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3756bc:
    // 0x3756bc: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x3756bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
label_3756c0:
    // 0x3756c0: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3756c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3756c4:
    // 0x3756c4: 0xa24507f5  sb          $a1, 0x7F5($s2)
    ctx->pc = 0x3756c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3756c8:
    // 0x3756c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3756c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3756cc:
    // 0x3756cc: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x3756ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
label_3756d0:
    // 0x3756d0: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x3756d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
label_3756d4:
    // 0x3756d4: 0xa6400826  sh          $zero, 0x826($s2)
    ctx->pc = 0x3756d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 0));
label_3756d8:
    // 0x3756d8: 0xa640082a  sh          $zero, 0x82A($s2)
    ctx->pc = 0x3756d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 0));
label_3756dc:
    // 0x3756dc: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3756dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3756e0:
    // 0x3756e0: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x3756e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
label_3756e4:
    // 0x3756e4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_3756e8:
    if (ctx->pc == 0x3756E8u) {
        ctx->pc = 0x3756ECu;
        goto label_3756ec;
    }
    ctx->pc = 0x3756E4u;
    {
        const bool branch_taken_0x3756e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3756e4) {
            ctx->pc = 0x375808u;
            goto label_375808;
        }
    }
    ctx->pc = 0x3756ECu;
label_3756ec:
    // 0x3756ec: 0x9642082a  lhu         $v0, 0x82A($s2)
    ctx->pc = 0x3756ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
label_3756f0:
    // 0x3756f0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_3756f4:
    if (ctx->pc == 0x3756F4u) {
        ctx->pc = 0x3756F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756F0u;
        // 0x3756f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3756F8u;
        goto label_3756f8;
    }
    ctx->pc = 0x3756F0u;
    {
        const bool branch_taken_0x3756f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3756F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756F0u;
        // 0x3756f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3756f0) {
            ctx->pc = 0x3757E0u;
            goto label_3757e0;
        }
    }
    ctx->pc = 0x3756F8u;
label_3756f8:
    // 0x3756f8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_3756fc:
    if (ctx->pc == 0x3756FCu) {
        ctx->pc = 0x3756FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756F8u;
        // 0x3756fc: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375700u;
        goto label_375700;
    }
    ctx->pc = 0x3756F8u;
    {
        const bool branch_taken_0x3756f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3756FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756F8u;
        // 0x3756fc: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3756f8) {
            ctx->pc = 0x375778u;
            goto label_375778;
        }
    }
    ctx->pc = 0x375700u;
label_375700:
    // 0x375700: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x375700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375704:
    // 0x375704: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x375704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_375708:
    // 0x375708: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x375708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37570c:
    // 0x37570c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_375710:
    // 0x375710: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x375710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_375714:
    // 0x375714: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x375714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_375718:
    // 0x375718: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x375718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37571c:
    // 0x37571c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37571cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375720:
    // 0x375720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375724:
    // 0x375724: 0x0  nop
    ctx->pc = 0x375724u;
    // NOP
label_375728:
    // 0x375728: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37572c:
    // 0x37572c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37572cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375730:
    // 0x375730: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_375734:
    if (ctx->pc == 0x375734u) {
        ctx->pc = 0x375738u;
        goto label_375738;
    }
    ctx->pc = 0x375730u;
    {
        const bool branch_taken_0x375730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375730) {
            ctx->pc = 0x375748u;
            goto label_375748;
        }
    }
    ctx->pc = 0x375738u;
label_375738:
    // 0x375738: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37573c:
    // 0x37573c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37573cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_375740:
    // 0x375740: 0x10000008  b           . + 4 + (0x8 << 2)
label_375744:
    if (ctx->pc == 0x375744u) {
        ctx->pc = 0x375744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375740u;
        // 0x375744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375748u;
        goto label_375748;
    }
    ctx->pc = 0x375740u;
    {
        const bool branch_taken_0x375740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375740u;
        // 0x375744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375740) {
            ctx->pc = 0x375764u;
            goto label_375764;
        }
    }
    ctx->pc = 0x375748u;
label_375748:
    // 0x375748: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37574c:
    // 0x37574c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_375750:
    // 0x375750: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375750u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375754:
    // 0x375754: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x375754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_375758:
    // 0x375758: 0x0  nop
    ctx->pc = 0x375758u;
    // NOP
label_37575c:
    // 0x37575c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37575cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_375760:
    // 0x375760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_375764:
    // 0x375764: 0xc0a0b40  jal         func_282D00
label_375768:
    if (ctx->pc == 0x375768u) {
        ctx->pc = 0x37576Cu;
        goto label_37576c;
    }
    ctx->pc = 0x375764u;
    SET_GPR_U32(ctx, 31, 0x37576Cu);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x375764u, 0x37576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37576Cu;
label_37576c:
    // 0x37576c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_375770:
    if (ctx->pc == 0x375770u) {
        ctx->pc = 0x375774u;
        goto label_375774;
    }
    ctx->pc = 0x37576Cu;
    {
        const bool branch_taken_0x37576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37576c) {
            ctx->pc = 0x3757E0u;
            goto label_3757e0;
        }
    }
    ctx->pc = 0x375774u;
label_375774:
    // 0x375774: 0x0  nop
    ctx->pc = 0x375774u;
    // NOP
label_375778:
    // 0x375778: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x375778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_37577c:
    // 0x37577c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375780:
    // 0x375780: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x375780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_375784:
    // 0x375784: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x375784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_375788:
    // 0x375788: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x375788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_37578c:
    // 0x37578c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37578cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375790:
    // 0x375790: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x375790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_375794:
    // 0x375794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375798:
    // 0x375798: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x375798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37579c:
    // 0x37579c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37579cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3757a0:
    // 0x3757a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3757a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3757a4:
    // 0x3757a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3757a8:
    if (ctx->pc == 0x3757A8u) {
        ctx->pc = 0x3757ACu;
        goto label_3757ac;
    }
    ctx->pc = 0x3757A4u;
    {
        const bool branch_taken_0x3757a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3757a4) {
            ctx->pc = 0x3757BCu;
            goto label_3757bc;
        }
    }
    ctx->pc = 0x3757ACu;
label_3757ac:
    // 0x3757ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3757acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3757b0:
    // 0x3757b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3757b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3757b4:
    // 0x3757b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3757b8:
    if (ctx->pc == 0x3757B8u) {
        ctx->pc = 0x3757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757B4u;
        // 0x3757b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757BCu;
        goto label_3757bc;
    }
    ctx->pc = 0x3757B4u;
    {
        const bool branch_taken_0x3757b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757B4u;
        // 0x3757b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757b4) {
            ctx->pc = 0x3757D8u;
            goto label_3757d8;
        }
    }
    ctx->pc = 0x3757BCu;
label_3757bc:
    // 0x3757bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3757bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3757c0:
    // 0x3757c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3757c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3757c4:
    // 0x3757c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3757c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3757c8:
    // 0x3757c8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3757c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3757cc:
    // 0x3757cc: 0x0  nop
    ctx->pc = 0x3757ccu;
    // NOP
label_3757d0:
    // 0x3757d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3757d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3757d4:
    // 0x3757d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3757d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3757d8:
    // 0x3757d8: 0xc0a0b40  jal         func_282D00
label_3757dc:
    if (ctx->pc == 0x3757DCu) {
        ctx->pc = 0x3757E0u;
        goto label_3757e0;
    }
    ctx->pc = 0x3757D8u;
    SET_GPR_U32(ctx, 31, 0x3757E0u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x3757D8u, 0x3757E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3757E0u;
label_3757e0:
    // 0x3757e0: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x3757e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
label_3757e4:
    // 0x3757e4: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x3757e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
label_3757e8:
    // 0x3757e8: 0x264407a0  addiu       $a0, $s2, 0x7A0
    ctx->pc = 0x3757e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_3757ec:
    // 0x3757ec: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x3757ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
label_3757f0:
    // 0x3757f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3757f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3757f4:
    // 0x3757f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3757f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3757f8:
    // 0x3757f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3757f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3757fc:
    // 0x3757fc: 0xc0414dc  jal         func_105370
label_375800:
    if (ctx->pc == 0x375800u) {
        ctx->pc = 0x375800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757FCu;
        // 0x375800: 0xa6420826  sh          $v0, 0x826($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375804u;
        goto label_375804;
    }
    ctx->pc = 0x3757FCu;
    SET_GPR_U32(ctx, 31, 0x375804u);
    ctx->pc = 0x375800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3757FCu;
    // 0x375800: 0xa6420826  sh          $v0, 0x826($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3757FCu, 0x375804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375804u;
label_375804:
    // 0x375804: 0x0  nop
    ctx->pc = 0x375804u;
    // NOP
label_375808:
    // 0x375808: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x375808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_37580c:
    // 0x37580c: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_375810:
    if (ctx->pc == 0x375810u) {
        ctx->pc = 0x375814u;
        goto label_375814;
    }
    ctx->pc = 0x37580Cu;
    {
        const bool branch_taken_0x37580c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37580c) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x375814u;
label_375814:
    // 0x375814: 0xa2402b60  sb          $zero, 0x2B60($s2)
    ctx->pc = 0x375814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11104), (uint8_t)GPR_U32(ctx, 0));
label_375818:
    // 0x375818: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x375818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_37581c:
    // 0x37581c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375820:
    // 0x375820: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x375820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_375824:
    // 0x375824: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x375824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_375828:
    // 0x375828: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x375828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_37582c:
    // 0x37582c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37582cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375830:
    // 0x375830: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x375830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_375834:
    // 0x375834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375838:
    // 0x375838: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x375838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37583c:
    // 0x37583c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37583cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_375840:
    // 0x375840: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x375840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375844:
    // 0x375844: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_375848:
    if (ctx->pc == 0x375848u) {
        ctx->pc = 0x37584Cu;
        goto label_37584c;
    }
    ctx->pc = 0x375844u;
    {
        const bool branch_taken_0x375844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375844) {
            ctx->pc = 0x37585Cu;
            goto label_37585c;
        }
    }
    ctx->pc = 0x37584Cu;
label_37584c:
    // 0x37584c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37584cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375850:
    // 0x375850: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x375850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_375854:
    // 0x375854: 0x10000008  b           . + 4 + (0x8 << 2)
label_375858:
    if (ctx->pc == 0x375858u) {
        ctx->pc = 0x375858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375854u;
        // 0x375858: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37585Cu;
        goto label_37585c;
    }
    ctx->pc = 0x375854u;
    {
        const bool branch_taken_0x375854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375854u;
        // 0x375858: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375854) {
            ctx->pc = 0x375878u;
            goto label_375878;
        }
    }
    ctx->pc = 0x37585Cu;
label_37585c:
    // 0x37585c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37585cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375860:
    // 0x375860: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x375860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_375864:
    // 0x375864: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375868:
    // 0x375868: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x375868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37586c:
    // 0x37586c: 0x0  nop
    ctx->pc = 0x37586cu;
    // NOP
label_375870:
    // 0x375870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x375870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_375874:
    // 0x375874: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x375874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_375878:
    // 0x375878: 0xc0a6b14  jal         func_29AC50
label_37587c:
    if (ctx->pc == 0x37587Cu) {
        ctx->pc = 0x37587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375878u;
        // 0x37587c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375880u;
        goto label_375880;
    }
    ctx->pc = 0x375878u;
    SET_GPR_U32(ctx, 31, 0x375880u);
    ctx->pc = 0x37587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375878u;
    // 0x37587c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x375878u, 0x375880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375880u;
label_375880:
    // 0x375880: 0x9246083b  lbu         $a2, 0x83B($s2)
    ctx->pc = 0x375880u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2107)));
label_375884:
    // 0x375884: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375888:
    // 0x375888: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x375888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_37588c:
    // 0x37588c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x37588cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_375890:
    // 0x375890: 0xa246083c  sb          $a2, 0x83C($s2)
    ctx->pc = 0x375890u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2108), (uint8_t)GPR_U32(ctx, 6));
label_375894:
    // 0x375894: 0xa245083b  sb          $a1, 0x83B($s2)
    ctx->pc = 0x375894u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2107), (uint8_t)GPR_U32(ctx, 5));
label_375898:
    // 0x375898: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x375898u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
label_37589c:
    // 0x37589c: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x37589cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3758a0:
    // 0x3758a0: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x3758a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
label_3758a4:
    // 0x3758a4: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x3758a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
label_3758a8:
    // 0x3758a8: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3758a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
label_3758ac:
    // 0x3758ac: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3758b0:
    if (ctx->pc == 0x3758B0u) {
        ctx->pc = 0x3758B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758ACu;
        // 0x3758b0: 0xa2450821  sb          $a1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3758B4u;
        goto label_3758b4;
    }
    ctx->pc = 0x3758ACu;
    {
        const bool branch_taken_0x3758ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3758B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758ACu;
        // 0x3758b0: 0xa2450821  sb          $a1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3758ac) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x3758B4u;
label_3758b4:
    // 0x3758b4: 0x0  nop
    ctx->pc = 0x3758b4u;
    // NOP
label_3758b8:
    // 0x3758b8: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x3758b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
label_3758bc:
    // 0x3758bc: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_3758c0:
    if (ctx->pc == 0x3758C0u) {
        ctx->pc = 0x3758C4u;
        goto label_3758c4;
    }
    ctx->pc = 0x3758BCu;
    {
        const bool branch_taken_0x3758bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3758bc) {
            ctx->pc = 0x3759C8u;
            goto label_3759c8;
        }
    }
    ctx->pc = 0x3758C4u;
label_3758c4:
    // 0x3758c4: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x3758c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
label_3758c8:
    // 0x3758c8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_3758cc:
    if (ctx->pc == 0x3758CCu) {
        ctx->pc = 0x3758D0u;
        goto label_3758d0;
    }
    ctx->pc = 0x3758C8u;
    {
        const bool branch_taken_0x3758c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3758c8) {
            ctx->pc = 0x3759B8u;
            goto label_3759b8;
        }
    }
    ctx->pc = 0x3758D0u;
label_3758d0:
    // 0x3758d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3758d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3758d4:
    // 0x3758d4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_3758d8:
    if (ctx->pc == 0x3758D8u) {
        ctx->pc = 0x3758D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758D4u;
        // 0x3758d8: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3758DCu;
        goto label_3758dc;
    }
    ctx->pc = 0x3758D4u;
    {
        const bool branch_taken_0x3758d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3758D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758D4u;
        // 0x3758d8: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3758d4) {
            ctx->pc = 0x375950u;
            goto label_375950;
        }
    }
    ctx->pc = 0x3758DCu;
label_3758dc:
    // 0x3758dc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3758dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3758e0:
    // 0x3758e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3758e4:
    // 0x3758e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3758e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3758e8:
    // 0x3758e8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3758e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3758ec:
    // 0x3758ec: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3758ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_3758f0:
    // 0x3758f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3758f4:
    // 0x3758f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3758f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3758f8:
    // 0x3758f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3758f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3758fc:
    // 0x3758fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3758fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375900:
    // 0x375900: 0x0  nop
    ctx->pc = 0x375900u;
    // NOP
label_375904:
    // 0x375904: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_375908:
    // 0x375908: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x375908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37590c:
    // 0x37590c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_375910:
    if (ctx->pc == 0x375910u) {
        ctx->pc = 0x375914u;
        goto label_375914;
    }
    ctx->pc = 0x37590Cu;
    {
        const bool branch_taken_0x37590c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37590c) {
            ctx->pc = 0x375924u;
            goto label_375924;
        }
    }
    ctx->pc = 0x375914u;
label_375914:
    // 0x375914: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375918:
    // 0x375918: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x375918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_37591c:
    // 0x37591c: 0x10000008  b           . + 4 + (0x8 << 2)
label_375920:
    if (ctx->pc == 0x375920u) {
        ctx->pc = 0x375920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37591Cu;
        // 0x375920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375924u;
        goto label_375924;
    }
    ctx->pc = 0x37591Cu;
    {
        const bool branch_taken_0x37591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37591Cu;
        // 0x375920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37591c) {
            ctx->pc = 0x375940u;
            goto label_375940;
        }
    }
    ctx->pc = 0x375924u;
label_375924:
    // 0x375924: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375924u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375928:
    // 0x375928: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x375928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_37592c:
    // 0x37592c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37592cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375930:
    // 0x375930: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x375930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_375934:
    // 0x375934: 0x0  nop
    ctx->pc = 0x375934u;
    // NOP
label_375938:
    // 0x375938: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x375938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_37593c:
    // 0x37593c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37593cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_375940:
    // 0x375940: 0xc0a0b40  jal         func_282D00
label_375944:
    if (ctx->pc == 0x375944u) {
        ctx->pc = 0x375948u;
        goto label_375948;
    }
    ctx->pc = 0x375940u;
    SET_GPR_U32(ctx, 31, 0x375948u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x375940u, 0x375948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375948u;
label_375948:
    // 0x375948: 0x1000001b  b           . + 4 + (0x1B << 2)
label_37594c:
    if (ctx->pc == 0x37594Cu) {
        ctx->pc = 0x375950u;
        goto label_375950;
    }
    ctx->pc = 0x375948u;
    {
        const bool branch_taken_0x375948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375948) {
            ctx->pc = 0x3759B8u;
            goto label_3759b8;
        }
    }
    ctx->pc = 0x375950u;
label_375950:
    // 0x375950: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x375950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_375954:
    // 0x375954: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x375954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375958:
    // 0x375958: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x375958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_37595c:
    // 0x37595c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_375960:
    // 0x375960: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x375960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_375964:
    // 0x375964: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x375964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375968:
    // 0x375968: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x375968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_37596c:
    // 0x37596c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375970:
    // 0x375970: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x375970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_375974:
    // 0x375974: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_375978:
    // 0x375978: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x375978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37597c:
    // 0x37597c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_375980:
    if (ctx->pc == 0x375980u) {
        ctx->pc = 0x375984u;
        goto label_375984;
    }
    ctx->pc = 0x37597Cu;
    {
        const bool branch_taken_0x37597c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37597c) {
            ctx->pc = 0x375994u;
            goto label_375994;
        }
    }
    ctx->pc = 0x375984u;
label_375984:
    // 0x375984: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375988:
    // 0x375988: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x375988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_37598c:
    // 0x37598c: 0x10000008  b           . + 4 + (0x8 << 2)
label_375990:
    if (ctx->pc == 0x375990u) {
        ctx->pc = 0x375990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37598Cu;
        // 0x375990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375994u;
        goto label_375994;
    }
    ctx->pc = 0x37598Cu;
    {
        const bool branch_taken_0x37598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37598Cu;
        // 0x375990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37598c) {
            ctx->pc = 0x3759B0u;
            goto label_3759b0;
        }
    }
    ctx->pc = 0x375994u;
label_375994:
    // 0x375994: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375994u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375998:
    // 0x375998: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x375998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_37599c:
    // 0x37599c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37599cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3759a0:
    // 0x3759a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3759a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3759a4:
    // 0x3759a4: 0x0  nop
    ctx->pc = 0x3759a4u;
    // NOP
label_3759a8:
    // 0x3759a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3759a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3759ac:
    // 0x3759ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3759acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3759b0:
    // 0x3759b0: 0xc0a0b40  jal         func_282D00
label_3759b4:
    if (ctx->pc == 0x3759B4u) {
        ctx->pc = 0x3759B8u;
        goto label_3759b8;
    }
    ctx->pc = 0x3759B0u;
    SET_GPR_U32(ctx, 31, 0x3759B8u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x3759B0u, 0x3759B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759B8u;
label_3759b8:
    // 0x3759b8: 0x96430826  lhu         $v1, 0x826($s2)
    ctx->pc = 0x3759b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
label_3759bc:
    // 0x3759bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3759bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3759c0:
    // 0x3759c0: 0xa6430826  sh          $v1, 0x826($s2)
    ctx->pc = 0x3759c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 3));
label_3759c4:
    // 0x3759c4: 0x0  nop
    ctx->pc = 0x3759c4u;
    // NOP
label_3759c8:
    // 0x3759c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_3759cc:
    if (ctx->pc == 0x3759CCu) {
        ctx->pc = 0x3759D0u;
        goto label_3759d0;
    }
    ctx->pc = 0x3759C8u;
    {
        const bool branch_taken_0x3759c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3759c8) {
            ctx->pc = 0x3759F0u;
            goto label_3759f0;
        }
    }
    ctx->pc = 0x3759D0u;
label_3759d0:
    // 0x3759d0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3759d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3759d4:
    // 0x3759d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3759d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3759d8:
    // 0x3759d8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_3759dc:
    if (ctx->pc == 0x3759DCu) {
        ctx->pc = 0x3759E0u;
        goto label_3759e0;
    }
    ctx->pc = 0x3759D8u;
    {
        const bool branch_taken_0x3759d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3759d8) {
            ctx->pc = 0x3759F0u;
            goto label_3759f0;
        }
    }
    ctx->pc = 0x3759E0u;
label_3759e0:
    // 0x3759e0: 0x964329de  lhu         $v1, 0x29DE($s2)
    ctx->pc = 0x3759e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10718)));
label_3759e4:
    // 0x3759e4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3759e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3759e8:
    // 0x3759e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3759ec:
    if (ctx->pc == 0x3759ECu) {
        ctx->pc = 0x3759F0u;
        goto label_3759f0;
    }
    ctx->pc = 0x3759E8u;
    {
        const bool branch_taken_0x3759e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3759e8) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x3759F0u;
label_3759f0:
    // 0x3759f0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_3759f4:
    if (ctx->pc == 0x3759F4u) {
        ctx->pc = 0x3759F8u;
        goto label_3759f8;
    }
    ctx->pc = 0x3759F0u;
    {
        const bool branch_taken_0x3759f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3759f0) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x3759F8u;
label_3759f8:
    // 0x3759f8: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3759f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
label_3759fc:
    // 0x3759fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_375a00:
    if (ctx->pc == 0x375A00u) {
        ctx->pc = 0x375A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759FCu;
        // 0x375a00: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A04u;
        goto label_375a04;
    }
    ctx->pc = 0x3759FCu;
    {
        const bool branch_taken_0x3759fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3759FCu;
        // 0x375a00: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3759fc) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x375A04u;
label_375a04:
    // 0x375a04: 0x10000004  b           . + 4 + (0x4 << 2)
label_375a08:
    if (ctx->pc == 0x375A08u) {
        ctx->pc = 0x375A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A04u;
        // 0x375a08: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A0Cu;
        goto label_375a0c;
    }
    ctx->pc = 0x375A04u;
    {
        const bool branch_taken_0x375a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A04u;
        // 0x375a08: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a04) {
            ctx->pc = 0x375A18u;
            goto label_375a18;
        }
    }
    ctx->pc = 0x375A0Cu;
label_375a0c:
    // 0x375a0c: 0x0  nop
    ctx->pc = 0x375a0cu;
    // NOP
label_375a10:
    // 0x375a10: 0x10000041  b           . + 4 + (0x41 << 2)
label_375a14:
    if (ctx->pc == 0x375A14u) {
        ctx->pc = 0x375A18u;
        goto label_375a18;
    }
    ctx->pc = 0x375A10u;
    {
        const bool branch_taken_0x375a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375a10) {
            ctx->pc = 0x375B18u;
            goto label_375b18;
        }
    }
    ctx->pc = 0x375A18u;
label_375a18:
    // 0x375a18: 0x924307d6  lbu         $v1, 0x7D6($s2)
    ctx->pc = 0x375a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2006)));
label_375a1c:
    // 0x375a1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_375a20:
    if (ctx->pc == 0x375A20u) {
        ctx->pc = 0x375A24u;
        goto label_375a24;
    }
    ctx->pc = 0x375A1Cu;
    {
        const bool branch_taken_0x375a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375a1c) {
            ctx->pc = 0x375A48u;
            goto label_375a48;
        }
    }
    ctx->pc = 0x375A24u;
label_375a24:
    // 0x375a24: 0x9643082c  lhu         $v1, 0x82C($s2)
    ctx->pc = 0x375a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
label_375a28:
    // 0x375a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_375a2c:
    // 0x375a2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x375a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_375a30:
    // 0x375a30: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x375a30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_375a34:
    // 0x375a34: 0xc096970  jal         func_25A5C0
label_375a38:
    if (ctx->pc == 0x375A38u) {
        ctx->pc = 0x375A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A34u;
        // 0x375a38: 0xa642082c  sh          $v0, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A3Cu;
        goto label_375a3c;
    }
    ctx->pc = 0x375A34u;
    SET_GPR_U32(ctx, 31, 0x375A3Cu);
    ctx->pc = 0x375A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A34u;
    // 0x375a38: 0xa642082c  sh          $v0, 0x82C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x375A34u, 0x375A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A3Cu;
label_375a3c:
    // 0x375a3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_375a40:
    if (ctx->pc == 0x375A40u) {
        ctx->pc = 0x375A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A3Cu;
        // 0x375a40: 0xa64207f0  sh          $v0, 0x7F0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A44u;
        goto label_375a44;
    }
    ctx->pc = 0x375A3Cu;
    {
        const bool branch_taken_0x375a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A3Cu;
        // 0x375a40: 0xa64207f0  sh          $v0, 0x7F0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a3c) {
            ctx->pc = 0x375A50u;
            goto label_375a50;
        }
    }
    ctx->pc = 0x375A44u;
label_375a44:
    // 0x375a44: 0x0  nop
    ctx->pc = 0x375a44u;
    // NOP
label_375a48:
    // 0x375a48: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x375a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_375a4c:
    // 0x375a4c: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x375a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
label_375a50:
    // 0x375a50: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_375a54:
    if (ctx->pc == 0x375A54u) {
        ctx->pc = 0x375A58u;
        goto label_375a58;
    }
    ctx->pc = 0x375A50u;
    {
        const bool branch_taken_0x375a50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x375a50) {
            ctx->pc = 0x375B18u;
            goto label_375b18;
        }
    }
    ctx->pc = 0x375A58u;
label_375a58:
    // 0x375a58: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x375a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375a5c:
    // 0x375a5c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x375a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_375a60:
    // 0x375a60: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x375a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_375a64:
    // 0x375a64: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x375a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_375a68:
    // 0x375a68: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x375a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_375a6c:
    // 0x375a6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x375a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_375a70:
    // 0x375a70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x375a70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375a74:
    // 0x375a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x375a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375a78:
    // 0x375a78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x375a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_375a7c:
    // 0x375a7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x375a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_375a80:
    // 0x375a80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x375a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375a84:
    // 0x375a84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_375a88:
    if (ctx->pc == 0x375A88u) {
        ctx->pc = 0x375A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A84u;
        // 0x375a88: 0x96450826  lhu         $a1, 0x826($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A8Cu;
        goto label_375a8c;
    }
    ctx->pc = 0x375A84u;
    {
        const bool branch_taken_0x375a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x375A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A84u;
        // 0x375a88: 0x96450826  lhu         $a1, 0x826($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a84) {
            ctx->pc = 0x375A9Cu;
            goto label_375a9c;
        }
    }
    ctx->pc = 0x375A8Cu;
label_375a8c:
    // 0x375a8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375a90:
    // 0x375a90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x375a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_375a94:
    // 0x375a94: 0x10000008  b           . + 4 + (0x8 << 2)
label_375a98:
    if (ctx->pc == 0x375A98u) {
        ctx->pc = 0x375A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A94u;
        // 0x375a98: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x375A9Cu;
        goto label_375a9c;
    }
    ctx->pc = 0x375A94u;
    {
        const bool branch_taken_0x375a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A94u;
        // 0x375a98: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a94) {
            ctx->pc = 0x375AB8u;
            goto label_375ab8;
        }
    }
    ctx->pc = 0x375A9Cu;
label_375a9c:
    // 0x375a9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x375a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375aa0:
    // 0x375aa0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x375aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_375aa4:
    // 0x375aa4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375aa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375aa8:
    // 0x375aa8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x375aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_375aac:
    // 0x375aac: 0x0  nop
    ctx->pc = 0x375aacu;
    // NOP
label_375ab0:
    // 0x375ab0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x375ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_375ab4:
    // 0x375ab4: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x375ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_375ab8:
    // 0x375ab8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_375abc:
    if (ctx->pc == 0x375ABCu) {
        ctx->pc = 0x375AC0u;
        goto label_375ac0;
    }
    ctx->pc = 0x375AB8u;
    {
        const bool branch_taken_0x375ab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x375ab8) {
            ctx->pc = 0x375B18u;
            goto label_375b18;
        }
    }
    ctx->pc = 0x375AC0u;
label_375ac0:
    // 0x375ac0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x375ac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_375ac4:
    // 0x375ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_375ac8:
    // 0x375ac8: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_375acc:
    if (ctx->pc == 0x375ACCu) {
        ctx->pc = 0x375AD0u;
        goto label_375ad0;
    }
    ctx->pc = 0x375AC8u;
    {
        const bool branch_taken_0x375ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x375ac8) {
            ctx->pc = 0x375B18u;
            goto label_375b18;
        }
    }
    ctx->pc = 0x375AD0u;
label_375ad0:
    // 0x375ad0: 0x964329de  lhu         $v1, 0x29DE($s2)
    ctx->pc = 0x375ad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10718)));
label_375ad4:
    // 0x375ad4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x375ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_375ad8:
    // 0x375ad8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_375adc:
    if (ctx->pc == 0x375ADCu) {
        ctx->pc = 0x375AE0u;
        goto label_375ae0;
    }
    ctx->pc = 0x375AD8u;
    {
        const bool branch_taken_0x375ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x375ad8) {
            ctx->pc = 0x375B18u;
            goto label_375b18;
        }
    }
    ctx->pc = 0x375AE0u;
label_375ae0:
    // 0x375ae0: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x375ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
label_375ae4:
    // 0x375ae4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x375ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_375ae8:
    // 0x375ae8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_375aec:
    if (ctx->pc == 0x375AECu) {
        ctx->pc = 0x375AF0u;
        goto label_375af0;
    }
    ctx->pc = 0x375AE8u;
    {
        const bool branch_taken_0x375ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x375ae8) {
            ctx->pc = 0x375B10u;
            goto label_375b10;
        }
    }
    ctx->pc = 0x375AF0u;
label_375af0:
    // 0x375af0: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x375af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_375af4:
    // 0x375af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_375af8:
    // 0x375af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375afc:
    // 0x375afc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x375afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_375b00:
    // 0x375b00: 0x320f809  jalr        $t9
label_375b04:
    if (ctx->pc == 0x375B04u) {
        ctx->pc = 0x375B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B00u;
        // 0x375b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375B08u;
        goto label_375b08;
    }
    ctx->pc = 0x375B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375B08u);
        ctx->pc = 0x375B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B00u;
        // 0x375b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B00u, 0x375B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x375B08u;
label_375b08:
    // 0x375b08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375b0c:
    // 0x375b0c: 0xa6430786  sh          $v1, 0x786($s2)
    ctx->pc = 0x375b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1926), (uint16_t)GPR_U32(ctx, 3));
label_375b10:
    // 0x375b10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_375b14:
    // 0x375b14: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x375b14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_375b18:
    // 0x375b18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x375b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_375b1c:
    // 0x375b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_375b20:
    // 0x375b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x375b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_375b24:
    // 0x375b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_375b28:
    // 0x375b28: 0x3e00008  jr          $ra
label_375b2c:
    if (ctx->pc == 0x375B2Cu) {
        ctx->pc = 0x375B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B28u;
        // 0x375b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375B30u;
        goto label_fallthrough_0x375b28;
    }
    ctx->pc = 0x375B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B28u;
        // 0x375b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x375b28:
    ctx->pc = 0x375B30u;
}
