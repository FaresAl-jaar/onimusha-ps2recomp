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

// Function: sub_00175AF0
// Address: 0x175af0 - 0x175e24
void sub_00175AF0_0x175af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175AF0_0x175af0");
#endif

    switch (ctx->pc) {
        case 0x175af0u: goto label_175af0;
        case 0x175af4u: goto label_175af4;
        case 0x175af8u: goto label_175af8;
        case 0x175afcu: goto label_175afc;
        case 0x175b00u: goto label_175b00;
        case 0x175b04u: goto label_175b04;
        case 0x175b08u: goto label_175b08;
        case 0x175b0cu: goto label_175b0c;
        case 0x175b10u: goto label_175b10;
        case 0x175b14u: goto label_175b14;
        case 0x175b18u: goto label_175b18;
        case 0x175b1cu: goto label_175b1c;
        case 0x175b20u: goto label_175b20;
        case 0x175b24u: goto label_175b24;
        case 0x175b28u: goto label_175b28;
        case 0x175b2cu: goto label_175b2c;
        case 0x175b30u: goto label_175b30;
        case 0x175b34u: goto label_175b34;
        case 0x175b38u: goto label_175b38;
        case 0x175b3cu: goto label_175b3c;
        case 0x175b40u: goto label_175b40;
        case 0x175b44u: goto label_175b44;
        case 0x175b48u: goto label_175b48;
        case 0x175b4cu: goto label_175b4c;
        case 0x175b50u: goto label_175b50;
        case 0x175b54u: goto label_175b54;
        case 0x175b58u: goto label_175b58;
        case 0x175b5cu: goto label_175b5c;
        case 0x175b60u: goto label_175b60;
        case 0x175b64u: goto label_175b64;
        case 0x175b68u: goto label_175b68;
        case 0x175b6cu: goto label_175b6c;
        case 0x175b70u: goto label_175b70;
        case 0x175b74u: goto label_175b74;
        case 0x175b78u: goto label_175b78;
        case 0x175b7cu: goto label_175b7c;
        case 0x175b80u: goto label_175b80;
        case 0x175b84u: goto label_175b84;
        case 0x175b88u: goto label_175b88;
        case 0x175b8cu: goto label_175b8c;
        case 0x175b90u: goto label_175b90;
        case 0x175b94u: goto label_175b94;
        case 0x175b98u: goto label_175b98;
        case 0x175b9cu: goto label_175b9c;
        case 0x175ba0u: goto label_175ba0;
        case 0x175ba4u: goto label_175ba4;
        case 0x175ba8u: goto label_175ba8;
        case 0x175bacu: goto label_175bac;
        case 0x175bb0u: goto label_175bb0;
        case 0x175bb4u: goto label_175bb4;
        case 0x175bb8u: goto label_175bb8;
        case 0x175bbcu: goto label_175bbc;
        case 0x175bc0u: goto label_175bc0;
        case 0x175bc4u: goto label_175bc4;
        case 0x175bc8u: goto label_175bc8;
        case 0x175bccu: goto label_175bcc;
        case 0x175bd0u: goto label_175bd0;
        case 0x175bd4u: goto label_175bd4;
        case 0x175bd8u: goto label_175bd8;
        case 0x175bdcu: goto label_175bdc;
        case 0x175be0u: goto label_175be0;
        case 0x175be4u: goto label_175be4;
        case 0x175be8u: goto label_175be8;
        case 0x175becu: goto label_175bec;
        case 0x175bf0u: goto label_175bf0;
        case 0x175bf4u: goto label_175bf4;
        case 0x175bf8u: goto label_175bf8;
        case 0x175bfcu: goto label_175bfc;
        case 0x175c00u: goto label_175c00;
        case 0x175c04u: goto label_175c04;
        case 0x175c08u: goto label_175c08;
        case 0x175c0cu: goto label_175c0c;
        case 0x175c10u: goto label_175c10;
        case 0x175c14u: goto label_175c14;
        case 0x175c18u: goto label_175c18;
        case 0x175c1cu: goto label_175c1c;
        case 0x175c20u: goto label_175c20;
        case 0x175c24u: goto label_175c24;
        case 0x175c28u: goto label_175c28;
        case 0x175c2cu: goto label_175c2c;
        case 0x175c30u: goto label_175c30;
        case 0x175c34u: goto label_175c34;
        case 0x175c38u: goto label_175c38;
        case 0x175c3cu: goto label_175c3c;
        case 0x175c40u: goto label_175c40;
        case 0x175c44u: goto label_175c44;
        case 0x175c48u: goto label_175c48;
        case 0x175c4cu: goto label_175c4c;
        case 0x175c50u: goto label_175c50;
        case 0x175c54u: goto label_175c54;
        case 0x175c58u: goto label_175c58;
        case 0x175c5cu: goto label_175c5c;
        case 0x175c60u: goto label_175c60;
        case 0x175c64u: goto label_175c64;
        case 0x175c68u: goto label_175c68;
        case 0x175c6cu: goto label_175c6c;
        case 0x175c70u: goto label_175c70;
        case 0x175c74u: goto label_175c74;
        case 0x175c78u: goto label_175c78;
        case 0x175c7cu: goto label_175c7c;
        case 0x175c80u: goto label_175c80;
        case 0x175c84u: goto label_175c84;
        case 0x175c88u: goto label_175c88;
        case 0x175c8cu: goto label_175c8c;
        case 0x175c90u: goto label_175c90;
        case 0x175c94u: goto label_175c94;
        case 0x175c98u: goto label_175c98;
        case 0x175c9cu: goto label_175c9c;
        case 0x175ca0u: goto label_175ca0;
        case 0x175ca4u: goto label_175ca4;
        case 0x175ca8u: goto label_175ca8;
        case 0x175cacu: goto label_175cac;
        case 0x175cb0u: goto label_175cb0;
        case 0x175cb4u: goto label_175cb4;
        case 0x175cb8u: goto label_175cb8;
        case 0x175cbcu: goto label_175cbc;
        case 0x175cc0u: goto label_175cc0;
        case 0x175cc4u: goto label_175cc4;
        case 0x175cc8u: goto label_175cc8;
        case 0x175cccu: goto label_175ccc;
        case 0x175cd0u: goto label_175cd0;
        case 0x175cd4u: goto label_175cd4;
        case 0x175cd8u: goto label_175cd8;
        case 0x175cdcu: goto label_175cdc;
        case 0x175ce0u: goto label_175ce0;
        case 0x175ce4u: goto label_175ce4;
        case 0x175ce8u: goto label_175ce8;
        case 0x175cecu: goto label_175cec;
        case 0x175cf0u: goto label_175cf0;
        case 0x175cf4u: goto label_175cf4;
        case 0x175cf8u: goto label_175cf8;
        case 0x175cfcu: goto label_175cfc;
        case 0x175d00u: goto label_175d00;
        case 0x175d04u: goto label_175d04;
        case 0x175d08u: goto label_175d08;
        case 0x175d0cu: goto label_175d0c;
        case 0x175d10u: goto label_175d10;
        case 0x175d14u: goto label_175d14;
        case 0x175d18u: goto label_175d18;
        case 0x175d1cu: goto label_175d1c;
        case 0x175d20u: goto label_175d20;
        case 0x175d24u: goto label_175d24;
        case 0x175d28u: goto label_175d28;
        case 0x175d2cu: goto label_175d2c;
        case 0x175d30u: goto label_175d30;
        case 0x175d34u: goto label_175d34;
        case 0x175d38u: goto label_175d38;
        case 0x175d3cu: goto label_175d3c;
        case 0x175d40u: goto label_175d40;
        case 0x175d44u: goto label_175d44;
        case 0x175d48u: goto label_175d48;
        case 0x175d4cu: goto label_175d4c;
        case 0x175d50u: goto label_175d50;
        case 0x175d54u: goto label_175d54;
        case 0x175d58u: goto label_175d58;
        case 0x175d5cu: goto label_175d5c;
        case 0x175d60u: goto label_175d60;
        case 0x175d64u: goto label_175d64;
        case 0x175d68u: goto label_175d68;
        case 0x175d6cu: goto label_175d6c;
        case 0x175d70u: goto label_175d70;
        case 0x175d74u: goto label_175d74;
        case 0x175d78u: goto label_175d78;
        case 0x175d7cu: goto label_175d7c;
        case 0x175d80u: goto label_175d80;
        case 0x175d84u: goto label_175d84;
        case 0x175d88u: goto label_175d88;
        case 0x175d8cu: goto label_175d8c;
        case 0x175d90u: goto label_175d90;
        case 0x175d94u: goto label_175d94;
        case 0x175d98u: goto label_175d98;
        case 0x175d9cu: goto label_175d9c;
        case 0x175da0u: goto label_175da0;
        case 0x175da4u: goto label_175da4;
        case 0x175da8u: goto label_175da8;
        case 0x175dacu: goto label_175dac;
        case 0x175db0u: goto label_175db0;
        case 0x175db4u: goto label_175db4;
        case 0x175db8u: goto label_175db8;
        case 0x175dbcu: goto label_175dbc;
        case 0x175dc0u: goto label_175dc0;
        case 0x175dc4u: goto label_175dc4;
        case 0x175dc8u: goto label_175dc8;
        case 0x175dccu: goto label_175dcc;
        case 0x175dd0u: goto label_175dd0;
        case 0x175dd4u: goto label_175dd4;
        case 0x175dd8u: goto label_175dd8;
        case 0x175ddcu: goto label_175ddc;
        case 0x175de0u: goto label_175de0;
        case 0x175de4u: goto label_175de4;
        case 0x175de8u: goto label_175de8;
        case 0x175decu: goto label_175dec;
        case 0x175df0u: goto label_175df0;
        case 0x175df4u: goto label_175df4;
        case 0x175df8u: goto label_175df8;
        case 0x175dfcu: goto label_175dfc;
        case 0x175e00u: goto label_175e00;
        case 0x175e04u: goto label_175e04;
        case 0x175e08u: goto label_175e08;
        case 0x175e0cu: goto label_175e0c;
        case 0x175e10u: goto label_175e10;
        case 0x175e14u: goto label_175e14;
        case 0x175e18u: goto label_175e18;
        case 0x175e1cu: goto label_175e1c;
        case 0x175e20u: goto label_175e20;
        default: break;
    }

    ctx->pc = 0x175af0u;

