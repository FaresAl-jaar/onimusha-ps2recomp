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

// Function: sub_003C2980
// Address: 0x3c2980 - 0x3c4e28
void sub_003C2980_0x3c2980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2980_0x3c2980");
#endif

    switch (ctx->pc) {
        case 0x3c29c0u: goto label_3c29c0;
        case 0x3c29e8u: goto label_3c29e8;
        case 0x3c2a30u: goto label_3c2a30;
        case 0x3c2a40u: goto label_3c2a40;
        case 0x3c2a4cu: goto label_3c2a4c;
        case 0x3c2a58u: goto label_3c2a58;
        case 0x3c2a68u: goto label_3c2a68;
        case 0x3c2a78u: goto label_3c2a78;
        case 0x3c2ab0u: goto label_3c2ab0;
        case 0x3c2abcu: goto label_3c2abc;
        case 0x3c2ae0u: goto label_3c2ae0;
        case 0x3c2af0u: goto label_3c2af0;
        case 0x3c2b00u: goto label_3c2b00;
        case 0x3c2b0cu: goto label_3c2b0c;
        case 0x3c2b1cu: goto label_3c2b1c;
        case 0x3c2b84u: goto label_3c2b84;
        case 0x3c2c70u: goto label_3c2c70;
        case 0x3c2c90u: goto label_3c2c90;
        case 0x3c2c9cu: goto label_3c2c9c;
        case 0x3c2ca8u: goto label_3c2ca8;
        case 0x3c2cb4u: goto label_3c2cb4;
        case 0x3c2cc4u: goto label_3c2cc4;
        case 0x3c2cd4u: goto label_3c2cd4;
        case 0x3c2d10u: goto label_3c2d10;
        case 0x3c2d1cu: goto label_3c2d1c;
        case 0x3c2d40u: goto label_3c2d40;
        case 0x3c2d50u: goto label_3c2d50;
        case 0x3c2d60u: goto label_3c2d60;
        case 0x3c2d6cu: goto label_3c2d6c;
        case 0x3c2d7cu: goto label_3c2d7c;
        case 0x3c2eb8u: goto label_3c2eb8;
        case 0x3c2ec8u: goto label_3c2ec8;
        case 0x3c2f98u: goto label_3c2f98;
        case 0x3c2fb4u: goto label_3c2fb4;
        case 0x3c3018u: goto label_3c3018;
        case 0x3c306cu: goto label_3c306c;
        case 0x3c3078u: goto label_3c3078;
        case 0x3c3084u: goto label_3c3084;
        case 0x3c3094u: goto label_3c3094;
        case 0x3c30a4u: goto label_3c30a4;
        case 0x3c30e0u: goto label_3c30e0;
        case 0x3c30ecu: goto label_3c30ec;
        case 0x3c3110u: goto label_3c3110;
        case 0x3c3120u: goto label_3c3120;
        case 0x3c3130u: goto label_3c3130;
        case 0x3c313cu: goto label_3c313c;
        case 0x3c314cu: goto label_3c314c;
        case 0x3c31d8u: goto label_3c31d8;
        case 0x3c31f8u: goto label_3c31f8;
        case 0x3c3208u: goto label_3c3208;
        case 0x3c3214u: goto label_3c3214;
        case 0x3c3220u: goto label_3c3220;
        case 0x3c3244u: goto label_3c3244;
        case 0x3c329cu: goto label_3c329c;
        case 0x3c32c4u: goto label_3c32c4;
        case 0x3c32e0u: goto label_3c32e0;
        case 0x3c3324u: goto label_3c3324;
        case 0x3c3364u: goto label_3c3364;
        case 0x3c33a0u: goto label_3c33a0;
        case 0x3c33b0u: goto label_3c33b0;
        case 0x3c33c4u: goto label_3c33c4;
        case 0x3c33ccu: goto label_3c33cc;
        case 0x3c3404u: goto label_3c3404;
        case 0x3c3424u: goto label_3c3424;
        case 0x3c342cu: goto label_3c342c;
        case 0x3c34e0u: goto label_3c34e0;
        case 0x3c34ecu: goto label_3c34ec;
        case 0x3c34f4u: goto label_3c34f4;
        case 0x3c3508u: goto label_3c3508;
        case 0x3c3518u: goto label_3c3518;
        case 0x3c3550u: goto label_3c3550;
        case 0x3c35d0u: goto label_3c35d0;
        case 0x3c35dcu: goto label_3c35dc;
        case 0x3c35e8u: goto label_3c35e8;
        case 0x3c35f4u: goto label_3c35f4;
        case 0x3c3604u: goto label_3c3604;
        case 0x3c3614u: goto label_3c3614;
        case 0x3c3650u: goto label_3c3650;
        case 0x3c365cu: goto label_3c365c;
        case 0x3c3680u: goto label_3c3680;
        case 0x3c3690u: goto label_3c3690;
        case 0x3c36a0u: goto label_3c36a0;
        case 0x3c36acu: goto label_3c36ac;
        case 0x3c36bcu: goto label_3c36bc;
        case 0x3c383cu: goto label_3c383c;
        case 0x3c384cu: goto label_3c384c;
        case 0x3c3868u: goto label_3c3868;
        case 0x3c3874u: goto label_3c3874;
        case 0x3c3888u: goto label_3c3888;
        case 0x3c3898u: goto label_3c3898;
        case 0x3c38e0u: goto label_3c38e0;
        case 0x3c38ecu: goto label_3c38ec;
        case 0x3c38f8u: goto label_3c38f8;
        case 0x3c3904u: goto label_3c3904;
        case 0x3c3914u: goto label_3c3914;
        case 0x3c3924u: goto label_3c3924;
        case 0x3c3960u: goto label_3c3960;
        case 0x3c396cu: goto label_3c396c;
        case 0x3c3990u: goto label_3c3990;
        case 0x3c39a0u: goto label_3c39a0;
        case 0x3c39b0u: goto label_3c39b0;
        case 0x3c39bcu: goto label_3c39bc;
        case 0x3c39ccu: goto label_3c39cc;
        case 0x3c3a78u: goto label_3c3a78;
        case 0x3c3a88u: goto label_3c3a88;
        case 0x3c3ab0u: goto label_3c3ab0;
        case 0x3c3ac0u: goto label_3c3ac0;
        case 0x3c3accu: goto label_3c3acc;
        case 0x3c3ad8u: goto label_3c3ad8;
        case 0x3c3ae8u: goto label_3c3ae8;
        case 0x3c3af8u: goto label_3c3af8;
        case 0x3c3b30u: goto label_3c3b30;
        case 0x3c3b3cu: goto label_3c3b3c;
        case 0x3c3b60u: goto label_3c3b60;
        case 0x3c3b70u: goto label_3c3b70;
        case 0x3c3b80u: goto label_3c3b80;
        case 0x3c3b8cu: goto label_3c3b8c;
        case 0x3c3b9cu: goto label_3c3b9c;
        case 0x3c3cc4u: goto label_3c3cc4;
        case 0x3c3cd4u: goto label_3c3cd4;
        case 0x3c3d60u: goto label_3c3d60;
        case 0x3c3d6cu: goto label_3c3d6c;
        case 0x3c3d78u: goto label_3c3d78;
        case 0x3c3d84u: goto label_3c3d84;
        case 0x3c3d94u: goto label_3c3d94;
        case 0x3c3da4u: goto label_3c3da4;
        case 0x3c3de0u: goto label_3c3de0;
        case 0x3c3decu: goto label_3c3dec;
        case 0x3c3e10u: goto label_3c3e10;
        case 0x3c3e20u: goto label_3c3e20;
        case 0x3c3e30u: goto label_3c3e30;
        case 0x3c3e3cu: goto label_3c3e3c;
        case 0x3c3e4cu: goto label_3c3e4c;
        case 0x3c3fd0u: goto label_3c3fd0;
        case 0x3c3fe0u: goto label_3c3fe0;
        case 0x3c4000u: goto label_3c4000;
        case 0x3c400cu: goto label_3c400c;
        case 0x3c4030u: goto label_3c4030;
        case 0x3c4054u: goto label_3c4054;
        case 0x3c4060u: goto label_3c4060;
        case 0x3c406cu: goto label_3c406c;
        case 0x3c4078u: goto label_3c4078;
        case 0x3c4088u: goto label_3c4088;
        case 0x3c4098u: goto label_3c4098;
        case 0x3c40d0u: goto label_3c40d0;
        case 0x3c40dcu: goto label_3c40dc;
        case 0x3c4100u: goto label_3c4100;
        case 0x3c4110u: goto label_3c4110;
        case 0x3c4120u: goto label_3c4120;
        case 0x3c412cu: goto label_3c412c;
        case 0x3c413cu: goto label_3c413c;
        case 0x3c41ecu: goto label_3c41ec;
        case 0x3c41fcu: goto label_3c41fc;
        case 0x3c4240u: goto label_3c4240;
        case 0x3c4248u: goto label_3c4248;
        case 0x3c42a4u: goto label_3c42a4;
        case 0x3c42ccu: goto label_3c42cc;
        case 0x3c42dcu: goto label_3c42dc;
        case 0x3c42e8u: goto label_3c42e8;
        case 0x3c42f4u: goto label_3c42f4;
        case 0x3c4304u: goto label_3c4304;
        case 0x3c4314u: goto label_3c4314;
        case 0x3c4350u: goto label_3c4350;
        case 0x3c435cu: goto label_3c435c;
        case 0x3c4380u: goto label_3c4380;
        case 0x3c4390u: goto label_3c4390;
        case 0x3c43a0u: goto label_3c43a0;
        case 0x3c43acu: goto label_3c43ac;
        case 0x3c43bcu: goto label_3c43bc;
        case 0x3c441cu: goto label_3c441c;
        case 0x3c442cu: goto label_3c442c;
        case 0x3c4460u: goto label_3c4460;
        case 0x3c446cu: goto label_3c446c;
        case 0x3c4474u: goto label_3c4474;
        case 0x3c4528u: goto label_3c4528;
        case 0x3c4538u: goto label_3c4538;
        case 0x3c456cu: goto label_3c456c;
        case 0x3c4578u: goto label_3c4578;
        case 0x3c4580u: goto label_3c4580;
        case 0x3c45ccu: goto label_3c45cc;
        case 0x3c45d8u: goto label_3c45d8;
        case 0x3c45fcu: goto label_3c45fc;
        case 0x3c4624u: goto label_3c4624;
        case 0x3c4630u: goto label_3c4630;
        case 0x3c463cu: goto label_3c463c;
        case 0x3c4648u: goto label_3c4648;
        case 0x3c4658u: goto label_3c4658;
        case 0x3c4668u: goto label_3c4668;
        case 0x3c46a0u: goto label_3c46a0;
        case 0x3c46acu: goto label_3c46ac;
        case 0x3c46d0u: goto label_3c46d0;
        case 0x3c46e0u: goto label_3c46e0;
        case 0x3c46f0u: goto label_3c46f0;
        case 0x3c46fcu: goto label_3c46fc;
        case 0x3c470cu: goto label_3c470c;
        case 0x3c47b8u: goto label_3c47b8;
        case 0x3c47d4u: goto label_3c47d4;
        case 0x3c47f4u: goto label_3c47f4;
        case 0x3c4804u: goto label_3c4804;
        case 0x3c4838u: goto label_3c4838;
        case 0x3c4844u: goto label_3c4844;
        case 0x3c4878u: goto label_3c4878;
        case 0x3c4888u: goto label_3c4888;
        case 0x3c4894u: goto label_3c4894;
        case 0x3c48a0u: goto label_3c48a0;
        case 0x3c48b0u: goto label_3c48b0;
        case 0x3c48c0u: goto label_3c48c0;
        case 0x3c48f8u: goto label_3c48f8;
        case 0x3c4904u: goto label_3c4904;
        case 0x3c4928u: goto label_3c4928;
        case 0x3c4938u: goto label_3c4938;
        case 0x3c4948u: goto label_3c4948;
        case 0x3c4954u: goto label_3c4954;
        case 0x3c4964u: goto label_3c4964;
        case 0x3c49c4u: goto label_3c49c4;
        case 0x3c49d4u: goto label_3c49d4;
        case 0x3c4a08u: goto label_3c4a08;
        case 0x3c4a14u: goto label_3c4a14;
        case 0x3c4ac8u: goto label_3c4ac8;
        case 0x3c4ad8u: goto label_3c4ad8;
        case 0x3c4b0cu: goto label_3c4b0c;
        case 0x3c4b18u: goto label_3c4b18;
        case 0x3c4b34u: goto label_3c4b34;
        case 0x3c4b40u: goto label_3c4b40;
        case 0x3c4b48u: goto label_3c4b48;
        case 0x3c4bccu: goto label_3c4bcc;
        case 0x3c4be0u: goto label_3c4be0;
        case 0x3c4bfcu: goto label_3c4bfc;
        case 0x3c4c0cu: goto label_3c4c0c;
        case 0x3c4c44u: goto label_3c4c44;
        case 0x3c4c88u: goto label_3c4c88;
        case 0x3c4ca4u: goto label_3c4ca4;
        case 0x3c4cb4u: goto label_3c4cb4;
        case 0x3c4cc0u: goto label_3c4cc0;
        case 0x3c4d30u: goto label_3c4d30;
        case 0x3c4d40u: goto label_3c4d40;
        case 0x3c4de8u: goto label_3c4de8;
        case 0x3c4df4u: goto label_3c4df4;
        default: break;
    }

    ctx->pc = 0x3c2980u;

    // 0x3c2980: 0x27bdf3d0  addiu       $sp, $sp, -0xC30
    ctx->pc = 0x3c2980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964176));
    // 0x3c2984: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3c2984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3c2988: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3c2988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3c298c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3c2990: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c2990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3c2994: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c2994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3c2998: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c2998u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c299c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3c29a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c29a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c29a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c29a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c29a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c29a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c29ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c29acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c29b0: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C29B0u;
    {
        const bool branch_taken_0x3c29b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29B0u;
        // 0x3c29b4: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29b0) {
            ctx->pc = 0x3C29C8u;
            goto label_3c29c8;
        }
    }
    ctx->pc = 0x3C29B8u;
    // 0x3c29b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C29B8u;
    SET_GPR_U32(ctx, 31, 0x3C29C0u);
    ctx->pc = 0x3C29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C29B8u;
    // 0x3c29bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C29B8u, 0x3C29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C29C0u;
label_3c29c0:
    // 0x3c29c0: 0x1000090d  b           . + 4 + (0x90D << 2)
    ctx->pc = 0x3C29C0u;
    {
        const bool branch_taken_0x3c29c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c29c0) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C29C8u;
label_3c29c8:
    // 0x3c29c8: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C29C8u;
    {
        const bool branch_taken_0x3c29c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c29c8) {
            ctx->pc = 0x3C29F0u;
            goto label_3c29f0;
        }
    }
    ctx->pc = 0x3C29D0u;
    // 0x3c29d0: 0x8ec329c0  lw          $v1, 0x29C0($s6)
    ctx->pc = 0x3c29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10688)));
    // 0x3c29d4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3c29d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c29d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C29D8u;
    {
        const bool branch_taken_0x3c29d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29D8u;
        // 0x3c29dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29d8) {
            ctx->pc = 0x3C29F0u;
            goto label_3c29f0;
        }
    }
    ctx->pc = 0x3C29E0u;
    // 0x3c29e0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C29E0u;
    SET_GPR_U32(ctx, 31, 0x3C29E8u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C29E0u, 0x3C29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C29E8u;
label_3c29e8:
    // 0x3c29e8: 0x10000903  b           . + 4 + (0x903 << 2)
    ctx->pc = 0x3C29E8u;
    {
        const bool branch_taken_0x3c29e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c29e8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C29F0u;
label_3c29f0:
    // 0x3c29f0: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c29f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c29f4: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x3c29f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c29f8: 0x102008ff  beqz        $at, . + 4 + (0x8FF << 2)
    ctx->pc = 0x3C29F8u;
    {
        const bool branch_taken_0x3c29f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29F8u;
        // 0x3c29fc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29f8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C2A00u;
    // 0x3c2a00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c2a04: 0x24842e20  addiu       $a0, $a0, 0x2E20
    ctx->pc = 0x3c2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11808));
    // 0x3c2a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c2a0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2a10: 0x600008  jr          $v1
    ctx->pc = 0x3C2A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C2A18u: goto label_3c2a18;
            case 0x3C2B98u: goto label_3c2b98;
            case 0x3C2C10u: goto label_3c2c10;
            case 0x3C2E80u: goto label_3c2e80;
            case 0x3C2FB8u: goto label_3c2fb8;
            case 0x3C3500u: goto label_3c3500;
            case 0x3C3570u: goto label_3c3570;
            case 0x3C37E0u: goto label_3c37e0;
            case 0x3C3878u: goto label_3c3878;
            case 0x3C3CB0u: goto label_3c3cb0;
            case 0x3C3D00u: goto label_3c3d00;
            case 0x3C3F70u: goto label_3c3f70;
            case 0x3C4030u: goto label_3c4030;
            case 0x3C4588u: goto label_3c4588;
            case 0x3C4600u: goto label_3c4600;
            case 0x3C4B20u: goto label_3c4b20;
            case 0x3C4C68u: goto label_3c4c68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2A10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C2A18u;
label_3c2a18:
    // 0x3c2a18: 0x12c00057  beqz        $s6, . + 4 + (0x57 << 2)
    ctx->pc = 0x3C2A18u;
    {
        const bool branch_taken_0x3c2a18 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2a18) {
            ctx->pc = 0x3C2B78u;
            goto label_3c2b78;
        }
    }
    ctx->pc = 0x3C2A20u;
    // 0x3c2a20: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c2a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c2a24: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c2a24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c2a28: 0xc0aa44c  jal         func_2A9130
    ctx->pc = 0x3C2A28u;
    SET_GPR_U32(ctx, 31, 0x3C2A30u);
    ctx->pc = 0x3C2A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A28u;
    // 0x3c2a2c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9130u, 0x3C2A28u, 0x3C2A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A30u;
label_3c2a30:
    // 0x3c2a30: 0xae820550  sw          $v0, 0x550($s4)
    ctx->pc = 0x3c2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 2));
    // 0x3c2a34: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x3c2a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
    // 0x3c2a38: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C2A38u;
    SET_GPR_U32(ctx, 31, 0x3C2A40u);
    ctx->pc = 0x3C2A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A38u;
    // 0x3c2a3c: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C2A38u, 0x3C2A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A40u;
label_3c2a40:
    // 0x3c2a40: 0x27a40b80  addiu       $a0, $sp, 0xB80
    ctx->pc = 0x3c2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2944));
    // 0x3c2a44: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C2A44u;
    SET_GPR_U32(ctx, 31, 0x3C2A4Cu);
    ctx->pc = 0x3C2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A44u;
    // 0x3c2a48: 0x27a50ac0  addiu       $a1, $sp, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C2A44u, 0x3C2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A4Cu;
label_3c2a4c:
    // 0x3c2a4c: 0x27a40bb0  addiu       $a0, $sp, 0xBB0
    ctx->pc = 0x3c2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2992));
    // 0x3c2a50: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C2A50u;
    SET_GPR_U32(ctx, 31, 0x3C2A58u);
    ctx->pc = 0x3C2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A50u;
    // 0x3c2a54: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C2A50u, 0x3C2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A58u;
label_3c2a58:
    // 0x3c2a58: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c2a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c2a5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a60: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C2A60u;
    SET_GPR_U32(ctx, 31, 0x3C2A68u);
    ctx->pc = 0x3C2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A60u;
    // 0x3c2a64: 0x27a50b80  addiu       $a1, $sp, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C2A60u, 0x3C2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A68u;
label_3c2a68:
    // 0x3c2a68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2A68u;
    {
        const bool branch_taken_0x3c2a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A68u;
        // 0x3c2a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a68) {
            ctx->pc = 0x3C2A78u;
            goto label_3c2a78;
        }
    }
    ctx->pc = 0x3C2A70u;
    // 0x3c2a70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2A70u;
    SET_GPR_U32(ctx, 31, 0x3C2A78u);
    ctx->pc = 0x3C2A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A70u;
    // 0x3c2a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2A70u, 0x3C2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A78u;
label_3c2a78:
    // 0x3c2a78: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c2a78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2a7c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c2a80: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c2a84: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c2a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c2a8c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c2a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2a90: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c2a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c2a94: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x3C2A94u;
    {
        const bool branch_taken_0x3c2a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A94u;
        // 0x3c2a98: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a94) {
            ctx->pc = 0x3C2B88u;
            goto label_3c2b88;
        }
    }
    ctx->pc = 0x3C2A9Cu;
    // 0x3c2a9c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c2a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c2aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aa4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c2aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aa8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c2aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aac: 0x0  nop
    ctx->pc = 0x3c2aacu;
    // NOP
label_3c2ab0:
    // 0x3c2ab0: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c2ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c2ab4: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C2AB4u;
    SET_GPR_U32(ctx, 31, 0x3C2ABCu);
    ctx->pc = 0x3C2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2AB4u;
    // 0x3c2ab8: 0x27a40b40  addiu       $a0, $sp, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C2AB4u, 0x3C2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2ABCu;
label_3c2abc:
    // 0x3c2abc: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c2abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2ac0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c2ac4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c2ac8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c2acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c2ad0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c2ad4: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c2ad4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c2ad8: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C2AD8u;
    SET_GPR_U32(ctx, 31, 0x3C2AE0u);
    ctx->pc = 0x3C2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2AD8u;
    // 0x3c2adc: 0x27a40b00  addiu       $a0, $sp, 0xB00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C2AD8u, 0x3C2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2AE0u;
label_3c2ae0:
    // 0x3c2ae0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c2ae4: 0x27a50b00  addiu       $a1, $sp, 0xB00
    ctx->pc = 0x3c2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2816));
    // 0x3c2ae8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C2AE8u;
    SET_GPR_U32(ctx, 31, 0x3C2AF0u);
    ctx->pc = 0x3C2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2AE8u;
    // 0x3c2aec: 0x27a60b40  addiu       $a2, $sp, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C2AE8u, 0x3C2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2AF0u;
label_3c2af0:
    // 0x3c2af0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c2af4: 0x27a60ac0  addiu       $a2, $sp, 0xAC0
    ctx->pc = 0x3c2af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
    // 0x3c2af8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C2AF8u;
    SET_GPR_U32(ctx, 31, 0x3C2B00u);
    ctx->pc = 0x3C2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2AF8u;
    // 0x3c2afc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C2AF8u, 0x3C2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B00u;
label_3c2b00:
    // 0x3c2b00: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c2b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c2b04: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C2B04u;
    SET_GPR_U32(ctx, 31, 0x3C2B0Cu);
    ctx->pc = 0x3C2B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B04u;
    // 0x3c2b08: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C2B04u, 0x3C2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B0Cu;
label_3c2b0c:
    // 0x3c2b0c: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c2b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c2b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b14: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C2B14u;
    SET_GPR_U32(ctx, 31, 0x3C2B1Cu);
    ctx->pc = 0x3C2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B14u;
    // 0x3c2b18: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C2B14u, 0x3C2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B1Cu;
label_3c2b1c:
    // 0x3c2b1c: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c2b1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c2b20: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c2b24: 0x8664069e  lh          $a0, 0x69E($s3)
    ctx->pc = 0x3c2b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c2b28: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c2b2c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c2b2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c2b30: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c2b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c2b34: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c2b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c2b38: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c2b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c2b3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3c2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c2b40: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c2b40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2b44: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c2b44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c2b48: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3c2b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3c2b4c: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c2b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2b50: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c2b50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2b54: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c2b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c2b5c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c2b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2b60: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c2b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c2b64: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C2B64u;
    {
        const bool branch_taken_0x3c2b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B64u;
        // 0x3c2b68: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b64) {
            ctx->pc = 0x3C2AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2ab0;
        }
    }
    ctx->pc = 0x3C2B6Cu;
    // 0x3c2b6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C2B6Cu;
    {
        const bool branch_taken_0x3c2b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2b6c) {
            ctx->pc = 0x3C2B88u;
            goto label_3c2b88;
        }
    }
    ctx->pc = 0x3C2B74u;
    // 0x3c2b74: 0x0  nop
    ctx->pc = 0x3c2b74u;
    // NOP
