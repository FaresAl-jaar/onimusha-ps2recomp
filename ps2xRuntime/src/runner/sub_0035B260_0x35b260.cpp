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

// Function: sub_0035B260
// Address: 0x35b260 - 0x35b2a0
void sub_0035B260_0x35b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B260_0x35b260");
#endif

    switch (ctx->pc) {
        case 0x35b278u: goto label_35b278;
        case 0x35b280u: goto label_35b280;
        default: break;
    }

    ctx->pc = 0x35b260u;

    // 0x35b260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b26c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35b26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b270: 0xc04150c  jal         func_105430
    ctx->pc = 0x35B270u;
    SET_GPR_U32(ctx, 31, 0x35B278u);
    ctx->pc = 0x35B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B270u;
    // 0x35b274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35B270u, 0x35B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B278u;
label_35b278:
    // 0x35b278: 0xc04150c  jal         func_105430
    ctx->pc = 0x35B278u;
    SET_GPR_U32(ctx, 31, 0x35B280u);
    ctx->pc = 0x35B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B278u;
    // 0x35b27c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35B278u, 0x35B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B280u;
label_35b280:
    // 0x35b280: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x35b280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x35b284: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x35b284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x35b288: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x35b288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x35b28c: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x35b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x35b290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b298: 0x3e00008  jr          $ra
    ctx->pc = 0x35B298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B298u;
        // 0x35b29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B2A0u;
}
