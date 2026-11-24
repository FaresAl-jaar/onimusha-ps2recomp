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

// Function: sub_00250C08
// Address: 0x250c08 - 0x250da4
void sub_00250C08_0x250c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250C08_0x250c08");
#endif

    switch (ctx->pc) {
        case 0x250c08u: goto label_250c08;
        case 0x250c0cu: goto label_250c0c;
        case 0x250c10u: goto label_250c10;
        case 0x250c14u: goto label_250c14;
        case 0x250c18u: goto label_250c18;
        case 0x250c1cu: goto label_250c1c;
        case 0x250c20u: goto label_250c20;
        case 0x250c24u: goto label_250c24;
        case 0x250c28u: goto label_250c28;
        case 0x250c2cu: goto label_250c2c;
        case 0x250c30u: goto label_250c30;
        case 0x250c34u: goto label_250c34;
        case 0x250c38u: goto label_250c38;
        case 0x250c3cu: goto label_250c3c;
        case 0x250c40u: goto label_250c40;
        case 0x250c44u: goto label_250c44;
        case 0x250c48u: goto label_250c48;
        case 0x250c4cu: goto label_250c4c;
        case 0x250c50u: goto label_250c50;
        case 0x250c54u: goto label_250c54;
        case 0x250c58u: goto label_250c58;
        case 0x250c5cu: goto label_250c5c;
        case 0x250c60u: goto label_250c60;
        case 0x250c64u: goto label_250c64;
        case 0x250c68u: goto label_250c68;
        case 0x250c6cu: goto label_250c6c;
        case 0x250c70u: goto label_250c70;
        case 0x250c74u: goto label_250c74;
        case 0x250c78u: goto label_250c78;
        case 0x250c7cu: goto label_250c7c;
        case 0x250c80u: goto label_250c80;
        case 0x250c84u: goto label_250c84;
        case 0x250c88u: goto label_250c88;
        case 0x250c8cu: goto label_250c8c;
        case 0x250c90u: goto label_250c90;
        case 0x250c94u: goto label_250c94;
        case 0x250c98u: goto label_250c98;
        case 0x250c9cu: goto label_250c9c;
        case 0x250ca0u: goto label_250ca0;
        case 0x250ca4u: goto label_250ca4;
        case 0x250ca8u: goto label_250ca8;
        case 0x250cacu: goto label_250cac;
        case 0x250cb0u: goto label_250cb0;
        case 0x250cb4u: goto label_250cb4;
        case 0x250cb8u: goto label_250cb8;
        case 0x250cbcu: goto label_250cbc;
        case 0x250cc0u: goto label_250cc0;
        case 0x250cc4u: goto label_250cc4;
        case 0x250cc8u: goto label_250cc8;
        case 0x250cccu: goto label_250ccc;
        case 0x250cd0u: goto label_250cd0;
        case 0x250cd4u: goto label_250cd4;
        case 0x250cd8u: goto label_250cd8;
        case 0x250cdcu: goto label_250cdc;
        case 0x250ce0u: goto label_250ce0;
        case 0x250ce4u: goto label_250ce4;
        case 0x250ce8u: goto label_250ce8;
        case 0x250cecu: goto label_250cec;
        case 0x250cf0u: goto label_250cf0;
        case 0x250cf4u: goto label_250cf4;
        case 0x250cf8u: goto label_250cf8;
        case 0x250cfcu: goto label_250cfc;
        case 0x250d00u: goto label_250d00;
        case 0x250d04u: goto label_250d04;
        case 0x250d08u: goto label_250d08;
        case 0x250d0cu: goto label_250d0c;
        case 0x250d10u: goto label_250d10;
        case 0x250d14u: goto label_250d14;
        case 0x250d18u: goto label_250d18;
        case 0x250d1cu: goto label_250d1c;
        case 0x250d20u: goto label_250d20;
        case 0x250d24u: goto label_250d24;
        case 0x250d28u: goto label_250d28;
        case 0x250d2cu: goto label_250d2c;
        case 0x250d30u: goto label_250d30;
        case 0x250d34u: goto label_250d34;
        case 0x250d38u: goto label_250d38;
        case 0x250d3cu: goto label_250d3c;
        case 0x250d40u: goto label_250d40;
        case 0x250d44u: goto label_250d44;
        case 0x250d48u: goto label_250d48;
        case 0x250d4cu: goto label_250d4c;
        case 0x250d50u: goto label_250d50;
        case 0x250d54u: goto label_250d54;
        case 0x250d58u: goto label_250d58;
        case 0x250d5cu: goto label_250d5c;
        case 0x250d60u: goto label_250d60;
        case 0x250d64u: goto label_250d64;
        case 0x250d68u: goto label_250d68;
        case 0x250d6cu: goto label_250d6c;
        case 0x250d70u: goto label_250d70;
        case 0x250d74u: goto label_250d74;
        case 0x250d78u: goto label_250d78;
        case 0x250d7cu: goto label_250d7c;
        case 0x250d80u: goto label_250d80;
        case 0x250d84u: goto label_250d84;
        case 0x250d88u: goto label_250d88;
        case 0x250d8cu: goto label_250d8c;
        case 0x250d90u: goto label_250d90;
        case 0x250d94u: goto label_250d94;
        case 0x250d98u: goto label_250d98;
        case 0x250d9cu: goto label_250d9c;
        case 0x250da0u: goto label_250da0;
        default: break;
    }

    ctx->pc = 0x250c08u;

