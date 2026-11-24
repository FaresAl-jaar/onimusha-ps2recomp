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

// Function: sub_00386D10
// Address: 0x386d10 - 0x386fa4
void sub_00386D10_0x386d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386D10_0x386d10");
#endif

    switch (ctx->pc) {
        case 0x386d60u: goto label_386d60;
        case 0x386df4u: goto label_386df4;
        case 0x386e34u: goto label_386e34;
        case 0x386f70u: goto label_386f70;
        case 0x386f88u: goto label_386f88;
        default: break;
    }

    ctx->pc = 0x386d10u;

    // 0x386d10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x386d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x386d14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x386d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x386d18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x386d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x386d1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x386d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x386d20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x386d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x386d24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x386d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x386d28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x386d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x386d2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x386d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x386d30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x386d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x386d34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x386d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x386d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x386d3c: 0x24710120  addiu       $s1, $v1, 0x120
    ctx->pc = 0x386d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x386d40: 0x80630121  lb          $v1, 0x121($v1)
    ctx->pc = 0x386d40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 289)));
    // 0x386d44: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x386D44u;
    {
        const bool branch_taken_0x386d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D44u;
        // 0x386d48: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d44) {
            ctx->pc = 0x386E08u;
            goto label_386e08;
        }
    }
    ctx->pc = 0x386D4Cu;
    // 0x386d4c: 0x8223000b  lb          $v1, 0xB($s1)
    ctx->pc = 0x386d4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x386d50: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x386D50u;
    {
        const bool branch_taken_0x386d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D50u;
        // 0x386d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d50) {
            ctx->pc = 0x386E08u;
            goto label_386e08;
        }
    }
    ctx->pc = 0x386D58u;
    // 0x386d58: 0xc0e1bec  jal         func_386FB0
    ctx->pc = 0x386D58u;
    SET_GPR_U32(ctx, 31, 0x386D60u);
    ctx->pc = 0x386FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386FB0u, 0x386D58u, 0x386D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386D60u;
label_386d60:
    // 0x386d60: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x386d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x386d64: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x386d64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x386d68: 0x4600025  bltz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x386D68u;
    {
        const bool branch_taken_0x386d68 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x386D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D68u;
        // 0x386d6c: 0xa2220005  sb          $v0, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d68) {
            ctx->pc = 0x386E00u;
            goto label_386e00;
        }
    }
    ctx->pc = 0x386D70u;
    // 0x386d70: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x386d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386d74: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x386d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x386d78: 0xa2280001  sb          $t0, 0x1($s1)
    ctx->pc = 0x386d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x386d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x386d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386d80: 0x82270005  lb          $a3, 0x5($s1)
    ctx->pc = 0x386d80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x386d84: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x386d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x386d88: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x386d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x386d8c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x386d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x386d90: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x386d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x386d94: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x386d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x386d98: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x386d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x386d9c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x386d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x386da0: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x386da0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x386da4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x386da4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x386da8: 0x16430017  bne         $s2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x386DA8u;
    {
        const bool branch_taken_0x386da8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x386DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DA8u;
        // 0x386dac: 0xa6240006  sh          $a0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386da8) {
            ctx->pc = 0x386E08u;
            goto label_386e08;
        }
    }
    ctx->pc = 0x386DB0u;
    // 0x386db0: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x386db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x386db4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x386db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x386db8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x386db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x386dbc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x386dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x386dc0: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x386dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x386dc4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x386dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x386dc8: 0x3442030f  ori         $v0, $v0, 0x30F
    ctx->pc = 0x386dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x386dcc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x386dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x386dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x386dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x386dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x386dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x386ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386de0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x386de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386de4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x386de4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386de8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x386de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x386dec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x386DECu;
    SET_GPR_U32(ctx, 31, 0x386DF4u);
    ctx->pc = 0x386DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386DECu;
    // 0x386df0: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x386DECu, 0x386DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386DF4u;
