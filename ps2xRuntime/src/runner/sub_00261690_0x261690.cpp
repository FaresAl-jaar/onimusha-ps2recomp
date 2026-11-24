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

// Function: sub_00261690
// Address: 0x261690 - 0x261bb4
void sub_00261690_0x261690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261690_0x261690");
#endif

    switch (ctx->pc) {
        case 0x261690u: goto label_261690;
        case 0x261694u: goto label_261694;
        case 0x261698u: goto label_261698;
        case 0x26169cu: goto label_26169c;
        case 0x2616a0u: goto label_2616a0;
        case 0x2616a4u: goto label_2616a4;
        case 0x2616a8u: goto label_2616a8;
        case 0x2616acu: goto label_2616ac;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616b4u: goto label_2616b4;
        case 0x2616b8u: goto label_2616b8;
        case 0x2616bcu: goto label_2616bc;
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        case 0x261760u: goto label_261760;
        case 0x261764u: goto label_261764;
        case 0x261768u: goto label_261768;
        case 0x26176cu: goto label_26176c;
        case 0x261770u: goto label_261770;
        case 0x261774u: goto label_261774;
        case 0x261778u: goto label_261778;
        case 0x26177cu: goto label_26177c;
        case 0x261780u: goto label_261780;
        case 0x261784u: goto label_261784;
        case 0x261788u: goto label_261788;
        case 0x26178cu: goto label_26178c;
        case 0x261790u: goto label_261790;
        case 0x261794u: goto label_261794;
        case 0x261798u: goto label_261798;
        case 0x26179cu: goto label_26179c;
        case 0x2617a0u: goto label_2617a0;
        case 0x2617a4u: goto label_2617a4;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617acu: goto label_2617ac;
        case 0x2617b0u: goto label_2617b0;
        case 0x2617b4u: goto label_2617b4;
        case 0x2617b8u: goto label_2617b8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617c0u: goto label_2617c0;
        case 0x2617c4u: goto label_2617c4;
        case 0x2617c8u: goto label_2617c8;
        case 0x2617ccu: goto label_2617cc;
        case 0x2617d0u: goto label_2617d0;
        case 0x2617d4u: goto label_2617d4;
        case 0x2617d8u: goto label_2617d8;
        case 0x2617dcu: goto label_2617dc;
        case 0x2617e0u: goto label_2617e0;
        case 0x2617e4u: goto label_2617e4;
        case 0x2617e8u: goto label_2617e8;
        case 0x2617ecu: goto label_2617ec;
        case 0x2617f0u: goto label_2617f0;
        case 0x2617f4u: goto label_2617f4;
        case 0x2617f8u: goto label_2617f8;
        case 0x2617fcu: goto label_2617fc;
        case 0x261800u: goto label_261800;
        case 0x261804u: goto label_261804;
        case 0x261808u: goto label_261808;
        case 0x26180cu: goto label_26180c;
        case 0x261810u: goto label_261810;
        case 0x261814u: goto label_261814;
        case 0x261818u: goto label_261818;
        case 0x26181cu: goto label_26181c;
        case 0x261820u: goto label_261820;
        case 0x261824u: goto label_261824;
        case 0x261828u: goto label_261828;
        case 0x26182cu: goto label_26182c;
        case 0x261830u: goto label_261830;
        case 0x261834u: goto label_261834;
        case 0x261838u: goto label_261838;
        case 0x26183cu: goto label_26183c;
        case 0x261840u: goto label_261840;
        case 0x261844u: goto label_261844;
        case 0x261848u: goto label_261848;
        case 0x26184cu: goto label_26184c;
        case 0x261850u: goto label_261850;
        case 0x261854u: goto label_261854;
        case 0x261858u: goto label_261858;
        case 0x26185cu: goto label_26185c;
        case 0x261860u: goto label_261860;
        case 0x261864u: goto label_261864;
        case 0x261868u: goto label_261868;
        case 0x26186cu: goto label_26186c;
        case 0x261870u: goto label_261870;
        case 0x261874u: goto label_261874;
        case 0x261878u: goto label_261878;
        case 0x26187cu: goto label_26187c;
        case 0x261880u: goto label_261880;
        case 0x261884u: goto label_261884;
        case 0x261888u: goto label_261888;
        case 0x26188cu: goto label_26188c;
        case 0x261890u: goto label_261890;
        case 0x261894u: goto label_261894;
        case 0x261898u: goto label_261898;
        case 0x26189cu: goto label_26189c;
        case 0x2618a0u: goto label_2618a0;
        case 0x2618a4u: goto label_2618a4;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618acu: goto label_2618ac;
        case 0x2618b0u: goto label_2618b0;
        case 0x2618b4u: goto label_2618b4;
        case 0x2618b8u: goto label_2618b8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618c4u: goto label_2618c4;
        case 0x2618c8u: goto label_2618c8;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618d0u: goto label_2618d0;
        case 0x2618d4u: goto label_2618d4;
        case 0x2618d8u: goto label_2618d8;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618e4u: goto label_2618e4;
        case 0x2618e8u: goto label_2618e8;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618f0u: goto label_2618f0;
        case 0x2618f4u: goto label_2618f4;
        case 0x2618f8u: goto label_2618f8;
        case 0x2618fcu: goto label_2618fc;
        case 0x261900u: goto label_261900;
        case 0x261904u: goto label_261904;
        case 0x261908u: goto label_261908;
        case 0x26190cu: goto label_26190c;
        case 0x261910u: goto label_261910;
        case 0x261914u: goto label_261914;
        case 0x261918u: goto label_261918;
        case 0x26191cu: goto label_26191c;
        case 0x261920u: goto label_261920;
        case 0x261924u: goto label_261924;
        case 0x261928u: goto label_261928;
        case 0x26192cu: goto label_26192c;
        case 0x261930u: goto label_261930;
        case 0x261934u: goto label_261934;
        case 0x261938u: goto label_261938;
        case 0x26193cu: goto label_26193c;
        case 0x261940u: goto label_261940;
        case 0x261944u: goto label_261944;
        case 0x261948u: goto label_261948;
        case 0x26194cu: goto label_26194c;
        case 0x261950u: goto label_261950;
        case 0x261954u: goto label_261954;
        case 0x261958u: goto label_261958;
        case 0x26195cu: goto label_26195c;
        case 0x261960u: goto label_261960;
        case 0x261964u: goto label_261964;
        case 0x261968u: goto label_261968;
        case 0x26196cu: goto label_26196c;
        case 0x261970u: goto label_261970;
        case 0x261974u: goto label_261974;
        case 0x261978u: goto label_261978;
        case 0x26197cu: goto label_26197c;
        case 0x261980u: goto label_261980;
        case 0x261984u: goto label_261984;
        case 0x261988u: goto label_261988;
        case 0x26198cu: goto label_26198c;
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b0u: goto label_2619b0;
        case 0x2619b4u: goto label_2619b4;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619bcu: goto label_2619bc;
        case 0x2619c0u: goto label_2619c0;
        case 0x2619c4u: goto label_2619c4;
        case 0x2619c8u: goto label_2619c8;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619d4u: goto label_2619d4;
        case 0x2619d8u: goto label_2619d8;
        case 0x2619dcu: goto label_2619dc;
        case 0x2619e0u: goto label_2619e0;
        case 0x2619e4u: goto label_2619e4;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619ecu: goto label_2619ec;
        case 0x2619f0u: goto label_2619f0;
        case 0x2619f4u: goto label_2619f4;
        case 0x2619f8u: goto label_2619f8;
        case 0x2619fcu: goto label_2619fc;
        case 0x261a00u: goto label_261a00;
        case 0x261a04u: goto label_261a04;
        case 0x261a08u: goto label_261a08;
        case 0x261a0cu: goto label_261a0c;
        case 0x261a10u: goto label_261a10;
        case 0x261a14u: goto label_261a14;
        case 0x261a18u: goto label_261a18;
        case 0x261a1cu: goto label_261a1c;
        case 0x261a20u: goto label_261a20;
        case 0x261a24u: goto label_261a24;
        case 0x261a28u: goto label_261a28;
        case 0x261a2cu: goto label_261a2c;
        case 0x261a30u: goto label_261a30;
        case 0x261a34u: goto label_261a34;
        case 0x261a38u: goto label_261a38;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a40u: goto label_261a40;
        case 0x261a44u: goto label_261a44;
        case 0x261a48u: goto label_261a48;
        case 0x261a4cu: goto label_261a4c;
        case 0x261a50u: goto label_261a50;
        case 0x261a54u: goto label_261a54;
        case 0x261a58u: goto label_261a58;
        case 0x261a5cu: goto label_261a5c;
        case 0x261a60u: goto label_261a60;
        case 0x261a64u: goto label_261a64;
        case 0x261a68u: goto label_261a68;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a70u: goto label_261a70;
        case 0x261a74u: goto label_261a74;
        case 0x261a78u: goto label_261a78;
        case 0x261a7cu: goto label_261a7c;
        case 0x261a80u: goto label_261a80;
        case 0x261a84u: goto label_261a84;
        case 0x261a88u: goto label_261a88;
        case 0x261a8cu: goto label_261a8c;
        case 0x261a90u: goto label_261a90;
        case 0x261a94u: goto label_261a94;
        case 0x261a98u: goto label_261a98;
        case 0x261a9cu: goto label_261a9c;
        case 0x261aa0u: goto label_261aa0;
        case 0x261aa4u: goto label_261aa4;
        case 0x261aa8u: goto label_261aa8;
        case 0x261aacu: goto label_261aac;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ab4u: goto label_261ab4;
        case 0x261ab8u: goto label_261ab8;
        case 0x261abcu: goto label_261abc;
        case 0x261ac0u: goto label_261ac0;
        case 0x261ac4u: goto label_261ac4;
        case 0x261ac8u: goto label_261ac8;
        case 0x261accu: goto label_261acc;
        case 0x261ad0u: goto label_261ad0;
        case 0x261ad4u: goto label_261ad4;
        case 0x261ad8u: goto label_261ad8;
        case 0x261adcu: goto label_261adc;
        case 0x261ae0u: goto label_261ae0;
        case 0x261ae4u: goto label_261ae4;
        case 0x261ae8u: goto label_261ae8;
        case 0x261aecu: goto label_261aec;
        case 0x261af0u: goto label_261af0;
        case 0x261af4u: goto label_261af4;
        case 0x261af8u: goto label_261af8;
        case 0x261afcu: goto label_261afc;
        case 0x261b00u: goto label_261b00;
        case 0x261b04u: goto label_261b04;
        case 0x261b08u: goto label_261b08;
        case 0x261b0cu: goto label_261b0c;
        case 0x261b10u: goto label_261b10;
        case 0x261b14u: goto label_261b14;
        case 0x261b18u: goto label_261b18;
        case 0x261b1cu: goto label_261b1c;
        case 0x261b20u: goto label_261b20;
        case 0x261b24u: goto label_261b24;
        case 0x261b28u: goto label_261b28;
        case 0x261b2cu: goto label_261b2c;
        case 0x261b30u: goto label_261b30;
        case 0x261b34u: goto label_261b34;
        case 0x261b38u: goto label_261b38;
        case 0x261b3cu: goto label_261b3c;
        case 0x261b40u: goto label_261b40;
        case 0x261b44u: goto label_261b44;
        case 0x261b48u: goto label_261b48;
        case 0x261b4cu: goto label_261b4c;
        case 0x261b50u: goto label_261b50;
        case 0x261b54u: goto label_261b54;
        case 0x261b58u: goto label_261b58;
        case 0x261b5cu: goto label_261b5c;
        case 0x261b60u: goto label_261b60;
        case 0x261b64u: goto label_261b64;
        case 0x261b68u: goto label_261b68;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b70u: goto label_261b70;
        case 0x261b74u: goto label_261b74;
        case 0x261b78u: goto label_261b78;
        case 0x261b7cu: goto label_261b7c;
        case 0x261b80u: goto label_261b80;
        case 0x261b84u: goto label_261b84;
        case 0x261b88u: goto label_261b88;
        case 0x261b8cu: goto label_261b8c;
        case 0x261b90u: goto label_261b90;
        case 0x261b94u: goto label_261b94;
        case 0x261b98u: goto label_261b98;
        case 0x261b9cu: goto label_261b9c;
        case 0x261ba0u: goto label_261ba0;
        case 0x261ba4u: goto label_261ba4;
        case 0x261ba8u: goto label_261ba8;
        case 0x261bacu: goto label_261bac;
        case 0x261bb0u: goto label_261bb0;
        default: break;
    }

    ctx->pc = 0x261690u;

