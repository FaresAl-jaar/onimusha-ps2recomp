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

// Function: sub_00339D30
// Address: 0x339d30 - 0x339e9c
void sub_00339D30_0x339d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339D30_0x339d30");
#endif

    switch (ctx->pc) {
        case 0x339d30u: goto label_339d30;
        case 0x339d34u: goto label_339d34;
        case 0x339d38u: goto label_339d38;
        case 0x339d3cu: goto label_339d3c;
        case 0x339d40u: goto label_339d40;
        case 0x339d44u: goto label_339d44;
        case 0x339d48u: goto label_339d48;
        case 0x339d4cu: goto label_339d4c;
        case 0x339d50u: goto label_339d50;
        case 0x339d54u: goto label_339d54;
        case 0x339d58u: goto label_339d58;
        case 0x339d5cu: goto label_339d5c;
        case 0x339d60u: goto label_339d60;
        case 0x339d64u: goto label_339d64;
        case 0x339d68u: goto label_339d68;
        case 0x339d6cu: goto label_339d6c;
        case 0x339d70u: goto label_339d70;
        case 0x339d74u: goto label_339d74;
        case 0x339d78u: goto label_339d78;
        case 0x339d7cu: goto label_339d7c;
        case 0x339d80u: goto label_339d80;
        case 0x339d84u: goto label_339d84;
        case 0x339d88u: goto label_339d88;
        case 0x339d8cu: goto label_339d8c;
        case 0x339d90u: goto label_339d90;
        case 0x339d94u: goto label_339d94;
        case 0x339d98u: goto label_339d98;
        case 0x339d9cu: goto label_339d9c;
        case 0x339da0u: goto label_339da0;
        case 0x339da4u: goto label_339da4;
        case 0x339da8u: goto label_339da8;
        case 0x339dacu: goto label_339dac;
        case 0x339db0u: goto label_339db0;
        case 0x339db4u: goto label_339db4;
        case 0x339db8u: goto label_339db8;
        case 0x339dbcu: goto label_339dbc;
        case 0x339dc0u: goto label_339dc0;
        case 0x339dc4u: goto label_339dc4;
        case 0x339dc8u: goto label_339dc8;
        case 0x339dccu: goto label_339dcc;
        case 0x339dd0u: goto label_339dd0;
        case 0x339dd4u: goto label_339dd4;
        case 0x339dd8u: goto label_339dd8;
        case 0x339ddcu: goto label_339ddc;
        case 0x339de0u: goto label_339de0;
        case 0x339de4u: goto label_339de4;
        case 0x339de8u: goto label_339de8;
        case 0x339decu: goto label_339dec;
        case 0x339df0u: goto label_339df0;
        case 0x339df4u: goto label_339df4;
        case 0x339df8u: goto label_339df8;
        case 0x339dfcu: goto label_339dfc;
        case 0x339e00u: goto label_339e00;
        case 0x339e04u: goto label_339e04;
        case 0x339e08u: goto label_339e08;
        case 0x339e0cu: goto label_339e0c;
        case 0x339e10u: goto label_339e10;
        case 0x339e14u: goto label_339e14;
        case 0x339e18u: goto label_339e18;
        case 0x339e1cu: goto label_339e1c;
        case 0x339e20u: goto label_339e20;
        case 0x339e24u: goto label_339e24;
        case 0x339e28u: goto label_339e28;
        case 0x339e2cu: goto label_339e2c;
        case 0x339e30u: goto label_339e30;
        case 0x339e34u: goto label_339e34;
        case 0x339e38u: goto label_339e38;
        case 0x339e3cu: goto label_339e3c;
        case 0x339e40u: goto label_339e40;
        case 0x339e44u: goto label_339e44;
        case 0x339e48u: goto label_339e48;
        case 0x339e4cu: goto label_339e4c;
        case 0x339e50u: goto label_339e50;
        case 0x339e54u: goto label_339e54;
        case 0x339e58u: goto label_339e58;
        case 0x339e5cu: goto label_339e5c;
        case 0x339e60u: goto label_339e60;
        case 0x339e64u: goto label_339e64;
        case 0x339e68u: goto label_339e68;
        case 0x339e6cu: goto label_339e6c;
        case 0x339e70u: goto label_339e70;
        case 0x339e74u: goto label_339e74;
        case 0x339e78u: goto label_339e78;
        case 0x339e7cu: goto label_339e7c;
        case 0x339e80u: goto label_339e80;
        case 0x339e84u: goto label_339e84;
        case 0x339e88u: goto label_339e88;
        case 0x339e8cu: goto label_339e8c;
        case 0x339e90u: goto label_339e90;
        case 0x339e94u: goto label_339e94;
        case 0x339e98u: goto label_339e98;
        default: break;
    }

    ctx->pc = 0x339d30u;

