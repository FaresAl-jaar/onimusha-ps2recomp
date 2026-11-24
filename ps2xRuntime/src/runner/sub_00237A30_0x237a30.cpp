#include <cstdio>
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

// Function: sub_00237A30
// Address: 0x237a30 - 0x237e54
void sub_00237A30_0x237a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A30_0x237a30");
#endif

    switch (ctx->pc) {
        case 0x237a30u: goto label_237a30;
        case 0x237a34u: goto label_237a34;
        case 0x237a38u: goto label_237a38;
        case 0x237a3cu: goto label_237a3c;
        case 0x237a40u: goto label_237a40;
        case 0x237a44u: goto label_237a44;
        case 0x237a48u: goto label_237a48;
        case 0x237a4cu: goto label_237a4c;
        case 0x237a50u: goto label_237a50;
        case 0x237a54u: goto label_237a54;
        case 0x237a58u: goto label_237a58;
        case 0x237a5cu: goto label_237a5c;
        case 0x237a60u: goto label_237a60;
        case 0x237a64u: goto label_237a64;
        case 0x237a68u: goto label_237a68;
        case 0x237a6cu: goto label_237a6c;
        case 0x237a70u: goto label_237a70;
        case 0x237a74u: goto label_237a74;
        case 0x237a78u: goto label_237a78;
        case 0x237a7cu: goto label_237a7c;
        case 0x237a80u: goto label_237a80;
        case 0x237a84u: goto label_237a84;
        case 0x237a88u: goto label_237a88;
        case 0x237a8cu: goto label_237a8c;
        case 0x237a90u: goto label_237a90;
        case 0x237a94u: goto label_237a94;
        case 0x237a98u: goto label_237a98;
        case 0x237a9cu: goto label_237a9c;
        case 0x237aa0u: goto label_237aa0;
        case 0x237aa4u: goto label_237aa4;
        case 0x237aa8u: goto label_237aa8;
        case 0x237aacu: goto label_237aac;
        case 0x237ab0u: goto label_237ab0;
        case 0x237ab4u: goto label_237ab4;
        case 0x237ab8u: goto label_237ab8;
        case 0x237abcu: goto label_237abc;
        case 0x237ac0u: goto label_237ac0;
        case 0x237ac4u: goto label_237ac4;
        case 0x237ac8u: goto label_237ac8;
        case 0x237accu: goto label_237acc;
        case 0x237ad0u: goto label_237ad0;
        case 0x237ad4u: goto label_237ad4;
        case 0x237ad8u: goto label_237ad8;
        case 0x237adcu: goto label_237adc;
        case 0x237ae0u: goto label_237ae0;
        case 0x237ae4u: goto label_237ae4;
        case 0x237ae8u: goto label_237ae8;
        case 0x237aecu: goto label_237aec;
        case 0x237af0u: goto label_237af0;
        case 0x237af4u: goto label_237af4;
        case 0x237af8u: goto label_237af8;
        case 0x237afcu: goto label_237afc;
        case 0x237b00u: goto label_237b00;
        case 0x237b04u: goto label_237b04;
        case 0x237b08u: goto label_237b08;
        case 0x237b0cu: goto label_237b0c;
        case 0x237b10u: goto label_237b10;
        case 0x237b14u: goto label_237b14;
        case 0x237b18u: goto label_237b18;
        case 0x237b1cu: goto label_237b1c;
        case 0x237b20u: goto label_237b20;
        case 0x237b24u: goto label_237b24;
        case 0x237b28u: goto label_237b28;
        case 0x237b2cu: goto label_237b2c;
        case 0x237b30u: goto label_237b30;
        case 0x237b34u: goto label_237b34;
        case 0x237b38u: goto label_237b38;
        case 0x237b3cu: goto label_237b3c;
        case 0x237b40u: goto label_237b40;
        case 0x237b44u: goto label_237b44;
        case 0x237b48u: goto label_237b48;
        case 0x237b4cu: goto label_237b4c;
        case 0x237b50u: goto label_237b50;
        case 0x237b54u: goto label_237b54;
        case 0x237b58u: goto label_237b58;
        case 0x237b5cu: goto label_237b5c;
        case 0x237b60u: goto label_237b60;
        case 0x237b64u: goto label_237b64;
        case 0x237b68u: goto label_237b68;
        case 0x237b6cu: goto label_237b6c;
        case 0x237b70u: goto label_237b70;
        case 0x237b74u: goto label_237b74;
        case 0x237b78u: goto label_237b78;
        case 0x237b7cu: goto label_237b7c;
        case 0x237b80u: goto label_237b80;
        case 0x237b84u: goto label_237b84;
        case 0x237b88u: goto label_237b88;
        case 0x237b8cu: goto label_237b8c;
        case 0x237b90u: goto label_237b90;
        case 0x237b94u: goto label_237b94;
        case 0x237b98u: goto label_237b98;
        case 0x237b9cu: goto label_237b9c;
        case 0x237ba0u: goto label_237ba0;
        case 0x237ba4u: goto label_237ba4;
        case 0x237ba8u: goto label_237ba8;
        case 0x237bacu: goto label_237bac;
        case 0x237bb0u: goto label_237bb0;
        case 0x237bb4u: goto label_237bb4;
        case 0x237bb8u: goto label_237bb8;
        case 0x237bbcu: goto label_237bbc;
        case 0x237bc0u: goto label_237bc0;
        case 0x237bc4u: goto label_237bc4;
        case 0x237bc8u: goto label_237bc8;
        case 0x237bccu: goto label_237bcc;
        case 0x237bd0u: goto label_237bd0;
        case 0x237bd4u: goto label_237bd4;
        case 0x237bd8u: goto label_237bd8;
        case 0x237bdcu: goto label_237bdc;
        case 0x237be0u: goto label_237be0;
        case 0x237be4u: goto label_237be4;
        case 0x237be8u: goto label_237be8;
        case 0x237becu: goto label_237bec;
        case 0x237bf0u: goto label_237bf0;
        case 0x237bf4u: goto label_237bf4;
        case 0x237bf8u: goto label_237bf8;
        case 0x237bfcu: goto label_237bfc;
        case 0x237c00u: goto label_237c00;
        case 0x237c04u: goto label_237c04;
        case 0x237c08u: goto label_237c08;
        case 0x237c0cu: goto label_237c0c;
        case 0x237c10u: goto label_237c10;
        case 0x237c14u: goto label_237c14;
        case 0x237c18u: goto label_237c18;
        case 0x237c1cu: goto label_237c1c;
        case 0x237c20u: goto label_237c20;
        case 0x237c24u: goto label_237c24;
        case 0x237c28u: goto label_237c28;
        case 0x237c2cu: goto label_237c2c;
        case 0x237c30u: goto label_237c30;
        case 0x237c34u: goto label_237c34;
        case 0x237c38u: goto label_237c38;
        case 0x237c3cu: goto label_237c3c;
        case 0x237c40u: goto label_237c40;
        case 0x237c44u: goto label_237c44;
        case 0x237c48u: goto label_237c48;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c50u: goto label_237c50;
        case 0x237c54u: goto label_237c54;
        case 0x237c58u: goto label_237c58;
        case 0x237c5cu: goto label_237c5c;
        case 0x237c60u: goto label_237c60;
        case 0x237c64u: goto label_237c64;
        case 0x237c68u: goto label_237c68;
        case 0x237c6cu: goto label_237c6c;
        case 0x237c70u: goto label_237c70;
        case 0x237c74u: goto label_237c74;
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        default: break;
    }

    ctx->pc = 0x237a30u;