label_261690:
    // 0x261690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_261694:
    // 0x261694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_261698:
    // 0x261698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x261698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26169c:
    // 0x26169c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2616a0:
    // 0x2616a0: 0x97838858  lhu         $v1, -0x77A8($gp)
    ctx->pc = 0x2616a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
label_2616a4:
    // 0x2616a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2616a8:
    if (ctx->pc == 0x2616A8u) {
        ctx->pc = 0x2616A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616A4u;
        // 0x2616a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616ACu;
        goto label_2616ac;
    }
    ctx->pc = 0x2616A4u;
    {
        const bool branch_taken_0x2616a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2616A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616A4u;
        // 0x2616a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616a4) {
            ctx->pc = 0x2616D0u;
            goto label_2616d0;
        }
    }
    ctx->pc = 0x2616ACu;
label_2616ac:
    // 0x2616ac: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x2616acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2616b0:
    // 0x2616b0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2616b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2616b4:
    // 0x2616b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2616b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2616b8:
    // 0x2616b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2616bc:
    if (ctx->pc == 0x2616BCu) {
        ctx->pc = 0x2616C0u;
        goto label_2616c0;
    }
    ctx->pc = 0x2616B8u;
    {
        const bool branch_taken_0x2616b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2616b8) {
            ctx->pc = 0x2616D0u;
            goto label_2616d0;
        }
    }
    ctx->pc = 0x2616C0u;