label_175af0:
    // 0x175af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_175af4:
    // 0x175af4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_175af8:
    // 0x175af8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x175af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_175afc:
    // 0x175afc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x175afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_175b00:
    // 0x175b00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_175b04:
    // 0x175b04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175b08:
    // 0x175b08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x175b08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175b0c:
    // 0x175b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175b10:
    // 0x175b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175b14:
    // 0x175b14: 0x8c920260  lw          $s2, 0x260($a0)
    ctx->pc = 0x175b14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
label_175b18:
    // 0x175b18: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x175b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_175b1c:
    // 0x175b1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x175b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_175b20:
    // 0x175b20: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x175b20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_175b24:
    // 0x175b24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_175b28:
    if (ctx->pc == 0x175B28u) {
        ctx->pc = 0x175B2Cu;
        goto label_175b2c;
    }
    ctx->pc = 0x175B24u;
    {
        const bool branch_taken_0x175b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b24) {
            ctx->pc = 0x175B38u;
            goto label_175b38;
        }
    }
    ctx->pc = 0x175B2Cu;
label_175b2c:
    // 0x175b2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_175b30:
    if (ctx->pc == 0x175B30u) {
        ctx->pc = 0x175B34u;
        goto label_175b34;
    }
    ctx->pc = 0x175B2Cu;
    {
        const bool branch_taken_0x175b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b2c) {
            ctx->pc = 0x175B38u;
            goto label_175b38;
        }
    }
    ctx->pc = 0x175B34u;
