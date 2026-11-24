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

// Function: sub_00347920
// Address: 0x347920 - 0x34794c
void sub_00347920_0x347920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347920_0x347920");
#endif

    switch (ctx->pc) {
        case 0x347940u: goto label_347940;
        default: break;
    }

    ctx->pc = 0x347920u;

    // 0x347920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347924: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x347924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347928: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x347928u;
    {
        const bool branch_taken_0x347928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347928u;
        // 0x34792c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347928) {
            ctx->pc = 0x347940u;
            goto label_347940;
        }
    }
    ctx->pc = 0x347930u;
    // 0x347930: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x347930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x347934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x347934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347938: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x347938u;
    SET_GPR_U32(ctx, 31, 0x347940u);
    ctx->pc = 0x34793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347938u;
    // 0x34793c: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x347938u, 0x347940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347940u;
label_347940:
    // 0x347940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347944: 0x3e00008  jr          $ra
    ctx->pc = 0x347944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347944u;
        // 0x347948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34794Cu;
}