label_2616c0:
    // 0x2616c0: 0x922304f4  lbu         $v1, 0x4F4($s1)
    ctx->pc = 0x2616c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1268)));
label_2616c4:
    // 0x2616c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2616c8:
    if (ctx->pc == 0x2616C8u) {
        ctx->pc = 0x2616CCu;
        goto label_2616cc;
    }
    ctx->pc = 0x2616C4u;
    {
        const bool branch_taken_0x2616c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2616c4) {
            ctx->pc = 0x2616D8u;
            goto label_2616d8;
        }
    }
    ctx->pc = 0x2616CCu;
label_2616cc:
    // 0x2616cc: 0x0  nop
    ctx->pc = 0x2616ccu;
    // NOP
label_2616d0:
    // 0x2616d0: 0x10000133  b           . + 4 + (0x133 << 2)
label_2616d4:
    if (ctx->pc == 0x2616D4u) {
        ctx->pc = 0x2616D8u;
        goto label_2616d8;
    }
    ctx->pc = 0x2616D0u;
    {
        const bool branch_taken_0x2616d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2616d0) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x2616D8u;
label_2616d8:
    // 0x2616d8: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x2616d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2616dc:
    // 0x2616dc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2616dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2616e0:
    // 0x2616e0: 0x1060012f  beqz        $v1, . + 4 + (0x12F << 2)
label_2616e4:
    if (ctx->pc == 0x2616E4u) {
        ctx->pc = 0x2616E8u;
        goto label_2616e8;
    }
    ctx->pc = 0x2616E0u;
    {
        const bool branch_taken_0x2616e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2616e0) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x2616E8u;
label_2616e8:
    // 0x2616e8: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2616e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2616ec:
    // 0x2616ec: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2616ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2616f0:
    // 0x2616f0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_2616f4:
    if (ctx->pc == 0x2616F4u) {
        ctx->pc = 0x2616F8u;
        goto label_2616f8;
    }
    ctx->pc = 0x2616F0u;
    {
        const bool branch_taken_0x2616f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2616f0) {
            ctx->pc = 0x261738u;
            goto label_261738;
        }
    }
    ctx->pc = 0x2616F8u;
label_2616f8:
    // 0x2616f8: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x2616f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_2616fc:
    // 0x2616fc: 0x28630500  slti        $v1, $v1, 0x500
    ctx->pc = 0x2616fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_261700:
    // 0x261700: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_261704:
    if (ctx->pc == 0x261704u) {
        ctx->pc = 0x261708u;
        goto label_261708;
    }
    ctx->pc = 0x261700u;
    {
        const bool branch_taken_0x261700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261700) {
            ctx->pc = 0x261730u;
            goto label_261730;
        }
    }
    ctx->pc = 0x261708u;
label_261708:
    // 0x261708: 0x922307d4  lbu         $v1, 0x7D4($s1)
    ctx->pc = 0x261708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2004)));
label_26170c:
    // 0x26170c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26170cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_261710:
    // 0x261710: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_261714:
    if (ctx->pc == 0x261714u) {
        ctx->pc = 0x261718u;
        goto label_261718;
    }
    ctx->pc = 0x261710u;
    {
        const bool branch_taken_0x261710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261710) {
            ctx->pc = 0x261730u;
            goto label_261730;
        }
    }
    ctx->pc = 0x261718u;
label_261718:
    // 0x261718: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x261718u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_26171c:
    // 0x26171c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x26171cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_261720:
    // 0x261720: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_261724:
    if (ctx->pc == 0x261724u) {
        ctx->pc = 0x261724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261720u;
        // 0x261724: 0x240300fe  addiu       $v1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261728u;
        goto label_261728;
    }
    ctx->pc = 0x261720u;
    {
        const bool branch_taken_0x261720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261720u;
        // 0x261724: 0x240300fe  addiu       $v1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261720) {
            ctx->pc = 0x261730u;
            goto label_261730;
        }
    }
    ctx->pc = 0x261728u;
label_261728:
    // 0x261728: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x261728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_26172c:
    // 0x26172c: 0x0  nop
    ctx->pc = 0x26172cu;
    // NOP
label_261730:
    // 0x261730: 0x1000011b  b           . + 4 + (0x11B << 2)
label_261734:
    if (ctx->pc == 0x261734u) {
        ctx->pc = 0x261738u;
        goto label_261738;
    }
    ctx->pc = 0x261730u;
    {
        const bool branch_taken_0x261730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261730) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261738u;
label_261738:
    // 0x261738: 0x8e2804e4  lw          $t0, 0x4E4($s1)
    ctx->pc = 0x261738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1252)));
label_26173c:
    // 0x26173c: 0x310300f0  andi        $v1, $t0, 0xF0
    ctx->pc = 0x26173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)240);
label_261740:
    // 0x261740: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_261744:
    if (ctx->pc == 0x261744u) {
        ctx->pc = 0x261748u;
        goto label_261748;
    }
    ctx->pc = 0x261740u;
    {
        const bool branch_taken_0x261740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261740) {
            ctx->pc = 0x261810u;
            goto label_261810;
        }
    }
    ctx->pc = 0x261748u;
label_261748:
    // 0x261748: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x261748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_26174c:
    // 0x26174c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26174cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261750:
    // 0x261750: 0x14660063  bne         $v1, $a2, . + 4 + (0x63 << 2)
label_261754:
    if (ctx->pc == 0x261754u) {
        ctx->pc = 0x261758u;
        goto label_261758;
    }
    ctx->pc = 0x261750u;
    {
        const bool branch_taken_0x261750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x261750) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261758u;
label_261758:
    // 0x261758: 0x8e242ab0  lw          $a0, 0x2AB0($s1)
    ctx->pc = 0x261758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
label_26175c:
    // 0x26175c: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
label_261760:
    if (ctx->pc == 0x261760u) {
        ctx->pc = 0x261764u;
        goto label_261764;
    }
    ctx->pc = 0x26175Cu;
    {
        const bool branch_taken_0x26175c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26175c) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261764u;
label_261764:
    // 0x261764: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x261764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_261768:
    // 0x261768: 0x1466005d  bne         $v1, $a2, . + 4 + (0x5D << 2)
label_26176c:
    if (ctx->pc == 0x26176Cu) {
        ctx->pc = 0x261770u;
        goto label_261770;
    }
    ctx->pc = 0x261768u;
    {
        const bool branch_taken_0x261768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x261768) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261770u;
label_261770:
    // 0x261770: 0x8c8729c0  lw          $a3, 0x29C0($a0)
    ctx->pc = 0x261770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_261774:
    // 0x261774: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x261774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_261778:
    // 0x261778: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
