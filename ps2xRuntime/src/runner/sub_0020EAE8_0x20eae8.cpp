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

// Function: sub_0020EAE8
// Address: 0x20eae8 - 0x20eb30
void sub_0020EAE8_0x20eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EAE8_0x20eae8");
#endif

    switch (ctx->pc) {
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb20u: goto label_20eb20;
        default: break;
    }

    ctx->pc = 0x20eae8u;

    // 0x20eae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20eae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20eaec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20eaf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20eaf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20eaf8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20EAF8u;
    SET_GPR_U32(ctx, 31, 0x20EB00u);
    ctx->pc = 0x20EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAF8u;
    // 0x20eafc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20EAF8u, 0x20EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB00u;
label_20eb00:
    // 0x20eb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eb08: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20eb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20eb0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20eb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EB10u;
    {
        const bool branch_taken_0x20eb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB10u;
        // 0x20eb14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb10) {
            ctx->pc = 0x20EB20u;
            goto label_20eb20;
        }
    }
    ctx->pc = 0x20EB18u;
    // 0x20eb18: 0xc0888d6  jal         func_222358
    ctx->pc = 0x20EB18u;
    SET_GPR_U32(ctx, 31, 0x20EB20u);
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x20EB18u, 0x20EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB20u;
label_20eb20:
    // 0x20eb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20eb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eb24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20eb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eb28: 0x3e00008  jr          $ra
    ctx->pc = 0x20EB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB28u;
        // 0x20eb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EB30u;
}
