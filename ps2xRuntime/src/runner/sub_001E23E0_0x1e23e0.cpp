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

// Function: sub_001E23E0
// Address: 0x1e23e0 - 0x1e2434
void sub_001E23E0_0x1e23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E23E0_0x1e23e0");
#endif

    switch (ctx->pc) {
        case 0x1e23e0u: goto label_1e23e0;
        case 0x1e23e4u: goto label_1e23e4;
        case 0x1e23e8u: goto label_1e23e8;
        case 0x1e23ecu: goto label_1e23ec;
        case 0x1e23f0u: goto label_1e23f0;
        case 0x1e23f4u: goto label_1e23f4;
        case 0x1e23f8u: goto label_1e23f8;
        case 0x1e23fcu: goto label_1e23fc;
        case 0x1e2400u: goto label_1e2400;
        case 0x1e2404u: goto label_1e2404;
        case 0x1e2408u: goto label_1e2408;
        case 0x1e240cu: goto label_1e240c;
        case 0x1e2410u: goto label_1e2410;
        case 0x1e2414u: goto label_1e2414;
        case 0x1e2418u: goto label_1e2418;
        case 0x1e241cu: goto label_1e241c;
        case 0x1e2420u: goto label_1e2420;
        case 0x1e2424u: goto label_1e2424;
        case 0x1e2428u: goto label_1e2428;
        case 0x1e242cu: goto label_1e242c;
        case 0x1e2430u: goto label_1e2430;
        default: break;
    }

    ctx->pc = 0x1e23e0u;

label_1e23e0:
    // 0x1e23e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e23e4:
    // 0x1e23e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e23e8:
    // 0x1e23e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e23e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e23ec:
    // 0x1e23ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e23ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e23f0:
    // 0x1e23f0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e23f4:
    if (ctx->pc == 0x1E23F4u) {
        ctx->pc = 0x1E23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23F0u;
        // 0x1e23f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23F8u;
        goto label_1e23f8;
    }
    ctx->pc = 0x1E23F0u;
    {
        const bool branch_taken_0x1e23f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23F0u;
        // 0x1e23f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23f0) {
            ctx->pc = 0x1E2420u;
            goto label_1e2420;
        }
    }
    ctx->pc = 0x1E23F8u;
label_1e23f8:
    // 0x1e23f8: 0x24426810  addiu       $v0, $v0, 0x6810
    ctx->pc = 0x1e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26640));
label_1e23fc:
    // 0x1e23fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e2400:
    // 0x1e2400: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e2400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e2404:
    // 0x1e2404: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e2404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2408:
    // 0x1e2408: 0x320f809  jalr        $t9
label_1e240c:
    if (ctx->pc == 0x1E240Cu) {
        ctx->pc = 0x1E2410u;
        goto label_1e2410;
    }
    ctx->pc = 0x1E2408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2408u, 0x1E2410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2410u;
label_1e2410:
    // 0x1e2410: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e2414:
    if (ctx->pc == 0x1E2414u) {
        ctx->pc = 0x1E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2410u;
        // 0x1e2414: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2418u;
        goto label_1e2418;
    }
    ctx->pc = 0x1E2410u;
    {
        const bool branch_taken_0x1e2410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2410u;
        // 0x1e2414: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2410) {
            ctx->pc = 0x1E2420u;
            goto label_1e2420;
        }
    }
    ctx->pc = 0x1E2418u;
label_1e2418:
    // 0x1e2418: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e2418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e241c:
    // 0x1e241c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e2420:
    // 0x1e2420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2424:
    // 0x1e2424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2428:
    // 0x1e2428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e242c:
    // 0x1e242c: 0x3e00008  jr          $ra
label_1e2430:
    if (ctx->pc == 0x1E2430u) {
        ctx->pc = 0x1E2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E242Cu;
        // 0x1e2430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2434u;
        goto label_fallthrough_0x1e242c;
    }
    ctx->pc = 0x1E242Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E242Cu;
        // 0x1e2430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E242Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e242c:
    ctx->pc = 0x1E2434u;
}
