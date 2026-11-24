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

// Function: sub_003B5D50
// Address: 0x3b5d50 - 0x3b63e0
void sub_003B5D50_0x3b5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5D50_0x3b5d50");
#endif

    switch (ctx->pc) {
        case 0x3b5dc0u: goto label_3b5dc0;
        case 0x3b5df8u: goto label_3b5df8;
        case 0x3b5e28u: goto label_3b5e28;
        case 0x3b5e54u: goto label_3b5e54;
        case 0x3b5e8cu: goto label_3b5e8c;
        case 0x3b5ec0u: goto label_3b5ec0;
        case 0x3b5eecu: goto label_3b5eec;
        case 0x3b5f1cu: goto label_3b5f1c;
        case 0x3b5f48u: goto label_3b5f48;
        case 0x3b5f7cu: goto label_3b5f7c;
        case 0x3b5fc0u: goto label_3b5fc0;
        case 0x3b5fe4u: goto label_3b5fe4;
        case 0x3b6018u: goto label_3b6018;
        case 0x3b604cu: goto label_3b604c;
        case 0x3b6098u: goto label_3b6098;
        case 0x3b60c8u: goto label_3b60c8;
        case 0x3b60fcu: goto label_3b60fc;
        case 0x3b6148u: goto label_3b6148;
        case 0x3b6178u: goto label_3b6178;
        case 0x3b61acu: goto label_3b61ac;
        case 0x3b61f8u: goto label_3b61f8;
        case 0x3b6220u: goto label_3b6220;
        case 0x3b6254u: goto label_3b6254;
        case 0x3b62a0u: goto label_3b62a0;
        case 0x3b62c8u: goto label_3b62c8;
        case 0x3b632cu: goto label_3b632c;
        case 0x3b6358u: goto label_3b6358;
        case 0x3b63a0u: goto label_3b63a0;
        case 0x3b63c8u: goto label_3b63c8;
        default: break;
    }

    ctx->pc = 0x3b5d50u;

    // 0x3b5d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b5d54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b5d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b5d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b5d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b5d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b5d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b5d60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b5d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b5d68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b5d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d6c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x3b5d6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b5d70: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3b5d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b5d74: 0x9025fc8d  lbu         $a1, -0x373($at)
    ctx->pc = 0x3b5d74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x3b5d78: 0x2cc1000e  sltiu       $at, $a2, 0xE
    ctx->pc = 0x3b5d78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x3b5d7c: 0x10200192  beqz        $at, . + 4 + (0x192 << 2)
    ctx->pc = 0x3B5D7Cu;
    {
        const bool branch_taken_0x3b5d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D7Cu;
        // 0x3b5d80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d7c) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5D84u;
    // 0x3b5d84: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3b5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3b5d88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b5d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3b5d8c: 0x24842b60  addiu       $a0, $a0, 0x2B60
    ctx->pc = 0x3b5d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11104));
    // 0x3b5d90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b5d94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b5d98: 0x600008  jr          $v1
    ctx->pc = 0x3B5D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B5DA0u: goto label_3b5da0;
            case 0x3B5E30u: goto label_3b5e30;
            case 0x3B5EC8u: goto label_3b5ec8;
            case 0x3B5F50u: goto label_3b5f50;
            case 0x3B6020u: goto label_3b6020;
            case 0x3B60D0u: goto label_3b60d0;
            case 0x3B6180u: goto label_3b6180;
            case 0x3B6228u: goto label_3b6228;
            case 0x3B62D0u: goto label_3b62d0;
            case 0x3B6360u: goto label_3b6360;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5D98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B5DA0u;
label_3b5da0:
    // 0x3b5da0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3b5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b5da4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3b5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b5da8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3b5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3b5dac: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x3b5dacu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3b5db0: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x3b5db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3b5db4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3b5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3b5db8: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x3B5DB8u;
    SET_GPR_U32(ctx, 31, 0x3B5DC0u);
    ctx->pc = 0x3B5DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5DB8u;
    // 0x3b5dbc: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x3B5DB8u, 0x3B5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5DC0u;
