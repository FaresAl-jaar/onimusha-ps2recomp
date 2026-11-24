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

// Function: sub_00109D50
// Address: 0x109d50 - 0x109ffc
void sub_00109D50_0x109d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109D50_0x109d50");
#endif

    switch (ctx->pc) {
        case 0x109d74u: goto label_109d74;
        case 0x109da4u: goto label_109da4;
        case 0x109db0u: goto label_109db0;
        case 0x109dd4u: goto label_109dd4;
        case 0x109de4u: goto label_109de4;
        case 0x109e08u: goto label_109e08;
        case 0x109e2cu: goto label_109e2c;
        case 0x109e38u: goto label_109e38;
        case 0x109e4cu: goto label_109e4c;
        case 0x109e54u: goto label_109e54;
        case 0x109e98u: goto label_109e98;
        case 0x109eb4u: goto label_109eb4;
        case 0x109ec8u: goto label_109ec8;
        case 0x109ed4u: goto label_109ed4;
        case 0x109ee4u: goto label_109ee4;
        case 0x109f0cu: goto label_109f0c;
        case 0x109f30u: goto label_109f30;
        case 0x109f38u: goto label_109f38;
        case 0x109f4cu: goto label_109f4c;
        case 0x109f54u: goto label_109f54;
        case 0x109f9cu: goto label_109f9c;
        case 0x109fc0u: goto label_109fc0;
        case 0x109fd4u: goto label_109fd4;
        case 0x109fdcu: goto label_109fdc;
        case 0x109fe4u: goto label_109fe4;
        default: break;
    }

    ctx->pc = 0x109d50u;

    // 0x109d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x109d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x109d54: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x109d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x109d58: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x109d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x109d5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x109d64: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x109d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x109d68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x109d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x109d6c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109D6Cu;
    SET_GPR_U32(ctx, 31, 0x109D74u);
    ctx->pc = 0x109D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D6Cu;
    // 0x109d70: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109D6Cu, 0x109D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D74u;
label_109d74:
    // 0x109d74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d78: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x109d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x109d7c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x109d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x109d80: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x109d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x109d84: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x109d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x109d88: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x109d88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x109d8c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109D8Cu;
    {
        const bool branch_taken_0x109d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D8Cu;
        // 0x109d90: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d8c) {
            ctx->pc = 0x109DA4u;
            goto label_109da4;
        }
    }
    ctx->pc = 0x109D94u;
    // 0x109d94: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x109d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x109d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d9c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x109D9Cu;
    SET_GPR_U32(ctx, 31, 0x109DA4u);
    ctx->pc = 0x109DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D9Cu;
    // 0x109da0: 0x24a51fd0  addiu       $a1, $a1, 0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x109D9Cu, 0x109DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DA4u;
label_109da4:
    // 0x109da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109da8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109DA8u;
    SET_GPR_U32(ctx, 31, 0x109DB0u);
    ctx->pc = 0x109DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DA8u;
    // 0x109dac: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109DA8u, 0x109DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DB0u;
label_109db0:
    // 0x109db0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109db8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x109dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109dc0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x109dc4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x109dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x109dc8: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x109dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x109dcc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109DCCu;
    SET_GPR_U32(ctx, 31, 0x109DD4u);
    ctx->pc = 0x109DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DCCu;
    // 0x109dd0: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109DCCu, 0x109DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DD4u;
label_109dd4:
    // 0x109dd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x109DD4u;
    {
        const bool branch_taken_0x109dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DD4u;
        // 0x109dd8: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dd4) {
            ctx->pc = 0x109E10u;
            goto label_109e10;
        }
    }
    ctx->pc = 0x109DDCu;
    // 0x109ddc: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109DDCu;
    SET_GPR_U32(ctx, 31, 0x109DE4u);
    ctx->pc = 0x109DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DDCu;
    // 0x109de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109DDCu, 0x109DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DE4u;
