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

// Function: sub_002466A8
// Address: 0x2466a8 - 0x2466e0
void sub_002466A8_0x2466a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002466A8_0x2466a8");
#endif

    switch (ctx->pc) {
        case 0x2466bcu: goto label_2466bc;
        default: break;
    }

    ctx->pc = 0x2466a8u;

    // 0x2466a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2466a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2466ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2466acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2466b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2466b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2466b4: 0xc091966  jal         func_246598
    ctx->pc = 0x2466B4u;
    SET_GPR_U32(ctx, 31, 0x2466BCu);
    ctx->pc = 0x2466B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2466B4u;
    // 0x2466b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246598u, 0x2466B4u, 0x2466BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466BCu;
label_2466bc:
    // 0x2466bc: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x2466bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2466c0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2466c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2466c4: 0x2442e9cc  addiu       $v0, $v0, -0x1634
    ctx->pc = 0x2466c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961612));
    // 0x2466c8: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x2466cc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2466ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2466d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2466d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2466d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2466d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2466d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2466D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466D8u;
        // 0x2466dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2466E0u;
}