label_3c2b78:
    // 0x3c2b78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b7c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2B7Cu;
    SET_GPR_U32(ctx, 31, 0x3C2B84u);
    ctx->pc = 0x3C2B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2B7Cu;
    // 0x3c2b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2B7Cu, 0x3C2B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2B84u;
label_3c2b84:
    // 0x3c2b84: 0x0  nop
    ctx->pc = 0x3c2b84u;
    // NOP
label_3c2b88:
    // 0x3c2b88: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c2b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c2b8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c2b90: 0x10000899  b           . + 4 + (0x899 << 2)
    ctx->pc = 0x3C2B90u;
    {
        const bool branch_taken_0x3c2b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B90u;
        // 0x3c2b94: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b90) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C2B98u;
label_3c2b98:
    // 0x3c2b98: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x3c2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x3c2b9c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c2ba0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c2ba4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c2ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c2ba8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3c2ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c2bac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c2bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c2bb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c2bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2bb8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c2bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c2bbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c2bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c2bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c2bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2bc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2BC4u;
    {
        const bool branch_taken_0x3c2bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2bc4) {
            ctx->pc = 0x3C2BDCu;
            goto label_3c2bdc;
        }
    }
    ctx->pc = 0x3C2BCCu;
    // 0x3c2bcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c2bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c2bd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c2bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c2bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2BD4u;
    {
        const bool branch_taken_0x3c2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BD4u;
        // 0x3c2bd8: 0xa6830512  sh          $v1, 0x512($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2bd4) {
            ctx->pc = 0x3C2BF8u;
            goto label_3c2bf8;
        }
    }
    ctx->pc = 0x3C2BDCu;
label_3c2bdc:
    // 0x3c2bdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c2bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c2be0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c2be4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c2be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c2be8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c2be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c2bec: 0x0  nop
    ctx->pc = 0x3c2becu;
    // NOP
    // 0x3c2bf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c2bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c2bf4: 0xa6830512  sh          $v1, 0x512($s4)
    ctx->pc = 0x3c2bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 3));
label_3c2bf8:
    // 0x3c2bf8: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c2bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c2bfc: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c2bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2c00: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c2c00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2c04: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c2c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c2c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c2c0c: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c2c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c2c10:
    // 0x3c2c10: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c2c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c2c14: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c2c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c2c1c: 0xa6830692  sh          $v1, 0x692($s4)
    ctx->pc = 0x3c2c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1682), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c2c20: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c2c20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c2c24: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3c2c24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c2c28: 0x0  nop
    ctx->pc = 0x3c2c28u;
    // NOP
    // 0x3c2c2c: 0x0  nop
    ctx->pc = 0x3c2c2cu;
    // NOP
    // 0x3c2c30: 0x1010  mfhi        $v0
    ctx->pc = 0x3c2c30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c2c34: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C2C34u;
    {
        const bool branch_taken_0x3c2c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2c34) {
            ctx->pc = 0x3C2C70u;
            goto label_3c2c70;
        }
    }
    ctx->pc = 0x3C2C3Cu;
    // 0x3c2c3c: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c2c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c2c40: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c2c44: 0x3c022b00  lui         $v0, 0x2B00
    ctx->pc = 0x3c2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11008 << 16));
    // 0x3c2c48: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c2c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c2c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c50: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c2c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c2c54: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c2c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c2c58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c2c58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c2c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c2c60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c2c64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c68: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C2C68u;
    SET_GPR_U32(ctx, 31, 0x3C2C70u);
    ctx->pc = 0x3C2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2C68u;
    // 0x3c2c6c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C2C68u, 0x3C2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2C70u;
label_3c2c70:
    // 0x3c2c70: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x3c2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
    // 0x3c2c74: 0x928306b6  lbu         $v1, 0x6B6($s4)
    ctx->pc = 0x3c2c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1718)));
    // 0x3c2c78: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3c2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c2c7c: 0x268606c0  addiu       $a2, $s4, 0x6C0
    ctx->pc = 0x3c2c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
    // 0x3c2c80: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c2c84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c2c88: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3C2C88u;
    SET_GPR_U32(ctx, 31, 0x3C2C90u);
    ctx->pc = 0x3C2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2C88u;
    // 0x3c2c8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3C2C88u, 0x3C2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2C90u;
label_3c2c90:
    // 0x3c2c90: 0x27a409c0  addiu       $a0, $sp, 0x9C0
    ctx->pc = 0x3c2c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2496));
    // 0x3c2c94: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C2C94u;
    SET_GPR_U32(ctx, 31, 0x3C2C9Cu);
    ctx->pc = 0x3C2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2C94u;
    // 0x3c2c98: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C2C94u, 0x3C2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2C9Cu;
label_3c2c9c:
    // 0x3c2c9c: 0x27a40a80  addiu       $a0, $sp, 0xA80
    ctx->pc = 0x3c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
    // 0x3c2ca0: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C2CA0u;
    SET_GPR_U32(ctx, 31, 0x3C2CA8u);
    ctx->pc = 0x3C2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2CA0u;
    // 0x3c2ca4: 0x27a509c0  addiu       $a1, $sp, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C2CA0u, 0x3C2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2CA8u;
label_3c2ca8:
    // 0x3c2ca8: 0x27a40ab0  addiu       $a0, $sp, 0xAB0
    ctx->pc = 0x3c2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2736));
    // 0x3c2cac: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C2CACu;
    SET_GPR_U32(ctx, 31, 0x3C2CB4u);
    ctx->pc = 0x3C2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2CACu;
    // 0x3c2cb0: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C2CACu, 0x3C2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2CB4u;
label_3c2cb4:
    // 0x3c2cb4: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c2cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c2cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2cbc: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C2CBCu;
    SET_GPR_U32(ctx, 31, 0x3C2CC4u);
    ctx->pc = 0x3C2CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2CBCu;
    // 0x3c2cc0: 0x27a50a80  addiu       $a1, $sp, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C2CBCu, 0x3C2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2CC4u;
label_3c2cc4:
    // 0x3c2cc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2CC4u;
    {
        const bool branch_taken_0x3c2cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CC4u;
        // 0x3c2cc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2cc4) {
            ctx->pc = 0x3C2CD8u;
            goto label_3c2cd8;
        }
    }
    ctx->pc = 0x3C2CCCu;
    // 0x3c2ccc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C2CCCu;
    SET_GPR_U32(ctx, 31, 0x3C2CD4u);
    ctx->pc = 0x3C2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2CCCu;
    // 0x3c2cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C2CCCu, 0x3C2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2CD4u;
label_3c2cd4:
    // 0x3c2cd4: 0x0  nop
    ctx->pc = 0x3c2cd4u;
    // NOP
label_3c2cd8:
    // 0x3c2cd8: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c2cd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2cdc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c2ce0: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c2ce4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c2ce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c2cec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c2cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2cf0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c2cf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c2cf4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C2CF4u;
    {
        const bool branch_taken_0x3c2cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CF4u;
        // 0x3c2cf8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2cf4) {
            ctx->pc = 0x3C2DD0u;
            goto label_3c2dd0;
        }
    }
    ctx->pc = 0x3C2CFCu;
    // 0x3c2cfc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c2cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c2d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d04: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c2d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d08: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c2d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d0c: 0x0  nop
    ctx->pc = 0x3c2d0cu;
    // NOP
label_3c2d10:
    // 0x3c2d10: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c2d10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c2d14: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C2D14u;
    SET_GPR_U32(ctx, 31, 0x3C2D1Cu);
    ctx->pc = 0x3C2D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D14u;
    // 0x3c2d18: 0x27a40a40  addiu       $a0, $sp, 0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C2D14u, 0x3C2D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D1Cu;
label_3c2d1c:
    // 0x3c2d1c: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c2d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2d20: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c2d24: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c2d28: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c2d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c2d30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c2d34: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c2d34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c2d38: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C2D38u;
    SET_GPR_U32(ctx, 31, 0x3C2D40u);
    ctx->pc = 0x3C2D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D38u;
    // 0x3c2d3c: 0x27a40a00  addiu       $a0, $sp, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C2D38u, 0x3C2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D40u;
label_3c2d40:
    // 0x3c2d40: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c2d44: 0x27a50a00  addiu       $a1, $sp, 0xA00
    ctx->pc = 0x3c2d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2560));
    // 0x3c2d48: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C2D48u;
    SET_GPR_U32(ctx, 31, 0x3C2D50u);
    ctx->pc = 0x3C2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D48u;
    // 0x3c2d4c: 0x27a60a40  addiu       $a2, $sp, 0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C2D48u, 0x3C2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D50u;
label_3c2d50:
    // 0x3c2d50: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c2d54: 0x27a609c0  addiu       $a2, $sp, 0x9C0
    ctx->pc = 0x3c2d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2496));
    // 0x3c2d58: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C2D58u;
    SET_GPR_U32(ctx, 31, 0x3C2D60u);
    ctx->pc = 0x3C2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D58u;
    // 0x3c2d5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C2D58u, 0x3C2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D60u;
label_3c2d60:
    // 0x3c2d60: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c2d64: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C2D64u;
    SET_GPR_U32(ctx, 31, 0x3C2D6Cu);
    ctx->pc = 0x3C2D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D64u;
    // 0x3c2d68: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C2D64u, 0x3C2D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D6Cu;
label_3c2d6c:
    // 0x3c2d6c: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c2d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c2d70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d74: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C2D74u;
    SET_GPR_U32(ctx, 31, 0x3C2D7Cu);
    ctx->pc = 0x3C2D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2D74u;
    // 0x3c2d78: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C2D74u, 0x3C2D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2D7Cu;
label_3c2d7c:
    // 0x3c2d7c: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c2d7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c2d80: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c2d84: 0x8664069e  lh          $a0, 0x69E($s3)
    ctx->pc = 0x3c2d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c2d88: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c2d8c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c2d8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c2d90: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c2d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c2d94: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c2d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c2d98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c2d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c2d9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3c2d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c2da0: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c2da0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2da4: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c2da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c2da8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3c2da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3c2dac: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c2dacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2db0: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c2db0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2db4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c2db8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c2dbc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c2dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2dc0: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c2dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c2dc4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C2DC4u;
    {
        const bool branch_taken_0x3c2dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DC4u;
        // 0x3c2dc8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2dc4) {
            ctx->pc = 0x3C2D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2d10;
        }
    }
    ctx->pc = 0x3C2DCCu;
    // 0x3c2dcc: 0x0  nop
    ctx->pc = 0x3c2dccu;
    // NOP
label_3c2dd0:
    // 0x3c2dd0: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c2dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c2dd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2DD4u;
    {
        const bool branch_taken_0x3c2dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2DD4u;
        // 0x3c2dd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2dd4) {
            ctx->pc = 0x3C2DE8u;
            goto label_3c2de8;
        }
    }
    ctx->pc = 0x3C2DDCu;
    // 0x3c2ddc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C2DDCu;
    {
        const bool branch_taken_0x3c2ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2ddc) {
            ctx->pc = 0x3C2E68u;
            goto label_3c2e68;
        }
    }
    ctx->pc = 0x3C2DE4u;
    // 0x3c2de4: 0x0  nop
    ctx->pc = 0x3c2de4u;
    // NOP
label_3c2de8:
    // 0x3c2de8: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c2de8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c2dec: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c2decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c2df0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c2df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c2df4: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c2df4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2df8: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c2df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c2dfc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C2DFCu;
    {
        const bool branch_taken_0x3c2dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c2dfc) {
            ctx->pc = 0x3C2E38u;
            goto label_3c2e38;
        }
    }
    ctx->pc = 0x3C2E04u;
    // 0x3c2e04: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c2e04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c2e08: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c2e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c2e0c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C2E0Cu;
    {
        const bool branch_taken_0x3c2e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E0Cu;
        // 0x3c2e10: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e0c) {
            ctx->pc = 0x3C2E60u;
            goto label_3c2e60;
        }
    }
    ctx->pc = 0x3C2E14u;
    // 0x3c2e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2e18: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c2e18u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c2e1c: 0x0  nop
    ctx->pc = 0x3c2e1cu;
    // NOP
    // 0x3c2e20: 0x0  nop
    ctx->pc = 0x3c2e20u;
    // NOP
    // 0x3c2e24: 0x2010  mfhi        $a0
    ctx->pc = 0x3c2e24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c2e28: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c2e28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2e2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C2E2Cu;
    {
        const bool branch_taken_0x3c2e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E2Cu;
        // 0x3c2e30: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e2c) {
            ctx->pc = 0x3C2E60u;
            goto label_3c2e60;
        }
    }
    ctx->pc = 0x3C2E34u;
    // 0x3c2e34: 0x0  nop
    ctx->pc = 0x3c2e34u;
    // NOP
label_3c2e38:
    // 0x3c2e38: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c2e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c2e3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c2e3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c2e40: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C2E40u;
    {
        const bool branch_taken_0x3c2e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2e40) {
            ctx->pc = 0x3C2E60u;
            goto label_3c2e60;
        }
    }
    ctx->pc = 0x3C2E48u;
    // 0x3c2e48: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c2e48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c2e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2e50: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2e54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2E54u;
    {
        const bool branch_taken_0x3c2e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E54u;
        // 0x3c2e58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e54) {
            ctx->pc = 0x3C2E68u;
            goto label_3c2e68;
        }
    }
    ctx->pc = 0x3C2E5Cu;
    // 0x3c2e5c: 0x0  nop
    ctx->pc = 0x3c2e5cu;
    // NOP
label_3c2e60:
    // 0x3c2e60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2e64: 0x0  nop
    ctx->pc = 0x3c2e64u;
    // NOP
label_3c2e68:
    // 0x3c2e68: 0x146007e3  bnez        $v1, . + 4 + (0x7E3 << 2)
    ctx->pc = 0x3C2E68u;
    {
        const bool branch_taken_0x3c2e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2e68) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C2E70u;
    // 0x3c2e70: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c2e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c2e74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c2e78: 0x100007df  b           . + 4 + (0x7DF << 2)
    ctx->pc = 0x3C2E78u;
    {
        const bool branch_taken_0x3c2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E78u;
        // 0x3c2e7c: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2e78) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C2E80u;
label_3c2e80:
    // 0x3c2e80: 0xa6800690  sh          $zero, 0x690($s4)
    ctx->pc = 0x3c2e80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1680), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c2e84: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c2e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2e88: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c2e8c: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c2e90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c2e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c2e98: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c2e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c2e9c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3c2e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c2ea0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x3C2EA0u;
    {
        const bool branch_taken_0x3c2ea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2EA0u;
        // 0x3c2ea4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2ea0) {
            ctx->pc = 0x3C2F68u;
            goto label_3c2f68;
        }
    }
    ctx->pc = 0x3C2EA8u;
    // 0x3c2ea8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3c2ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2eac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c2eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2eb0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c2eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2eb4: 0x0  nop
    ctx->pc = 0x3c2eb4u;
    // NOP
label_3c2eb8:
    // 0x3c2eb8: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c2eb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c2ebc: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c2ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c2ec0: 0xc0aa47c  jal         func_2A91F0
    ctx->pc = 0x3C2EC0u;
    SET_GPR_U32(ctx, 31, 0x3C2EC8u);
    ctx->pc = 0x3C2EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2EC0u;
    // 0x3c2ec4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A91F0u, 0x3C2EC0u, 0x3C2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2EC8u;
label_3c2ec8:
    // 0x3c2ec8: 0xae420660  sw          $v0, 0x660($s2)
    ctx->pc = 0x3c2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1632), GPR_U32(ctx, 2));
    // 0x3c2ecc: 0xae400670  sw          $zero, 0x670($s2)
    ctx->pc = 0x3c2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 0));
    // 0x3c2ed0: 0x8e420660  lw          $v0, 0x660($s2)
    ctx->pc = 0x3c2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x3c2ed4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C2ED4u;
    {
        const bool branch_taken_0x3c2ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2ED4u;
        // 0x3c2ed8: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2ed4) {
            ctx->pc = 0x3C2F38u;
            goto label_3c2f38;
        }
    }
    ctx->pc = 0x3C2EDCu;
    // 0x3c2edc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c2ee0: 0xc420e200  lwc1        $f0, -0x1E00($at)
    ctx->pc = 0x3c2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294959616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2ee4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c2ee8: 0xe6400670  swc1        $f0, 0x670($s2)
    ctx->pc = 0x3c2ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1648), bits); }
    // 0x3c2eec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c2eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c2ef0: 0xc422e210  lwc1        $f2, -0x1DF0($at)
    ctx->pc = 0x3c2ef0u;
    { uint32_t bits = FAST_READ32(0x65E210u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c2ef4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c2ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c2ef8: 0xc421e204  lwc1        $f1, -0x1DFC($at)
    ctx->pc = 0x3c2ef8u;
    { uint32_t bits = FAST_READ32(0x65E204u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2efc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c2efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c2f00: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c2f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c2f04: 0xc420e200  lwc1        $f0, -0x1E00($at)
    ctx->pc = 0x3c2f04u;
    { uint32_t bits = FAST_READ32(0x65E200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2f08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c2f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c2f0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c2f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c2f10: 0xe6400680  swc1        $f0, 0x680($s2)
    ctx->pc = 0x3c2f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1664), bits); }
    // 0x3c2f14: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c2f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2f18: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c2f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c2f20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c2f24: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x3c2f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3c2f28: 0xa602069e  sh          $v0, 0x69E($s0)
    ctx->pc = 0x3c2f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1694), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c2f2c: 0x86820690  lh          $v0, 0x690($s4)
    ctx->pc = 0x3c2f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c2f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c2f34: 0xa6820690  sh          $v0, 0x690($s4)
    ctx->pc = 0x3c2f34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1680), (uint16_t)GPR_U32(ctx, 2));
label_3c2f38:
    // 0x3c2f38: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c2f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c2f3c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c2f40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c2f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3c2f44: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c2f48: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3c2f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3c2f4c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3c2f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3c2f50: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c2f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c2f58: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c2f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c2f5c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3c2f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c2f60: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3C2F60u;
    {
        const bool branch_taken_0x3c2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F60u;
        // 0x3c2f64: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2f60) {
            ctx->pc = 0x3C2EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2eb8;
        }
    }
    ctx->pc = 0x3C2F68u;
label_3c2f68:
    // 0x3c2f68: 0x86820690  lh          $v0, 0x690($s4)
    ctx->pc = 0x3c2f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c2f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2f70: 0xa282053a  sb          $v0, 0x53A($s4)
    ctx->pc = 0x3c2f70u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1338), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2f74: 0x86820526  lh          $v0, 0x526($s4)
    ctx->pc = 0x3c2f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1318)));
    // 0x3c2f78: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c2f78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c2f7c: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c2f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c2f80: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c2f80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2f84: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c2f84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c2f88: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c2f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c2f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c2f90: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C2F90u;
    SET_GPR_U32(ctx, 31, 0x3C2F98u);
    ctx->pc = 0x3C2F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F90u;
    // 0x3c2f94: 0xa2820521  sb          $v0, 0x521($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C2F90u, 0x3C2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F98u;
label_3c2f98:
    // 0x3c2f98: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3c2f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c2f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2fa0: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x3c2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x3c2fa4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3c2fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c2fa8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3c2fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3c2fac: 0xc052214  jal         func_148850
    ctx->pc = 0x3C2FACu;
    SET_GPR_U32(ctx, 31, 0x3C2FB4u);
    ctx->pc = 0x3C2FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2FACu;
    // 0x3c2fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x3C2FACu, 0x3C2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2FB4u;
label_3c2fb4:
    // 0x3c2fb4: 0x0  nop
    ctx->pc = 0x3c2fb4u;
    // NOP
label_3c2fb8:
    // 0x3c2fb8: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c2fb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c2fbc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3c2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c2fc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c2fc4: 0xa6830692  sh          $v1, 0x692($s4)
    ctx->pc = 0x3c2fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1682), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c2fc8: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c2fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c2fcc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3c2fccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c2fd0: 0x0  nop
    ctx->pc = 0x3c2fd0u;
    // NOP
    // 0x3c2fd4: 0x0  nop
    ctx->pc = 0x3c2fd4u;
    // NOP
    // 0x3c2fd8: 0x1010  mfhi        $v0
    ctx->pc = 0x3c2fd8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c2fdc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C2FDCu;
    {
        const bool branch_taken_0x3c2fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2fdc) {
            ctx->pc = 0x3C3018u;
            goto label_3c3018;
        }
    }
    ctx->pc = 0x3C2FE4u;
    // 0x3c2fe4: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c2fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c2fe8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c2fec: 0x3c022b00  lui         $v0, 0x2B00
    ctx->pc = 0x3c2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11008 << 16));
    // 0x3c2ff0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c2ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ff8: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c2ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c2ffc: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c2ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c3000: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c3000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c3004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3008: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c3008u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c300c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c300cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3010: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C3010u;
    SET_GPR_U32(ctx, 31, 0x3C3018u);
    ctx->pc = 0x3C3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3010u;
    // 0x3c3014: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C3010u, 0x3C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3018u;
label_3c3018:
    // 0x3c3018: 0x86860510  lh          $a2, 0x510($s4)
    ctx->pc = 0x3c3018u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c301c: 0x86830512  lh          $v1, 0x512($s4)
    ctx->pc = 0x3c301cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c3020: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c3020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c3024: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c3024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c3028: 0x27a408c0  addiu       $a0, $sp, 0x8C0
    ctx->pc = 0x3c3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
    // 0x3c302c: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3c302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3030: 0x268500c0  addiu       $a1, $s4, 0xC0
    ctx->pc = 0x3c3030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x3c3034: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x3c3034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x3c3038: 0x3442aaa6  ori         $v0, $v0, 0xAAA6
    ctx->pc = 0x3c3038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43686);
    // 0x3c303c: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x3c303cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c3040: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c3040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c3044: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c3044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3c3048: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3c3048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3c304c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x3c304cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3c3050: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3c3050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3c3054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c3054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c3058: 0x0  nop
    ctx->pc = 0x3c3058u;
    // NOP
    // 0x3c305c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c305cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c3060: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c3060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c3064: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C3064u;
    SET_GPR_U32(ctx, 31, 0x3C306Cu);
    ctx->pc = 0x3C3068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3064u;
    // 0x3c3068: 0xe6800024  swc1        $f0, 0x24($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C3064u, 0x3C306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C306Cu;
label_3c306c:
    // 0x3c306c: 0x27a40980  addiu       $a0, $sp, 0x980
    ctx->pc = 0x3c306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
    // 0x3c3070: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C3070u;
    SET_GPR_U32(ctx, 31, 0x3C3078u);
    ctx->pc = 0x3C3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3070u;
    // 0x3c3074: 0x27a508c0  addiu       $a1, $sp, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C3070u, 0x3C3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3078u;
label_3c3078:
    // 0x3c3078: 0x27a409b0  addiu       $a0, $sp, 0x9B0
    ctx->pc = 0x3c3078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
    // 0x3c307c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C307Cu;
    SET_GPR_U32(ctx, 31, 0x3C3084u);
    ctx->pc = 0x3C3080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C307Cu;
    // 0x3c3080: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C307Cu, 0x3C3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3084u;