label_386df4:
    // 0x386df4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386DF4u;
    {
        const bool branch_taken_0x386df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386df4) {
            ctx->pc = 0x386E08u;
            goto label_386e08;
        }
    }
    ctx->pc = 0x386DFCu;
    // 0x386dfc: 0x0  nop
    ctx->pc = 0x386dfcu;
    // NOP
label_386e00:
    // 0x386e00: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x386e00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x386e04: 0xa220000b  sb          $zero, 0xB($s1)
    ctx->pc = 0x386e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 0));
label_386e08:
    // 0x386e08: 0x82240001  lb          $a0, 0x1($s1)
    ctx->pc = 0x386e08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x386e0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x386e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386e10: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x386E10u;
    {
        const bool branch_taken_0x386e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x386E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E10u;
        // 0x386e14: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e10) {
            ctx->pc = 0x386F88u;
            goto label_386f88;
        }
    }
    ctx->pc = 0x386E18u;
    // 0x386e18: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x386e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x386e1c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x386e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x386e20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x386E20u;
    {
        const bool branch_taken_0x386e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E20u;
        // 0x386e24: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e20) {
            ctx->pc = 0x386E40u;
            goto label_386e40;
        }
    }
    ctx->pc = 0x386E28u;
    // 0x386e28: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x386e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x386e2c: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x386E2Cu;
    SET_GPR_U32(ctx, 31, 0x386E34u);
    ctx->pc = 0x386E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E2Cu;
    // 0x386e30: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x386E2Cu, 0x386E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E34u;
label_386e34:
    // 0x386e34: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x386E34u;
    {
        const bool branch_taken_0x386e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386e34) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386E3Cu;
    // 0x386e3c: 0x0  nop
    ctx->pc = 0x386e3cu;
    // NOP
label_386e40:
    // 0x386e40: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x386e40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x386e44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x386e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386e48: 0x10850033  beq         $a0, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x386E48u;
    {
        const bool branch_taken_0x386e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x386E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E48u;
        // 0x386e4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e48) {
            ctx->pc = 0x386F18u;
            goto label_386f18;
        }
    }
    ctx->pc = 0x386E50u;
    // 0x386e50: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x386E50u;
    {
        const bool branch_taken_0x386e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x386e50) {
            ctx->pc = 0x386EE8u;
            goto label_386ee8;
        }
    }
    ctx->pc = 0x386E58u;
    // 0x386e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x386e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386e5c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x386E5Cu;
    {
        const bool branch_taken_0x386e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x386e5c) {
            ctx->pc = 0x386E88u;
            goto label_386e88;
        }
    }
    ctx->pc = 0x386E64u;
    // 0x386e64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386E64u;
    {
        const bool branch_taken_0x386e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x386e64) {
            ctx->pc = 0x386E78u;
            goto label_386e78;
        }
    }
    ctx->pc = 0x386E6Cu;
    // 0x386e6c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x386E6Cu;
    {
        const bool branch_taken_0x386e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386e6c) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386E74u;
    // 0x386e74: 0x0  nop
    ctx->pc = 0x386e74u;
    // NOP
label_386e78:
    // 0x386e78: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x386e78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x386e7c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x386e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x386e80: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x386e80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x386e84: 0x0  nop
    ctx->pc = 0x386e84u;
    // NOP