label_3b5dc0:
    // 0x3b5dc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b5dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b5dc4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3b5dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b5dc8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B5DC8u;
    {
        const bool branch_taken_0x3b5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5dc8) {
            ctx->pc = 0x3B5E00u;
            goto label_3b5e00;
        }
    }
    ctx->pc = 0x3B5DD0u;
    // 0x3b5dd0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5dd4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5dd8: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5ddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5de0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5de4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5de8: 0x24e72b20  addiu       $a3, $a3, 0x2B20
    ctx->pc = 0x3b5de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11040));
    // 0x3b5dec: 0x34480030  ori         $t0, $v0, 0x30
    ctx->pc = 0x3b5decu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x3b5df0: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5DF0u;
    SET_GPR_U32(ctx, 31, 0x3B5DF8u);
    ctx->pc = 0x3B5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5DF0u;
    // 0x3b5df4: 0x34490034  ori         $t1, $v0, 0x34 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5DF0u, 0x3B5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5DF8u;
label_3b5df8:
    // 0x3b5df8: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x3B5DF8u;
    {
        const bool branch_taken_0x3b5df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5df8) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5E00u;
label_3b5e00:
    // 0x3b5e00: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5e04: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5e08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5e0c: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x3b5e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b5e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e18: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5e1c: 0x24e72b28  addiu       $a3, $a3, 0x2B28
    ctx->pc = 0x3b5e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11048));
    // 0x3b5e20: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5E20u;
    SET_GPR_U32(ctx, 31, 0x3B5E28u);
    ctx->pc = 0x3B5E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E20u;
    // 0x3b5e24: 0x34480030  ori         $t0, $v0, 0x30 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5E20u, 0x3B5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5E28u;
label_3b5e28:
    // 0x3b5e28: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x3B5E28u;
    {
        const bool branch_taken_0x3b5e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5e28) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5E30u;
label_3b5e30:
    // 0x3b5e30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b5e34: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5E34u;
    {
        const bool branch_taken_0x3b5e34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E34u;
        // 0x3b5e38: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5e34) {
            ctx->pc = 0x3B5E40u;
            goto label_3b5e40;
        }
    }
    ctx->pc = 0x3B5E3Cu;
    // 0x3b5e3c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3b5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3b5e40:
    // 0x3b5e40: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3b5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3b5e44: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3b5e44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b5e48: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x3b5e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3b5e4c: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x3B5E4Cu;
    SET_GPR_U32(ctx, 31, 0x3B5E54u);
    ctx->pc = 0x3B5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E4Cu;
    // 0x3b5e50: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x3B5E4Cu, 0x3B5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5E54u;
label_3b5e54:
    // 0x3b5e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b5e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b5e58: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3b5e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b5e5c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3B5E5Cu;
    {
        const bool branch_taken_0x3b5e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5e5c) {
            ctx->pc = 0x3B5E98u;
            goto label_3b5e98;
        }
    }
    ctx->pc = 0x3B5E64u;
    // 0x3b5e64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5e68: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5e6c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5e70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e78: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5e7c: 0x24e72b20  addiu       $a3, $a3, 0x2B20
    ctx->pc = 0x3b5e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11040));
    // 0x3b5e80: 0x34480031  ori         $t0, $v0, 0x31
    ctx->pc = 0x3b5e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49);
    // 0x3b5e84: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5E84u;
    SET_GPR_U32(ctx, 31, 0x3B5E8Cu);
    ctx->pc = 0x3B5E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E84u;
    // 0x3b5e88: 0x34490034  ori         $t1, $v0, 0x34 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5E84u, 0x3B5E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5E8Cu;
label_3b5e8c:
    // 0x3b5e8c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x3B5E8Cu;
    {
        const bool branch_taken_0x3b5e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5e8c) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5E94u;
    // 0x3b5e94: 0x0  nop
    ctx->pc = 0x3b5e94u;
    // NOP
label_3b5e98:
    // 0x3b5e98: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5e9c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5ea0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5ea4: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x3b5ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b5ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5eac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5eb0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5eb4: 0x24e72b28  addiu       $a3, $a3, 0x2B28
    ctx->pc = 0x3b5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11048));
    // 0x3b5eb8: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5EB8u;
    SET_GPR_U32(ctx, 31, 0x3B5EC0u);
    ctx->pc = 0x3B5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EB8u;
    // 0x3b5ebc: 0x34480031  ori         $t0, $v0, 0x31 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5EB8u, 0x3B5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EC0u;
label_3b5ec0:
    // 0x3b5ec0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x3B5EC0u;
    {
        const bool branch_taken_0x3b5ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5ec0) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5EC8u;
