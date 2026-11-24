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

// Function: sub_002262C8
// Address: 0x2262c8 - 0x226308
void sub_002262C8_0x2262c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002262C8_0x2262c8");
#endif

    switch (ctx->pc) {
        case 0x2262c8u: goto label_2262c8;
        case 0x2262ccu: goto label_2262cc;
        case 0x2262d0u: goto label_2262d0;
        case 0x2262d4u: goto label_2262d4;
        case 0x2262d8u: goto label_2262d8;
        case 0x2262dcu: goto label_2262dc;
        case 0x2262e0u: goto label_2262e0;
        case 0x2262e4u: goto label_2262e4;
        case 0x2262e8u: goto label_2262e8;
        case 0x2262ecu: goto label_2262ec;
        case 0x2262f0u: goto label_2262f0;
        case 0x2262f4u: goto label_2262f4;
        case 0x2262f8u: goto label_2262f8;
        case 0x2262fcu: goto label_2262fc;
        case 0x226300u: goto label_226300;
        case 0x226304u: goto label_226304;
        default: break;
    }

    ctx->pc = 0x2262c8u;

label_2262c8:
    // 0x2262c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2262c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2262cc:
    // 0x2262cc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2262ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2262d0:
    // 0x2262d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2262d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2262d4:
    // 0x2262d4: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x2262d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
label_2262d8:
    // 0x2262d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2262d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2262dc:
    // 0x2262dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2262dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2262e0:
    // 0x2262e0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2262e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2262e4:
    // 0x2262e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2262e8:
    // 0x2262e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2262e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2262ec:
    // 0x2262ec: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2262f0:
    if (ctx->pc == 0x2262F0u) {
        ctx->pc = 0x2262F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262ECu;
        // 0x2262f0: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2262F4u;
        goto label_2262f4;
    }
    ctx->pc = 0x2262ECu;
    {
        const bool branch_taken_0x2262ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2262F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262ECu;
        // 0x2262f0: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262ec) {
            ctx->pc = 0x2262FCu;
            goto label_2262fc;
        }
    }
    ctx->pc = 0x2262F4u;
label_2262f4:
    // 0x2262f4: 0xc0f809  jalr        $a2
label_2262f8:
    if (ctx->pc == 0x2262F8u) {
        ctx->pc = 0x2262FCu;
        goto label_2262fc;
    }
    ctx->pc = 0x2262F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2262FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262F4u, 0x2262FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2262FCu;
label_2262fc:
    // 0x2262fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2262fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226300:
    // 0x226300: 0x3e00008  jr          $ra
label_226304:
    if (ctx->pc == 0x226304u) {
        ctx->pc = 0x226304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226300u;
        // 0x226304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226308u;
        goto label_fallthrough_0x226300;
    }
    ctx->pc = 0x226300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226300u;
        // 0x226304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226300:
    ctx->pc = 0x226308u;
}