label_339d30:
    // 0x339d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339d34:
    // 0x339d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339d38:
    // 0x339d38: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x339d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_339d3c:
    // 0x339d3c: 0x1065004c  beq         $v1, $a1, . + 4 + (0x4C << 2)
label_339d40:
    if (ctx->pc == 0x339D40u) {
        ctx->pc = 0x339D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D3Cu;
        // 0x339d40: 0x31230008  andi        $v1, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D44u;
        goto label_339d44;
    }
    ctx->pc = 0x339D3Cu;
    {
        const bool branch_taken_0x339d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x339D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D3Cu;
        // 0x339d40: 0x31230008  andi        $v1, $t1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d3c) {
            ctx->pc = 0x339E70u;
            goto label_339e70;
        }
    }
    ctx->pc = 0x339D44u;
label_339d44:
    // 0x339d44: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_339d48:
    if (ctx->pc == 0x339D48u) {
        ctx->pc = 0x339D4Cu;
        goto label_339d4c;
    }
    ctx->pc = 0x339D44u;
    {
        const bool branch_taken_0x339d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d44) {
            ctx->pc = 0x339D98u;
            goto label_339d98;
        }
    }
    ctx->pc = 0x339D4Cu;
label_339d4c:
    // 0x339d4c: 0x31230010  andi        $v1, $t1, 0x10
    ctx->pc = 0x339d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16);
label_339d50:
    // 0x339d50: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_339d54:
    if (ctx->pc == 0x339D54u) {
        ctx->pc = 0x339D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D50u;
        // 0x339d54: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D58u;
        goto label_339d58;
    }
    ctx->pc = 0x339D50u;
    {
        const bool branch_taken_0x339d50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D50u;
        // 0x339d54: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d50) {
            ctx->pc = 0x339D88u;
            goto label_339d88;
        }
    }
    ctx->pc = 0x339D58u;
label_339d58:
    // 0x339d58: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x339d58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_339d5c:
    // 0x339d5c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x339d5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_339d60:
    // 0x339d60: 0x1445821  addu        $t3, $t2, $a0
    ctx->pc = 0x339d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_339d64:
    // 0x339d64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x339d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_339d68:
    // 0x339d68: 0xad6c0018  sw          $t4, 0x18($t3)
    ctx->pc = 0x339d68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 12));
label_339d6c:
    // 0x339d6c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x339d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339d70:
    // 0x339d70: 0x902bfc8e  lbu         $t3, -0x372($at)
    ctx->pc = 0x339d70u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966414)));
label_339d74:
    // 0x339d74: 0x116a0030  beq         $t3, $t2, . + 4 + (0x30 << 2)
label_339d78:
    if (ctx->pc == 0x339D78u) {
        ctx->pc = 0x339D7Cu;
        goto label_339d7c;
    }
    ctx->pc = 0x339D74u;
    {
        const bool branch_taken_0x339d74 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x339d74) {
            ctx->pc = 0x339E38u;
            goto label_339e38;
        }
    }
    ctx->pc = 0x339D7Cu;
label_339d7c:
    // 0x339d7c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_339d80:
    if (ctx->pc == 0x339D80u) {
        ctx->pc = 0x339D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D7Cu;
        // 0x339d80: 0x24c60255  addiu       $a2, $a2, 0x255 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 597));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D84u;
        goto label_339d84;
    }
    ctx->pc = 0x339D7Cu;
    {
        const bool branch_taken_0x339d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D7Cu;
        // 0x339d80: 0x24c60255  addiu       $a2, $a2, 0x255 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 597));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d7c) {
            ctx->pc = 0x339E38u;
            goto label_339e38;
        }
    }
    ctx->pc = 0x339D84u;
label_339d84:
    // 0x339d84: 0x0  nop
    ctx->pc = 0x339d84u;
    // NOP
label_339d88:
    // 0x339d88: 0xc0ce7a8  jal         func_339EA0
label_339d8c:
    if (ctx->pc == 0x339D8Cu) {
        ctx->pc = 0x339D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D88u;
        // 0x339d8c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339D90u;
        goto label_339d90;
    }
    ctx->pc = 0x339D88u;
    SET_GPR_U32(ctx, 31, 0x339D90u);
    ctx->pc = 0x339D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D88u;
    // 0x339d8c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x339D88u, 0x339D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D90u;
label_339d90:
    // 0x339d90: 0x1000003f  b           . + 4 + (0x3F << 2)
label_339d94:
    if (ctx->pc == 0x339D94u) {
        ctx->pc = 0x339D98u;
        goto label_339d98;
    }
    ctx->pc = 0x339D90u;
    {
        const bool branch_taken_0x339d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d90) {
            ctx->pc = 0x339E90u;
            goto label_339e90;
        }
    }
    ctx->pc = 0x339D98u;