label_3b5ec8:
    // 0x3b5ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5ecc: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5ECCu;
    {
        const bool branch_taken_0x3b5ecc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5ECCu;
        // 0x3b5ed0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ecc) {
            ctx->pc = 0x3B5ED8u;
            goto label_3b5ed8;
        }
    }
    ctx->pc = 0x3B5ED4u;
    // 0x3b5ed4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3b5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3b5ed8:
    // 0x3b5ed8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3b5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3b5edc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3b5edcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b5ee0: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x3b5ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3b5ee4: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x3B5EE4u;
    SET_GPR_U32(ctx, 31, 0x3B5EECu);
    ctx->pc = 0x3B5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5EE4u;
    // 0x3b5ee8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x3B5EE4u, 0x3B5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5EECu;
label_3b5eec:
    // 0x3b5eec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b5eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b5ef0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3b5ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b5ef4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B5EF4u;
    {
        const bool branch_taken_0x3b5ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5EF4u;
        // 0x3b5ef8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ef4) {
            ctx->pc = 0x3B5F28u;
            goto label_3b5f28;
        }
    }
    ctx->pc = 0x3B5EFCu;
    // 0x3b5efc: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5efcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5f00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f0c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5f10: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b5f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b5f14: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5F14u;
    SET_GPR_U32(ctx, 31, 0x3B5F1Cu);
    ctx->pc = 0x3B5F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F14u;
    // 0x3b5f18: 0x34480034  ori         $t0, $v0, 0x34 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5F14u, 0x3B5F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F1Cu;
label_3b5f1c:
    // 0x3b5f1c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x3B5F1Cu;
    {
        const bool branch_taken_0x3b5f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f1c) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5F24u;
    // 0x3b5f24: 0x0  nop
    ctx->pc = 0x3b5f24u;
    // NOP
label_3b5f28:
    // 0x3b5f28: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5f2c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5f30: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x3b5f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b5f34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f3c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5f40: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5F40u;
    SET_GPR_U32(ctx, 31, 0x3B5F48u);
    ctx->pc = 0x3B5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F40u;
    // 0x3b5f44: 0x24e72b38  addiu       $a3, $a3, 0x2B38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5F40u, 0x3B5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F48u;
label_3b5f48:
    // 0x3b5f48: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x3B5F48u;
    {
        const bool branch_taken_0x3b5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f48) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5F50u;
label_3b5f50:
    // 0x3b5f50: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x3b5f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3b5f54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B5F54u;
    {
        const bool branch_taken_0x3b5f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F54u;
        // 0x3b5f58: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5f54) {
            ctx->pc = 0x3B5F88u;
            goto label_3b5f88;
        }
    }
    ctx->pc = 0x3B5F5Cu;
    // 0x3b5f5c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5f60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f68: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5f6c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b5f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b5f70: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b5f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b5f74: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5F74u;
    SET_GPR_U32(ctx, 31, 0x3B5F7Cu);
    ctx->pc = 0x3B5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5F74u;
    // 0x3b5f78: 0x34480035  ori         $t0, $v0, 0x35 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5F74u, 0x3B5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5F7Cu;
label_3b5f7c:
    // 0x3b5f7c: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x3B5F7Cu;
    {
        const bool branch_taken_0x3b5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f7c) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5F84u;
    // 0x3b5f84: 0x0  nop
    ctx->pc = 0x3b5f84u;
    // NOP
label_3b5f88:
    // 0x3b5f88: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b5f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b5f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b5f90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5F90u;
    {
        const bool branch_taken_0x3b5f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b5f90) {
            ctx->pc = 0x3B5FA0u;
            goto label_3b5fa0;
        }
    }
    ctx->pc = 0x3B5F98u;
    // 0x3b5f98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B5F98u;
    {
        const bool branch_taken_0x3b5f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f98) {
            ctx->pc = 0x3B5FF0u;
            goto label_3b5ff0;
        }
    }
    ctx->pc = 0x3B5FA0u;
label_3b5fa0:
    // 0x3b5fa0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5fa4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5fa8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b5fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5fac: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5fb4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b5fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b5fb8: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5FB8u;
    SET_GPR_U32(ctx, 31, 0x3B5FC0u);
    ctx->pc = 0x3B5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5FB8u;
    // 0x3b5fbc: 0x24e72b40  addiu       $a3, $a3, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5FB8u, 0x3B5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5FC0u;