label_237a30:
    // 0x237a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_237a34:
    // 0x237a34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x237a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_237a38:
    // 0x237a38: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x237a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_237a3c:
    // 0x237a3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x237a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237a40:
    // 0x237a40: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x237a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_237a44:
    // 0x237a44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x237a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_237a48:
    // 0x237a48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_237a4c:
    // 0x237a4c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x237a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_237a50:
    // 0x237a50: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x237a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_237a54:
    // 0x237a54: 0xc0910f8  jal         func_2443E0
label_237a58:
    if (ctx->pc == 0x237A58u) {
        ctx->pc = 0x237A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A54u;
        // 0x237a58: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A5Cu;
        goto label_237a5c;
    }
    ctx->pc = 0x237A54u;
    SET_GPR_U32(ctx, 31, 0x237A5Cu);
    ctx->pc = 0x237A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A54u;
    // 0x237a58: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2443E0u, 0x237A54u, 0x237A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A5Cu;
label_237a5c:
    // 0x237a5c: 0xc08e2aa  jal         func_238AA8
label_237a60:
    if (ctx->pc == 0x237A60u) {
        ctx->pc = 0x237A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A5Cu;
        // 0x237a60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A64u;
        goto label_237a64;
    }
    ctx->pc = 0x237A5Cu;
    SET_GPR_U32(ctx, 31, 0x237A64u);
    ctx->pc = 0x237A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A5Cu;
    // 0x237a60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237A5Cu, 0x237A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A64u;
label_237a64:
    // 0x237a64: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x237a64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_237a68:
    // 0x237a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237a6c:
    // 0x237a6c: 0x54620061  bnel        $v1, $v0, . + 4 + (0x61 << 2)
label_237a70:
    if (ctx->pc == 0x237A70u) {
        ctx->pc = 0x237A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A6Cu;
        // 0x237a70: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A74u;
        goto label_237a74;
    }
    ctx->pc = 0x237A6Cu;
    {
        const bool branch_taken_0x237a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x237a6c) {
            ctx->pc = 0x237A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A6Cu;
            // 0x237a70: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BF4u;
            goto label_237bf4;
        }
    }
    ctx->pc = 0x237A74u;
label_237a74:
    // 0x237a74: 0x5603003c  bnel        $s0, $v1, . + 4 + (0x3C << 2)
label_237a78:
    if (ctx->pc == 0x237A78u) {
        ctx->pc = 0x237A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A74u;
        // 0x237a78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A7Cu;
        goto label_237a7c;
    }
    ctx->pc = 0x237A74u;
    {
        const bool branch_taken_0x237a74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x237a74) {
            ctx->pc = 0x237A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A74u;
            // 0x237a78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B68u;
            goto label_237b68;
        }
    }
    ctx->pc = 0x237A7Cu;
label_237a7c:
    // 0x237a7c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x237a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_237a80:
    // 0x237a80: 0xc08e2b0  jal         func_238AC0
label_237a84:
    if (ctx->pc == 0x237A84u) {
        ctx->pc = 0x237A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A80u;
        // 0x237a84: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A88u;
        goto label_237a88;
    }
    ctx->pc = 0x237A80u;
    SET_GPR_U32(ctx, 31, 0x237A88u);
    ctx->pc = 0x237A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A80u;
    // 0x237a84: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237A80u, 0x237A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A88u;
label_237a88:
    // 0x237a88: 0x8e700020  lw          $s0, 0x20($s3)
    ctx->pc = 0x237a88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_237a8c:
    // 0x237a8c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x237a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_237a90:
    // 0x237a90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x237a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_237a94:
    // 0x237a94: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x237a94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_237a98:
    // 0x237a98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237a9c:
    // 0x237a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x237a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237aa0:
    // 0x237aa0: 0xc094854  jal         func_252150
