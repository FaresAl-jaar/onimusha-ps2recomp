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

// Function: sub_00151C10
// Address: 0x151c10 - 0x151cdc
void sub_00151C10_0x151c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151C10_0x151c10");
#endif

    switch (ctx->pc) {
        case 0x151c70u: goto label_151c70;
        case 0x151ca8u: goto label_151ca8;
        default: break;
    }

    ctx->pc = 0x151c10u;

    // 0x151c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151c14: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151C14u;
    {
        const bool branch_taken_0x151c14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x151C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C14u;
        // 0x151c18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c14) {
            ctx->pc = 0x151C30u;
            goto label_151c30;
        }
    }
    ctx->pc = 0x151C1Cu;
    // 0x151c1c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151C1Cu;
    {
        const bool branch_taken_0x151c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x151C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C1Cu;
        // 0x151c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c1c) {
            ctx->pc = 0x151C30u;
            goto label_151c30;
        }
    }
    ctx->pc = 0x151C24u;
    // 0x151c24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x151C24u;
    {
        const bool branch_taken_0x151c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c24) {
            ctx->pc = 0x151CD0u;
            goto label_151cd0;
        }
    }
    ctx->pc = 0x151C2Cu;
    // 0x151c2c: 0x0  nop
    ctx->pc = 0x151c2cu;
    // NOP
label_151c30:
    // 0x151c30: 0x83868574  lb          $a2, -0x7A8C($gp)
    ctx->pc = 0x151c30u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x151c34: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x151c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x151c38: 0x244271b0  addiu       $v0, $v0, 0x71B0
    ctx->pc = 0x151c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29104));
    // 0x151c3c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x151c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x151c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151c44: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x151C44u;
    {
        const bool branch_taken_0x151c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C44u;
        // 0x151c48: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c44) {
            ctx->pc = 0x151C70u;
            goto label_151c70;
        }
    }
    ctx->pc = 0x151C4Cu;
    // 0x151c4c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x151c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x151c50: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x151c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x151c54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x151c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x151c58: 0x24427230  addiu       $v0, $v0, 0x7230
    ctx->pc = 0x151c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29232));
    // 0x151c5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151c60: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x151c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x151c64: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x151c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x151c68: 0xc049522  jal         func_125488
    ctx->pc = 0x151C68u;
    SET_GPR_U32(ctx, 31, 0x151C70u);
    ctx->pc = 0x151C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C68u;
    // 0x151c6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x151C68u, 0x151C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C70u;
label_151c70:
    // 0x151c70: 0x83828574  lb          $v0, -0x7A8C($gp)
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x151c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151c78: 0xa3828574  sb          $v0, -0x7A8C($gp)
    ctx->pc = 0x151c78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935924), (uint8_t)GPR_U32(ctx, 2));
    // 0x151c7c: 0x83828574  lb          $v0, -0x7A8C($gp)
    ctx->pc = 0x151c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x151c80: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x151c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x151c84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x151C84u;
    {
        const bool branch_taken_0x151c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151c84) {
            ctx->pc = 0x151C90u;
            goto label_151c90;
        }
    }
    ctx->pc = 0x151C8Cu;
    // 0x151c8c: 0xa3808574  sb          $zero, -0x7A8C($gp)
    ctx->pc = 0x151c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935924), (uint8_t)GPR_U32(ctx, 0));
label_151c90:
    // 0x151c90: 0x83838574  lb          $v1, -0x7A8C($gp)
    ctx->pc = 0x151c90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x151c94: 0x83828578  lb          $v0, -0x7A88($gp)
    ctx->pc = 0x151c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935928)));
    // 0x151c98: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x151C98u;
    {
        const bool branch_taken_0x151c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C98u;
        // 0x151c9c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c98) {
            ctx->pc = 0x151CC8u;
            goto label_151cc8;
        }
    }
    ctx->pc = 0x151CA0u;
    // 0x151ca0: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151CA0u;
    SET_GPR_U32(ctx, 31, 0x151CA8u);
    ctx->pc = 0x151CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CA0u;
    // 0x151ca4: 0x24844d00  addiu       $a0, $a0, 0x4D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151CA0u, 0x151CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CA8u;
label_151ca8:
    // 0x151ca8: 0x0  nop
    ctx->pc = 0x151ca8u;
    // NOP
    // 0x151cac: 0x0  nop
    ctx->pc = 0x151cacu;
    // NOP
    // 0x151cb0: 0x0  nop
    ctx->pc = 0x151cb0u;
    // NOP
    // 0x151cb4: 0x0  nop
    ctx->pc = 0x151cb4u;
    // NOP
    // 0x151cb8: 0x0  nop
    ctx->pc = 0x151cb8u;
    // NOP
    // 0x151cbc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x151CBCu;
    {
        const bool branch_taken_0x151cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cbc) {
            ctx->pc = 0x151CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151ca8;
        }
    }
    ctx->pc = 0x151CC4u;
    // 0x151cc4: 0x0  nop
    ctx->pc = 0x151cc4u;
    // NOP
label_151cc8:
    // 0x151cc8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x151cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x151ccc: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x151cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_151cd0:
    // 0x151cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x151CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CD4u;
        // 0x151cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151CDCu;
}
