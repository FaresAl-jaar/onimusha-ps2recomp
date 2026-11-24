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

// Function: sub_0024B228
// Address: 0x24b228 - 0x24b260
void sub_0024B228_0x24b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B228_0x24b228");
#endif

    switch (ctx->pc) {
        case 0x24b23cu: goto label_24b23c;
        case 0x24b244u: goto label_24b244;
        case 0x24b24cu: goto label_24b24c;
        default: break;
    }

    ctx->pc = 0x24b228u;

    // 0x24b228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b230: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b234: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B234u;
    SET_GPR_U32(ctx, 31, 0x24B23Cu);
    ctx->pc = 0x24B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B234u;
    // 0x24b238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B234u, 0x24B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B23Cu;
label_24b23c:
    // 0x24b23c: 0xc092c98  jal         func_24B260
    ctx->pc = 0x24B23Cu;
    SET_GPR_U32(ctx, 31, 0x24B244u);
    ctx->pc = 0x24B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B23Cu;
    // 0x24b240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B260u, 0x24B23Cu, 0x24B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B244u;
label_24b244:
    // 0x24b244: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24B244u;
    SET_GPR_U32(ctx, 31, 0x24B24Cu);
    ctx->pc = 0x24B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B244u;
    // 0x24b248: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24B244u, 0x24B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B24Cu;
label_24b24c:
    // 0x24b24c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b258: 0x3e00008  jr          $ra
    ctx->pc = 0x24B258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B258u;
        // 0x24b25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B260u;
}