label_237aa4:
    if (ctx->pc == 0x237AA4u) {
        ctx->pc = 0x237AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AA0u;
        // 0x237aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237AA8u;
        goto label_237aa8;
    }
    ctx->pc = 0x237AA0u;
    SET_GPR_U32(ctx, 31, 0x237AA8u);
    ctx->pc = 0x237AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AA0u;
    // 0x237aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x237AA0u, 0x237AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AA8u;
label_237aa8:
    // 0x237aa8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237aac:
    // 0x237aac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x237aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_237ab0:
    // 0x237ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237ab4:
    // 0x237ab4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x237ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_237ab8:
    // 0x237ab8: 0x40f809  jalr        $v0
label_237abc:
    if (ctx->pc == 0x237ABCu) {
        ctx->pc = 0x237ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AB8u;
        // 0x237abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237AC0u;
        goto label_237ac0;
    }
    ctx->pc = 0x237AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237AC0u);
        ctx->pc = 0x237ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AB8u;
        // 0x237abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237AB8u, 0x237AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237AC0u;
label_237ac0:
    // 0x237ac0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237ac4:
    // 0x237ac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237ac8:
    // 0x237ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237acc:
    // 0x237acc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x237accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_237ad0:
    // 0x237ad0: 0x40f809  jalr        $v0
label_237ad4:
    if (ctx->pc == 0x237AD4u) {
        ctx->pc = 0x237AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AD0u;
        // 0x237ad4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237AD8u;
        goto label_237ad8;
    }
    ctx->pc = 0x237AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237AD8u);
        ctx->pc = 0x237AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AD0u;
        // 0x237ad4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237AD0u, 0x237AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237AD8u;
label_237ad8:
    // 0x237ad8: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x237ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_237adc:
    // 0x237adc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x237adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_237ae0:
    // 0x237ae0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_237ae4:
    // 0x237ae4: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x237ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_237ae8:
    // 0x237ae8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x237ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_237aec:
    // 0x237aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x237aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_237af0:
    // 0x237af0: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x237af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_237af4:
    // 0x237af4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x237af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_237af8:
    // 0x237af8: 0xae630058  sw          $v1, 0x58($s3)
    ctx->pc = 0x237af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
label_237afc:
    // 0x237afc: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x237afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_237b00:
    // 0x237b00: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_237b04:
    if (ctx->pc == 0x237B04u) {
        ctx->pc = 0x237B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B00u;
        // 0x237b04: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B08u;
        goto label_237b08;
    }
    ctx->pc = 0x237B00u;
    {
        const bool branch_taken_0x237b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x237B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B00u;
        // 0x237b04: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b00) {
            ctx->pc = 0x237B1Cu;
            goto label_237b1c;
        }
    }
    ctx->pc = 0x237B08u;
label_237b08:
    // 0x237b08: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x237b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_237b0c:
    // 0x237b0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_237b10:
    if (ctx->pc == 0x237B10u) {
        ctx->pc = 0x237B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B0Cu;
        // 0x237b10: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B14u;
        goto label_237b14;
    }
    ctx->pc = 0x237B0Cu;
    {
        const bool branch_taken_0x237b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b0c) {
            ctx->pc = 0x237B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B0Cu;
            // 0x237b10: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B20u;
            goto label_237b20;
        }
    }
    ctx->pc = 0x237B14u;
label_237b14:
    // 0x237b14: 0x40f809  jalr        $v0
label_237b18:
    if (ctx->pc == 0x237B18u) {
        ctx->pc = 0x237B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B14u;
        // 0x237b18: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B1Cu;
        goto label_237b1c;
    }
    ctx->pc = 0x237B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237B1Cu);
        ctx->pc = 0x237B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B14u;
        // 0x237b18: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237B14u, 0x237B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237B1Cu;
label_237b1c:
    // 0x237b1c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x237b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_237b20:
    // 0x237b20: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x237b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_237b24:
    // 0x237b24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_237b28:
    if (ctx->pc == 0x237B28u) {
        ctx->pc = 0x237B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B24u;
        // 0x237b28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B2Cu;
        goto label_237b2c;
    }
    ctx->pc = 0x237B24u;
    {
        const bool branch_taken_0x237b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B24u;
        // 0x237b28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b24) {
            ctx->pc = 0x237B5Cu;
            goto label_237b5c;
        }
    }
    ctx->pc = 0x237B2Cu;
label_237b2c:
    // 0x237b2c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x237b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_237b30:
    // 0x237b30: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x237b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_237b34:
    // 0x237b34: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x237b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_237b38:
    // 0x237b38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x237b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_237b3c:
    // 0x237b3c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_237b40:
    if (ctx->pc == 0x237B40u) {
        ctx->pc = 0x237B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B3Cu;
        // 0x237b40: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B44u;
        goto label_237b44;
    }
    ctx->pc = 0x237B3Cu;
    {
        const bool branch_taken_0x237b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237b3c) {
            ctx->pc = 0x237B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B3Cu;
            // 0x237b40: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BF0u;
            goto label_237bf0;
        }
    }
    ctx->pc = 0x237B44u;
label_237b44:
    // 0x237b44: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x237b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_237b48:
    // 0x237b48: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x237b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_237b4c:
    // 0x237b4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x237b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_237b50:
    // 0x237b50: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_237b54:
    if (ctx->pc == 0x237B54u) {
        ctx->pc = 0x237B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B50u;
        // 0x237b54: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B58u;
        goto label_237b58;
    }
    ctx->pc = 0x237B50u;
    {
        const bool branch_taken_0x237b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237b50) {
            ctx->pc = 0x237B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B50u;
            // 0x237b54: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BF0u;
            goto label_237bf0;
        }
    }
    ctx->pc = 0x237B58u;
