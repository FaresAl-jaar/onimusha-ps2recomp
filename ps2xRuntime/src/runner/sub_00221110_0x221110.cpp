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

// Function: sub_00221110
// Address: 0x221110 - 0x221148
void sub_00221110_0x221110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221110_0x221110");
#endif

    switch (ctx->pc) {
        case 0x221130u: goto label_221130;
        default: break;
    }

    ctx->pc = 0x221110u;

    // 0x221110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22111c: 0x24047530  addiu       $a0, $zero, 0x7530
    ctx->pc = 0x22111cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x221120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221128: 0xc088412  jal         func_221048
    ctx->pc = 0x221128u;
    SET_GPR_U32(ctx, 31, 0x221130u);
    ctx->pc = 0x22112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221128u;
    // 0x22112c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221048u, 0x221128u, 0x221130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221130u;
label_221130:
    // 0x221130: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x221130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x221134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22113c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22113cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221140: 0x3e00008  jr          $ra
    ctx->pc = 0x221140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221140u;
        // 0x221144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221148u;
}
