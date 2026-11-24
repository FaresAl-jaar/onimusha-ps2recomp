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

// Function: sub_002041A0
// Address: 0x2041a0 - 0x2041f8
void sub_002041A0_0x2041a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002041A0_0x2041a0");
#endif

    switch (ctx->pc) {
        case 0x2041b4u: goto label_2041b4;
        case 0x2041ccu: goto label_2041cc;
        default: break;
    }

    ctx->pc = 0x2041a0u;

    // 0x2041a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2041a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2041a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2041a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2041a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2041ac: 0xc081d84  jal         func_207610
    ctx->pc = 0x2041ACu;
    SET_GPR_U32(ctx, 31, 0x2041B4u);
    ctx->pc = 0x2041B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041ACu;
    // 0x2041b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2041ACu, 0x2041B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041B4u;
label_2041b4:
    // 0x2041b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2041b8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2041B8u;
    {
        const bool branch_taken_0x2041b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2041BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041B8u;
        // 0x2041bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041b8) {
            ctx->pc = 0x2041E0u;
            goto label_2041e0;
        }
    }
    ctx->pc = 0x2041C0u;
    // 0x2041c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2041c4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2041C4u;
    SET_GPR_U32(ctx, 31, 0x2041CCu);
    ctx->pc = 0x2041C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041C4u;
    // 0x2041c8: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2041C4u, 0x2041CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041CCu;
label_2041cc:
    // 0x2041cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2041ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2041d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2041d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2041d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2041d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2041d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2041D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2041DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D8u;
        // 0x2041dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2041D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2041E0u;
label_2041e0:
    // 0x2041e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2041e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2041e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2041e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2041e8: 0x808107c  j           func_2041F0
    ctx->pc = 0x2041E8u;
    ctx->pc = 0x2041ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041E8u;
    // 0x2041ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2041F0u;
    goto label_2041f0;
    ctx->pc = 0x2041F0u;
label_2041f0:
    // 0x2041f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2041F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2041F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041F0u;
        // 0x2041f4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2041F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2041F8u;
}