label_237b58:
    // 0x237b58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x237b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_237b5c:
    // 0x237b5c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x237b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_237b60:
    // 0x237b60: 0x10000023  b           . + 4 + (0x23 << 2)
label_237b64:
    if (ctx->pc == 0x237B64u) {
        ctx->pc = 0x237B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B60u;
        // 0x237b64: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B68u;
        goto label_237b68;
    }
    ctx->pc = 0x237B60u;
    {
        const bool branch_taken_0x237b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B60u;
        // 0x237b64: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b60) {
            ctx->pc = 0x237BF0u;
            goto label_237bf0;
        }
    }
    ctx->pc = 0x237B68u;
label_237b68:
    // 0x237b68: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_237b6c:
    if (ctx->pc == 0x237B6Cu) {
        ctx->pc = 0x237B70u;
        goto label_237b70;
    }
    ctx->pc = 0x237B68u;
    {
        const bool branch_taken_0x237b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x237b68) {
            ctx->pc = 0x237BE8u;
            goto label_237be8;
        }
    }
    ctx->pc = 0x237B70u;
label_237b70:
    // 0x237b70: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x237b70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_237b74:
    // 0x237b74: 0xc08e2b0  jal         func_238AC0
label_237b78:
    if (ctx->pc == 0x237B78u) {
        ctx->pc = 0x237B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B74u;
        // 0x237b78: 0x26700024  addiu       $s0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B7Cu;
        goto label_237b7c;
    }
    ctx->pc = 0x237B74u;
    SET_GPR_U32(ctx, 31, 0x237B7Cu);
    ctx->pc = 0x237B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B74u;
    // 0x237b78: 0x26700024  addiu       $s0, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237B74u, 0x237B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B7Cu;
label_237b7c:
    // 0x237b7c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237b80:
    // 0x237b80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237b84:
    // 0x237b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237b88:
    // 0x237b88: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x237b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_237b8c:
    // 0x237b8c: 0x40f809  jalr        $v0
label_237b90:
    if (ctx->pc == 0x237B90u) {
        ctx->pc = 0x237B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B8Cu;
        // 0x237b90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B94u;
        goto label_237b94;
    }
    ctx->pc = 0x237B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237B94u);
        ctx->pc = 0x237B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B8Cu;
        // 0x237b90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237B8Cu, 0x237B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237B94u;
label_237b94:
    // 0x237b94: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x237b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_237b98:
    // 0x237b98: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x237b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_237b9c:
    // 0x237b9c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x237b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_237ba0:
    // 0x237ba0: 0x8c428040  lw          $v0, -0x7FC0($v0)
    ctx->pc = 0x237ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934592)));
label_237ba4:
    // 0x237ba4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_237ba8:
    if (ctx->pc == 0x237BA8u) {
        ctx->pc = 0x237BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BA4u;
        // 0x237ba8: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BACu;
        goto label_237bac;
    }
    ctx->pc = 0x237BA4u;
    {
        const bool branch_taken_0x237ba4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x237BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BA4u;
        // 0x237ba8: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ba4) {
            ctx->pc = 0x237BC8u;
            goto label_237bc8;
        }
    }
    ctx->pc = 0x237BACu;
label_237bac:
    // 0x237bac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x237bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_237bb0:
    // 0x237bb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_237bb4:
    if (ctx->pc == 0x237BB4u) {
        ctx->pc = 0x237BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB0u;
        // 0x237bb4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BB8u;
        goto label_237bb8;
    }
    ctx->pc = 0x237BB0u;
    {
        const bool branch_taken_0x237bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB0u;
        // 0x237bb4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bb0) {
            ctx->pc = 0x237BCCu;
            goto label_237bcc;
        }
    }
    ctx->pc = 0x237BB8u;
label_237bb8:
    // 0x237bb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_237bbc:
    // 0x237bbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_237bc0:
    if (ctx->pc == 0x237BC0u) {
        ctx->pc = 0x237BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BBCu;
        // 0x237bc0: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BC4u;
        goto label_237bc4;
    }
    ctx->pc = 0x237BBCu;
    {
        const bool branch_taken_0x237bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BBCu;
        // 0x237bc0: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bbc) {
            ctx->pc = 0x237BF0u;
            goto label_237bf0;
        }
    }
    ctx->pc = 0x237BC4u;
label_237bc4:
    // 0x237bc4: 0x0  nop
    ctx->pc = 0x237bc4u;
    // NOP
label_237bc8:
    // 0x237bc8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_237bcc:
    // 0x237bcc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x237bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_237bd0:
    // 0x237bd0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x237bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_237bd4:
    // 0x237bd4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_237bd8:
    if (ctx->pc == 0x237BD8u) {
        ctx->pc = 0x237BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BD4u;
        // 0x237bd8: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BDCu;
        goto label_237bdc;
    }
    ctx->pc = 0x237BD4u;
    {
        const bool branch_taken_0x237bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237bd4) {
            ctx->pc = 0x237BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237BD4u;
            // 0x237bd8: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BF4u;
            goto label_237bf4;
        }
    }
    ctx->pc = 0x237BDCu;
label_237bdc:
    // 0x237bdc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x237bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_237be0:
    // 0x237be0: 0x10000003  b           . + 4 + (0x3 << 2)
label_237be4:
    if (ctx->pc == 0x237BE4u) {
        ctx->pc = 0x237BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BE0u;
        // 0x237be4: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BE8u;
        goto label_237be8;
    }
    ctx->pc = 0x237BE0u;
    {
        const bool branch_taken_0x237be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BE0u;
        // 0x237be4: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237be0) {
            ctx->pc = 0x237BF0u;
            goto label_237bf0;
        }
    }
    ctx->pc = 0x237BE8u;
label_237be8:
    // 0x237be8: 0xc08e2b0  jal         func_238AC0
