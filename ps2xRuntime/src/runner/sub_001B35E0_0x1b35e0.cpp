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

// Function: sub_001B35E0
// Address: 0x1b35e0 - 0x1b518c
void sub_001B35E0_0x1b35e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B35E0_0x1b35e0");
#endif

    switch (ctx->pc) {
        case 0x1b3618u: goto label_1b3618;
        case 0x1b3630u: goto label_1b3630;
        case 0x1b3638u: goto label_1b3638;
        case 0x1b3774u: goto label_1b3774;
        case 0x1b377cu: goto label_1b377c;
        case 0x1b37a0u: goto label_1b37a0;
        case 0x1b37b0u: goto label_1b37b0;
        case 0x1b37d4u: goto label_1b37d4;
        case 0x1b37e0u: goto label_1b37e0;
        case 0x1b3810u: goto label_1b3810;
        case 0x1b3850u: goto label_1b3850;
        case 0x1b3860u: goto label_1b3860;
        case 0x1b3870u: goto label_1b3870;
        case 0x1b38c4u: goto label_1b38c4;
        case 0x1b38e0u: goto label_1b38e0;
        case 0x1b3928u: goto label_1b3928;
        case 0x1b3938u: goto label_1b3938;
        case 0x1b394cu: goto label_1b394c;
        case 0x1b3960u: goto label_1b3960;
        case 0x1b3978u: goto label_1b3978;
        case 0x1b39a4u: goto label_1b39a4;
        case 0x1b39b0u: goto label_1b39b0;
        case 0x1b39c4u: goto label_1b39c4;
        case 0x1b39e8u: goto label_1b39e8;
        case 0x1b3a28u: goto label_1b3a28;
        case 0x1b3a4cu: goto label_1b3a4c;
        case 0x1b3a6cu: goto label_1b3a6c;
        case 0x1b3a7cu: goto label_1b3a7c;
        case 0x1b3a8cu: goto label_1b3a8c;
        case 0x1b3a9cu: goto label_1b3a9c;
        case 0x1b3ab8u: goto label_1b3ab8;
        case 0x1b3ac8u: goto label_1b3ac8;
        case 0x1b3b1cu: goto label_1b3b1c;
        case 0x1b3b38u: goto label_1b3b38;
        case 0x1b3b80u: goto label_1b3b80;
        case 0x1b3b94u: goto label_1b3b94;
        case 0x1b3bb8u: goto label_1b3bb8;
        case 0x1b3bccu: goto label_1b3bcc;
        case 0x1b3be4u: goto label_1b3be4;
        case 0x1b3c10u: goto label_1b3c10;
        case 0x1b3c1cu: goto label_1b3c1c;
        case 0x1b3c40u: goto label_1b3c40;
        case 0x1b3c80u: goto label_1b3c80;
        case 0x1b3c88u: goto label_1b3c88;
        case 0x1b3cb4u: goto label_1b3cb4;
        case 0x1b3cdcu: goto label_1b3cdc;
        case 0x1b3d30u: goto label_1b3d30;
        case 0x1b3d50u: goto label_1b3d50;
        case 0x1b3d60u: goto label_1b3d60;
        case 0x1b3d70u: goto label_1b3d70;
        case 0x1b3d84u: goto label_1b3d84;
        case 0x1b3da0u: goto label_1b3da0;
        case 0x1b3db0u: goto label_1b3db0;
        case 0x1b3dd0u: goto label_1b3dd0;
        case 0x1b3e18u: goto label_1b3e18;
        case 0x1b3e2cu: goto label_1b3e2c;
        case 0x1b3e50u: goto label_1b3e50;
        case 0x1b3e64u: goto label_1b3e64;
        case 0x1b3e7cu: goto label_1b3e7c;
        case 0x1b3eb4u: goto label_1b3eb4;
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ee0u: goto label_1b3ee0;
        case 0x1b403cu: goto label_1b403c;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4068u: goto label_1b4068;
        case 0x1b4078u: goto label_1b4078;
        case 0x1b409cu: goto label_1b409c;
        case 0x1b40a8u: goto label_1b40a8;
        case 0x1b40d8u: goto label_1b40d8;
        case 0x1b4118u: goto label_1b4118;
        case 0x1b4128u: goto label_1b4128;
        case 0x1b4138u: goto label_1b4138;
        case 0x1b418cu: goto label_1b418c;
        case 0x1b41a8u: goto label_1b41a8;
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4218u: goto label_1b4218;
        case 0x1b422cu: goto label_1b422c;
        case 0x1b4244u: goto label_1b4244;
        case 0x1b426cu: goto label_1b426c;
        case 0x1b4278u: goto label_1b4278;
        case 0x1b42d8u: goto label_1b42d8;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42f8u: goto label_1b42f8;
        case 0x1b431cu: goto label_1b431c;
        case 0x1b435cu: goto label_1b435c;
        case 0x1b4380u: goto label_1b4380;
        case 0x1b43a0u: goto label_1b43a0;
        case 0x1b43b0u: goto label_1b43b0;
        case 0x1b43c0u: goto label_1b43c0;
        case 0x1b43d0u: goto label_1b43d0;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b43fcu: goto label_1b43fc;
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4470u: goto label_1b4470;
        case 0x1b44b8u: goto label_1b44b8;
        case 0x1b44ccu: goto label_1b44cc;
        case 0x1b4504u: goto label_1b4504;
        case 0x1b4518u: goto label_1b4518;
        case 0x1b4544u: goto label_1b4544;
        case 0x1b456cu: goto label_1b456c;
        case 0x1b4578u: goto label_1b4578;
        case 0x1b45f8u: goto label_1b45f8;
        case 0x1b4604u: goto label_1b4604;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b463cu: goto label_1b463c;
        case 0x1b467cu: goto label_1b467c;
        case 0x1b46a0u: goto label_1b46a0;
        case 0x1b46c0u: goto label_1b46c0;
        case 0x1b46d0u: goto label_1b46d0;
        case 0x1b46e0u: goto label_1b46e0;
        case 0x1b46f0u: goto label_1b46f0;
        case 0x1b470cu: goto label_1b470c;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4770u: goto label_1b4770;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b47d8u: goto label_1b47d8;
        case 0x1b47ecu: goto label_1b47ec;
        case 0x1b4828u: goto label_1b4828;
        case 0x1b483cu: goto label_1b483c;
        case 0x1b4878u: goto label_1b4878;
        case 0x1b48a4u: goto label_1b48a4;
        case 0x1b48b0u: goto label_1b48b0;
        case 0x1b4930u: goto label_1b4930;
        case 0x1b493cu: goto label_1b493c;
        case 0x1b4950u: goto label_1b4950;
        case 0x1b4974u: goto label_1b4974;
        case 0x1b49b4u: goto label_1b49b4;
        case 0x1b49d8u: goto label_1b49d8;
        case 0x1b49f8u: goto label_1b49f8;
        case 0x1b4a08u: goto label_1b4a08;
        case 0x1b4a18u: goto label_1b4a18;
        case 0x1b4a28u: goto label_1b4a28;
        case 0x1b4a44u: goto label_1b4a44;
        case 0x1b4a54u: goto label_1b4a54;
        case 0x1b4aa8u: goto label_1b4aa8;
        case 0x1b4ac8u: goto label_1b4ac8;
        case 0x1b4b10u: goto label_1b4b10;
        case 0x1b4b24u: goto label_1b4b24;
        case 0x1b4b70u: goto label_1b4b70;
        case 0x1b4b84u: goto label_1b4b84;
        case 0x1b4bd0u: goto label_1b4bd0;
        case 0x1b4bfcu: goto label_1b4bfc;
        case 0x1b4c0cu: goto label_1b4c0c;
        case 0x1b4c18u: goto label_1b4c18;
        case 0x1b4c3cu: goto label_1b4c3c;
        case 0x1b4c7cu: goto label_1b4c7c;
        case 0x1b4ca0u: goto label_1b4ca0;
        case 0x1b4cbcu: goto label_1b4cbc;
        case 0x1b4d10u: goto label_1b4d10;
        case 0x1b4d20u: goto label_1b4d20;
        case 0x1b4d30u: goto label_1b4d30;
        case 0x1b4d40u: goto label_1b4d40;
        case 0x1b4d60u: goto label_1b4d60;
        case 0x1b4da8u: goto label_1b4da8;
        case 0x1b4dbcu: goto label_1b4dbc;
        case 0x1b4de0u: goto label_1b4de0;
        case 0x1b4df4u: goto label_1b4df4;
        case 0x1b4e0cu: goto label_1b4e0c;
        case 0x1b4e40u: goto label_1b4e40;
        case 0x1b4ed8u: goto label_1b4ed8;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4f08u: goto label_1b4f08;
        case 0x1b4f48u: goto label_1b4f48;
        case 0x1b4f50u: goto label_1b4f50;
        case 0x1b4f7cu: goto label_1b4f7c;
        case 0x1b4fd0u: goto label_1b4fd0;
        case 0x1b4fe0u: goto label_1b4fe0;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b500cu: goto label_1b500c;
        case 0x1b5050u: goto label_1b5050;
        case 0x1b5060u: goto label_1b5060;
        case 0x1b5080u: goto label_1b5080;
        case 0x1b50c8u: goto label_1b50c8;
        case 0x1b50dcu: goto label_1b50dc;
        case 0x1b5100u: goto label_1b5100;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b5164u: goto label_1b5164;
        default: break;
    }

    ctx->pc = 0x1b35e0u;

    // 0x1b35e0: 0x27bdf790  addiu       $sp, $sp, -0x870
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965136));
    // 0x1b35e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b35e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b35e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b35e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b35ec: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b35f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b35f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b35f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b35f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b35fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3604: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b3604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b3608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b360c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3610: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B3610u;
    SET_GPR_U32(ctx, 31, 0x1B3618u);
    ctx->pc = 0x1B3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3610u;
    // 0x1b3614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B3610u, 0x1B3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3618u;
label_1b3618:
    // 0x1b3618: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1b3618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b361c: 0x14600226  bnez        $v1, . + 4 + (0x226 << 2)
    ctx->pc = 0x1B361Cu;
    {
        const bool branch_taken_0x1b361c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B361Cu;
        // 0x1b3620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b361c) {
            ctx->pc = 0x1B3EB8u;
            goto label_1b3eb8;
        }
    }
    ctx->pc = 0x1B3624u;
    // 0x1b3624: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x1b3624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x1b3628: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1B3628u;
    SET_GPR_U32(ctx, 31, 0x1B3630u);
    ctx->pc = 0x1B362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3628u;
    // 0x1b362c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1B3628u, 0x1B3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3630u;
