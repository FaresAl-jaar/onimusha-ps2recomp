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

// Function: sub_0021DAF0
// Address: 0x21daf0 - 0x21db4c
void sub_0021DAF0_0x21daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DAF0_0x21daf0");
#endif

    switch (ctx->pc) {
        case 0x21db24u: goto label_21db24;
        default: break;
    }

    ctx->pc = 0x21daf0u;

    // 0x21daf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21daf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21daf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21dafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21db04: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x21db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21db08: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21DB08u;
    {
        const bool branch_taken_0x21db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21db08) {
            ctx->pc = 0x21DB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DB08u;
            // 0x21db0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DB30u;
            goto label_21db30;
        }
    }
    ctx->pc = 0x21DB10u;
    // 0x21db10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21db10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21db14: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21db14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21db18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21db18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db1c: 0xc0888d6  jal         func_222358
    ctx->pc = 0x21DB1Cu;
    SET_GPR_U32(ctx, 31, 0x21DB24u);
    ctx->pc = 0x21DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB1Cu;
    // 0x21db20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x21DB1Cu, 0x21DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB24u;
label_21db24:
    // 0x21db24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DB24u;
    {
        const bool branch_taken_0x21db24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21db24) {
            ctx->pc = 0x21DB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DB24u;
            // 0x21db28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DB40u;
            goto label_21db40;
        }
    }
    ctx->pc = 0x21DB2Cu;
    // 0x21db2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21db30:
    // 0x21db30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21db30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db34: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x21db34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x21db38: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x21db38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x21db3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21db3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21db40:
    // 0x21db40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21db44: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB44u;
        // 0x21db48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DB4Cu;
}