label_386e88:
    // 0x386e88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x386e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x386e8c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x386e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x386e90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x386e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386e94: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x386E94u;
    {
        const bool branch_taken_0x386e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x386E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E94u;
        // 0x386e98: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e94) {
            ctx->pc = 0x386EB8u;
            goto label_386eb8;
        }
    }
    ctx->pc = 0x386E9Cu;
    // 0x386e9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x386e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x386ea0: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x386ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x386ea4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386EA4u;
    {
        const bool branch_taken_0x386ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x386ea4) {
            ctx->pc = 0x386EB8u;
            goto label_386eb8;
        }
    }
    ctx->pc = 0x386EACu;
    // 0x386eac: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x386EACu;
    {
        const bool branch_taken_0x386eac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x386eac) {
            ctx->pc = 0x386EB8u;
            goto label_386eb8;
        }
    }
    ctx->pc = 0x386EB4u;
    // 0x386eb4: 0x24a5ffd0  addiu       $a1, $a1, -0x30
    ctx->pc = 0x386eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_386eb8:
    // 0x386eb8: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x386eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x386ebc: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x386ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x386ec0: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x386ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x386ec4: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x386ec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x386ec8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x386ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386ecc: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x386ECCu;
    {
        const bool branch_taken_0x386ecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x386ecc) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386ED4u;
    // 0x386ed4: 0xa6250006  sh          $a1, 0x6($s1)
    ctx->pc = 0x386ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x386ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x386ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386edc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x386EDCu;
    {
        const bool branch_taken_0x386edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386EDCu;
        // 0x386ee0: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386edc) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386EE4u;
    // 0x386ee4: 0x0  nop
    ctx->pc = 0x386ee4u;
    // NOP
label_386ee8:
    // 0x386ee8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x386ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x386eec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x386eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x386ef0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x386ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x386ef4: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x386ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x386ef8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x386EF8u;
    {
        const bool branch_taken_0x386ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x386EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386EF8u;
        // 0x386efc: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ef8) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386F00u;
    // 0x386f00: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x386f00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x386f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x386f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x386f08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x386f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x386f0c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x386F0Cu;
    {
        const bool branch_taken_0x386f0c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x386f0c) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386F14u;
    // 0x386f14: 0xa2250002  sb          $a1, 0x2($s1)
    ctx->pc = 0x386f14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 5));
label_386f18:
    // 0x386f18: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x386f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x386f1c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x386f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x386f20: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x386f20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x386f24: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x386f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x386f28: 0x28630200  slti        $v1, $v1, 0x200
    ctx->pc = 0x386f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x386f2c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x386F2Cu;
    {
        const bool branch_taken_0x386f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386f2c) {
            ctx->pc = 0x386F78u;
            goto label_386f78;
        }
    }
    ctx->pc = 0x386F34u;
    // 0x386f34: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x386f34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x386f38: 0x8222000b  lb          $v0, 0xB($s1)
    ctx->pc = 0x386f38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x386f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386f40: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x386f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x386f44: 0x82230005  lb          $v1, 0x5($s1)
    ctx->pc = 0x386f44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x386f48: 0x8222000a  lb          $v0, 0xA($s1)
    ctx->pc = 0x386f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x386f4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x386f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x386f50: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x386f50u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x386f54: 0x0  nop
    ctx->pc = 0x386f54u;
    // NOP
    // 0x386f58: 0x0  nop
    ctx->pc = 0x386f58u;
    // NOP
    // 0x386f5c: 0x1010  mfhi        $v0
    ctx->pc = 0x386f5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x386f60: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x386f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x386f64: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x386f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x386f68: 0xc0e1c0c  jal         func_387030
    ctx->pc = 0x386F68u;
    SET_GPR_U32(ctx, 31, 0x386F70u);
    ctx->pc = 0x386F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F68u;
    // 0x386f6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387030u, 0x386F68u, 0x386F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F70u;
label_386f70:
    // 0x386f70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386f74: 0x0  nop
    ctx->pc = 0x386f74u;
    // NOP
label_386f78:
    // 0x386f78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386F78u;
    {
        const bool branch_taken_0x386f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F78u;
        // 0x386f7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f78) {
            ctx->pc = 0x386F88u;
            goto label_386f88;
        }
    }
    ctx->pc = 0x386F80u;
    // 0x386f80: 0xc0e1c14  jal         func_387050
    ctx->pc = 0x386F80u;
    SET_GPR_U32(ctx, 31, 0x386F88u);
    ctx->pc = 0x386F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F80u;
    // 0x386f84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387050u, 0x386F80u, 0x386F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F88u;
label_386f88:
    // 0x386f88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x386f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x386f8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x386f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386f90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x386f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386f94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x386f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386f98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x386f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x386F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F9Cu;
        // 0x386fa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386FA4u;
}
