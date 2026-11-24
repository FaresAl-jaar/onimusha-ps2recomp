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

// Function: sub_0018E4D0
// Address: 0x18e4d0 - 0x18e534
void sub_0018E4D0_0x18e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E4D0_0x18e4d0");
#endif

    switch (ctx->pc) {
        case 0x18e4ecu: goto label_18e4ec;
        default: break;
    }

    ctx->pc = 0x18e4d0u;

    // 0x18e4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e4d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e4dc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x18e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x18e4e0: 0xaf8086a8  sw          $zero, -0x7958($gp)
    ctx->pc = 0x18e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 0));
    // 0x18e4e4: 0xc0638f4  jal         func_18E3D0
    ctx->pc = 0x18E4E4u;
    SET_GPR_U32(ctx, 31, 0x18E4ECu);
    ctx->pc = 0x18E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4E4u;
    // 0x18e4e8: 0xaf8286a0  sw          $v0, -0x7960($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3D0u, 0x18E4E4u, 0x18E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4ECu;
label_18e4ec:
    // 0x18e4ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e4f0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E4F0u;
    {
        const bool branch_taken_0x18e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F0u;
        // 0x18e4f4: 0xaf8286a4  sw          $v0, -0x795C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4f0) {
            ctx->pc = 0x18E518u;
            goto label_18e518;
        }
    }
    ctx->pc = 0x18E4F8u;
    // 0x18e4f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e4fc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E4FCu;
    {
        const bool branch_taken_0x18e4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18e4fc) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E504u;
    // 0x18e504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E504u;
    {
        const bool branch_taken_0x18e504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e504) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E50Cu;
    // 0x18e50c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E50Cu;
    {
        const bool branch_taken_0x18e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e50c) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E514u;
    // 0x18e514: 0x0  nop
    ctx->pc = 0x18e514u;
    // NOP
label_18e518:
    // 0x18e518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E518u;
    {
        const bool branch_taken_0x18e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E518u;
        // 0x18e51c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e518) {
            ctx->pc = 0x18E528u;
            goto label_18e528;
        }
    }
    ctx->pc = 0x18E520u;
label_18e520:
    // 0x18e520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e524: 0x0  nop
    ctx->pc = 0x18e524u;
    // NOP
label_18e528:
    // 0x18e528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E52Cu;
        // 0x18e530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E534u;
}