label_3c3084:
    // 0x3c3084: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c3084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c3088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c308c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C308Cu;
    SET_GPR_U32(ctx, 31, 0x3C3094u);
    ctx->pc = 0x3C3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C308Cu;
    // 0x3c3090: 0x27a50980  addiu       $a1, $sp, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C308Cu, 0x3C3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3094u;
label_3c3094:
    // 0x3c3094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3094u;
    {
        const bool branch_taken_0x3c3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3094u;
        // 0x3c3098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3094) {
            ctx->pc = 0x3C30A8u;
            goto label_3c30a8;
        }
    }
    ctx->pc = 0x3C309Cu;
    // 0x3c309c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C309Cu;
    SET_GPR_U32(ctx, 31, 0x3C30A4u);
    ctx->pc = 0x3C30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C309Cu;
    // 0x3c30a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C309Cu, 0x3C30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30A4u;
label_3c30a4:
    // 0x3c30a4: 0x0  nop
    ctx->pc = 0x3c30a4u;
    // NOP
label_3c30a8:
    // 0x3c30a8: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c30a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c30ac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c30acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c30b0: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c30b4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c30b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c30b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c30bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c30bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c30c0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c30c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c30c4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C30C4u;
    {
        const bool branch_taken_0x3c30c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30C4u;
        // 0x3c30c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c30c4) {
            ctx->pc = 0x3C31A0u;
            goto label_3c31a0;
        }
    }
    ctx->pc = 0x3C30CCu;
    // 0x3c30cc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3c30ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c30d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30d4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c30d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30d8: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3c30d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c30dc: 0x0  nop
    ctx->pc = 0x3c30dcu;
    // NOP
label_3c30e0:
    // 0x3c30e0: 0x86450696  lh          $a1, 0x696($s2)
    ctx->pc = 0x3c30e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1686)));
    // 0x3c30e4: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C30E4u;
    SET_GPR_U32(ctx, 31, 0x3C30ECu);
    ctx->pc = 0x3C30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30E4u;
    // 0x3c30e8: 0x27a40940  addiu       $a0, $sp, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C30E4u, 0x3C30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30ECu;
label_3c30ec:
    // 0x3c30ec: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c30ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c30f0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c30f4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c30f8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c30fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3100: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c3100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c3104: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c3104u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c3108: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C3108u;
    SET_GPR_U32(ctx, 31, 0x3C3110u);
    ctx->pc = 0x3C310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3108u;
    // 0x3c310c: 0x27a40900  addiu       $a0, $sp, 0x900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C3108u, 0x3C3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3110u;
label_3c3110:
    // 0x3c3110: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c3110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c3114: 0x27a50900  addiu       $a1, $sp, 0x900
    ctx->pc = 0x3c3114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x3c3118: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3118u;
    SET_GPR_U32(ctx, 31, 0x3C3120u);
    ctx->pc = 0x3C311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3118u;
    // 0x3c311c: 0x27a60940  addiu       $a2, $sp, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3118u, 0x3C3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3120u;
label_3c3120:
    // 0x3c3120: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c3120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c3124: 0x27a608c0  addiu       $a2, $sp, 0x8C0
    ctx->pc = 0x3c3124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
    // 0x3c3128: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3128u;
    SET_GPR_U32(ctx, 31, 0x3C3130u);
    ctx->pc = 0x3C312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3128u;
    // 0x3c312c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3128u, 0x3C3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3130u;
label_3c3130:
    // 0x3c3130: 0x26040590  addiu       $a0, $s0, 0x590
    ctx->pc = 0x3c3130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x3c3134: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C3134u;
    SET_GPR_U32(ctx, 31, 0x3C313Cu);
    ctx->pc = 0x3C3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3134u;
    // 0x3c3138: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C3134u, 0x3C313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C313Cu;
label_3c313c:
    // 0x3c313c: 0x8ea60660  lw          $a2, 0x660($s5)
    ctx->pc = 0x3c313cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1632)));
    // 0x3c3140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3144: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C3144u;
    SET_GPR_U32(ctx, 31, 0x3C314Cu);
    ctx->pc = 0x3C3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3144u;
    // 0x3c3148: 0x26050560  addiu       $a1, $s0, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C3144u, 0x3C314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C314Cu;
label_3c314c:
    // 0x3c314c: 0x86450696  lh          $a1, 0x696($s2)
    ctx->pc = 0x3c314cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1686)));
    // 0x3c3150: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c3150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c3154: 0x8644069e  lh          $a0, 0x69E($s2)
    ctx->pc = 0x3c3154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1694)));
    // 0x3c3158: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c315c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c315cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3c3160: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3c3160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3c3164: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x3c3164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3c3168: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3c3168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3c316c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3c316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c3170: 0xa6440696  sh          $a0, 0x696($s2)
    ctx->pc = 0x3c3170u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3174: 0x86440696  lh          $a0, 0x696($s2)
    ctx->pc = 0x3c3174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1686)));
    // 0x3c3178: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3c3178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3c317c: 0xa6440696  sh          $a0, 0x696($s2)
    ctx->pc = 0x3c317cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3180: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c3180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3184: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c3184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c3188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c318c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c318cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3190: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3c3190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3194: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C3194u;
    {
        const bool branch_taken_0x3c3194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3194u;
        // 0x3c3198: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3194) {
            ctx->pc = 0x3C30E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c30e0;
        }
    }
    ctx->pc = 0x3C319Cu;
    // 0x3c319c: 0x0  nop
    ctx->pc = 0x3c319cu;
    // NOP
label_3c31a0:
    // 0x3c31a0: 0x9283053a  lbu         $v1, 0x53A($s4)
    ctx->pc = 0x3c31a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
    // 0x3c31a4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3c31a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c31a8: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
    ctx->pc = 0x3C31A8u;
    {
        const bool branch_taken_0x3c31a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c31a8) {
            ctx->pc = 0x3C3380u;
            goto label_3c3380;
        }
    }
    ctx->pc = 0x3C31B0u;
    // 0x3c31b0: 0x86830690  lh          $v1, 0x690($s4)
    ctx->pc = 0x3c31b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c31b4: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x3c31b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c31b8: 0x6e0006f  bltz        $s7, . + 4 + (0x6F << 2)
    ctx->pc = 0x3C31B8u;
    {
        const bool branch_taken_0x3c31b8 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x3C31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31B8u;
        // 0x3c31bc: 0x17b080  sll         $s6, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31b8) {
            ctx->pc = 0x3C3378u;
            goto label_3c3378;
        }
    }
    ctx->pc = 0x3C31C0u;
    // 0x3c31c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c31c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c31c4: 0x2961021  addu        $v0, $s4, $s6
    ctx->pc = 0x3c31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x3c31c8: 0x27938060  addiu       $s3, $gp, -0x7FA0
    ctx->pc = 0x3c31c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3c31cc: 0x245e0680  addiu       $fp, $v0, 0x680
    ctx->pc = 0x3c31ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x3c31d0: 0x24420670  addiu       $v0, $v0, 0x670
    ctx->pc = 0x3c31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x3c31d4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3c31d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3c31d8:
    // 0x3c31d8: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x3c31d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3c31dc: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x3c31dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c31e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3c31e4: 0x24a5e200  addiu       $a1, $a1, -0x1E00
    ctx->pc = 0x3c31e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959616));
    // 0x3c31e8: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x3c31e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c31ec: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3c31ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c31f0: 0xc0976f0  jal         func_25DBC0
    ctx->pc = 0x3C31F0u;
    SET_GPR_U32(ctx, 31, 0x3C31F8u);
    ctx->pc = 0x3C31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C31F0u;
    // 0x3c31f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x3C31F0u, 0x3C31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C31F8u;
label_3c31f8:
    // 0x3c31f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C31F8u;
    {
        const bool branch_taken_0x3c31f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31F8u;
        // 0x3c31fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c31f8) {
            ctx->pc = 0x3C3248u;
            goto label_3c3248;
        }
    }
    ctx->pc = 0x3C3200u;
    // 0x3c3200: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3C3200u;
    SET_GPR_U32(ctx, 31, 0x3C3208u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3C3200u, 0x3C3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3208u;
label_3c3208:
    // 0x3c3208: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c3208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c320c: 0xc0f1390  jal         func_3C4E40
    ctx->pc = 0x3C320Cu;
    SET_GPR_U32(ctx, 31, 0x3C3214u);
    ctx->pc = 0x3C3210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C320Cu;
    // 0x3c3210: 0x26a42900  addiu       $a0, $s5, 0x2900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4E40u, 0x3C320Cu, 0x3C3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3214u;
label_3c3214:
    // 0x3c3214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c3214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3218: 0xc0f138c  jal         func_3C4E30
    ctx->pc = 0x3C3218u;
    SET_GPR_U32(ctx, 31, 0x3C3220u);
    ctx->pc = 0x3C321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3218u;
    // 0x3c321c: 0x26a42900  addiu       $a0, $s5, 0x2900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 10496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4E30u, 0x3C3218u, 0x3C3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3220u;
label_3c3220:
    // 0x3c3220: 0x92a508e8  lbu         $a1, 0x8E8($s5)
    ctx->pc = 0x3c3220u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2280)));
    // 0x3c3224: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3c3224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3228: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3c3228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3c322c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c3230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c3234: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3c3234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3238: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3c3238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c323c: 0xc0aa48c  jal         func_2A9230
    ctx->pc = 0x3C323Cu;
    SET_GPR_U32(ctx, 31, 0x3C3244u);
    ctx->pc = 0x3C3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C323Cu;
    // 0x3c3240: 0x26890020  addiu       $t1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9230u, 0x3C323Cu, 0x3C3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3244u;
label_3c3244:
    // 0x3c3244: 0x0  nop
    ctx->pc = 0x3c3244u;
    // NOP
label_3c3248:
    // 0x3c3248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c3248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c324c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3c324cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c3250: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3C3250u;
    {
        const bool branch_taken_0x3c3250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3250u;
        // 0x3c3254: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3250) {
            ctx->pc = 0x3C31D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c31d8;
        }
    }
    ctx->pc = 0x3C3258u;
    // 0x3c3258: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x3c3258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3c325c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x3c325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x3c3260: 0xc4620670  lwc1        $f2, 0x670($v1)
    ctx->pc = 0x3c3260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c3264: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c3264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c3268: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c3268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c326c: 0x8c650660  lw          $a1, 0x660($v1)
    ctx->pc = 0x3c326cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
    // 0x3c3270: 0xc421e200  lwc1        $f1, -0x1E00($at)
    ctx->pc = 0x3c3270u;
    { uint32_t bits = FAST_READ32(0x65E200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c3274: 0x24700670  addiu       $s0, $v1, 0x670
    ctx->pc = 0x3c3274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1648));
    // 0x3c3278: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x3c3278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x3c327c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c327cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3280: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c3280u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c3284: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c3284u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c3288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c3288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c328c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c328cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c3290: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3c3290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c3294: 0xc0c08e4  jal         func_302390
    ctx->pc = 0x3C3294u;
    SET_GPR_U32(ctx, 31, 0x3C329Cu);
    ctx->pc = 0x3C3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3294u;
    // 0x3c3298: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302390u, 0x3C3294u, 0x3C329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C329Cu;
label_3c329c:
    // 0x3c329c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3c329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c32a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c32a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c32a4: 0x0  nop
    ctx->pc = 0x3c32a4u;
    // NOP
    // 0x3c32a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c32a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c32ac: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x3C32ACu;
    {
        const bool branch_taken_0x3c32ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c32ac) {
            ctx->pc = 0x3C3378u;
            goto label_3c3378;
        }
    }
    ctx->pc = 0x3C32B4u;
    // 0x3c32b4: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x3c32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3c32b8: 0x8c440660  lw          $a0, 0x660($v0)
    ctx->pc = 0x3c32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1632)));
    // 0x3c32bc: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3C32BCu;
    SET_GPR_U32(ctx, 31, 0x3C32C4u);
    ctx->pc = 0x3C32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C32BCu;
    // 0x3c32c0: 0x24500660  addiu       $s0, $v0, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3C32BCu, 0x3C32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C32C4u;
label_3c32c4:
    // 0x3c32c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3c32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3c32c8: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x3c32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x3c32cc: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c32ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c32d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3c32d4: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c32d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c32d8: 0xc0aa4b0  jal         func_2A92C0
    ctx->pc = 0x3C32D8u;
    SET_GPR_U32(ctx, 31, 0x3C32E0u);
    ctx->pc = 0x3C32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C32D8u;
    // 0x3c32dc: 0x24460560  addiu       $a2, $v0, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A92C0u, 0x3C32D8u, 0x3C32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C32E0u;
label_3c32e0:
    // 0x3c32e0: 0x86830690  lh          $v1, 0x690($s4)
    ctx->pc = 0x3c32e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c32e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c32e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C32E8u;
    {
        const bool branch_taken_0x3c32e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c32e8) {
            ctx->pc = 0x3C3330u;
            goto label_3c3330;
        }
    }
    ctx->pc = 0x3C32F0u;
    // 0x3c32f0: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c32f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c32f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c32f8: 0x3c022d00  lui         $v0, 0x2D00
    ctx->pc = 0x3c32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11520 << 16));
    // 0x3c32fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c32fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c3300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c3300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3304: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c3304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c3308: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c3308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c330c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c330cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3310: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c3310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3314: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c3314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3318: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c3318u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c331c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C331Cu;
    SET_GPR_U32(ctx, 31, 0x3C3324u);
    ctx->pc = 0x3C3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C331Cu;
    // 0x3c3320: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C331Cu, 0x3C3324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3324u;
label_3c3324:
    // 0x3c3324: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C3324u;
    {
        const bool branch_taken_0x3c3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3324) {
            ctx->pc = 0x3C3368u;
            goto label_3c3368;
        }
    }
    ctx->pc = 0x3C332Cu;
    // 0x3c332c: 0x0  nop
    ctx->pc = 0x3c332cu;
    // NOP
label_3c3330:
    // 0x3c3330: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c3330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c3334: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c3334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c3338: 0x3c022c00  lui         $v0, 0x2C00
    ctx->pc = 0x3c3338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11264 << 16));
    // 0x3c333c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c3340: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c3340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c3344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c3344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3348: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c3348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c334c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c334cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c3350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3354: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c3354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3358: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c3358u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c335c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C335Cu;
    SET_GPR_U32(ctx, 31, 0x3C3364u);
    ctx->pc = 0x3C3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C335Cu;
    // 0x3c3360: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C335Cu, 0x3C3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3364u;
label_3c3364:
    // 0x3c3364: 0x0  nop
    ctx->pc = 0x3c3364u;
    // NOP
label_3c3368:
    // 0x3c3368: 0x86830690  lh          $v1, 0x690($s4)
    ctx->pc = 0x3c3368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c336c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c3370: 0xa6830690  sh          $v1, 0x690($s4)
    ctx->pc = 0x3c3370u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1680), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3374: 0x0  nop
    ctx->pc = 0x3c3374u;
    // NOP
label_3c3378:
    // 0x3c3378: 0x86830690  lh          $v1, 0x690($s4)
    ctx->pc = 0x3c3378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c337c: 0xa283053a  sb          $v1, 0x53A($s4)
    ctx->pc = 0x3c337cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1338), (uint8_t)GPR_U32(ctx, 3));
label_3c3380:
    // 0x3c3380: 0x92830694  lbu         $v1, 0x694($s4)
    ctx->pc = 0x3c3380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x3c3384: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C3384u;
    {
        const bool branch_taken_0x3c3384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3384) {
            ctx->pc = 0x3C33D0u;
            goto label_3c33d0;
        }
    }
    ctx->pc = 0x3C338Cu;
    // 0x3c338c: 0x86830690  lh          $v1, 0x690($s4)
    ctx->pc = 0x3c338cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x3c3390: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3C3390u;
    {
        const bool branch_taken_0x3c3390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3390) {
            ctx->pc = 0x3C33D0u;
            goto label_3c33d0;
        }
    }
    ctx->pc = 0x3C3398u;
    // 0x3c3398: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3C3398u;
    SET_GPR_U32(ctx, 31, 0x3C33A0u);
    ctx->pc = 0x3C339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3398u;
    // 0x3c339c: 0x8e840550  lw          $a0, 0x550($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3C3398u, 0x3C33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33A0u;
label_3c33a0:
    // 0x3c33a0: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c33a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c33a4: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c33a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c33a8: 0xc0aa46c  jal         func_2A91B0
    ctx->pc = 0x3C33A8u;
    SET_GPR_U32(ctx, 31, 0x3C33B0u);
    ctx->pc = 0x3C33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33A8u;
    // 0x3c33ac: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A91B0u, 0x3C33A8u, 0x3C33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33B0u;
label_3c33b0:
    // 0x3c33b0: 0xae820550  sw          $v0, 0x550($s4)
    ctx->pc = 0x3c33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 2));
    // 0x3c33b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c33b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c33bc: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C33BCu;
    SET_GPR_U32(ctx, 31, 0x3C33C4u);
    ctx->pc = 0x3C33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33BCu;
    // 0x3c33c0: 0xa2820694  sb          $v0, 0x694($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1684), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C33BCu, 0x3C33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33C4u;
label_3c33c4:
    // 0x3c33c4: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C33C4u;
    SET_GPR_U32(ctx, 31, 0x3C33CCu);
    ctx->pc = 0x3C33C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33C4u;
    // 0x3c33c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C33C4u, 0x3C33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33CCu;
label_3c33cc:
    // 0x3c33cc: 0x0  nop
    ctx->pc = 0x3c33ccu;
    // NOP
label_3c33d0:
    // 0x3c33d0: 0x9284053a  lbu         $a0, 0x53A($s4)
    ctx->pc = 0x3c33d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
    // 0x3c33d4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x3c33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3c33d8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3C33D8u;
    {
        const bool branch_taken_0x3c33d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33D8u;
        // 0x3c33dc: 0x2403007e  addiu       $v1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33d8) {
            ctx->pc = 0x3C3410u;
            goto label_3c3410;
        }
    }
    ctx->pc = 0x3C33E0u;
    // 0x3c33e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C33E0u;
    {
        const bool branch_taken_0x3c33e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c33e0) {
            ctx->pc = 0x3C33F0u;
            goto label_3c33f0;
        }
    }
    ctx->pc = 0x3C33E8u;
    // 0x3c33e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C33E8u;
    {
        const bool branch_taken_0x3c33e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c33e8) {
            ctx->pc = 0x3C3438u;
            goto label_3c3438;
        }
    }
    ctx->pc = 0x3C33F0u;
label_3c33f0:
    // 0x3c33f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3c33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3c33f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c33f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3c33f8: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c33f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c33fc: 0xc052260  jal         func_148980
    ctx->pc = 0x3C33FCu;
    SET_GPR_U32(ctx, 31, 0x3C3404u);
    ctx->pc = 0x3C3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33FCu;
    // 0x3c3400: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x3C33FCu, 0x3C3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3404u;
label_3c3404:
    // 0x3c3404: 0x1000067c  b           . + 4 + (0x67C << 2)
    ctx->pc = 0x3C3404u;
    {
        const bool branch_taken_0x3c3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3404) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C340Cu;
    // 0x3c340c: 0x0  nop
    ctx->pc = 0x3c340cu;
    // NOP
label_3c3410:
    // 0x3c3410: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c3414: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c3414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3c3418: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c3418u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c341c: 0xc052260  jal         func_148980
    ctx->pc = 0x3C341Cu;
    SET_GPR_U32(ctx, 31, 0x3C3424u);
    ctx->pc = 0x3C3420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C341Cu;
    // 0x3c3420: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x3C341Cu, 0x3C3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3424u;
label_3c3424:
    // 0x3c3424: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C3424u;
    SET_GPR_U32(ctx, 31, 0x3C342Cu);
    ctx->pc = 0x3C3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3424u;
    // 0x3c3428: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C3424u, 0x3C342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C342Cu;
label_3c342c:
    // 0x3c342c: 0x10000672  b           . + 4 + (0x672 << 2)
    ctx->pc = 0x3C342Cu;
    {
        const bool branch_taken_0x3c342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c342c) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3434u;
    // 0x3c3434: 0x0  nop
    ctx->pc = 0x3c3434u;
    // NOP
label_3c3438:
    // 0x3c3438: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c3438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c343c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C343Cu;
    {
        const bool branch_taken_0x3c343c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C343Cu;
        // 0x3c3440: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c343c) {
            ctx->pc = 0x3C3450u;
            goto label_3c3450;
        }
    }
    ctx->pc = 0x3C3444u;
    // 0x3c3444: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C3444u;
    {
        const bool branch_taken_0x3c3444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3444) {
            ctx->pc = 0x3C34D0u;
            goto label_3c34d0;
        }
    }
    ctx->pc = 0x3C344Cu;
    // 0x3c344c: 0x0  nop
    ctx->pc = 0x3c344cu;
    // NOP
label_3c3450:
    // 0x3c3450: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c3450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3454: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c3454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c3458: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c3458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c345c: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c345cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3460: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c3460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c3464: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3464u;
    {
        const bool branch_taken_0x3c3464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c3464) {
            ctx->pc = 0x3C34A0u;
            goto label_3c34a0;
        }
    }
    ctx->pc = 0x3C346Cu;
    // 0x3c346c: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c346cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3470: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c3470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c3474: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C3474u;
    {
        const bool branch_taken_0x3c3474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3474u;
        // 0x3c3478: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3474) {
            ctx->pc = 0x3C34C8u;
            goto label_3c34c8;
        }
    }
    ctx->pc = 0x3C347Cu;
    // 0x3c347c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3480: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c3480u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c3484: 0x0  nop
    ctx->pc = 0x3c3484u;
    // NOP
    // 0x3c3488: 0x0  nop
    ctx->pc = 0x3c3488u;
    // NOP
    // 0x3c348c: 0x2010  mfhi        $a0
    ctx->pc = 0x3c348cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c3490: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3490u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3494: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C3494u;
    {
        const bool branch_taken_0x3c3494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3494u;
        // 0x3c3498: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3494) {
            ctx->pc = 0x3C34C8u;
            goto label_3c34c8;
        }
    }
    ctx->pc = 0x3C349Cu;
    // 0x3c349c: 0x0  nop
    ctx->pc = 0x3c349cu;
    // NOP
label_3c34a0:
    // 0x3c34a0: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c34a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c34a4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c34a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c34a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C34A8u;
    {
        const bool branch_taken_0x3c34a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c34a8) {
            ctx->pc = 0x3C34C8u;
            goto label_3c34c8;
        }
    }
    ctx->pc = 0x3C34B0u;
    // 0x3c34b0: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c34b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c34b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c34b8: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c34b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c34bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C34BCu;
    {
        const bool branch_taken_0x3c34bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34BCu;
        // 0x3c34c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34bc) {
            ctx->pc = 0x3C34D0u;
            goto label_3c34d0;
        }
    }
    ctx->pc = 0x3C34C4u;
    // 0x3c34c4: 0x0  nop
    ctx->pc = 0x3c34c4u;
    // NOP
label_3c34c8:
    // 0x3c34c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c34cc: 0x0  nop
    ctx->pc = 0x3c34ccu;
    // NOP
