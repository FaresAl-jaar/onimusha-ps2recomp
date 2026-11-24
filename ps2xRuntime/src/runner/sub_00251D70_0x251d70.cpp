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

// Function: sub_00251D70
// Address: 0x251d70 - 0x251e90
void sub_00251D70_0x251d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251D70_0x251d70");
#endif

    switch (ctx->pc) {
        case 0x251d70u: goto label_251d70;
        case 0x251d74u: goto label_251d74;
        case 0x251d78u: goto label_251d78;
        case 0x251d7cu: goto label_251d7c;
        case 0x251d80u: goto label_251d80;
        case 0x251d84u: goto label_251d84;
        case 0x251d88u: goto label_251d88;
        case 0x251d8cu: goto label_251d8c;
        case 0x251d90u: goto label_251d90;
        case 0x251d94u: goto label_251d94;
        case 0x251d98u: goto label_251d98;
        case 0x251d9cu: goto label_251d9c;
        case 0x251da0u: goto label_251da0;
        case 0x251da4u: goto label_251da4;
        case 0x251da8u: goto label_251da8;
        case 0x251dacu: goto label_251dac;
        case 0x251db0u: goto label_251db0;
        case 0x251db4u: goto label_251db4;
        case 0x251db8u: goto label_251db8;
        case 0x251dbcu: goto label_251dbc;
        case 0x251dc0u: goto label_251dc0;
        case 0x251dc4u: goto label_251dc4;
        case 0x251dc8u: goto label_251dc8;
        case 0x251dccu: goto label_251dcc;
        case 0x251dd0u: goto label_251dd0;
        case 0x251dd4u: goto label_251dd4;
        case 0x251dd8u: goto label_251dd8;
        case 0x251ddcu: goto label_251ddc;
        case 0x251de0u: goto label_251de0;
        case 0x251de4u: goto label_251de4;
        case 0x251de8u: goto label_251de8;
        case 0x251decu: goto label_251dec;
        case 0x251df0u: goto label_251df0;
        case 0x251df4u: goto label_251df4;
        case 0x251df8u: goto label_251df8;
        case 0x251dfcu: goto label_251dfc;
        case 0x251e00u: goto label_251e00;
        case 0x251e04u: goto label_251e04;
        case 0x251e08u: goto label_251e08;
        case 0x251e0cu: goto label_251e0c;
        case 0x251e10u: goto label_251e10;
        case 0x251e14u: goto label_251e14;
        case 0x251e18u: goto label_251e18;
        case 0x251e1cu: goto label_251e1c;
        case 0x251e20u: goto label_251e20;
        case 0x251e24u: goto label_251e24;
        case 0x251e28u: goto label_251e28;
        case 0x251e2cu: goto label_251e2c;
        case 0x251e30u: goto label_251e30;
        case 0x251e34u: goto label_251e34;
        case 0x251e38u: goto label_251e38;
        case 0x251e3cu: goto label_251e3c;
        case 0x251e40u: goto label_251e40;
        case 0x251e44u: goto label_251e44;
        case 0x251e48u: goto label_251e48;
        case 0x251e4cu: goto label_251e4c;
        case 0x251e50u: goto label_251e50;
        case 0x251e54u: goto label_251e54;
        case 0x251e58u: goto label_251e58;
        case 0x251e5cu: goto label_251e5c;
        case 0x251e60u: goto label_251e60;
        case 0x251e64u: goto label_251e64;
        case 0x251e68u: goto label_251e68;
        case 0x251e6cu: goto label_251e6c;
        case 0x251e70u: goto label_251e70;
        case 0x251e74u: goto label_251e74;
        case 0x251e78u: goto label_251e78;
        case 0x251e7cu: goto label_251e7c;
        case 0x251e80u: goto label_251e80;
        case 0x251e84u: goto label_251e84;
        case 0x251e88u: goto label_251e88;
        case 0x251e8cu: goto label_251e8c;
        default: break;
    }

    ctx->pc = 0x251d70u;

label_251d70:
    // 0x251d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_251d74:
    // 0x251d74: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x251d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_251d78:
    // 0x251d78: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_251d7c:
    if (ctx->pc == 0x251D7Cu) {
        ctx->pc = 0x251D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D78u;
        // 0x251d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251D80u;
        goto label_251d80;
    }
    ctx->pc = 0x251D78u;
    {
        const bool branch_taken_0x251d78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D78u;
        // 0x251d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d78) {
            ctx->pc = 0x251DA0u;
            goto label_251da0;
        }
    }
    ctx->pc = 0x251D80u;
label_251d80:
    // 0x251d80: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251d84:
    // 0x251d84: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251d88:
    // 0x251d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251d8c:
    // 0x251d8c: 0x2484ed90  addiu       $a0, $a0, -0x1270
    ctx->pc = 0x251d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962576));
