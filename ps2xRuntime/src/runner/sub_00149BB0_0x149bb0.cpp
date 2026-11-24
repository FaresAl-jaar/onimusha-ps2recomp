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

// Function: sub_00149BB0
// Address: 0x149bb0 - 0x149d48
void sub_00149BB0_0x149bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149BB0_0x149bb0");
#endif

    switch (ctx->pc) {
        case 0x149bc8u: goto label_149bc8;
        case 0x149c00u: goto label_149c00;
        case 0x149c08u: goto label_149c08;
        case 0x149c30u: goto label_149c30;
        case 0x149c38u: goto label_149c38;
        case 0x149c80u: goto label_149c80;
        case 0x149cc0u: goto label_149cc0;
        case 0x149cd0u: goto label_149cd0;
        case 0x149ce0u: goto label_149ce0;
        case 0x149cf0u: goto label_149cf0;
        case 0x149d00u: goto label_149d00;
        case 0x149d10u: goto label_149d10;
        default: break;
    }

    ctx->pc = 0x149bb0u;

    // 0x149bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x149bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149bc0: 0xc0482d2  jal         func_120B48
    ctx->pc = 0x149BC0u;
    SET_GPR_U32(ctx, 31, 0x149BC8u);
    ctx->pc = 0x149BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BC0u;
    // 0x149bc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120B48u, 0x149BC0u, 0x149BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BC8u;
label_149bc8:
    // 0x149bc8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x149BC8u;
    {
        const bool branch_taken_0x149bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BC8u;
        // 0x149bcc: 0x2403ff87  addiu       $v1, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bc8) {
            ctx->pc = 0x149C28u;
            goto label_149c28;
        }
    }
    ctx->pc = 0x149BD0u;
    // 0x149bd0: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x149BD0u;
    {
        const bool branch_taken_0x149bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x149bd0) {
            ctx->pc = 0x149C28u;
            goto label_149c28;
        }
    }
    ctx->pc = 0x149BD8u;
    // 0x149bd8: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x149bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x149bdc: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x149BDCu;
    {
        const bool branch_taken_0x149bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x149BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BDCu;
        // 0x149be0: 0x2403ff9b  addiu       $v1, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bdc) {
            ctx->pc = 0x149C28u;
            goto label_149c28;
        }
    }
    ctx->pc = 0x149BE4u;
    // 0x149be4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149BE4u;
    {
        const bool branch_taken_0x149be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x149be4) {
            ctx->pc = 0x149BF8u;
            goto label_149bf8;
        }
    }
    ctx->pc = 0x149BECu;
    // 0x149bec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x149BECu;
    {
        const bool branch_taken_0x149bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149bec) {
            ctx->pc = 0x149C28u;
            goto label_149c28;
        }
    }
    ctx->pc = 0x149BF4u;
    // 0x149bf4: 0x0  nop
    ctx->pc = 0x149bf4u;
    // NOP
label_149bf8:
    // 0x149bf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x149bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bfc: 0x0  nop
    ctx->pc = 0x149bfcu;
    // NOP
label_149c00:
    // 0x149c00: 0xc0482d2  jal         func_120B48
    ctx->pc = 0x149C00u;
    SET_GPR_U32(ctx, 31, 0x149C08u);
    ctx->pc = 0x120B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120B48u, 0x149C00u, 0x149C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C08u;
label_149c08:
    // 0x149c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149C08u;
    {
        const bool branch_taken_0x149c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149c08) {
            ctx->pc = 0x149C28u;
            goto label_149c28;
        }
    }
    ctx->pc = 0x149C10u;
    // 0x149c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x149c14: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x149c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x149c18: 0x0  nop
    ctx->pc = 0x149c18u;
    // NOP
    // 0x149c1c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x149C1Cu;
    {
        const bool branch_taken_0x149c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149c1c) {
            ctx->pc = 0x149C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149c00;
        }
    }
    ctx->pc = 0x149C24u;
    // 0x149c24: 0x0  nop
    ctx->pc = 0x149c24u;
    // NOP
label_149c28:
    // 0x149c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c2c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x149c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149c30:
    // 0x149c30: 0x24650220  addiu       $a1, $v1, 0x220
    ctx->pc = 0x149c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x149c34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149c38:
    // 0x149c38: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x149c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c3c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x149c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c40: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x149c44: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x149c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x149c48: 0x2c82006c  sltiu       $v0, $a0, 0x6C
    ctx->pc = 0x149c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
    // 0x149c4c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x149c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c50: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x149c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c54: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x149c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x149c58: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x149c58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c5c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x149c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c60: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x149c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x149c64: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x149c64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c68: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x149c68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c6c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x149C6Cu;
    {
        const bool branch_taken_0x149c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C6Cu;
        // 0x149c70: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c6c) {
            ctx->pc = 0x149C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149c38;
        }
    }
    ctx->pc = 0x149C74u;
    // 0x149c74: 0x2c810074  sltiu       $at, $a0, 0x74
    ctx->pc = 0x149c74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)116) ? 1 : 0);
    // 0x149c78: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x149C78u;
    {
        const bool branch_taken_0x149c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149c78) {
            ctx->pc = 0x149CA0u;
            goto label_149ca0;
        }
    }
    ctx->pc = 0x149C80u;