label_237bec:
    if (ctx->pc == 0x237BECu) {
        ctx->pc = 0x237BF0u;
        goto label_237bf0;
    }
    ctx->pc = 0x237BE8u;
    SET_GPR_U32(ctx, 31, 0x237BF0u);
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237BE8u, 0x237BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BF0u;
label_237bf0:
    // 0x237bf0: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x237bf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_237bf4:
    // 0x237bf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_237bf8:
    // 0x237bf8: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
label_237bfc:
    if (ctx->pc == 0x237BFCu) {
        ctx->pc = 0x237BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF8u;
        // 0x237bfc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C00u;
        goto label_237c00;
    }
    ctx->pc = 0x237BF8u;
    {
        const bool branch_taken_0x237bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF8u;
        // 0x237bfc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf8) {
            ctx->pc = 0x237E38u;
            goto label_237e38;
        }
    }
    ctx->pc = 0x237C00u;
label_237c00:
    { static uint64_t last[5]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[5]={(uint64_t)(GPR_U32(ctx,19)),(uint64_t)(READ8(GPR_U32(ctx,19)+1)),(uint64_t)(READ8(GPR_U32(ctx,19)+2)),(uint64_t)(READ8(GPR_U32(ctx,19)+0x44)),(uint64_t)(READ8(GPR_U32(ctx,19)+0x48)),}; bool chg=first; for(int i=0;i<5;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<400 && cur[0]==0x4c8288u) { ++lines; first=false; for(int i=0;i<5;++i) last[i]=cur[i]; fprintf(stderr,"[px rdst] hit=%u " "s3=0x%llx f1=%llu f2=%llu f44=%llu f48=%llu" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4]); } }
    // 0x237c00: 0x82620002  lb          $v0, 0x2($s3)
    ctx->pc = 0x237c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_237c04:
    // 0x237c04: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_237c08:
    if (ctx->pc == 0x237C08u) {
        ctx->pc = 0x237C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C04u;
        // 0x237c08: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C0Cu;
        goto label_237c0c;
    }
    ctx->pc = 0x237C04u;
    {
        const bool branch_taken_0x237c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C04u;
        // 0x237c08: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c04) {
            ctx->pc = 0x237E3Cu;
            goto label_237e3c;
        }
    }
    ctx->pc = 0x237C0Cu;
label_237c0c:
    // 0x237c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237c10:
    // 0x237c10: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x237c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_237c14:
    // 0x237c14: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x237c14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_237c18:
    // 0x237c18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x237c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237c1c:
    // 0x237c1c: 0xc08e2b0  jal         func_238AC0
label_237c20:
    if (ctx->pc == 0x237C20u) {
        ctx->pc = 0x237C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C1Cu;
        // 0x237c20: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C24u;
        goto label_237c24;
    }
    ctx->pc = 0x237C1Cu;
    SET_GPR_U32(ctx, 31, 0x237C24u);
    ctx->pc = 0x237C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C1Cu;
    // 0x237c20: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237C1Cu, 0x237C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C24u;
label_237c24:
    // 0x237c24: 0x82620044  lb          $v0, 0x44($s3)
    ctx->pc = 0x237c24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
label_237c28:
    // 0x237c28: 0x50510082  beql        $v0, $s1, . + 4 + (0x82 << 2)
label_237c2c:
    if (ctx->pc == 0x237C2Cu) {
        ctx->pc = 0x237C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C28u;
        // 0x237c2c: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C30u;
        goto label_237c30;
    }
    ctx->pc = 0x237C28u;
    {
        const bool branch_taken_0x237c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x237c28) {
            ctx->pc = 0x237C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C28u;
            // 0x237c2c: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237C30u;
label_237c30:
    // 0x237c30: 0x82620048  lb          $v0, 0x48($s3)
    ctx->pc = 0x237c30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
label_237c34:
    // 0x237c34: 0x5051007f  beql        $v0, $s1, . + 4 + (0x7F << 2)
label_237c38:
    if (ctx->pc == 0x237C38u) {
        ctx->pc = 0x237C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C34u;
        // 0x237c38: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C3Cu;
        goto label_237c3c;
    }
    ctx->pc = 0x237C34u;
    {
        const bool branch_taken_0x237c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x237c34) {
            ctx->pc = 0x237C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C34u;
            // 0x237c38: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237C3Cu;
label_237c3c:
    // 0x237c3c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x237c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_237c40:
    // 0x237c40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_237c44:
    if (ctx->pc == 0x237C44u) {
        ctx->pc = 0x237C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C40u;
        // 0x237c44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C48u;
        goto label_237c48;
    }
    ctx->pc = 0x237C40u;
    {
        const bool branch_taken_0x237c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C40u;
        // 0x237c44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c40) {
            ctx->pc = 0x237C58u;
            goto label_237c58;
        }
    }
    ctx->pc = 0x237C48u;
label_237c48:
    // 0x237c48: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x237c48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_237c4c:
    // 0x237c4c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x237c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_237c50:
    // 0x237c50: 0x10000078  b           . + 4 + (0x78 << 2)
label_237c54:
    if (ctx->pc == 0x237C54u) {
        ctx->pc = 0x237C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C50u;
        // 0x237c54: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C58u;
        goto label_237c58;
    }
    ctx->pc = 0x237C50u;
    {
        const bool branch_taken_0x237c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C50u;
        // 0x237c54: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c50) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237C58u;
label_237c58:
    // 0x237c58: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_237c5c:
    if (ctx->pc == 0x237C5Cu) {
        ctx->pc = 0x237C60u;
        goto label_237c60;
    }
    ctx->pc = 0x237C58u;
    {
        const bool branch_taken_0x237c58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x237c58) {
            ctx->pc = 0x237C6Cu;
            goto label_237c6c;
        }
    }
    ctx->pc = 0x237C60u;
label_237c60:
    // 0x237c60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x237c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237c64:
    // 0x237c64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_237c68:
    if (ctx->pc == 0x237C68u) {
        ctx->pc = 0x237C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C64u;
        // 0x237c68: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C6Cu;
        goto label_237c6c;
    }
    ctx->pc = 0x237C64u;
    {
        const bool branch_taken_0x237c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c64) {
            ctx->pc = 0x237C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C64u;
            // 0x237c68: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C80u;
            goto label_237c80;
        }
    }
    ctx->pc = 0x237C6Cu;