label_175b34:
    // 0x175b34: 0x0  nop
    ctx->pc = 0x175b34u;
    // NOP
label_175b38:
    // 0x175b38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x175b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_175b3c:
    // 0x175b3c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x175b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_175b40:
    // 0x175b40: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x175b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_175b44:
    // 0x175b44: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x175b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_175b48:
    // 0x175b48: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x175b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_175b4c:
    // 0x175b4c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x175b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_175b50:
    // 0x175b50: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x175b50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_175b54:
    // 0x175b54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x175b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_175b58:
    // 0x175b58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x175b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_175b5c:
    // 0x175b5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_175b60:
    if (ctx->pc == 0x175B60u) {
        ctx->pc = 0x175B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B5Cu;
        // 0x175b60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B64u;
        goto label_175b64;
    }
    ctx->pc = 0x175B5Cu;
    {
        const bool branch_taken_0x175b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B5Cu;
        // 0x175b60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b5c) {
            ctx->pc = 0x175B70u;
            goto label_175b70;
        }
    }
    ctx->pc = 0x175B64u;
label_175b64:
    // 0x175b64: 0x10000002  b           . + 4 + (0x2 << 2)
label_175b68:
    if (ctx->pc == 0x175B68u) {
        ctx->pc = 0x175B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B64u;
        // 0x175b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B6Cu;
        goto label_175b6c;
    }
    ctx->pc = 0x175B64u;
    {
        const bool branch_taken_0x175b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B64u;
        // 0x175b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b64) {
            ctx->pc = 0x175B70u;
            goto label_175b70;
        }
    }
    ctx->pc = 0x175B6Cu;
label_175b6c:
    // 0x175b6c: 0x0  nop
    ctx->pc = 0x175b6cu;
    // NOP
label_175b70:
    // 0x175b70: 0x1000009d  b           . + 4 + (0x9D << 2)
