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

// Function: sub_001F52A0
// Address: 0x1f52a0 - 0x1f52ec
void sub_001F52A0_0x1f52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F52A0_0x1f52a0");
#endif

    switch (ctx->pc) {
        case 0x1f52c8u: goto label_1f52c8;
        case 0x1f52d8u: goto label_1f52d8;
        default: break;
    }

    ctx->pc = 0x1f52a0u;

    // 0x1f52a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f52a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f52a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f52a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f52ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f52acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f52b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f52b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F52B4u;
    {
        const bool branch_taken_0x1f52b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52B4u;
        // 0x1f52b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52b4) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F52BCu;
    // 0x1f52bc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1f52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1f52c0: 0xc07d4bc  jal         func_1F52F0
    ctx->pc = 0x1F52C0u;
    SET_GPR_U32(ctx, 31, 0x1F52C8u);
    ctx->pc = 0x1F52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52C0u;
    // 0x1f52c4: 0x24848120  addiu       $a0, $a0, -0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F52F0u, 0x1F52C0u, 0x1F52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52C8u;
label_1f52c8:
    // 0x1f52c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F52C8u;
    {
        const bool branch_taken_0x1f52c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52C8u;
        // 0x1f52cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52c8) {
            ctx->pc = 0x1F52DCu;
            goto label_1f52dc;
        }
    }
    ctx->pc = 0x1F52D0u;
label_1f52d0:
    // 0x1f52d0: 0xc07d4bc  jal         func_1F52F0
    ctx->pc = 0x1F52D0u;
    SET_GPR_U32(ctx, 31, 0x1F52D8u);
    ctx->pc = 0x1F52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F52F0u, 0x1F52D0u, 0x1F52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52D8u;
label_1f52d8:
    // 0x1f52d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f52d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f52dc:
    // 0x1f52dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f52dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f52e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f52e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f52e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F52E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52E4u;
        // 0x1f52e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F52E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F52ECu;
}