label_237c6c:
    // 0x237c6c: 0xc08de86  jal         func_237A18
label_237c70:
    if (ctx->pc == 0x237C70u) {
        ctx->pc = 0x237C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C6Cu;
        // 0x237c70: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C74u;
        goto label_237c74;
    }
    ctx->pc = 0x237C6Cu;
    SET_GPR_U32(ctx, 31, 0x237C74u);
    ctx->pc = 0x237C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C6Cu;
    // 0x237c70: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A18u, 0x237C6Cu, 0x237C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C74u;
label_237c74:
    // 0x237c74: 0x10000070  b           . + 4 + (0x70 << 2)
label_237c78:
    if (ctx->pc == 0x237C78u) {
        ctx->pc = 0x237C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C74u;
        // 0x237c78: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C7Cu;
        goto label_237c7c;
    }
    ctx->pc = 0x237C74u;
    {
        const bool branch_taken_0x237c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C74u;
        // 0x237c78: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c74) {
            ctx->pc = 0x237E38u;
            goto label_237e38;
        }
    }
    ctx->pc = 0x237C7Cu;
label_237c7c:
    // 0x237c7c: 0x0  nop
    ctx->pc = 0x237c7cu;
    // NOP
label_237c80:
    // 0x237c80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237c84:
    // 0x237c84: 0x40f809  jalr        $v0
label_237c88:
    if (ctx->pc == 0x237C88u) {
        ctx->pc = 0x237C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C84u;
        // 0x237c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C8Cu;
        goto label_237c8c;
    }
    ctx->pc = 0x237C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237C8Cu);
        ctx->pc = 0x237C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C84u;
        // 0x237c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237C84u, 0x237C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237C8Cu;
label_237c8c:
    { static uint64_t last[5]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[5]={(uint64_t)(GPR_U32(ctx,19)),(uint64_t)((int64_t)GPR_S32(ctx,2)),(uint64_t)((int64_t)(int32_t)READ32(GPR_U32(ctx,19)+0x40)),(uint64_t)((int64_t)(int32_t)READ32(GPR_U32(ctx,19)+0x1c)),(uint64_t)((int64_t)(int32_t)READ32(GPR_U32(ctx,19)+0x14)),}; bool chg=first; for(int i=0;i<5;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<400 && cur[0]==0x4c8288u) { ++lines; first=false; for(int i=0;i<5;++i) last[i]=cur[i]; fprintf(stderr,"[px sjfree] hit=%u " "s3=0x%llx v0=%lld f40=%lld f1c=%lld f14=%lld" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4]); } }
    // 0x237c8c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x237c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_237c90:
    // 0x237c90: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x237c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_237c94:
    // 0x237c94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x237c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237c98:
    // 0x237c98: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x237c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_237c9c:
    // 0x237c9c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_237ca0:
    if (ctx->pc == 0x237CA0u) {
        ctx->pc = 0x237CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C9Cu;
        // 0x237ca0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CA4u;
        goto label_237ca4;
    }
    ctx->pc = 0x237C9Cu;
    {
        const bool branch_taken_0x237c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c9c) {
            ctx->pc = 0x237CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C9Cu;
            // 0x237ca0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CB0u;
            goto label_237cb0;
        }
    }
    ctx->pc = 0x237CA4u;
label_237ca4:
    // 0x237ca4: 0x10000063  b           . + 4 + (0x63 << 2)
label_237ca8:
    if (ctx->pc == 0x237CA8u) {
        ctx->pc = 0x237CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA4u;
        // 0x237ca8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CACu;
        goto label_237cac;
    }
    ctx->pc = 0x237CA4u;
    {
        const bool branch_taken_0x237ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA4u;
        // 0x237ca8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ca4) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237CACu;
label_237cac:
    // 0x237cac: 0x0  nop
    ctx->pc = 0x237cacu;
    // NOP
label_237cb0:
    // 0x237cb0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x237cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_237cb4:
    // 0x237cb4: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x237cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_237cb8:
    // 0x237cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237cbc:
    // 0x237cbc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x237cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_237cc0:
    // 0x237cc0: 0x40f809  jalr        $v0
label_237cc4:
    if (ctx->pc == 0x237CC4u) {
        ctx->pc = 0x237CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CC0u;
        // 0x237cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CC8u;
        goto label_237cc8;
    }
    ctx->pc = 0x237CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237CC8u);
        ctx->pc = 0x237CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CC0u;
        // 0x237cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237CC0u, 0x237CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237CC8u;
label_237cc8:
    // 0x237cc8: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x237cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_237ccc:
    // 0x237ccc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x237cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_237cd0:
    // 0x237cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237cd4:
    // 0x237cd4: 0x8e670058  lw          $a3, 0x58($s3)
    ctx->pc = 0x237cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_237cd8:
    // 0x237cd8: 0x246407ff  addiu       $a0, $v1, 0x7FF
    ctx->pc = 0x237cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_237cdc:
    // 0x237cdc: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x237cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_237ce0:
    // 0x237ce0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x237ce0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_237ce4:
    // 0x237ce4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_237ce8:
    // 0x237ce8: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x237ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_237cec:
    // 0x237cec: 0x382c3  sra         $s0, $v1, 11
    ctx->pc = 0x237cecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 11));