label_1b3630:
    // 0x1b3630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b3630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3634: 0x27a20470  addiu       $v0, $sp, 0x470
    ctx->pc = 0x1b3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_1b3638:
    // 0x1b3638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b363c: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x1b363cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b3640: 0x246a0002  addiu       $t2, $v1, 0x2
    ctx->pc = 0x1b3640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1b3644: 0x24690003  addiu       $t1, $v1, 0x3
    ctx->pc = 0x1b3644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b3648: 0x24680004  addiu       $t0, $v1, 0x4
    ctx->pc = 0x1b3648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b364c: 0x24670005  addiu       $a3, $v1, 0x5
    ctx->pc = 0x1b364cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1b3650: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1b3654: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x1b3654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1b3658: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x1b3658u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x1b365c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1b365cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b3660: 0x469c2  srl         $t5, $a0, 7
    ctx->pc = 0x1b3660u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x1b3664: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1b3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b3668: 0x39ac00ff  xori        $t4, $t5, 0xFF
    ctx->pc = 0x1b3668u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)255);
    // 0x1b366c: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1b366cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b3670: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x1b3670u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1b3674: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1b3674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1b3678: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x1b3678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x1b367c: 0x8c4c0004  lw          $t4, 0x4($v0)
    ctx->pc = 0x1b367cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3680: 0xc6602  srl         $t4, $t4, 24
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x1b3684: 0x716c5818  mult1       $t3, $t3, $t4
    ctx->pc = 0x1b3684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1b3688: 0xb61c2  srl         $t4, $t3, 7
    ctx->pc = 0x1b3688u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 7));
    // 0x1b368c: 0x398b00ff  xori        $t3, $t4, 0xFF
    ctx->pc = 0x1b368cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)255);
    // 0x1b3690: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x1b3690u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x1b3694: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1b3694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1b3698: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x1b3698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x1b369c: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x1b369cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b36a0: 0xb5e02  srl         $t3, $t3, 24
    ctx->pc = 0x1b36a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
    // 0x1b36a4: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x1b36a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1b36a8: 0xa59c2  srl         $t3, $t2, 7
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x1b36ac: 0x396a00ff  xori        $t2, $t3, 0xFF
    ctx->pc = 0x1b36acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)255);
    // 0x1b36b0: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1b36b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1b36b4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1b36b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1b36b8: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x1b36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x1b36bc: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x1b36bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b36c0: 0xa5602  srl         $t2, $t2, 24
    ctx->pc = 0x1b36c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1b36c4: 0x712a4818  mult1       $t1, $t1, $t2
    ctx->pc = 0x1b36c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b36c8: 0x951c2  srl         $t2, $t1, 7
    ctx->pc = 0x1b36c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 7));
    // 0x1b36cc: 0x394900ff  xori        $t1, $t2, 0xFF
    ctx->pc = 0x1b36ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)255);
    // 0x1b36d0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1b36d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1b36d4: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1b36d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1b36d8: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x1b36d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x1b36dc: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x1b36dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b36e0: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1b36e4: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x1b36e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b36e8: 0x849c2  srl         $t1, $t0, 7
    ctx->pc = 0x1b36e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
    // 0x1b36ec: 0x392800ff  xori        $t0, $t1, 0xFF
    ctx->pc = 0x1b36ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)255);
    // 0x1b36f0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1b36f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1b36f4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1b36f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1b36f8: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x1b36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x1b36fc: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x1b36fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b3700: 0x84602  srl         $t0, $t0, 24
    ctx->pc = 0x1b3700u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b3704: 0x70e83818  mult1       $a3, $a3, $t0
    ctx->pc = 0x1b3704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b3708: 0x741c2  srl         $t0, $a3, 7
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x1b370c: 0x390700ff  xori        $a3, $t0, 0xFF
    ctx->pc = 0x1b370cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)255);
    // 0x1b3710: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1b3710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1b3714: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b3718: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1b3718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1b371c: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x1b371cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b3720: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1b3720u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1b3724: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1b3724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b3728: 0x639c2  srl         $a3, $a2, 7
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1b372c: 0x38e600ff  xori        $a2, $a3, 0xFF
    ctx->pc = 0x1b372cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)255);
    // 0x1b3730: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1b3730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b3734: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1b3734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b3738: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1b3738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1b373c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1b373cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b3740: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1b3740u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1b3744: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x1b3744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b3748: 0x531c2  srl         $a2, $a1, 7
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1b374c: 0x38c500ff  xori        $a1, $a2, 0xFF
    ctx->pc = 0x1b374cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)255);
    // 0x1b3750: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1b3750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1b3754: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1b3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b3758: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x1b3758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x1b375c: 0x1480ffb6  bnez        $a0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1B375Cu;
    {
        const bool branch_taken_0x1b375c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B375Cu;
        // 0x1b3760: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b375c) {
            ctx->pc = 0x1B3638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3638;
        }
    }
    ctx->pc = 0x1B3764u;
    // 0x1b3764: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b3764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b3768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b376c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B376Cu;
    SET_GPR_U32(ctx, 31, 0x1B3774u);
    ctx->pc = 0x1B3770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B376Cu;
    // 0x1b3770: 0x27a60470  addiu       $a2, $sp, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B376Cu, 0x1B3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3774u;
label_1b3774:
    // 0x1b3774: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B3774u;
    SET_GPR_U32(ctx, 31, 0x1B377Cu);
    ctx->pc = 0x1B3778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3774u;
    // 0x1b3778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B3774u, 0x1B377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B377Cu;
label_1b377c:
    // 0x1b377c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b377cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3788: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b378c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3790: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b3794: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b3798: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3798u;
    SET_GPR_U32(ctx, 31, 0x1B37A0u);
    ctx->pc = 0x1B379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3798u;
    // 0x1b379c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3798u, 0x1B37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37A0u;
label_1b37a0:
    // 0x1b37a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b37a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37a4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b37a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b37a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B37A8u;
    SET_GPR_U32(ctx, 31, 0x1B37B0u);
    ctx->pc = 0x1B37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37A8u;
    // 0x1b37ac: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B37A8u, 0x1B37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37B0u;
label_1b37b0:
    // 0x1b37b0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b37b4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b37b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b37b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b37bc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b37bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b37c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b37c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b37c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b37c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37c8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b37cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B37CCu;
    SET_GPR_U32(ctx, 31, 0x1B37D4u);
    ctx->pc = 0x1B37D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37CCu;
    // 0x1b37d0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B37CCu, 0x1B37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37D4u;
label_1b37d4:
    // 0x1b37d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b37d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37d8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B37D8u;
    SET_GPR_U32(ctx, 31, 0x1B37E0u);
    ctx->pc = 0x1B37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37D8u;
    // 0x1b37dc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B37D8u, 0x1B37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37E0u;
label_1b37e0:
    // 0x1b37e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b37e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b37e4: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1b37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1b37e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b37e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b37ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b37ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b37f0: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1b37f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1b37f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b37f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b37f8: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b37fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3800: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3804: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b3804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b3808: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B3808u;
    SET_GPR_U32(ctx, 31, 0x1B3810u);
    ctx->pc = 0x1B380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3808u;
    // 0x1b380c: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B3808u, 0x1B3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3810u;
label_1b3810:
    // 0x1b3810: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b3810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3814: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3818: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b3818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b381c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b3820: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b3820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b3824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3828: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1b3828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1b382c: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b382cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b3830: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b3830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b3834: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b3834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b383c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3840: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b3840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b3844: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b3848: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3848u;
    SET_GPR_U32(ctx, 31, 0x1B3850u);
    ctx->pc = 0x1B384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3848u;
    // 0x1b384c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3848u, 0x1B3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3850u;
label_1b3850:
    // 0x1b3850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3854: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b3854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b3858: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3858u;
    SET_GPR_U32(ctx, 31, 0x1B3860u);
    ctx->pc = 0x1B385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3858u;
    // 0x1b385c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3858u, 0x1B3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3860u;
label_1b3860:
    // 0x1b3860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3868: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3868u;
    SET_GPR_U32(ctx, 31, 0x1B3870u);
    ctx->pc = 0x1B386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3868u;
    // 0x1b386c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3868u, 0x1B3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3870u;
label_1b3870:
    // 0x1b3870: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3878: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b3878u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b387c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b3880: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b3880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b3884: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b3884u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b3888: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b3888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b388c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b388cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b3890: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b3890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b3894: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b3894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b3898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b389c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b38a0: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b38a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b38a4: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b38a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b38a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b38a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b38ac: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b38acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b38b0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b38b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b38b4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b38b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b38b8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b38b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b38bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B38BCu;
    SET_GPR_U32(ctx, 31, 0x1B38C4u);
    ctx->pc = 0x1B38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38BCu;
    // 0x1b38c0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B38BCu, 0x1B38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38C4u;
label_1b38c4:
    // 0x1b38c4: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b38c8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b38cc: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b38ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b38d0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B38D0u;
    {
        const bool branch_taken_0x1b38d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38D0u;
        // 0x1b38d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38d0) {
            ctx->pc = 0x1B3998u;
            goto label_1b3998;
        }
    }
    ctx->pc = 0x1B38D8u;
    // 0x1b38d8: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b38d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b38dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b38dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b38e0:
    // 0x1b38e0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b38e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b38e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b38e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b38e8: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b38e8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b38ec: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b38ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b38f0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1b38f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b38f4: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b38f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b38f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b38fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b38fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b3900: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b3904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3908: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b3908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b390c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b3910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3918: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b391c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3920: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3920u;
    SET_GPR_U32(ctx, 31, 0x1B3928u);
    ctx->pc = 0x1B3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3920u;
    // 0x1b3924: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3920u, 0x1B3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3928u;
label_1b3928:
    // 0x1b3928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b392c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3930: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3930u;
    SET_GPR_U32(ctx, 31, 0x1B3938u);
    ctx->pc = 0x1B3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3930u;
    // 0x1b3934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3930u, 0x1B3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3938u;
label_1b3938:
    // 0x1b3938: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b393c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3940: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b3940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b3944: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3944u;
    SET_GPR_U32(ctx, 31, 0x1B394Cu);
    ctx->pc = 0x1B3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3944u;
    // 0x1b3948: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3944u, 0x1B394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B394Cu;
label_1b394c:
    // 0x1b394c: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1b394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1b3950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3954: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3958: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3958u;
    SET_GPR_U32(ctx, 31, 0x1B3960u);
    ctx->pc = 0x1B395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3958u;
    // 0x1b395c: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3958u, 0x1B3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3960u;
label_1b3960:
    // 0x1b3960: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1b3960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1b3964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3968: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b3968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b396c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3970: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3970u;
    SET_GPR_U32(ctx, 31, 0x1B3978u);
    ctx->pc = 0x1B3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3970u;
    // 0x1b3974: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3970u, 0x1B3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3978u;
label_1b3978:
    // 0x1b3978: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b3978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b397c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b397cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b3980: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b3980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b3984: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b3984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b3988: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b3988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b398c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B398Cu;
    {
        const bool branch_taken_0x1b398c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B398Cu;
        // 0x1b3990: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b398c) {
            ctx->pc = 0x1B38E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b38e0;
        }
    }
    ctx->pc = 0x1B3994u;
    // 0x1b3994: 0x0  nop
    ctx->pc = 0x1b3994u;
    // NOP
label_1b3998:
    // 0x1b3998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b399c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B399Cu;
    SET_GPR_U32(ctx, 31, 0x1B39A4u);
    ctx->pc = 0x1B39A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B399Cu;
    // 0x1b39a0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B399Cu, 0x1B39A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39A4u;
label_1b39a4:
    // 0x1b39a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b39a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39a8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B39A8u;
    SET_GPR_U32(ctx, 31, 0x1B39B0u);
    ctx->pc = 0x1B39ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39A8u;
    // 0x1b39ac: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B39A8u, 0x1B39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39B0u;
label_1b39b0:
    // 0x1b39b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b39b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b39b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b39b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b39b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b39bc: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B39BCu;
    SET_GPR_U32(ctx, 31, 0x1B39C4u);
    ctx->pc = 0x1B39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39BCu;
    // 0x1b39c0: 0x286b8  dsll        $s0, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B39BCu, 0x1B39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39C4u;
