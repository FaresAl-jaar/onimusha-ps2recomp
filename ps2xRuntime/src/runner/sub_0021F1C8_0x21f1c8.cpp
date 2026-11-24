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

// Function: sub_0021F1C8
// Address: 0x21f1c8 - 0x21f220
void sub_0021F1C8_0x21f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F1C8_0x21f1c8");
#endif

    switch (ctx->pc) {
        case 0x21f200u: goto label_21f200;
        default: break;
    }

    ctx->pc = 0x21f1c8u;

    // 0x21f1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f1cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21f1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f1d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21f1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21f1dc: 0x8c620dc0  lw          $v0, 0xDC0($v1)
    ctx->pc = 0x21f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x21f1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F1E0u;
    {
        const bool branch_taken_0x21f1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1E0u;
        // 0x21f1e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1e0) {
            ctx->pc = 0x21F1F8u;
            goto label_21f1f8;
        }
    }
    ctx->pc = 0x21F1E8u;
    // 0x21f1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f1ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f1f0: 0x8087c86  j           func_21F218
    ctx->pc = 0x21F1F0u;
    ctx->pc = 0x21F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1F0u;
    // 0x21f1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F218u;
    goto label_21f218;
    ctx->pc = 0x21F1F8u;
label_21f1f8:
    // 0x21f1f8: 0xc080568  jal         func_2015A0
    ctx->pc = 0x21F1F8u;
    SET_GPR_U32(ctx, 31, 0x21F200u);
    ctx->pc = 0x21F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1F8u;
    // 0x21f1fc: 0x8c640da8  lw          $a0, 0xDA8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x21F1F8u, 0x21F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F200u;
label_21f200:
    // 0x21f200: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21f200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21f204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F20Cu;
        // 0x21f210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F214u;
    // 0x21f214: 0x0  nop
    ctx->pc = 0x21f214u;
    // NOP
label_21f218:
    // 0x21f218: 0x3e00008  jr          $ra
    ctx->pc = 0x21F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F218u;
        // 0x21f21c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F220u;
}
