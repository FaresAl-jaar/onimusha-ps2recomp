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

// Function: sub_00242DE0
// Address: 0x242de0 - 0x242e48
void sub_00242DE0_0x242de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242DE0_0x242de0");
#endif

    switch (ctx->pc) {
        case 0x242e08u: goto label_242e08;
        case 0x242e1cu: goto label_242e1c;
        default: break;
    }

    ctx->pc = 0x242de0u;

    // 0x242de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242dec: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x242DECu;
    {
        const bool branch_taken_0x242dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DECu;
        // 0x242df0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dec) {
            ctx->pc = 0x242E38u;
            goto label_242e38;
        }
    }
    ctx->pc = 0x242DF4u;
    // 0x242df4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x242df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x242df8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242DF8u;
    {
        const bool branch_taken_0x242df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF8u;
        // 0x242dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242df8) {
            ctx->pc = 0x242E08u;
            goto label_242e08;
        }
    }
    ctx->pc = 0x242E00u;
    // 0x242e00: 0xc08f9fc  jal         func_23E7F0
    ctx->pc = 0x242E00u;
    SET_GPR_U32(ctx, 31, 0x242E08u);
    ctx->pc = 0x242E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E00u;
    // 0x242e04: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E7F0u, 0x242E00u, 0x242E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E08u;
label_242e08:
    // 0x242e08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x242e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242e0c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x242E0Cu;
    {
        const bool branch_taken_0x242e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e0c) {
            ctx->pc = 0x242E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E0Cu;
            // 0x242e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E20u;
            goto label_242e20;
        }
    }
    ctx->pc = 0x242E14u;
    // 0x242e14: 0xc08fc8a  jal         func_23F228
    ctx->pc = 0x242E14u;
    SET_GPR_U32(ctx, 31, 0x242E1Cu);
    ctx->pc = 0x242E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E14u;
    // 0x242e18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F228u, 0x242E14u, 0x242E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E1Cu;
label_242e1c:
    // 0x242e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242e20:
    // 0x242e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242e24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e2c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x242e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x242e30: 0x8049590  j           func_125640
    ctx->pc = 0x242E30u;
    ctx->pc = 0x242E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E30u;
    // 0x242e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x242E38u;
label_242e38:
    // 0x242e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242e40: 0x3e00008  jr          $ra
    ctx->pc = 0x242E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E40u;
        // 0x242e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242E48u;
}