label_3b5fc0:
    // 0x3b5fc0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5fc4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5fc8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5fd0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5fd4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b5fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b5fd8: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b5fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b5fdc: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B5FDCu;
    SET_GPR_U32(ctx, 31, 0x3B5FE4u);
    ctx->pc = 0x3B5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5FDCu;
    // 0x3b5fe0: 0x34480032  ori         $t0, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B5FDCu, 0x3B5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5FE4u;
label_3b5fe4:
    // 0x3b5fe4: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3B5FE4u;
    {
        const bool branch_taken_0x3b5fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5fe4) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B5FECu;
    // 0x3b5fec: 0x0  nop
    ctx->pc = 0x3b5fecu;
    // NOP
label_3b5ff0:
    // 0x3b5ff0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5ff4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b5ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b5ff8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5ffc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6000: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b6000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6004: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6008: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b6008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b600c: 0x24e72b28  addiu       $a3, $a3, 0x2B28
    ctx->pc = 0x3b600cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11048));
    // 0x3b6010: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6010u;
    SET_GPR_U32(ctx, 31, 0x3B6018u);
    ctx->pc = 0x3B6014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6010u;
    // 0x3b6014: 0x34480032  ori         $t0, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6010u, 0x3B6018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6018u;
label_3b6018:
    // 0x3b6018: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x3B6018u;
    {
        const bool branch_taken_0x3b6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6018) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6020u;
label_3b6020:
    // 0x3b6020: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x3b6020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3b6024: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B6024u;
    {
        const bool branch_taken_0x3b6024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6024u;
        // 0x3b6028: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6024) {
            ctx->pc = 0x3B6058u;
            goto label_3b6058;
        }
    }
    ctx->pc = 0x3B602Cu;
    // 0x3b602c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b602cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6030: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b6034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6038: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b603c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b603cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b6040: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b6040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b6044: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6044u;
    SET_GPR_U32(ctx, 31, 0x3B604Cu);
    ctx->pc = 0x3B6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6044u;
    // 0x3b6048: 0x34480035  ori         $t0, $v0, 0x35 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6044u, 0x3B604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B604Cu;
label_3b604c:
    // 0x3b604c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x3B604Cu;
    {
        const bool branch_taken_0x3b604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b604c) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6054u;
    // 0x3b6054: 0x0  nop
    ctx->pc = 0x3b6054u;
    // NOP
label_3b6058:
    // 0x3b6058: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b605c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6060: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6060u;
    {
        const bool branch_taken_0x3b6060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6060) {
            ctx->pc = 0x3B6070u;
            goto label_3b6070;
        }
    }
    ctx->pc = 0x3B6068u;
    // 0x3b6068: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B6068u;
    {
        const bool branch_taken_0x3b6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6068) {
            ctx->pc = 0x3B60A0u;
            goto label_3b60a0;
        }
    }
    ctx->pc = 0x3B6070u;
label_3b6070:
    // 0x3b6070: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b6074: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b6074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6078: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b607c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b607cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6080: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b6080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6084: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6088: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b6088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b608c: 0x24e72b48  addiu       $a3, $a3, 0x2B48
    ctx->pc = 0x3b608cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11080));
    // 0x3b6090: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6090u;
    SET_GPR_U32(ctx, 31, 0x3B6098u);
    ctx->pc = 0x3B6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6090u;
    // 0x3b6094: 0x34490032  ori         $t1, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6090u, 0x3B6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6098u;
label_3b6098:
    // 0x3b6098: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3B6098u;
    {
        const bool branch_taken_0x3b6098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6098) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B60A0u;
label_3b60a0:
    // 0x3b60a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b60a4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b60a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b60a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b60ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b60acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60b0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b60b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60b4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b60b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b60b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b60b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b60bc: 0x24e72b28  addiu       $a3, $a3, 0x2B28
    ctx->pc = 0x3b60bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11048));
    // 0x3b60c0: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B60C0u;
    SET_GPR_U32(ctx, 31, 0x3B60C8u);
    ctx->pc = 0x3B60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60C0u;
    // 0x3b60c4: 0x34480032  ori         $t0, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B60C0u, 0x3B60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60C8u;
label_3b60c8:
    // 0x3b60c8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x3B60C8u;
    {
        const bool branch_taken_0x3b60c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b60c8) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B60D0u;
