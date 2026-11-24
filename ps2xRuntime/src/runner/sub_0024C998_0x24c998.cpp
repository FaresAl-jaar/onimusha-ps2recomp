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

// Function: sub_0024C998
// Address: 0x24c998 - 0x24c9dc
void sub_0024C998_0x24c998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C998_0x24c998");
#endif

    switch (ctx->pc) {
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9ccu: goto label_24c9cc;
        default: break;
    }

    ctx->pc = 0x24c998u;

    // 0x24c998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c9a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9a4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C9A4u;
    {
        const bool branch_taken_0x24c9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9A4u;
        // 0x24c9a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9a4) {
            ctx->pc = 0x24C9CCu;
            goto label_24c9cc;
        }
    }
    ctx->pc = 0x24C9ACu;
    // 0x24c9ac: 0xc093318  jal         func_24CC60
    ctx->pc = 0x24C9ACu;
    SET_GPR_U32(ctx, 31, 0x24C9B4u);
    ctx->pc = 0x24CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CC60u, 0x24C9ACu, 0x24C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9B4u;
label_24c9b4:
    // 0x24c9b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c9b8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x24c9b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c9bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C9BCu;
    {
        const bool branch_taken_0x24c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9BCu;
        // 0x24c9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9bc) {
            ctx->pc = 0x24C9CCu;
            goto label_24c9cc;
        }
    }
    ctx->pc = 0x24C9C4u;
    // 0x24c9c4: 0xc09321a  jal         func_24C868
    ctx->pc = 0x24C9C4u;
    SET_GPR_U32(ctx, 31, 0x24C9CCu);
    ctx->pc = 0x24C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9C4u;
    // 0x24c9c8: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C868u, 0x24C9C4u, 0x24C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9CCu;
label_24c9cc:
    // 0x24c9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c9d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24c9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9D4u;
        // 0x24c9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C9DCu;
}