label_250c08:
    // 0x250c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_250c0c:
    // 0x250c0c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x250c0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250c10:
    // 0x250c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_250c14:
    // 0x250c14: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_250c18:
    if (ctx->pc == 0x250C18u) {
        ctx->pc = 0x250C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C14u;
        // 0x250c18: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C1Cu;
        goto label_250c1c;
    }
    ctx->pc = 0x250C14u;
    {
        const bool branch_taken_0x250c14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x250C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C14u;
        // 0x250c18: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c14) {
            ctx->pc = 0x250C38u;
            goto label_250c38;
        }
    }
    ctx->pc = 0x250C1Cu;
label_250c1c:
    // 0x250c1c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250c20:
    // 0x250c20: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250c24:
    // 0x250c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250c28:
    // 0x250c28: 0x2484eb98  addiu       $a0, $a0, -0x1468
    ctx->pc = 0x250c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962072));
label_250c2c:
    // 0x250c2c: 0x24a5eb28  addiu       $a1, $a1, -0x14D8
    ctx->pc = 0x250c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
label_250c30:
    // 0x250c30: 0x80941da  j           func_250768
label_250c34:
    if (ctx->pc == 0x250C34u) {
        ctx->pc = 0x250C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C30u;
        // 0x250c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C38u;
        goto label_250c38;
    }
    ctx->pc = 0x250C30u;
    ctx->pc = 0x250C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C30u;
    // 0x250c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250C38u;
label_250c38:
    // 0x250c38: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x250c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_250c3c:
    // 0x250c3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_250c40:
    if (ctx->pc == 0x250C40u) {
        ctx->pc = 0x250C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C3Cu;
        // 0x250c40: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C44u;
        goto label_250c44;
    }
    ctx->pc = 0x250C3Cu;
    {
        const bool branch_taken_0x250c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250c3c) {
            ctx->pc = 0x250C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250C3Cu;
            // 0x250c40: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250C60u;
            goto label_250c60;
        }
    }
    ctx->pc = 0x250C44u;
label_250c44:
    // 0x250c44: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250c48:
    // 0x250c48: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250c4c:
    // 0x250c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250c50:
    // 0x250c50: 0x2484eba8  addiu       $a0, $a0, -0x1458
    ctx->pc = 0x250c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962088));
label_250c54:
    // 0x250c54: 0x24a5eb58  addiu       $a1, $a1, -0x14A8
    ctx->pc = 0x250c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
label_250c58:
    // 0x250c58: 0x80941da  j           func_250768
label_250c5c:
    if (ctx->pc == 0x250C5Cu) {
        ctx->pc = 0x250C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C58u;
        // 0x250c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C60u;
        goto label_250c60;
    }
    ctx->pc = 0x250C58u;
    ctx->pc = 0x250C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C58u;
    // 0x250c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250C60u;