label_149c80:
    // 0x149c80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x149c84: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x149c84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149c88: 0x2c820074  sltiu       $v0, $a0, 0x74
    ctx->pc = 0x149c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)116) ? 1 : 0);
    // 0x149c8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x149c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x149c90: 0x0  nop
    ctx->pc = 0x149c90u;
    // NOP
    // 0x149c94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x149C94u;
    {
        const bool branch_taken_0x149c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149c94) {
            ctx->pc = 0x149C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149c80;
        }
    }
    ctx->pc = 0x149C9Cu;
    // 0x149c9c: 0x0  nop
    ctx->pc = 0x149c9cu;
    // NOP
label_149ca0:
    // 0x149ca0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x149ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x149ca4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x149ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x149ca8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x149CA8u;
    {
        const bool branch_taken_0x149ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CA8u;
        // 0x149cac: 0x24630074  addiu       $v1, $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ca8) {
            ctx->pc = 0x149C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149c30;
        }
    }
    ctx->pc = 0x149CB0u;
    // 0x149cb0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x149cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x149cb4: 0x26040238  addiu       $a0, $s0, 0x238
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x149cb8: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x149CB8u;
    SET_GPR_U32(ctx, 31, 0x149CC0u);
    ctx->pc = 0x149CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CB8u;
    // 0x149cbc: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x149CB8u, 0x149CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CC0u;
label_149cc0:
    // 0x149cc0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x149cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x149cc4: 0x26040238  addiu       $a0, $s0, 0x238
    ctx->pc = 0x149cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x149cc8: 0xc049dd0  jal         func_127740
    ctx->pc = 0x149CC8u;
    SET_GPR_U32(ctx, 31, 0x149CD0u);
    ctx->pc = 0x149CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CC8u;
    // 0x149ccc: 0x24a549d8  addiu       $a1, $a1, 0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x149CC8u, 0x149CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CD0u;
label_149cd0:
    // 0x149cd0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x149cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x149cd4: 0x26040238  addiu       $a0, $s0, 0x238
    ctx->pc = 0x149cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x149cd8: 0xc049dd0  jal         func_127740
    ctx->pc = 0x149CD8u;
    SET_GPR_U32(ctx, 31, 0x149CE0u);
    ctx->pc = 0x149CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CD8u;
    // 0x149cdc: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x149CD8u, 0x149CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CE0u;
label_149ce0:
    // 0x149ce0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x149ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x149ce4: 0x260402ac  addiu       $a0, $s0, 0x2AC
    ctx->pc = 0x149ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
    // 0x149ce8: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x149CE8u;
    SET_GPR_U32(ctx, 31, 0x149CF0u);
    ctx->pc = 0x149CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CE8u;
    // 0x149cec: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x149CE8u, 0x149CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CF0u;
label_149cf0:
    // 0x149cf0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x149cf4: 0x260402ac  addiu       $a0, $s0, 0x2AC
    ctx->pc = 0x149cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
    // 0x149cf8: 0xc049dd0  jal         func_127740
    ctx->pc = 0x149CF8u;
    SET_GPR_U32(ctx, 31, 0x149D00u);
    ctx->pc = 0x149CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CF8u;
    // 0x149cfc: 0x24a549d8  addiu       $a1, $a1, 0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x149CF8u, 0x149D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D00u;
label_149d00:
    // 0x149d00: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x149d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x149d04: 0x260402ac  addiu       $a0, $s0, 0x2AC
    ctx->pc = 0x149d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
    // 0x149d08: 0xc049dd0  jal         func_127740
    ctx->pc = 0x149D08u;
    SET_GPR_U32(ctx, 31, 0x149D10u);
    ctx->pc = 0x149D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D08u;
    // 0x149d0c: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x149D08u, 0x149D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D10u;
label_149d10:
    // 0x149d10: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149d14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149d18: 0x24638f40  addiu       $v1, $v1, -0x70C0
    ctx->pc = 0x149d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938432));
    // 0x149d1c: 0x24849740  addiu       $a0, $a0, -0x68C0
    ctx->pc = 0x149d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
    // 0x149d20: 0xae030278  sw          $v1, 0x278($s0)
    ctx->pc = 0x149d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
    // 0x149d24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x149d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149d28: 0xae0402ec  sw          $a0, 0x2EC($s0)
    ctx->pc = 0x149d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 4));
    // 0x149d2c: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x149d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
    // 0x149d30: 0xae0302f0  sw          $v1, 0x2F0($s0)
    ctx->pc = 0x149d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 3));
    // 0x149d34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d40: 0x3e00008  jr          $ra
    ctx->pc = 0x149D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D40u;
        // 0x149d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D48u;
}