label_1b39c4:
    // 0x1b39c4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b39c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b39ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b39d0: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b39d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b39d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b39d8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b39dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b39dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b39e0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B39E0u;
    SET_GPR_U32(ctx, 31, 0x1B39E8u);
    ctx->pc = 0x1B39E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39E0u;
    // 0x1b39e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B39E0u, 0x1B39E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39E8u;
label_1b39e8:
    // 0x1b39e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b39e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b39ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b39ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b39f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b39f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b39f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b39f8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b39f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b39fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3a00: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1b3a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1b3a04: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b3a04u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b3a08: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b3a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b3a0c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3a18: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b3a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b3a1c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b3a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b3a20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3A20u;
    SET_GPR_U32(ctx, 31, 0x1B3A28u);
    ctx->pc = 0x1B3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A20u;
    // 0x1b3a24: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3A20u, 0x1B3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A28u;
label_1b3a28:
    // 0x1b3a28: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3a2c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b3a30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3a34: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b3a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b3a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b3a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a40: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b3a44: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3A44u;
    SET_GPR_U32(ctx, 31, 0x1B3A4Cu);
    ctx->pc = 0x1B3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A44u;
    // 0x1b3a48: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3A44u, 0x1B3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A4Cu;
label_1b3a4c:
    // 0x1b3a4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3a50: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b3a54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3a58: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b3a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b3a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a60: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b3a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b3a64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3A64u;
    SET_GPR_U32(ctx, 31, 0x1B3A6Cu);
    ctx->pc = 0x1B3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A64u;
    // 0x1b3a68: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3A64u, 0x1B3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A6Cu;
label_1b3a6c:
    // 0x1b3a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a70: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b3a74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3A74u;
    SET_GPR_U32(ctx, 31, 0x1B3A7Cu);
    ctx->pc = 0x1B3A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A74u;
    // 0x1b3a78: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3A74u, 0x1B3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A7Cu;
label_1b3a7c:
    // 0x1b3a7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a80: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b3a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b3a84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3A84u;
    SET_GPR_U32(ctx, 31, 0x1B3A8Cu);
    ctx->pc = 0x1B3A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A84u;
    // 0x1b3a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3A84u, 0x1B3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A8Cu;
label_1b3a8c:
    // 0x1b3a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a90: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b3a94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3A94u;
    SET_GPR_U32(ctx, 31, 0x1B3A9Cu);
    ctx->pc = 0x1B3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A94u;
    // 0x1b3a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3A94u, 0x1B3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A9Cu;
label_1b3a9c:
    // 0x1b3a9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b3aa0: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1b3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1b3aa4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3aa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3aac: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b3ab0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3AB0u;
    SET_GPR_U32(ctx, 31, 0x1B3AB8u);
    ctx->pc = 0x1B3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AB0u;
    // 0x1b3ab4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3AB0u, 0x1B3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AB8u;
label_1b3ab8:
    // 0x1b3ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ac0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3AC0u;
    SET_GPR_U32(ctx, 31, 0x1B3AC8u);
    ctx->pc = 0x1B3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AC0u;
    // 0x1b3ac4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3AC0u, 0x1B3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AC8u;
label_1b3ac8:
    // 0x1b3ac8: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b3ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ad0: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b3ad0u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b3ad4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b3ad8: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b3adc: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b3adcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b3ae0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b3ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b3ae4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b3ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b3ae8: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b3ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b3aec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b3aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b3af0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3af4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3af8: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b3af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b3afc: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b3afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b3b00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3b04: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b3b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b3b08: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b3b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b3b0c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b3b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b3b10: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b3b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b3b14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3B14u;
    SET_GPR_U32(ctx, 31, 0x1B3B1Cu);
    ctx->pc = 0x1B3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B14u;
    // 0x1b3b18: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3B14u, 0x1B3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B1Cu;
label_1b3b1c:
    // 0x1b3b1c: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3b20: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b3b24: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b3b24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3b28: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B3B28u;
    {
        const bool branch_taken_0x1b3b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B28u;
        // 0x1b3b2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b28) {
            ctx->pc = 0x1B3C00u;
            goto label_1b3c00;
        }
    }
    ctx->pc = 0x1B3B30u;
    // 0x1b3b30: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b3b34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b38:
    // 0x1b3b38: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b3b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b3b3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3b40: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b3b40u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b3b44: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b3b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b3b48: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1b3b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b3b4c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b3b50: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b3b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b3b54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b3b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b3b58: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b3b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b60: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b3b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b3b64: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b3b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b3b68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3b70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3b74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3b78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3B78u;
    SET_GPR_U32(ctx, 31, 0x1B3B80u);
    ctx->pc = 0x1B3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B78u;
    // 0x1b3b7c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3B78u, 0x1B3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B80u;
label_1b3b80:
    // 0x1b3b80: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b3b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3b8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B3B94u);
    ctx->pc = 0x1B3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B8Cu;
    // 0x1b3b90: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3B8Cu, 0x1B3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B94u;
label_1b3b94:
    // 0x1b3b94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3b98: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b3b9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3ba0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b3ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b3ba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b3ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b3bb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3BB0u;
    SET_GPR_U32(ctx, 31, 0x1B3BB8u);
    ctx->pc = 0x1B3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BB0u;
    // 0x1b3bb4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3BB0u, 0x1B3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BB8u;
label_1b3bb8:
    // 0x1b3bb8: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b3bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3bc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3BC4u;
    SET_GPR_U32(ctx, 31, 0x1B3BCCu);
    ctx->pc = 0x1B3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BC4u;
    // 0x1b3bc8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3BC4u, 0x1B3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BCCu;
label_1b3bcc:
    // 0x1b3bcc: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b3bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bd4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b3bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b3bd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3bdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3BDCu;
    SET_GPR_U32(ctx, 31, 0x1B3BE4u);
    ctx->pc = 0x1B3BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BDCu;
    // 0x1b3be0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3BDCu, 0x1B3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BE4u;
label_1b3be4:
    // 0x1b3be4: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3be8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b3be8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b3bec: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1b3becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b3bf0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b3bf4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b3bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3bf8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B3BF8u;
    {
        const bool branch_taken_0x1b3bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BF8u;
        // 0x1b3bfc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bf8) {
            ctx->pc = 0x1B3B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3b38;
        }
    }
    ctx->pc = 0x1B3C00u;
label_1b3c00:
    // 0x1b3c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c04: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b3c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b3c08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3C08u;
    SET_GPR_U32(ctx, 31, 0x1B3C10u);
    ctx->pc = 0x1B3C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C08u;
    // 0x1b3c0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3C08u, 0x1B3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C10u;
label_1b3c10:
    // 0x1b3c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c14: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B3C14u;
    SET_GPR_U32(ctx, 31, 0x1B3C1Cu);
    ctx->pc = 0x1B3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C14u;
    // 0x1b3c18: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B3C14u, 0x1B3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C1Cu;
label_1b3c1c:
    // 0x1b3c1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b3c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b3c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b3c28: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1b3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1b3c2c: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b3c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b3c30: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b3c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b3c34: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1b3c34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3c38: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B3C38u;
    SET_GPR_U32(ctx, 31, 0x1B3C40u);
    ctx->pc = 0x1B3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C38u;
    // 0x1b3c3c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B3C38u, 0x1B3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C40u;
label_1b3c40:
    // 0x1b3c40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3c44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3c48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b3c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b3c4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3c50: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b3c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b3c54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3c58: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1b3c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1b3c5c: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b3c60: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b3c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b3c64: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3c70: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b3c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b3c74: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b3c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b3c78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3C78u;
    SET_GPR_U32(ctx, 31, 0x1B3C80u);
    ctx->pc = 0x1B3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C78u;
    // 0x1b3c7c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3C78u, 0x1B3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C80u;
label_1b3c80:
    // 0x1b3c80: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B3C80u;
    SET_GPR_U32(ctx, 31, 0x1B3C88u);
    ctx->pc = 0x1B3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C80u;
    // 0x1b3c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B3C80u, 0x1B3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C88u;
label_1b3c88:
    // 0x1b3c88: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b3c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c90: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3c94: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b3c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b3c98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b3c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3c9c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b3ca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b3ca4: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b3ca4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b3ca8: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b3ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b3cac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3CACu;
    SET_GPR_U32(ctx, 31, 0x1B3CB4u);
    ctx->pc = 0x1B3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CACu;
    // 0x1b3cb0: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3CACu, 0x1B3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CB4u;
label_1b3cb4:
    // 0x1b3cb4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1b3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b3cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cbc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b3cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b3cc0: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b3cc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3cc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3ccc: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1b3cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1b3cd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3cd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3CD4u;
    SET_GPR_U32(ctx, 31, 0x1B3CDCu);
    ctx->pc = 0x1B3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CD4u;
    // 0x1b3cd8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3CD4u, 0x1B3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CDCu;
label_1b3cdc:
    // 0x1b3cdc: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b3cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ce4: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b3ce4u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b3ce8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b3ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b3cec: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b3cf0: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b3cf0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b3cf4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b3cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b3cf8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b3cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b3cfc: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b3cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b3d00: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b3d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b3d04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3d08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3d0c: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b3d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b3d10: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b3d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b3d14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3d18: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b3d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b3d1c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b3d1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b3d20: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b3d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b3d24: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b3d28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3D28u;
    SET_GPR_U32(ctx, 31, 0x1B3D30u);
    ctx->pc = 0x1B3D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D28u;
    // 0x1b3d2c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3D28u, 0x1B3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D30u;
label_1b3d30:
    // 0x1b3d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d34: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b3d38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3d3c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b3d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b3d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d44: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b3d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b3d48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3D48u;
    SET_GPR_U32(ctx, 31, 0x1B3D50u);
    ctx->pc = 0x1B3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D48u;
    // 0x1b3d4c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3D48u, 0x1B3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D50u;
label_1b3d50:
    // 0x1b3d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d54: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b3d58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3D58u;
    SET_GPR_U32(ctx, 31, 0x1B3D60u);
    ctx->pc = 0x1B3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D58u;
    // 0x1b3d5c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3D58u, 0x1B3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D60u;
label_1b3d60:
    // 0x1b3d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d64: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b3d68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3D68u;
    SET_GPR_U32(ctx, 31, 0x1B3D70u);
    ctx->pc = 0x1B3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D68u;
    // 0x1b3d6c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3D68u, 0x1B3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D70u;
label_1b3d70:
    // 0x1b3d70: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b3d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b3d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D84u);
    ctx->pc = 0x1B3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D7Cu;
    // 0x1b3d80: 0x23438  dsll        $a2, $v0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3D7Cu, 0x1B3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D84u;
label_1b3d84:
    // 0x1b3d84: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b3d88: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b3d8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d94: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b3d98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3D98u;
    SET_GPR_U32(ctx, 31, 0x1B3DA0u);
    ctx->pc = 0x1B3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D98u;
    // 0x1b3d9c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3D98u, 0x1B3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DA0u;
label_1b3da0:
    // 0x1b3da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3da8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3DA8u;
    SET_GPR_U32(ctx, 31, 0x1B3DB0u);
    ctx->pc = 0x1B3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DA8u;
    // 0x1b3dac: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3DA8u, 0x1B3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DB0u;
