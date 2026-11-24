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

// Function: sub_00250098
// Address: 0x250098 - 0x2500ec
void sub_00250098_0x250098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250098_0x250098");
#endif

    switch (ctx->pc) {
        case 0x2500dcu: goto label_2500dc;
        default: break;
    }

    ctx->pc = 0x250098u;

    // 0x250098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25009c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25009Cu;
    {
        const bool branch_taken_0x25009c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2500A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25009Cu;
        // 0x2500a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25009c) {
            ctx->pc = 0x2500B8u;
            goto label_2500b8;
        }
    }
    ctx->pc = 0x2500A4u;
    // 0x2500a4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2500a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2500a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2500a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2500ac: 0x2484ea18  addiu       $a0, $a0, -0x15E8
    ctx->pc = 0x2500acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961688));
    // 0x2500b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2500B0u;
    {
        const bool branch_taken_0x2500b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500B0u;
        // 0x2500b4: 0x24a5e9c8  addiu       $a1, $a1, -0x1638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500b0) {
            ctx->pc = 0x2500D4u;
            goto label_2500d4;
        }
    }
    ctx->pc = 0x2500B8u;
label_2500b8:
    // 0x2500b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2500b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2500bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2500BCu;
    {
        const bool branch_taken_0x2500bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2500bc) {
            ctx->pc = 0x2500C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2500BCu;
            // 0x2500c0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2500E0u;
            goto label_2500e0;
        }
    }
    ctx->pc = 0x2500C4u;
    // 0x2500c4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2500c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2500c8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2500c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2500cc: 0x2484ea28  addiu       $a0, $a0, -0x15D8
    ctx->pc = 0x2500ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961704));
    // 0x2500d0: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x2500d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
label_2500d4:
    // 0x2500d4: 0xc093f54  jal         func_24FD50
    ctx->pc = 0x2500D4u;
    SET_GPR_U32(ctx, 31, 0x2500DCu);
    ctx->pc = 0x24FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD50u, 0x2500D4u, 0x2500DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2500DCu;
label_2500dc:
    // 0x2500dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2500dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2500e0:
    // 0x2500e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2500e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2500e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2500E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2500E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500E4u;
        // 0x2500e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2500E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2500ECu;
}
