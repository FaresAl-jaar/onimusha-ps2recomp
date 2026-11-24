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

// Function: sub_00251BF8
// Address: 0x251bf8 - 0x251d20
void sub_00251BF8_0x251bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251BF8_0x251bf8");
#endif

    switch (ctx->pc) {
        case 0x251bf8u: goto label_251bf8;
        case 0x251bfcu: goto label_251bfc;
        case 0x251c00u: goto label_251c00;
        case 0x251c04u: goto label_251c04;
        case 0x251c08u: goto label_251c08;
        case 0x251c0cu: goto label_251c0c;
        case 0x251c10u: goto label_251c10;
        case 0x251c14u: goto label_251c14;
        case 0x251c18u: goto label_251c18;
        case 0x251c1cu: goto label_251c1c;
        case 0x251c20u: goto label_251c20;
        case 0x251c24u: goto label_251c24;
        case 0x251c28u: goto label_251c28;
        case 0x251c2cu: goto label_251c2c;
        case 0x251c30u: goto label_251c30;
        case 0x251c34u: goto label_251c34;
        case 0x251c38u: goto label_251c38;
        case 0x251c3cu: goto label_251c3c;
        case 0x251c40u: goto label_251c40;
        case 0x251c44u: goto label_251c44;
        case 0x251c48u: goto label_251c48;
        case 0x251c4cu: goto label_251c4c;
        case 0x251c50u: goto label_251c50;
        case 0x251c54u: goto label_251c54;
        case 0x251c58u: goto label_251c58;
        case 0x251c5cu: goto label_251c5c;
        case 0x251c60u: goto label_251c60;
        case 0x251c64u: goto label_251c64;
        case 0x251c68u: goto label_251c68;
        case 0x251c6cu: goto label_251c6c;
        case 0x251c70u: goto label_251c70;
        case 0x251c74u: goto label_251c74;
        case 0x251c78u: goto label_251c78;
        case 0x251c7cu: goto label_251c7c;
        case 0x251c80u: goto label_251c80;
        case 0x251c84u: goto label_251c84;
        case 0x251c88u: goto label_251c88;
        case 0x251c8cu: goto label_251c8c;
        case 0x251c90u: goto label_251c90;
        case 0x251c94u: goto label_251c94;
        case 0x251c98u: goto label_251c98;
        case 0x251c9cu: goto label_251c9c;
        case 0x251ca0u: goto label_251ca0;
        case 0x251ca4u: goto label_251ca4;
        case 0x251ca8u: goto label_251ca8;
        case 0x251cacu: goto label_251cac;
        case 0x251cb0u: goto label_251cb0;
        case 0x251cb4u: goto label_251cb4;
        case 0x251cb8u: goto label_251cb8;
        case 0x251cbcu: goto label_251cbc;
        case 0x251cc0u: goto label_251cc0;
        case 0x251cc4u: goto label_251cc4;
        case 0x251cc8u: goto label_251cc8;
        case 0x251cccu: goto label_251ccc;
        case 0x251cd0u: goto label_251cd0;
        case 0x251cd4u: goto label_251cd4;
        case 0x251cd8u: goto label_251cd8;
        case 0x251cdcu: goto label_251cdc;
        case 0x251ce0u: goto label_251ce0;
        case 0x251ce4u: goto label_251ce4;
        case 0x251ce8u: goto label_251ce8;
        case 0x251cecu: goto label_251cec;
        case 0x251cf0u: goto label_251cf0;
        case 0x251cf4u: goto label_251cf4;
        case 0x251cf8u: goto label_251cf8;
        case 0x251cfcu: goto label_251cfc;
        case 0x251d00u: goto label_251d00;
        case 0x251d04u: goto label_251d04;
        case 0x251d08u: goto label_251d08;
        case 0x251d0cu: goto label_251d0c;
        case 0x251d10u: goto label_251d10;
        case 0x251d14u: goto label_251d14;
        case 0x251d18u: goto label_251d18;
        case 0x251d1cu: goto label_251d1c;
        default: break;
    }

    ctx->pc = 0x251bf8u;

label_251bf8:
    // 0x251bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_251bfc:
    // 0x251bfc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_251c00:
    if (ctx->pc == 0x251C00u) {
        ctx->pc = 0x251C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BFCu;
        // 0x251c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C04u;
        goto label_251c04;
    }
    ctx->pc = 0x251BFCu;
    {
        const bool branch_taken_0x251bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BFCu;
        // 0x251c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bfc) {
            ctx->pc = 0x251C20u;
            goto label_251c20;
        }
    }
    ctx->pc = 0x251C04u;
label_251c04:
    // 0x251c04: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251c08:
    // 0x251c08: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251c0c:
    // 0x251c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251c10:
    // 0x251c10: 0x2484ed70  addiu       $a0, $a0, -0x1290
    ctx->pc = 0x251c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962544));
label_251c14:
    // 0x251c14: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x251c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
label_251c18:
    // 0x251c18: 0x80944dc  j           func_251370