label_1b3db0:
    // 0x1b3db0: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3db4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b3db8: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b3db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3dbc: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B3DBCu;
    {
        const bool branch_taken_0x1b3dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DBCu;
        // 0x1b3dc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dbc) {
            ctx->pc = 0x1B3E98u;
            goto label_1b3e98;
        }
    }
    ctx->pc = 0x1B3DC4u;
    // 0x1b3dc4: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b3dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b3dc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dcc: 0x0  nop
    ctx->pc = 0x1b3dccu;
    // NOP
label_1b3dd0:
    // 0x1b3dd0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b3dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b3dd4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3dd8: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b3dd8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b3ddc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b3de0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1b3de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b3de4: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b3de8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b3de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b3dec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b3decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b3df0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b3df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b3df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3df8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b3df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b3dfc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b3e00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3e04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3e08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b3e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b3e0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3e10: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3E10u;
    SET_GPR_U32(ctx, 31, 0x1B3E18u);
    ctx->pc = 0x1B3E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E10u;
    // 0x1b3e14: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3E10u, 0x1B3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E18u;
label_1b3e18:
    // 0x1b3e18: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b3e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3e24: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3E24u;
    SET_GPR_U32(ctx, 31, 0x1B3E2Cu);
    ctx->pc = 0x1B3E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E24u;
    // 0x1b3e28: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3E24u, 0x1B3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E2Cu;
label_1b3e2c:
    // 0x1b3e2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3e30: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b3e34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b3e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b3e38: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b3e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b3e3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b3e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e44: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b3e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b3e48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3E48u;
    SET_GPR_U32(ctx, 31, 0x1B3E50u);
    ctx->pc = 0x1B3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E48u;
    // 0x1b3e4c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3E48u, 0x1B3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E50u;
label_1b3e50:
    // 0x1b3e50: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b3e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3e5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B3E64u);
    ctx->pc = 0x1B3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E5Cu;
    // 0x1b3e60: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3E5Cu, 0x1B3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E64u;
label_1b3e64:
    // 0x1b3e64: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b3e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e6c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b3e70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b3e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3e74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3E74u;
    SET_GPR_U32(ctx, 31, 0x1B3E7Cu);
    ctx->pc = 0x1B3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E74u;
    // 0x1b3e78: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3E74u, 0x1B3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E7Cu;
label_1b3e7c:
    // 0x1b3e7c: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b3e80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b3e84: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b3e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b3e88: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b3e8c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b3e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3e90: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B3E90u;
    {
        const bool branch_taken_0x1b3e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E90u;
        // 0x1b3e94: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e90) {
            ctx->pc = 0x1B3DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3E98u;
label_1b3e98:
    // 0x1b3e98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b3e9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b3e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b3ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ea4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b3ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b3ea8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b3eac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B3EACu;
    SET_GPR_U32(ctx, 31, 0x1B3EB4u);
    ctx->pc = 0x1B3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EACu;
    // 0x1b3eb0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B3EACu, 0x1B3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EB4u;
label_1b3eb4:
    // 0x1b3eb4: 0x0  nop
    ctx->pc = 0x1b3eb4u;
    // NOP
label_1b3eb8:
    // 0x1b3eb8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1b3eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b3ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ec0: 0x148304a9  bne         $a0, $v1, . + 4 + (0x4A9 << 2)
    ctx->pc = 0x1B3EC0u;
    {
        const bool branch_taken_0x1b3ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EC0u;
        // 0x1b3ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ec0) {
            ctx->pc = 0x1B5168u;
            goto label_1b5168;
        }
    }
    ctx->pc = 0x1B3EC8u;
    // 0x1b3ec8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3ecc: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1B3ECCu;
    SET_GPR_U32(ctx, 31, 0x1B3ED4u);
    ctx->pc = 0x1B3ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3ECCu;
    // 0x1b3ed0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1B3ECCu, 0x1B3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED4u;
label_1b3ed4:
    // 0x1b3ed4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1b3ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3ed8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b3ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b3edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3ee0:
    // 0x1b3ee0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ee4: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b3ee8: 0x246a0002  addiu       $t2, $v1, 0x2
    ctx->pc = 0x1b3ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1b3eec: 0x24690003  addiu       $t1, $v1, 0x3
    ctx->pc = 0x1b3eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b3ef0: 0x24680004  addiu       $t0, $v1, 0x4
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b3ef4: 0x24670005  addiu       $a3, $v1, 0x5
    ctx->pc = 0x1b3ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1b3ef8: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x1b3ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1b3efc: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x1b3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1b3f00: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x1b3f04: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1b3f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b3f08: 0x461c2  srl         $t4, $a0, 7
    ctx->pc = 0x1b3f08u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x1b3f0c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1b3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b3f10: 0xc6c00  sll         $t5, $t4, 16
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1b3f14: 0xc2200  sll         $a0, $t4, 8
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1b3f18: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x1b3f18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1b3f1c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1b3f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1b3f20: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1b3f20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b3f24: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x1b3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x1b3f28: 0x8c4c0004  lw          $t4, 0x4($v0)
    ctx->pc = 0x1b3f28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3f2c: 0xc6602  srl         $t4, $t4, 24
    ctx->pc = 0x1b3f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x1b3f30: 0x716c5818  mult1       $t3, $t3, $t4
    ctx->pc = 0x1b3f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1b3f34: 0xb69c2  srl         $t5, $t3, 7
    ctx->pc = 0x1b3f34u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 7));
    // 0x1b3f38: 0xd5a00  sll         $t3, $t5, 8
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x1b3f3c: 0xd6400  sll         $t4, $t5, 16
    ctx->pc = 0x1b3f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x1b3f40: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x1b3f40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1b3f44: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1b3f44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1b3f48: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x1b3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x1b3f4c: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x1b3f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3f50: 0xb5e02  srl         $t3, $t3, 24
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
    // 0x1b3f54: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x1b3f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1b3f58: 0xa61c2  srl         $t4, $t2, 7
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x1b3f5c: 0xc5200  sll         $t2, $t4, 8
    ctx->pc = 0x1b3f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1b3f60: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1b3f60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1b3f64: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x1b3f64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1b3f68: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1b3f6c: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x1b3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x1b3f70: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b3f74: 0xa5602  srl         $t2, $t2, 24
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1b3f78: 0x712a4818  mult1       $t1, $t1, $t2
    ctx->pc = 0x1b3f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b3f7c: 0x959c2  srl         $t3, $t1, 7
    ctx->pc = 0x1b3f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 7));
    // 0x1b3f80: 0xb4a00  sll         $t1, $t3, 8
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x1b3f84: 0xb5400  sll         $t2, $t3, 16
    ctx->pc = 0x1b3f84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1b3f88: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x1b3f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1b3f8c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1b3f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1b3f90: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x1b3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x1b3f94: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x1b3f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b3f98: 0x94e02  srl         $t1, $t1, 24
    ctx->pc = 0x1b3f98u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1b3f9c: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x1b3f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b3fa0: 0x851c2  srl         $t2, $t0, 7
    ctx->pc = 0x1b3fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
    // 0x1b3fa4: 0xa4200  sll         $t0, $t2, 8
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1b3fa8: 0xa4c00  sll         $t1, $t2, 16
    ctx->pc = 0x1b3fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1b3fac: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x1b3facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1b3fb0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1b3fb4: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x1b3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x1b3fb8: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x1b3fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b3fbc: 0x84602  srl         $t0, $t0, 24
    ctx->pc = 0x1b3fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b3fc0: 0x70e83818  mult1       $a3, $a3, $t0
    ctx->pc = 0x1b3fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b3fc4: 0x749c2  srl         $t1, $a3, 7
    ctx->pc = 0x1b3fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x1b3fc8: 0x93a00  sll         $a3, $t1, 8
    ctx->pc = 0x1b3fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1b3fcc: 0x94400  sll         $t0, $t1, 16
    ctx->pc = 0x1b3fccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1b3fd0: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1b3fd4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1b3fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b3fd8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1b3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1b3fdc: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x1b3fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b3fe0: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1b3fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1b3fe4: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1b3fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b3fe8: 0x641c2  srl         $t0, $a2, 7
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1b3fec: 0x83200  sll         $a2, $t0, 8
    ctx->pc = 0x1b3fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1b3ff0: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b3ff4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1b3ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b3ff8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b3ffc: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1b3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1b4000: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1b4000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b4004: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1b4008: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x1b4008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b400c: 0x539c2  srl         $a3, $a1, 7
    ctx->pc = 0x1b400cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1b4010: 0x72a00  sll         $a1, $a3, 8
    ctx->pc = 0x1b4010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1b4014: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x1b4014u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1b4018: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1b4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b401c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1b401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b4020: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x1b4020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x1b4024: 0x1480ffae  bnez        $a0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x1B4024u;
    {
        const bool branch_taken_0x1b4024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4024u;
        // 0x1b4028: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4024) {
            ctx->pc = 0x1B3EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3ee0;
        }
    }
    ctx->pc = 0x1B402Cu;
    // 0x1b402c: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b402cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b4030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4034: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B4034u;
    SET_GPR_U32(ctx, 31, 0x1B403Cu);
    ctx->pc = 0x1B4038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4034u;
    // 0x1b4038: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B4034u, 0x1B403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B403Cu;
label_1b403c:
    // 0x1b403c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B403Cu;
    SET_GPR_U32(ctx, 31, 0x1B4044u);
    ctx->pc = 0x1B4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B403Cu;
    // 0x1b4040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B403Cu, 0x1B4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4044u;
label_1b4044:
    // 0x1b4044: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b4044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b404c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4050: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b4050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b4054: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4058: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b405c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b4060: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4060u;
    SET_GPR_U32(ctx, 31, 0x1B4068u);
    ctx->pc = 0x1B4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4060u;
    // 0x1b4064: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4060u, 0x1B4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4068u;
label_1b4068:
    // 0x1b4068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b406c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b4070: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4070u;
    SET_GPR_U32(ctx, 31, 0x1B4078u);
    ctx->pc = 0x1B4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4070u;
    // 0x1b4074: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4070u, 0x1B4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4078u;
label_1b4078:
    // 0x1b4078: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b4078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b407c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b407cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b4080: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4084: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b4084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b4088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b408c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4090: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b4090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b4094: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4094u;
    SET_GPR_U32(ctx, 31, 0x1B409Cu);
    ctx->pc = 0x1B4098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4094u;
    // 0x1b4098: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4094u, 0x1B409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B409Cu;
label_1b409c:
    // 0x1b409c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40a0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B40A0u;
    SET_GPR_U32(ctx, 31, 0x1B40A8u);
    ctx->pc = 0x1B40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40A0u;
    // 0x1b40a4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B40A0u, 0x1B40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40A8u;
label_1b40a8:
    // 0x1b40a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b40a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b40ac: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x1b40acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1b40b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b40b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b40b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b40b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b40b8: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1b40b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1b40bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b40bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b40c0: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b40c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b40c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b40c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b40cc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b40ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b40d0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B40D0u;
    SET_GPR_U32(ctx, 31, 0x1B40D8u);
    ctx->pc = 0x1B40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40D0u;
    // 0x1b40d4: 0x469825  or          $s3, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B40D0u, 0x1B40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40D8u;
label_1b40d8:
    // 0x1b40d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b40d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b40dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b40dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b40e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b40e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b40e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b40e8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b40e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b40ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b40ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b40f0: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1b40f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1b40f4: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b40f4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b40f8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b40f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b40fc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4104: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4108: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b4108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b410c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b410cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4110: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4110u;
    SET_GPR_U32(ctx, 31, 0x1B4118u);
    ctx->pc = 0x1B4114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4110u;
    // 0x1b4114: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4110u, 0x1B4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4118u;
