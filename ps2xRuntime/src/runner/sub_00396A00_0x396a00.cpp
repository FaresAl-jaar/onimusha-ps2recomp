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

// Function: sub_00396A00
// Address: 0x396a00 - 0x396de8
void sub_00396A00_0x396a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396A00_0x396a00");
#endif

    switch (ctx->pc) {
        case 0x396a00u: goto label_396a00;
        case 0x396a04u: goto label_396a04;
        case 0x396a08u: goto label_396a08;
        case 0x396a0cu: goto label_396a0c;
        case 0x396a10u: goto label_396a10;
        case 0x396a14u: goto label_396a14;
        case 0x396a18u: goto label_396a18;
        case 0x396a1cu: goto label_396a1c;
        case 0x396a20u: goto label_396a20;
        case 0x396a24u: goto label_396a24;
        case 0x396a28u: goto label_396a28;
        case 0x396a2cu: goto label_396a2c;
        case 0x396a30u: goto label_396a30;
        case 0x396a34u: goto label_396a34;
        case 0x396a38u: goto label_396a38;
        case 0x396a3cu: goto label_396a3c;
        case 0x396a40u: goto label_396a40;
        case 0x396a44u: goto label_396a44;
        case 0x396a48u: goto label_396a48;
        case 0x396a4cu: goto label_396a4c;
        case 0x396a50u: goto label_396a50;
        case 0x396a54u: goto label_396a54;
        case 0x396a58u: goto label_396a58;
        case 0x396a5cu: goto label_396a5c;
        case 0x396a60u: goto label_396a60;
        case 0x396a64u: goto label_396a64;
        case 0x396a68u: goto label_396a68;
        case 0x396a6cu: goto label_396a6c;
        case 0x396a70u: goto label_396a70;
        case 0x396a74u: goto label_396a74;
        case 0x396a78u: goto label_396a78;
        case 0x396a7cu: goto label_396a7c;
        case 0x396a80u: goto label_396a80;
        case 0x396a84u: goto label_396a84;
        case 0x396a88u: goto label_396a88;
        case 0x396a8cu: goto label_396a8c;
        case 0x396a90u: goto label_396a90;
        case 0x396a94u: goto label_396a94;
        case 0x396a98u: goto label_396a98;
        case 0x396a9cu: goto label_396a9c;
        case 0x396aa0u: goto label_396aa0;
        case 0x396aa4u: goto label_396aa4;
        case 0x396aa8u: goto label_396aa8;
        case 0x396aacu: goto label_396aac;
        case 0x396ab0u: goto label_396ab0;
        case 0x396ab4u: goto label_396ab4;
        case 0x396ab8u: goto label_396ab8;
        case 0x396abcu: goto label_396abc;
        case 0x396ac0u: goto label_396ac0;
        case 0x396ac4u: goto label_396ac4;
        case 0x396ac8u: goto label_396ac8;
        case 0x396accu: goto label_396acc;
        case 0x396ad0u: goto label_396ad0;
        case 0x396ad4u: goto label_396ad4;
        case 0x396ad8u: goto label_396ad8;
        case 0x396adcu: goto label_396adc;
        case 0x396ae0u: goto label_396ae0;
        case 0x396ae4u: goto label_396ae4;
        case 0x396ae8u: goto label_396ae8;
        case 0x396aecu: goto label_396aec;
        case 0x396af0u: goto label_396af0;
        case 0x396af4u: goto label_396af4;
        case 0x396af8u: goto label_396af8;
        case 0x396afcu: goto label_396afc;
        case 0x396b00u: goto label_396b00;
        case 0x396b04u: goto label_396b04;
        case 0x396b08u: goto label_396b08;
        case 0x396b0cu: goto label_396b0c;
        case 0x396b10u: goto label_396b10;
        case 0x396b14u: goto label_396b14;
        case 0x396b18u: goto label_396b18;
        case 0x396b1cu: goto label_396b1c;
        case 0x396b20u: goto label_396b20;
        case 0x396b24u: goto label_396b24;
        case 0x396b28u: goto label_396b28;
        case 0x396b2cu: goto label_396b2c;
        case 0x396b30u: goto label_396b30;
        case 0x396b34u: goto label_396b34;
        case 0x396b38u: goto label_396b38;
        case 0x396b3cu: goto label_396b3c;
        case 0x396b40u: goto label_396b40;
        case 0x396b44u: goto label_396b44;
        case 0x396b48u: goto label_396b48;
        case 0x396b4cu: goto label_396b4c;
        case 0x396b50u: goto label_396b50;
        case 0x396b54u: goto label_396b54;
        case 0x396b58u: goto label_396b58;
        case 0x396b5cu: goto label_396b5c;
        case 0x396b60u: goto label_396b60;
        case 0x396b64u: goto label_396b64;
        case 0x396b68u: goto label_396b68;
        case 0x396b6cu: goto label_396b6c;
        case 0x396b70u: goto label_396b70;
        case 0x396b74u: goto label_396b74;
        case 0x396b78u: goto label_396b78;
        case 0x396b7cu: goto label_396b7c;
        case 0x396b80u: goto label_396b80;
        case 0x396b84u: goto label_396b84;
        case 0x396b88u: goto label_396b88;
        case 0x396b8cu: goto label_396b8c;
        case 0x396b90u: goto label_396b90;
        case 0x396b94u: goto label_396b94;
        case 0x396b98u: goto label_396b98;
        case 0x396b9cu: goto label_396b9c;
        case 0x396ba0u: goto label_396ba0;
        case 0x396ba4u: goto label_396ba4;
        case 0x396ba8u: goto label_396ba8;
        case 0x396bacu: goto label_396bac;
        case 0x396bb0u: goto label_396bb0;
        case 0x396bb4u: goto label_396bb4;
        case 0x396bb8u: goto label_396bb8;
        case 0x396bbcu: goto label_396bbc;
        case 0x396bc0u: goto label_396bc0;
        case 0x396bc4u: goto label_396bc4;
        case 0x396bc8u: goto label_396bc8;
        case 0x396bccu: goto label_396bcc;
        case 0x396bd0u: goto label_396bd0;
        case 0x396bd4u: goto label_396bd4;
        case 0x396bd8u: goto label_396bd8;
        case 0x396bdcu: goto label_396bdc;
        case 0x396be0u: goto label_396be0;
        case 0x396be4u: goto label_396be4;
        case 0x396be8u: goto label_396be8;
        case 0x396becu: goto label_396bec;
        case 0x396bf0u: goto label_396bf0;
        case 0x396bf4u: goto label_396bf4;
        case 0x396bf8u: goto label_396bf8;
        case 0x396bfcu: goto label_396bfc;
        case 0x396c00u: goto label_396c00;
        case 0x396c04u: goto label_396c04;
        case 0x396c08u: goto label_396c08;
        case 0x396c0cu: goto label_396c0c;
        case 0x396c10u: goto label_396c10;
        case 0x396c14u: goto label_396c14;
        case 0x396c18u: goto label_396c18;
        case 0x396c1cu: goto label_396c1c;
        case 0x396c20u: goto label_396c20;
        case 0x396c24u: goto label_396c24;
        case 0x396c28u: goto label_396c28;
        case 0x396c2cu: goto label_396c2c;
        case 0x396c30u: goto label_396c30;
        case 0x396c34u: goto label_396c34;
        case 0x396c38u: goto label_396c38;
        case 0x396c3cu: goto label_396c3c;
        case 0x396c40u: goto label_396c40;
        case 0x396c44u: goto label_396c44;
        case 0x396c48u: goto label_396c48;
        case 0x396c4cu: goto label_396c4c;
        case 0x396c50u: goto label_396c50;
        case 0x396c54u: goto label_396c54;
        case 0x396c58u: goto label_396c58;
        case 0x396c5cu: goto label_396c5c;
        case 0x396c60u: goto label_396c60;
        case 0x396c64u: goto label_396c64;
        case 0x396c68u: goto label_396c68;
        case 0x396c6cu: goto label_396c6c;
        case 0x396c70u: goto label_396c70;
        case 0x396c74u: goto label_396c74;
        case 0x396c78u: goto label_396c78;
        case 0x396c7cu: goto label_396c7c;
        case 0x396c80u: goto label_396c80;
        case 0x396c84u: goto label_396c84;
        case 0x396c88u: goto label_396c88;
        case 0x396c8cu: goto label_396c8c;
        case 0x396c90u: goto label_396c90;
        case 0x396c94u: goto label_396c94;
        case 0x396c98u: goto label_396c98;
        case 0x396c9cu: goto label_396c9c;
        case 0x396ca0u: goto label_396ca0;
        case 0x396ca4u: goto label_396ca4;
        case 0x396ca8u: goto label_396ca8;
        case 0x396cacu: goto label_396cac;
        case 0x396cb0u: goto label_396cb0;
        case 0x396cb4u: goto label_396cb4;
        case 0x396cb8u: goto label_396cb8;
        case 0x396cbcu: goto label_396cbc;
        case 0x396cc0u: goto label_396cc0;
        case 0x396cc4u: goto label_396cc4;
        case 0x396cc8u: goto label_396cc8;
        case 0x396cccu: goto label_396ccc;
        case 0x396cd0u: goto label_396cd0;
        case 0x396cd4u: goto label_396cd4;
        case 0x396cd8u: goto label_396cd8;
        case 0x396cdcu: goto label_396cdc;
        case 0x396ce0u: goto label_396ce0;
        case 0x396ce4u: goto label_396ce4;
        case 0x396ce8u: goto label_396ce8;
        case 0x396cecu: goto label_396cec;
        case 0x396cf0u: goto label_396cf0;
        case 0x396cf4u: goto label_396cf4;
        case 0x396cf8u: goto label_396cf8;
        case 0x396cfcu: goto label_396cfc;
        case 0x396d00u: goto label_396d00;
        case 0x396d04u: goto label_396d04;
        case 0x396d08u: goto label_396d08;
        case 0x396d0cu: goto label_396d0c;
        case 0x396d10u: goto label_396d10;
        case 0x396d14u: goto label_396d14;
        case 0x396d18u: goto label_396d18;
        case 0x396d1cu: goto label_396d1c;
        case 0x396d20u: goto label_396d20;
        case 0x396d24u: goto label_396d24;
        case 0x396d28u: goto label_396d28;
        case 0x396d2cu: goto label_396d2c;
        case 0x396d30u: goto label_396d30;
        case 0x396d34u: goto label_396d34;
        case 0x396d38u: goto label_396d38;
        case 0x396d3cu: goto label_396d3c;
        case 0x396d40u: goto label_396d40;
        case 0x396d44u: goto label_396d44;
        case 0x396d48u: goto label_396d48;
        case 0x396d4cu: goto label_396d4c;
        case 0x396d50u: goto label_396d50;
        case 0x396d54u: goto label_396d54;
        case 0x396d58u: goto label_396d58;
        case 0x396d5cu: goto label_396d5c;
        case 0x396d60u: goto label_396d60;
        case 0x396d64u: goto label_396d64;
        case 0x396d68u: goto label_396d68;
        case 0x396d6cu: goto label_396d6c;
        case 0x396d70u: goto label_396d70;
        case 0x396d74u: goto label_396d74;
        case 0x396d78u: goto label_396d78;
        case 0x396d7cu: goto label_396d7c;
        case 0x396d80u: goto label_396d80;
        case 0x396d84u: goto label_396d84;
        case 0x396d88u: goto label_396d88;
        case 0x396d8cu: goto label_396d8c;
        case 0x396d90u: goto label_396d90;
        case 0x396d94u: goto label_396d94;
        case 0x396d98u: goto label_396d98;
        case 0x396d9cu: goto label_396d9c;
        case 0x396da0u: goto label_396da0;
        case 0x396da4u: goto label_396da4;
        case 0x396da8u: goto label_396da8;
        case 0x396dacu: goto label_396dac;
        case 0x396db0u: goto label_396db0;
        case 0x396db4u: goto label_396db4;
        case 0x396db8u: goto label_396db8;
        case 0x396dbcu: goto label_396dbc;
        case 0x396dc0u: goto label_396dc0;
        case 0x396dc4u: goto label_396dc4;
        case 0x396dc8u: goto label_396dc8;
        case 0x396dccu: goto label_396dcc;
        case 0x396dd0u: goto label_396dd0;
        case 0x396dd4u: goto label_396dd4;
        case 0x396dd8u: goto label_396dd8;
        case 0x396ddcu: goto label_396ddc;
        case 0x396de0u: goto label_396de0;
        case 0x396de4u: goto label_396de4;
        default: break;
    }

    ctx->pc = 0x396a00u;