label_250c60:
    // 0x250c60: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_250c64:
    if (ctx->pc == 0x250C64u) {
        ctx->pc = 0x250C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C60u;
        // 0x250c64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C68u;
        goto label_250c68;
    }
    ctx->pc = 0x250C60u;
    {
        const bool branch_taken_0x250c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C60u;
        // 0x250c64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c60) {
            ctx->pc = 0x250C80u;
            goto label_250c80;
        }
    }
    ctx->pc = 0x250C68u;
label_250c68:
    // 0x250c68: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250c6c:
    // 0x250c6c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250c70:
    // 0x250c70: 0x2484ebb8  addiu       $a0, $a0, -0x1448
    ctx->pc = 0x250c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962104));
label_250c74:
    // 0x250c74: 0x24a5ebc8  addiu       $a1, $a1, -0x1438
    ctx->pc = 0x250c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962120));
label_250c78:
    // 0x250c78: 0x80941da  j           func_250768
label_250c7c:
    if (ctx->pc == 0x250C7Cu) {
        ctx->pc = 0x250C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C78u;
        // 0x250c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C80u;
        goto label_250c80;
    }
    ctx->pc = 0x250C78u;
    ctx->pc = 0x250C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C78u;
    // 0x250c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250C80u;
label_250c80:
    // 0x250c80: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_250c84:
    if (ctx->pc == 0x250C84u) {
        ctx->pc = 0x250C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C80u;
        // 0x250c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C88u;
        goto label_250c88;
    }
    ctx->pc = 0x250C80u;
    {
        const bool branch_taken_0x250c80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x250C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C80u;
        // 0x250c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c80) {
            ctx->pc = 0x250D00u;
            goto label_250d00;
        }
    }
    ctx->pc = 0x250C88u;
label_250c88:
    // 0x250c88: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x250c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_250c8c:
    // 0x250c8c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x250c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_250c90:
    // 0x250c90: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x250c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_250c94:
    // 0x250c94: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x250c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250c98:
    // 0x250c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250c9c:
    // 0x250c9c: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x250c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_250ca0:
    // 0x250ca0: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x250ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_250ca4:
    // 0x250ca4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x250ca4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_250ca8:
    // 0x250ca8: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x250ca8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_250cac:
    // 0x250cac: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x250cacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_250cb0:
    // 0x250cb0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x250cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_250cb4:
    // 0x250cb4: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x250cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_250cb8:
    // 0x250cb8: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x250cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_250cbc:
    // 0x250cbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250cc0:
    // 0x250cc0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x250cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_250cc4:
    // 0x250cc4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x250cc4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_250cc8:
    // 0x250cc8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x250cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_250ccc:
    // 0x250ccc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_250cd0:
    if (ctx->pc == 0x250CD0u) {
        ctx->pc = 0x250CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CCCu;
        // 0x250cd0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CD4u;
        goto label_250cd4;
    }
    ctx->pc = 0x250CCCu;
    {
        const bool branch_taken_0x250ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ccc) {
            ctx->pc = 0x250CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250CCCu;
            // 0x250cd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250CD4u;
            goto label_250cd4;
        }
    }
    ctx->pc = 0x250CD4u;
label_250cd4:
    // 0x250cd4: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x250cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_250cd8:
    // 0x250cd8: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x250cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_250cdc:
    // 0x250cdc: 0x2810  mfhi        $a1
    ctx->pc = 0x250cdcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_250ce0:
    // 0x250ce0: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x250ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
label_250ce4:
    // 0x250ce4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x250ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_250ce8:
    // 0x250ce8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x250ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250cec:
    // 0x250cec: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x250cecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_250cf0:
    // 0x250cf0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x250cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_250cf4:
    // 0x250cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_250cf8:
    // 0x250cf8: 0x10000027  b           . + 4 + (0x27 << 2)
label_250cfc:
    if (ctx->pc == 0x250CFCu) {
        ctx->pc = 0x250CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CF8u;
        // 0x250cfc: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D00u;
        goto label_250d00;
    }
    ctx->pc = 0x250CF8u;
    {
        const bool branch_taken_0x250cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CF8u;
        // 0x250cfc: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cf8) {
            ctx->pc = 0x250D98u;
            goto label_250d98;
        }
    }
    ctx->pc = 0x250D00u;