label_1b4118:
    // 0x1b4118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b411c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b4120: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4120u;
    SET_GPR_U32(ctx, 31, 0x1B4128u);
    ctx->pc = 0x1B4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4120u;
    // 0x1b4124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4120u, 0x1B4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4128u;
label_1b4128:
    // 0x1b4128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b412c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b412cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4130: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4130u;
    SET_GPR_U32(ctx, 31, 0x1B4138u);
    ctx->pc = 0x1B4134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4130u;
    // 0x1b4134: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4130u, 0x1B4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4138u;
label_1b4138:
    // 0x1b4138: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b413c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4140: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b4140u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b4144: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b4144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b4148: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b414c: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b414cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4150: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4154: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4158: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b4158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b415c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b415cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4164: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4168: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b4168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b416c: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b416cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b4170: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4174: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b4174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b4178: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b4178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b417c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4180: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b4180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b4184: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4184u;
    SET_GPR_U32(ctx, 31, 0x1B418Cu);
    ctx->pc = 0x1B4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4184u;
    // 0x1b4188: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4184u, 0x1B418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B418Cu;
label_1b418c:
    // 0x1b418c: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4190: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4194: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b4194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4198: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B4198u;
    {
        const bool branch_taken_0x1b4198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4198u;
        // 0x1b419c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4198) {
            ctx->pc = 0x1B4260u;
            goto label_1b4260;
        }
    }
    ctx->pc = 0x1B41A0u;
    // 0x1b41a0: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b41a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b41a8:
    // 0x1b41a8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b41a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b41ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b41acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b41b0: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b41b0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b41b4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b41b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b41b8: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1b41b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b41bc: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b41c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b41c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b41c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b41c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b41c8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b41c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b41cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b41ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b41d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b41d4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b41d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b41d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b41dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b41e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b41e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b41e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b41e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B41E8u;
    SET_GPR_U32(ctx, 31, 0x1B41F0u);
    ctx->pc = 0x1B41ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41E8u;
    // 0x1b41ec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B41E8u, 0x1B41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41F0u;
label_1b41f0:
    // 0x1b41f0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b41f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b41f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b41fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B41FCu;
    SET_GPR_U32(ctx, 31, 0x1B4204u);
    ctx->pc = 0x1B4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41FCu;
    // 0x1b4200: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B41FCu, 0x1B4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4204u;
label_1b4204:
    // 0x1b4204: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b4204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b4208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b420c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4210: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4210u;
    SET_GPR_U32(ctx, 31, 0x1B4218u);
    ctx->pc = 0x1B4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4210u;
    // 0x1b4214: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4210u, 0x1B4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4218u;
label_1b4218:
    // 0x1b4218: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b4218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b421c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4220: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4224: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4224u;
    SET_GPR_U32(ctx, 31, 0x1B422Cu);
    ctx->pc = 0x1B4228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4224u;
    // 0x1b4228: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4224u, 0x1B422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B422Cu;
label_1b422c:
    // 0x1b422c: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1b422cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1b4230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4234: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b4234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b4238: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b423c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B423Cu;
    SET_GPR_U32(ctx, 31, 0x1B4244u);
    ctx->pc = 0x1B4240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B423Cu;
    // 0x1b4240: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B423Cu, 0x1B4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4244u;
label_1b4244:
    // 0x1b4244: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4248: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b424c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1b424cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1b4250: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4254: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1b4254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4258: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1B4258u;
    {
        const bool branch_taken_0x1b4258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4258u;
        // 0x1b425c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4258) {
            ctx->pc = 0x1B41A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b41a8;
        }
    }
    ctx->pc = 0x1B4260u;
label_1b4260:
    // 0x1b4260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4264: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B4264u;
    SET_GPR_U32(ctx, 31, 0x1B426Cu);
    ctx->pc = 0x1B4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4264u;
    // 0x1b4268: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B4264u, 0x1B426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B426Cu;
label_1b426c:
    // 0x1b426c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b426cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4274: 0x0  nop
    ctx->pc = 0x1b4274u;
    // NOP
label_1b4278:
    // 0x1b4278: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1b4278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b427c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1b427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1b4280: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1b4280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b4284: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4288: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1b4288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b428c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b428cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1b4290: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x1b4290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4294: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b4294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b4298: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x1b4298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b429c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1b429cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1b42a0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x1b42a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b42a4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1b42a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1b42a8: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x1b42a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b42ac: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b42acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b42b0: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x1b42b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b42b4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1b42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1b42b8: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x1b42b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b42bc: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1b42bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b42c0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1B42C0u;
    {
        const bool branch_taken_0x1b42c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C0u;
        // 0x1b42c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42c0) {
            ctx->pc = 0x1B4278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4278;
        }
    }
    ctx->pc = 0x1B42C8u;
    // 0x1b42c8: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b42c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b42cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b42ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42d0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B42D0u;
    SET_GPR_U32(ctx, 31, 0x1B42D8u);
    ctx->pc = 0x1B42D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42D0u;
    // 0x1b42d4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B42D0u, 0x1B42D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42D8u;
label_1b42d8:
    // 0x1b42d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42dc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B42DCu;
    SET_GPR_U32(ctx, 31, 0x1B42E4u);
    ctx->pc = 0x1B42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42DCu;
    // 0x1b42e0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B42DCu, 0x1B42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42E4u;
label_1b42e4:
    // 0x1b42e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b42e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b42e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b42e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b42ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b42f0: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B42F0u;
    SET_GPR_U32(ctx, 31, 0x1B42F8u);
    ctx->pc = 0x1B42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42F0u;
    // 0x1b42f4: 0x29eb8  dsll        $s3, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B42F0u, 0x1B42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42F8u;
label_1b42f8:
    // 0x1b42f8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b42f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b42fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b42fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4300: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4304: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b4308: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b430c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b4310: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4314: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4314u;
    SET_GPR_U32(ctx, 31, 0x1B431Cu);
    ctx->pc = 0x1B4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4314u;
    // 0x1b4318: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4314u, 0x1B431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B431Cu;
label_1b431c:
    // 0x1b431c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b431cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4320: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4324: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4328: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b432c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b4330: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4334: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1b4334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1b4338: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b4338u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b433c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b433cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b4340: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4348: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b434c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b434cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b4350: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4354: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4354u;
    SET_GPR_U32(ctx, 31, 0x1B435Cu);
    ctx->pc = 0x1B4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4354u;
    // 0x1b4358: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4354u, 0x1B435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B435Cu;
label_1b435c:
    // 0x1b435c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b435cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4360: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b4360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b4364: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4368: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b4368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b436c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b436cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4374: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b4374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b4378: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4378u;
    SET_GPR_U32(ctx, 31, 0x1B4380u);
    ctx->pc = 0x1B437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4378u;
    // 0x1b437c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4378u, 0x1B4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4380u;
label_1b4380:
    // 0x1b4380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4384: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b4384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b4388: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b438c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b4390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4394: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b4398: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4398u;
    SET_GPR_U32(ctx, 31, 0x1B43A0u);
    ctx->pc = 0x1B439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4398u;
    // 0x1b439c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4398u, 0x1B43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43A0u;
label_1b43a0:
    // 0x1b43a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b43a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43a4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b43a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B43A8u;
    SET_GPR_U32(ctx, 31, 0x1B43B0u);
    ctx->pc = 0x1B43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43A8u;
    // 0x1b43ac: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B43A8u, 0x1B43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43B0u;
label_1b43b0:
    // 0x1b43b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43b4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b43b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b43b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B43B8u;
    SET_GPR_U32(ctx, 31, 0x1B43C0u);
    ctx->pc = 0x1B43BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43B8u;
    // 0x1b43bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B43B8u, 0x1B43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43C0u;
label_1b43c0:
    // 0x1b43c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b43c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43c4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b43c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B43C8u;
    SET_GPR_U32(ctx, 31, 0x1B43D0u);
    ctx->pc = 0x1B43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43C8u;
    // 0x1b43cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B43C8u, 0x1B43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43D0u;
label_1b43d0:
    // 0x1b43d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b43d4: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1b43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1b43d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b43d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b43dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b43dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b43e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B43E4u;
    SET_GPR_U32(ctx, 31, 0x1B43ECu);
    ctx->pc = 0x1B43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E4u;
    // 0x1b43e8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B43E4u, 0x1B43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43ECu;
label_1b43ec:
    // 0x1b43ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b43ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b43f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B43F4u;
    SET_GPR_U32(ctx, 31, 0x1B43FCu);
    ctx->pc = 0x1B43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43F4u;
    // 0x1b43f8: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B43F4u, 0x1B43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43FCu;
label_1b43fc:
    // 0x1b43fc: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b43fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4404: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b4404u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b4408: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b440c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4410: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b4410u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4414: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4418: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b441c: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b441cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b4420: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4424: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b442c: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b442cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b4430: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b4430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b4434: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4438: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b4438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b443c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b443cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b4440: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4444: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b4444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b4448: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4448u;
    SET_GPR_U32(ctx, 31, 0x1B4450u);
    ctx->pc = 0x1B444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4448u;
    // 0x1b444c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4448u, 0x1B4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4454: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4458: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b4458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b445c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1B445Cu;
    {
        const bool branch_taken_0x1b445c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B445Cu;
        // 0x1b4460: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b445c) {
            ctx->pc = 0x1B4560u;
            goto label_1b4560;
        }
    }
    ctx->pc = 0x1B4464u;
    // 0x1b4464: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1b4464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b4468: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b446c: 0x0  nop
    ctx->pc = 0x1b446cu;
    // NOP
label_1b4470:
    // 0x1b4470: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b4470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b4474: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4478: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b4478u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b447c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b4480: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1b4480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b4484: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4488: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b4488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b448c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b448cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b4490: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b4490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b4494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4498: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b449c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b44a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b44a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b44a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b44a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b44a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b44ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b44acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b44b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B44B0u;
    SET_GPR_U32(ctx, 31, 0x1B44B8u);
    ctx->pc = 0x1B44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44B0u;
    // 0x1b44b4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B44B0u, 0x1B44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44B8u;
label_1b44b8:
    // 0x1b44b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b44bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b44bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b44c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B44C4u;
    SET_GPR_U32(ctx, 31, 0x1B44CCu);
    ctx->pc = 0x1B44C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44C4u;
    // 0x1b44c8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B44C4u, 0x1B44CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44CCu;
label_1b44cc:
    // 0x1b44cc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1b44ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b44d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b44d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b44d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b44d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44dc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b44e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b44e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b44e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b44e8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b44e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b44ec: 0x24c30700  addiu       $v1, $a2, 0x700
    ctx->pc = 0x1b44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x1b44f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b44f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b44f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b44f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b44f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b44fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B44FCu;
    SET_GPR_U32(ctx, 31, 0x1B4504u);
    ctx->pc = 0x1B4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44FCu;
    // 0x1b4500: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B44FCu, 0x1B4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4504u;
label_1b4504:
    // 0x1b4504: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b4504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b4508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b450c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4510: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4510u;
    SET_GPR_U32(ctx, 31, 0x1B4518u);
    ctx->pc = 0x1B4514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4510u;
    // 0x1b4514: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4510u, 0x1B4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4518u;