label_26177c:
    if (ctx->pc == 0x26177Cu) {
        ctx->pc = 0x261780u;
        goto label_261780;
    }
    ctx->pc = 0x261778u;
    {
        const bool branch_taken_0x261778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261778) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261780u;
label_261780:
    // 0x261780: 0x948329de  lhu         $v1, 0x29DE($a0)
    ctx->pc = 0x261780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
label_261784:
    // 0x261784: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x261784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_261788:
    // 0x261788: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
label_26178c:
    if (ctx->pc == 0x26178Cu) {
        ctx->pc = 0x261790u;
        goto label_261790;
    }
    ctx->pc = 0x261788u;
    {
        const bool branch_taken_0x261788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261788) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261790u;
label_261790:
    // 0x261790: 0x8c8429c8  lw          $a0, 0x29C8($a0)
    ctx->pc = 0x261790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10696)));
label_261794:
    // 0x261794: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x261794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_261798:
    // 0x261798: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x261798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_26179c:
    // 0x26179c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x26179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2617a0:
    // 0x2617a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2617a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_2617a4:
    // 0x2617a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2617a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2617a8:
    // 0x2617a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2617a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2617ac:
    // 0x2617ac: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_2617b0:
    if (ctx->pc == 0x2617B0u) {
        ctx->pc = 0x2617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ACu;
        // 0x2617b0: 0x31030020  andi        $v1, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617B4u;
        goto label_2617b4;
    }
    ctx->pc = 0x2617ACu;
    {
        const bool branch_taken_0x2617ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ACu;
        // 0x2617b0: 0x31030020  andi        $v1, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617ac) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x2617B4u;
label_2617b4:
    // 0x2617b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2617b8:
    if (ctx->pc == 0x2617B8u) {
        ctx->pc = 0x2617BCu;
        goto label_2617bc;
    }
    ctx->pc = 0x2617B4u;
    {
        const bool branch_taken_0x2617b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2617b4) {
            ctx->pc = 0x2617C8u;
            goto label_2617c8;
        }
    }
    ctx->pc = 0x2617BCu;
label_2617bc:
    // 0x2617bc: 0x10000048  b           . + 4 + (0x48 << 2)
label_2617c0:
    if (ctx->pc == 0x2617C0u) {
        ctx->pc = 0x2617C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617BCu;
        // 0x2617c0: 0xa0e0003a  sb          $zero, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617C4u;
        goto label_2617c4;
    }
    ctx->pc = 0x2617BCu;
    {
        const bool branch_taken_0x2617bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617BCu;
        // 0x2617c0: 0xa0e0003a  sb          $zero, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617bc) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x2617C4u;
label_2617c4:
    // 0x2617c4: 0x0  nop
    ctx->pc = 0x2617c4u;
    // NOP
label_2617c8:
    // 0x2617c8: 0x31030010  andi        $v1, $t0, 0x10
    ctx->pc = 0x2617c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
label_2617cc:
    // 0x2617cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2617d0:
    if (ctx->pc == 0x2617D0u) {
        ctx->pc = 0x2617D4u;
        goto label_2617d4;
    }
    ctx->pc = 0x2617CCu;
    {
        const bool branch_taken_0x2617cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2617cc) {
            ctx->pc = 0x2617E0u;
            goto label_2617e0;
        }
    }
    ctx->pc = 0x2617D4u;
label_2617d4:
    // 0x2617d4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2617d8:
    if (ctx->pc == 0x2617D8u) {
        ctx->pc = 0x2617D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617D4u;
        // 0x2617d8: 0xa0e6003a  sb          $a2, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617DCu;
        goto label_2617dc;
    }
    ctx->pc = 0x2617D4u;
    {
        const bool branch_taken_0x2617d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617D4u;
        // 0x2617d8: 0xa0e6003a  sb          $a2, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617d4) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x2617DCu;
label_2617dc:
    // 0x2617dc: 0x0  nop
    ctx->pc = 0x2617dcu;
    // NOP
label_2617e0:
    // 0x2617e0: 0x31030040  andi        $v1, $t0, 0x40
    ctx->pc = 0x2617e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
label_2617e4:
    // 0x2617e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2617e8:
    if (ctx->pc == 0x2617E8u) {
        ctx->pc = 0x2617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E4u;
        // 0x2617e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617ECu;
        goto label_2617ec;
    }
    ctx->pc = 0x2617E4u;
    {
        const bool branch_taken_0x2617e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E4u;
        // 0x2617e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617e4) {
            ctx->pc = 0x2617F8u;
            goto label_2617f8;
        }
    }
    ctx->pc = 0x2617ECu;
label_2617ec:
    // 0x2617ec: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2617f0:
    if (ctx->pc == 0x2617F0u) {
        ctx->pc = 0x2617F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ECu;
        // 0x2617f0: 0xa0e3003a  sb          $v1, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617F4u;
        goto label_2617f4;
    }
    ctx->pc = 0x2617ECu;
    {
        const bool branch_taken_0x2617ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617ECu;
        // 0x2617f0: 0xa0e3003a  sb          $v1, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617ec) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x2617F4u;
label_2617f4:
    // 0x2617f4: 0x0  nop
    ctx->pc = 0x2617f4u;
    // NOP
label_2617f8:
    // 0x2617f8: 0x31030080  andi        $v1, $t0, 0x80
    ctx->pc = 0x2617f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_2617fc:
    // 0x2617fc: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_261800:
    if (ctx->pc == 0x261800u) {
        ctx->pc = 0x261800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617FCu;
        // 0x261800: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261804u;
        goto label_261804;
    }
    ctx->pc = 0x2617FCu;
    {
        const bool branch_taken_0x2617fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617FCu;
        // 0x261800: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617fc) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261804u;
label_261804:
    // 0x261804: 0x10000036  b           . + 4 + (0x36 << 2)
label_261808:
    if (ctx->pc == 0x261808u) {
        ctx->pc = 0x261808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261804u;
        // 0x261808: 0xa0e3003a  sb          $v1, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26180Cu;
        goto label_26180c;
    }
    ctx->pc = 0x261804u;
    {
        const bool branch_taken_0x261804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261804u;
        // 0x261808: 0xa0e3003a  sb          $v1, 0x3A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261804) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x26180Cu;
label_26180c:
    // 0x26180c: 0x0  nop
    ctx->pc = 0x26180cu;
    // NOP
label_261810:
    // 0x261810: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x261810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_261814:
    // 0x261814: 0x90236c10  lbu         $v1, 0x6C10($at)
    ctx->pc = 0x261814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27664)));
label_261818:
    // 0x261818: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_26181c:
    if (ctx->pc == 0x26181Cu) {
        ctx->pc = 0x261820u;
        goto label_261820;
    }
    ctx->pc = 0x261818u;
    {
        const bool branch_taken_0x261818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261818) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261820u;