label_109de4:
    // 0x109de4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109de8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x109de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x109dec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x109decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x109df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109df4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109df4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x109df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dfc: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x109dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x109e00: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109E00u;
    SET_GPR_U32(ctx, 31, 0x109E08u);
    ctx->pc = 0x109E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E00u;
    // 0x109e04: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109E00u, 0x109E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E08u;
label_109e08:
    // 0x109e08: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x109E08u;
    {
        const bool branch_taken_0x109e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E08u;
        // 0x109e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e08) {
            ctx->pc = 0x109ECCu;
            goto label_109ecc;
        }
    }
    ctx->pc = 0x109E10u;
label_109e10:
    // 0x109e10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e14: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x109e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x109e18: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x109e18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x109e1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x109e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x109e20: 0x26102940  addiu       $s0, $s0, 0x2940
    ctx->pc = 0x109e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10560));
    // 0x109e24: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x109E24u;
    SET_GPR_U32(ctx, 31, 0x109E2Cu);
    ctx->pc = 0x109E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E24u;
    // 0x109e28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x109E24u, 0x109E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E2Cu;
label_109e2c:
    // 0x109e2c: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x109e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x109e30: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109E30u;
    SET_GPR_U32(ctx, 31, 0x109E38u);
    ctx->pc = 0x109E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E30u;
    // 0x109e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109E30u, 0x109E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E38u;
label_109e38:
    // 0x109e38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e40: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x109e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x109e44: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109E44u;
    SET_GPR_U32(ctx, 31, 0x109E4Cu);
    ctx->pc = 0x109E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E44u;
    // 0x109e48: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109E44u, 0x109E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E4Cu;
label_109e4c:
    // 0x109e4c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x109E4Cu;
    SET_GPR_U32(ctx, 31, 0x109E54u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x109E4Cu, 0x109E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E54u;
label_109e54:
    // 0x109e54: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x109e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x109e58: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109e5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x109e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x109e60: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x109e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x109e64: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x109e64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x109e68: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109e6c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x109e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x109e70: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x109e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x109e74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x109e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109e78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109e7c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x109e7cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x109e80: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x109e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x109e84: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x109e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109E88u;
    {
        const bool branch_taken_0x109e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E88u;
        // 0x109e8c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e88) {
            ctx->pc = 0x109E98u;
            goto label_109e98;
        }
    }
    ctx->pc = 0x109E90u;
    // 0x109e90: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x109E90u;
    SET_GPR_U32(ctx, 31, 0x109E98u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x109E90u, 0x109E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E98u;
label_109e98:
    // 0x109e98: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x109e9c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x109e9cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x109ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109ea4: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x109ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x109ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eac: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109EACu;
    SET_GPR_U32(ctx, 31, 0x109EB4u);
    ctx->pc = 0x109EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EACu;
    // 0x109eb0: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109EACu, 0x109EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EB4u;
label_109eb4:
    // 0x109eb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109eb8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x109eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x109ebc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x109ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x109ec0: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x109EC0u;
    SET_GPR_U32(ctx, 31, 0x109EC8u);
    ctx->pc = 0x109EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EC0u;
    // 0x109ec4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x109EC0u, 0x109EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EC8u;
label_109ec8:
    // 0x109ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109ecc:
    // 0x109ecc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109ECCu;
    SET_GPR_U32(ctx, 31, 0x109ED4u);
    ctx->pc = 0x109ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ECCu;
    // 0x109ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109ECCu, 0x109ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109ED4u;
label_109ed4:
    // 0x109ed4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x109ED4u;
    {
        const bool branch_taken_0x109ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED4u;
        // 0x109ed8: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ed4) {
            ctx->pc = 0x109F14u;
            goto label_109f14;
        }
    }
    ctx->pc = 0x109EDCu;
    // 0x109edc: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109EDCu;
    SET_GPR_U32(ctx, 31, 0x109EE4u);
    ctx->pc = 0x109EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EDCu;
    // 0x109ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109EDCu, 0x109EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EE4u;
label_109ee4:
    // 0x109ee4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109ee8: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x109ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x109eec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x109eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x109ef0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x109ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x109ef4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109ef4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x109ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109efc: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x109efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x109f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f04: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109F04u;
    SET_GPR_U32(ctx, 31, 0x109F0Cu);
    ctx->pc = 0x109F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F04u;
    // 0x109f08: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109F04u, 0x109F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F0Cu;