label_1b4518:
    // 0x1b4518: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1b4518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b451c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b4520: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b4520u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b4524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4528: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b4528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b452c: 0x24630900  addiu       $v1, $v1, 0x900
    ctx->pc = 0x1b452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x1b4530: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b4530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b4534: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4538: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b453c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B453Cu;
    SET_GPR_U32(ctx, 31, 0x1B4544u);
    ctx->pc = 0x1B4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B453Cu;
    // 0x1b4540: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B453Cu, 0x1B4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4544u;
label_1b4544:
    // 0x1b4544: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4548: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b454c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1b454cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1b4550: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4554: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1b4554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4558: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1B4558u;
    {
        const bool branch_taken_0x1b4558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4558u;
        // 0x1b455c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4558) {
            ctx->pc = 0x1B4470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4470;
        }
    }
    ctx->pc = 0x1B4560u;
label_1b4560:
    // 0x1b4560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4564: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B4564u;
    SET_GPR_U32(ctx, 31, 0x1B456Cu);
    ctx->pc = 0x1B4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4564u;
    // 0x1b4568: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B4564u, 0x1B456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B456Cu;
label_1b456c:
    // 0x1b456c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4574: 0x0  nop
    ctx->pc = 0x1b4574u;
    // NOP
label_1b4578:
    // 0x1b4578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b457c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1b457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1b4580: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1b4580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b4584: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b4584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b4588: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b458c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b4590: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b4594: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b4594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1b4598: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b459c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b459cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b45a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b45a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b45a8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b45ac: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1b45acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1b45b0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1b45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b45b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b45b8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1b45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1b45bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1b45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b45c0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b45c4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b45c8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1b45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b45cc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b45d0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1b45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1b45d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1b45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b45d8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b45dc: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1b45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b45e0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B45E0u;
    {
        const bool branch_taken_0x1b45e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45E0u;
        // 0x1b45e4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45e0) {
            ctx->pc = 0x1B4578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4578;
        }
    }
    ctx->pc = 0x1B45E8u;
    // 0x1b45e8: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b45ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b45ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45f0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B45F0u;
    SET_GPR_U32(ctx, 31, 0x1B45F8u);
    ctx->pc = 0x1B45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45F0u;
    // 0x1b45f4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B45F0u, 0x1B45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45F8u;
label_1b45f8:
    // 0x1b45f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b45f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45fc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B45FCu;
    SET_GPR_U32(ctx, 31, 0x1B4604u);
    ctx->pc = 0x1B4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45FCu;
    // 0x1b4600: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B45FCu, 0x1B4604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4604u;
label_1b4604:
    // 0x1b4604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b460c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4610: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B4610u;
    SET_GPR_U32(ctx, 31, 0x1B4618u);
    ctx->pc = 0x1B4614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4610u;
    // 0x1b4614: 0x29eb8  dsll        $s3, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B4610u, 0x1B4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4618u;
label_1b4618:
    // 0x1b4618: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b461c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4620: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4624: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b4628: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b462c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b4630: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4634: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4634u;
    SET_GPR_U32(ctx, 31, 0x1B463Cu);
    ctx->pc = 0x1B4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4634u;
    // 0x1b4638: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4634u, 0x1B463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B463Cu;
label_1b463c:
    // 0x1b463c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b463cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4640: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4644: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4648: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b464c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b4650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4654: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1b4654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1b4658: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b4658u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b465c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b465cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b4660: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4668: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b466c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b466cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b4670: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4674: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4674u;
    SET_GPR_U32(ctx, 31, 0x1B467Cu);
    ctx->pc = 0x1B4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4674u;
    // 0x1b4678: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4674u, 0x1B467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B467Cu;
label_1b467c:
    // 0x1b467c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4680: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b4684: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4688: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b4688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b468c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4694: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b4694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b4698: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4698u;
    SET_GPR_U32(ctx, 31, 0x1B46A0u);
    ctx->pc = 0x1B469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4698u;
    // 0x1b469c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4698u, 0x1B46A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B46A0u;
label_1b46a0:
    // 0x1b46a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b46a4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b46a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b46a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b46ac: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b46b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46b4: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b46b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b46b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B46B8u;
    SET_GPR_U32(ctx, 31, 0x1B46C0u);
    ctx->pc = 0x1B46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46B8u;
    // 0x1b46bc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B46B8u, 0x1B46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B46C0u;
label_1b46c0:
    // 0x1b46c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b46c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46c4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b46c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B46C8u;
    SET_GPR_U32(ctx, 31, 0x1B46D0u);
    ctx->pc = 0x1B46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46C8u;
    // 0x1b46cc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B46C8u, 0x1B46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B46D0u;
label_1b46d0:
    // 0x1b46d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b46d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46d4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b46d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B46D8u;
    SET_GPR_U32(ctx, 31, 0x1B46E0u);
    ctx->pc = 0x1B46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46D8u;
    // 0x1b46dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B46D8u, 0x1B46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B46E0u;
label_1b46e0:
    // 0x1b46e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b46e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46e4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b46e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B46E8u;
    SET_GPR_U32(ctx, 31, 0x1B46F0u);
    ctx->pc = 0x1B46ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B46E8u;
    // 0x1b46ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B46E8u, 0x1B46F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B46F0u;
label_1b46f0:
    // 0x1b46f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b46f4: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1b46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1b46f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b46f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b46fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4700: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b4700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b4704: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4704u;
    SET_GPR_U32(ctx, 31, 0x1B470Cu);
    ctx->pc = 0x1B4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4704u;
    // 0x1b4708: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4704u, 0x1B470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B470Cu;
label_1b470c:
    // 0x1b470c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4714: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4714u;
    SET_GPR_U32(ctx, 31, 0x1B471Cu);
    ctx->pc = 0x1B4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4714u;
    // 0x1b4718: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4714u, 0x1B471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B471Cu;
label_1b471c:
    // 0x1b471c: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b471cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4724: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b4724u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b4728: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b4728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b472c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4730: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b4730u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4734: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4738: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b473c: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b473cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b4740: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4748: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b474c: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b474cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b4750: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b4750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b4754: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4758: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b4758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b475c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b475cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b4760: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4764: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b4764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b4768: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4768u;
    SET_GPR_U32(ctx, 31, 0x1B4770u);
    ctx->pc = 0x1B476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4768u;
    // 0x1b476c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4768u, 0x1B4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4770u;
label_1b4770:
    // 0x1b4770: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4774: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4778: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b4778u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b477c: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B477Cu;
    {
        const bool branch_taken_0x1b477c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B477Cu;
        // 0x1b4780: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b477c) {
            ctx->pc = 0x1B4898u;
            goto label_1b4898;
        }
    }
    ctx->pc = 0x1B4784u;
    // 0x1b4784: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1b4784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b4788: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b4788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b478c: 0x0  nop
    ctx->pc = 0x1b478cu;
    // NOP
label_1b4790:
    // 0x1b4790: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b4794: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4798: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b4798u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b479c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b479cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b47a0: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1b47a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b47a4: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b47a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b47a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b47ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b47acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b47b0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b47b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b47b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b47b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b47b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b47bc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b47bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b47c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b47c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b47c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b47c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b47c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b47cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b47d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B47D0u;
    SET_GPR_U32(ctx, 31, 0x1B47D8u);
    ctx->pc = 0x1B47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47D0u;
    // 0x1b47d4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B47D0u, 0x1B47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47D8u;
label_1b47d8:
    // 0x1b47d8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b47dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b47dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b47e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B47E4u;
    SET_GPR_U32(ctx, 31, 0x1B47ECu);
    ctx->pc = 0x1B47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47E4u;
    // 0x1b47e8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B47E4u, 0x1B47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47ECu;
label_1b47ec:
    // 0x1b47ec: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1b47ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b47f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b47f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b47f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b47f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b47f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47fc: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1b47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b4800: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b4800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4808: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b4808u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b480c: 0x24c30790  addiu       $v1, $a2, 0x790
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x1b4810: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b4810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b4814: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4818: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b481c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b4820: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4820u;
    SET_GPR_U32(ctx, 31, 0x1B4828u);
    ctx->pc = 0x1B4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4820u;
    // 0x1b4824: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4820u, 0x1B4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4828u;
label_1b4828:
    // 0x1b4828: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b4828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b482c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4834: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4834u;
    SET_GPR_U32(ctx, 31, 0x1B483Cu);
    ctx->pc = 0x1B4838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4834u;
    // 0x1b4838: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4834u, 0x1B483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B483Cu;
label_1b483c:
    // 0x1b483c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1b483cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b4840: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4844: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b484c: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1b484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1b4850: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b4850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4858: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b4858u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b485c: 0x24c30870  addiu       $v1, $a2, 0x870
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2160));
    // 0x1b4860: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b4860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b4864: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4868: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b486c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b486cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b4870: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4870u;
    SET_GPR_U32(ctx, 31, 0x1B4878u);
    ctx->pc = 0x1B4874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4870u;
    // 0x1b4874: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4870u, 0x1B4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4878u;
label_1b4878:
    // 0x1b4878: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b487c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b487cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b4880: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1b4884: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4888: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1b4888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b488c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1B488Cu;
    {
        const bool branch_taken_0x1b488c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B488Cu;
        // 0x1b4890: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b488c) {
            ctx->pc = 0x1B4790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4790;
        }
    }
    ctx->pc = 0x1B4894u;
    // 0x1b4894: 0x0  nop
    ctx->pc = 0x1b4894u;
    // NOP
label_1b4898:
    // 0x1b4898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b489c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B489Cu;
    SET_GPR_U32(ctx, 31, 0x1B48A4u);
    ctx->pc = 0x1B48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B489Cu;
    // 0x1b48a0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B489Cu, 0x1B48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48A4u;
label_1b48a4:
    // 0x1b48a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b48a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b48a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48ac: 0x0  nop
    ctx->pc = 0x1b48acu;
    // NOP
label_1b48b0:
    // 0x1b48b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b48b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1b48b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1b48b8: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1b48b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b48bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b48c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b48c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b48c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b48c8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b48cc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1b48d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b48d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b48d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b48dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b48e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b48e4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1b48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1b48e8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b48ec: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b48ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b48f0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1b48f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1b48f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1b48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b48f8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b48fc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b4900: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1b4900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b4904: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b4904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b4908: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1b4908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1b490c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1b490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b4910: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b4914: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1b4914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b4918: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B4918u;
    {
        const bool branch_taken_0x1b4918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4918u;
        // 0x1b491c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4918) {
            ctx->pc = 0x1B48B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b48b0;
        }
    }
    ctx->pc = 0x1B4920u;
    // 0x1b4920: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b4920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b4924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4928: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B4928u;
    SET_GPR_U32(ctx, 31, 0x1B4930u);
    ctx->pc = 0x1B492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4928u;
    // 0x1b492c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B4928u, 0x1B4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4930u;
label_1b4930:
    // 0x1b4930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4934: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4934u;
    SET_GPR_U32(ctx, 31, 0x1B493Cu);
    ctx->pc = 0x1B4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4934u;
    // 0x1b4938: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4934u, 0x1B493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B493Cu;
label_1b493c:
    // 0x1b493c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4944: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4948: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B4948u;
    SET_GPR_U32(ctx, 31, 0x1B4950u);
    ctx->pc = 0x1B494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4948u;
    // 0x1b494c: 0x29eb8  dsll        $s3, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B4948u, 0x1B4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4950u;