label_396a00:
    // 0x396a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396a04:
    // 0x396a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396a08:
    // 0x396a08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x396a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_396a0c:
    // 0x396a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396a10:
    // 0x396a10: 0xc09e8c0  jal         func_27A300
label_396a14:
    if (ctx->pc == 0x396A14u) {
        ctx->pc = 0x396A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A10u;
        // 0x396a14: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A18u;
        goto label_396a18;
    }
    ctx->pc = 0x396A10u;
    SET_GPR_U32(ctx, 31, 0x396A18u);
    ctx->pc = 0x396A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A10u;
    // 0x396a14: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x396A10u, 0x396A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A18u;
label_396a18:
    // 0x396a18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_396a1c:
    if (ctx->pc == 0x396A1Cu) {
        ctx->pc = 0x396A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A18u;
        // 0x396a1c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A20u;
        goto label_396a20;
    }
    ctx->pc = 0x396A18u;
    {
        const bool branch_taken_0x396a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A18u;
        // 0x396a1c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a18) {
            ctx->pc = 0x396A30u;
            goto label_396a30;
        }
    }
    ctx->pc = 0x396A20u;
label_396a20:
    // 0x396a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396a24:
    // 0x396a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a28:
    // 0x396a28: 0xc09fbec  jal         func_27EFB0