label_175b74:
    if (ctx->pc == 0x175B74u) {
        ctx->pc = 0x175B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B70u;
        // 0x175b74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B78u;
        goto label_175b78;
    }
    ctx->pc = 0x175B70u;
    {
        const bool branch_taken_0x175b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B70u;
        // 0x175b74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b70) {
            ctx->pc = 0x175DE8u;
            goto label_175de8;
        }
    }
    ctx->pc = 0x175B78u;
label_175b78:
    // 0x175b78: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x175b78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175b7c:
    // 0x175b7c: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x175b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
label_175b80:
    // 0x175b80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_175b84:
    if (ctx->pc == 0x175B84u) {
        ctx->pc = 0x175B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B80u;
        // 0x175b84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B88u;
        goto label_175b88;
    }
    ctx->pc = 0x175B80u;
    {
        const bool branch_taken_0x175b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B80u;
        // 0x175b84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b80) {
            ctx->pc = 0x175B98u;
            goto label_175b98;
        }
    }
    ctx->pc = 0x175B88u;
label_175b88:
    // 0x175b88: 0xc05db4c  jal         func_176D30
label_175b8c:
    if (ctx->pc == 0x175B8Cu) {
        ctx->pc = 0x175B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B88u;
        // 0x175b8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B90u;
        goto label_175b90;
    }
    ctx->pc = 0x175B88u;
    SET_GPR_U32(ctx, 31, 0x175B90u);
    ctx->pc = 0x175B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B88u;
    // 0x175b8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x175B88u, 0x175B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B90u;
label_175b90:
    // 0x175b90: 0x10000095  b           . + 4 + (0x95 << 2)
label_175b94:
    if (ctx->pc == 0x175B94u) {
        ctx->pc = 0x175B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B90u;
        // 0x175b94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B98u;
        goto label_175b98;
    }
    ctx->pc = 0x175B90u;
    {
        const bool branch_taken_0x175b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B90u;
        // 0x175b94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b90) {
            ctx->pc = 0x175DE8u;
            goto label_175de8;
        }
    }
    ctx->pc = 0x175B98u;
label_175b98:
    // 0x175b98: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_175b9c:
    if (ctx->pc == 0x175B9Cu) {
        ctx->pc = 0x175B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B98u;
        // 0x175b9c: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BA0u;
        goto label_175ba0;
    }
    ctx->pc = 0x175B98u;
    {
        const bool branch_taken_0x175b98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B98u;
        // 0x175b9c: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b98) {
            ctx->pc = 0x175BD0u;
            goto label_175bd0;
        }
    }
    ctx->pc = 0x175BA0u;
label_175ba0:
    // 0x175ba0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_175ba4:
    if (ctx->pc == 0x175BA4u) {
        ctx->pc = 0x175BA8u;
        goto label_175ba8;
    }
    ctx->pc = 0x175BA0u;
    {
        const bool branch_taken_0x175ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ba0) {
            ctx->pc = 0x175BD0u;
            goto label_175bd0;
        }
    }
    ctx->pc = 0x175BA8u;
label_175ba8:
    // 0x175ba8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_175bac:
    if (ctx->pc == 0x175BACu) {
        ctx->pc = 0x175BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BA8u;
        // 0x175bac: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BB0u;
        goto label_175bb0;
    }
    ctx->pc = 0x175BA8u;
    {
        const bool branch_taken_0x175ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BA8u;
        // 0x175bac: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ba8) {
            ctx->pc = 0x175BB8u;
            goto label_175bb8;
        }
    }
    ctx->pc = 0x175BB0u;
label_175bb0:
    // 0x175bb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_175bb4:
    if (ctx->pc == 0x175BB4u) {
        ctx->pc = 0x175BB8u;
        goto label_175bb8;
    }
    ctx->pc = 0x175BB0u;
    {
        const bool branch_taken_0x175bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175bb0) {
            ctx->pc = 0x175BD0u;
            goto label_175bd0;
        }
    }
    ctx->pc = 0x175BB8u;
label_175bb8:
    // 0x175bb8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_175bbc:
    // 0x175bbc: 0x8e63021c  lw          $v1, 0x21C($s3)
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
label_175bc0:
    // 0x175bc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x175bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_175bc4:
    // 0x175bc4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_175bc8:
    if (ctx->pc == 0x175BC8u) {
        ctx->pc = 0x175BCCu;
        goto label_175bcc;
    }
    ctx->pc = 0x175BC4u;
    {
        const bool branch_taken_0x175bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bc4) {
            ctx->pc = 0x175D98u;
            goto label_175d98;
        }
    }
    ctx->pc = 0x175BCCu;
label_175bcc:
    // 0x175bcc: 0x0  nop
    ctx->pc = 0x175bccu;
    // NOP
label_175bd0:
    // 0x175bd0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x175bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_175bd4:
    // 0x175bd4: 0x40f809  jalr        $v0