label_261820:
    // 0x261820: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x261820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_261824:
    // 0x261824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261828:
    // 0x261828: 0x1465002d  bne         $v1, $a1, . + 4 + (0x2D << 2)
label_26182c:
    if (ctx->pc == 0x26182Cu) {
        ctx->pc = 0x261830u;
        goto label_261830;
    }
    ctx->pc = 0x261828u;
    {
        const bool branch_taken_0x261828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x261828) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261830u;
label_261830:
    // 0x261830: 0x8e302ab0  lw          $s0, 0x2AB0($s1)
    ctx->pc = 0x261830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
label_261834:
    // 0x261834: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_261838:
    if (ctx->pc == 0x261838u) {
        ctx->pc = 0x26183Cu;
        goto label_26183c;
    }
    ctx->pc = 0x261834u;
    {
        const bool branch_taken_0x261834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x261834) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x26183Cu;
label_26183c:
    // 0x26183c: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x26183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_261840:
    // 0x261840: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x261840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_261844:
    // 0x261844: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_261848:
    if (ctx->pc == 0x261848u) {
        ctx->pc = 0x26184Cu;
        goto label_26184c;
    }
    ctx->pc = 0x261844u;
    {
        const bool branch_taken_0x261844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261844) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x26184Cu;
label_26184c:
    // 0x26184c: 0x8e0629c0  lw          $a2, 0x29C0($s0)
    ctx->pc = 0x26184cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_261850:
    // 0x261850: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x261850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_261854:
    // 0x261854: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_261858:
    if (ctx->pc == 0x261858u) {
        ctx->pc = 0x26185Cu;
        goto label_26185c;
    }
    ctx->pc = 0x261854u;
    {
        const bool branch_taken_0x261854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261854) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x26185Cu;
label_26185c:
    // 0x26185c: 0x92040640  lbu         $a0, 0x640($s0)
    ctx->pc = 0x26185cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
label_261860:
    // 0x261860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x261860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_261864:
    // 0x261864: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_261868:
    if (ctx->pc == 0x261868u) {
        ctx->pc = 0x26186Cu;
        goto label_26186c;
    }
    ctx->pc = 0x261864u;
    {
        const bool branch_taken_0x261864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x261864) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x26186Cu;
label_26186c:
    // 0x26186c: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x26186cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_261870:
    // 0x261870: 0x1465001b  bne         $v1, $a1, . + 4 + (0x1B << 2)
label_261874:
    if (ctx->pc == 0x261874u) {
        ctx->pc = 0x261878u;
        goto label_261878;
    }
    ctx->pc = 0x261870u;
    {
        const bool branch_taken_0x261870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x261870) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x261878u;
label_261878:
    // 0x261878: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x261878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_26187c:
    // 0x26187c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x26187cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_261880:
    // 0x261880: 0x8e0429c8  lw          $a0, 0x29C8($s0)
    ctx->pc = 0x261880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10696)));
label_261884:
    // 0x261884: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x261884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_261888:
    // 0x261888: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x261888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_26188c:
    // 0x26188c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x26188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_261890:
    // 0x261890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x261890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_261894:
    // 0x261894: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_261898:
    if (ctx->pc == 0x261898u) {
        ctx->pc = 0x261898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261894u;
        // 0x261898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26189Cu;
        goto label_26189c;
    }
    ctx->pc = 0x261894u;
    {
        const bool branch_taken_0x261894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261894u;
        // 0x261898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261894) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x26189Cu;
label_26189c:
    // 0x26189c: 0xc0a6998  jal         func_29A660
label_2618a0:
    if (ctx->pc == 0x2618A0u) {
        ctx->pc = 0x2618A4u;
        goto label_2618a4;
    }
    ctx->pc = 0x26189Cu;
    SET_GPR_U32(ctx, 31, 0x2618A4u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x26189Cu, 0x2618A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618A4u;
label_2618a4:
    // 0x2618a4: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x2618a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_2618a8:
    // 0x2618a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2618a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2618ac:
    // 0x2618ac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2618acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2618b0:
    // 0x2618b0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2618b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2618b4:
    // 0x2618b4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2618b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2618b8:
    // 0x2618b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2618bc:
    if (ctx->pc == 0x2618BCu) {
        ctx->pc = 0x2618C0u;
        goto label_2618c0;
    }
    ctx->pc = 0x2618B8u;
    {
        const bool branch_taken_0x2618b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618b8) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x2618C0u;
label_2618c0:
    // 0x2618c0: 0x8e242ab0  lw          $a0, 0x2AB0($s1)
    ctx->pc = 0x2618c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
label_2618c4:
    // 0x2618c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2618c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2618c8:
    // 0x2618c8: 0x8c8429c0  lw          $a0, 0x29C0($a0)
    ctx->pc = 0x2618c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_2618cc:
    // 0x2618cc: 0x2485003a  addiu       $a1, $a0, 0x3A
    ctx->pc = 0x2618ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 58));
label_2618d0:
    // 0x2618d0: 0x9084003a  lbu         $a0, 0x3A($a0)
    ctx->pc = 0x2618d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_2618d4:
    // 0x2618d4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_2618d8:
    if (ctx->pc == 0x2618D8u) {
        ctx->pc = 0x2618DCu;
        goto label_2618dc;
    }
    ctx->pc = 0x2618D4u;
    {
        const bool branch_taken_0x2618d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2618d4) {
            ctx->pc = 0x2618E0u;
            goto label_2618e0;
        }
    }
    ctx->pc = 0x2618DCu;
label_2618dc:
    // 0x2618dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2618dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2618e0:
    // 0x2618e0: 0xde250500  ld          $a1, 0x500($s1)
    ctx->pc = 0x2618e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_2618e4:
    // 0x2618e4: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x2618e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_2618e8:
    // 0x2618e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2618ec:
    if (ctx->pc == 0x2618ECu) {
        ctx->pc = 0x2618F0u;
        goto label_2618f0;
    }
    ctx->pc = 0x2618E8u;
    {
        const bool branch_taken_0x2618e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618e8) {
            ctx->pc = 0x261918u;
            goto label_261918;
        }
    }
    ctx->pc = 0x2618F0u;
label_2618f0:
    // 0x2618f0: 0x8e2308cc  lw          $v1, 0x8CC($s1)
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2252)));
label_2618f4:
    // 0x2618f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2618f8:
    if (ctx->pc == 0x2618F8u) {
        ctx->pc = 0x2618FCu;
        goto label_2618fc;
    }
    ctx->pc = 0x2618F4u;
    {
        const bool branch_taken_0x2618f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618f4) {
            ctx->pc = 0x261918u;
            goto label_261918;
        }
    }
    ctx->pc = 0x2618FCu;
