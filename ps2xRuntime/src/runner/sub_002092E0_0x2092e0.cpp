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

// Function: sub_002092E0
// Address: 0x2092e0 - 0x20933c
void sub_002092E0_0x2092e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002092E0_0x2092e0");
#endif

    switch (ctx->pc) {
        case 0x2092f4u: goto label_2092f4;
        case 0x20930cu: goto label_20930c;
        case 0x209328u: goto label_209328;
        default: break;
    }

    ctx->pc = 0x2092e0u;

    // 0x2092e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2092e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2092e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2092e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2092e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2092e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2092ec: 0xc081d84  jal         func_207610
    ctx->pc = 0x2092ECu;
    SET_GPR_U32(ctx, 31, 0x2092F4u);
    ctx->pc = 0x2092F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092ECu;
    // 0x2092f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2092ECu, 0x2092F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092F4u;
label_2092f4:
    // 0x2092f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2092f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2092f8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2092F8u;
    {
        const bool branch_taken_0x2092f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2092FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092F8u;
        // 0x2092fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092f8) {
            ctx->pc = 0x209320u;
            goto label_209320;
        }
    }
    ctx->pc = 0x209300u;
    // 0x209300: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x209300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x209304: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209304u;
    SET_GPR_U32(ctx, 31, 0x20930Cu);
    ctx->pc = 0x209308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209304u;
    // 0x209308: 0x24847f80  addiu       $a0, $a0, 0x7F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209304u, 0x20930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20930Cu;
label_20930c:
    // 0x20930c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20930cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209314: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209318: 0x3e00008  jr          $ra
    ctx->pc = 0x209318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209318u;
        // 0x20931c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209320u;
label_209320:
    // 0x209320: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209320u;
    SET_GPR_U32(ctx, 31, 0x209328u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209320u, 0x209328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209328u;
label_209328:
    // 0x209328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20932c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209334: 0x808993e  j           func_2264F8
    ctx->pc = 0x209334u;
    ctx->pc = 0x209338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209334u;
    // 0x209338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264F8u;
    sub_002264F8_0x2264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20933Cu;
}
