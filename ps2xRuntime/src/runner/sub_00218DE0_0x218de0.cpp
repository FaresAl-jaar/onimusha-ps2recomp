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

// Function: sub_00218DE0
// Address: 0x218de0 - 0x218f3c
void sub_00218DE0_0x218de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218DE0_0x218de0");
#endif

    switch (ctx->pc) {
        case 0x218e04u: goto label_218e04;
        case 0x218e2cu: goto label_218e2c;
        case 0x218eb4u: goto label_218eb4;
        case 0x218ec0u: goto label_218ec0;
        default: break;
    }

    ctx->pc = 0x218de0u;

    // 0x218de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x218de4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x218de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x218de8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x218de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x218decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x218df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218df4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x218df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x218df8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x218df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dfc: 0xc083d42  jal         func_20F508
    ctx->pc = 0x218DFCu;
    SET_GPR_U32(ctx, 31, 0x218E04u);
    ctx->pc = 0x218E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DFCu;
    // 0x218e00: 0x8e251fc8  lw          $a1, 0x1FC8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F508u, 0x218DFCu, 0x218E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E04u;
label_218e04:
    // 0x218e04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218E04u;
    {
        const bool branch_taken_0x218e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E04u;
        // 0x218e08: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e04) {
            ctx->pc = 0x218E18u;
            goto label_218e18;
        }
    }
    ctx->pc = 0x218E0Cu;
    // 0x218e0c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x218E0Cu;
    {
        const bool branch_taken_0x218e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E0Cu;
        // 0x218e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e0c) {
            ctx->pc = 0x218F28u;
            goto label_218f28;
        }
    }
    ctx->pc = 0x218E14u;
    // 0x218e14: 0x0  nop
    ctx->pc = 0x218e14u;
    // NOP
label_218e18:
    // 0x218e18: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x218E18u;
    {
        const bool branch_taken_0x218e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E18u;
        // 0x218e1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e18) {
            ctx->pc = 0x218F28u;
            goto label_218f28;
        }
    }
    ctx->pc = 0x218E20u;
    // 0x218e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e24: 0xc0856d8  jal         func_215B60
    ctx->pc = 0x218E24u;
    SET_GPR_U32(ctx, 31, 0x218E2Cu);
    ctx->pc = 0x218E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E24u;
    // 0x218e28: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B60u, 0x218E24u, 0x218E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E2Cu;
label_218e2c:
    // 0x218e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e30: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218E30u;
    {
        const bool branch_taken_0x218e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E30u;
        // 0x218e34: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e30) {
            ctx->pc = 0x218E58u;
            goto label_218e58;
        }
    }
    ctx->pc = 0x218E38u;
    // 0x218e38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x218e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x218e3c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x218e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x218e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218e44: 0x2450fffd  addiu       $s0, $v0, -0x3
    ctx->pc = 0x218e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x218e48: 0x6010018  bgez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x218E48u;
    {
        const bool branch_taken_0x218e48 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x218E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E48u;
        // 0x218e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e48) {
            ctx->pc = 0x218EACu;
            goto label_218eac;
        }
    }
    ctx->pc = 0x218E50u;
    // 0x218e50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x218E50u;
    {
        const bool branch_taken_0x218e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E50u;
        // 0x218e54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e50) {
            ctx->pc = 0x218EACu;
            goto label_218eac;
        }
    }
    ctx->pc = 0x218E58u;
