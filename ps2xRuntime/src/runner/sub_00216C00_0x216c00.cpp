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

// Function: sub_00216C00
// Address: 0x216c00 - 0x216e84
void sub_00216C00_0x216c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216C00_0x216c00");
#endif

    switch (ctx->pc) {
        case 0x216c44u: goto label_216c44;
        case 0x216c58u: goto label_216c58;
        case 0x216cc8u: goto label_216cc8;
        case 0x216d60u: goto label_216d60;
        case 0x216d84u: goto label_216d84;
        case 0x216e30u: goto label_216e30;
        default: break;
    }

    ctx->pc = 0x216c00u;

    // 0x216c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216c08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216c10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x216c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216c1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x216c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x216c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x216c24: 0x26550d30  addiu       $s5, $s2, 0xD30
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x216c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x216c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x216c34: 0x26450d4c  addiu       $a1, $s2, 0xD4C
    ctx->pc = 0x216c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3404));
    // 0x216c38: 0x265111e0  addiu       $s1, $s2, 0x11E0
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4576));
    // 0x216c3c: 0xc085dca  jal         func_217728
    ctx->pc = 0x216C3Cu;
    SET_GPR_U32(ctx, 31, 0x216C44u);
    ctx->pc = 0x216C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C3Cu;
    // 0x216c40: 0x8e531fc0  lw          $s3, 0x1FC0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217728u, 0x216C3Cu, 0x216C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C44u;
label_216c44:
    // 0x216c44: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x216C44u;
    {
        const bool branch_taken_0x216c44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C44u;
        // 0x216c48: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c44) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C4Cu;
    // 0x216c4c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x216c50: 0x264212dc  addiu       $v0, $s2, 0x12DC
    ctx->pc = 0x216c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4828));
    // 0x216c54: 0x0  nop
    ctx->pc = 0x216c54u;
    // NOP
label_216c58:
    // 0x216c58: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x216c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x216c5c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x216c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x216c60: 0x0  nop
    ctx->pc = 0x216c60u;
    // NOP
    // 0x216c64: 0x0  nop
    ctx->pc = 0x216c64u;
    // NOP
    // 0x216c68: 0x0  nop
    ctx->pc = 0x216c68u;
    // NOP
    // 0x216c6c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x216C6Cu;
    {
        const bool branch_taken_0x216c6c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x216C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C6Cu;
        // 0x216c70: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c6c) {
            ctx->pc = 0x216C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216c58;
        }
    }
    ctx->pc = 0x216C74u;
    // 0x216c74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x216c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216c78: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x216c7c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x216c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x216c80: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x216C80u;
    {
        const bool branch_taken_0x216c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C80u;
        // 0x216c84: 0x8e0a0018  lw          $t2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c80) {
            ctx->pc = 0x216D08u;
            goto label_216d08;
        }
    }
    ctx->pc = 0x216C88u;
label_216c88:
    // 0x216c88: 0x8e0a0018  lw          $t2, 0x18($s0)
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x216c8c: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x216c90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x216c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x216c94: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x216C94u;
    {
        const bool branch_taken_0x216c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C94u;
        // 0x216c98: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c94) {
            ctx->pc = 0x216D08u;
            goto label_216d08;
        }
    }
    ctx->pc = 0x216C9Cu;
    // 0x216c9c: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x216c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x216ca0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x216ca4: 0x24e50400  addiu       $a1, $a3, 0x400
    ctx->pc = 0x216ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x216ca8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x216ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cac: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x216cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x216cb0: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x216cb4: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x216cb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x216cb8: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x216cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x216cbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x216CBCu;
    {
        const bool branch_taken_0x216cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CBCu;
        // 0x216cc0: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cbc) {
            ctx->pc = 0x216D0Cu;
            goto label_216d0c;
        }
    }
    ctx->pc = 0x216CC4u;
    // 0x216cc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_216cc8:
    // 0x216cc8: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x216cc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216ccc: 0x24c4003f  addiu       $a0, $a2, 0x3F
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x216cd0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x216cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cd4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x216cd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x216cd8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x216cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x216cdc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x216cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x216ce0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x216ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x216ce4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x216ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x216ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216cec: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x216cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x216cf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x216cf4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x216CF4u;
    {
        const bool branch_taken_0x216cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CF4u;
        // 0x216cf8: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cf4) {
            ctx->pc = 0x216CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216cc8;
        }
    }
    ctx->pc = 0x216CFCu;
    // 0x216cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x216CFCu;
    {
        const bool branch_taken_0x216cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CFCu;
        // 0x216d00: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cfc) {
            ctx->pc = 0x216D0Cu;
            goto label_216d0c;
        }
    }
    ctx->pc = 0x216D04u;
    // 0x216d04: 0x0  nop
    ctx->pc = 0x216d04u;
    // NOP
label_216d08:
    // 0x216d08: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x216d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
label_216d0c:
    // 0x216d0c: 0x24e4003f  addiu       $a0, $a3, 0x3F
    ctx->pc = 0x216d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x216d10: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x216d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d14: 0x96a50038  lhu         $a1, 0x38($s5)
    ctx->pc = 0x216d14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x216d18: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x216d18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x216d1c: 0x24183  sra         $t0, $v0, 6
    ctx->pc = 0x216d1cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 6));
    // 0x216d20: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x216d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x216d24: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x216d24u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x216d28: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x216d28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x216d2c: 0x1311021  addu        $v0, $t1, $s1
    ctx->pc = 0x216d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x216d30: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x216D30u;
    {
        const bool branch_taken_0x216d30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D30u;
        // 0x216d34: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d30) {
            ctx->pc = 0x216D40u;
            goto label_216d40;
        }
    }
    ctx->pc = 0x216D38u;
    // 0x216d38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x216D38u;
    {
        const bool branch_taken_0x216d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D38u;
        // 0x216d3c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d38) {
            ctx->pc = 0x216DC8u;
            goto label_216dc8;
        }
    }
    ctx->pc = 0x216D40u;
