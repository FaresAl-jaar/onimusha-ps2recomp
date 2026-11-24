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

// Function: sub_00196BC0
// Address: 0x196bc0 - 0x196dc8
void sub_00196BC0_0x196bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196BC0_0x196bc0");
#endif

    switch (ctx->pc) {
        case 0x196c04u: goto label_196c04;
        case 0x196c4cu: goto label_196c4c;
        case 0x196c8cu: goto label_196c8c;
        case 0x196ca4u: goto label_196ca4;
        case 0x196cf0u: goto label_196cf0;
        case 0x196d0cu: goto label_196d0c;
        case 0x196d40u: goto label_196d40;
        case 0x196d54u: goto label_196d54;
        case 0x196d80u: goto label_196d80;
        case 0x196db0u: goto label_196db0;
        default: break;
    }

    ctx->pc = 0x196bc0u;

    // 0x196bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196bd0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x196bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x196bd4: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x196BD4u;
    {
        const bool branch_taken_0x196bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x196BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BD4u;
        // 0x196bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bd4) {
            ctx->pc = 0x196C98u;
            goto label_196c98;
        }
    }
    ctx->pc = 0x196BDCu;
    // 0x196bdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196BDCu;
    {
        const bool branch_taken_0x196bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196bdc) {
            ctx->pc = 0x196BF0u;
            goto label_196bf0;
        }
    }
    ctx->pc = 0x196BE4u;
    // 0x196be4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x196BE4u;
    {
        const bool branch_taken_0x196be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196be4) {
            ctx->pc = 0x196D48u;
            goto label_196d48;
        }
    }
    ctx->pc = 0x196BECu;
    // 0x196bec: 0x0  nop
    ctx->pc = 0x196becu;
    // NOP
label_196bf0:
    // 0x196bf0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x196bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x196bf4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x196bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x196bf8: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x196bfc: 0xc056e04  jal         func_15B810
    ctx->pc = 0x196BFCu;
    SET_GPR_U32(ctx, 31, 0x196C04u);
    ctx->pc = 0x196C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196BFCu;
    // 0x196c00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x196BFCu, 0x196C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C04u;
label_196c04:
    // 0x196c04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x196c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x196c08: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x196c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x196c0c: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x196c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x196c10: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x196c14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x196c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196c18: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x196c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x196c1c: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x196c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x196c20: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x196c24: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x196c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x196c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196c30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196c34: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x196c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x196c38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x196c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x196c3c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x196c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x196c40: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x196c44: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x196C44u;
    SET_GPR_U32(ctx, 31, 0x196C4Cu);
    ctx->pc = 0x196C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C44u;
    // 0x196c48: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x196C44u, 0x196C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C4Cu;
label_196c4c:
    // 0x196c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196c50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196c54: 0xa3a30039  sb          $v1, 0x39($sp)
    ctx->pc = 0x196c54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x196c58: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x196c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x196c5c: 0xa3a3003a  sb          $v1, 0x3A($sp)
    ctx->pc = 0x196c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x196c60: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196c64: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x196c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x196c68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c74: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x196c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196c78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196c7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196c80: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x196c84: 0xc09565c  jal         func_255970
    ctx->pc = 0x196C84u;
    SET_GPR_U32(ctx, 31, 0x196C8Cu);
    ctx->pc = 0x196C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C84u;
    // 0x196c88: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x196C84u, 0x196C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C8Cu;
label_196c8c:
    // 0x196c8c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x196C8Cu;
    {
        const bool branch_taken_0x196c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196c8c) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196C94u;
    // 0x196c94: 0x0  nop
    ctx->pc = 0x196c94u;
    // NOP
label_196c98:
    // 0x196c98: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196c9c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x196C9Cu;
    SET_GPR_U32(ctx, 31, 0x196CA4u);
    ctx->pc = 0x196CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C9Cu;
    // 0x196ca0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x196C9Cu, 0x196CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CA4u;