label_2618fc:
    // 0x2618fc: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2618fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_261900:
    // 0x261900: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x261900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_261904:
    // 0x261904: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x261904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_261908:
    // 0x261908: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x261908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_26190c:
    // 0x26190c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x26190cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_261910:
    // 0x261910: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_261914:
    if (ctx->pc == 0x261914u) {
        ctx->pc = 0x261914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261910u;
        // 0x261914: 0xae230148  sw          $v1, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261918u;
        goto label_261918;
    }
    ctx->pc = 0x261910u;
    {
        const bool branch_taken_0x261910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261910u;
        // 0x261914: 0xae230148  sw          $v1, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261910) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261918u;
label_261918:
    // 0x261918: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x261918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_26191c:
    // 0x26191c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x26191cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_261920:
    // 0x261920: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_261924:
    if (ctx->pc == 0x261924u) {
        ctx->pc = 0x261928u;
        goto label_261928;
    }
    ctx->pc = 0x261920u;
    {
        const bool branch_taken_0x261920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261920) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261928u;
label_261928:
    // 0x261928: 0x92240780  lbu         $a0, 0x780($s1)
    ctx->pc = 0x261928u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1920)));
label_26192c:
    // 0x26192c: 0x288100f0  slti        $at, $a0, 0xF0
    ctx->pc = 0x26192cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)240) ? 1 : 0);
label_261930:
    // 0x261930: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_261934:
    if (ctx->pc == 0x261934u) {
        ctx->pc = 0x261934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261930u;
        // 0x261934: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261938u;
        goto label_261938;
    }
    ctx->pc = 0x261930u;
    {
        const bool branch_taken_0x261930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x261934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261930u;
        // 0x261934: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261930) {
            ctx->pc = 0x261940u;
            goto label_261940;
        }
    }
    ctx->pc = 0x261938u;
label_261938:
    // 0x261938: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_26193c:
    if (ctx->pc == 0x26193Cu) {
        ctx->pc = 0x261940u;
        goto label_261940;
    }
    ctx->pc = 0x261938u;
    {
        const bool branch_taken_0x261938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x261938) {
            ctx->pc = 0x261948u;
            goto label_261948;
        }
    }
    ctx->pc = 0x261940u;
label_261940:
    // 0x261940: 0x10000097  b           . + 4 + (0x97 << 2)
label_261944:
    if (ctx->pc == 0x261944u) {
        ctx->pc = 0x261948u;
        goto label_261948;
    }
    ctx->pc = 0x261940u;
    {
        const bool branch_taken_0x261940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261940) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261948u;
label_261948:
    // 0x261948: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x261948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_26194c:
    // 0x26194c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_261950:
    if (ctx->pc == 0x261950u) {
        ctx->pc = 0x261954u;
        goto label_261954;
    }
    ctx->pc = 0x26194Cu;
    {
        const bool branch_taken_0x26194c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26194c) {
            ctx->pc = 0x261A38u;
            goto label_261a38;
        }
    }
    ctx->pc = 0x261954u;
label_261954:
    // 0x261954: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x261954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_261958:
    // 0x261958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x261958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26195c:
    // 0x26195c: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
label_261960:
    if (ctx->pc == 0x261960u) {
        ctx->pc = 0x261960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26195Cu;
        // 0x261960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261964u;
        goto label_261964;
    }
    ctx->pc = 0x26195Cu;
    {
        const bool branch_taken_0x26195c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x261960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26195Cu;
        // 0x261960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26195c) {
            ctx->pc = 0x261A38u;
            goto label_261a38;
        }
    }
    ctx->pc = 0x261964u;
label_261964:
    // 0x261964: 0xc09855c  jal         func_261570
label_261968:
    if (ctx->pc == 0x261968u) {
        ctx->pc = 0x26196Cu;
        goto label_26196c;
    }
    ctx->pc = 0x261964u;
    SET_GPR_U32(ctx, 31, 0x26196Cu);
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x261964u, 0x26196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26196Cu;
label_26196c:
    // 0x26196c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_261970:
    if (ctx->pc == 0x261970u) {
        ctx->pc = 0x261974u;
        goto label_261974;
    }
    ctx->pc = 0x26196Cu;
    {
        const bool branch_taken_0x26196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26196c) {
            ctx->pc = 0x261A38u;
            goto label_261a38;
        }
    }
    ctx->pc = 0x261974u;
label_261974:
    // 0x261974: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x261974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_261978:
    // 0x261978: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x261978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
label_26197c:
    // 0x26197c: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x26197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_261980:
    // 0x261980: 0x90a4005f  lbu         $a0, 0x5F($a1)
    ctx->pc = 0x261980u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 95)));
label_261984:
    // 0x261984: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x261984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_261988:
    // 0x261988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26198c:
    // 0x26198c: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x26198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_261990:
    // 0x261990: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_261994:
    if (ctx->pc == 0x261994u) {
        ctx->pc = 0x261994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261990u;
        // 0x261994: 0x94a50006  lhu         $a1, 0x6($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261998u;
        goto label_261998;
    }
    ctx->pc = 0x261990u;
    {
        const bool branch_taken_0x261990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261990u;
        // 0x261994: 0x94a50006  lhu         $a1, 0x6($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261990) {
            ctx->pc = 0x2619F4u;
            goto label_2619f4;
        }
    }
    ctx->pc = 0x261998u;
label_261998:
    // 0x261998: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x261998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26199c:
    // 0x26199c: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x26199cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_2619a0:
    // 0x2619a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2619a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2619a4:
    // 0x2619a4: 0x0  nop
    ctx->pc = 0x2619a4u;
    // NOP
label_2619a8:
    // 0x2619a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2619a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2619ac:
    // 0x2619ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2619acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2619b0:
    // 0x2619b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2619b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2619b4:
    // 0x2619b4: 0x0  nop
    ctx->pc = 0x2619b4u;
    // NOP
label_2619b8:
    // 0x2619b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2619b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2619bc:
    // 0x2619bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2619c0:
    if (ctx->pc == 0x2619C0u) {
        ctx->pc = 0x2619C4u;
        goto label_2619c4;
    }
    ctx->pc = 0x2619BCu;
    {
        const bool branch_taken_0x2619bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2619bc) {
            ctx->pc = 0x2619D4u;
            goto label_2619d4;
        }
    }
    ctx->pc = 0x2619C4u;
label_2619c4:
    // 0x2619c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2619c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2619c8:
    // 0x2619c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2619c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2619cc:
    // 0x2619cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2619d0:
    if (ctx->pc == 0x2619D0u) {
        ctx->pc = 0x2619D4u;
        goto label_2619d4;
    }
    ctx->pc = 0x2619CCu;
    {
        const bool branch_taken_0x2619cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2619cc) {
            ctx->pc = 0x2619ECu;
            goto label_2619ec;
        }
    }
    ctx->pc = 0x2619D4u;
label_2619d4:
    // 0x2619d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2619d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2619d8:
    // 0x2619d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2619dc:
    // 0x2619dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2619dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2619e0:
    // 0x2619e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2619e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2619e4:
    // 0x2619e4: 0x0  nop
    ctx->pc = 0x2619e4u;
    // NOP
