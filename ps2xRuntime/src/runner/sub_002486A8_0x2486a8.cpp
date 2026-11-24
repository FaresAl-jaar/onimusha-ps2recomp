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

// Function: sub_002486A8
// Address: 0x2486a8 - 0x2486e0
void sub_002486A8_0x2486a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002486A8_0x2486a8");
#endif

    switch (ctx->pc) {
        case 0x2486c4u: goto label_2486c4;
        default: break;
    }

    ctx->pc = 0x2486a8u;

    // 0x2486a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2486a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2486ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2486acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2486B0u;
    {
        const bool branch_taken_0x2486b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2486B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486B0u;
        // 0x2486b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486b0) {
            ctx->pc = 0x2486D0u;
            goto label_2486d0;
        }
    }
    ctx->pc = 0x2486B8u;
    // 0x2486b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2486b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2486bc: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x2486BCu;
    SET_GPR_U32(ctx, 31, 0x2486C4u);
    ctx->pc = 0x2486C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486BCu;
    // 0x2486c0: 0x24a5cfd8  addiu       $a1, $a1, -0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x2486BCu, 0x2486C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486C4u;
label_2486c4:
    // 0x2486c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2486C4u;
    {
        const bool branch_taken_0x2486c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486C4u;
        // 0x2486c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486c4) {
            ctx->pc = 0x2486D4u;
            goto label_2486d4;
        }
    }
    ctx->pc = 0x2486CCu;
    // 0x2486cc: 0x0  nop
    ctx->pc = 0x2486ccu;
    // NOP
label_2486d0:
    // 0x2486d0: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x2486d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2486d4:
    // 0x2486d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2486d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2486d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2486D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2486DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486D8u;
        // 0x2486dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2486D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2486E0u;
}