label_3b60d0:
    // 0x3b60d0: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x3b60d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3b60d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B60D4u;
    {
        const bool branch_taken_0x3b60d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60D4u;
        // 0x3b60d8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b60d4) {
            ctx->pc = 0x3B6108u;
            goto label_3b6108;
        }
    }
    ctx->pc = 0x3B60DCu;
    // 0x3b60dc: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b60dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b60e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b60e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b60e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b60e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b60ec: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b60ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b60f0: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b60f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b60f4: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B60F4u;
    SET_GPR_U32(ctx, 31, 0x3B60FCu);
    ctx->pc = 0x3B60F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60F4u;
    // 0x3b60f8: 0x34480035  ori         $t0, $v0, 0x35 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B60F4u, 0x3B60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B60FCu;
label_3b60fc:
    // 0x3b60fc: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x3B60FCu;
    {
        const bool branch_taken_0x3b60fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b60fc) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6104u;
    // 0x3b6104: 0x0  nop
    ctx->pc = 0x3b6104u;
    // NOP
label_3b6108:
    // 0x3b6108: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b610c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6110: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6110u;
    {
        const bool branch_taken_0x3b6110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6110) {
            ctx->pc = 0x3B6120u;
            goto label_3b6120;
        }
    }
    ctx->pc = 0x3B6118u;
    // 0x3b6118: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B6118u;
    {
        const bool branch_taken_0x3b6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6118) {
            ctx->pc = 0x3B6150u;
            goto label_3b6150;
        }
    }
    ctx->pc = 0x3B6120u;
label_3b6120:
    // 0x3b6120: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b6124: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b6124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6128: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b612c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b612cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6130: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b6130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6134: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6138: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b6138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b613c: 0x24e72b48  addiu       $a3, $a3, 0x2B48
    ctx->pc = 0x3b613cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11080));
    // 0x3b6140: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6140u;
    SET_GPR_U32(ctx, 31, 0x3B6148u);
    ctx->pc = 0x3B6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6140u;
    // 0x3b6144: 0x34490032  ori         $t1, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6140u, 0x3B6148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6148u;
label_3b6148:
    // 0x3b6148: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3B6148u;
    {
        const bool branch_taken_0x3b6148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6148) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6150u;
label_3b6150:
    // 0x3b6150: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b6154: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b6154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6158: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b615c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b615cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6160: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b6160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6164: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6168: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b6168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b616c: 0x24e72b28  addiu       $a3, $a3, 0x2B28
    ctx->pc = 0x3b616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11048));
    // 0x3b6170: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6170u;
    SET_GPR_U32(ctx, 31, 0x3B6178u);
    ctx->pc = 0x3B6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6170u;
    // 0x3b6174: 0x34480032  ori         $t0, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6170u, 0x3B6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6178u;
label_3b6178:
    // 0x3b6178: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3B6178u;
    {
        const bool branch_taken_0x3b6178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6178) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6180u;
label_3b6180:
    // 0x3b6180: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x3b6180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3b6184: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B6184u;
    {
        const bool branch_taken_0x3b6184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6184u;
        // 0x3b6188: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6184) {
            ctx->pc = 0x3B61B8u;
            goto label_3b61b8;
        }
    }
    ctx->pc = 0x3B618Cu;
    // 0x3b618c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b618cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6190: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b6194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6198: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b619c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b61a0: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b61a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b61a4: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B61A4u;
    SET_GPR_U32(ctx, 31, 0x3B61ACu);
    ctx->pc = 0x3B61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61A4u;
    // 0x3b61a8: 0x34480035  ori         $t0, $v0, 0x35 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B61A4u, 0x3B61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61ACu;
label_3b61ac:
    // 0x3b61ac: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x3B61ACu;
    {
        const bool branch_taken_0x3b61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b61ac) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B61B4u;
    // 0x3b61b4: 0x0  nop
    ctx->pc = 0x3b61b4u;
    // NOP
label_3b61b8:
    // 0x3b61b8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b61b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b61bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b61c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B61C0u;
    {
        const bool branch_taken_0x3b61c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b61c0) {
            ctx->pc = 0x3B61D0u;
            goto label_3b61d0;
        }
    }
    ctx->pc = 0x3B61C8u;
    // 0x3b61c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B61C8u;
    {
        const bool branch_taken_0x3b61c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b61c8) {
            ctx->pc = 0x3B6200u;
            goto label_3b6200;
        }
    }
    ctx->pc = 0x3B61D0u;