label_251d90:
    // 0x251d90: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x251d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
label_251d94:
    // 0x251d94: 0x80944dc  j           func_251370
label_251d98:
    if (ctx->pc == 0x251D98u) {
        ctx->pc = 0x251D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D94u;
        // 0x251d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251D9Cu;
        goto label_251d9c;
    }
    ctx->pc = 0x251D94u;
    ctx->pc = 0x251D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D94u;
    // 0x251d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x251D9Cu;
label_251d9c:
    // 0x251d9c: 0x0  nop
    ctx->pc = 0x251d9cu;
    // NOP
label_251da0:
    // 0x251da0: 0x81020004  lb          $v0, 0x4($t0)
    ctx->pc = 0x251da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_251da4:
    // 0x251da4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_251da8:
    if (ctx->pc == 0x251DA8u) {
        ctx->pc = 0x251DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DA4u;
        // 0x251da8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DACu;
        goto label_251dac;
    }
    ctx->pc = 0x251DA4u;
    {
        const bool branch_taken_0x251da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DA4u;
        // 0x251da8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251da4) {
            ctx->pc = 0x251DC8u;
            goto label_251dc8;
        }
    }
    ctx->pc = 0x251DACu;
label_251dac:
    // 0x251dac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251db0:
    // 0x251db0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251db4:
    // 0x251db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251db8:
    // 0x251db8: 0x2484eda0  addiu       $a0, $a0, -0x1260
    ctx->pc = 0x251db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962592));
label_251dbc:
    // 0x251dbc: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_251dc0:
    // 0x251dc0: 0x80944dc  j           func_251370
label_251dc4:
    if (ctx->pc == 0x251DC4u) {
        ctx->pc = 0x251DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DC0u;
        // 0x251dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DC8u;
        goto label_251dc8;
    }
    ctx->pc = 0x251DC0u;
    ctx->pc = 0x251DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DC0u;
    // 0x251dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x251DC8u;
label_251dc8:
    // 0x251dc8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_251dcc:
    if (ctx->pc == 0x251DCCu) {
        ctx->pc = 0x251DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DC8u;
        // 0x251dcc: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DD0u;
        goto label_251dd0;
    }
    ctx->pc = 0x251DC8u;
    {
        const bool branch_taken_0x251dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251dc8) {
            ctx->pc = 0x251DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251DC8u;
            // 0x251dcc: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251E38u;
            goto label_251e38;
        }
    }
    ctx->pc = 0x251DD0u;
label_251dd0:
    // 0x251dd0: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x251dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_251dd4:
    // 0x251dd4: 0x1940002c  blez        $t2, . + 4 + (0x2C << 2)
label_251dd8:
    if (ctx->pc == 0x251DD8u) {
        ctx->pc = 0x251DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DD4u;
        // 0x251dd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DDCu;
        goto label_251ddc;
    }
    ctx->pc = 0x251DD4u;
    {
        const bool branch_taken_0x251dd4 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x251DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DD4u;
        // 0x251dd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251dd4) {
            ctx->pc = 0x251E88u;
            goto label_251e88;
        }
    }
    ctx->pc = 0x251DDCu;
label_251ddc:
    // 0x251ddc: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x251ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_251de0:
    // 0x251de0: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
label_251de4:
    if (ctx->pc == 0x251DE4u) {
        ctx->pc = 0x251DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DE0u;
        // 0x251de4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DE8u;
        goto label_251de8;
    }
    ctx->pc = 0x251DE0u;
    {
        const bool branch_taken_0x251de0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DE0u;
        // 0x251de4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251de0) {
            ctx->pc = 0x251E88u;
            goto label_251e88;
        }
    }
    ctx->pc = 0x251DE8u;
label_251de8:
    // 0x251de8: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x251de8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_251dec:
    // 0x251dec: 0x81020005  lb          $v0, 0x5($t0)
    ctx->pc = 0x251decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_251df0:
    // 0x251df0: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x251df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_251df4:
    // 0x251df4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x251df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251df8:
    // 0x251df8: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
label_251dfc:
    if (ctx->pc == 0x251DFCu) {
        ctx->pc = 0x251DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DF8u;
        // 0x251dfc: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E00u;
        goto label_251e00;
    }
    ctx->pc = 0x251DF8u;
    {
        const bool branch_taken_0x251df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x251DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DF8u;
        // 0x251dfc: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251df8) {
            ctx->pc = 0x251E28u;
            goto label_251e28;
        }
    }
    ctx->pc = 0x251E00u;
label_251e00:
    // 0x251e00: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_251e04:
    if (ctx->pc == 0x251E04u) {
        ctx->pc = 0x251E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E00u;
        // 0x251e04: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E08u;
        goto label_251e08;
    }
    ctx->pc = 0x251E00u;
    {
        const bool branch_taken_0x251e00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E00u;
        // 0x251e04: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e00) {
            ctx->pc = 0x251E28u;
            goto label_251e28;
        }
    }
    ctx->pc = 0x251E08u;