label_251c1c:
    if (ctx->pc == 0x251C1Cu) {
        ctx->pc = 0x251C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C18u;
        // 0x251c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C20u;
        goto label_251c20;
    }
    ctx->pc = 0x251C18u;
    ctx->pc = 0x251C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C18u;
    // 0x251c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x251C20u;
label_251c20:
    // 0x251c20: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x251c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_251c24:
    // 0x251c24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_251c28:
    if (ctx->pc == 0x251C28u) {
        ctx->pc = 0x251C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C24u;
        // 0x251c28: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C2Cu;
        goto label_251c2c;
    }
    ctx->pc = 0x251C24u;
    {
        const bool branch_taken_0x251c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C24u;
        // 0x251c28: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c24) {
            ctx->pc = 0x251C48u;
            goto label_251c48;
        }
    }
    ctx->pc = 0x251C2Cu;
label_251c2c:
    // 0x251c2c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251c30:
    // 0x251c30: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251c34:
    // 0x251c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251c38:
    // 0x251c38: 0x2484ed80  addiu       $a0, $a0, -0x1280
    ctx->pc = 0x251c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
label_251c3c:
    // 0x251c3c: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_251c40:
    // 0x251c40: 0x80944dc  j           func_251370
label_251c44:
    if (ctx->pc == 0x251C44u) {
        ctx->pc = 0x251C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C40u;
        // 0x251c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C48u;
        goto label_251c48;
    }
    ctx->pc = 0x251C40u;
    ctx->pc = 0x251C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C40u;
    // 0x251c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x251C48u;
label_251c48:
    // 0x251c48: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_251c4c:
    if (ctx->pc == 0x251C4Cu) {
        ctx->pc = 0x251C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C48u;
        // 0x251c4c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C50u;
        goto label_251c50;
    }
    ctx->pc = 0x251C48u;
    {
        const bool branch_taken_0x251c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c48) {
            ctx->pc = 0x251C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251C48u;
            // 0x251c4c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CDCu;
            goto label_251cdc;
        }
    }
    ctx->pc = 0x251C50u;
label_251c50:
    // 0x251c50: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x251c50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_251c54:
    // 0x251c54: 0x19200030  blez        $t1, . + 4 + (0x30 << 2)
label_251c58:
    if (ctx->pc == 0x251C58u) {
        ctx->pc = 0x251C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C54u;
        // 0x251c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C5Cu;
        goto label_251c5c;
    }
    ctx->pc = 0x251C54u;
    {
        const bool branch_taken_0x251c54 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x251C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C54u;
        // 0x251c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c54) {
            ctx->pc = 0x251D18u;
            goto label_251d18;
        }
    }
    ctx->pc = 0x251C5Cu;
label_251c5c:
    // 0x251c5c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x251c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_251c60:
    // 0x251c60: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
label_251c64:
    if (ctx->pc == 0x251C64u) {
        ctx->pc = 0x251C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C60u;
        // 0x251c64: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C68u;
        goto label_251c68;
    }
    ctx->pc = 0x251C60u;
    {
        const bool branch_taken_0x251c60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C60u;
        // 0x251c64: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c60) {
            ctx->pc = 0x251D18u;
            goto label_251d18;
        }
    }
    ctx->pc = 0x251C68u;
label_251c68:
    // 0x251c68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x251c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_251c6c:
    // 0x251c6c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x251c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_251c70:
    // 0x251c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_251c74:
    // 0x251c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_251c78:
    if (ctx->pc == 0x251C78u) {
        ctx->pc = 0x251C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C74u;
        // 0x251c78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C7Cu;
        goto label_251c7c;
    }
    ctx->pc = 0x251C74u;
    {
        const bool branch_taken_0x251c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C74u;
        // 0x251c78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c74) {
            ctx->pc = 0x251C98u;
            goto label_251c98;
        }
    }
    ctx->pc = 0x251C7Cu;
label_251c7c:
    // 0x251c7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x251c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251c80:
    // 0x251c80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x251c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_251c84:
    // 0x251c84: 0x0  nop
    ctx->pc = 0x251c84u;
    // NOP
label_251c88:
    // 0x251c88: 0x0  nop
    ctx->pc = 0x251c88u;
    // NOP
label_251c8c:
    // 0x251c8c: 0x0  nop
    ctx->pc = 0x251c8cu;
    // NOP
label_251c90:
    // 0x251c90: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_251c94:
    if (ctx->pc == 0x251C94u) {
        ctx->pc = 0x251C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C90u;
        // 0x251c94: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251C98u;
        goto label_251c98;
    }
    ctx->pc = 0x251C90u;
    {
        const bool branch_taken_0x251c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C90u;
        // 0x251c94: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c90) {
            ctx->pc = 0x251C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251c7c;
        }
    }
    ctx->pc = 0x251C98u;
label_251c98:
    // 0x251c98: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x251c98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_251c9c:
    // 0x251c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251ca0:
    // 0x251ca0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_251ca4:
    if (ctx->pc == 0x251CA4u) {
        ctx->pc = 0x251CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CA0u;
        // 0x251ca4: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CA8u;
        goto label_251ca8;
    }
    ctx->pc = 0x251CA0u;
    {
        const bool branch_taken_0x251ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251ca0) {
            ctx->pc = 0x251CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CA0u;
            // 0x251ca4: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CD0u;
            goto label_251cd0;
        }
    }
    ctx->pc = 0x251CA8u;
