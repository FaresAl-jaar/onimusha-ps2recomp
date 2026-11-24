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

// Function: sub_0021ED78
// Address: 0x21ed78 - 0x21edbc
void sub_0021ED78_0x21ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ED78_0x21ed78");
#endif

    switch (ctx->pc) {
        case 0x21ed9cu: goto label_21ed9c;
        default: break;
    }

    ctx->pc = 0x21ed78u;

    // 0x21ed78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ed7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ed7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ed80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ed80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ed88: 0x8e0236b0  lw          $v0, 0x36B0($s0)
    ctx->pc = 0x21ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21ed8c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21ED8Cu;
    {
        const bool branch_taken_0x21ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ed8c) {
            ctx->pc = 0x21ED90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ED8Cu;
            // 0x21ed90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EDB0u;
            goto label_21edb0;
        }
    }
    ctx->pc = 0x21ED94u;
    // 0x21ed94: 0xc087b70  jal         func_21EDC0
    ctx->pc = 0x21ED94u;
    SET_GPR_U32(ctx, 31, 0x21ED9Cu);
    ctx->pc = 0x21EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDC0u, 0x21ED94u, 0x21ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED9Cu;
label_21ed9c:
    // 0x21ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eda0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21eda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21eda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21eda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eda8: 0x8087d88  j           func_21F620
    ctx->pc = 0x21EDA8u;
    ctx->pc = 0x21EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDA8u;
    // 0x21edac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F620u;
    sub_0021F620_0x21f620(rdram, ctx, runtime); return;
    ctx->pc = 0x21EDB0u;
label_21edb0:
    // 0x21edb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21edb4: 0x3e00008  jr          $ra
    ctx->pc = 0x21EDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDB4u;
        // 0x21edb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EDBCu;
}