label_251e08:
    // 0x251e08: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x251e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_251e0c:
    // 0x251e0c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_251e10:
    if (ctx->pc == 0x251E10u) {
        ctx->pc = 0x251E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E0Cu;
        // 0x251e10: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E14u;
        goto label_251e14;
    }
    ctx->pc = 0x251E0Cu;
    {
        const bool branch_taken_0x251e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x251e0c) {
            ctx->pc = 0x251E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251E0Cu;
            // 0x251e10: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251E2Cu;
            goto label_251e2c;
        }
    }
    ctx->pc = 0x251E14u;
label_251e14:
    // 0x251e14: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x251e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_251e18:
    // 0x251e18: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x251e18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_251e1c:
    // 0x251e1c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x251e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_251e20:
    // 0x251e20: 0x10000019  b           . + 4 + (0x19 << 2)
label_251e24:
    if (ctx->pc == 0x251E24u) {
        ctx->pc = 0x251E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E20u;
        // 0x251e24: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E28u;
        goto label_251e28;
    }
    ctx->pc = 0x251E20u;
    {
        const bool branch_taken_0x251e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E20u;
        // 0x251e24: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e20) {
            ctx->pc = 0x251E88u;
            goto label_251e88;
        }
    }
    ctx->pc = 0x251E28u;
label_251e28:
    // 0x251e28: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x251e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_251e2c:
    // 0x251e2c: 0x54e0000a  bnel        $a3, $zero, . + 4 + (0xA << 2)
label_251e30:
    if (ctx->pc == 0x251E30u) {
        ctx->pc = 0x251E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E2Cu;
        // 0x251e30: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E34u;
        goto label_251e34;
    }
    ctx->pc = 0x251E2Cu;
    {
        const bool branch_taken_0x251e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e2c) {
            ctx->pc = 0x251E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251E2Cu;
            // 0x251e30: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251E58u;
            goto label_251e58;
        }
    }
    ctx->pc = 0x251E34u;
label_251e34:
    // 0x251e34: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x251e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_251e38:
    // 0x251e38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_251e3c:
    if (ctx->pc == 0x251E3Cu) {
        ctx->pc = 0x251E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E38u;
        // 0x251e3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E40u;
        goto label_251e40;
    }
    ctx->pc = 0x251E38u;
    {
        const bool branch_taken_0x251e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E38u;
        // 0x251e3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e38) {
            ctx->pc = 0x251E88u;
            goto label_251e88;
        }
    }
    ctx->pc = 0x251E40u;
label_251e40:
    // 0x251e40: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_251e44:
    // 0x251e44: 0x40f809  jalr        $v0
label_251e48:
    if (ctx->pc == 0x251E48u) {
        ctx->pc = 0x251E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E44u;
        // 0x251e48: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E4Cu;
        goto label_251e4c;
    }
    ctx->pc = 0x251E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251E4Cu);
        ctx->pc = 0x251E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E44u;
        // 0x251e48: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251E44u, 0x251E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251E4Cu;
label_251e4c:
    // 0x251e4c: 0x1000000e  b           . + 4 + (0xE << 2)
label_251e50:
    if (ctx->pc == 0x251E50u) {
        ctx->pc = 0x251E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E4Cu;
        // 0x251e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E54u;
        goto label_251e54;
    }
    ctx->pc = 0x251E4Cu;
    {
        const bool branch_taken_0x251e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E4Cu;
        // 0x251e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e4c) {
            ctx->pc = 0x251E88u;
            goto label_251e88;
        }
    }
    ctx->pc = 0x251E54u;
label_251e54:
    // 0x251e54: 0x0  nop
    ctx->pc = 0x251e54u;
    // NOP
label_251e58:
    // 0x251e58: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_251e5c:
    // 0x251e5c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x251e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_251e60:
    // 0x251e60: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x251e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_251e64:
    // 0x251e64: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x251e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_251e68:
    // 0x251e68: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x251e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251e6c:
    // 0x251e6c: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x251e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251e70:
    // 0x251e70: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x251e70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_251e74:
    // 0x251e74: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x251e74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_251e78:
    // 0x251e78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_251e7c:
    // 0x251e7c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x251e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_251e80:
    // 0x251e80: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x251e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_251e84:
    // 0x251e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251e88:
    // 0x251e88: 0x3e00008  jr          $ra
label_251e8c:
    if (ctx->pc == 0x251E8Cu) {
        ctx->pc = 0x251E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E88u;
        // 0x251e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E90u;
        goto label_fallthrough_0x251e88;
    }
    ctx->pc = 0x251E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E88u;
        // 0x251e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251e88:
    ctx->pc = 0x251E90u;
}