label_3c34d0:
    // 0x3c34d0: 0x14600649  bnez        $v1, . + 4 + (0x649 << 2)
    ctx->pc = 0x3C34D0u;
    {
        const bool branch_taken_0x3c34d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34D0u;
        // 0x3c34d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34d0) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C34D8u;
    // 0x3c34d8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C34D8u;
    SET_GPR_U32(ctx, 31, 0x3C34E0u);
    ctx->pc = 0x3C34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34D8u;
    // 0x3c34dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C34D8u, 0x3C34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34E0u;
label_3c34e0:
    // 0x3c34e0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3c34e4: 0xc052260  jal         func_148980
    ctx->pc = 0x3C34E4u;
    SET_GPR_U32(ctx, 31, 0x3C34ECu);
    ctx->pc = 0x3C34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34E4u;
    // 0x3c34e8: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x3C34E4u, 0x3C34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34ECu;
label_3c34ec:
    // 0x3c34ec: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C34ECu;
    SET_GPR_U32(ctx, 31, 0x3C34F4u);
    ctx->pc = 0x3C34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34ECu;
    // 0x3c34f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C34ECu, 0x3C34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34F4u;
label_3c34f4:
    // 0x3c34f4: 0x10000640  b           . + 4 + (0x640 << 2)
    ctx->pc = 0x3C34F4u;
    {
        const bool branch_taken_0x3c34f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c34f4) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C34FCu;
    // 0x3c34fc: 0x0  nop
    ctx->pc = 0x3c34fcu;
    // NOP
label_3c3500:
    // 0x3c3500: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3C3500u;
    SET_GPR_U32(ctx, 31, 0x3C3508u);
    ctx->pc = 0x3C3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3500u;
    // 0x3c3504: 0x8e840550  lw          $a0, 0x550($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3C3500u, 0x3C3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3508u;
label_3c3508:
    // 0x3c3508: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c3508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c350c: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c350cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c3510: 0xc0aa45c  jal         func_2A9170
    ctx->pc = 0x3C3510u;
    SET_GPR_U32(ctx, 31, 0x3C3518u);
    ctx->pc = 0x3C3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3510u;
    // 0x3c3514: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9170u, 0x3C3510u, 0x3C3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3518u;
label_3c3518:
    // 0x3c3518: 0xae820550  sw          $v0, 0x550($s4)
    ctx->pc = 0x3c3518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 2));
    // 0x3c351c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c351cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c3520: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c3520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c3524: 0x3c022f00  lui         $v0, 0x2F00
    ctx->pc = 0x3c3524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12032 << 16));
    // 0x3c3528: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c3528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c352c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c352cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c3530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c3530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3534: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c3534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c3538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c3538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c353c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c353cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3540: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c3540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3544: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c3544u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3548: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C3548u;
    SET_GPR_U32(ctx, 31, 0x3C3550u);
    ctx->pc = 0x3C354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3548u;
    // 0x3c354c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C3548u, 0x3C3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3550u;
label_3c3550:
    // 0x3c3550: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x3c3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3c3554: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c3554u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c3558: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c3558u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c355c: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c355cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3560: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c3560u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3564: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c3564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c3568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c356c: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c356cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c3570:
    // 0x3c3570: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c3570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c3574: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3c3574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c3578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c3578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c357c: 0xa6830692  sh          $v1, 0x692($s4)
    ctx->pc = 0x3c357cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1682), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3580: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c3580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c3584: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3c3584u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c3588: 0x0  nop
    ctx->pc = 0x3c3588u;
    // NOP
    // 0x3c358c: 0x0  nop
    ctx->pc = 0x3c358cu;
    // NOP
    // 0x3c3590: 0x1010  mfhi        $v0
    ctx->pc = 0x3c3590u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c3594: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3594u;
    {
        const bool branch_taken_0x3c3594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3594) {
            ctx->pc = 0x3C35D0u;
            goto label_3c35d0;
        }
    }
    ctx->pc = 0x3C359Cu;
    // 0x3c359c: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c359cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c35a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c35a4: 0x3c022b00  lui         $v0, 0x2B00
    ctx->pc = 0x3c35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11008 << 16));
    // 0x3c35a8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c35ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c35acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35b0: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c35b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c35b4: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c35b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c35b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c35b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c35bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c35c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c35c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35c8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C35C8u;
    SET_GPR_U32(ctx, 31, 0x3C35D0u);
    ctx->pc = 0x3C35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35C8u;
    // 0x3c35cc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C35C8u, 0x3C35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C35D0u;
label_3c35d0:
    // 0x3c35d0: 0x27a407c0  addiu       $a0, $sp, 0x7C0
    ctx->pc = 0x3c35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    // 0x3c35d4: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C35D4u;
    SET_GPR_U32(ctx, 31, 0x3C35DCu);
    ctx->pc = 0x3C35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35D4u;
    // 0x3c35d8: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C35D4u, 0x3C35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C35DCu;
label_3c35dc:
    // 0x3c35dc: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x3c35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
    // 0x3c35e0: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C35E0u;
    SET_GPR_U32(ctx, 31, 0x3C35E8u);
    ctx->pc = 0x3C35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35E0u;
    // 0x3c35e4: 0x27a507c0  addiu       $a1, $sp, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C35E0u, 0x3C35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C35E8u;
label_3c35e8:
    // 0x3c35e8: 0x27a408b0  addiu       $a0, $sp, 0x8B0
    ctx->pc = 0x3c35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x3c35ec: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C35ECu;
    SET_GPR_U32(ctx, 31, 0x3C35F4u);
    ctx->pc = 0x3C35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35ECu;
    // 0x3c35f0: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C35ECu, 0x3C35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C35F4u;
label_3c35f4:
    // 0x3c35f4: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c35f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c35f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c35f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35fc: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C35FCu;
    SET_GPR_U32(ctx, 31, 0x3C3604u);
    ctx->pc = 0x3C3600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35FCu;
    // 0x3c3600: 0x27a50880  addiu       $a1, $sp, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C35FCu, 0x3C3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3604u;
label_3c3604:
    // 0x3c3604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3604u;
    {
        const bool branch_taken_0x3c3604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3604u;
        // 0x3c3608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3604) {
            ctx->pc = 0x3C3618u;
            goto label_3c3618;
        }
    }
    ctx->pc = 0x3C360Cu;
    // 0x3c360c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C360Cu;
    SET_GPR_U32(ctx, 31, 0x3C3614u);
    ctx->pc = 0x3C3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C360Cu;
    // 0x3c3610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C360Cu, 0x3C3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3614u;
label_3c3614:
    // 0x3c3614: 0x0  nop
    ctx->pc = 0x3c3614u;
    // NOP
label_3c3618:
    // 0x3c3618: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c3618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c361c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c361cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c3620: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c3620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c3624: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c3624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c3628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c362c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c362cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3630: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c3630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3634: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C3634u;
    {
        const bool branch_taken_0x3c3634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3634u;
        // 0x3c3638: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3634) {
            ctx->pc = 0x3C3710u;
            goto label_3c3710;
        }
    }
    ctx->pc = 0x3C363Cu;
    // 0x3c363c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c363cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3644: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c3644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3648: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c3648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c364c: 0x0  nop
    ctx->pc = 0x3c364cu;
    // NOP
label_3c3650:
    // 0x3c3650: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c3650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3654: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C3654u;
    SET_GPR_U32(ctx, 31, 0x3C365Cu);
    ctx->pc = 0x3C3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3654u;
    // 0x3c3658: 0x27a40840  addiu       $a0, $sp, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C3654u, 0x3C365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C365Cu;
label_3c365c:
    // 0x3c365c: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c365cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3660: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c3660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c3664: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c3664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c3668: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c3668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c366c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3670: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c3674: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c3674u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c3678: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C3678u;
    SET_GPR_U32(ctx, 31, 0x3C3680u);
    ctx->pc = 0x3C367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3678u;
    // 0x3c367c: 0x27a40800  addiu       $a0, $sp, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C3678u, 0x3C3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3680u;
label_3c3680:
    // 0x3c3680: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3684: 0x27a50800  addiu       $a1, $sp, 0x800
    ctx->pc = 0x3c3684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x3c3688: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3688u;
    SET_GPR_U32(ctx, 31, 0x3C3690u);
    ctx->pc = 0x3C368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3688u;
    // 0x3c368c: 0x27a60840  addiu       $a2, $sp, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3688u, 0x3C3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3690u;
label_3c3690:
    // 0x3c3690: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3694: 0x27a607c0  addiu       $a2, $sp, 0x7C0
    ctx->pc = 0x3c3694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    // 0x3c3698: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3698u;
    SET_GPR_U32(ctx, 31, 0x3C36A0u);
    ctx->pc = 0x3C369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3698u;
    // 0x3c369c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3698u, 0x3C36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C36A0u;
label_3c36a0:
    // 0x3c36a0: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c36a4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C36A4u;
    SET_GPR_U32(ctx, 31, 0x3C36ACu);
    ctx->pc = 0x3C36A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C36A4u;
    // 0x3c36a8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C36A4u, 0x3C36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C36ACu;
label_3c36ac:
    // 0x3c36ac: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c36acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c36b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c36b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c36b4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C36B4u;
    SET_GPR_U32(ctx, 31, 0x3C36BCu);
    ctx->pc = 0x3C36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C36B4u;
    // 0x3c36b8: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C36B4u, 0x3C36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C36BCu;
label_3c36bc:
    // 0x3c36bc: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c36bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c36c0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c36c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c36c4: 0x8664069e  lh          $a0, 0x69E($s3)
    ctx->pc = 0x3c36c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c36c8: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c36cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c36ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c36d0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c36d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c36d4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c36d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c36d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c36d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c36dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3c36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c36e0: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c36e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c36e4: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c36e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c36e8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3c36e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3c36ec: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c36ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c36f0: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c36f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c36f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c36f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c36fc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c36fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3700: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c3700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3704: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C3704u;
    {
        const bool branch_taken_0x3c3704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3704u;
        // 0x3c3708: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3704) {
            ctx->pc = 0x3C3650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3650;
        }
    }
    ctx->pc = 0x3C370Cu;
    // 0x3c370c: 0x0  nop
    ctx->pc = 0x3c370cu;
    // NOP
label_3c3710:
    // 0x3c3710: 0x9284053a  lbu         $a0, 0x53A($s4)
    ctx->pc = 0x3c3710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
    // 0x3c3714: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3c3718: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3718u;
    {
        const bool branch_taken_0x3c3718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c3718) {
            ctx->pc = 0x3C3730u;
            goto label_3c3730;
        }
    }
    ctx->pc = 0x3C3720u;
    // 0x3c3720: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c3720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c3724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c3728: 0x100005b3  b           . + 4 + (0x5B3 << 2)
    ctx->pc = 0x3C3728u;
    {
        const bool branch_taken_0x3c3728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3728u;
        // 0x3c372c: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3728) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3730u;
label_3c3730:
    // 0x3c3730: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c3730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c3734: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3734u;
    {
        const bool branch_taken_0x3c3734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3734u;
        // 0x3c3738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3734) {
            ctx->pc = 0x3C3748u;
            goto label_3c3748;
        }
    }
    ctx->pc = 0x3C373Cu;
    // 0x3c373c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C373Cu;
    {
        const bool branch_taken_0x3c373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c373c) {
            ctx->pc = 0x3C37C8u;
            goto label_3c37c8;
        }
    }
    ctx->pc = 0x3C3744u;
    // 0x3c3744: 0x0  nop
    ctx->pc = 0x3c3744u;
    // NOP
label_3c3748:
    // 0x3c3748: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c3748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c374c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c3750: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c3750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c3754: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3754u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3758: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c3758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c375c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C375Cu;
    {
        const bool branch_taken_0x3c375c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c375c) {
            ctx->pc = 0x3C3798u;
            goto label_3c3798;
        }
    }
    ctx->pc = 0x3C3764u;
    // 0x3c3764: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c3764u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3768: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c3768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c376c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C376Cu;
    {
        const bool branch_taken_0x3c376c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C376Cu;
        // 0x3c3770: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c376c) {
            ctx->pc = 0x3C37C0u;
            goto label_3c37c0;
        }
    }
    ctx->pc = 0x3C3774u;
    // 0x3c3774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3778: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c3778u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c377c: 0x0  nop
    ctx->pc = 0x3c377cu;
    // NOP
    // 0x3c3780: 0x0  nop
    ctx->pc = 0x3c3780u;
    // NOP
    // 0x3c3784: 0x2010  mfhi        $a0
    ctx->pc = 0x3c3784u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c3788: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3788u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c378c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C378Cu;
    {
        const bool branch_taken_0x3c378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C378Cu;
        // 0x3c3790: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c378c) {
            ctx->pc = 0x3C37C0u;
            goto label_3c37c0;
        }
    }
    ctx->pc = 0x3C3794u;
    // 0x3c3794: 0x0  nop
    ctx->pc = 0x3c3794u;
    // NOP
label_3c3798:
    // 0x3c3798: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c3798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c379c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c379cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c37a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C37A0u;
    {
        const bool branch_taken_0x3c37a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c37a0) {
            ctx->pc = 0x3C37C0u;
            goto label_3c37c0;
        }
    }
    ctx->pc = 0x3C37A8u;
    // 0x3c37a8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c37a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c37ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c37acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c37b0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c37b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c37b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C37B4u;
    {
        const bool branch_taken_0x3c37b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37B4u;
        // 0x3c37b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37b4) {
            ctx->pc = 0x3C37C8u;
            goto label_3c37c8;
        }
    }
    ctx->pc = 0x3C37BCu;
    // 0x3c37bc: 0x0  nop
    ctx->pc = 0x3c37bcu;
    // NOP
label_3c37c0:
    // 0x3c37c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c37c4: 0x0  nop
    ctx->pc = 0x3c37c4u;
    // NOP
label_3c37c8:
    // 0x3c37c8: 0x1460058b  bnez        $v1, . + 4 + (0x58B << 2)
    ctx->pc = 0x3C37C8u;
    {
        const bool branch_taken_0x3c37c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c37c8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C37D0u;
    // 0x3c37d0: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c37d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c37d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c37d8: 0x10000587  b           . + 4 + (0x587 << 2)
    ctx->pc = 0x3C37D8u;
    {
        const bool branch_taken_0x3c37d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37D8u;
        // 0x3c37dc: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37d8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C37E0u;
label_3c37e0:
    // 0x3c37e0: 0x86850528  lh          $a1, 0x528($s4)
    ctx->pc = 0x3c37e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1320)));
    // 0x3c37e4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c37e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3c37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c37ec: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3c37ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3c37f0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3c37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3c37f4: 0xa6850512  sh          $a1, 0x512($s4)
    ctx->pc = 0x3c37f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c37f8: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c37f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c37fc: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c37fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3800: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c3800u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3804: 0x92850521  lbu         $a1, 0x521($s4)
    ctx->pc = 0x3c3804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3808: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c3808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c380c: 0xa2850521  sb          $a1, 0x521($s4)
    ctx->pc = 0x3c380cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 5));
    // 0x3c3810: 0xa28306ac  sb          $v1, 0x6AC($s4)
    ctx->pc = 0x3c3810u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1708), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c3814: 0xa28006b4  sb          $zero, 0x6B4($s4)
    ctx->pc = 0x3c3814u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1716), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3818: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3c3818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3c381c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c381cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c3820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3824: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3828: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3c3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3c382c: 0xae820518  sw          $v0, 0x518($s4)
    ctx->pc = 0x3c382cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1304), GPR_U32(ctx, 2));
    // 0x3c3830: 0x8e850518  lw          $a1, 0x518($s4)
    ctx->pc = 0x3c3830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x3c3834: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C3834u;
    SET_GPR_U32(ctx, 31, 0x3C383Cu);
    ctx->pc = 0x3C3838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3834u;
    // 0x3c3838: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C3834u, 0x3C383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C383Cu;
label_3c383c:
    // 0x3c383c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C383Cu;
    {
        const bool branch_taken_0x3c383c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C383Cu;
        // 0x3c3840: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c383c) {
            ctx->pc = 0x3C3858u;
            goto label_3c3858;
        }
    }
    ctx->pc = 0x3C3844u;
    // 0x3c3844: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C3844u;
    SET_GPR_U32(ctx, 31, 0x3C384Cu);
    ctx->pc = 0x3C3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3844u;
    // 0x3c3848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C3844u, 0x3C384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C384Cu;
label_3c384c:
    // 0x3c384c: 0x1000056a  b           . + 4 + (0x56A << 2)
    ctx->pc = 0x3C384Cu;
    {
        const bool branch_taken_0x3c384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c384c) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3854u;
    // 0x3c3854: 0x0  nop
    ctx->pc = 0x3c3854u;
    // NOP
label_3c3858:
    // 0x3c3858: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3c3858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3c385c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c3860: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3C3860u;
    SET_GPR_U32(ctx, 31, 0x3C3868u);
    ctx->pc = 0x3C3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3860u;
    // 0x3c3864: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3C3860u, 0x3C3868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3868u;
label_3c3868:
    // 0x3c3868: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c386c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3C386Cu;
    SET_GPR_U32(ctx, 31, 0x3C3874u);
    ctx->pc = 0x3C3870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C386Cu;
    // 0x3c3870: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3C386Cu, 0x3C3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3874u;
label_3c3874:
    // 0x3c3874: 0x0  nop
    ctx->pc = 0x3c3874u;
    // NOP
label_3c3878:
    // 0x3c3878: 0x8e850518  lw          $a1, 0x518($s4)
    ctx->pc = 0x3c3878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x3c387c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c387cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c3880: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C3880u;
    SET_GPR_U32(ctx, 31, 0x3C3888u);
    ctx->pc = 0x3C3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3880u;
    // 0x3c3884: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C3880u, 0x3C3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3888u;
label_3c3888:
    // 0x3c3888: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3888u;
    {
        const bool branch_taken_0x3c3888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3888u;
        // 0x3c388c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3888) {
            ctx->pc = 0x3C38A0u;
            goto label_3c38a0;
        }
    }
    ctx->pc = 0x3C3890u;
    // 0x3c3890: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C3890u;
    SET_GPR_U32(ctx, 31, 0x3C3898u);
    ctx->pc = 0x3C3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3890u;
    // 0x3c3894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C3890u, 0x3C3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3898u;
label_3c3898:
    // 0x3c3898: 0x10000557  b           . + 4 + (0x557 << 2)
    ctx->pc = 0x3C3898u;
    {
        const bool branch_taken_0x3c3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3898) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C38A0u;
label_3c38a0:
    // 0x3c38a0: 0x928806b5  lbu         $t0, 0x6B5($s4)
    ctx->pc = 0x3c38a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c38a4: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x3c38a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3c38a8: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3c38a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3c38ac: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c38acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c38b0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3c38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3c38b4: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3c38b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3c38b8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3c38b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3c38bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3c38bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3c38c0: 0x24e72dc4  addiu       $a3, $a3, 0x2DC4
    ctx->pc = 0x3c38c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11716));
    // 0x3c38c4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3c38c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c38c8: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3c38c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c38cc: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x3c38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x3c38d0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3c38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3c38d4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c38d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c38d8: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3C38D8u;
    SET_GPR_U32(ctx, 31, 0x3C38E0u);
    ctx->pc = 0x3C38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38D8u;
    // 0x3c38dc: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3C38D8u, 0x3C38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38E0u;
label_3c38e0:
    // 0x3c38e0: 0x27a406c0  addiu       $a0, $sp, 0x6C0
    ctx->pc = 0x3c38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    // 0x3c38e4: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C38E4u;
    SET_GPR_U32(ctx, 31, 0x3C38ECu);
    ctx->pc = 0x3C38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38E4u;
    // 0x3c38e8: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C38E4u, 0x3C38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38ECu;
label_3c38ec:
    // 0x3c38ec: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x3c38ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
    // 0x3c38f0: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C38F0u;
    SET_GPR_U32(ctx, 31, 0x3C38F8u);
    ctx->pc = 0x3C38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38F0u;
    // 0x3c38f4: 0x27a506c0  addiu       $a1, $sp, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C38F0u, 0x3C38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38F8u;
label_3c38f8:
    // 0x3c38f8: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x3c38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
    // 0x3c38fc: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C38FCu;
    SET_GPR_U32(ctx, 31, 0x3C3904u);
    ctx->pc = 0x3C3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38FCu;
    // 0x3c3900: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C38FCu, 0x3C3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3904u;
label_3c3904:
    // 0x3c3904: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c3904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c3908: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c390c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C390Cu;
    SET_GPR_U32(ctx, 31, 0x3C3914u);
    ctx->pc = 0x3C3910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C390Cu;
    // 0x3c3910: 0x27a50780  addiu       $a1, $sp, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C390Cu, 0x3C3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3914u;
label_3c3914:
    // 0x3c3914: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3914u;
    {
        const bool branch_taken_0x3c3914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3914u;
        // 0x3c3918: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3914) {
            ctx->pc = 0x3C3928u;
            goto label_3c3928;
        }
    }
    ctx->pc = 0x3C391Cu;
    // 0x3c391c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C391Cu;
    SET_GPR_U32(ctx, 31, 0x3C3924u);
    ctx->pc = 0x3C3920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C391Cu;
    // 0x3c3920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C391Cu, 0x3C3924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3924u;
label_3c3924:
    // 0x3c3924: 0x0  nop
    ctx->pc = 0x3c3924u;
    // NOP
label_3c3928:
    // 0x3c3928: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c3928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c392c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c3930: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c3930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c3934: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c3934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c3938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c393c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c393cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3940: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3c3940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c3944: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C3944u;
    {
        const bool branch_taken_0x3c3944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3944u;
        // 0x3c3948: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3944) {
            ctx->pc = 0x3C3A20u;
            goto label_3c3a20;
        }
    }
    ctx->pc = 0x3C394Cu;
    // 0x3c394c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c394cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3954: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c3954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3958: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c3958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c395c: 0x0  nop
    ctx->pc = 0x3c395cu;
    // NOP
label_3c3960:
    // 0x3c3960: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c3960u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3964: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C3964u;
    SET_GPR_U32(ctx, 31, 0x3C396Cu);
    ctx->pc = 0x3C3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3964u;
    // 0x3c3968: 0x27a40740  addiu       $a0, $sp, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C3964u, 0x3C396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C396Cu;
label_3c396c:
    // 0x3c396c: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c396cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3970: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c3970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c3974: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c3974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c3978: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c3978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c397c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3980: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c3980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c3984: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c3984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c3988: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C3988u;
    SET_GPR_U32(ctx, 31, 0x3C3990u);
    ctx->pc = 0x3C398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3988u;
    // 0x3c398c: 0x27a40700  addiu       $a0, $sp, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C3988u, 0x3C3990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3990u;
label_3c3990:
    // 0x3c3990: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3994: 0x27a50700  addiu       $a1, $sp, 0x700
    ctx->pc = 0x3c3994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
    // 0x3c3998: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3998u;
    SET_GPR_U32(ctx, 31, 0x3C39A0u);
    ctx->pc = 0x3C399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3998u;
    // 0x3c399c: 0x27a60740  addiu       $a2, $sp, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3998u, 0x3C39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C39A0u;
label_3c39a0:
    // 0x3c39a0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c39a4: 0x27a606c0  addiu       $a2, $sp, 0x6C0
    ctx->pc = 0x3c39a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    // 0x3c39a8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C39A8u;
    SET_GPR_U32(ctx, 31, 0x3C39B0u);
    ctx->pc = 0x3C39ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C39A8u;
    // 0x3c39ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C39A8u, 0x3C39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C39B0u;
label_3c39b0:
    // 0x3c39b0: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c39b4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C39B4u;
    SET_GPR_U32(ctx, 31, 0x3C39BCu);
    ctx->pc = 0x3C39B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C39B4u;
    // 0x3c39b8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C39B4u, 0x3C39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C39BCu;
label_3c39bc:
    // 0x3c39bc: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c39c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c39c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c39c4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C39C4u;
    SET_GPR_U32(ctx, 31, 0x3C39CCu);
    ctx->pc = 0x3C39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C39C4u;
    // 0x3c39c8: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C39C4u, 0x3C39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C39CCu;