label_251ca8:
    // 0x251ca8: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
label_251cac:
    if (ctx->pc == 0x251CACu) {
        ctx->pc = 0x251CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CA8u;
        // 0x251cac: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CB0u;
        goto label_251cb0;
    }
    ctx->pc = 0x251CA8u;
    {
        const bool branch_taken_0x251ca8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ca8) {
            ctx->pc = 0x251CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CA8u;
            // 0x251cac: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CD0u;
            goto label_251cd0;
        }
    }
    ctx->pc = 0x251CB0u;
label_251cb0:
    // 0x251cb0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x251cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_251cb4:
    // 0x251cb4: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_251cb8:
    // 0x251cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251cbc:
    // 0x251cbc: 0x54480004  bnel        $v0, $t0, . + 4 + (0x4 << 2)
label_251cc0:
    if (ctx->pc == 0x251CC0u) {
        ctx->pc = 0x251CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CBCu;
        // 0x251cc0: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CC4u;
        goto label_251cc4;
    }
    ctx->pc = 0x251CBCu;
    {
        const bool branch_taken_0x251cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x251cbc) {
            ctx->pc = 0x251CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CBCu;
            // 0x251cc0: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CD0u;
            goto label_251cd0;
        }
    }
    ctx->pc = 0x251CC4u;
label_251cc4:
    // 0x251cc4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x251cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_251cc8:
    // 0x251cc8: 0x10000012  b           . + 4 + (0x12 << 2)
label_251ccc:
    if (ctx->pc == 0x251CCCu) {
        ctx->pc = 0x251CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CC8u;
        // 0x251ccc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CD0u;
        goto label_251cd0;
    }
    ctx->pc = 0x251CC8u;
    {
        const bool branch_taken_0x251cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CC8u;
        // 0x251ccc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cc8) {
            ctx->pc = 0x251D14u;
            goto label_251d14;
        }
    }
    ctx->pc = 0x251CD0u;
label_251cd0:
    // 0x251cd0: 0x54e00009  bnel        $a3, $zero, . + 4 + (0x9 << 2)
label_251cd4:
    if (ctx->pc == 0x251CD4u) {
        ctx->pc = 0x251CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CD0u;
        // 0x251cd4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CD8u;
        goto label_251cd8;
    }
    ctx->pc = 0x251CD0u;
    {
        const bool branch_taken_0x251cd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x251cd0) {
            ctx->pc = 0x251CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CD0u;
            // 0x251cd4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CF8u;
            goto label_251cf8;
        }
    }
    ctx->pc = 0x251CD8u;
label_251cd8:
    // 0x251cd8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x251cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_251cdc:
    // 0x251cdc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_251ce0:
    if (ctx->pc == 0x251CE0u) {
        ctx->pc = 0x251CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CDCu;
        // 0x251ce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CE4u;
        goto label_251ce4;
    }
    ctx->pc = 0x251CDCu;
    {
        const bool branch_taken_0x251cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CDCu;
        // 0x251ce0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cdc) {
            ctx->pc = 0x251D18u;
            goto label_251d18;
        }
    }
    ctx->pc = 0x251CE4u;
label_251ce4:
    // 0x251ce4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x251ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_251ce8:
    // 0x251ce8: 0x40f809  jalr        $v0
label_251cec:
    if (ctx->pc == 0x251CECu) {
        ctx->pc = 0x251CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CE8u;
        // 0x251cec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CF0u;
        goto label_251cf0;
    }
    ctx->pc = 0x251CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251CF0u);
        ctx->pc = 0x251CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CE8u;
        // 0x251cec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251CE8u, 0x251CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251CF0u;
label_251cf0:
    // 0x251cf0: 0x10000009  b           . + 4 + (0x9 << 2)
label_251cf4:
    if (ctx->pc == 0x251CF4u) {
        ctx->pc = 0x251CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CF0u;
        // 0x251cf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251CF8u;
        goto label_251cf8;
    }
    ctx->pc = 0x251CF0u;
    {
        const bool branch_taken_0x251cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CF0u;
        // 0x251cf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cf0) {
            ctx->pc = 0x251D18u;
            goto label_251d18;
        }
    }
    ctx->pc = 0x251CF8u;
label_251cf8:
    // 0x251cf8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x251cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_251cfc:
    // 0x251cfc: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x251cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_251d00:
    // 0x251d00: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x251d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251d04:
    // 0x251d04: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x251d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251d08:
    // 0x251d08: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x251d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_251d0c:
    // 0x251d0c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x251d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_251d10:
    // 0x251d10: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x251d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_251d14:
    // 0x251d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251d18:
    // 0x251d18: 0x3e00008  jr          $ra
label_251d1c:
    if (ctx->pc == 0x251D1Cu) {
        ctx->pc = 0x251D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D18u;
        // 0x251d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251D20u;
        goto label_fallthrough_0x251d18;
    }
    ctx->pc = 0x251D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D18u;
        // 0x251d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251d18:
    ctx->pc = 0x251D20u;
}