label_109f0c:
    // 0x109f0c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x109F0Cu;
    {
        const bool branch_taken_0x109f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109f0c) {
            ctx->pc = 0x109FD4u;
            goto label_109fd4;
        }
    }
    ctx->pc = 0x109F14u;
label_109f14:
    // 0x109f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109f18: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x109f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x109f1c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x109f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x109f20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x109f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x109f24: 0x26102980  addiu       $s0, $s0, 0x2980
    ctx->pc = 0x109f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10624));
    // 0x109f28: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x109F28u;
    SET_GPR_U32(ctx, 31, 0x109F30u);
    ctx->pc = 0x109F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F28u;
    // 0x109f2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x109F28u, 0x109F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F30u;
label_109f30:
    // 0x109f30: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109F30u;
    SET_GPR_U32(ctx, 31, 0x109F38u);
    ctx->pc = 0x109F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F30u;
    // 0x109f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109F30u, 0x109F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F38u;
label_109f38:
    // 0x109f38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f40: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x109f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x109f44: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109F44u;
    SET_GPR_U32(ctx, 31, 0x109F4Cu);
    ctx->pc = 0x109F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F44u;
    // 0x109f48: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109F44u, 0x109F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F4Cu;
label_109f4c:
    // 0x109f4c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x109F4Cu;
    SET_GPR_U32(ctx, 31, 0x109F54u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x109F4Cu, 0x109F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F54u;
label_109f54:
    // 0x109f54: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x109f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x109f58: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109f5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x109f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x109f60: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x109f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x109f64: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x109f64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x109f68: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109f6c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x109f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x109f70: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x109f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x109f74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x109f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109f78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109f7c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x109f7cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x109f80: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x109f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x109f84: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x109f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x109f88: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x109f88u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x109f8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109F8Cu;
    {
        const bool branch_taken_0x109f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F8Cu;
        // 0x109f90: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f8c) {
            ctx->pc = 0x109FA0u;
            goto label_109fa0;
        }
    }
    ctx->pc = 0x109F94u;
    // 0x109f94: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x109F94u;
    SET_GPR_U32(ctx, 31, 0x109F9Cu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x109F94u, 0x109F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F9Cu;
label_109f9c:
    // 0x109f9c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x109f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_109fa0:
    // 0x109fa0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x109fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x109fa4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x109fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x109fa8: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x109fa8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x109fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109fb4: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x109fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x109fb8: 0xc042a02  jal         func_10A808
    ctx->pc = 0x109FB8u;
    SET_GPR_U32(ctx, 31, 0x109FC0u);
    ctx->pc = 0x109FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FB8u;
    // 0x109fbc: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x109FB8u, 0x109FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FC0u;
label_109fc0:
    // 0x109fc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109fc4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x109fc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x109fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x109fcc: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x109FCCu;
    SET_GPR_U32(ctx, 31, 0x109FD4u);
    ctx->pc = 0x109FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FCCu;
    // 0x109fd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x109FCCu, 0x109FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FD4u;
label_109fd4:
    // 0x109fd4: 0xc04298e  jal         func_10A638
    ctx->pc = 0x109FD4u;
    SET_GPR_U32(ctx, 31, 0x109FDCu);
    ctx->pc = 0x109FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FD4u;
    // 0x109fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A638u, 0x109FD4u, 0x109FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FDCu;
label_109fdc:
    // 0x109fdc: 0xc04268e  jal         func_109A38
    ctx->pc = 0x109FDCu;
    SET_GPR_U32(ctx, 31, 0x109FE4u);
    ctx->pc = 0x109FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FDCu;
    // 0x109fe0: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A38u, 0x109FDCu, 0x109FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FE4u;
label_109fe4:
    // 0x109fe4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109fe8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x109fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109fec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x109fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109ff0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x109ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x109FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FF4u;
        // 0x109ff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109FFCu;
}