label_175bd8:
    if (ctx->pc == 0x175BD8u) {
        ctx->pc = 0x175BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BD4u;
        // 0x175bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BDCu;
        goto label_175bdc;
    }
    ctx->pc = 0x175BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175BDCu);
        ctx->pc = 0x175BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BD4u;
        // 0x175bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175BD4u, 0x175BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175BDCu;
label_175bdc:
    // 0x175bdc: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x175bdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175be0:
    // 0x175be0: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x175be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_175be4:
    // 0x175be4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_175be8:
    if (ctx->pc == 0x175BE8u) {
        ctx->pc = 0x175BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BE4u;
        // 0x175be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BECu;
        goto label_175bec;
    }
    ctx->pc = 0x175BE4u;
    {
        const bool branch_taken_0x175be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BE4u;
        // 0x175be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175be4) {
            ctx->pc = 0x175C00u;
            goto label_175c00;
        }
    }
    ctx->pc = 0x175BECu;
label_175bec:
    // 0x175bec: 0xc05db4c  jal         func_176D30
label_175bf0:
    if (ctx->pc == 0x175BF0u) {
        ctx->pc = 0x175BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BECu;
        // 0x175bf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BF4u;
        goto label_175bf4;
    }
    ctx->pc = 0x175BECu;
    SET_GPR_U32(ctx, 31, 0x175BF4u);
    ctx->pc = 0x175BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BECu;
    // 0x175bf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x175BECu, 0x175BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BF4u;
label_175bf4:
    // 0x175bf4: 0x1000007c  b           . + 4 + (0x7C << 2)
label_175bf8:
    if (ctx->pc == 0x175BF8u) {
        ctx->pc = 0x175BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BF4u;
        // 0x175bf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BFCu;
        goto label_175bfc;
    }
    ctx->pc = 0x175BF4u;
    {
        const bool branch_taken_0x175bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BF4u;
        // 0x175bf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bf4) {
            ctx->pc = 0x175DE8u;
            goto label_175de8;
        }
    }
    ctx->pc = 0x175BFCu;
label_175bfc:
    // 0x175bfc: 0x0  nop
    ctx->pc = 0x175bfcu;
    // NOP
label_175c00:
    // 0x175c00: 0x30830006  andi        $v1, $a0, 0x6
    ctx->pc = 0x175c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_175c04:
    // 0x175c04: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_175c08:
    if (ctx->pc == 0x175C08u) {
        ctx->pc = 0x175C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C04u;
        // 0x175c08: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C0Cu;
        goto label_175c0c;
    }
    ctx->pc = 0x175C04u;
    {
        const bool branch_taken_0x175c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C04u;
        // 0x175c08: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c04) {
            ctx->pc = 0x175CB0u;
            goto label_175cb0;
        }
    }
    ctx->pc = 0x175C0Cu;
label_175c0c:
    // 0x175c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_175c10:
    if (ctx->pc == 0x175C10u) {
        ctx->pc = 0x175C14u;
        goto label_175c14;
    }
    ctx->pc = 0x175C0Cu;
    {
        const bool branch_taken_0x175c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c0c) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x175C14u;
label_175c14:
    // 0x175c14: 0x3083fffb  andi        $v1, $a0, 0xFFFB
    ctx->pc = 0x175c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65531);
label_175c18:
    // 0x175c18: 0x10000025  b           . + 4 + (0x25 << 2)
label_175c1c:
    if (ctx->pc == 0x175C1Cu) {
        ctx->pc = 0x175C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C18u;
        // 0x175c1c: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C20u;
        goto label_175c20;
    }
    ctx->pc = 0x175C18u;
    {
        const bool branch_taken_0x175c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C18u;
        // 0x175c1c: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c18) {
            ctx->pc = 0x175CB0u;
            goto label_175cb0;
        }
    }
    ctx->pc = 0x175C20u;
label_175c20:
    // 0x175c20: 0x9243002f  lbu         $v1, 0x2F($s2)
    ctx->pc = 0x175c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
label_175c24:
    // 0x175c24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x175c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_175c28:
    // 0x175c28: 0xa243002f  sb          $v1, 0x2F($s2)
    ctx->pc = 0x175c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
label_175c2c:
    // 0x175c2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x175c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_175c30:
    // 0x175c30: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_175c34:
    if (ctx->pc == 0x175C34u) {
        ctx->pc = 0x175C38u;
        goto label_175c38;
    }
    ctx->pc = 0x175C30u;
    {
        const bool branch_taken_0x175c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c30) {
            ctx->pc = 0x175C90u;
            goto label_175c90;
        }
    }
    ctx->pc = 0x175C38u;