label_218e58:
    // 0x218e58: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x218e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x218e5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x218E5Cu;
    {
        const bool branch_taken_0x218e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E5Cu;
        // 0x218e60: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e5c) {
            ctx->pc = 0x218E7Cu;
            goto label_218e7c;
        }
    }
    ctx->pc = 0x218E64u;
    // 0x218e64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x218e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x218e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218e6c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x218e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x218e70: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x218E70u;
    {
        const bool branch_taken_0x218e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E70u;
        // 0x218e74: 0x838023  subu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e70) {
            ctx->pc = 0x218EA8u;
            goto label_218ea8;
        }
    }
    ctx->pc = 0x218E78u;
    // 0x218e78: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_218e7c:
    // 0x218e7c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x218e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x218e80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218E80u;
    {
        const bool branch_taken_0x218e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E80u;
        // 0x218e84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e80) {
            ctx->pc = 0x218EA8u;
            goto label_218ea8;
        }
    }
    ctx->pc = 0x218E88u;
    // 0x218e88: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x218e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x218e8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x218e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x218e90: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x218e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x218e94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x218E94u;
    {
        const bool branch_taken_0x218e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e94) {
            ctx->pc = 0x218E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218E94u;
            // 0x218e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218EACu;
            goto label_218eac;
        }
    }
    ctx->pc = 0x218E9Cu;
    // 0x218e9c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x218ea0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x218ea4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x218ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218ea8:
    // 0x218ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_218eac:
    // 0x218eac: 0xc0863d0  jal         func_218F40
    ctx->pc = 0x218EACu;
    SET_GPR_U32(ctx, 31, 0x218EB4u);
    ctx->pc = 0x218EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EACu;
    // 0x218eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F40u, 0x218EACu, 0x218EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EB4u;
label_218eb4:
    // 0x218eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218eb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ebc: 0x2a050004  slti        $a1, $s0, 0x4
    ctx->pc = 0x218ebcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_218ec0:
    // 0x218ec0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x218ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218ec4: 0x205100b  movn        $v0, $s0, $a1
    ctx->pc = 0x218ec4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x218ec8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x218ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x218ecc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x218ECCu;
    {
        const bool branch_taken_0x218ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ECCu;
        // 0x218ed0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ecc) {
            ctx->pc = 0x218F04u;
            goto label_218f04;
        }
    }
    ctx->pc = 0x218ED4u;
    // 0x218ed4: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x218ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218ed8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x218ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x218edc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x218EDCu;
    {
        const bool branch_taken_0x218edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218edc) {
            ctx->pc = 0x218EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218EDCu;
            // 0x218ee0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218EF0u;
            goto label_218ef0;
        }
    }
    ctx->pc = 0x218EE4u;
    // 0x218ee4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x218EE8u;
    {
        const bool branch_taken_0x218ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE8u;
        // 0x218eec: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ee8) {
            ctx->pc = 0x218EF4u;
            goto label_218ef4;
        }
    }
    ctx->pc = 0x218EF0u;
label_218ef0:
    // 0x218ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218ef4:
    // 0x218ef4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x218ef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218ef8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x218EF8u;
    {
        const bool branch_taken_0x218ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EF8u;
        // 0x218efc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ef8) {
            ctx->pc = 0x218EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ec0;
        }
    }
    ctx->pc = 0x218F00u;
    // 0x218f00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218f04:
    // 0x218f04: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x218F04u;
    {
        const bool branch_taken_0x218f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F04u;
        // 0x218f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f04) {
            ctx->pc = 0x218F18u;
            goto label_218f18;
        }
    }
    ctx->pc = 0x218F0Cu;
    // 0x218f0c: 0xde2209b0  ld          $v0, 0x9B0($s1)
    ctx->pc = 0x218f0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 2480)));
    // 0x218f10: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x218f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x218f14: 0xfe2209b0  sd          $v0, 0x9B0($s1)
    ctx->pc = 0x218f14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2480), GPR_U64(ctx, 2));
label_218f18:
    // 0x218f18: 0xde2309a8  ld          $v1, 0x9A8($s1)
    ctx->pc = 0x218f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 2472)));
    // 0x218f1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x218f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f20: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x218f20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x218f24: 0xfe2309a8  sd          $v1, 0x9A8($s1)
    ctx->pc = 0x218f24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2472), GPR_U64(ctx, 3));
label_218f28:
    // 0x218f28: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x218f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218f2c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x218f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218f30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x218f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218f34: 0x3e00008  jr          $ra
    ctx->pc = 0x218F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F34u;
        // 0x218f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F3Cu;
}