label_2619e8:
    // 0x2619e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2619e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2619ec:
    // 0x2619ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2619f0:
    if (ctx->pc == 0x2619F0u) {
        ctx->pc = 0x2619F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619ECu;
        // 0x2619f0: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619F4u;
        goto label_2619f4;
    }
    ctx->pc = 0x2619ECu;
    {
        const bool branch_taken_0x2619ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619ECu;
        // 0x2619f0: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619ec) {
            ctx->pc = 0x2619FCu;
            goto label_2619fc;
        }
    }
    ctx->pc = 0x2619F4u;
label_2619f4:
    // 0x2619f4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2619f8:
    // 0x2619f8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2619f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2619fc:
    // 0x2619fc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2619fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_261a00:
    // 0x261a00: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_261a04:
    if (ctx->pc == 0x261A04u) {
        ctx->pc = 0x261A08u;
        goto label_261a08;
    }
    ctx->pc = 0x261A00u;
    {
        const bool branch_taken_0x261a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261a00) {
            ctx->pc = 0x261A38u;
            goto label_261a38;
        }
    }
    ctx->pc = 0x261A08u;
label_261a08:
    // 0x261a08: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x261a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_261a0c:
    // 0x261a0c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x261a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_261a10:
    // 0x261a10: 0x320f809  jalr        $t9
label_261a14:
    if (ctx->pc == 0x261A14u) {
        ctx->pc = 0x261A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A10u;
        // 0x261a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A18u;
        goto label_261a18;
    }
    ctx->pc = 0x261A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261A18u);
        ctx->pc = 0x261A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A10u;
        // 0x261a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A10u, 0x261A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261A18u;
label_261a18:
    // 0x261a18: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x261a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_261a1c:
    // 0x261a1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x261a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_261a20:
    // 0x261a20: 0x320f809  jalr        $t9
label_261a24:
    if (ctx->pc == 0x261A24u) {
        ctx->pc = 0x261A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A20u;
        // 0x261a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A28u;
        goto label_261a28;
    }
    ctx->pc = 0x261A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261A28u);
        ctx->pc = 0x261A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A20u;
        // 0x261a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A20u, 0x261A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261A28u;
label_261a28:
    // 0x261a28: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_261a2c:
    // 0x261a2c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_261a30:
    if (ctx->pc == 0x261A30u) {
        ctx->pc = 0x261A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A2Cu;
        // 0x261a30: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A34u;
        goto label_261a34;
    }
    ctx->pc = 0x261A2Cu;
    {
        const bool branch_taken_0x261a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A2Cu;
        // 0x261a30: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a2c) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261A34u;
label_261a34:
    // 0x261a34: 0x0  nop
    ctx->pc = 0x261a34u;
    // NOP
label_261a38:
    // 0x261a38: 0x8e2304e0  lw          $v1, 0x4E0($s1)
    ctx->pc = 0x261a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1248)));
label_261a3c:
    // 0x261a3c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x261a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_261a40:
    // 0x261a40: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_261a44:
    if (ctx->pc == 0x261A44u) {
        ctx->pc = 0x261A48u;
        goto label_261a48;
    }
    ctx->pc = 0x261A40u;
    {
        const bool branch_taken_0x261a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a40) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261A48u;
label_261a48:
    // 0x261a48: 0x8e2304e4  lw          $v1, 0x4E4($s1)
    ctx->pc = 0x261a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1252)));
label_261a4c:
    // 0x261a4c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x261a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_261a50:
    // 0x261a50: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_261a54:
    if (ctx->pc == 0x261A54u) {
        ctx->pc = 0x261A58u;
        goto label_261a58;
    }
    ctx->pc = 0x261A50u;
    {
        const bool branch_taken_0x261a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a50) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261A58u;
label_261a58:
    // 0x261a58: 0x8e2629c0  lw          $a2, 0x29C0($s1)
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_261a5c:
    // 0x261a5c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_261a60:
    // 0x261a60: 0x8e2429c8  lw          $a0, 0x29C8($s1)
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
label_261a64:
    // 0x261a64: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x261a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_261a68:
    // 0x261a68: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x261a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_261a6c:
    // 0x261a6c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x261a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_261a70:
    // 0x261a70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x261a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_261a74:
    // 0x261a74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x261a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_261a78:
    // 0x261a78: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_261a7c:
    if (ctx->pc == 0x261A7Cu) {
        ctx->pc = 0x261A80u;
        goto label_261a80;
    }
    ctx->pc = 0x261A78u;
    {
        const bool branch_taken_0x261a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a78) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261A80u;
label_261a80:
    // 0x261a80: 0x922307d4  lbu         $v1, 0x7D4($s1)
    ctx->pc = 0x261a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2004)));
label_261a84:
    // 0x261a84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x261a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_261a88:
    // 0x261a88: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_261a8c:
    if (ctx->pc == 0x261A8Cu) {
        ctx->pc = 0x261A90u;
        goto label_261a90;
    }
    ctx->pc = 0x261A88u;
    {
        const bool branch_taken_0x261a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a88) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261A90u;
label_261a90:
    // 0x261a90: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x261a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_261a94:
    // 0x261a94: 0x28630500  slti        $v1, $v1, 0x500
    ctx->pc = 0x261a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_261a98:
    // 0x261a98: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_261a9c:
    if (ctx->pc == 0x261A9Cu) {
        ctx->pc = 0x261AA0u;
        goto label_261aa0;
    }
    ctx->pc = 0x261A98u;
    {
        const bool branch_taken_0x261a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261a98) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261AA0u;
label_261aa0:
    // 0x261aa0: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x261aa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_261aa4:
    // 0x261aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x261aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261aa8:
    // 0x261aa8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_261aac:
    if (ctx->pc == 0x261AACu) {
        ctx->pc = 0x261AB0u;
        goto label_261ab0;
    }
    ctx->pc = 0x261AA8u;
    {
        const bool branch_taken_0x261aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x261aa8) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261AB0u;
label_261ab0:
    // 0x261ab0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x261ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_261ab4:
    // 0x261ab4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_261ab8:
    if (ctx->pc == 0x261AB8u) {
        ctx->pc = 0x261ABCu;
        goto label_261abc;
    }
    ctx->pc = 0x261AB4u;
    {
        const bool branch_taken_0x261ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ab4) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261ABCu;
label_261abc:
    // 0x261abc: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x261abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_261ac0:
    // 0x261ac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x261ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_261ac4:
    // 0x261ac4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_261ac8:
    if (ctx->pc == 0x261AC8u) {
        ctx->pc = 0x261ACCu;
        goto label_261acc;
    }
    ctx->pc = 0x261AC4u;
    {
        const bool branch_taken_0x261ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261ac4) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261ACCu;
label_261acc:
    // 0x261acc: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x261accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_261ad0:
    // 0x261ad0: 0x286100b0  slti        $at, $v1, 0xB0
    ctx->pc = 0x261ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)176) ? 1 : 0);