label_3b61d0:
    // 0x3b61d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b61d4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b61d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b61d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b61dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b61dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b61e0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b61e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b61e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b61e8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b61e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b61ec: 0x24e72b48  addiu       $a3, $a3, 0x2B48
    ctx->pc = 0x3b61ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11080));
    // 0x3b61f0: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B61F0u;
    SET_GPR_U32(ctx, 31, 0x3B61F8u);
    ctx->pc = 0x3B61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B61F0u;
    // 0x3b61f4: 0x34490032  ori         $t1, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B61F0u, 0x3B61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B61F8u;
label_3b61f8:
    // 0x3b61f8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3B61F8u;
    {
        const bool branch_taken_0x3b61f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b61f8) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6200u;
label_3b6200:
    // 0x3b6200: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b6204: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b6204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b620c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b620cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6210: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6214: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b6214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b6218: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6218u;
    SET_GPR_U32(ctx, 31, 0x3B6220u);
    ctx->pc = 0x3B621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6218u;
    // 0x3b621c: 0x24e72b40  addiu       $a3, $a3, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6218u, 0x3B6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6220u;
label_3b6220:
    // 0x3b6220: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3B6220u;
    {
        const bool branch_taken_0x3b6220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6220) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6228u;
label_3b6228:
    // 0x3b6228: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x3b6228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3b622c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B622Cu;
    {
        const bool branch_taken_0x3b622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B622Cu;
        // 0x3b6230: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b622c) {
            ctx->pc = 0x3B6260u;
            goto label_3b6260;
        }
    }
    ctx->pc = 0x3B6234u;
    // 0x3b6234: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b6234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6238: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b623c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b623cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6240: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6244: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b6244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b6248: 0x24e72b30  addiu       $a3, $a3, 0x2B30
    ctx->pc = 0x3b6248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3b624c: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B624Cu;
    SET_GPR_U32(ctx, 31, 0x3B6254u);
    ctx->pc = 0x3B6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B624Cu;
    // 0x3b6250: 0x34480035  ori         $t0, $v0, 0x35 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B624Cu, 0x3B6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6254u;
label_3b6254:
    // 0x3b6254: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3B6254u;
    {
        const bool branch_taken_0x3b6254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6254) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B625Cu;
    // 0x3b625c: 0x0  nop
    ctx->pc = 0x3b625cu;
    // NOP
label_3b6260:
    // 0x3b6260: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b6260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b6264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6268: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6268u;
    {
        const bool branch_taken_0x3b6268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6268) {
            ctx->pc = 0x3B6278u;
            goto label_3b6278;
        }
    }
    ctx->pc = 0x3B6270u;
    // 0x3b6270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B6270u;
    {
        const bool branch_taken_0x3b6270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6270) {
            ctx->pc = 0x3B62A8u;
            goto label_3b62a8;
        }
    }
    ctx->pc = 0x3B6278u;
label_3b6278:
    // 0x3b6278: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b627c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b627cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6280: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b6284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6288: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b6288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b628c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6290: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b6290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b6294: 0x24e72b50  addiu       $a3, $a3, 0x2B50
    ctx->pc = 0x3b6294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11088));
    // 0x3b6298: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6298u;
    SET_GPR_U32(ctx, 31, 0x3B62A0u);
    ctx->pc = 0x3B629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6298u;
    // 0x3b629c: 0x34490032  ori         $t1, $v0, 0x32 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6298u, 0x3B62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62A0u;
label_3b62a0:
    // 0x3b62a0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3B62A0u;
    {
        const bool branch_taken_0x3b62a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b62a0) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B62A8u;
label_3b62a8:
    // 0x3b62a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b62ac: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b62acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b62b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b62b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b62b4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b62b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b62b8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b62bc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b62bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b62c0: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B62C0u;
    SET_GPR_U32(ctx, 31, 0x3B62C8u);
    ctx->pc = 0x3B62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B62C0u;
    // 0x3b62c4: 0x24e72b38  addiu       $a3, $a3, 0x2B38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B62C0u, 0x3B62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B62C8u;
label_3b62c8:
    // 0x3b62c8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3B62C8u;
    {
        const bool branch_taken_0x3b62c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b62c8) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B62D0u;