label_3c39cc:
    // 0x3c39cc: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c39ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c39d0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c39d4: 0x8663069e  lh          $v1, 0x69E($s3)
    ctx->pc = 0x3c39d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c39d8: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c39dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c39dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c39e0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c39e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c39e4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c39e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c39e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c39e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c39ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c39f0: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c39f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c39f4: 0x86630696  lh          $v1, 0x696($s3)
    ctx->pc = 0x3c39f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c39f8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c39f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c39fc: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c39fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3a00: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c3a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3a04: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c3a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3a0c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c3a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3a10: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c3a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c3a14: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C3A14u;
    {
        const bool branch_taken_0x3c3a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A14u;
        // 0x3c3a18: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a14) {
            ctx->pc = 0x3C3960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3960;
        }
    }
    ctx->pc = 0x3C3A1Cu;
    // 0x3c3a1c: 0x0  nop
    ctx->pc = 0x3c3a1cu;
    // NOP
label_3c3a20:
    // 0x3c3a20: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c3a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c3a24: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c3a24u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3c3a28: 0x27aa0c10  addiu       $t2, $sp, 0xC10
    ctx->pc = 0x3c3a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x3c3a2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3a30: 0x27a50be0  addiu       $a1, $sp, 0xBE0
    ctx->pc = 0x3c3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x3c3a34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c3a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3a38: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c3a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c3a3c: 0x7fa90be0  sq          $t1, 0xBE0($sp)
    ctx->pc = 0x3c3a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3040), GPR_VEC(ctx, 9));
    // 0x3c3a40: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c3a40u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3c3a44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c3a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c3a48: 0x7fa60bf0  sq          $a2, 0xBF0($sp)
    ctx->pc = 0x3c3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3056), GPR_VEC(ctx, 6));
    // 0x3c3a4c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c3a4cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3c3a50: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c3a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c3a54: 0x7fa30c00  sq          $v1, 0xC00($sp)
    ctx->pc = 0x3c3a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3072), GPR_VEC(ctx, 3));
    // 0x3c3a58: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c3a58u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3c3a5c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3c3a60: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c3a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3c3a64: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c3a64u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3c3a68: 0x928606ac  lbu         $a2, 0x6AC($s4)
    ctx->pc = 0x3c3a68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x3c3a6c: 0xc68c06a8  lwc1        $f12, 0x6A8($s4)
    ctx->pc = 0x3c3a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c3a70: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3C3A70u;
    SET_GPR_U32(ctx, 31, 0x3C3A78u);
    ctx->pc = 0x3C3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A70u;
    // 0x3c3a74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C3A70u, 0x3C3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A78u;
label_3c3a78:
    // 0x3c3a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3A78u;
    {
        const bool branch_taken_0x3c3a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A78u;
        // 0x3c3a7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a78) {
            ctx->pc = 0x3C3A88u;
            goto label_3c3a88;
        }
    }
    ctx->pc = 0x3C3A80u;
    // 0x3c3a80: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C3A80u;
    SET_GPR_U32(ctx, 31, 0x3C3A88u);
    ctx->pc = 0x3C3A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A80u;
    // 0x3c3a84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C3A80u, 0x3C3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A88u;
label_3c3a88:
    // 0x3c3a88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3c3a8c: 0xafa20c2c  sw          $v0, 0xC2C($sp)
    ctx->pc = 0x3c3a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3116), GPR_U32(ctx, 2));
    // 0x3c3a90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3a94: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3c3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c3a98: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x3c3a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x3c3a9c: 0x27a70bc0  addiu       $a3, $sp, 0xBC0
    ctx->pc = 0x3c3a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3008));
    // 0x3c3aa0: 0x27a80bd0  addiu       $t0, $sp, 0xBD0
    ctx->pc = 0x3c3aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3024));
    // 0x3c3aa4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3c3aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3aa8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3C3AA8u;
    SET_GPR_U32(ctx, 31, 0x3C3AB0u);
    ctx->pc = 0x3C3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AA8u;
    // 0x3c3aac: 0x27aa0c2c  addiu       $t2, $sp, 0xC2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 3116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3C3AA8u, 0x3C3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AB0u;
label_3c3ab0:
    // 0x3c3ab0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3C3AB0u;
    {
        const bool branch_taken_0x3c3ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AB0u;
        // 0x3c3ab4: 0x27a405c0  addiu       $a0, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ab0) {
            ctx->pc = 0x3C3C00u;
            goto label_3c3c00;
        }
    }
    ctx->pc = 0x3C3AB8u;
    // 0x3c3ab8: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C3AB8u;
    SET_GPR_U32(ctx, 31, 0x3C3AC0u);
    ctx->pc = 0x3C3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AB8u;
    // 0x3c3abc: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C3AB8u, 0x3C3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AC0u;
label_3c3ac0:
    // 0x3c3ac0: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x3c3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
    // 0x3c3ac4: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C3AC4u;
    SET_GPR_U32(ctx, 31, 0x3C3ACCu);
    ctx->pc = 0x3C3AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AC4u;
    // 0x3c3ac8: 0x27a505c0  addiu       $a1, $sp, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C3AC4u, 0x3C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3ACCu;
label_3c3acc:
    // 0x3c3acc: 0x27a406b0  addiu       $a0, $sp, 0x6B0
    ctx->pc = 0x3c3accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
    // 0x3c3ad0: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C3AD0u;
    SET_GPR_U32(ctx, 31, 0x3C3AD8u);
    ctx->pc = 0x3C3AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AD0u;
    // 0x3c3ad4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C3AD0u, 0x3C3AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AD8u;
label_3c3ad8:
    // 0x3c3ad8: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c3ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c3adc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3ae0: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C3AE0u;
    SET_GPR_U32(ctx, 31, 0x3C3AE8u);
    ctx->pc = 0x3C3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AE0u;
    // 0x3c3ae4: 0x27a50680  addiu       $a1, $sp, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C3AE0u, 0x3C3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AE8u;
label_3c3ae8:
    // 0x3c3ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3AE8u;
    {
        const bool branch_taken_0x3c3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AE8u;
        // 0x3c3aec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ae8) {
            ctx->pc = 0x3C3AF8u;
            goto label_3c3af8;
        }
    }
    ctx->pc = 0x3C3AF0u;
    // 0x3c3af0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C3AF0u;
    SET_GPR_U32(ctx, 31, 0x3C3AF8u);
    ctx->pc = 0x3C3AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AF0u;
    // 0x3c3af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C3AF0u, 0x3C3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AF8u;
label_3c3af8:
    // 0x3c3af8: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c3af8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3afc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c3b00: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c3b04: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c3b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c3b0c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c3b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3b10: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c3b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3b14: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C3B14u;
    {
        const bool branch_taken_0x3c3b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B14u;
        // 0x3c3b18: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b14) {
            ctx->pc = 0x3C3BF0u;
            goto label_3c3bf0;
        }
    }
    ctx->pc = 0x3C3B1Cu;
    // 0x3c3b1c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c3b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b24: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c3b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b28: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c3b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b2c: 0x0  nop
    ctx->pc = 0x3c3b2cu;
    // NOP
label_3c3b30:
    // 0x3c3b30: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c3b30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3b34: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C3B34u;
    SET_GPR_U32(ctx, 31, 0x3C3B3Cu);
    ctx->pc = 0x3C3B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B34u;
    // 0x3c3b38: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C3B34u, 0x3C3B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B3Cu;
label_3c3b3c:
    // 0x3c3b3c: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c3b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3b40: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c3b44: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c3b48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c3b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3b50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c3b54: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c3b54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c3b58: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C3B58u;
    SET_GPR_U32(ctx, 31, 0x3C3B60u);
    ctx->pc = 0x3C3B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B58u;
    // 0x3c3b5c: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C3B58u, 0x3C3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B60u;
label_3c3b60:
    // 0x3c3b60: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3b64: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x3c3b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x3c3b68: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3B68u;
    SET_GPR_U32(ctx, 31, 0x3C3B70u);
    ctx->pc = 0x3C3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B68u;
    // 0x3c3b6c: 0x27a60640  addiu       $a2, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3B68u, 0x3C3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B70u;
label_3c3b70:
    // 0x3c3b70: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3b74: 0x27a605c0  addiu       $a2, $sp, 0x5C0
    ctx->pc = 0x3c3b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x3c3b78: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3B78u;
    SET_GPR_U32(ctx, 31, 0x3C3B80u);
    ctx->pc = 0x3C3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B78u;
    // 0x3c3b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3B78u, 0x3C3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B80u;
label_3c3b80:
    // 0x3c3b80: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c3b84: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C3B84u;
    SET_GPR_U32(ctx, 31, 0x3C3B8Cu);
    ctx->pc = 0x3C3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B84u;
    // 0x3c3b88: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C3B84u, 0x3C3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B8Cu;
label_3c3b8c:
    // 0x3c3b8c: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c3b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3b94: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C3B94u;
    SET_GPR_U32(ctx, 31, 0x3C3B9Cu);
    ctx->pc = 0x3C3B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B94u;
    // 0x3c3b98: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C3B94u, 0x3C3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B9Cu;
label_3c3b9c:
    // 0x3c3b9c: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c3b9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3ba0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c3ba4: 0x8664069e  lh          $a0, 0x69E($s3)
    ctx->pc = 0x3c3ba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c3ba8: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c3bac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c3bacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c3bb0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c3bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c3bb4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c3bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c3bb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c3bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c3bbc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3c3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c3bc0: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c3bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3bc4: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c3bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3bc8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3c3bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3c3bcc: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c3bccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3bd0: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c3bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3bd4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c3bd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c3bdc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c3bdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3be0: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c3be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3be4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C3BE4u;
    {
        const bool branch_taken_0x3c3be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BE4u;
        // 0x3c3be8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3be4) {
            ctx->pc = 0x3C3B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3b30;
        }
    }
    ctx->pc = 0x3C3BECu;
    // 0x3c3bec: 0x0  nop
    ctx->pc = 0x3c3becu;
    // NOP
label_3c3bf0:
    // 0x3c3bf0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c3bf4: 0x10000480  b           . + 4 + (0x480 << 2)
    ctx->pc = 0x3C3BF4u;
    {
        const bool branch_taken_0x3c3bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BF4u;
        // 0x3c3bf8: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bf4) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3BFCu;
    // 0x3c3bfc: 0x0  nop
    ctx->pc = 0x3c3bfcu;
    // NOP
label_3c3c00:
    // 0x3c3c00: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c3c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c3c04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3C04u;
    {
        const bool branch_taken_0x3c3c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C04u;
        // 0x3c3c08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c04) {
            ctx->pc = 0x3C3C18u;
            goto label_3c3c18;
        }
    }
    ctx->pc = 0x3C3C0Cu;
    // 0x3c3c0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C3C0Cu;
    {
        const bool branch_taken_0x3c3c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3c0c) {
            ctx->pc = 0x3C3C98u;
            goto label_3c3c98;
        }
    }
    ctx->pc = 0x3C3C14u;
    // 0x3c3c14: 0x0  nop
    ctx->pc = 0x3c3c14u;
    // NOP
label_3c3c18:
    // 0x3c3c18: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c3c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3c1c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c3c20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c3c24: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3c24u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3c28: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c3c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c3c2c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3C2Cu;
    {
        const bool branch_taken_0x3c3c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c3c2c) {
            ctx->pc = 0x3C3C68u;
            goto label_3c3c68;
        }
    }
    ctx->pc = 0x3C3C34u;
    // 0x3c3c34: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c3c34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3c38: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c3c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c3c3c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C3C3Cu;
    {
        const bool branch_taken_0x3c3c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C3Cu;
        // 0x3c3c40: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c3c) {
            ctx->pc = 0x3C3C90u;
            goto label_3c3c90;
        }
    }
    ctx->pc = 0x3C3C44u;
    // 0x3c3c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3c48: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c3c48u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c3c4c: 0x0  nop
    ctx->pc = 0x3c3c4cu;
    // NOP
    // 0x3c3c50: 0x0  nop
    ctx->pc = 0x3c3c50u;
    // NOP
    // 0x3c3c54: 0x2010  mfhi        $a0
    ctx->pc = 0x3c3c54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c3c58: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3c58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3c5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C3C5Cu;
    {
        const bool branch_taken_0x3c3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C5Cu;
        // 0x3c3c60: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c5c) {
            ctx->pc = 0x3C3C90u;
            goto label_3c3c90;
        }
    }
    ctx->pc = 0x3C3C64u;
    // 0x3c3c64: 0x0  nop
    ctx->pc = 0x3c3c64u;
    // NOP
label_3c3c68:
    // 0x3c3c68: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c3c68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3c6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c3c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c3c70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3C70u;
    {
        const bool branch_taken_0x3c3c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3c70) {
            ctx->pc = 0x3C3C90u;
            goto label_3c3c90;
        }
    }
    ctx->pc = 0x3C3C78u;
    // 0x3c3c78: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3c78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3c80: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c3c80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c3c84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3C84u;
    {
        const bool branch_taken_0x3c3c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C84u;
        // 0x3c3c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c84) {
            ctx->pc = 0x3C3C98u;
            goto label_3c3c98;
        }
    }
    ctx->pc = 0x3C3C8Cu;
    // 0x3c3c8c: 0x0  nop
    ctx->pc = 0x3c3c8cu;
    // NOP
label_3c3c90:
    // 0x3c3c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3c94: 0x0  nop
    ctx->pc = 0x3c3c94u;
    // NOP
label_3c3c98:
    // 0x3c3c98: 0x14600457  bnez        $v1, . + 4 + (0x457 << 2)
    ctx->pc = 0x3C3C98u;
    {
        const bool branch_taken_0x3c3c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3c98) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3CA0u;
    // 0x3c3ca0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c3ca4: 0x10000454  b           . + 4 + (0x454 << 2)
    ctx->pc = 0x3C3CA4u;
    {
        const bool branch_taken_0x3c3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CA4u;
        // 0x3c3ca8: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ca4) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3CACu;
    // 0x3c3cac: 0x0  nop
    ctx->pc = 0x3c3cacu;
    // NOP
label_3c3cb0:
    // 0x3c3cb0: 0x92820694  lbu         $v0, 0x694($s4)
    ctx->pc = 0x3c3cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x3c3cb4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C3CB4u;
    {
        const bool branch_taken_0x3c3cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3cb4) {
            ctx->pc = 0x3C3CE0u;
            goto label_3c3ce0;
        }
    }
    ctx->pc = 0x3C3CBCu;
    // 0x3c3cbc: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3C3CBCu;
    SET_GPR_U32(ctx, 31, 0x3C3CC4u);
    ctx->pc = 0x3C3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3CBCu;
    // 0x3c3cc0: 0x8e840550  lw          $a0, 0x550($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3C3CBCu, 0x3C3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3CC4u;
label_3c3cc4:
    // 0x3c3cc4: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c3cc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c3cc8: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c3cc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c3ccc: 0xc0aa46c  jal         func_2A91B0
    ctx->pc = 0x3C3CCCu;
    SET_GPR_U32(ctx, 31, 0x3C3CD4u);
    ctx->pc = 0x3C3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3CCCu;
    // 0x3c3cd0: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A91B0u, 0x3C3CCCu, 0x3C3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3CD4u;
label_3c3cd4:
    // 0x3c3cd4: 0xae820550  sw          $v0, 0x550($s4)
    ctx->pc = 0x3c3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 2));
    // 0x3c3cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3cdc: 0xa2820694  sb          $v0, 0x694($s4)
    ctx->pc = 0x3c3cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1684), (uint8_t)GPR_U32(ctx, 2));
label_3c3ce0:
    // 0x3c3ce0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x3c3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3c3ce4: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c3ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c3ce8: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c3ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c3cec: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c3cecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3cf0: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c3cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3cf4: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c3cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3cf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c3cfc: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c3cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c3d00:
    // 0x3c3d00: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c3d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c3d04: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3c3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c3d08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c3d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c3d0c: 0xa6830692  sh          $v1, 0x692($s4)
    ctx->pc = 0x3c3d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1682), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c3d10: 0x86830692  lh          $v1, 0x692($s4)
    ctx->pc = 0x3c3d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1682)));
    // 0x3c3d14: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3c3d14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c3d18: 0x0  nop
    ctx->pc = 0x3c3d18u;
    // NOP
    // 0x3c3d1c: 0x0  nop
    ctx->pc = 0x3c3d1cu;
    // NOP
    // 0x3c3d20: 0x1010  mfhi        $v0
    ctx->pc = 0x3c3d20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c3d24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3D24u;
    {
        const bool branch_taken_0x3c3d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3d24) {
            ctx->pc = 0x3C3D60u;
            goto label_3c3d60;
        }
    }
    ctx->pc = 0x3C3D2Cu;
    // 0x3c3d2c: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c3d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c3d30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c3d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c3d34: 0x3c022b00  lui         $v0, 0x2B00
    ctx->pc = 0x3c3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11008 << 16));
    // 0x3c3d38: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c3d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c3d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d40: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c3d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c3d44: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c3d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c3d48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c3d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c3d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c3d50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c3d54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d58: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C3D58u;
    SET_GPR_U32(ctx, 31, 0x3C3D60u);
    ctx->pc = 0x3C3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D58u;
    // 0x3c3d5c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C3D58u, 0x3C3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D60u;
label_3c3d60:
    // 0x3c3d60: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x3c3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x3c3d64: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C3D64u;
    SET_GPR_U32(ctx, 31, 0x3C3D6Cu);
    ctx->pc = 0x3C3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D64u;
    // 0x3c3d68: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C3D64u, 0x3C3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D6Cu;
label_3c3d6c:
    // 0x3c3d6c: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x3c3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    // 0x3c3d70: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C3D70u;
    SET_GPR_U32(ctx, 31, 0x3C3D78u);
    ctx->pc = 0x3C3D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D70u;
    // 0x3c3d74: 0x27a504c0  addiu       $a1, $sp, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C3D70u, 0x3C3D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D78u;
label_3c3d78:
    // 0x3c3d78: 0x27a405b0  addiu       $a0, $sp, 0x5B0
    ctx->pc = 0x3c3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
    // 0x3c3d7c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C3D7Cu;
    SET_GPR_U32(ctx, 31, 0x3C3D84u);
    ctx->pc = 0x3C3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D7Cu;
    // 0x3c3d80: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C3D7Cu, 0x3C3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D84u;
label_3c3d84:
    // 0x3c3d84: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c3d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c3d88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3d8c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C3D8Cu;
    SET_GPR_U32(ctx, 31, 0x3C3D94u);
    ctx->pc = 0x3C3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D8Cu;
    // 0x3c3d90: 0x27a50580  addiu       $a1, $sp, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C3D8Cu, 0x3C3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D94u;
label_3c3d94:
    // 0x3c3d94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3D94u;
    {
        const bool branch_taken_0x3c3d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D94u;
        // 0x3c3d98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d94) {
            ctx->pc = 0x3C3DA8u;
            goto label_3c3da8;
        }
    }
    ctx->pc = 0x3C3D9Cu;
    // 0x3c3d9c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C3D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C3DA4u);
    ctx->pc = 0x3C3DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D9Cu;
    // 0x3c3da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C3D9Cu, 0x3C3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3DA4u;
label_3c3da4:
    // 0x3c3da4: 0x0  nop
    ctx->pc = 0x3c3da4u;
    // NOP
label_3c3da8:
    // 0x3c3da8: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c3da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3dac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c3db0: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c3db4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c3db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c3db8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c3dbc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c3dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3dc0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c3dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3dc4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C3DC4u;
    {
        const bool branch_taken_0x3c3dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DC4u;
        // 0x3c3dc8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3dc4) {
            ctx->pc = 0x3C3EA0u;
            goto label_3c3ea0;
        }
    }
    ctx->pc = 0x3C3DCCu;
    // 0x3c3dcc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c3dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3dd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3dd4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c3dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3dd8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c3dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3ddc: 0x0  nop
    ctx->pc = 0x3c3ddcu;
    // NOP
label_3c3de0:
    // 0x3c3de0: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c3de0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3de4: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C3DE4u;
    SET_GPR_U32(ctx, 31, 0x3C3DECu);
    ctx->pc = 0x3C3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3DE4u;
    // 0x3c3de8: 0x27a40540  addiu       $a0, $sp, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C3DE4u, 0x3C3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3DECu;
label_3c3dec:
    // 0x3c3dec: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c3decu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3df0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c3df4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c3df8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c3dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3e00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c3e04: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c3e04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c3e08: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C3E08u;
    SET_GPR_U32(ctx, 31, 0x3C3E10u);
    ctx->pc = 0x3C3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E08u;
    // 0x3c3e0c: 0x27a40500  addiu       $a0, $sp, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C3E08u, 0x3C3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E10u;
label_3c3e10:
    // 0x3c3e10: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3e14: 0x27a50500  addiu       $a1, $sp, 0x500
    ctx->pc = 0x3c3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x3c3e18: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3E18u;
    SET_GPR_U32(ctx, 31, 0x3C3E20u);
    ctx->pc = 0x3C3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E18u;
    // 0x3c3e1c: 0x27a60540  addiu       $a2, $sp, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3E18u, 0x3C3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E20u;
label_3c3e20:
    // 0x3c3e20: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c3e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c3e24: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x3c3e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x3c3e28: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C3E28u;
    SET_GPR_U32(ctx, 31, 0x3C3E30u);
    ctx->pc = 0x3C3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E28u;
    // 0x3c3e2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C3E28u, 0x3C3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E30u;
label_3c3e30:
    // 0x3c3e30: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c3e34: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C3E34u;
    SET_GPR_U32(ctx, 31, 0x3C3E3Cu);
    ctx->pc = 0x3C3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E34u;
    // 0x3c3e38: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C3E34u, 0x3C3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E3Cu;
label_3c3e3c:
    // 0x3c3e3c: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c3e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c3e40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3e44: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C3E44u;
    SET_GPR_U32(ctx, 31, 0x3C3E4Cu);
    ctx->pc = 0x3C3E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E44u;
    // 0x3c3e48: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C3E44u, 0x3C3E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E4Cu;
label_3c3e4c:
    // 0x3c3e4c: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c3e4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3e50: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c3e54: 0x8664069e  lh          $a0, 0x69E($s3)
    ctx->pc = 0x3c3e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c3e58: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x3c3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x3c3e5c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c3e5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c3e60: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c3e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c3e64: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c3e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c3e68: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c3e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c3e6c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3c3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c3e70: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c3e70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3e74: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c3e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c3e78: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3c3e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3c3e7c: 0xa6640696  sh          $a0, 0x696($s3)
    ctx->pc = 0x3c3e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3e80: 0x928406b5  lbu         $a0, 0x6B5($s4)
    ctx->pc = 0x3c3e80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c3e84: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3c3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3c3e88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c3e8c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3c3e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c3e90: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c3e90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c3e94: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C3E94u;
    {
        const bool branch_taken_0x3c3e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E94u;
        // 0x3c3e98: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e94) {
            ctx->pc = 0x3C3DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3de0;
        }
    }
    ctx->pc = 0x3C3E9Cu;
    // 0x3c3e9c: 0x0  nop
    ctx->pc = 0x3c3e9cu;
    // NOP
label_3c3ea0:
    // 0x3c3ea0: 0x9284053a  lbu         $a0, 0x53A($s4)
    ctx->pc = 0x3c3ea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1338)));
    // 0x3c3ea4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3c3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3c3ea8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3EA8u;
    {
        const bool branch_taken_0x3c3ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c3ea8) {
            ctx->pc = 0x3C3EC0u;
            goto label_3c3ec0;
        }
    }
    ctx->pc = 0x3C3EB0u;
    // 0x3c3eb0: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c3eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c3eb8: 0x100003cf  b           . + 4 + (0x3CF << 2)
    ctx->pc = 0x3C3EB8u;
    {
        const bool branch_taken_0x3c3eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EB8u;
        // 0x3c3ebc: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3eb8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3EC0u;
label_3c3ec0:
    // 0x3c3ec0: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c3ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c3ec4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3EC4u;
    {
        const bool branch_taken_0x3c3ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EC4u;
        // 0x3c3ec8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ec4) {
            ctx->pc = 0x3C3ED8u;
            goto label_3c3ed8;
        }
    }
    ctx->pc = 0x3C3ECCu;
    // 0x3c3ecc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C3ECCu;
    {
        const bool branch_taken_0x3c3ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3ecc) {
            ctx->pc = 0x3C3F58u;
            goto label_3c3f58;
        }
    }
    ctx->pc = 0x3C3ED4u;
    // 0x3c3ed4: 0x0  nop
    ctx->pc = 0x3c3ed4u;
    // NOP