label_175c38:
    // 0x175c38: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x175c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_175c3c:
    // 0x175c3c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_175c40:
    // 0x175c40: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x175c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_175c44:
    // 0x175c44: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x175c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_175c48:
    // 0x175c48: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x175c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_175c4c:
    // 0x175c4c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_175c50:
    if (ctx->pc == 0x175C50u) {
        ctx->pc = 0x175C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C4Cu;
        // 0x175c50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C54u;
        goto label_175c54;
    }
    ctx->pc = 0x175C4Cu;
    {
        const bool branch_taken_0x175c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C4Cu;
        // 0x175c50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c4c) {
            ctx->pc = 0x175C60u;
            goto label_175c60;
        }
    }
    ctx->pc = 0x175C54u;
label_175c54:
    // 0x175c54: 0x10000010  b           . + 4 + (0x10 << 2)
label_175c58:
    if (ctx->pc == 0x175C58u) {
        ctx->pc = 0x175C5Cu;
        goto label_175c5c;
    }
    ctx->pc = 0x175C54u;
    {
        const bool branch_taken_0x175c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c54) {
            ctx->pc = 0x175C98u;
            goto label_175c98;
        }
    }
    ctx->pc = 0x175C5Cu;
label_175c5c:
    // 0x175c5c: 0x0  nop
    ctx->pc = 0x175c5cu;
    // NOP
label_175c60:
    // 0x175c60: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x175c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_175c64:
    // 0x175c64: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x175c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_175c68:
    // 0x175c68: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_175c6c:
    if (ctx->pc == 0x175C6Cu) {
        ctx->pc = 0x175C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C68u;
        // 0x175c6c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C70u;
        goto label_175c70;
    }
    ctx->pc = 0x175C68u;
    {
        const bool branch_taken_0x175c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C68u;
        // 0x175c6c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c68) {
            ctx->pc = 0x175C88u;
            goto label_175c88;
        }
    }
    ctx->pc = 0x175C70u;
label_175c70:
    // 0x175c70: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_175c74:
    // 0x175c74: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x175c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_175c78:
    // 0x175c78: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x175c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_175c7c:
    // 0x175c7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x175c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_175c80:
    // 0x175c80: 0x10000003  b           . + 4 + (0x3 << 2)
label_175c84:
    if (ctx->pc == 0x175C84u) {
        ctx->pc = 0x175C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C80u;
        // 0x175c84: 0xa243002f  sb          $v1, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C88u;
        goto label_175c88;
    }
    ctx->pc = 0x175C80u;
    {
        const bool branch_taken_0x175c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C80u;
        // 0x175c84: 0xa243002f  sb          $v1, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c80) {
            ctx->pc = 0x175C90u;
            goto label_175c90;
        }
    }
    ctx->pc = 0x175C88u;
label_175c88:
    // 0x175c88: 0xa244002f  sb          $a0, 0x2F($s2)
    ctx->pc = 0x175c88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 4));
label_175c8c:
    // 0x175c8c: 0x0  nop
    ctx->pc = 0x175c8cu;
    // NOP
label_175c90:
    // 0x175c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175c94:
    // 0x175c94: 0x0  nop
    ctx->pc = 0x175c94u;
    // NOP
label_175c98:
    // 0x175c98: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_175c9c:
    if (ctx->pc == 0x175C9Cu) {
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CA0u;
        goto label_175ca0;
    }
    ctx->pc = 0x175C98u;
    {
        const bool branch_taken_0x175c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c98) {
            ctx->pc = 0x175CB0u;
            goto label_175cb0;
        }
    }
    ctx->pc = 0x175CA0u;
label_175ca0:
    // 0x175ca0: 0xc05db4c  jal         func_176D30
label_175ca4:
    if (ctx->pc == 0x175CA4u) {
        ctx->pc = 0x175CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA0u;
        // 0x175ca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CA8u;
        goto label_175ca8;
    }
    ctx->pc = 0x175CA0u;
    SET_GPR_U32(ctx, 31, 0x175CA8u);
    ctx->pc = 0x175CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CA0u;
    // 0x175ca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x175CA0u, 0x175CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CA8u;
label_175ca8:
    // 0x175ca8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_175cac:
    if (ctx->pc == 0x175CACu) {
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CB0u;
        goto label_175cb0;
    }
    ctx->pc = 0x175CA8u;
    {
        const bool branch_taken_0x175ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ca8) {
            ctx->pc = 0x175DE8u;
            goto label_175de8;
        }
    }
    ctx->pc = 0x175CB0u;
label_175cb0:
    // 0x175cb0: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x175cb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175cb4:
    // 0x175cb4: 0x30830018  andi        $v1, $a0, 0x18
    ctx->pc = 0x175cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24);