label_216d40:
    // 0x216d40: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x216D40u;
    {
        const bool branch_taken_0x216d40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x216D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D40u;
        // 0x216d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d40) {
            ctx->pc = 0x216D78u;
            goto label_216d78;
        }
    }
    ctx->pc = 0x216D48u;
    // 0x216d48: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x216d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x216d4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x216d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216d50: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x216D50u;
    {
        const bool branch_taken_0x216d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216d50) {
            ctx->pc = 0x216D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216D50u;
            // 0x216d54: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D80u;
            goto label_216d80;
        }
    }
    ctx->pc = 0x216D58u;
    // 0x216d58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x216D58u;
    {
        const bool branch_taken_0x216d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D58u;
        // 0x216d5c: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d58) {
            ctx->pc = 0x216DC8u;
            goto label_216dc8;
        }
    }
    ctx->pc = 0x216D60u;
label_216d60:
    // 0x216d60: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x216d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x216d64: 0x1311821  addu        $v1, $t1, $s1
    ctx->pc = 0x216d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x216d68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x216d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x216d6c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x216D6Cu;
    {
        const bool branch_taken_0x216d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D6Cu;
        // 0x216d70: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d6c) {
            ctx->pc = 0x216DC8u;
            goto label_216dc8;
        }
    }
    ctx->pc = 0x216D74u;
    // 0x216d74: 0x0  nop
    ctx->pc = 0x216d74u;
    // NOP
label_216d78:
    // 0x216d78: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216d7c: 0x0  nop
    ctx->pc = 0x216d7cu;
    // NOP
label_216d80:
    // 0x216d80: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x216d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_216d84:
    // 0x216d84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x216d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x216d88: 0x2465003f  addiu       $a1, $v1, 0x3F
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x216d8c: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x216d90: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x216d90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216d94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x216d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d98: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x216d98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x216d9c: 0x28c40040  slti        $a0, $a2, 0x40
    ctx->pc = 0x216d9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x216da0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x216da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x216da4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x216da8: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x216da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x216dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216db0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x216db4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216db8: 0x1467ffe9  bne         $v1, $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x216DB8u;
    {
        const bool branch_taken_0x216db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x216DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DB8u;
        // 0x216dbc: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216db8) {
            ctx->pc = 0x216D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216d60;
        }
    }
    ctx->pc = 0x216DC0u;
    // 0x216dc0: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x216DC0u;
    {
        const bool branch_taken_0x216dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x216DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DC0u;
        // 0x216dc4: 0x1061823  subu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dc0) {
            ctx->pc = 0x216D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216d84;
        }
    }
    ctx->pc = 0x216DC8u;
label_216dc8:
    // 0x216dc8: 0x1312821  addu        $a1, $t1, $s1
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x216dcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216dd0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x216dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x216dd4: 0x15430022  bne         $t2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x216DD4u;
    {
        const bool branch_taken_0x216dd4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x216DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DD4u;
        // 0x216dd8: 0xa6a2003a  sh          $v0, 0x3A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dd4) {
            ctx->pc = 0x216E60u;
            goto label_216e60;
        }
    }
    ctx->pc = 0x216DDCu;
    // 0x216ddc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216de0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x216DE0u;
    {
        const bool branch_taken_0x216de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DE0u;
        // 0x216de4: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216de0) {
            ctx->pc = 0x216E60u;
            goto label_216e60;
        }
    }
    ctx->pc = 0x216DE8u;
    // 0x216de8: 0x8e690164  lw          $t1, 0x164($s3)
    ctx->pc = 0x216de8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x216dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216df0: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x216df0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x216df4: 0x8d260070  lw          $a2, 0x70($t1)
    ctx->pc = 0x216df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x216df8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x216df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216dfc: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x216dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x216e00: 0x24c8003f  addiu       $t0, $a2, 0x3F
    ctx->pc = 0x216e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x216e04: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x216e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e08: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x216e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216e0c: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x216e0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x216e10: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x216e14: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x216e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x216e18: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x216e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x216e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216e20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x216e24: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x216e24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x216e28: 0xc085ba2  jal         func_216E88
    ctx->pc = 0x216E28u;
    SET_GPR_U32(ctx, 31, 0x216E30u);
    ctx->pc = 0x216E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E28u;
    // 0x216e2c: 0xa527002e  sh          $a3, 0x2E($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 46), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E88u, 0x216E28u, 0x216E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216E30u;
label_216e30:
    // 0x216e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e34: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x216e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216e40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216e44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216e48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216e4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x216e4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216e50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x216e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216e54: 0x80862a4  j           func_218A90
    ctx->pc = 0x216E54u;
    ctx->pc = 0x216E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E54u;
    // 0x216e58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218A90u;
    sub_00218A90_0x218a90(rdram, ctx, runtime); return;
    ctx->pc = 0x216E5Cu;
    // 0x216e5c: 0x0  nop
    ctx->pc = 0x216e5cu;
    // NOP
label_216e60:
    // 0x216e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216e68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216e6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216e70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216e74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x216e74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216e78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x216e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x216E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E7Cu;
        // 0x216e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216E84u;
}