label_3c3ed8:
    // 0x3c3ed8: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c3ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3edc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c3ee0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c3ee4: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3ee8: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c3ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c3eec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3EECu;
    {
        const bool branch_taken_0x3c3eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c3eec) {
            ctx->pc = 0x3C3F28u;
            goto label_3c3f28;
        }
    }
    ctx->pc = 0x3C3EF4u;
    // 0x3c3ef4: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c3ef4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3ef8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c3ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c3efc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C3EFCu;
    {
        const bool branch_taken_0x3c3efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EFCu;
        // 0x3c3f00: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3efc) {
            ctx->pc = 0x3C3F50u;
            goto label_3c3f50;
        }
    }
    ctx->pc = 0x3C3F04u;
    // 0x3c3f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3f08: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c3f08u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c3f0c: 0x0  nop
    ctx->pc = 0x3c3f0cu;
    // NOP
    // 0x3c3f10: 0x0  nop
    ctx->pc = 0x3c3f10u;
    // NOP
    // 0x3c3f14: 0x2010  mfhi        $a0
    ctx->pc = 0x3c3f14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c3f18: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3f18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3f1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C3F1Cu;
    {
        const bool branch_taken_0x3c3f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F1Cu;
        // 0x3c3f20: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f1c) {
            ctx->pc = 0x3C3F50u;
            goto label_3c3f50;
        }
    }
    ctx->pc = 0x3C3F24u;
    // 0x3c3f24: 0x0  nop
    ctx->pc = 0x3c3f24u;
    // NOP
label_3c3f28:
    // 0x3c3f28: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c3f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c3f2c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c3f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c3f30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3F30u;
    {
        const bool branch_taken_0x3c3f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3f30) {
            ctx->pc = 0x3C3F50u;
            goto label_3c3f50;
        }
    }
    ctx->pc = 0x3C3F38u;
    // 0x3c3f38: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c3f38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3f40: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c3f40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c3f44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3F44u;
    {
        const bool branch_taken_0x3c3f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F44u;
        // 0x3c3f48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f44) {
            ctx->pc = 0x3C3F58u;
            goto label_3c3f58;
        }
    }
    ctx->pc = 0x3C3F4Cu;
    // 0x3c3f4c: 0x0  nop
    ctx->pc = 0x3c3f4cu;
    // NOP
label_3c3f50:
    // 0x3c3f50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3f54: 0x0  nop
    ctx->pc = 0x3c3f54u;
    // NOP
label_3c3f58:
    // 0x3c3f58: 0x146003a7  bnez        $v1, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x3C3F58u;
    {
        const bool branch_taken_0x3c3f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3f58) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3F60u;
    // 0x3c3f60: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c3f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c3f68: 0x100003a3  b           . + 4 + (0x3A3 << 2)
    ctx->pc = 0x3C3F68u;
    {
        const bool branch_taken_0x3c3f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F68u;
        // 0x3c3f6c: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f68) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3F70u;
label_3c3f70:
    // 0x3c3f70: 0x86860528  lh          $a2, 0x528($s4)
    ctx->pc = 0x3c3f70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1320)));
    // 0x3c3f74: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c3f78: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3c3f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3c3f7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3c3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c3f80: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3c3f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3c3f84: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3c3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3c3f88: 0xa6860512  sh          $a2, 0x512($s4)
    ctx->pc = 0x3c3f88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 6));
    // 0x3c3f8c: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c3f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c3f90: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c3f90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3f94: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c3f94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3f98: 0x92860521  lbu         $a2, 0x521($s4)
    ctx->pc = 0x3c3f98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c3f9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c3f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c3fa0: 0xa2860521  sb          $a2, 0x521($s4)
    ctx->pc = 0x3c3fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 6));
    // 0x3c3fa4: 0xa28506ac  sb          $a1, 0x6AC($s4)
    ctx->pc = 0x3c3fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1708), (uint8_t)GPR_U32(ctx, 5));
    // 0x3c3fa8: 0xa28306b4  sb          $v1, 0x6B4($s4)
    ctx->pc = 0x3c3fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1716), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c3fac: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3c3facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3c3fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c3fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3fb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3fbc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3c3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3c3fc0: 0xae820518  sw          $v0, 0x518($s4)
    ctx->pc = 0x3c3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1304), GPR_U32(ctx, 2));
    // 0x3c3fc4: 0x8e850518  lw          $a1, 0x518($s4)
    ctx->pc = 0x3c3fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x3c3fc8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C3FC8u;
    SET_GPR_U32(ctx, 31, 0x3C3FD0u);
    ctx->pc = 0x3C3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3FC8u;
    // 0x3c3fcc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C3FC8u, 0x3C3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3FD0u;
label_3c3fd0:
    // 0x3c3fd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3FD0u;
    {
        const bool branch_taken_0x3c3fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FD0u;
        // 0x3c3fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3fd0) {
            ctx->pc = 0x3C3FE8u;
            goto label_3c3fe8;
        }
    }
    ctx->pc = 0x3C3FD8u;
    // 0x3c3fd8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C3FD8u;
    SET_GPR_U32(ctx, 31, 0x3C3FE0u);
    ctx->pc = 0x3C3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3FD8u;
    // 0x3c3fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C3FD8u, 0x3C3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3FE0u;
label_3c3fe0:
    // 0x3c3fe0: 0x10000385  b           . + 4 + (0x385 << 2)
    ctx->pc = 0x3C3FE0u;
    {
        const bool branch_taken_0x3c3fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3fe0) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C3FE8u;
label_3c3fe8:
    // 0x3c3fe8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3c3fec: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c3fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c3ff0: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x3c3ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c3ff4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c3ff8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3C3FF8u;
    SET_GPR_U32(ctx, 31, 0x3C4000u);
    ctx->pc = 0x3C3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3FF8u;
    // 0x3c3ffc: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3C3FF8u, 0x3C4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4000u;
label_3c4000:
    // 0x3c4000: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c4000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c4004: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3C4004u;
    SET_GPR_U32(ctx, 31, 0x3C400Cu);
    ctx->pc = 0x3C4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4004u;
    // 0x3c4008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3C4004u, 0x3C400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C400Cu;
label_3c400c:
    // 0x3c400c: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c400cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c4010: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c4014: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c4014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c4018: 0x24422dc8  addiu       $v0, $v0, 0x2DC8
    ctx->pc = 0x3c4018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11720));
    // 0x3c401c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c401cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c4020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c4024: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c4024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c4028: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3C4028u;
    SET_GPR_U32(ctx, 31, 0x3C4030u);
    ctx->pc = 0x3C402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4028u;
    // 0x3c402c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3C4028u, 0x3C4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4030u;
label_3c4030:
    // 0x3c4030: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c4030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c4034: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3c4034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3c4038: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3c4038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c403c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c4040: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x3c4040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c4044: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c4044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c4048: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c4048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c404c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3C404Cu;
    SET_GPR_U32(ctx, 31, 0x3C4054u);
    ctx->pc = 0x3C4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C404Cu;
    // 0x3c4050: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3C404Cu, 0x3C4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4054u;
label_3c4054:
    // 0x3c4054: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x3c4054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x3c4058: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C4058u;
    SET_GPR_U32(ctx, 31, 0x3C4060u);
    ctx->pc = 0x3C405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4058u;
    // 0x3c405c: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C4058u, 0x3C4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4060u;
label_3c4060:
    // 0x3c4060: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3c4060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x3c4064: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C4064u;
    SET_GPR_U32(ctx, 31, 0x3C406Cu);
    ctx->pc = 0x3C4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4064u;
    // 0x3c4068: 0x27a503c0  addiu       $a1, $sp, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C4064u, 0x3C406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C406Cu;
label_3c406c:
    // 0x3c406c: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x3c406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3c4070: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C4070u;
    SET_GPR_U32(ctx, 31, 0x3C4078u);
    ctx->pc = 0x3C4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4070u;
    // 0x3c4074: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C4070u, 0x3C4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4078u;
label_3c4078:
    // 0x3c4078: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c4078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c407c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4080: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C4080u;
    SET_GPR_U32(ctx, 31, 0x3C4088u);
    ctx->pc = 0x3C4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4080u;
    // 0x3c4084: 0x27a50480  addiu       $a1, $sp, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C4080u, 0x3C4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4088u;
label_3c4088:
    // 0x3c4088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4088u;
    {
        const bool branch_taken_0x3c4088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4088u;
        // 0x3c408c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4088) {
            ctx->pc = 0x3C4098u;
            goto label_3c4098;
        }
    }
    ctx->pc = 0x3C4090u;
    // 0x3c4090: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4090u;
    SET_GPR_U32(ctx, 31, 0x3C4098u);
    ctx->pc = 0x3C4094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4090u;
    // 0x3c4094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4090u, 0x3C4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4098u;
label_3c4098:
    // 0x3c4098: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c409c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c40a0: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c40a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c40a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c40ac: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c40acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c40b0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3c40b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c40b4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C40B4u;
    {
        const bool branch_taken_0x3c40b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40B4u;
        // 0x3c40b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c40b4) {
            ctx->pc = 0x3C4190u;
            goto label_3c4190;
        }
    }
    ctx->pc = 0x3C40BCu;
    // 0x3c40bc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c40bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c40c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c40c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c40c4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c40c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c40c8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c40c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c40cc: 0x0  nop
    ctx->pc = 0x3c40ccu;
    // NOP
label_3c40d0:
    // 0x3c40d0: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c40d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c40d4: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C40D4u;
    SET_GPR_U32(ctx, 31, 0x3C40DCu);
    ctx->pc = 0x3C40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40D4u;
    // 0x3c40d8: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C40D4u, 0x3C40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40DCu;
label_3c40dc:
    // 0x3c40dc: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c40dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c40e0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c40e4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c40e8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c40ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c40f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c40f4: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c40f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c40f8: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C40F8u;
    SET_GPR_U32(ctx, 31, 0x3C4100u);
    ctx->pc = 0x3C40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40F8u;
    // 0x3c40fc: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C40F8u, 0x3C4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4100u;
label_3c4100:
    // 0x3c4100: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c4100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c4104: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x3c4104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x3c4108: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C4108u;
    SET_GPR_U32(ctx, 31, 0x3C4110u);
    ctx->pc = 0x3C410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4108u;
    // 0x3c410c: 0x27a60440  addiu       $a2, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C4108u, 0x3C4110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4110u;
label_3c4110:
    // 0x3c4110: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c4114: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x3c4114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x3c4118: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C4118u;
    SET_GPR_U32(ctx, 31, 0x3C4120u);
    ctx->pc = 0x3C411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4118u;
    // 0x3c411c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C4118u, 0x3C4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4120u;
label_3c4120:
    // 0x3c4120: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c4120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c4124: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C4124u;
    SET_GPR_U32(ctx, 31, 0x3C412Cu);
    ctx->pc = 0x3C4128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4124u;
    // 0x3c4128: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C4124u, 0x3C412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C412Cu;
label_3c412c:
    // 0x3c412c: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c412cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c4130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4134: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C4134u;
    SET_GPR_U32(ctx, 31, 0x3C413Cu);
    ctx->pc = 0x3C4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4134u;
    // 0x3c4138: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C4134u, 0x3C413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C413Cu;
label_3c413c:
    // 0x3c413c: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c413cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4140: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c4140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c4144: 0x8663069e  lh          $v1, 0x69E($s3)
    ctx->pc = 0x3c4144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c4148: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c4148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c414c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c414cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c4150: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c4150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c4154: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c4154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c4158: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c4158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c415c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c4160: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c4160u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c4164: 0x86630696  lh          $v1, 0x696($s3)
    ctx->pc = 0x3c4164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4168: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c4168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c416c: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c416cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c4170: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c4174: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c4174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c4178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c417c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c417cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c4180: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c4180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4184: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C4184u;
    {
        const bool branch_taken_0x3c4184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4184u;
        // 0x3c4188: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4184) {
            ctx->pc = 0x3C40D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c40d0;
        }
    }
    ctx->pc = 0x3C418Cu;
    // 0x3c418c: 0x0  nop
    ctx->pc = 0x3c418cu;
    // NOP
label_3c4190:
    // 0x3c4190: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4194: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3c4194u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3c4198: 0x27b20bf0  addiu       $s2, $sp, 0xBF0
    ctx->pc = 0x3c4198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 3056));
    // 0x3c419c: 0x27b10c00  addiu       $s1, $sp, 0xC00
    ctx->pc = 0x3c419cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3072));
    // 0x3c41a0: 0x27b00c10  addiu       $s0, $sp, 0xC10
    ctx->pc = 0x3c41a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x3c41a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c41a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c41a8: 0x27a50be0  addiu       $a1, $sp, 0xBE0
    ctx->pc = 0x3c41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x3c41ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c41acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c41b0: 0x7fa30be0  sq          $v1, 0xBE0($sp)
    ctx->pc = 0x3c41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3040), GPR_VEC(ctx, 3));
    // 0x3c41b4: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3c41b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3c41b8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3c41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3c41bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c41bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c41c0: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3c41c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3c41c4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3c41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3c41c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c41c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c41cc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c41ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3c41d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c41d4: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c41d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3c41d8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c41dc: 0x928606b4  lbu         $a2, 0x6B4($s4)
    ctx->pc = 0x3c41dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1716)));
    // 0x3c41e0: 0xc68c06b0  lwc1        $f12, 0x6B0($s4)
    ctx->pc = 0x3c41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c41e4: 0xc0c0960  jal         func_302580
    ctx->pc = 0x3C41E4u;
    SET_GPR_U32(ctx, 31, 0x3C41ECu);
    ctx->pc = 0x3C41E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C41E4u;
    // 0x3c41e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3C41E4u, 0x3C41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C41ECu;
label_3c41ec:
    // 0x3c41ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C41ECu;
    {
        const bool branch_taken_0x3c41ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41ECu;
        // 0x3c41f0: 0x268401c0  addiu       $a0, $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c41ec) {
            ctx->pc = 0x3C4250u;
            goto label_3c4250;
        }
    }
    ctx->pc = 0x3C41F4u;
    // 0x3c41f4: 0xc0972bc  jal         func_25CAF0
    ctx->pc = 0x3C41F4u;
    SET_GPR_U32(ctx, 31, 0x3C41FCu);
    ctx->pc = 0x25CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CAF0u, 0x3C41F4u, 0x3C41FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C41FCu;
label_3c41fc:
    // 0x3c41fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C41FCu;
    {
        const bool branch_taken_0x3c41fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c41fc) {
            ctx->pc = 0x3C4250u;
            goto label_3c4250;
        }
    }
    ctx->pc = 0x3C4204u;
    // 0x3c4204: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3c4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3c4208: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c4208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c420c: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c420cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c4210: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c4214: 0x3c022e00  lui         $v0, 0x2E00
    ctx->pc = 0x3c4214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11776 << 16));
    // 0x3c4218: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c4218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c421c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c421cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c4220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4224: 0x9282052e  lbu         $v0, 0x52E($s4)
    ctx->pc = 0x3c4224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c422c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c422cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4230: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4234: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4234u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4238: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4238u;
    SET_GPR_U32(ctx, 31, 0x3C4240u);
    ctx->pc = 0x3C423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4238u;
    // 0x3c423c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4238u, 0x3C4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4240u;
label_3c4240:
    // 0x3c4240: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C4240u;
    SET_GPR_U32(ctx, 31, 0x3C4248u);
    ctx->pc = 0x3C4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4240u;
    // 0x3c4244: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C4240u, 0x3C4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4248u;
label_3c4248:
    // 0x3c4248: 0x100002eb  b           . + 4 + (0x2EB << 2)
    ctx->pc = 0x3C4248u;
    {
        const bool branch_taken_0x3c4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4248) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4250u;
label_3c4250:
    // 0x3c4250: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4254: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x3c4254u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x3c4258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c425c: 0x27a50be0  addiu       $a1, $sp, 0xBE0
    ctx->pc = 0x3c425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x3c4260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4264: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4268: 0x7fa30be0  sq          $v1, 0xBE0($sp)
    ctx->pc = 0x3c4268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3040), GPR_VEC(ctx, 3));
    // 0x3c426c: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3c426cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3c4270: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3c4270u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x3c4274: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4278: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3c4278u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3c427c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3c427cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3c4280: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4284: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c4284u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3c4288: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c4288u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c428c: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c428cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3c4290: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c4290u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c4294: 0x928606ac  lbu         $a2, 0x6AC($s4)
    ctx->pc = 0x3c4294u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x3c4298: 0xc68c06a8  lwc1        $f12, 0x6A8($s4)
    ctx->pc = 0x3c4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c429c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3C429Cu;
    SET_GPR_U32(ctx, 31, 0x3C42A4u);
    ctx->pc = 0x3C42A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C429Cu;
    // 0x3c42a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C429Cu, 0x3C42A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42A4u;
label_3c42a4:
    // 0x3c42a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3c42a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c42a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c42ac: 0xafa20c2c  sw          $v0, 0xC2C($sp)
    ctx->pc = 0x3c42acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3116), GPR_U32(ctx, 2));
    // 0x3c42b0: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3c42b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c42b4: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x3c42b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x3c42b8: 0x27a70bc0  addiu       $a3, $sp, 0xBC0
    ctx->pc = 0x3c42b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3008));
    // 0x3c42bc: 0x27a80bd0  addiu       $t0, $sp, 0xBD0
    ctx->pc = 0x3c42bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3024));
    // 0x3c42c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3c42c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c42c4: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3C42C4u;
    SET_GPR_U32(ctx, 31, 0x3C42CCu);
    ctx->pc = 0x3C42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42C4u;
    // 0x3c42c8: 0x27aa0c2c  addiu       $t2, $sp, 0xC2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 3116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3C42C4u, 0x3C42CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42CCu;
label_3c42cc:
    // 0x3c42cc: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3C42CCu;
    {
        const bool branch_taken_0x3c42cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42CCu;
        // 0x3c42d0: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42cc) {
            ctx->pc = 0x3C4480u;
            goto label_3c4480;
        }
    }
    ctx->pc = 0x3C42D4u;
    // 0x3c42d4: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C42D4u;
    SET_GPR_U32(ctx, 31, 0x3C42DCu);
    ctx->pc = 0x3C42D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42D4u;
    // 0x3c42d8: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C42D4u, 0x3C42DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42DCu;
label_3c42dc:
    // 0x3c42dc: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x3c42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x3c42e0: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C42E0u;
    SET_GPR_U32(ctx, 31, 0x3C42E8u);
    ctx->pc = 0x3C42E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42E0u;
    // 0x3c42e4: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C42E0u, 0x3C42E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42E8u;
label_3c42e8:
    // 0x3c42e8: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x3c42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x3c42ec: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C42ECu;
    SET_GPR_U32(ctx, 31, 0x3C42F4u);
    ctx->pc = 0x3C42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42ECu;
    // 0x3c42f0: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C42ECu, 0x3C42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42F4u;
label_3c42f4:
    // 0x3c42f4: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c42f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c42f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c42f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c42fc: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C42FCu;
    SET_GPR_U32(ctx, 31, 0x3C4304u);
    ctx->pc = 0x3C4300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42FCu;
    // 0x3c4300: 0x27a50380  addiu       $a1, $sp, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C42FCu, 0x3C4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4304u;
label_3c4304:
    // 0x3c4304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4304u;
    {
        const bool branch_taken_0x3c4304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4304u;
        // 0x3c4308: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4304) {
            ctx->pc = 0x3C4318u;
            goto label_3c4318;
        }
    }
    ctx->pc = 0x3C430Cu;
    // 0x3c430c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C430Cu;
    SET_GPR_U32(ctx, 31, 0x3C4314u);
    ctx->pc = 0x3C4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C430Cu;
    // 0x3c4310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C430Cu, 0x3C4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4314u;
label_3c4314:
    // 0x3c4314: 0x0  nop
    ctx->pc = 0x3c4314u;
    // NOP
label_3c4318:
    // 0x3c4318: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c431c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c4320: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c4324: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c4324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c4328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c432c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c432cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c4330: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3c4330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4334: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C4334u;
    {
        const bool branch_taken_0x3c4334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4334u;
        // 0x3c4338: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4334) {
            ctx->pc = 0x3C4410u;
            goto label_3c4410;
        }
    }
    ctx->pc = 0x3C433Cu;
    // 0x3c433c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c433cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4340: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c4340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4344: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c4344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4348: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c4348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c434c: 0x0  nop
    ctx->pc = 0x3c434cu;
    // NOP
label_3c4350:
    // 0x3c4350: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c4350u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4354: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C4354u;
    SET_GPR_U32(ctx, 31, 0x3C435Cu);
    ctx->pc = 0x3C4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4354u;
    // 0x3c4358: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C4354u, 0x3C435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C435Cu;
label_3c435c:
    // 0x3c435c: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c435cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c4360: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c4360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c4364: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c4364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c4368: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c4368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c436c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c4370: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c4370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c4374: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c4374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c4378: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C4378u;
    SET_GPR_U32(ctx, 31, 0x3C4380u);
    ctx->pc = 0x3C437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4378u;
    // 0x3c437c: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C4378u, 0x3C4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4380u;
label_3c4380:
    // 0x3c4380: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c4380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c4384: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x3c4384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3c4388: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C4388u;
    SET_GPR_U32(ctx, 31, 0x3C4390u);
    ctx->pc = 0x3C438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4388u;
    // 0x3c438c: 0x27a60340  addiu       $a2, $sp, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C4388u, 0x3C4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4390u;
label_3c4390:
    // 0x3c4390: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c4390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c4394: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x3c4394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x3c4398: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C4398u;
    SET_GPR_U32(ctx, 31, 0x3C43A0u);
    ctx->pc = 0x3C439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4398u;
    // 0x3c439c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C4398u, 0x3C43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C43A0u;
label_3c43a0:
    // 0x3c43a0: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c43a4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C43A4u;
    SET_GPR_U32(ctx, 31, 0x3C43ACu);
    ctx->pc = 0x3C43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C43A4u;
    // 0x3c43a8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C43A4u, 0x3C43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C43ACu;
label_3c43ac:
    // 0x3c43ac: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c43acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c43b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c43b4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C43B4u;
    SET_GPR_U32(ctx, 31, 0x3C43BCu);
    ctx->pc = 0x3C43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C43B4u;
    // 0x3c43b8: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C43B4u, 0x3C43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C43BCu;
label_3c43bc:
    // 0x3c43bc: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c43bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c43c0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c43c4: 0x8663069e  lh          $v1, 0x69E($s3)
    ctx->pc = 0x3c43c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c43c8: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c43cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c43ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c43d0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c43d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c43d4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c43d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c43d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c43d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c43dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c43e0: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c43e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c43e4: 0x86630696  lh          $v1, 0x696($s3)
    ctx->pc = 0x3c43e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c43e8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c43e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c43ec: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c43ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c43f0: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c43f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c43f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c43f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c43f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c43fc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c43fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c4400: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c4400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4404: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C4404u;
    {
        const bool branch_taken_0x3c4404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4404u;
        // 0x3c4408: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4404) {
            ctx->pc = 0x3C4350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4350;
        }
    }
    ctx->pc = 0x3C440Cu;
    // 0x3c440c: 0x0  nop
    ctx->pc = 0x3c440cu;
    // NOP