label_396a2c:
    if (ctx->pc == 0x396A2Cu) {
        ctx->pc = 0x396A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A28u;
        // 0x396a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A30u;
        goto label_396a30;
    }
    ctx->pc = 0x396A28u;
    SET_GPR_U32(ctx, 31, 0x396A30u);
    ctx->pc = 0x396A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A28u;
    // 0x396a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x396A28u, 0x396A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A30u;
label_396a30:
    // 0x396a30: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x396a30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_396a34:
    // 0x396a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x396a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_396a38:
    // 0x396a38: 0x108300dd  beq         $a0, $v1, . + 4 + (0xDD << 2)
label_396a3c:
    if (ctx->pc == 0x396A3Cu) {
        ctx->pc = 0x396A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A38u;
        // 0x396a3c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A40u;
        goto label_396a40;
    }
    ctx->pc = 0x396A38u;
    {
        const bool branch_taken_0x396a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x396A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A38u;
        // 0x396a3c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a38) {
            ctx->pc = 0x396DB0u;
            goto label_396db0;
        }
    }
    ctx->pc = 0x396A40u;
label_396a40:
    // 0x396a40: 0x108800d9  beq         $a0, $t0, . + 4 + (0xD9 << 2)
label_396a44:
    if (ctx->pc == 0x396A44u) {
        ctx->pc = 0x396A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A40u;
        // 0x396a44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A48u;
        goto label_396a48;
    }
    ctx->pc = 0x396A40u;
    {
        const bool branch_taken_0x396a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x396A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A40u;
        // 0x396a44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a40) {
            ctx->pc = 0x396DA8u;
            goto label_396da8;
        }
    }
    ctx->pc = 0x396A48u;