label_339d98:
    // 0x339d98: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
label_339d9c:
    if (ctx->pc == 0x339D9Cu) {
        ctx->pc = 0x339D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D98u;
        // 0x339d9c: 0x90a308e8  lbu         $v1, 0x8E8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DA0u;
        goto label_339da0;
    }
    ctx->pc = 0x339D98u;
    {
        const bool branch_taken_0x339d98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D98u;
        // 0x339d9c: 0x90a308e8  lbu         $v1, 0x8E8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d98) {
            ctx->pc = 0x339E28u;
            goto label_339e28;
        }
    }
    ctx->pc = 0x339DA0u;
label_339da0:
    // 0x339da0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x339da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_339da4:
    // 0x339da4: 0x24cbe5c8  addiu       $t3, $a2, -0x1A38
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960584));
label_339da8:
    // 0x339da8: 0x902cfc8e  lbu         $t4, -0x372($at)
    ctx->pc = 0x339da8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966414)));
label_339dac:
    // 0x339dac: 0x3c0a0068  lui         $t2, 0x68
    ctx->pc = 0x339dacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)104 << 16));
label_339db0:
    // 0x339db0: 0x254ade50  addiu       $t2, $t2, -0x21B0
    ctx->pc = 0x339db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958672));
label_339db4:
    // 0x339db4: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_339db8:
    // 0x339db8: 0x14b6821  addu        $t5, $t2, $t3
    ctx->pc = 0x339db8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_339dbc:
    // 0x339dbc: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x339dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_339dc0:
    // 0x339dc0: 0x1445821  addu        $t3, $t2, $a0
    ctx->pc = 0x339dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_339dc4:
    // 0x339dc4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x339dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339dc8:
    // 0x339dc8: 0x398c0001  xori        $t4, $t4, 0x1
    ctx->pc = 0x339dc8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)1);
label_339dcc:
    // 0x339dcc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x339dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_339dd0:
    // 0x339dd0: 0xc602b  sltu        $t4, $zero, $t4
    ctx->pc = 0x339dd0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_339dd4:
    // 0x339dd4: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x339dd4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_339dd8:
    // 0x339dd8: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x339dd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_339ddc:
    // 0x339ddc: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_339de0:
    // 0x339de0: 0xad6c0018  sw          $t4, 0x18($t3)
    ctx->pc = 0x339de0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 12));
label_339de4:
    // 0x339de4: 0x902bfc8e  lbu         $t3, -0x372($at)
    ctx->pc = 0x339de4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966414)));
label_339de8:
    // 0x339de8: 0x116a0003  beq         $t3, $t2, . + 4 + (0x3 << 2)
label_339dec:
    if (ctx->pc == 0x339DECu) {
        ctx->pc = 0x339DF0u;
        goto label_339df0;
    }
    ctx->pc = 0x339DE8u;
    {
        const bool branch_taken_0x339de8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x339de8) {
            ctx->pc = 0x339DF8u;
            goto label_339df8;
        }
    }
    ctx->pc = 0x339DF0u;
label_339df0:
    // 0x339df0: 0x24c60a32  addiu       $a2, $a2, 0xA32
    ctx->pc = 0x339df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2610));
label_339df4:
    // 0x339df4: 0x0  nop
    ctx->pc = 0x339df4u;
    // NOP
label_339df8:
    // 0x339df8: 0x312a0004  andi        $t2, $t1, 0x4
    ctx->pc = 0x339df8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
label_339dfc:
    // 0x339dfc: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_339e00:
    if (ctx->pc == 0x339E00u) {
        ctx->pc = 0x339E04u;
        goto label_339e04;
    }
    ctx->pc = 0x339DFCu;
    {
        const bool branch_taken_0x339dfc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x339dfc) {
            ctx->pc = 0x339E38u;
            goto label_339e38;
        }
    }
    ctx->pc = 0x339E04u;
label_339e04:
    // 0x339e04: 0x908b0052  lbu         $t3, 0x52($a0)
    ctx->pc = 0x339e04u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
label_339e08:
    // 0x339e08: 0x3c0a0068  lui         $t2, 0x68
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)104 << 16));
label_339e0c:
    // 0x339e0c: 0x254aeee0  addiu       $t2, $t2, -0x1120
    ctx->pc = 0x339e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962912));
label_339e10:
    // 0x339e10: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x339e10u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_339e14:
    // 0x339e14: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x339e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_339e18:
    // 0x339e18: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_339e1c:
    // 0x339e1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_339e20:
    if (ctx->pc == 0x339E20u) {
        ctx->pc = 0x339E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E1Cu;
        // 0x339e20: 0xca3021  addu        $a2, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E24u;
        goto label_339e24;
    }
    ctx->pc = 0x339E1Cu;
    {
        const bool branch_taken_0x339e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E1Cu;
        // 0x339e20: 0xca3021  addu        $a2, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e1c) {
            ctx->pc = 0x339E38u;
            goto label_339e38;
        }
    }
    ctx->pc = 0x339E24u;