label_3c4410:
    // 0x3c4410: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c4410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4414: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4414u;
    SET_GPR_U32(ctx, 31, 0x3C441Cu);
    ctx->pc = 0x3C4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4414u;
    // 0x3c4418: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4414u, 0x3C441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C441Cu;
label_3c441c:
    // 0x3c441c: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c441cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c4420: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c4420u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4424: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3C4424u;
    SET_GPR_U32(ctx, 31, 0x3C442Cu);
    ctx->pc = 0x3C4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4424u;
    // 0x3c4428: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3C4424u, 0x3C442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C442Cu;
label_3c442c:
    // 0x3c442c: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c442cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4430: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c4430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c4434: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3c4434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3c4438: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c4438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c443c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c443cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4440: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3c4440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3c4444: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c4444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c444c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c444cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4450: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4450u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4454: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4454u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4458: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4458u;
    SET_GPR_U32(ctx, 31, 0x3C4460u);
    ctx->pc = 0x3C445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4458u;
    // 0x3c445c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4458u, 0x3C4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4460u;
label_3c4460:
    // 0x3c4460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4464: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4464u;
    SET_GPR_U32(ctx, 31, 0x3C446Cu);
    ctx->pc = 0x3C4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4464u;
    // 0x3c4468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4464u, 0x3C446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C446Cu;
label_3c446c:
    // 0x3c446c: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C446Cu;
    SET_GPR_U32(ctx, 31, 0x3C4474u);
    ctx->pc = 0x3C4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C446Cu;
    // 0x3c4470: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C446Cu, 0x3C4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4474u;
label_3c4474:
    // 0x3c4474: 0x10000260  b           . + 4 + (0x260 << 2)
    ctx->pc = 0x3C4474u;
    {
        const bool branch_taken_0x3c4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4474) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C447Cu;
    // 0x3c447c: 0x0  nop
    ctx->pc = 0x3c447cu;
    // NOP
label_3c4480:
    // 0x3c4480: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c4480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c4484: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4484u;
    {
        const bool branch_taken_0x3c4484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4484u;
        // 0x3c4488: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4484) {
            ctx->pc = 0x3C4498u;
            goto label_3c4498;
        }
    }
    ctx->pc = 0x3C448Cu;
    // 0x3c448c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C448Cu;
    {
        const bool branch_taken_0x3c448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c448c) {
            ctx->pc = 0x3C4518u;
            goto label_3c4518;
        }
    }
    ctx->pc = 0x3C4494u;
    // 0x3c4494: 0x0  nop
    ctx->pc = 0x3c4494u;
    // NOP
label_3c4498:
    // 0x3c4498: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c4498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c449c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c44a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c44a4: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c44a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c44a8: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c44a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c44ac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C44ACu;
    {
        const bool branch_taken_0x3c44ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c44ac) {
            ctx->pc = 0x3C44E8u;
            goto label_3c44e8;
        }
    }
    ctx->pc = 0x3C44B4u;
    // 0x3c44b4: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c44b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c44b8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c44b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c44bc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C44BCu;
    {
        const bool branch_taken_0x3c44bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44BCu;
        // 0x3c44c0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c44bc) {
            ctx->pc = 0x3C4510u;
            goto label_3c4510;
        }
    }
    ctx->pc = 0x3C44C4u;
    // 0x3c44c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c44c8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c44c8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c44cc: 0x0  nop
    ctx->pc = 0x3c44ccu;
    // NOP
    // 0x3c44d0: 0x0  nop
    ctx->pc = 0x3c44d0u;
    // NOP
    // 0x3c44d4: 0x2010  mfhi        $a0
    ctx->pc = 0x3c44d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c44d8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c44d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c44dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C44DCu;
    {
        const bool branch_taken_0x3c44dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44DCu;
        // 0x3c44e0: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c44dc) {
            ctx->pc = 0x3C4510u;
            goto label_3c4510;
        }
    }
    ctx->pc = 0x3C44E4u;
    // 0x3c44e4: 0x0  nop
    ctx->pc = 0x3c44e4u;
    // NOP
label_3c44e8:
    // 0x3c44e8: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c44e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c44ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c44ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c44f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C44F0u;
    {
        const bool branch_taken_0x3c44f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c44f0) {
            ctx->pc = 0x3C4510u;
            goto label_3c4510;
        }
    }
    ctx->pc = 0x3C44F8u;
    // 0x3c44f8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c44f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c44fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4500: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c4500u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c4504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4504u;
    {
        const bool branch_taken_0x3c4504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4504u;
        // 0x3c4508: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4504) {
            ctx->pc = 0x3C4518u;
            goto label_3c4518;
        }
    }
    ctx->pc = 0x3C450Cu;
    // 0x3c450c: 0x0  nop
    ctx->pc = 0x3c450cu;
    // NOP
label_3c4510:
    // 0x3c4510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4514: 0x0  nop
    ctx->pc = 0x3c4514u;
    // NOP
label_3c4518:
    // 0x3c4518: 0x14600237  bnez        $v1, . + 4 + (0x237 << 2)
    ctx->pc = 0x3C4518u;
    {
        const bool branch_taken_0x3c4518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4518u;
        // 0x3c451c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4518) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4520u;
    // 0x3c4520: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4520u;
    SET_GPR_U32(ctx, 31, 0x3C4528u);
    ctx->pc = 0x3C4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4520u;
    // 0x3c4524: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4520u, 0x3C4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4528u;
label_3c4528:
    // 0x3c4528: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c4528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c452c: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c452cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4530: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3C4530u;
    SET_GPR_U32(ctx, 31, 0x3C4538u);
    ctx->pc = 0x3C4534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4530u;
    // 0x3c4534: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3C4530u, 0x3C4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4538u;
label_3c4538:
    // 0x3c4538: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c4538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c453c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c453cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c4540: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3c4540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3c4544: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c4544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c4548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c454c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3c454cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3c4550: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c4550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c455c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c455cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4560: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4560u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4564: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4564u;
    SET_GPR_U32(ctx, 31, 0x3C456Cu);
    ctx->pc = 0x3C4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4564u;
    // 0x3c4568: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4564u, 0x3C456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C456Cu;
label_3c456c:
    // 0x3c456c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4570: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4570u;
    SET_GPR_U32(ctx, 31, 0x3C4578u);
    ctx->pc = 0x3C4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4570u;
    // 0x3c4574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4570u, 0x3C4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4578u;
label_3c4578:
    // 0x3c4578: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3C4578u;
    SET_GPR_U32(ctx, 31, 0x3C4580u);
    ctx->pc = 0x3C457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4578u;
    // 0x3c457c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3C4578u, 0x3C4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4580u;
label_3c4580:
    // 0x3c4580: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x3C4580u;
    {
        const bool branch_taken_0x3c4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4580) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4588u;
label_3c4588:
    // 0x3c4588: 0x86830528  lh          $v1, 0x528($s4)
    ctx->pc = 0x3c4588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1320)));
    // 0x3c458c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3c458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3c4590: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c4590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c4594: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x3c4594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4598: 0xa6830512  sh          $v1, 0x512($s4)
    ctx->pc = 0x3c4598u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c459c: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c459cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c45a0: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c45a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c45a4: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c45a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c45a8: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3c45a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c45ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c45acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c45b0: 0xa2830521  sb          $v1, 0x521($s4)
    ctx->pc = 0x3c45b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c45b4: 0xa28206ac  sb          $v0, 0x6AC($s4)
    ctx->pc = 0x3c45b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1708), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c45b8: 0xa28006b4  sb          $zero, 0x6B4($s4)
    ctx->pc = 0x3c45b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1716), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c45bc: 0x8ec2004c  lw          $v0, 0x4C($s6)
    ctx->pc = 0x3c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
    // 0x3c45c0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c45c4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3C45C4u;
    SET_GPR_U32(ctx, 31, 0x3C45CCu);
    ctx->pc = 0x3C45C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45C4u;
    // 0x3c45c8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3C45C4u, 0x3C45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45CCu;
label_3c45cc:
    // 0x3c45cc: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c45d0: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3C45D0u;
    SET_GPR_U32(ctx, 31, 0x3C45D8u);
    ctx->pc = 0x3C45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45D0u;
    // 0x3c45d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3C45D0u, 0x3C45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45D8u;
label_3c45d8:
    // 0x3c45d8: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c45d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c45dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c45e0: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3c45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c45e4: 0x24422dcc  addiu       $v0, $v0, 0x2DCC
    ctx->pc = 0x3c45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11724));
    // 0x3c45e8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c45ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c45f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c45f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c45f4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3C45F4u;
    SET_GPR_U32(ctx, 31, 0x3C45FCu);
    ctx->pc = 0x3C45F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45F4u;
    // 0x3c45f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3C45F4u, 0x3C45FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45FCu;
label_3c45fc:
    // 0x3c45fc: 0x0  nop
    ctx->pc = 0x3c45fcu;
    // NOP
label_3c4600:
    // 0x3c4600: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c4604: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3c4604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3c4608: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3c4608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c460c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c460cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c4610: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x3c4610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3c4614: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3c4614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c4618: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c4618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c461c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3C461Cu;
    SET_GPR_U32(ctx, 31, 0x3C4624u);
    ctx->pc = 0x3C4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C461Cu;
    // 0x3c4620: 0x268600a0  addiu       $a2, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3C461Cu, 0x3C4624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4624u;
label_3c4624:
    // 0x3c4624: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3c4624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3c4628: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C4628u;
    SET_GPR_U32(ctx, 31, 0x3C4630u);
    ctx->pc = 0x3C462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4628u;
    // 0x3c462c: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C4628u, 0x3C4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4630u;
label_3c4630:
    // 0x3c4630: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x3c4630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x3c4634: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C4634u;
    SET_GPR_U32(ctx, 31, 0x3C463Cu);
    ctx->pc = 0x3C4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4634u;
    // 0x3c4638: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C4634u, 0x3C463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C463Cu;
label_3c463c:
    // 0x3c463c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x3c463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x3c4640: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C4640u;
    SET_GPR_U32(ctx, 31, 0x3C4648u);
    ctx->pc = 0x3C4644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4640u;
    // 0x3c4644: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C4640u, 0x3C4648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4648u;
label_3c4648:
    // 0x3c4648: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c4648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c464c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4650: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C4650u;
    SET_GPR_U32(ctx, 31, 0x3C4658u);
    ctx->pc = 0x3C4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4650u;
    // 0x3c4654: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C4650u, 0x3C4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4658u;
label_3c4658:
    // 0x3c4658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4658u;
    {
        const bool branch_taken_0x3c4658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4658u;
        // 0x3c465c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4658) {
            ctx->pc = 0x3C4668u;
            goto label_3c4668;
        }
    }
    ctx->pc = 0x3C4660u;
    // 0x3c4660: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4660u;
    SET_GPR_U32(ctx, 31, 0x3C4668u);
    ctx->pc = 0x3C4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4660u;
    // 0x3c4664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4660u, 0x3C4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4668u;
label_3c4668:
    // 0x3c4668: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c466c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c4670: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c4674: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c4674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c4678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c467c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c467cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c4680: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3c4680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4684: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C4684u;
    {
        const bool branch_taken_0x3c4684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4684u;
        // 0x3c4688: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4684) {
            ctx->pc = 0x3C4760u;
            goto label_3c4760;
        }
    }
    ctx->pc = 0x3C468Cu;
    // 0x3c468c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c468cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c4690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4694: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c4694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4698: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c4698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c469c: 0x0  nop
    ctx->pc = 0x3c469cu;
    // NOP
label_3c46a0:
    // 0x3c46a0: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c46a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c46a4: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C46A4u;
    SET_GPR_U32(ctx, 31, 0x3C46ACu);
    ctx->pc = 0x3C46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46A4u;
    // 0x3c46a8: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C46A4u, 0x3C46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46ACu;
label_3c46ac:
    // 0x3c46ac: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c46acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c46b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c46b4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c46b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c46bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c46c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c46c4: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c46c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c46c8: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C46C8u;
    SET_GPR_U32(ctx, 31, 0x3C46D0u);
    ctx->pc = 0x3C46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46C8u;
    // 0x3c46cc: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C46C8u, 0x3C46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46D0u;
label_3c46d0:
    // 0x3c46d0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c46d4: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3c46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3c46d8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C46D8u;
    SET_GPR_U32(ctx, 31, 0x3C46E0u);
    ctx->pc = 0x3C46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46D8u;
    // 0x3c46dc: 0x27a60240  addiu       $a2, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C46D8u, 0x3C46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46E0u;
label_3c46e0:
    // 0x3c46e0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c46e4: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x3c46e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3c46e8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C46E8u;
    SET_GPR_U32(ctx, 31, 0x3C46F0u);
    ctx->pc = 0x3C46ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46E8u;
    // 0x3c46ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C46E8u, 0x3C46F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46F0u;
label_3c46f0:
    // 0x3c46f0: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c46f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c46f4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C46F4u;
    SET_GPR_U32(ctx, 31, 0x3C46FCu);
    ctx->pc = 0x3C46F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46F4u;
    // 0x3c46f8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C46F4u, 0x3C46FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46FCu;
label_3c46fc:
    // 0x3c46fc: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c46fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c4700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4704: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C4704u;
    SET_GPR_U32(ctx, 31, 0x3C470Cu);
    ctx->pc = 0x3C4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4704u;
    // 0x3c4708: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C4704u, 0x3C470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C470Cu;
label_3c470c:
    // 0x3c470c: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c470cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4710: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c4710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c4714: 0x8663069e  lh          $v1, 0x69E($s3)
    ctx->pc = 0x3c4714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c4718: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c471c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c471cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c4720: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c4720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c4724: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c4724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c4728: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c4728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c472c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c4730: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c4730u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c4734: 0x86630696  lh          $v1, 0x696($s3)
    ctx->pc = 0x3c4734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4738: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c4738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c473c: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c473cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c4740: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c4744: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c4744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c4748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c474c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c474cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c4750: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c4750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4754: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C4754u;
    {
        const bool branch_taken_0x3c4754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4754u;
        // 0x3c4758: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4754) {
            ctx->pc = 0x3C46A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c46a0;
        }
    }
    ctx->pc = 0x3C475Cu;
    // 0x3c475c: 0x0  nop
    ctx->pc = 0x3c475cu;
    // NOP
label_3c4760:
    // 0x3c4760: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4764: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c4764u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3c4768: 0x27aa0c10  addiu       $t2, $sp, 0xC10
    ctx->pc = 0x3c4768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x3c476c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c476cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4770: 0x27a50be0  addiu       $a1, $sp, 0xBE0
    ctx->pc = 0x3c4770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x3c4774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4778: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c477c: 0x7fa90be0  sq          $t1, 0xBE0($sp)
    ctx->pc = 0x3c477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3040), GPR_VEC(ctx, 9));
    // 0x3c4780: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c4780u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3c4784: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4788: 0x7fa60bf0  sq          $a2, 0xBF0($sp)
    ctx->pc = 0x3c4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3056), GPR_VEC(ctx, 6));
    // 0x3c478c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c478cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3c4790: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4794: 0x7fa30c00  sq          $v1, 0xC00($sp)
    ctx->pc = 0x3c4794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3072), GPR_VEC(ctx, 3));
    // 0x3c4798: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c4798u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3c479c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c479cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3c47a0: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c47a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3c47a4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3c47a4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3c47a8: 0x928606ac  lbu         $a2, 0x6AC($s4)
    ctx->pc = 0x3c47a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x3c47ac: 0xc68c06a8  lwc1        $f12, 0x6A8($s4)
    ctx->pc = 0x3c47acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c47b0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3C47B0u;
    SET_GPR_U32(ctx, 31, 0x3C47B8u);
    ctx->pc = 0x3C47B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47B0u;
    // 0x3c47b4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C47B0u, 0x3C47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C47B8u;
label_3c47b8:
    // 0x3c47b8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3C47B8u;
    {
        const bool branch_taken_0x3c47b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c47b8) {
            ctx->pc = 0x3C4850u;
            goto label_3c4850;
        }
    }
    ctx->pc = 0x3C47C0u;
    // 0x3c47c0: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x3c47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3c47c4: 0x268401c0  addiu       $a0, $s4, 0x1C0
    ctx->pc = 0x3c47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x3c47c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c47c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c47cc: 0xc097184  jal         func_25C610
    ctx->pc = 0x3C47CCu;
    SET_GPR_U32(ctx, 31, 0x3C47D4u);
    ctx->pc = 0x3C47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47CCu;
    // 0x3c47d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x3C47CCu, 0x3C47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C47D4u;
label_3c47d4:
    // 0x3c47d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C47D4u;
    {
        const bool branch_taken_0x3c47d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c47d4) {
            ctx->pc = 0x3C4850u;
            goto label_3c4850;
        }
    }
    ctx->pc = 0x3C47DCu;
    // 0x3c47dc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3c47dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3c47e0: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x3c47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3c47e4: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C47E4u;
    {
        const bool branch_taken_0x3c47e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47E4u;
        // 0x3c47e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c47e4) {
            ctx->pc = 0x3C4850u;
            goto label_3c4850;
        }
    }
    ctx->pc = 0x3C47ECu;
    // 0x3c47ec: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C47ECu;
    SET_GPR_U32(ctx, 31, 0x3C47F4u);
    ctx->pc = 0x3C47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47ECu;
    // 0x3c47f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C47ECu, 0x3C47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C47F4u;
label_3c47f4:
    // 0x3c47f4: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c47f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c47f8: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c47f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c47fc: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3C47FCu;
    SET_GPR_U32(ctx, 31, 0x3C4804u);
    ctx->pc = 0x3C4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47FCu;
    // 0x3c4800: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3C47FCu, 0x3C4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4804u;
label_3c4804:
    // 0x3c4804: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c4804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4808: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c4808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c480c: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3c480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3c4810: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c4810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c4814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4818: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3c4818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3c481c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c481cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4828: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c482c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c482cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4830: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4830u;
    SET_GPR_U32(ctx, 31, 0x3C4838u);
    ctx->pc = 0x3C4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4830u;
    // 0x3c4834: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4830u, 0x3C4838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4838u;
label_3c4838:
    // 0x3c4838: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c483c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C483Cu;
    SET_GPR_U32(ctx, 31, 0x3C4844u);
    ctx->pc = 0x3C4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C483Cu;
    // 0x3c4840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C483Cu, 0x3C4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4844u;
label_3c4844:
    // 0x3c4844: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x3C4844u;
    {
        const bool branch_taken_0x3c4844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4844) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C484Cu;
    // 0x3c484c: 0x0  nop
    ctx->pc = 0x3c484cu;
    // NOP
label_3c4850:
    // 0x3c4850: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3c4854: 0xafa20c2c  sw          $v0, 0xC2C($sp)
    ctx->pc = 0x3c4854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3116), GPR_U32(ctx, 2));
    // 0x3c4858: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c485c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3c485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4860: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x3c4860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x3c4864: 0x27a70bc0  addiu       $a3, $sp, 0xBC0
    ctx->pc = 0x3c4864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3008));
    // 0x3c4868: 0x27a80bd0  addiu       $t0, $sp, 0xBD0
    ctx->pc = 0x3c4868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3024));
    // 0x3c486c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3c486cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4870: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3C4870u;
    SET_GPR_U32(ctx, 31, 0x3C4878u);
    ctx->pc = 0x3C4874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4870u;
    // 0x3c4874: 0x27aa0c2c  addiu       $t2, $sp, 0xC2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 3116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3C4870u, 0x3C4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4878u;
label_3c4878:
    // 0x3c4878: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x3C4878u;
    {
        const bool branch_taken_0x3c4878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4878u;
        // 0x3c487c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4878) {
            ctx->pc = 0x3C4A20u;
            goto label_3c4a20;
        }
    }
    ctx->pc = 0x3C4880u;
    // 0x3c4880: 0xc07658c  jal         func_1D9630
    ctx->pc = 0x3C4880u;
    SET_GPR_U32(ctx, 31, 0x3C4888u);
    ctx->pc = 0x3C4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4880u;
    // 0x3c4884: 0x268500c0  addiu       $a1, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9630u, 0x3C4880u, 0x3C4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4888u;
label_3c4888:
    // 0x3c4888: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3c4888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3c488c: 0xc0bfa2c  jal         func_2FE8B0
    ctx->pc = 0x3C488Cu;
    SET_GPR_U32(ctx, 31, 0x3C4894u);
    ctx->pc = 0x3C4890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C488Cu;
    // 0x3c4890: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8B0u, 0x3C488Cu, 0x3C4894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4894u;
label_3c4894:
    // 0x3c4894: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3c4894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3c4898: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C4898u;
    SET_GPR_U32(ctx, 31, 0x3C48A0u);
    ctx->pc = 0x3C489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4898u;
    // 0x3c489c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C4898u, 0x3C48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48A0u;
label_3c48a0:
    // 0x3c48a0: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c48a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c48a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c48a8: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C48A8u;
    SET_GPR_U32(ctx, 31, 0x3C48B0u);
    ctx->pc = 0x3C48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48A8u;
    // 0x3c48ac: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C48A8u, 0x3C48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48B0u;
label_3c48b0:
    // 0x3c48b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C48B0u;
    {
        const bool branch_taken_0x3c48b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48B0u;
        // 0x3c48b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c48b0) {
            ctx->pc = 0x3C48C0u;
            goto label_3c48c0;
        }
    }
    ctx->pc = 0x3C48B8u;
    // 0x3c48b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C48B8u;
    SET_GPR_U32(ctx, 31, 0x3C48C0u);
    ctx->pc = 0x3C48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48B8u;
    // 0x3c48bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C48B8u, 0x3C48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48C0u;
label_3c48c0:
    // 0x3c48c0: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c48c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c48c4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c48c8: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c48cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c48d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c48d4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c48d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c48d8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3c48d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c48dc: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x3C48DCu;
    {
        const bool branch_taken_0x3c48dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48DCu;
        // 0x3c48e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c48dc) {
            ctx->pc = 0x3C49B8u;
            goto label_3c49b8;
        }
    }
    ctx->pc = 0x3C48E4u;
    // 0x3c48e4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3c48e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c48e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c48e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c48ec: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c48ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c48f0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3c48f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c48f4: 0x0  nop
    ctx->pc = 0x3c48f4u;
    // NOP
label_3c48f8:
    // 0x3c48f8: 0x86650696  lh          $a1, 0x696($s3)
    ctx->pc = 0x3c48f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c48fc: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x3C48FCu;
    SET_GPR_U32(ctx, 31, 0x3C4904u);
    ctx->pc = 0x3C4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48FCu;
    // 0x3c4900: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x3C48FCu, 0x3C4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4904u;
label_3c4904:
    // 0x3c4904: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c4908: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c4908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c490c: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c4910: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c4910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c4914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c4918: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c491c: 0x84450010  lh          $a1, 0x10($v0)
    ctx->pc = 0x3c491cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c4920: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3C4920u;
    SET_GPR_U32(ctx, 31, 0x3C4928u);
    ctx->pc = 0x3C4924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4920u;
    // 0x3c4924: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3C4920u, 0x3C4928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4928u;
label_3c4928:
    // 0x3c4928: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c4928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c492c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3c492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3c4930: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C4930u;
    SET_GPR_U32(ctx, 31, 0x3C4938u);
    ctx->pc = 0x3C4934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4930u;
    // 0x3c4934: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C4930u, 0x3C4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4938u;
label_3c4938:
    // 0x3c4938: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3c4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3c493c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3c493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3c4940: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3C4940u;
    SET_GPR_U32(ctx, 31, 0x3C4948u);
    ctx->pc = 0x3C4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4940u;
    // 0x3c4944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3C4940u, 0x3C4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4948u;