label_396a48:
    // 0x396a48: 0x10870015  beq         $a0, $a3, . + 4 + (0x15 << 2)
label_396a4c:
    if (ctx->pc == 0x396A4Cu) {
        ctx->pc = 0x396A50u;
        goto label_396a50;
    }
    ctx->pc = 0x396A48u;
    {
        const bool branch_taken_0x396a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x396a48) {
            ctx->pc = 0x396AA0u;
            goto label_396aa0;
        }
    }
    ctx->pc = 0x396A50u;
label_396a50:
    // 0x396a50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396a54:
    if (ctx->pc == 0x396A54u) {
        ctx->pc = 0x396A58u;
        goto label_396a58;
    }
    ctx->pc = 0x396A50u;
    {
        const bool branch_taken_0x396a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396a50) {
            ctx->pc = 0x396A60u;
            goto label_396a60;
        }
    }
    ctx->pc = 0x396A58u;
label_396a58:
    // 0x396a58: 0x100000df  b           . + 4 + (0xDF << 2)
label_396a5c:
    if (ctx->pc == 0x396A5Cu) {
        ctx->pc = 0x396A60u;
        goto label_396a60;
    }
    ctx->pc = 0x396A58u;
    {
        const bool branch_taken_0x396a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396a58) {
            ctx->pc = 0x396DD8u;
            goto label_396dd8;
        }
    }
    ctx->pc = 0x396A60u;
label_396a60:
    // 0x396a60: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x396a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_396a64:
    // 0x396a64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x396a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_396a68:
    // 0x396a68: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x396a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_396a6c:
    // 0x396a6c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x396a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_396a70:
    // 0x396a70: 0x8ca60080  lw          $a2, 0x80($a1)
    ctx->pc = 0x396a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_396a74:
    // 0x396a74: 0x94c500c6  lhu         $a1, 0xC6($a2)
    ctx->pc = 0x396a74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 198)));
label_396a78:
    // 0x396a78: 0x30a5ffbf  andi        $a1, $a1, 0xFFBF
    ctx->pc = 0x396a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65471);
label_396a7c:
    // 0x396a7c: 0xa4c500c6  sh          $a1, 0xC6($a2)
    ctx->pc = 0x396a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 198), (uint16_t)GPR_U32(ctx, 5));
label_396a80:
    // 0x396a80: 0xa2002b33  sb          $zero, 0x2B33($s0)
    ctx->pc = 0x396a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11059), (uint8_t)GPR_U32(ctx, 0));
label_396a84:
    // 0x396a84: 0xa60000c0  sh          $zero, 0xC0($s0)
    ctx->pc = 0x396a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
label_396a88:
    // 0x396a88: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x396a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_396a8c:
    // 0x396a8c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x396a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_396a90:
    // 0x396a90: 0xa60807f2  sh          $t0, 0x7F2($s0)
    ctx->pc = 0x396a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 8));
label_396a94:
    // 0x396a94: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x396a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
label_396a98:
    // 0x396a98: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x396a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_396a9c:
    // 0x396a9c: 0xa2070821  sb          $a3, 0x821($s0)
    ctx->pc = 0x396a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 7));
label_396aa0:
    // 0x396aa0: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x396aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_396aa4:
    // 0x396aa4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x396aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396aa8:
    // 0x396aa8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x396aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_396aac:
    // 0x396aac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x396aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_396ab0:
    // 0x396ab0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x396ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_396ab4:
    // 0x396ab4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x396ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_396ab8:
    // 0x396ab8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x396ab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_396abc:
    // 0x396abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x396abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396ac0:
    // 0x396ac0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396ac0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_396ac4:
    // 0x396ac4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x396ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_396ac8:
    // 0x396ac8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x396ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396acc:
    // 0x396acc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_396ad0:
    if (ctx->pc == 0x396AD0u) {
        ctx->pc = 0x396AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396ACCu;
        // 0x396ad0: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AD4u;
        goto label_396ad4;
    }
    ctx->pc = 0x396ACCu;
    {
        const bool branch_taken_0x396acc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396ACCu;
        // 0x396ad0: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396acc) {
            ctx->pc = 0x396AE4u;
            goto label_396ae4;
        }
    }
    ctx->pc = 0x396AD4u;