label_339e24:
    // 0x339e24: 0x0  nop
    ctx->pc = 0x339e24u;
    // NOP
label_339e28:
    // 0x339e28: 0xc0ce7a8  jal         func_339EA0
label_339e2c:
    if (ctx->pc == 0x339E2Cu) {
        ctx->pc = 0x339E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E28u;
        // 0x339e2c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E30u;
        goto label_339e30;
    }
    ctx->pc = 0x339E28u;
    SET_GPR_U32(ctx, 31, 0x339E30u);
    ctx->pc = 0x339E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339E28u;
    // 0x339e2c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x339E28u, 0x339E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339E30u;
label_339e30:
    // 0x339e30: 0x10000017  b           . + 4 + (0x17 << 2)
label_339e34:
    if (ctx->pc == 0x339E34u) {
        ctx->pc = 0x339E38u;
        goto label_339e38;
    }
    ctx->pc = 0x339E30u;
    {
        const bool branch_taken_0x339e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e30) {
            ctx->pc = 0x339E90u;
            goto label_339e90;
        }
    }
    ctx->pc = 0x339E38u;
label_339e38:
    // 0x339e38: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x339e38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_339e3c:
    // 0x339e3c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x339e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_339e40:
    // 0x339e40: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x339e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_339e44:
    // 0x339e44: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x339e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339e48:
    // 0x339e48: 0xa08a0000  sb          $t2, 0x0($a0)
    ctx->pc = 0x339e48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
label_339e4c:
    // 0x339e4c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x339e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_339e50:
    // 0x339e50: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x339e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
label_339e54:
    // 0x339e54: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x339e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_339e58:
    // 0x339e58: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x339e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_339e5c:
    // 0x339e5c: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x339e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_339e60:
    // 0x339e60: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x339e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
label_339e64:
    // 0x339e64: 0x1000000a  b           . + 4 + (0xA << 2)
label_339e68:
    if (ctx->pc == 0x339E68u) {
        ctx->pc = 0x339E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E64u;
        // 0x339e68: 0xac890010  sw          $t1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E6Cu;
        goto label_339e6c;
    }
    ctx->pc = 0x339E64u;
    {
        const bool branch_taken_0x339e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E64u;
        // 0x339e68: 0xac890010  sw          $t1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e64) {
            ctx->pc = 0x339E90u;
            goto label_339e90;
        }
    }
    ctx->pc = 0x339E6Cu;
label_339e6c:
    // 0x339e6c: 0x0  nop
    ctx->pc = 0x339e6cu;
    // NOP
label_339e70:
    // 0x339e70: 0x31230008  andi        $v1, $t1, 0x8
    ctx->pc = 0x339e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
label_339e74:
    // 0x339e74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_339e78:
    if (ctx->pc == 0x339E78u) {
        ctx->pc = 0x339E7Cu;
        goto label_339e7c;
    }
    ctx->pc = 0x339E74u;
    {
        const bool branch_taken_0x339e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339e74) {
            ctx->pc = 0x339E90u;
            goto label_339e90;
        }
    }
    ctx->pc = 0x339E7Cu;
label_339e7c:
    // 0x339e7c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_339e80:
    if (ctx->pc == 0x339E80u) {
        ctx->pc = 0x339E84u;
        goto label_339e84;
    }
    ctx->pc = 0x339E7Cu;
    {
        const bool branch_taken_0x339e7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e7c) {
            ctx->pc = 0x339E90u;
            goto label_339e90;
        }
    }
    ctx->pc = 0x339E84u;
label_339e84:
    // 0x339e84: 0x90a408e8  lbu         $a0, 0x8E8($a1)
    ctx->pc = 0x339e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
label_339e88:
    // 0x339e88: 0xe0f809  jalr        $a3
label_339e8c:
    if (ctx->pc == 0x339E8Cu) {
        ctx->pc = 0x339E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E88u;
        // 0x339e8c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E90u;
        goto label_339e90;
    }
    ctx->pc = 0x339E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x339E90u);
        ctx->pc = 0x339E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E88u;
        // 0x339e8c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E88u, 0x339E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339E90u;
label_339e90:
    // 0x339e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339e94:
    // 0x339e94: 0x3e00008  jr          $ra
label_339e98:
    if (ctx->pc == 0x339E98u) {
        ctx->pc = 0x339E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E94u;
        // 0x339e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E9Cu;
        goto label_fallthrough_0x339e94;
    }
    ctx->pc = 0x339E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E94u;
        // 0x339e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339e94:
    ctx->pc = 0x339E9Cu;
}