label_250d00:
    // 0x250d00: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_250d04:
    if (ctx->pc == 0x250D04u) {
        ctx->pc = 0x250D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D00u;
        // 0x250d04: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D08u;
        goto label_250d08;
    }
    ctx->pc = 0x250D00u;
    {
        const bool branch_taken_0x250d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x250d00) {
            ctx->pc = 0x250D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250D00u;
            // 0x250d04: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250D80u;
            goto label_250d80;
        }
    }
    ctx->pc = 0x250D08u;
label_250d08:
    // 0x250d08: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x250d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_250d0c:
    // 0x250d0c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x250d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_250d10:
    // 0x250d10: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x250d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_250d14:
    // 0x250d14: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x250d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250d18:
    // 0x250d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250d1c:
    // 0x250d1c: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x250d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_250d20:
    // 0x250d20: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x250d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_250d24:
    // 0x250d24: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x250d24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_250d28:
    // 0x250d28: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x250d28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_250d2c:
    // 0x250d2c: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x250d2cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_250d30:
    // 0x250d30: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x250d30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_250d34:
    // 0x250d34: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x250d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_250d38:
    // 0x250d38: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x250d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_250d3c:
    // 0x250d3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250d40:
    // 0x250d40: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x250d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_250d44:
    // 0x250d44: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x250d44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_250d48:
    // 0x250d48: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x250d48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_250d4c:
    // 0x250d4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_250d50:
    if (ctx->pc == 0x250D50u) {
        ctx->pc = 0x250D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D4Cu;
        // 0x250d50: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D54u;
        goto label_250d54;
    }
    ctx->pc = 0x250D4Cu;
    {
        const bool branch_taken_0x250d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x250d4c) {
            ctx->pc = 0x250D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250D4Cu;
            // 0x250d50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250D54u;
            goto label_250d54;
        }
    }
    ctx->pc = 0x250D54u;
label_250d54:
    // 0x250d54: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x250d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_250d58:
    // 0x250d58: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x250d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_250d5c:
    // 0x250d5c: 0x2810  mfhi        $a1
    ctx->pc = 0x250d5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_250d60:
    // 0x250d60: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x250d60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
label_250d64:
    // 0x250d64: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x250d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_250d68:
    // 0x250d68: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x250d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250d6c:
    // 0x250d6c: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x250d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_250d70:
    // 0x250d70: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x250d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_250d74:
    // 0x250d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_250d78:
    // 0x250d78: 0x10000007  b           . + 4 + (0x7 << 2)
label_250d7c:
    if (ctx->pc == 0x250D7Cu) {
        ctx->pc = 0x250D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D78u;
        // 0x250d7c: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D80u;
        goto label_250d80;
    }
    ctx->pc = 0x250D78u;
    {
        const bool branch_taken_0x250d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D78u;
        // 0x250d7c: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d78) {
            ctx->pc = 0x250D98u;
            goto label_250d98;
        }
    }
    ctx->pc = 0x250D80u;
label_250d80:
    // 0x250d80: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x250d80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_250d84:
    // 0x250d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_250d88:
    if (ctx->pc == 0x250D88u) {
        ctx->pc = 0x250D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D84u;
        // 0x250d88: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D8Cu;
        goto label_250d8c;
    }
    ctx->pc = 0x250D84u;
    {
        const bool branch_taken_0x250d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D84u;
        // 0x250d88: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d84) {
            ctx->pc = 0x250D98u;
            goto label_250d98;
        }
    }
    ctx->pc = 0x250D8Cu;
label_250d8c:
    // 0x250d8c: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x250d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_250d90:
    // 0x250d90: 0x40f809  jalr        $v0
label_250d94:
    if (ctx->pc == 0x250D94u) {
        ctx->pc = 0x250D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D90u;
        // 0x250d94: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D98u;
        goto label_250d98;
    }
    ctx->pc = 0x250D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250D98u);
        ctx->pc = 0x250D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D90u;
        // 0x250d94: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250D90u, 0x250D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250D98u;
label_250d98:
    // 0x250d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250d9c:
    // 0x250d9c: 0x3e00008  jr          $ra
label_250da0:
    if (ctx->pc == 0x250DA0u) {
        ctx->pc = 0x250DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D9Cu;
        // 0x250da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DA4u;
        goto label_fallthrough_0x250d9c;
    }
    ctx->pc = 0x250D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D9Cu;
        // 0x250da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250d9c:
    ctx->pc = 0x250DA4u;
}
