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

// Function: sub_00143D60
// Address: 0x143d60 - 0x143e90
void sub_00143D60_0x143d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143D60_0x143d60");
#endif

    switch (ctx->pc) {
        case 0x143e58u: goto label_143e58;
        case 0x143e6cu: goto label_143e6c;
        case 0x143e80u: goto label_143e80;
        default: break;
    }

    ctx->pc = 0x143d60u;

    // 0x143d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143d6c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x143D6Cu;
    {
        const bool branch_taken_0x143d6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x143D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D6Cu;
        // 0x143d70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d6c) {
            ctx->pc = 0x143D80u;
            goto label_143d80;
        }
    }
    ctx->pc = 0x143D74u;
    // 0x143d74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143d78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143D78u;
    {
        const bool branch_taken_0x143d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D78u;
        // 0x143d7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d78) {
            ctx->pc = 0x143D88u;
            goto label_143d88;
        }
    }
    ctx->pc = 0x143D80u;
label_143d80:
    // 0x143d80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x143d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143d84: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x143d84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_143d88:
    // 0x143d88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x143d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143d8c: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x143D8Cu;
    {
        const bool branch_taken_0x143d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x143d8c) {
            ctx->pc = 0x143D98u;
            goto label_143d98;
        }
    }
    ctx->pc = 0x143D94u;
    // 0x143d94: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x143d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_143d98:
    // 0x143d98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x143d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x143d9c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x143D9Cu;
    {
        const bool branch_taken_0x143d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d9c) {
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143DA4u;
    // 0x143da4: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x143da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x143da8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x143da8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x143dac: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x143DACu;
    {
        const bool branch_taken_0x143dac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DACu;
        // 0x143db0: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dac) {
            ctx->pc = 0x143E08u;
            goto label_143e08;
        }
    }
    ctx->pc = 0x143DB4u;
    // 0x143db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143db8: 0x24634990  addiu       $v1, $v1, 0x4990
    ctx->pc = 0x143db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18832));
    // 0x143dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143dc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143dc4: 0x400008  jr          $v0
    ctx->pc = 0x143DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143DD0u: goto label_143dd0;
            case 0x143DE0u: goto label_143de0;
            case 0x143DE8u: goto label_143de8;
            case 0x143DF0u: goto label_143df0;
            case 0x143DF8u: goto label_143df8;
            case 0x143E00u: goto label_143e00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143DC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x143DCCu;
    // 0x143dcc: 0x0  nop
    ctx->pc = 0x143dccu;
    // NOP
label_143dd0:
    // 0x143dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143dd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x143DD4u;
    {
        const bool branch_taken_0x143dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DD4u;
        // 0x143dd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dd4) {
            ctx->pc = 0x143E08u;
            goto label_143e08;
        }
    }
    ctx->pc = 0x143DDCu;
    // 0x143ddc: 0x0  nop
    ctx->pc = 0x143ddcu;
    // NOP
label_143de0:
    // 0x143de0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x143DE0u;
    {
        const bool branch_taken_0x143de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DE0u;
        // 0x143de4: 0x64050010  daddiu      $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143de0) {
            ctx->pc = 0x143E08u;
            goto label_143e08;
        }
    }
    ctx->pc = 0x143DE8u;
label_143de8:
    // 0x143de8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143DE8u;
    {
        const bool branch_taken_0x143de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DE8u;
        // 0x143dec: 0x64050011  daddiu      $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143de8) {
            ctx->pc = 0x143E08u;
            goto label_143e08;
        }
    }
    ctx->pc = 0x143DF0u;
label_143df0:
    // 0x143df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143DF0u;
    {
        const bool branch_taken_0x143df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DF0u;
        // 0x143df4: 0x64050012  daddiu      $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143df0) {
            ctx->pc = 0x143E08u;
            goto label_143e08;
        }
    }
    ctx->pc = 0x143DF8u;
label_143df8:
    // 0x143df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143DF8u;
    {
        const bool branch_taken_0x143df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DF8u;
        // 0x143dfc: 0x64050013  daddiu      $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143df8) {
            ctx->pc = 0x143E08u;
            goto label_143e08;
        }
    }
    ctx->pc = 0x143E00u;
label_143e00:
    // 0x143e00: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x143e00u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x143e04: 0x0  nop
    ctx->pc = 0x143e04u;
    // NOP
label_143e08:
    // 0x143e08: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x143E08u;
    {
        const bool branch_taken_0x143e08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e08) {
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143E10u;
    // 0x143e10: 0x92060024  lbu         $a2, 0x24($s0)
    ctx->pc = 0x143e10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x143e14: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x143e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x143e18: 0x14460015  bne         $v0, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x143E18u;
    {
        const bool branch_taken_0x143e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x143e18) {
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143E20u;
    // 0x143e20: 0x92040025  lbu         $a0, 0x25($s0)
    ctx->pc = 0x143e20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x143e24: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x143e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x143e28: 0x14440011  bne         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143E28u;
    {
        const bool branch_taken_0x143e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x143e28) {
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143E30u;
    // 0x143e30: 0x92030026  lbu         $v1, 0x26($s0)
    ctx->pc = 0x143e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x143e34: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x143e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x143e38: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x143E38u;
    {
        const bool branch_taken_0x143e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x143E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E38u;
        // 0x143e3c: 0x41200  sll         $v0, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e38) {
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143E40u;
    // 0x143e40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x143e44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143e48: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x143e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x143e4c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x143e50: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x143E50u;
    SET_GPR_U32(ctx, 31, 0x143E58u);
    ctx->pc = 0x143E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E50u;
    // 0x143e54: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x143E50u, 0x143E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E58u;
label_143e58:
    // 0x143e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143E58u;
    {
        const bool branch_taken_0x143e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E58u;
        // 0x143e5c: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e58) {
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143E60u;
    // 0x143e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e64: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x143E64u;
    SET_GPR_U32(ctx, 31, 0x143E6Cu);
    ctx->pc = 0x143E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E64u;
    // 0x143e68: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x143E64u, 0x143E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E6Cu;
label_143e6c:
    // 0x143e6c: 0x0  nop
    ctx->pc = 0x143e6cu;
    // NOP
label_143e70:
    // 0x143e70: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x143e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e78: 0xc04bfbc  jal         func_12FEF0
    ctx->pc = 0x143E78u;
    SET_GPR_U32(ctx, 31, 0x143E80u);
    ctx->pc = 0x143E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E78u;
    // 0x143e7c: 0x2484cf04  addiu       $a0, $a0, -0x30FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x143E78u, 0x143E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E80u;
label_143e80:
    // 0x143e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143e88: 0x3e00008  jr          $ra
    ctx->pc = 0x143E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E88u;
        // 0x143e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143E90u;
}