label_3c4948:
    // 0x3c4948: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c4948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c494c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3C494Cu;
    SET_GPR_U32(ctx, 31, 0x3C4954u);
    ctx->pc = 0x3C4950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C494Cu;
    // 0x3c4950: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3C494Cu, 0x3C4954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4954u;
label_3c4954:
    // 0x3c4954: 0x8e060660  lw          $a2, 0x660($s0)
    ctx->pc = 0x3c4954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x3c4958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c495c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C495Cu;
    SET_GPR_U32(ctx, 31, 0x3C4964u);
    ctx->pc = 0x3C4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C495Cu;
    // 0x3c4960: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C495Cu, 0x3C4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4964u;
label_3c4964:
    // 0x3c4964: 0x86640696  lh          $a0, 0x696($s3)
    ctx->pc = 0x3c4964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4968: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c4968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c496c: 0x8663069e  lh          $v1, 0x69E($s3)
    ctx->pc = 0x3c496cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1694)));
    // 0x3c4970: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x3c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x3c4974: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c4974u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c4978: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c4978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3c497c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x3c497cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c4980: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c4980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3c4984: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c4984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c4988: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c4988u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c498c: 0x86630696  lh          $v1, 0x696($s3)
    ctx->pc = 0x3c498cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1686)));
    // 0x3c4990: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c4990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c4994: 0xa6630696  sh          $v1, 0x696($s3)
    ctx->pc = 0x3c4994u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1686), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c4998: 0x928306b5  lbu         $v1, 0x6B5($s4)
    ctx->pc = 0x3c4998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1717)));
    // 0x3c499c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c499cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c49a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c49a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3c49a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c49a8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c49a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c49ac: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3C49ACu;
    {
        const bool branch_taken_0x3c49ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49ACu;
        // 0x3c49b0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c49ac) {
            ctx->pc = 0x3C48F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c48f8;
        }
    }
    ctx->pc = 0x3C49B4u;
    // 0x3c49b4: 0x0  nop
    ctx->pc = 0x3c49b4u;
    // NOP
label_3c49b8:
    // 0x3c49b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c49b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c49bc: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C49BCu;
    SET_GPR_U32(ctx, 31, 0x3C49C4u);
    ctx->pc = 0x3C49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C49BCu;
    // 0x3c49c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C49BCu, 0x3C49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C49C4u;
label_3c49c4:
    // 0x3c49c4: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c49c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c49c8: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c49c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c49cc: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3C49CCu;
    SET_GPR_U32(ctx, 31, 0x3C49D4u);
    ctx->pc = 0x3C49D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C49CCu;
    // 0x3c49d0: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3C49CCu, 0x3C49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C49D4u;
label_3c49d4:
    // 0x3c49d4: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c49d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c49d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c49dc: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3c49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3c49e0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c49e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c49e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c49e8: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3c49e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3c49ec: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c49ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c49f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c49f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c49f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c49f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c49f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c49f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c49fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c49fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4a00: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4A00u;
    SET_GPR_U32(ctx, 31, 0x3C4A08u);
    ctx->pc = 0x3C4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4A00u;
    // 0x3c4a04: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4A00u, 0x3C4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4A08u;
label_3c4a08:
    // 0x3c4a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4a0c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4A0Cu;
    SET_GPR_U32(ctx, 31, 0x3C4A14u);
    ctx->pc = 0x3C4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4A0Cu;
    // 0x3c4a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4A0Cu, 0x3C4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4A14u;
label_3c4a14:
    // 0x3c4a14: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3C4A14u;
    {
        const bool branch_taken_0x3c4a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4a14) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4A1Cu;
    // 0x3c4a1c: 0x0  nop
    ctx->pc = 0x3c4a1cu;
    // NOP
label_3c4a20:
    // 0x3c4a20: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c4a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c4a24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4A24u;
    {
        const bool branch_taken_0x3c4a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A24u;
        // 0x3c4a28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a24) {
            ctx->pc = 0x3C4A38u;
            goto label_3c4a38;
        }
    }
    ctx->pc = 0x3C4A2Cu;
    // 0x3c4a2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C4A2Cu;
    {
        const bool branch_taken_0x3c4a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4a2c) {
            ctx->pc = 0x3C4AB8u;
            goto label_3c4ab8;
        }
    }
    ctx->pc = 0x3C4A34u;
    // 0x3c4a34: 0x0  nop
    ctx->pc = 0x3c4a34u;
    // NOP
label_3c4a38:
    // 0x3c4a38: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c4a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4a3c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c4a40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c4a44: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c4a44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4a48: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c4a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c4a4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C4A4Cu;
    {
        const bool branch_taken_0x3c4a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c4a4c) {
            ctx->pc = 0x3C4A88u;
            goto label_3c4a88;
        }
    }
    ctx->pc = 0x3C4A54u;
    // 0x3c4a54: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c4a54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4a58: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c4a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c4a5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C4A5Cu;
    {
        const bool branch_taken_0x3c4a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A5Cu;
        // 0x3c4a60: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a5c) {
            ctx->pc = 0x3C4AB0u;
            goto label_3c4ab0;
        }
    }
    ctx->pc = 0x3C4A64u;
    // 0x3c4a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4a68: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c4a68u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c4a6c: 0x0  nop
    ctx->pc = 0x3c4a6cu;
    // NOP
    // 0x3c4a70: 0x0  nop
    ctx->pc = 0x3c4a70u;
    // NOP
    // 0x3c4a74: 0x2010  mfhi        $a0
    ctx->pc = 0x3c4a74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c4a78: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c4a78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4a7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C4A7Cu;
    {
        const bool branch_taken_0x3c4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A7Cu;
        // 0x3c4a80: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a7c) {
            ctx->pc = 0x3C4AB0u;
            goto label_3c4ab0;
        }
    }
    ctx->pc = 0x3C4A84u;
    // 0x3c4a84: 0x0  nop
    ctx->pc = 0x3c4a84u;
    // NOP
label_3c4a88:
    // 0x3c4a88: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c4a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4a8c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c4a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c4a90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4A90u;
    {
        const bool branch_taken_0x3c4a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4a90) {
            ctx->pc = 0x3C4AB0u;
            goto label_3c4ab0;
        }
    }
    ctx->pc = 0x3C4A98u;
    // 0x3c4a98: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c4a98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4aa0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c4aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c4aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4AA4u;
    {
        const bool branch_taken_0x3c4aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AA4u;
        // 0x3c4aa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4aa4) {
            ctx->pc = 0x3C4AB8u;
            goto label_3c4ab8;
        }
    }
    ctx->pc = 0x3C4AACu;
    // 0x3c4aac: 0x0  nop
    ctx->pc = 0x3c4aacu;
    // NOP
label_3c4ab0:
    // 0x3c4ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4ab4: 0x0  nop
    ctx->pc = 0x3c4ab4u;
    // NOP
label_3c4ab8:
    // 0x3c4ab8: 0x146000cf  bnez        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x3C4AB8u;
    {
        const bool branch_taken_0x3c4ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AB8u;
        // 0x3c4abc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ab8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4AC0u;
    // 0x3c4ac0: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4AC0u;
    SET_GPR_U32(ctx, 31, 0x3C4AC8u);
    ctx->pc = 0x3C4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4AC0u;
    // 0x3c4ac4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4AC0u, 0x3C4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4AC8u;
label_3c4ac8:
    // 0x3c4ac8: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c4ac8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c4acc: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c4accu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4ad0: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3C4AD0u;
    SET_GPR_U32(ctx, 31, 0x3C4AD8u);
    ctx->pc = 0x3C4AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4AD0u;
    // 0x3c4ad4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3C4AD0u, 0x3C4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4AD8u;
label_3c4ad8:
    // 0x3c4ad8: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c4ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4adc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c4ae0: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3c4ae4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c4ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c4ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4aec: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3c4aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3c4af0: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c4af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4af8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4af8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4afc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4afcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4b00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4b00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4b04: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4B04u;
    SET_GPR_U32(ctx, 31, 0x3C4B0Cu);
    ctx->pc = 0x3C4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B04u;
    // 0x3c4b08: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4B04u, 0x3C4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B0Cu;
label_3c4b0c:
    // 0x3c4b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4b10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4B10u;
    SET_GPR_U32(ctx, 31, 0x3C4B18u);
    ctx->pc = 0x3C4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B10u;
    // 0x3c4b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4B10u, 0x3C4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B18u;
label_3c4b18:
    // 0x3c4b18: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x3C4B18u;
    {
        const bool branch_taken_0x3c4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4b18) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4B20u;
label_3c4b20:
    // 0x3c4b20: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3c4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3c4b24: 0xa28206ac  sb          $v0, 0x6AC($s4)
    ctx->pc = 0x3c4b24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1708), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c4b28: 0xa28006b4  sb          $zero, 0x6B4($s4)
    ctx->pc = 0x3c4b28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1716), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c4b2c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3C4B2Cu;
    SET_GPR_U32(ctx, 31, 0x3C4B34u);
    ctx->pc = 0x3C4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B2Cu;
    // 0x3c4b30: 0x8e840550  lw          $a0, 0x550($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3C4B2Cu, 0x3C4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B34u;
label_3c4b34:
    // 0x3c4b34: 0xae800550  sw          $zero, 0x550($s4)
    ctx->pc = 0x3c4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 0));
    // 0x3c4b38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c4b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4b3c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c4b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b40:
    // 0x3c4b40: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3C4B40u;
    SET_GPR_U32(ctx, 31, 0x3C4B48u);
    ctx->pc = 0x3C4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4B40u;
    // 0x3c4b44: 0x8e240660  lw          $a0, 0x660($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3C4B40u, 0x3C4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4B48u;
label_3c4b48:
    // 0x3c4b48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c4b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c4b4c: 0xae200660  sw          $zero, 0x660($s1)
    ctx->pc = 0x3c4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 0));
    // 0x3c4b50: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3c4b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c4b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C4B54u;
    {
        const bool branch_taken_0x3c4b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B54u;
        // 0x3c4b58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b54) {
            ctx->pc = 0x3C4B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4b40;
        }
    }
    ctx->pc = 0x3C4B5Cu;
    // 0x3c4b5c: 0x12c0003a  beqz        $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x3C4B5Cu;
    {
        const bool branch_taken_0x3c4b5c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4b5c) {
            ctx->pc = 0x3C4C48u;
            goto label_3c4c48;
        }
    }
    ctx->pc = 0x3C4B64u;
    // 0x3c4b64: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c4b68: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x3c4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x3c4b6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c4b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c4b70: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c4b74: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3c4b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3c4b78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c4b7c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c4b7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c4b80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c4b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c4b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c4b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c4b88: 0x0  nop
    ctx->pc = 0x3c4b88u;
    // NOP
    // 0x3c4b8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c4b8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c4b90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c4b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c4b94: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4B94u;
    {
        const bool branch_taken_0x3c4b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c4b94) {
            ctx->pc = 0x3C4BACu;
            goto label_3c4bac;
        }
    }
    ctx->pc = 0x3C4B9Cu;
    // 0x3c4b9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c4b9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c4ba0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c4ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c4ba4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4BA4u;
    {
        const bool branch_taken_0x3c4ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4ba4) {
            ctx->pc = 0x3C4BC4u;
            goto label_3c4bc4;
        }
    }
    ctx->pc = 0x3C4BACu;
label_3c4bac:
    // 0x3c4bac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c4bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c4bb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c4bb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c4bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c4bb8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3c4bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c4bbc: 0x0  nop
    ctx->pc = 0x3c4bbcu;
    // NOP
    // 0x3c4bc0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3c4bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3c4bc4:
    // 0x3c4bc4: 0xc0ad00c  jal         func_2B4030
    ctx->pc = 0x3C4BC4u;
    SET_GPR_U32(ctx, 31, 0x3C4BCCu);
    ctx->pc = 0x2B4030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4030u, 0x3C4BC4u, 0x3C4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4BCCu;
label_3c4bcc:
    // 0x3c4bcc: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x3c4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x3c4bd0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3c4bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3c4bd4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3c4bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c4bd8: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3C4BD8u;
    SET_GPR_U32(ctx, 31, 0x3C4BE0u);
    ctx->pc = 0x3C4BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4BD8u;
    // 0x3c4bdc: 0x26870020  addiu       $a3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3C4BD8u, 0x3C4BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4BE0u;
label_3c4be0:
    // 0x3c4be0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3c4be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c4be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4be8: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x3c4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x3c4bec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3c4becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3c4bf0: 0x24070f00  addiu       $a3, $zero, 0xF00
    ctx->pc = 0x3c4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x3c4bf4: 0xc052214  jal         func_148850
    ctx->pc = 0x3C4BF4u;
    SET_GPR_U32(ctx, 31, 0x3C4BFCu);
    ctx->pc = 0x3C4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4BF4u;
    // 0x3c4bf8: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x3C4BF4u, 0x3C4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4BFCu;
label_3c4bfc:
    // 0x3c4bfc: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3c4bfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3c4c00: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3c4c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4c04: 0xc0aa4a0  jal         func_2A9280
    ctx->pc = 0x3C4C04u;
    SET_GPR_U32(ctx, 31, 0x3C4C0Cu);
    ctx->pc = 0x3C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C04u;
    // 0x3c4c08: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9280u, 0x3C4C04u, 0x3C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C0Cu;
label_3c4c0c:
    // 0x3c4c0c: 0xae820550  sw          $v0, 0x550($s4)
    ctx->pc = 0x3c4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 2));
    // 0x3c4c10: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3c4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3c4c14: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3c4c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3c4c18: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x3c4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x3c4c1c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3c4c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3c4c20: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3c4c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3c4c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c28: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3c4c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3c4c2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4c30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4c38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c3c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3C4C3Cu;
    SET_GPR_U32(ctx, 31, 0x3C4C44u);
    ctx->pc = 0x3C4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C3Cu;
    // 0x3c4c40: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3C4C3Cu, 0x3C4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C44u;
label_3c4c44:
    // 0x3c4c44: 0x0  nop
    ctx->pc = 0x3c4c44u;
    // NOP
label_3c4c48:
    // 0x3c4c48: 0x8682052a  lh          $v0, 0x52A($s4)
    ctx->pc = 0x3c4c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1322)));
    // 0x3c4c4c: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3c4c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c4c50: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3c4c50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c4c54: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3c4c54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c4c58: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3c4c58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c4c5c: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3c4c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3c4c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c4c64: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3c4c64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3c4c68:
    // 0x3c4c68: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x3c4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x3c4c6c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3c4c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3c4c70: 0x27a40be0  addiu       $a0, $sp, 0xBE0
    ctx->pc = 0x3c4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x3c4c74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c4c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c4c78: 0x0  nop
    ctx->pc = 0x3c4c78u;
    // NOP
    // 0x3c4c7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3c4c7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3c4c80: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x3C4C80u;
    SET_GPR_U32(ctx, 31, 0x3C4C88u);
    ctx->pc = 0x3C4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C80u;
    // 0x3c4c84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x3C4C80u, 0x3C4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C88u;
label_3c4c88:
    // 0x3c4c88: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c4c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3c4c8c: 0x27b00c10  addiu       $s0, $sp, 0xC10
    ctx->pc = 0x3c4c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x3c4c90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c94: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c4c94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c4c98: 0x8e860550  lw          $a2, 0x550($s4)
    ctx->pc = 0x3c4c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x3c4c9c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3C4C9Cu;
    SET_GPR_U32(ctx, 31, 0x3C4CA4u);
    ctx->pc = 0x3C4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C9Cu;
    // 0x3c4ca0: 0x27a50be0  addiu       $a1, $sp, 0xBE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3C4C9Cu, 0x3C4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CA4u;
label_3c4ca4:
    // 0x3c4ca4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4CA4u;
    {
        const bool branch_taken_0x3c4ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CA4u;
        // 0x3c4ca8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ca4) {
            ctx->pc = 0x3C4CC0u;
            goto label_3c4cc0;
        }
    }
    ctx->pc = 0x3C4CACu;
    // 0x3c4cac: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4CACu;
    SET_GPR_U32(ctx, 31, 0x3C4CB4u);
    ctx->pc = 0x3C4CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CACu;
    // 0x3c4cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4CACu, 0x3C4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CB4u;
label_3c4cb4:
    // 0x3c4cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4cb8: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4CB8u;
    SET_GPR_U32(ctx, 31, 0x3C4CC0u);
    ctx->pc = 0x3C4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CB8u;
    // 0x3c4cbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4CB8u, 0x3C4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CC0u;
label_3c4cc0:
    // 0x3c4cc0: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c4cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4cc4: 0x460001e  bltz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C4CC4u;
    {
        const bool branch_taken_0x3c4cc4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3C4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CC4u;
        // 0x3c4cc8: 0x2861005b  slti        $at, $v1, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cc4) {
            ctx->pc = 0x3C4D40u;
            goto label_3c4d40;
        }
    }
    ctx->pc = 0x3C4CCCu;
    // 0x3c4ccc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C4CCCu;
    {
        const bool branch_taken_0x3c4ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4ccc) {
            ctx->pc = 0x3C4D40u;
            goto label_3c4d40;
        }
    }
    ctx->pc = 0x3C4CD4u;
    // 0x3c4cd4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4cd8: 0x3c023f93  lui         $v0, 0x3F93
    ctx->pc = 0x3c4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16275 << 16));
    // 0x3c4cdc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3c4cdcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3c4ce0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3c4ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3c4ce4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c4ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c4ce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4cec: 0x27a50be0  addiu       $a1, $sp, 0xBE0
    ctx->pc = 0x3c4cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x3c4cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4cf4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4cf8: 0x7fa90be0  sq          $t1, 0xBE0($sp)
    ctx->pc = 0x3c4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3040), GPR_VEC(ctx, 9));
    // 0x3c4cfc: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3c4cfcu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3c4d00: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4d04: 0x7fa60bf0  sq          $a2, 0xBF0($sp)
    ctx->pc = 0x3c4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3056), GPR_VEC(ctx, 6));
    // 0x3c4d08: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3c4d08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3c4d0c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c4d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c4d10: 0x7fa30c00  sq          $v1, 0xC00($sp)
    ctx->pc = 0x3c4d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3072), GPR_VEC(ctx, 3));
    // 0x3c4d14: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3c4d14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3c4d18: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c4d18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c4d1c: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3c4d1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3c4d20: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3c4d20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3c4d24: 0x928606ac  lbu         $a2, 0x6AC($s4)
    ctx->pc = 0x3c4d24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x3c4d28: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3C4D28u;
    SET_GPR_U32(ctx, 31, 0x3C4D30u);
    ctx->pc = 0x3C4D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D28u;
    // 0x3c4d2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3C4D28u, 0x3C4D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D30u;
label_3c4d30:
    // 0x3c4d30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4D30u;
    {
        const bool branch_taken_0x3c4d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D30u;
        // 0x3c4d34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d30) {
            ctx->pc = 0x3C4D40u;
            goto label_3c4d40;
        }
    }
    ctx->pc = 0x3C4D38u;
    // 0x3c4d38: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4D38u;
    SET_GPR_U32(ctx, 31, 0x3C4D40u);
    ctx->pc = 0x3C4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D38u;
    // 0x3c4d3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4D38u, 0x3C4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D40u;
label_3c4d40:
    // 0x3c4d40: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3c4d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3c4d44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4D44u;
    {
        const bool branch_taken_0x3c4d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D44u;
        // 0x3c4d48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d44) {
            ctx->pc = 0x3C4D58u;
            goto label_3c4d58;
        }
    }
    ctx->pc = 0x3C4D4Cu;
    // 0x3c4d4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3C4D4Cu;
    {
        const bool branch_taken_0x3c4d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4d4c) {
            ctx->pc = 0x3C4DD8u;
            goto label_3c4dd8;
        }
    }
    ctx->pc = 0x3C4D54u;
    // 0x3c4d54: 0x0  nop
    ctx->pc = 0x3c4d54u;
    // NOP
label_3c4d58:
    // 0x3c4d58: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3c4d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4d5c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3c4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3c4d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c4d64: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c4d64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4d68: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3c4d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3c4d6c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C4D6Cu;
    {
        const bool branch_taken_0x3c4d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c4d6c) {
            ctx->pc = 0x3C4DA8u;
            goto label_3c4da8;
        }
    }
    ctx->pc = 0x3C4D74u;
    // 0x3c4d74: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3c4d74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4d78: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3c4d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3c4d7c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C4D7Cu;
    {
        const bool branch_taken_0x3c4d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D7Cu;
        // 0x3c4d80: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d7c) {
            ctx->pc = 0x3C4DD0u;
            goto label_3c4dd0;
        }
    }
    ctx->pc = 0x3C4D84u;
    // 0x3c4d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4d88: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3c4d88u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c4d8c: 0x0  nop
    ctx->pc = 0x3c4d8cu;
    // NOP
    // 0x3c4d90: 0x0  nop
    ctx->pc = 0x3c4d90u;
    // NOP
    // 0x3c4d94: 0x2010  mfhi        $a0
    ctx->pc = 0x3c4d94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3c4d98: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c4d98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4d9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C4D9Cu;
    {
        const bool branch_taken_0x3c4d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D9Cu;
        // 0x3c4da0: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d9c) {
            ctx->pc = 0x3C4DD0u;
            goto label_3c4dd0;
        }
    }
    ctx->pc = 0x3C4DA4u;
    // 0x3c4da4: 0x0  nop
    ctx->pc = 0x3c4da4u;
    // NOP
label_3c4da8:
    // 0x3c4da8: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3c4da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3c4dac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3c4dacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c4db0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4DB0u;
    {
        const bool branch_taken_0x3c4db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4db0) {
            ctx->pc = 0x3C4DD0u;
            goto label_3c4dd0;
        }
    }
    ctx->pc = 0x3C4DB8u;
    // 0x3c4db8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3c4db8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4dc0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3c4dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c4dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4DC4u;
    {
        const bool branch_taken_0x3c4dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DC4u;
        // 0x3c4dc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4dc4) {
            ctx->pc = 0x3C4DD8u;
            goto label_3c4dd8;
        }
    }
    ctx->pc = 0x3C4DCCu;
    // 0x3c4dcc: 0x0  nop
    ctx->pc = 0x3c4dccu;
    // NOP
label_3c4dd0:
    // 0x3c4dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4dd4: 0x0  nop
    ctx->pc = 0x3c4dd4u;
    // NOP
label_3c4dd8:
    // 0x3c4dd8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4DD8u;
    {
        const bool branch_taken_0x3c4dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DD8u;
        // 0x3c4ddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4dd8) {
            ctx->pc = 0x3C4DF8u;
            goto label_3c4df8;
        }
    }
    ctx->pc = 0x3C4DE0u;
    // 0x3c4de0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3C4DE0u;
    SET_GPR_U32(ctx, 31, 0x3C4DE8u);
    ctx->pc = 0x3C4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4DE0u;
    // 0x3c4de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3C4DE0u, 0x3C4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4DE8u;
label_3c4de8:
    // 0x3c4de8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c4de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4dec: 0xc0fa63c  jal         func_3E98F0
    ctx->pc = 0x3C4DECu;
    SET_GPR_U32(ctx, 31, 0x3C4DF4u);
    ctx->pc = 0x3C4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4DECu;
    // 0x3c4df0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98F0u, 0x3C4DECu, 0x3C4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4DF4u;
label_3c4df4:
    // 0x3c4df4: 0x0  nop
    ctx->pc = 0x3c4df4u;
    // NOP
label_3c4df8:
    // 0x3c4df8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3c4df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c4dfc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3c4dfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c4e00: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c4e00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c4e04: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c4e04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c4e08: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c4e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c4e0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c4e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c4e10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c4e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c4e14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c4e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c4e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c4e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c4e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c4e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c4e20: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E20u;
        // 0x3c4e24: 0x27bd0c30  addiu       $sp, $sp, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4E28u;
}