label_396ad4:
    // 0x396ad4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396ad8:
    // 0x396ad8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396adc:
    // 0x396adc: 0x10000007  b           . + 4 + (0x7 << 2)
label_396ae0:
    if (ctx->pc == 0x396AE0u) {
        ctx->pc = 0x396AE4u;
        goto label_396ae4;
    }
    ctx->pc = 0x396ADCu;
    {
        const bool branch_taken_0x396adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396adc) {
            ctx->pc = 0x396AFCu;
            goto label_396afc;
        }
    }
    ctx->pc = 0x396AE4u;
label_396ae4:
    // 0x396ae4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x396ae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_396ae8:
    // 0x396ae8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x396ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_396aec:
    // 0x396aec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396af0:
    // 0x396af0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396af4:
    // 0x396af4: 0x0  nop
    ctx->pc = 0x396af4u;
    // NOP
label_396af8:
    // 0x396af8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x396af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_396afc:
    // 0x396afc: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
label_396b00:
    if (ctx->pc == 0x396B00u) {
        ctx->pc = 0x396B04u;
        goto label_396b04;
    }
    ctx->pc = 0x396AFCu;
    {
        const bool branch_taken_0x396afc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x396afc) {
            ctx->pc = 0x396B38u;
            goto label_396b38;
        }
    }
    ctx->pc = 0x396B04u;
label_396b04:
    // 0x396b04: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x396b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
label_396b08:
    // 0x396b08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x396b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_396b0c:
    // 0x396b0c: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x396b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
label_396b10:
    // 0x396b10: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x396b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_396b14:
    // 0x396b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b18:
    // 0x396b18: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x396b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
label_396b1c:
    // 0x396b1c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x396b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_396b20:
    // 0x396b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b24:
    // 0x396b24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x396b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b28:
    // 0x396b28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x396b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b2c:
    // 0x396b2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b30:
    // 0x396b30: 0xc05e9e8  jal         func_17A7A0
label_396b34:
    if (ctx->pc == 0x396B34u) {
        ctx->pc = 0x396B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B30u;
        // 0x396b34: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B38u;
        goto label_396b38;
    }
    ctx->pc = 0x396B30u;
    SET_GPR_U32(ctx, 31, 0x396B38u);
    ctx->pc = 0x396B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B30u;
    // 0x396b34: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x396B30u, 0x396B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396B38u;
label_396b38:
    // 0x396b38: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x396b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_396b3c:
    // 0x396b3c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x396b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396b40:
    // 0x396b40: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x396b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_396b44:
    // 0x396b44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x396b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_396b48:
    // 0x396b48: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x396b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_396b4c:
    // 0x396b4c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x396b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_396b50:
    // 0x396b50: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x396b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_396b54:
    // 0x396b54: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396b54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_396b58:
    // 0x396b58: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x396b58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_396b5c:
    // 0x396b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x396b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396b60:
    // 0x396b60: 0x0  nop
    ctx->pc = 0x396b60u;
    // NOP
label_396b64:
    // 0x396b64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x396b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_396b68:
    // 0x396b68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x396b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396b6c:
    // 0x396b6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_396b70:
    if (ctx->pc == 0x396B70u) {
        ctx->pc = 0x396B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B6Cu;
        // 0x396b70: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B74u;
        goto label_396b74;
    }
    ctx->pc = 0x396B6Cu;
    {
        const bool branch_taken_0x396b6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B6Cu;
        // 0x396b70: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b6c) {
            ctx->pc = 0x396B84u;
            goto label_396b84;
        }
    }
    ctx->pc = 0x396B74u;
label_396b74:
    // 0x396b74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396b74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396b78:
    // 0x396b78: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396b7c:
    // 0x396b7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_396b80:
    if (ctx->pc == 0x396B80u) {
        ctx->pc = 0x396B84u;
        goto label_396b84;
    }
    ctx->pc = 0x396B7Cu;
    {
        const bool branch_taken_0x396b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396b7c) {
            ctx->pc = 0x396B9Cu;
            goto label_396b9c;
        }
    }
    ctx->pc = 0x396B84u;
label_396b84:
    // 0x396b84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x396b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_396b88:
    // 0x396b88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x396b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_396b8c:
    // 0x396b8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396b90:
    // 0x396b90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396b94:
    // 0x396b94: 0x0  nop
    ctx->pc = 0x396b94u;
    // NOP
label_396b98:
    // 0x396b98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x396b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_396b9c:
    // 0x396b9c: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
