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

// Function: sub_001A2D20
// Address: 0x1a2d20 - 0x1a2e1c
void sub_001A2D20_0x1a2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2D20_0x1a2d20");
#endif

    switch (ctx->pc) {
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2ddcu: goto label_1a2ddc;
        case 0x1a2df0u: goto label_1a2df0;
        case 0x1a2e08u: goto label_1a2e08;
        default: break;
    }

    ctx->pc = 0x1a2d20u;

label_1a2d20:
    // 0x1a2d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d30: 0xc068b94  jal         func_1A2E50
    ctx->pc = 0x1A2D30u;
    SET_GPR_U32(ctx, 31, 0x1A2D38u);
    ctx->pc = 0x1A2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D30u;
    // 0x1a2d34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E50u, 0x1A2D30u, 0x1A2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D38u;
label_1a2d38:
    // 0x1a2d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d3c: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A2D3Cu;
    {
        const bool branch_taken_0x1a2d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d3c) {
            ctx->pc = 0x1A2E08u;
            goto label_1a2e08;
        }
    }
    ctx->pc = 0x1A2D44u;
    // 0x1a2d44: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1a2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1a2d48: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x1a2d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1a2d4c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a2d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2D50u;
    {
        const bool branch_taken_0x1a2d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d50) {
            ctx->pc = 0x1A2D70u;
            goto label_1a2d70;
        }
    }
    ctx->pc = 0x1A2D58u;
    // 0x1a2d58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a2d5c: 0x26220104  addiu       $v0, $s1, 0x104
    ctx->pc = 0x1a2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x1a2d60: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1a2d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1a2d64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a2d68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a2d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a2d6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a2d70:
    // 0x1a2d70: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a2d74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2D74u;
    {
        const bool branch_taken_0x1a2d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D74u;
        // 0x1a2d78: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d74) {
            ctx->pc = 0x1A2D88u;
            goto label_1a2d88;
        }
    }
    ctx->pc = 0x1A2D7Cu;
    // 0x1a2d7c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a2d80: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1a2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1a2d84: 0x0  nop
    ctx->pc = 0x1a2d84u;
    // NOP
label_1a2d88:
    // 0x1a2d88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a2d8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2D8Cu;
    {
        const bool branch_taken_0x1a2d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d8c) {
            ctx->pc = 0x1A2DA0u;
            goto label_1a2da0;
        }
    }
    ctx->pc = 0x1A2D94u;
    // 0x1a2d94: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1a2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a2d98: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1a2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1a2d9c: 0x0  nop
    ctx->pc = 0x1a2d9cu;
    // NOP
label_1a2da0:
    // 0x1a2da0: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1a2da4: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2DA4u;
    {
        const bool branch_taken_0x1a2da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a2da4) {
            ctx->pc = 0x1A2DB8u;
            goto label_1a2db8;
        }
    }
    ctx->pc = 0x1A2DACu;
    // 0x1a2dac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a2db0: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x1a2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
    // 0x1a2db4: 0x0  nop
    ctx->pc = 0x1a2db4u;
    // NOP
label_1a2db8:
    // 0x1a2db8: 0xc068b20  jal         func_1A2C80
    ctx->pc = 0x1A2DB8u;
    SET_GPR_U32(ctx, 31, 0x1A2DC0u);
    ctx->pc = 0x1A2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DB8u;
    // 0x1a2dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C80u, 0x1A2DB8u, 0x1A2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DC0u;
label_1a2dc0:
    // 0x1a2dc0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2DC0u;
    {
        const bool branch_taken_0x1a2dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2dc0) {
            ctx->pc = 0x1A2E08u;
            goto label_1a2e08;
        }
    }
    ctx->pc = 0x1A2DC8u;
    // 0x1a2dc8: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1a2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1a2dcc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1a2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1a2dd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2dd4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x1A2DD4u;
    SET_GPR_U32(ctx, 31, 0x1A2DDCu);
    ctx->pc = 0x1A2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DD4u;
    // 0x1a2dd8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1A2DD4u, 0x1A2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DDCu;
label_1a2ddc:
    // 0x1a2ddc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2DDCu;
    {
        const bool branch_taken_0x1a2ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ddc) {
            ctx->pc = 0x1A2DF8u;
            goto label_1a2df8;
        }
    }
    ctx->pc = 0x1A2DE4u;
    // 0x1a2de4: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1a2de8: 0xc068b88  jal         func_1A2E20
    ctx->pc = 0x1A2DE8u;
    SET_GPR_U32(ctx, 31, 0x1A2DF0u);
    ctx->pc = 0x1A2DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DE8u;
    // 0x1a2dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E20u, 0x1A2DE8u, 0x1A2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DF0u;
label_1a2df0:
    // 0x1a2df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2DF0u;
    {
        const bool branch_taken_0x1a2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2df0) {
            ctx->pc = 0x1A2E08u;
            goto label_1a2e08;
        }
    }
    ctx->pc = 0x1A2DF8u;
label_1a2df8:
    // 0x1a2df8: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1a2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1a2dfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2e00: 0xc068b48  jal         func_1A2D20
    ctx->pc = 0x1A2E00u;
    SET_GPR_U32(ctx, 31, 0x1A2E08u);
    ctx->pc = 0x1A2E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E00u;
    // 0x1a2e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D20u;
    goto label_1a2d20;
    ctx->pc = 0x1A2E08u;
label_1a2e08:
    // 0x1a2e08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E14u;
        // 0x1a2e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E1Cu;
}