label_3b62d0:
    // 0x3b62d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3b62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b62d4: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B62D4u;
    {
        const bool branch_taken_0x3b62d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B62D4u;
        // 0x3b62d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b62d4) {
            ctx->pc = 0x3B62E0u;
            goto label_3b62e0;
        }
    }
    ctx->pc = 0x3B62DCu;
    // 0x3b62dc: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x3b62dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_3b62e0:
    // 0x3b62e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3b62e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b62e4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b62e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b62e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b62ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B62ECu;
    {
        const bool branch_taken_0x3b62ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b62ec) {
            ctx->pc = 0x3B6300u;
            goto label_3b6300;
        }
    }
    ctx->pc = 0x3B62F4u;
    // 0x3b62f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B62F4u;
    {
        const bool branch_taken_0x3b62f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b62f4) {
            ctx->pc = 0x3B6338u;
            goto label_3b6338;
        }
    }
    ctx->pc = 0x3B62FCu;
    // 0x3b62fc: 0x0  nop
    ctx->pc = 0x3b62fcu;
    // NOP
label_3b6300:
    // 0x3b6300: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x3b6300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3b6304: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b6308: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b6308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b630c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b6310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6314: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b6314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6318: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b631c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b6320: 0x24e72b58  addiu       $a3, $a3, 0x2B58
    ctx->pc = 0x3b6320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11096));
    // 0x3b6324: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6324u;
    SET_GPR_U32(ctx, 31, 0x3B632Cu);
    ctx->pc = 0x3B6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6324u;
    // 0x3b6328: 0x344a0033  ori         $t2, $v0, 0x33 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6324u, 0x3B632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B632Cu;
label_3b632c:
    // 0x3b632c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B632Cu;
    {
        const bool branch_taken_0x3b632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b632c) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6334u;
    // 0x3b6334: 0x0  nop
    ctx->pc = 0x3b6334u;
    // NOP
label_3b6338:
    // 0x3b6338: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b633c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b633cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6344: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b6344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6348: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b6348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b634c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b6350: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6350u;
    SET_GPR_U32(ctx, 31, 0x3B6358u);
    ctx->pc = 0x3B6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6350u;
    // 0x3b6354: 0x24e72b38  addiu       $a3, $a3, 0x2B38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6350u, 0x3B6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6358u;
label_3b6358:
    // 0x3b6358: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3B6358u;
    {
        const bool branch_taken_0x3b6358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6358) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B6360u;
label_3b6360:
    // 0x3b6360: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3b6360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b6364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b6364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6368: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6368u;
    {
        const bool branch_taken_0x3b6368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b6368) {
            ctx->pc = 0x3B6378u;
            goto label_3b6378;
        }
    }
    ctx->pc = 0x3B6370u;
    // 0x3b6370: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B6370u;
    {
        const bool branch_taken_0x3b6370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6370) {
            ctx->pc = 0x3B63A8u;
            goto label_3b63a8;
        }
    }
    ctx->pc = 0x3B6378u;
label_3b6378:
    // 0x3b6378: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b6378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b637c: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b637cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b6380: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b6384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b6384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6388: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b6388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b638c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b6390: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b6390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b6394: 0x24e72b50  addiu       $a3, $a3, 0x2B50
    ctx->pc = 0x3b6394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11088));
    // 0x3b6398: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B6398u;
    SET_GPR_U32(ctx, 31, 0x3B63A0u);
    ctx->pc = 0x3B639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6398u;
    // 0x3b639c: 0x34490037  ori         $t1, $v0, 0x37 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B6398u, 0x3B63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B63A0u;
label_3b63a0:
    // 0x3b63a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B63A0u;
    {
        const bool branch_taken_0x3b63a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b63a0) {
            ctx->pc = 0x3B63C8u;
            goto label_3b63c8;
        }
    }
    ctx->pc = 0x3B63A8u;
label_3b63a8:
    // 0x3b63a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b63ac: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x3b63acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x3b63b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b63b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b63b4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b63b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b63b8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b63bc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3b63bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b63c0: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x3B63C0u;
    SET_GPR_U32(ctx, 31, 0x3B63C8u);
    ctx->pc = 0x3B63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B63C0u;
    // 0x3b63c4: 0x24e72b38  addiu       $a3, $a3, 0x2B38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x3B63C0u, 0x3B63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B63C8u;
label_3b63c8:
    // 0x3b63c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b63c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b63cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b63ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b63d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b63d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b63d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b63d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b63d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B63D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B63D8u;
        // 0x3b63dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B63D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B63E0u;
}