label_175cb8:
    // 0x175cb8: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_175cbc:
    if (ctx->pc == 0x175CBCu) {
        ctx->pc = 0x175CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CB8u;
        // 0x175cbc: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CC0u;
        goto label_175cc0;
    }
    ctx->pc = 0x175CB8u;
    {
        const bool branch_taken_0x175cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CB8u;
        // 0x175cbc: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cb8) {
            ctx->pc = 0x175D98u;
            goto label_175d98;
        }
    }
    ctx->pc = 0x175CC0u;
label_175cc0:
    // 0x175cc0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_175cc4:
    if (ctx->pc == 0x175CC4u) {
        ctx->pc = 0x175CC8u;
        goto label_175cc8;
    }
    ctx->pc = 0x175CC0u;
    {
        const bool branch_taken_0x175cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cc0) {
            ctx->pc = 0x175D40u;
            goto label_175d40;
        }
    }
    ctx->pc = 0x175CC8u;
label_175cc8:
    // 0x175cc8: 0x3083ffef  andi        $v1, $a0, 0xFFEF
    ctx->pc = 0x175cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
label_175ccc:
    // 0x175ccc: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x175cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_175cd0:
    // 0x175cd0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x175cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_175cd4:
    // 0x175cd4: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x175cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_175cd8:
    // 0x175cd8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x175cd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_175cdc:
    // 0x175cdc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x175cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_175ce0:
    // 0x175ce0: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x175ce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175ce4:
    // 0x175ce4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x175ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_175ce8:
    // 0x175ce8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x175ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_175cec:
    // 0x175cec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_175cf0:
    if (ctx->pc == 0x175CF0u) {
        ctx->pc = 0x175CF4u;
        goto label_175cf4;
    }
    ctx->pc = 0x175CECu;
    {
        const bool branch_taken_0x175cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cec) {
            ctx->pc = 0x175D30u;
            goto label_175d30;
        }
    }
    ctx->pc = 0x175CF4u;
label_175cf4:
    // 0x175cf4: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x175cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_175cf8:
    // 0x175cf8: 0x26630240  addiu       $v1, $s3, 0x240
    ctx->pc = 0x175cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_175cfc:
    // 0x175cfc: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x175cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_175d00:
    // 0x175d00: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x175d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_175d04:
    // 0x175d04: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x175d04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_175d08:
    // 0x175d08: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_175d0c:
    // 0x175d0c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x175d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_175d10:
    // 0x175d10: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_175d14:
    // 0x175d14: 0x26630250  addiu       $v1, $s3, 0x250
    ctx->pc = 0x175d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
label_175d18:
    // 0x175d18: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x175d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_175d1c:
    // 0x175d1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x175d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_175d20:
    // 0x175d20: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x175d20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_175d24:
    // 0x175d24: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_175d28:
    // 0x175d28: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x175d28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_175d2c:
    // 0x175d2c: 0x0  nop
    ctx->pc = 0x175d2cu;
    // NOP
label_175d30:
    // 0x175d30: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x175d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_175d34:
    // 0x175d34: 0x10000016  b           . + 4 + (0x16 << 2)
label_175d38:
    if (ctx->pc == 0x175D38u) {
        ctx->pc = 0x175D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D34u;
        // 0x175d38: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D3Cu;
        goto label_175d3c;
    }
    ctx->pc = 0x175D34u;
    {
        const bool branch_taken_0x175d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D34u;
        // 0x175d38: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d34) {
            ctx->pc = 0x175D90u;
            goto label_175d90;
        }
    }
    ctx->pc = 0x175D3Cu;
label_175d3c:
    // 0x175d3c: 0x0  nop
    ctx->pc = 0x175d3cu;
    // NOP
label_175d40:
    // 0x175d40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175d44:
    // 0x175d44: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x175d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_175d48:
    // 0x175d48: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x175d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_175d4c:
    // 0x175d4c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x175d4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_175d50:
    // 0x175d50: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_175d54:
    // 0x175d54: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x175d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_175d58:
    // 0x175d58: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x175d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_175d5c:
    // 0x175d5c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x175d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
label_175d60:
    // 0x175d60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x175d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_175d64:
    // 0x175d64: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x175d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_175d68:
    // 0x175d68: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_175d6c:
    // 0x175d6c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x175d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_175d70:
    // 0x175d70: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x175d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_175d74:
    // 0x175d74: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x175d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_175d78:
    // 0x175d78: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_175d7c:
    // 0x175d7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x175d7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_175d80:
    // 0x175d80: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x175d80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_175d84:
    // 0x175d84: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x175d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_175d88:
    // 0x175d88: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x175d88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_175d8c:
    // 0x175d8c: 0x0  nop
    ctx->pc = 0x175d8cu;
    // NOP