label_196ca4:
    // 0x196ca4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x196CA4u;
    {
        const bool branch_taken_0x196ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196ca4) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196CACu;
    // 0x196cac: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x196cb0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x196CB0u;
    {
        const bool branch_taken_0x196cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196cb0) {
            ctx->pc = 0x196CF0u;
            goto label_196cf0;
        }
    }
    ctx->pc = 0x196CB8u;
    // 0x196cb8: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x196cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x196cbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196cc0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x196cc4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196cc8: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x196cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x196ccc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x196cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cd4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x196cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x196cd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ce0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ce4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ce8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x196CE8u;
    SET_GPR_U32(ctx, 31, 0x196CF0u);
    ctx->pc = 0x196CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CE8u;
    // 0x196cec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x196CE8u, 0x196CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CF0u;
label_196cf0:
    // 0x196cf0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x196cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x196cf4: 0x8c22ea28  lw          $v0, -0x15D8($at)
    ctx->pc = 0x196cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x196cf8: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x196cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x196cfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196CFCu;
    {
        const bool branch_taken_0x196cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CFCu;
        // 0x196d00: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cfc) {
            ctx->pc = 0x196D18u;
            goto label_196d18;
        }
    }
    ctx->pc = 0x196D04u;
    // 0x196d04: 0xc095150  jal         func_254540
    ctx->pc = 0x196D04u;
    SET_GPR_U32(ctx, 31, 0x196D0Cu);
    ctx->pc = 0x196D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D04u;
    // 0x196d08: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x196D04u, 0x196D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D0Cu;
label_196d0c:
    // 0x196d0c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x196D0Cu;
    {
        const bool branch_taken_0x196d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196d0c) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D14u;
    // 0x196d14: 0x0  nop
    ctx->pc = 0x196d14u;
    // NOP
label_196d18:
    // 0x196d18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x196d1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196d20: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x196d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x196d24: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x196d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x196d28: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d38: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x196D38u;
    SET_GPR_U32(ctx, 31, 0x196D40u);
    ctx->pc = 0x196D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D38u;
    // 0x196d3c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x196D38u, 0x196D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D40u;
label_196d40:
    // 0x196d40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x196D40u;
    {
        const bool branch_taken_0x196d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d40) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D48u;
label_196d48:
    // 0x196d48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196d4c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x196D4Cu;
    SET_GPR_U32(ctx, 31, 0x196D54u);
    ctx->pc = 0x196D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D4Cu;
    // 0x196d50: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x196D4Cu, 0x196D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D54u;
label_196d54:
    // 0x196d54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x196D54u;
    {
        const bool branch_taken_0x196d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D54u;
        // 0x196d58: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d54) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D5Cu;
    // 0x196d5c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x196d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x196d60: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x196d64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196d68: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196d6c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196d70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x196d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x196d74: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x196d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x196d78: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x196D78u;
    SET_GPR_U32(ctx, 31, 0x196D80u);
    ctx->pc = 0x196D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D78u;
    // 0x196d7c: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x196D78u, 0x196D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D80u;
label_196d80:
    // 0x196d80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x196D80u;
    {
        const bool branch_taken_0x196d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D80u;
        // 0x196d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d80) {
            ctx->pc = 0x196DB8u;
            goto label_196db8;
        }
    }
    ctx->pc = 0x196D88u;
label_196d88:
    // 0x196d88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x196d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x196d8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x196D8Cu;
    {
        const bool branch_taken_0x196d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D8Cu;
        // 0x196d90: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d8c) {
            ctx->pc = 0x196DB0u;
            goto label_196db0;
        }
    }
    ctx->pc = 0x196D94u;
    // 0x196d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d98: 0x24a5e5f0  addiu       $a1, $a1, -0x1A10
    ctx->pc = 0x196d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960624));
    // 0x196d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196da0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196da4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196da8: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x196DA8u;
    SET_GPR_U32(ctx, 31, 0x196DB0u);
    ctx->pc = 0x196DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DA8u;
    // 0x196dac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x196DA8u, 0x196DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DB0u;
label_196db0:
    // 0x196db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196db4: 0x0  nop
    ctx->pc = 0x196db4u;
    // NOP
label_196db8:
    // 0x196db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196dbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x196DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DC0u;
        // 0x196dc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196DC8u;
}
