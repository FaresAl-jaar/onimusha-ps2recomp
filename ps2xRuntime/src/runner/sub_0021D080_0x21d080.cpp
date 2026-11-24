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

// Function: sub_0021D080
// Address: 0x21d080 - 0x21d0d8
void sub_0021D080_0x21d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D080_0x21d080");
#endif

    switch (ctx->pc) {
        case 0x21d0c8u: goto label_21d0c8;
        default: break;
    }

    ctx->pc = 0x21d080u;

    // 0x21d080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d084: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21d084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d08c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d090: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x21d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x21d094: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D094u;
    {
        const bool branch_taken_0x21d094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D094u;
        // 0x21d098: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d094) {
            ctx->pc = 0x21D0B8u;
            goto label_21d0b8;
        }
    }
    ctx->pc = 0x21D09Cu;
    // 0x21d09c: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x21d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x21d0a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d0a4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D0A4u;
    {
        const bool branch_taken_0x21d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0A4u;
        // 0x21d0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0a4) {
            ctx->pc = 0x21D0CCu;
            goto label_21d0cc;
        }
    }
    ctx->pc = 0x21D0ACu;
    // 0x21d0ac: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x21d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x21d0b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D0B0u;
    {
        const bool branch_taken_0x21d0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21d0b0) {
            ctx->pc = 0x21D0C0u;
            goto label_21d0c0;
        }
    }
    ctx->pc = 0x21D0B8u;
label_21d0b8:
    // 0x21d0b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21D0B8u;
    {
        const bool branch_taken_0x21d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0B8u;
        // 0x21d0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0b8) {
            ctx->pc = 0x21D0CCu;
            goto label_21d0cc;
        }
    }
    ctx->pc = 0x21D0C0u;
label_21d0c0:
    // 0x21d0c0: 0xc088150  jal         func_220540
    ctx->pc = 0x21D0C0u;
    SET_GPR_U32(ctx, 31, 0x21D0C8u);
    ctx->pc = 0x220540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220540u, 0x21D0C0u, 0x21D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0C8u;
label_21d0c8:
    // 0x21d0c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21d0cc:
    // 0x21d0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0D0u;
        // 0x21d0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D0D8u;
}