label_1b4950:
    // 0x1b4950: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b4950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b4954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4958: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b495c: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b4960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4964: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b4968: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b496c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B496Cu;
    SET_GPR_U32(ctx, 31, 0x1B4974u);
    ctx->pc = 0x1B4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B496Cu;
    // 0x1b4970: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B496Cu, 0x1B4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4974u;
label_1b4974:
    // 0x1b4974: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4978: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b497c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4980: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b4980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4984: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b4984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b4988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b498c: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1b498cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1b4990: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b4990u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b4994: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b4994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b4998: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b499c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b49a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b49a4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b49a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b49a8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b49a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b49ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B49ACu;
    SET_GPR_U32(ctx, 31, 0x1B49B4u);
    ctx->pc = 0x1B49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49ACu;
    // 0x1b49b0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B49ACu, 0x1B49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49B4u;
label_1b49b4:
    // 0x1b49b4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b49b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b49bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b49bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b49c0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b49c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b49c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b49c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b49c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b49c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49cc: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b49ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b49d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B49D0u;
    SET_GPR_U32(ctx, 31, 0x1B49D8u);
    ctx->pc = 0x1B49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49D0u;
    // 0x1b49d4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B49D0u, 0x1B49D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49D8u;
label_1b49d8:
    // 0x1b49d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b49dc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b49e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b49e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b49e4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b49e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b49e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b49e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49ec: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b49ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b49f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B49F0u;
    SET_GPR_U32(ctx, 31, 0x1B49F8u);
    ctx->pc = 0x1B49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49F0u;
    // 0x1b49f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B49F0u, 0x1B49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49F8u;
label_1b49f8:
    // 0x1b49f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49fc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b49fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b4a00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4A00u;
    SET_GPR_U32(ctx, 31, 0x1B4A08u);
    ctx->pc = 0x1B4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A00u;
    // 0x1b4a04: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4A00u, 0x1B4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A08u;
label_1b4a08:
    // 0x1b4a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a0c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b4a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b4a10: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4A10u;
    SET_GPR_U32(ctx, 31, 0x1B4A18u);
    ctx->pc = 0x1B4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A10u;
    // 0x1b4a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4A10u, 0x1B4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A18u;
label_1b4a18:
    // 0x1b4a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a1c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b4a20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4A20u;
    SET_GPR_U32(ctx, 31, 0x1B4A28u);
    ctx->pc = 0x1B4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A20u;
    // 0x1b4a24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4A20u, 0x1B4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A28u;
label_1b4a28:
    // 0x1b4a28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b4a2c: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1b4a30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a38: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b4a3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A44u);
    ctx->pc = 0x1B4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A3Cu;
    // 0x1b4a40: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4A3Cu, 0x1B4A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A44u;
label_1b4a44:
    // 0x1b4a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A54u);
    ctx->pc = 0x1B4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A4Cu;
    // 0x1b4a50: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4A4Cu, 0x1B4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A54u;
label_1b4a54:
    // 0x1b4a54: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b4a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a5c: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b4a5cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b4a60: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b4a64: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4a68: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b4a68u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4a6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4a70: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4a74: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b4a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b4a78: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4a7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4a80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4a84: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b4a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b4a88: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b4a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b4a8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4a90: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b4a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b4a94: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b4a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b4a98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4a9c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b4a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b4aa0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4AA0u;
    SET_GPR_U32(ctx, 31, 0x1B4AA8u);
    ctx->pc = 0x1B4AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AA0u;
    // 0x1b4aa4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4AA0u, 0x1B4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AA8u;
label_1b4aa8:
    // 0x1b4aa8: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4aac: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4ab0: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4ab4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B4AB4u;
    {
        const bool branch_taken_0x1b4ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AB4u;
        // 0x1b4ab8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ab4) {
            ctx->pc = 0x1B4BF0u;
            goto label_1b4bf0;
        }
    }
    ctx->pc = 0x1B4ABCu;
    // 0x1b4abc: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b4ac0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b4ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ac4: 0x0  nop
    ctx->pc = 0x1b4ac4u;
    // NOP
label_1b4ac8:
    // 0x1b4ac8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b4ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b4acc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4ad0: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b4ad0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4ad4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b4ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b4ad8: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1b4ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b4adc: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4ae0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b4ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b4ae4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b4ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b4ae8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b4aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4af0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4af4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b4af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b4af8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4afc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4b00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4b04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4b08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4B08u;
    SET_GPR_U32(ctx, 31, 0x1B4B10u);
    ctx->pc = 0x1B4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B08u;
    // 0x1b4b0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4B08u, 0x1B4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B10u;
label_1b4b10:
    // 0x1b4b10: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b4b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4b1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B24u);
    ctx->pc = 0x1B4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B1Cu;
    // 0x1b4b20: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4B1Cu, 0x1B4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B24u;
label_1b4b24:
    // 0x1b4b24: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b4b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4b2c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b4b30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4b34: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b4b34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b4b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b3c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4b40: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x1b4b44: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x1b4b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x1b4b48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b4b4c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1b4b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1b4b50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4b54: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4b58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4b5c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4b60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b4b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b4b64: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b4b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b4b68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4B68u;
    SET_GPR_U32(ctx, 31, 0x1B4B70u);
    ctx->pc = 0x1B4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B68u;
    // 0x1b4b6c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4B68u, 0x1B4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B70u;
label_1b4b70:
    // 0x1b4b70: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b4b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4b7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B84u);
    ctx->pc = 0x1B4B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B7Cu;
    // 0x1b4b80: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4B7Cu, 0x1B4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B84u;
label_1b4b84:
    // 0x1b4b84: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b4b88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4b8c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1b4b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b4b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4b94: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b4b94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b4b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b9c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4ba0: 0x24630870  addiu       $v1, $v1, 0x870
    ctx->pc = 0x1b4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2160));
    // 0x1b4ba4: 0x24c60900  addiu       $a2, $a2, 0x900
    ctx->pc = 0x1b4ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2304));
    // 0x1b4ba8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b4bac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1b4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1b4bb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4bb4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4bb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4bbc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4bc0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b4bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b4bc4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b4bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b4bc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4BC8u;
    SET_GPR_U32(ctx, 31, 0x1B4BD0u);
    ctx->pc = 0x1B4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BC8u;
    // 0x1b4bcc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4BC8u, 0x1B4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BD0u;
label_1b4bd0:
    // 0x1b4bd0: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4bd4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b4bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b4bd8: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1b4bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1b4bdc: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4be0: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1b4be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4be4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1B4BE4u;
    {
        const bool branch_taken_0x1b4be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BE4u;
        // 0x1b4be8: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4be4) {
            ctx->pc = 0x1B4AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4ac8;
        }
    }
    ctx->pc = 0x1B4BECu;
    // 0x1b4bec: 0x0  nop
    ctx->pc = 0x1b4becu;
    // NOP
label_1b4bf0:
    // 0x1b4bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bf4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B4BF4u;
    SET_GPR_U32(ctx, 31, 0x1B4BFCu);
    ctx->pc = 0x1B4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BF4u;
    // 0x1b4bf8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B4BF4u, 0x1B4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BFCu;
label_1b4bfc:
    // 0x1b4bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c00: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b4c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b4c04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4C04u;
    SET_GPR_U32(ctx, 31, 0x1B4C0Cu);
    ctx->pc = 0x1B4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C04u;
    // 0x1b4c08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4C04u, 0x1B4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C0Cu;
label_1b4c0c:
    // 0x1b4c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c10: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4C10u;
    SET_GPR_U32(ctx, 31, 0x1B4C18u);
    ctx->pc = 0x1B4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C10u;
    // 0x1b4c14: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4C10u, 0x1B4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C18u;
label_1b4c18:
    // 0x1b4c18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4c24: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1b4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1b4c28: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b4c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b4c2c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b4c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b4c30: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1b4c30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4c34: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4C34u;
    SET_GPR_U32(ctx, 31, 0x1B4C3Cu);
    ctx->pc = 0x1B4C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C34u;
    // 0x1b4c38: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4C34u, 0x1B4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C3Cu;
label_1b4c3c:
    // 0x1b4c3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4c40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b4c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4c44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4c48: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4c4c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b4c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b4c50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4c54: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1b4c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1b4c58: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b4c58u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b4c5c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b4c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b4c60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4c6c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b4c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b4c70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4c74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4C74u;
    SET_GPR_U32(ctx, 31, 0x1B4C7Cu);
    ctx->pc = 0x1B4C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C74u;
    // 0x1b4c78: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4C74u, 0x1B4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C7Cu;
label_1b4c7c:
    // 0x1b4c7c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b4c80: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b4c84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4c88: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b4c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b4c8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c94: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b4c98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4C98u;
    SET_GPR_U32(ctx, 31, 0x1B4CA0u);
    ctx->pc = 0x1B4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C98u;
    // 0x1b4c9c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4C98u, 0x1B4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CA0u;
label_1b4ca0:
    // 0x1b4ca0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b4ca4: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b4ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b4ca8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4cb0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b4cb4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4CB4u;
    SET_GPR_U32(ctx, 31, 0x1B4CBCu);
    ctx->pc = 0x1B4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CB4u;
    // 0x1b4cb8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4CB4u, 0x1B4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CBCu;
label_1b4cbc:
    // 0x1b4cbc: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b4cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4cc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4cc4: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b4cc4u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b4cc8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b4ccc: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4cd0: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b4cd0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4cd4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4cd8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4cdc: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b4cdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b4ce0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4ce8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4cec: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b4cecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b4cf0: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b4cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b4cf4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4cf8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b4cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b4cfc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b4cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b4d00: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4d04: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b4d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b4d08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4D08u;
    SET_GPR_U32(ctx, 31, 0x1B4D10u);
    ctx->pc = 0x1B4D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D08u;
    // 0x1b4d0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4D08u, 0x1B4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D10u;
label_1b4d10:
    // 0x1b4d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d14: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b4d18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4D18u;
    SET_GPR_U32(ctx, 31, 0x1B4D20u);
    ctx->pc = 0x1B4D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D18u;
    // 0x1b4d1c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4D18u, 0x1B4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D20u;
label_1b4d20:
    // 0x1b4d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d24: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b4d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b4d28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4D28u;
    SET_GPR_U32(ctx, 31, 0x1B4D30u);
    ctx->pc = 0x1B4D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D28u;
    // 0x1b4d2c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4D28u, 0x1B4D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D30u;
label_1b4d30:
    // 0x1b4d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4D38u;
    SET_GPR_U32(ctx, 31, 0x1B4D40u);
    ctx->pc = 0x1B4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D38u;
    // 0x1b4d3c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4D38u, 0x1B4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D40u;
label_1b4d40:
    // 0x1b4d40: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4d44: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4d48: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b4d48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4d4c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B4D4Cu;
    {
        const bool branch_taken_0x1b4d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D4Cu;
        // 0x1b4d50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d4c) {
            ctx->pc = 0x1B4E28u;
            goto label_1b4e28;
        }
    }
    ctx->pc = 0x1B4D54u;
    // 0x1b4d54: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b4d58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b4d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d5c: 0x0  nop
    ctx->pc = 0x1b4d5cu;
    // NOP