label_396ba0:
    if (ctx->pc == 0x396BA0u) {
        ctx->pc = 0x396BA4u;
        goto label_396ba4;
    }
    ctx->pc = 0x396B9Cu;
    {
        const bool branch_taken_0x396b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x396b9c) {
            ctx->pc = 0x396BD8u;
            goto label_396bd8;
        }
    }
    ctx->pc = 0x396BA4u;
label_396ba4:
    // 0x396ba4: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x396ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
label_396ba8:
    // 0x396ba8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x396ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_396bac:
    // 0x396bac: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x396bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
label_396bb0:
    // 0x396bb0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x396bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_396bb4:
    // 0x396bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396bb8:
    // 0x396bb8: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x396bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
label_396bbc:
    // 0x396bbc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x396bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_396bc0:
    // 0x396bc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396bc4:
    // 0x396bc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x396bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396bc8:
    // 0x396bc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x396bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396bcc:
    // 0x396bcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396bccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396bd0:
    // 0x396bd0: 0xc05e9e8  jal         func_17A7A0
label_396bd4:
    if (ctx->pc == 0x396BD4u) {
        ctx->pc = 0x396BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BD0u;
        // 0x396bd4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BD8u;
        goto label_396bd8;
    }
    ctx->pc = 0x396BD0u;
    SET_GPR_U32(ctx, 31, 0x396BD8u);
    ctx->pc = 0x396BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396BD0u;
    // 0x396bd4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x396BD0u, 0x396BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BD8u;
label_396bd8:
    // 0x396bd8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x396bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_396bdc:
    // 0x396bdc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x396bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396be0:
    // 0x396be0: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x396be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_396be4:
    // 0x396be4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x396be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_396be8:
    // 0x396be8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x396be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_396bec:
    // 0x396bec: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x396becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_396bf0:
    // 0x396bf0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x396bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_396bf4:
    // 0x396bf4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396bf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_396bf8:
    // 0x396bf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x396bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_396bfc:
    // 0x396bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x396bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396c00:
    // 0x396c00: 0x0  nop
    ctx->pc = 0x396c00u;
    // NOP
label_396c04:
    // 0x396c04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x396c04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_396c08:
    // 0x396c08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x396c08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396c0c:
    // 0x396c0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_396c10:
    if (ctx->pc == 0x396C10u) {
        ctx->pc = 0x396C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C0Cu;
        // 0x396c10: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C14u;
        goto label_396c14;
    }
    ctx->pc = 0x396C0Cu;
    {
        const bool branch_taken_0x396c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C0Cu;
        // 0x396c10: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c0c) {
            ctx->pc = 0x396C24u;
            goto label_396c24;
        }
    }
    ctx->pc = 0x396C14u;
label_396c14:
    // 0x396c14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396c18:
    // 0x396c18: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396c1c:
    // 0x396c1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_396c20:
    if (ctx->pc == 0x396C20u) {
        ctx->pc = 0x396C24u;
        goto label_396c24;
    }
    ctx->pc = 0x396C1Cu;
    {
        const bool branch_taken_0x396c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396c1c) {
            ctx->pc = 0x396C3Cu;
            goto label_396c3c;
        }
    }
    ctx->pc = 0x396C24u;
label_396c24:
    // 0x396c24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x396c24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_396c28:
    // 0x396c28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x396c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_396c2c:
    // 0x396c2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396c2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396c30:
    // 0x396c30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396c34:
    // 0x396c34: 0x0  nop
    ctx->pc = 0x396c34u;
    // NOP
label_396c38:
    // 0x396c38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x396c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_396c3c:
    // 0x396c3c: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
label_396c40:
    if (ctx->pc == 0x396C40u) {
        ctx->pc = 0x396C44u;
        goto label_396c44;
    }
    ctx->pc = 0x396C3Cu;
    {
        const bool branch_taken_0x396c3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x396c3c) {
            ctx->pc = 0x396C78u;
            goto label_396c78;
        }
    }
    ctx->pc = 0x396C44u;
label_396c44:
    // 0x396c44: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x396c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
label_396c48:
    // 0x396c48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x396c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_396c4c:
    // 0x396c4c: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x396c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
label_396c50:
    // 0x396c50: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x396c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_396c54:
    // 0x396c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c58:
    // 0x396c58: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x396c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
label_396c5c:
    // 0x396c5c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x396c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_396c60:
    // 0x396c60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c64:
    // 0x396c64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x396c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c68:
    // 0x396c68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x396c68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c6c:
    // 0x396c6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396c6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c70:
    // 0x396c70: 0xc05e9e8  jal         func_17A7A0
label_396c74:
    if (ctx->pc == 0x396C74u) {
        ctx->pc = 0x396C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C70u;
        // 0x396c74: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C78u;
        goto label_396c78;
    }
    ctx->pc = 0x396C70u;
    SET_GPR_U32(ctx, 31, 0x396C78u);
    ctx->pc = 0x396C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396C70u;
    // 0x396c74: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x396C70u, 0x396C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396C78u;
