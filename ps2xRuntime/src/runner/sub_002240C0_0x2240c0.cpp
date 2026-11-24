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

// Function: sub_002240C0
// Address: 0x2240c0 - 0x224120
void sub_002240C0_0x2240c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002240C0_0x2240c0");
#endif

    switch (ctx->pc) {
        case 0x2240e4u: goto label_2240e4;
        case 0x2240fcu: goto label_2240fc;
        case 0x224108u: goto label_224108;
        default: break;
    }

    ctx->pc = 0x2240c0u;

    // 0x2240c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2240c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2240c4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2240c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2240c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2240c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2240cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2240ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240d0: 0x24458f98  addiu       $a1, $v0, -0x7068
    ctx->pc = 0x2240d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938520));
    // 0x2240d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2240d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2240d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2240d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2240dc: 0xc04a0b0  jal         func_1282C0
    ctx->pc = 0x2240DCu;
    SET_GPR_U32(ctx, 31, 0x2240E4u);
    ctx->pc = 0x2240E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240DCu;
    // 0x2240e0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1282C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1282C0u, 0x2240DCu, 0x2240E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240E4u;
label_2240e4:
    // 0x2240e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2240e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2240e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2240ECu;
    {
        const bool branch_taken_0x2240ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2240F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240ECu;
        // 0x2240f0: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240ec) {
            ctx->pc = 0x22410Cu;
            goto label_22410c;
        }
    }
    ctx->pc = 0x2240F4u;
    // 0x2240f4: 0xc089048  jal         func_224120
    ctx->pc = 0x2240F4u;
    SET_GPR_U32(ctx, 31, 0x2240FCu);
    ctx->pc = 0x224120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224120u, 0x2240F4u, 0x2240FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2240FCu;
label_2240fc:
    // 0x2240fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2240fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224100: 0xc089048  jal         func_224120
    ctx->pc = 0x224100u;
    SET_GPR_U32(ctx, 31, 0x224108u);
    ctx->pc = 0x224104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224100u;
    // 0x224104: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224120u, 0x224100u, 0x224108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224108u;
label_224108:
    // 0x224108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22410c:
    // 0x22410c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22410cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224118: 0x3e00008  jr          $ra
    ctx->pc = 0x224118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224118u;
        // 0x22411c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224120u;
}