label_1b4d60:
    // 0x1b4d60: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b4d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b4d64: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4d68: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b4d68u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4d6c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b4d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b4d70: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1b4d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b4d74: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4d78: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b4d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b4d7c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b4d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b4d80: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b4d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d88: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4d8c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b4d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b4d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4d94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4d98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4d9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4da0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4DA0u;
    SET_GPR_U32(ctx, 31, 0x1B4DA8u);
    ctx->pc = 0x1B4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DA0u;
    // 0x1b4da4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4DA0u, 0x1B4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DA8u;
label_1b4da8:
    // 0x1b4da8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b4dac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4db0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4db4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4DB4u;
    SET_GPR_U32(ctx, 31, 0x1B4DBCu);
    ctx->pc = 0x1B4DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DB4u;
    // 0x1b4db8: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4DB4u, 0x1B4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DBCu;
label_1b4dbc:
    // 0x1b4dbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4dc0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b4dc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4dc8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b4dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b4dcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dd4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b4dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4dd8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4DD8u;
    SET_GPR_U32(ctx, 31, 0x1B4DE0u);
    ctx->pc = 0x1B4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DD8u;
    // 0x1b4ddc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4DD8u, 0x1B4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DE0u;
label_1b4de0:
    // 0x1b4de0: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b4de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4de8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4dec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4DECu;
    SET_GPR_U32(ctx, 31, 0x1B4DF4u);
    ctx->pc = 0x1B4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DECu;
    // 0x1b4df0: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4DECu, 0x1B4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DF4u;
label_1b4df4:
    // 0x1b4df4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b4df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dfc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b4dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b4e00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b4e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4e04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4E04u;
    SET_GPR_U32(ctx, 31, 0x1B4E0Cu);
    ctx->pc = 0x1B4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E04u;
    // 0x1b4e08: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4E04u, 0x1B4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E0Cu;
label_1b4e0c:
    // 0x1b4e0c: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4e10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b4e10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b4e14: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1b4e14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1b4e18: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b4e1c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1b4e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4e20: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B4E20u;
    {
        const bool branch_taken_0x1b4e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E20u;
        // 0x1b4e24: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e20) {
            ctx->pc = 0x1B4D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4d60;
        }
    }
    ctx->pc = 0x1B4E28u;
label_1b4e28:
    // 0x1b4e28: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b4e2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e30: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1b4e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b4e34: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e38: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1b4e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x1b4e3c: 0x0  nop
    ctx->pc = 0x1b4e3cu;
    // NOP
label_1b4e40:
    // 0x1b4e40: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x1b4e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b4e44: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1b4e48: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1b4e48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1b4e4c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b4e50: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x1b4e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4e54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1b4e58: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1b4e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b4e5c: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x1b4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x1b4e60: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x1b4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1b4e64: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1b4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1b4e68: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b4e68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b4e6c: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1b4e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b4e70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b4e74: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1b4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b4e78: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x1b4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x1b4e7c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b4e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b4e80: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1b4e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b4e84: 0x24850005  addiu       $a1, $a0, 0x5
    ctx->pc = 0x1b4e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1b4e88: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1b4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x1b4e8c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b4e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b4e90: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b4e94: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x1b4e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1b4e98: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x1b4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x1b4e9c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b4e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b4ea0: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1b4ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b4ea4: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x1b4ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1b4ea8: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x1b4ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x1b4eac: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b4eb0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b4eb4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b4eb8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1b4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1b4ebc: 0x2c850100  sltiu       $a1, $a0, 0x100
    ctx->pc = 0x1b4ebcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b4ec0: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1B4EC0u;
    {
        const bool branch_taken_0x1b4ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EC0u;
        // 0x1b4ec4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ec0) {
            ctx->pc = 0x1B4E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4e40;
        }
    }
    ctx->pc = 0x1B4EC8u;
    // 0x1b4ec8: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b4ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b4ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ed0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B4ED0u;
    SET_GPR_U32(ctx, 31, 0x1B4ED8u);
    ctx->pc = 0x1B4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4ED0u;
    // 0x1b4ed4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B4ED0u, 0x1B4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4ED8u;
label_1b4ed8:
    // 0x1b4ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4edc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4EDCu;
    SET_GPR_U32(ctx, 31, 0x1B4EE4u);
    ctx->pc = 0x1B4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EDCu;
    // 0x1b4ee0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4EDCu, 0x1B4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EE4u;
label_1b4ee4:
    // 0x1b4ee4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4eec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4ef0: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b4ef4: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b4ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b4ef8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b4ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b4efc: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1b4efcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4f00: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B4F00u;
    SET_GPR_U32(ctx, 31, 0x1B4F08u);
    ctx->pc = 0x1B4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F00u;
    // 0x1b4f04: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B4F00u, 0x1B4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F08u;
label_1b4f08:
    // 0x1b4f08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4f0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b4f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4f10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b4f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b4f14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4f18: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b4f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b4f1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4f20: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1b4f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1b4f24: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b4f24u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b4f28: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b4f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b4f2c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4f38: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b4f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b4f3c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4f40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4F40u;
    SET_GPR_U32(ctx, 31, 0x1B4F48u);
    ctx->pc = 0x1B4F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F40u;
    // 0x1b4f44: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4F40u, 0x1B4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F48u;
label_1b4f48:
    // 0x1b4f48: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B4F48u;
    SET_GPR_U32(ctx, 31, 0x1B4F50u);
    ctx->pc = 0x1B4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F48u;
    // 0x1b4f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B4F48u, 0x1B4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F50u;
label_1b4f50:
    // 0x1b4f50: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b4f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f58: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4f5c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b4f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b4f60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b4f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4f64: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b4f68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4f6c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b4f6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b4f70: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b4f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b4f74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4F74u;
    SET_GPR_U32(ctx, 31, 0x1B4F7Cu);
    ctx->pc = 0x1B4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F74u;
    // 0x1b4f78: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4F74u, 0x1B4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F7Cu;
label_1b4f7c:
    // 0x1b4f7c: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b4f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b4f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f84: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b4f84u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b4f88: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b4f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b4f8c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b4f90: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b4f90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b4f94: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b4f98: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b4f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b4f9c: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b4f9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b4fa0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b4fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b4fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4fa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4fac: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b4facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b4fb0: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b4fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b4fb4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b4fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b4fb8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b4fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b4fbc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b4fbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b4fc0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4fc4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b4fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b4fc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4FC8u;
    SET_GPR_U32(ctx, 31, 0x1B4FD0u);
    ctx->pc = 0x1B4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FC8u;
    // 0x1b4fcc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4FC8u, 0x1B4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FD0u;
label_1b4fd0:
    // 0x1b4fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fd4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b4fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b4fd8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4FD8u;
    SET_GPR_U32(ctx, 31, 0x1B4FE0u);
    ctx->pc = 0x1B4FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FD8u;
    // 0x1b4fdc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4FD8u, 0x1B4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FE0u;
label_1b4fe0:
    // 0x1b4fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fe4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b4fe8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B4FE8u;
    SET_GPR_U32(ctx, 31, 0x1B4FF0u);
    ctx->pc = 0x1B4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FE8u;
    // 0x1b4fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B4FE8u, 0x1B4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FF0u;
label_1b4ff0:
    // 0x1b4ff0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b4ff4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b4ff8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b4ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5000: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b5000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b5004: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5004u;
    SET_GPR_U32(ctx, 31, 0x1B500Cu);
    ctx->pc = 0x1B5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5004u;
    // 0x1b5008: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5004u, 0x1B500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B500Cu;
label_1b500c:
    // 0x1b500c: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x1b500cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b5010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5018: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x1b5018u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1b501c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1b501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1b5020: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1b5020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5024: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b5028: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x1b5028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x1b502c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5030: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b5034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b5038: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1b5038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b503c: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x1b503cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1b5040: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b5040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5044: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1b5044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1b5048: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5048u;
    SET_GPR_U32(ctx, 31, 0x1B5050u);
    ctx->pc = 0x1B504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5048u;
    // 0x1b504c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5048u, 0x1B5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5050u;
label_1b5050:
    // 0x1b5050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5058: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5058u;
    SET_GPR_U32(ctx, 31, 0x1B5060u);
    ctx->pc = 0x1B505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5058u;
    // 0x1b505c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5058u, 0x1B5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5060u;
label_1b5060:
    // 0x1b5060: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b5060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b5064: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b5064u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b5068: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b5068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b506c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B506Cu;
    {
        const bool branch_taken_0x1b506c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B506Cu;
        // 0x1b5070: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b506c) {
            ctx->pc = 0x1B5148u;
            goto label_1b5148;
        }
    }
    ctx->pc = 0x1B5074u;
    // 0x1b5074: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1b5074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b5078: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b507c: 0x0  nop
    ctx->pc = 0x1b507cu;
    // NOP
label_1b5080:
    // 0x1b5080: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1b5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b5084: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5088: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1b5088u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b508c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b5090: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1b5090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b5094: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b5098: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b509c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b50a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b50a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b50a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b50a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b50ac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b50acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b50b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b50b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b50b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b50b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b50bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b50bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b50c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B50C0u;
    SET_GPR_U32(ctx, 31, 0x1B50C8u);
    ctx->pc = 0x1B50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50C0u;
    // 0x1b50c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B50C0u, 0x1B50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50C8u;
label_1b50c8:
    // 0x1b50c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b50cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b50ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b50d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b50d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B50D4u;
    SET_GPR_U32(ctx, 31, 0x1B50DCu);
    ctx->pc = 0x1B50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50D4u;
    // 0x1b50d8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B50D4u, 0x1B50DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50DCu;
label_1b50dc:
    // 0x1b50dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b50e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b50e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b50e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b50e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b50e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b50ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b50ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b50f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b50f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b50f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B50F8u;
    SET_GPR_U32(ctx, 31, 0x1B5100u);
    ctx->pc = 0x1B50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50F8u;
    // 0x1b50fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B50F8u, 0x1B5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5100u;
label_1b5100:
    // 0x1b5100: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b5104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5108: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b510c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B510Cu;
    SET_GPR_U32(ctx, 31, 0x1B5114u);
    ctx->pc = 0x1B5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B510Cu;
    // 0x1b5110: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B510Cu, 0x1B5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5114u;
label_1b5114:
    // 0x1b5114: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b5114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b5118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b511c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b5120: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5124: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5124u;
    SET_GPR_U32(ctx, 31, 0x1B512Cu);
    ctx->pc = 0x1B5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5124u;
    // 0x1b5128: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5124u, 0x1B512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B512Cu;
label_1b512c:
    // 0x1b512c: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b5130: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b5134: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1b5134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1b5138: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b5138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b513c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1b513cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5140: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B5140u;
    {
        const bool branch_taken_0x1b5140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5140u;
        // 0x1b5144: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5140) {
            ctx->pc = 0x1B5080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5080;
        }
    }
    ctx->pc = 0x1B5148u;
label_1b5148:
    // 0x1b5148: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b5148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b514c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5154: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b5158: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b5158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b515c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B515Cu;
    SET_GPR_U32(ctx, 31, 0x1B5164u);
    ctx->pc = 0x1B5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B515Cu;
    // 0x1b5160: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B515Cu, 0x1B5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5164u;
label_1b5164:
    // 0x1b5164: 0x0  nop
    ctx->pc = 0x1b5164u;
    // NOP
label_1b5168:
    // 0x1b5168: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b5168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b516c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b516cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5170: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b5170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b5174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b517c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b517cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5184: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5184u;
        // 0x1b5188: 0x27bd0870  addiu       $sp, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B518Cu;
}
