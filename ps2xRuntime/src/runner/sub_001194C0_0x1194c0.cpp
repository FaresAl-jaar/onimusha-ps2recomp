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

// Function: sub_001194C0
// Address: 0x1194c0 - 0x11951c
void sub_001194C0_0x1194c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001194C0_0x1194c0");
#endif

    switch (ctx->pc) {
        case 0x1194e0u: goto label_1194e0;
        case 0x1194f0u: goto label_1194f0;
        case 0x119500u: goto label_119500;
        default: break;
    }

    ctx->pc = 0x1194c0u;

    // 0x1194c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1194c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1194c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1194c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1194c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1194c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1194cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1194ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1194d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1194d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1194d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1194d8: 0xc046028  jal         func_1180A0
    ctx->pc = 0x1194D8u;
    SET_GPR_U32(ctx, 31, 0x1194E0u);
    ctx->pc = 0x1194DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194D8u;
    // 0x1194dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x1194D8u, 0x1194E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194E0u;
label_1194e0:
    // 0x1194e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1194e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1194e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194e8: 0xc04651c  jal         func_119470
    ctx->pc = 0x1194E8u;
    SET_GPR_U32(ctx, 31, 0x1194F0u);
    ctx->pc = 0x1194ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194E8u;
    // 0x1194ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119470u, 0x1194E8u, 0x1194F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194F0u;
label_1194f0:
    // 0x1194f0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1194F0u;
    {
        const bool branch_taken_0x1194f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F0u;
        // 0x1194f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194f0) {
            ctx->pc = 0x119500u;
            goto label_119500;
        }
    }
    ctx->pc = 0x1194F8u;
    // 0x1194f8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1194F8u;
    SET_GPR_U32(ctx, 31, 0x119500u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1194F8u, 0x119500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119500u;
label_119500:
    // 0x119500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119508: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11950c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11950cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119514: 0x3e00008  jr          $ra
    ctx->pc = 0x119514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119514u;
        // 0x119518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11951Cu;
}