label_396c78:
    // 0x396c78: 0x3c03432c  lui         $v1, 0x432C
    ctx->pc = 0x396c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17196 << 16));
label_396c7c:
    // 0x396c7c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x396c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396c80:
    // 0x396c80: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x396c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_396c84:
    // 0x396c84: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x396c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_396c88:
    // 0x396c88: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x396c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_396c8c:
    // 0x396c8c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x396c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_396c90:
    // 0x396c90: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x396c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_396c94:
    // 0x396c94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_396c98:
    // 0x396c98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x396c98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_396c9c:
    // 0x396c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x396c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396ca0:
    // 0x396ca0: 0x0  nop
    ctx->pc = 0x396ca0u;
    // NOP
label_396ca4:
    // 0x396ca4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x396ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_396ca8:
    // 0x396ca8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x396ca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396cac:
    // 0x396cac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_396cb0:
    if (ctx->pc == 0x396CB0u) {
        ctx->pc = 0x396CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CACu;
        // 0x396cb0: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CB4u;
        goto label_396cb4;
    }
    ctx->pc = 0x396CACu;
    {
        const bool branch_taken_0x396cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CACu;
        // 0x396cb0: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cac) {
            ctx->pc = 0x396CC4u;
            goto label_396cc4;
        }
    }
    ctx->pc = 0x396CB4u;
label_396cb4:
    // 0x396cb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396cb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396cb8:
    // 0x396cb8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396cbc:
    // 0x396cbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_396cc0:
    if (ctx->pc == 0x396CC0u) {
        ctx->pc = 0x396CC4u;
        goto label_396cc4;
    }
    ctx->pc = 0x396CBCu;
    {
        const bool branch_taken_0x396cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396cbc) {
            ctx->pc = 0x396CDCu;
            goto label_396cdc;
        }
    }
    ctx->pc = 0x396CC4u;
label_396cc4:
    // 0x396cc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x396cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_396cc8:
    // 0x396cc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x396cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_396ccc:
    // 0x396ccc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396cd0:
    // 0x396cd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396cd4:
    // 0x396cd4: 0x0  nop
    ctx->pc = 0x396cd4u;
    // NOP
label_396cd8:
    // 0x396cd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x396cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_396cdc:
    // 0x396cdc: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
label_396ce0:
    if (ctx->pc == 0x396CE0u) {
        ctx->pc = 0x396CE4u;
        goto label_396ce4;
    }
    ctx->pc = 0x396CDCu;
    {
        const bool branch_taken_0x396cdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x396cdc) {
            ctx->pc = 0x396D18u;
            goto label_396d18;
        }
    }
    ctx->pc = 0x396CE4u;
label_396ce4:
    // 0x396ce4: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x396ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
label_396ce8:
    // 0x396ce8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x396ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_396cec:
    // 0x396cec: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x396cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
label_396cf0:
    // 0x396cf0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x396cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_396cf4:
    // 0x396cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396cf8:
    // 0x396cf8: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x396cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
label_396cfc:
    // 0x396cfc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x396cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_396d00:
    // 0x396d00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396d04:
    // 0x396d04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x396d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396d08:
    // 0x396d08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x396d08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396d0c:
    // 0x396d0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396d0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396d10:
    // 0x396d10: 0xc05e9e8  jal         func_17A7A0
label_396d14:
    if (ctx->pc == 0x396D14u) {
        ctx->pc = 0x396D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D10u;
        // 0x396d14: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D18u;
        goto label_396d18;
    }
    ctx->pc = 0x396D10u;
    SET_GPR_U32(ctx, 31, 0x396D18u);
    ctx->pc = 0x396D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D10u;
    // 0x396d14: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x396D10u, 0x396D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D18u;
label_396d18:
    // 0x396d18: 0x3c03438c  lui         $v1, 0x438C
    ctx->pc = 0x396d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17292 << 16));
label_396d1c:
    // 0x396d1c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x396d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396d20:
    // 0x396d20: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x396d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_396d24:
    // 0x396d24: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x396d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_396d28:
    // 0x396d28: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x396d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_396d2c:
    // 0x396d2c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x396d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_396d30:
    // 0x396d30: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x396d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_396d34:
    // 0x396d34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396d34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_396d38:
    // 0x396d38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x396d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_396d3c:
    // 0x396d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x396d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396d40:
    // 0x396d40: 0x0  nop
    ctx->pc = 0x396d40u;
    // NOP
label_396d44:
    // 0x396d44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x396d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_396d48:
    // 0x396d48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x396d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396d4c:
    // 0x396d4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_396d50:
    if (ctx->pc == 0x396D50u) {
        ctx->pc = 0x396D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D4Cu;
        // 0x396d50: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D54u;
        goto label_396d54;
    }
    ctx->pc = 0x396D4Cu;
    {
        const bool branch_taken_0x396d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D4Cu;
        // 0x396d50: 0x94a500c4  lhu         $a1, 0xC4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d4c) {
            ctx->pc = 0x396D64u;
            goto label_396d64;
        }
    }
    ctx->pc = 0x396D54u;
