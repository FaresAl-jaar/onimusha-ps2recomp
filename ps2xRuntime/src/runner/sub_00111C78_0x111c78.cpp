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

// Function: sub_00111C78
// Address: 0x111c78 - 0x111d44
void sub_00111C78_0x111c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C78_0x111c78");
#endif

    switch (ctx->pc) {
        case 0x111c9cu: goto label_111c9c;
        case 0x111cc8u: goto label_111cc8;
        case 0x111d04u: goto label_111d04;
        default: break;
    }

    ctx->pc = 0x111c78u;

    // 0x111c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111c7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111c84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x111c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111c90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111c94: 0xc04460c  jal         func_111830
    ctx->pc = 0x111C94u;
    SET_GPR_U32(ctx, 31, 0x111C9Cu);
    ctx->pc = 0x111C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C94u;
    // 0x111c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111830u, 0x111C94u, 0x111C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C9Cu;
label_111c9c:
    // 0x111c9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ca0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x111ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111ca4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x111ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x111ca8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x111ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x111cac: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x111cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x111cb0: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x111cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x111cb4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x111cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x111cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cbc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x111cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x111cc0: 0xc0446fa  jal         func_111BE8
    ctx->pc = 0x111CC0u;
    SET_GPR_U32(ctx, 31, 0x111CC8u);
    ctx->pc = 0x111CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CC0u;
    // 0x111cc4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111BE8u, 0x111CC0u, 0x111CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CC8u;
label_111cc8:
    // 0x111cc8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x111CC8u;
    {
        const bool branch_taken_0x111cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111cc8) {
            ctx->pc = 0x111CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111CC8u;
            // 0x111ccc: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111CDCu;
            goto label_111cdc;
        }
    }
    ctx->pc = 0x111CD0u;
    // 0x111cd0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x111cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x111cd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x111CD4u;
    {
        const bool branch_taken_0x111cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CD4u;
        // 0x111cd8: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cd4) {
            ctx->pc = 0x111CE4u;
            goto label_111ce4;
        }
    }
    ctx->pc = 0x111CDCu;
label_111cdc:
    // 0x111cdc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x111cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x111ce0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x111ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_111ce4:
    // 0x111ce4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x111ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cec: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x111cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x111cf0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x111cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x111cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cfc: 0xc0444da  jal         func_111368
    ctx->pc = 0x111CFCu;
    SET_GPR_U32(ctx, 31, 0x111D04u);
    ctx->pc = 0x111D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CFCu;
    // 0x111d00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111368u, 0x111CFCu, 0x111D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D04u;
label_111d04:
    // 0x111d04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x111D04u;
    {
        const bool branch_taken_0x111d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D04u;
        // 0x111d08: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d04) {
            ctx->pc = 0x111D30u;
            goto label_111d30;
        }
    }
    ctx->pc = 0x111D0Cu;
    // 0x111d0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x111d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d10: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x111d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x111d14: 0x24a51c38  addiu       $a1, $a1, 0x1C38
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7224));
    // 0x111d18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d1c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x111d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x111d20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d28: 0x8046798  j           func_119E60
    ctx->pc = 0x111D28u;
    ctx->pc = 0x111D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D28u;
    // 0x111d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119E60u;
    sub_00119E60_0x119e60(rdram, ctx, runtime); return;
    ctx->pc = 0x111D30u;
label_111d30:
    // 0x111d30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x111D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D3Cu;
        // 0x111d40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111D44u;
}