label_237cf0:
    // 0x237cf0: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x237cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_237cf4:
    // 0x237cf4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x237cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_237cf8:
    // 0x237cf8: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x237cf8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_237cfc:
    // 0x237cfc: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x237cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_237d00:
    // 0x237d00: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x237d00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_237d04:
    // 0x237d04: 0x8e68002c  lw          $t0, 0x2C($s3)
    ctx->pc = 0x237d04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_237d08:
    // 0x237d08: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x237d08u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_237d0c:
    // 0x237d0c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x237d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_237d10:
    // 0x237d10: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x237d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_237d14:
    // 0x237d14: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x237d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_237d18:
    // 0x237d18: 0xc091062  jal         func_244188
label_237d1c:
    if (ctx->pc == 0x237D1Cu) {
        ctx->pc = 0x237D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D18u;
        // 0x237d1c: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D20u;
        goto label_237d20;
    }
    ctx->pc = 0x237D18u;
    SET_GPR_U32(ctx, 31, 0x237D20u);
    ctx->pc = 0x237D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D18u;
    // 0x237d1c: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244188u, 0x237D18u, 0x237D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D20u;
label_237d20:
    // 0x237d20: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x237d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_237d24:
    // 0x237d24: 0x8c648f78  lw          $a0, -0x7088($v1)
    ctx->pc = 0x237d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938488)));
label_237d28:
    // 0x237d28: 0x1491000b  bne         $a0, $s1, . + 4 + (0xB << 2)
label_237d2c:
    if (ctx->pc == 0x237D2Cu) {
        ctx->pc = 0x237D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D28u;
        // 0x237d2c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D30u;
        goto label_237d30;
    }
    ctx->pc = 0x237D28u;
    {
        const bool branch_taken_0x237d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x237D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D28u;
        // 0x237d2c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d28) {
            ctx->pc = 0x237D58u;
            goto label_237d58;
        }
    }
    ctx->pc = 0x237D30u;
label_237d30:
    // 0x237d30: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x237d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_237d34:
    // 0x237d34: 0xac44ea08  sw          $a0, -0x15F8($v0)
    ctx->pc = 0x237d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961672), GPR_U32(ctx, 4));
label_237d38:
    // 0x237d38: 0x82630003  lb          $v1, 0x3($s3)
    ctx->pc = 0x237d38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_237d3c:
    // 0x237d3c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_237d40:
    if (ctx->pc == 0x237D40u) {
        ctx->pc = 0x237D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D3Cu;
        // 0x237d40: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D44u;
        goto label_237d44;
    }
    ctx->pc = 0x237D3Cu;
    {
        const bool branch_taken_0x237d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x237D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D3Cu;
        // 0x237d40: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d3c) {
            ctx->pc = 0x237D50u;
            goto label_237d50;
        }
    }
    ctx->pc = 0x237D44u;
label_237d44:
    // 0x237d44: 0x10000003  b           . + 4 + (0x3 << 2)
label_237d48:
    if (ctx->pc == 0x237D48u) {
        ctx->pc = 0x237D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D44u;
        // 0x237d48: 0xa040ea0c  sb          $zero, -0x15F4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961676), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D4Cu;
        goto label_237d4c;
    }
    ctx->pc = 0x237D44u;
    {
        const bool branch_taken_0x237d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D44u;
        // 0x237d48: 0xa040ea0c  sb          $zero, -0x15F4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961676), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d44) {
            ctx->pc = 0x237D54u;
            goto label_237d54;
        }
    }
    ctx->pc = 0x237D4Cu;
label_237d4c:
    // 0x237d4c: 0x0  nop
    ctx->pc = 0x237d4cu;
    // NOP
label_237d50:
    // 0x237d50: 0xa044ea0c  sb          $a0, -0x15F4($v0)
    ctx->pc = 0x237d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961676), (uint8_t)GPR_U32(ctx, 4));
label_237d54:
    // 0x237d54: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x237d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_237d58:
    // 0x237d58: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x237d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_237d5c:
    // 0x237d5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x237d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_237d60:
    // 0x237d60: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
label_237d64:
    if (ctx->pc == 0x237D64u) {
        ctx->pc = 0x237D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D60u;
        // 0x237d64: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D68u;
        goto label_237d68;
    }
    ctx->pc = 0x237D60u;
    {
        const bool branch_taken_0x237d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x237d60) {
            ctx->pc = 0x237D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D60u;
            // 0x237d64: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D8Cu;
            goto label_237d8c;
        }
    }
    ctx->pc = 0x237D68u;
label_237d68:
    // 0x237d68: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x237d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_237d6c:
    // 0x237d6c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x237d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_237d70:
    // 0x237d70: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x237d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_237d74:
    // 0x237d74: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x237d74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_237d78:
    // 0x237d78: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x237d78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_237d7c:
    // 0x237d7c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x237d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_237d80:
    // 0x237d80: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x237d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_237d84:
    // 0x237d84: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x237d84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_237d88:
    // 0x237d88: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x237d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_237d8c:
    // 0x237d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x237d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237d90:
    // 0x237d90: 0xc09107c  jal         func_2441F0
label_237d94:
    if (ctx->pc == 0x237D94u) {
        ctx->pc = 0x237D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D90u;
        // 0x237d94: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D98u;
        goto label_237d98;
    }
    ctx->pc = 0x237D90u;
    SET_GPR_U32(ctx, 31, 0x237D98u);
    ctx->pc = 0x237D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D90u;
    // 0x237d94: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x237D90u, 0x237D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D98u;