label_396d54:
    // 0x396d54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396d54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396d58:
    // 0x396d58: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396d5c:
    // 0x396d5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_396d60:
    if (ctx->pc == 0x396D60u) {
        ctx->pc = 0x396D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D5Cu;
        // 0x396d60: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D64u;
        goto label_396d64;
    }
    ctx->pc = 0x396D5Cu;
    {
        const bool branch_taken_0x396d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D5Cu;
        // 0x396d60: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d5c) {
            ctx->pc = 0x396D80u;
            goto label_396d80;
        }
    }
    ctx->pc = 0x396D64u;
label_396d64:
    // 0x396d64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x396d64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_396d68:
    // 0x396d68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x396d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_396d6c:
    // 0x396d6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396d70:
    // 0x396d70: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x396d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_396d74:
    // 0x396d74: 0x0  nop
    ctx->pc = 0x396d74u;
    // NOP
label_396d78:
    // 0x396d78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x396d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_396d7c:
    // 0x396d7c: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x396d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_396d80:
    // 0x396d80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_396d84:
    if (ctx->pc == 0x396D84u) {
        ctx->pc = 0x396D88u;
        goto label_396d88;
    }
    ctx->pc = 0x396D80u;
    {
        const bool branch_taken_0x396d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x396d80) {
            ctx->pc = 0x396D90u;
            goto label_396d90;
        }
    }
    ctx->pc = 0x396D88u;
label_396d88:
    // 0x396d88: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x396d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
label_396d8c:
    // 0x396d8c: 0x0  nop
    ctx->pc = 0x396d8cu;
    // NOP
label_396d90:
    // 0x396d90: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x396d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_396d94:
    // 0x396d94: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_396d98:
    if (ctx->pc == 0x396D98u) {
        ctx->pc = 0x396D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D94u;
        // 0x396d98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D9Cu;
        goto label_396d9c;
    }
    ctx->pc = 0x396D94u;
    {
        const bool branch_taken_0x396d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D94u;
        // 0x396d98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d94) {
            ctx->pc = 0x396DD8u;
            goto label_396dd8;
        }
    }
    ctx->pc = 0x396D9Cu;
label_396d9c:
    // 0x396d9c: 0x1000000e  b           . + 4 + (0xE << 2)
label_396da0:
    if (ctx->pc == 0x396DA0u) {
        ctx->pc = 0x396DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D9Cu;
        // 0x396da0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DA4u;
        goto label_396da4;
    }
    ctx->pc = 0x396D9Cu;
    {
        const bool branch_taken_0x396d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D9Cu;
        // 0x396da0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d9c) {
            ctx->pc = 0x396DD8u;
            goto label_396dd8;
        }
    }
    ctx->pc = 0x396DA4u;
label_396da4:
    // 0x396da4: 0x0  nop
    ctx->pc = 0x396da4u;
    // NOP
label_396da8:
    // 0x396da8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x396da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_396dac:
    // 0x396dac: 0x0  nop
    ctx->pc = 0x396dacu;
    // NOP
label_396db0:
    // 0x396db0: 0xc0e58b8  jal         func_3962E0
label_396db4:
    if (ctx->pc == 0x396DB4u) {
        ctx->pc = 0x396DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB0u;
        // 0x396db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DB8u;
        goto label_396db8;
    }
    ctx->pc = 0x396DB0u;
    SET_GPR_U32(ctx, 31, 0x396DB8u);
    ctx->pc = 0x396DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396DB0u;
    // 0x396db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3962E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3962E0u, 0x396DB0u, 0x396DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396DB8u;
label_396db8:
    // 0x396db8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x396db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_396dbc:
    // 0x396dbc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x396dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_396dc0:
    // 0x396dc0: 0x320f809  jalr        $t9
label_396dc4:
    if (ctx->pc == 0x396DC4u) {
        ctx->pc = 0x396DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DC0u;
        // 0x396dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DC8u;
        goto label_396dc8;
    }
    ctx->pc = 0x396DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396DC8u);
        ctx->pc = 0x396DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DC0u;
        // 0x396dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396DC0u, 0x396DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396DC8u;
label_396dc8:
    // 0x396dc8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x396dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_396dcc:
    // 0x396dcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x396dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_396dd0:
    // 0x396dd0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x396dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_396dd4:
    // 0x396dd4: 0x0  nop
    ctx->pc = 0x396dd4u;
    // NOP
label_396dd8:
    // 0x396dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396ddc:
    // 0x396ddc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x396ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396de0:
    // 0x396de0: 0x3e00008  jr          $ra
label_396de4:
    if (ctx->pc == 0x396DE4u) {
        ctx->pc = 0x396DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DE0u;
        // 0x396de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DE8u;
        goto label_fallthrough_0x396de0;
    }
    ctx->pc = 0x396DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DE0u;
        // 0x396de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x396de0:
    ctx->pc = 0x396DE8u;
}