label_175d90:
    // 0x175d90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_175d94:
    // 0x175d94: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x175d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
label_175d98:
    // 0x175d98: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x175d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175d9c:
    // 0x175d9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x175d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_175da0:
    // 0x175da0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_175da4:
    if (ctx->pc == 0x175DA4u) {
        ctx->pc = 0x175DA8u;
        goto label_175da8;
    }
    ctx->pc = 0x175DA0u;
    {
        const bool branch_taken_0x175da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175da0) {
            ctx->pc = 0x175DD0u;
            goto label_175dd0;
        }
    }
    ctx->pc = 0x175DA8u;
label_175da8:
    // 0x175da8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x175da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_175dac:
    // 0x175dac: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x175dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_175db0:
    // 0x175db0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x175db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_175db4:
    // 0x175db4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_175db8:
    if (ctx->pc == 0x175DB8u) {
        ctx->pc = 0x175DBCu;
        goto label_175dbc;
    }
    ctx->pc = 0x175DB4u;
    {
        const bool branch_taken_0x175db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175db4) {
            ctx->pc = 0x175DD0u;
            goto label_175dd0;
        }
    }
    ctx->pc = 0x175DBCu;
label_175dbc:
    // 0x175dbc: 0x9243004f  lbu         $v1, 0x4F($s2)
    ctx->pc = 0x175dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
label_175dc0:
    // 0x175dc0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x175dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_175dc4:
    // 0x175dc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_175dc8:
    if (ctx->pc == 0x175DC8u) {
        ctx->pc = 0x175DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DC4u;
        // 0x175dc8: 0xa243004f  sb          $v1, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175DCCu;
        goto label_175dcc;
    }
    ctx->pc = 0x175DC4u;
    {
        const bool branch_taken_0x175dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175DC4u;
        // 0x175dc8: 0xa243004f  sb          $v1, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175dc4) {
            ctx->pc = 0x175DE0u;
            goto label_175de0;
        }
    }
    ctx->pc = 0x175DCCu;
label_175dcc:
    // 0x175dcc: 0x0  nop
    ctx->pc = 0x175dccu;
    // NOP
label_175dd0:
    // 0x175dd0: 0x9243004f  lbu         $v1, 0x4F($s2)
    ctx->pc = 0x175dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
label_175dd4:
    // 0x175dd4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x175dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_175dd8:
    // 0x175dd8: 0xa243004f  sb          $v1, 0x4F($s2)
    ctx->pc = 0x175dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
label_175ddc:
    // 0x175ddc: 0x0  nop
    ctx->pc = 0x175ddcu;
    // NOP
label_175de0:
    // 0x175de0: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x175de0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_175de4:
    // 0x175de4: 0x0  nop
    ctx->pc = 0x175de4u;
    // NOP
label_175de8:
    // 0x175de8: 0x1640ff63  bnez        $s2, . + 4 + (-0x9D << 2)
label_175dec:
    if (ctx->pc == 0x175DECu) {
        ctx->pc = 0x175DF0u;
        goto label_175df0;
    }
    ctx->pc = 0x175DE8u;
    {
        const bool branch_taken_0x175de8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x175de8) {
            ctx->pc = 0x175B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175b78;
        }
    }
    ctx->pc = 0x175DF0u;
label_175df0:
    // 0x175df0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_175df4:
    if (ctx->pc == 0x175DF4u) {
        ctx->pc = 0x175DF8u;
        goto label_175df8;
    }
    ctx->pc = 0x175DF0u;
    {
        const bool branch_taken_0x175df0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x175df0) {
            ctx->pc = 0x175E08u;
            goto label_175e08;
        }
    }
    ctx->pc = 0x175DF8u;
label_175df8:
    // 0x175df8: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x175df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
label_175dfc:
    // 0x175dfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_175e00:
    // 0x175e00: 0xae630234  sw          $v1, 0x234($s3)
    ctx->pc = 0x175e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 564), GPR_U32(ctx, 3));
label_175e04:
    // 0x175e04: 0x0  nop
    ctx->pc = 0x175e04u;
    // NOP
label_175e08:
    // 0x175e08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x175e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175e0c:
    // 0x175e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175e10:
    // 0x175e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175e14:
    // 0x175e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175e18:
    // 0x175e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175e1c:
    // 0x175e1c: 0x3e00008  jr          $ra
label_175e20:
    if (ctx->pc == 0x175E20u) {
        ctx->pc = 0x175E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E1Cu;
        // 0x175e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175E24u;
        goto label_fallthrough_0x175e1c;
    }
    ctx->pc = 0x175E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E1Cu;
        // 0x175e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175e1c:
    ctx->pc = 0x175E24u;
}