label_237d98:
    // 0x237d98: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x237d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_237d9c:
    // 0x237d9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x237d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237da0:
    // 0x237da0: 0xae640028  sw          $a0, 0x28($s3)
    ctx->pc = 0x237da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 4));
label_237da4:
    // 0x237da4: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x237da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_237da8:
    // 0x237da8: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
label_237dac:
    if (ctx->pc == 0x237DACu) {
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DB0u;
        goto label_237db0;
    }
    ctx->pc = 0x237DA8u;
    {
        const bool branch_taken_0x237da8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237da8) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237DB0u;
label_237db0:
    // 0x237db0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237db4:
    // 0x237db4: 0x26700024  addiu       $s0, $s3, 0x24
    ctx->pc = 0x237db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_237db8:
    // 0x237db8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237dbc:
    // 0x237dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237dc0:
    // 0x237dc0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_237dc4:
    // 0x237dc4: 0x40f809  jalr        $v0
label_237dc8:
    if (ctx->pc == 0x237DC8u) {
        ctx->pc = 0x237DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DC4u;
        // 0x237dc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DCCu;
        goto label_237dcc;
    }
    ctx->pc = 0x237DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237DCCu);
        ctx->pc = 0x237DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DC4u;
        // 0x237dc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237DC4u, 0x237DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237DCCu;
label_237dcc:
    // 0x237dcc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x237dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_237dd0:
    // 0x237dd0: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x237dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_237dd4:
    // 0x237dd4: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x237dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_237dd8:
    // 0x237dd8: 0xc0910f8  jal         func_2443E0
label_237ddc:
    if (ctx->pc == 0x237DDCu) {
        ctx->pc = 0x237DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD8u;
        // 0x237ddc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DE0u;
        goto label_237de0;
    }
    ctx->pc = 0x237DD8u;
    SET_GPR_U32(ctx, 31, 0x237DE0u);
    ctx->pc = 0x237DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DD8u;
    // 0x237ddc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2443E0u, 0x237DD8u, 0x237DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DE0u;
label_237de0:
    // 0x237de0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x237de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_237de4:
    // 0x237de4: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_237de8:
    if (ctx->pc == 0x237DE8u) {
        ctx->pc = 0x237DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DE4u;
        // 0x237de8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DECu;
        goto label_237dec;
    }
    ctx->pc = 0x237DE4u;
    {
        const bool branch_taken_0x237de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x237de4) {
            ctx->pc = 0x237DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DE4u;
            // 0x237de8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E38u;
            goto label_237e38;
        }
    }
    ctx->pc = 0x237DECu;
label_237dec:
    // 0x237dec: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_237df0:
    // 0x237df0: 0x8c428040  lw          $v0, -0x7FC0($v0)
    ctx->pc = 0x237df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934592)));
label_237df4:
    // 0x237df4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_237df8:
    if (ctx->pc == 0x237DF8u) {
        ctx->pc = 0x237DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DF4u;
        // 0x237df8: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DFCu;
        goto label_237dfc;
    }
    ctx->pc = 0x237DF4u;
    {
        const bool branch_taken_0x237df4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x237DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DF4u;
        // 0x237df8: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237df4) {
            ctx->pc = 0x237E18u;
            goto label_237e18;
        }
    }
    ctx->pc = 0x237DFCu;
label_237dfc:
    // 0x237dfc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x237dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_237e00:
    // 0x237e00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_237e04:
    if (ctx->pc == 0x237E04u) {
        ctx->pc = 0x237E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E00u;
        // 0x237e04: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E08u;
        goto label_237e08;
    }
    ctx->pc = 0x237E00u;
    {
        const bool branch_taken_0x237e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E00u;
        // 0x237e04: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e00) {
            ctx->pc = 0x237E1Cu;
            goto label_237e1c;
        }
    }
    ctx->pc = 0x237E08u;
label_237e08:
    // 0x237e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_237e0c:
    // 0x237e0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_237e10:
    if (ctx->pc == 0x237E10u) {
        ctx->pc = 0x237E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E0Cu;
        // 0x237e10: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E14u;
        goto label_237e14;
    }
    ctx->pc = 0x237E0Cu;
    {
        const bool branch_taken_0x237e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E0Cu;
        // 0x237e10: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e0c) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237E14u;
label_237e14:
    // 0x237e14: 0x0  nop
    ctx->pc = 0x237e14u;
    // NOP
label_237e18:
    // 0x237e18: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_237e1c:
    // 0x237e1c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x237e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_237e20:
    // 0x237e20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x237e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_237e24:
    // 0x237e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_237e28:
    if (ctx->pc == 0x237E28u) {
        ctx->pc = 0x237E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E24u;
        // 0x237e28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E2Cu;
        goto label_237e2c;
    }
    ctx->pc = 0x237E24u;
    {
        const bool branch_taken_0x237e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E24u;
        // 0x237e28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e24) {
            ctx->pc = 0x237E38u;
            goto label_237e38;
        }
    }
    ctx->pc = 0x237E2Cu;
label_237e2c:
    // 0x237e2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x237e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_237e30:
    // 0x237e30: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x237e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
label_237e34:
    // 0x237e34: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x237e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237e38:
    // 0x237e38: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x237e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_237e3c:
    // 0x237e3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237e40:
    // 0x237e40: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x237e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_237e44:
    // 0x237e44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237e48:
    // 0x237e48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x237e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_237e4c:
    // 0x237e4c: 0x3e00008  jr          $ra
label_237e50:
    if (ctx->pc == 0x237E50u) {
        ctx->pc = 0x237E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E4Cu;
        // 0x237e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E54u;
        goto label_fallthrough_0x237e4c;
    }
    ctx->pc = 0x237E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E4Cu;
        // 0x237e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x237e4c:
    ctx->pc = 0x237E54u;
}
