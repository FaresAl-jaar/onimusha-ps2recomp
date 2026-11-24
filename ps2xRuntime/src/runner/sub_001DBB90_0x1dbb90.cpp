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

// Function: sub_001DBB90
// Address: 0x1dbb90 - 0x1dbc5c
void sub_001DBB90_0x1dbb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBB90_0x1dbb90");
#endif

    switch (ctx->pc) {
        case 0x1dbbd4u: goto label_1dbbd4;
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc14u: goto label_1dbc14;
        default: break;
    }

    ctx->pc = 0x1dbb90u;

    // 0x1dbb90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dbb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dbb94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dbb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dbb98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dbb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dbb9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dbba0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dbba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dbba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbba8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dbba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dbbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dbbb0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1dbbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1dbbb4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DBBB4u;
    {
        const bool branch_taken_0x1dbbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBB4u;
        // 0x1dbbb8: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbb4) {
            ctx->pc = 0x1DBC40u;
            goto label_1dbc40;
        }
    }
    ctx->pc = 0x1DBBBCu;
    // 0x1dbbbc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1dbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1dbbc0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dbbc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbbc8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1dbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1dbbcc: 0xc078824  jal         func_1E2090
    ctx->pc = 0x1DBBCCu;
    SET_GPR_U32(ctx, 31, 0x1DBBD4u);
    ctx->pc = 0x1DBBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBCCu;
    // 0x1dbbd0: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2090u, 0x1DBBCCu, 0x1DBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBD4u;
label_1dbbd4:
    // 0x1dbbd4: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x1dbbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1dbbd8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1dbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dbbdc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1dbbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1dbbe0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1dbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbbe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dbbe8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1dbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1dbbec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1dbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dbbf0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1dbbf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dbbf4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBBF4u;
    {
        const bool branch_taken_0x1dbbf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBF4u;
        // 0x1dbbf8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbf4) {
            ctx->pc = 0x1DBC40u;
            goto label_1dbc40;
        }
    }
    ctx->pc = 0x1DBBFCu;
    // 0x1dbbfc: 0x0  nop
    ctx->pc = 0x1dbbfcu;
    // NOP
label_1dbc00:
    // 0x1dbc00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dbc04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbc08: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1dbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1dbc0c: 0xc0770cc  jal         func_1DC330
    ctx->pc = 0x1DBC0Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC14u);
    ctx->pc = 0x1DBC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC0Cu;
    // 0x1dbc10: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC330u, 0x1DBC0Cu, 0x1DBC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC14u;
label_1dbc14:
    // 0x1dbc14: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x1dbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1dbc18: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1dbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dbc1c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1dbc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1dbc20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dbc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dbc24: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1dbc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbc28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dbc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dbc2c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1dbc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1dbc30: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1dbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dbc34: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1dbc34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dbc38: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DBC38u;
    {
        const bool branch_taken_0x1dbc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC38u;
        // 0x1dbc3c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc38) {
            ctx->pc = 0x1DBC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc00;
        }
    }
    ctx->pc = 0x1DBC40u;
label_1dbc40:
    // 0x1dbc40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dbc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dbc44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dbc44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbc48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dbc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dbc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC54u;
        // 0x1dbc58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC5Cu;
}