label_261ad4:
    // 0x261ad4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_261ad8:
    if (ctx->pc == 0x261AD8u) {
        ctx->pc = 0x261ADCu;
        goto label_261adc;
    }
    ctx->pc = 0x261AD4u;
    {
        const bool branch_taken_0x261ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ad4) {
            ctx->pc = 0x261B30u;
            goto label_261b30;
        }
    }
    ctx->pc = 0x261ADCu;
label_261adc:
    // 0x261adc: 0xa2202ad8  sb          $zero, 0x2AD8($s1)
    ctx->pc = 0x261adcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10968), (uint8_t)GPR_U32(ctx, 0));
label_261ae0:
    // 0x261ae0: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x261ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_261ae4:
    // 0x261ae4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x261ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_261ae8:
    // 0x261ae8: 0xae2206c8  sw          $v0, 0x6C8($s1)
    ctx->pc = 0x261ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 2));
label_261aec:
    // 0x261aec: 0x8e2206cc  lw          $v0, 0x6CC($s1)
    ctx->pc = 0x261aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_261af0:
    // 0x261af0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x261af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_261af4:
    // 0x261af4: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x261af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_261af8:
    // 0x261af8: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x261af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_261afc:
    // 0x261afc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x261afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_261b00:
    // 0x261b00: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x261b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_261b04:
    // 0x261b04: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x261b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_261b08:
    // 0x261b08: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x261b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_261b0c:
    // 0x261b0c: 0x320f809  jalr        $t9
label_261b10:
    if (ctx->pc == 0x261B10u) {
        ctx->pc = 0x261B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B0Cu;
        // 0x261b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B14u;
        goto label_261b14;
    }
    ctx->pc = 0x261B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261B14u);
        ctx->pc = 0x261B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B0Cu;
        // 0x261b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B0Cu, 0x261B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B14u;
label_261b14:
    // 0x261b14: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x261b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_261b18:
    // 0x261b18: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x261b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_261b1c:
    // 0x261b1c: 0x320f809  jalr        $t9
label_261b20:
    if (ctx->pc == 0x261B20u) {
        ctx->pc = 0x261B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B1Cu;
        // 0x261b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B24u;
        goto label_261b24;
    }
    ctx->pc = 0x261B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261B24u);
        ctx->pc = 0x261B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B1Cu;
        // 0x261b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B1Cu, 0x261B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B24u;
label_261b24:
    // 0x261b24: 0x240300fb  addiu       $v1, $zero, 0xFB
    ctx->pc = 0x261b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_261b28:
    // 0x261b28: 0x1000001d  b           . + 4 + (0x1D << 2)
label_261b2c:
    if (ctx->pc == 0x261B2Cu) {
        ctx->pc = 0x261B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B28u;
        // 0x261b2c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B30u;
        goto label_261b30;
    }
    ctx->pc = 0x261B28u;
    {
        const bool branch_taken_0x261b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B28u;
        // 0x261b2c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b28) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B30u;
label_261b30:
    // 0x261b30: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x261b30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_261b34:
    // 0x261b34: 0x240300a9  addiu       $v1, $zero, 0xA9
    ctx->pc = 0x261b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_261b38:
    // 0x261b38: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_261b3c:
    if (ctx->pc == 0x261B3Cu) {
        ctx->pc = 0x261B40u;
        goto label_261b40;
    }
    ctx->pc = 0x261B38u;
    {
        const bool branch_taken_0x261b38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x261b38) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B40u;
label_261b40:
    // 0x261b40: 0xde240500  ld          $a0, 0x500($s1)
    ctx->pc = 0x261b40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_261b44:
    // 0x261b44: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x261b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_261b48:
    // 0x261b48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x261b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_261b4c:
    // 0x261b4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x261b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_261b50:
    // 0x261b50: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_261b54:
    if (ctx->pc == 0x261B54u) {
        ctx->pc = 0x261B58u;
        goto label_261b58;
    }
    ctx->pc = 0x261B50u;
    {
        const bool branch_taken_0x261b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b50) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B58u;
label_261b58:
    // 0x261b58: 0x92232abe  lbu         $v1, 0x2ABE($s1)
    ctx->pc = 0x261b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10942)));
label_261b5c:
    // 0x261b5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x261b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261b60:
    // 0x261b60: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
label_261b64:
    if (ctx->pc == 0x261B64u) {
        ctx->pc = 0x261B68u;
        goto label_261b68;
    }
    ctx->pc = 0x261B60u;
    {
        const bool branch_taken_0x261b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x261b60) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B68u;
label_261b68:
    // 0x261b68: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x261b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_261b6c:
    // 0x261b6c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
label_261b70:
    if (ctx->pc == 0x261B70u) {
        ctx->pc = 0x261B74u;
        goto label_261b74;
    }
    ctx->pc = 0x261B6Cu;
    {
        const bool branch_taken_0x261b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x261b6c) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B74u;
label_261b74:
    // 0x261b74: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_261b78:
    // 0x261b78: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x261b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_261b7c:
    // 0x261b7c: 0x320f809  jalr        $t9
label_261b80:
    if (ctx->pc == 0x261B80u) {
        ctx->pc = 0x261B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B7Cu;
        // 0x261b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B84u;
        goto label_261b84;
    }
    ctx->pc = 0x261B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261B84u);
        ctx->pc = 0x261B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B7Cu;
        // 0x261b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B7Cu, 0x261B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B84u;
label_261b84:
    // 0x261b84: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x261b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_261b88:
    // 0x261b88: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x261b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_261b8c:
    // 0x261b8c: 0x320f809  jalr        $t9
label_261b90:
    if (ctx->pc == 0x261B90u) {
        ctx->pc = 0x261B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B8Cu;
        // 0x261b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B94u;
        goto label_261b94;
    }
    ctx->pc = 0x261B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x261B94u);
        ctx->pc = 0x261B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B8Cu;
        // 0x261b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B8Cu, 0x261B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B94u;
label_261b94:
    // 0x261b94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x261b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_261b98:
    // 0x261b98: 0x10000001  b           . + 4 + (0x1 << 2)
label_261b9c:
    if (ctx->pc == 0x261B9Cu) {
        ctx->pc = 0x261B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B98u;
        // 0x261b9c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BA0u;
        goto label_261ba0;
    }
    ctx->pc = 0x261B98u;
    {
        const bool branch_taken_0x261b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B98u;
        // 0x261b9c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b98) {
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261BA0u;
label_261ba0:
    // 0x261ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261ba4:
    // 0x261ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261ba8:
    // 0x261ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_261bac:
    // 0x261bac: 0x3e00008  jr          $ra
label_261bb0:
    if (ctx->pc == 0x261BB0u) {
        ctx->pc = 0x261BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BACu;
        // 0x261bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BB4u;
        goto label_fallthrough_0x261bac;
    }
    ctx->pc = 0x261BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BACu;
        // 0x261bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261bac:
    ctx->pc = 0x261BB4u;
}
