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

// Function: sub_003BC9B0
// Address: 0x3bc9b0 - 0x3bca1c
void sub_003BC9B0_0x3bc9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC9B0_0x3bc9b0");
#endif

    switch (ctx->pc) {
        case 0x3bc9d0u: goto label_3bc9d0;
        default: break;
    }

    ctx->pc = 0x3bc9b0u;

    // 0x3bc9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bc9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bc9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bc9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bc9bc: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3bc9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3bc9c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC9C0u;
    {
        const bool branch_taken_0x3bc9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bc9c0) {
            ctx->pc = 0x3BC9D8u;
            goto label_3bc9d8;
        }
    }
    ctx->pc = 0x3BC9C8u;
    // 0x3bc9c8: 0xc0ef288  jal         func_3BCA20
    ctx->pc = 0x3BC9C8u;
    SET_GPR_U32(ctx, 31, 0x3BC9D0u);
    ctx->pc = 0x3BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCA20u, 0x3BC9C8u, 0x3BC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC9D0u;
label_3bc9d0:
    // 0x3bc9d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BC9D0u;
    {
        const bool branch_taken_0x3bc9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc9d0) {
            ctx->pc = 0x3BCA10u;
            goto label_3bca10;
        }
    }
    ctx->pc = 0x3BC9D8u;
label_3bc9d8:
    // 0x3bc9d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bc9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bc9dc: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x3bc9dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bc9e0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bc9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bc9e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3bc9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3bc9e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3bc9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3bc9ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3bc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bc9f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC9F0u;
    {
        const bool branch_taken_0x3bc9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc9f0) {
            ctx->pc = 0x3BCA08u;
            goto label_3bca08;
        }
    }
    ctx->pc = 0x3BC9F8u;
    // 0x3bc9f8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3bc9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3bc9fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC9FCu;
    {
        const bool branch_taken_0x3bc9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC9FCu;
        // 0x3bca00: 0xac8307c0  sw          $v1, 0x7C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc9fc) {
            ctx->pc = 0x3BCA10u;
            goto label_3bca10;
        }
    }
    ctx->pc = 0x3BCA04u;
    // 0x3bca04: 0x0  nop
    ctx->pc = 0x3bca04u;
    // NOP
label_3bca08:
    // 0x3bca08: 0xac8007c0  sw          $zero, 0x7C0($a0)
    ctx->pc = 0x3bca08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 0));
    // 0x3bca0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bca0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bca10:
    // 0x3bca10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bca10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bca14: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA14u;
        // 0x3bca18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCA1Cu;
}
