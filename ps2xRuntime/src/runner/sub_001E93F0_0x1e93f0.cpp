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

// Function: sub_001E93F0
// Address: 0x1e93f0 - 0x1e9444
void sub_001E93F0_0x1e93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E93F0_0x1e93f0");
#endif

    switch (ctx->pc) {
        case 0x1e93f0u: goto label_1e93f0;
        case 0x1e93f4u: goto label_1e93f4;
        case 0x1e93f8u: goto label_1e93f8;
        case 0x1e93fcu: goto label_1e93fc;
        case 0x1e9400u: goto label_1e9400;
        case 0x1e9404u: goto label_1e9404;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e940cu: goto label_1e940c;
        case 0x1e9410u: goto label_1e9410;
        case 0x1e9414u: goto label_1e9414;
        case 0x1e9418u: goto label_1e9418;
        case 0x1e941cu: goto label_1e941c;
        case 0x1e9420u: goto label_1e9420;
        case 0x1e9424u: goto label_1e9424;
        case 0x1e9428u: goto label_1e9428;
        case 0x1e942cu: goto label_1e942c;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e9434u: goto label_1e9434;
        case 0x1e9438u: goto label_1e9438;
        case 0x1e943cu: goto label_1e943c;
        case 0x1e9440u: goto label_1e9440;
        default: break;
    }

    ctx->pc = 0x1e93f0u;

label_1e93f0:
    // 0x1e93f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e93f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e93f4:
    // 0x1e93f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e93f8:
    // 0x1e93f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e93f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e93fc:
    // 0x1e93fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e93fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9400:
    // 0x1e9400: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e9404:
    if (ctx->pc == 0x1E9404u) {
        ctx->pc = 0x1E9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9400u;
        // 0x1e9404: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9408u;
        goto label_1e9408;
    }
    ctx->pc = 0x1E9400u;
    {
        const bool branch_taken_0x1e9400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9400u;
        // 0x1e9404: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9400) {
            ctx->pc = 0x1E9430u;
            goto label_1e9430;
        }
    }
    ctx->pc = 0x1E9408u;
label_1e9408:
    // 0x1e9408: 0x24426e70  addiu       $v0, $v0, 0x6E70
    ctx->pc = 0x1e9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
label_1e940c:
    // 0x1e940c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e940cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e9410:
    // 0x1e9410: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e9410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e9414:
    // 0x1e9414: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e9414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e9418:
    // 0x1e9418: 0x320f809  jalr        $t9
label_1e941c:
    if (ctx->pc == 0x1E941Cu) {
        ctx->pc = 0x1E9420u;
        goto label_1e9420;
    }
    ctx->pc = 0x1E9418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9418u, 0x1E9420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9420u;
label_1e9420:
    // 0x1e9420: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e9424:
    if (ctx->pc == 0x1E9424u) {
        ctx->pc = 0x1E9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9420u;
        // 0x1e9424: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9428u;
        goto label_1e9428;
    }
    ctx->pc = 0x1E9420u;
    {
        const bool branch_taken_0x1e9420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9420u;
        // 0x1e9424: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9420) {
            ctx->pc = 0x1E9430u;
            goto label_1e9430;
        }
    }
    ctx->pc = 0x1E9428u;
label_1e9428:
    // 0x1e9428: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e942c:
    // 0x1e942c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e942cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e9430:
    // 0x1e9430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9434:
    // 0x1e9434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9438:
    // 0x1e9438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e943c:
    // 0x1e943c: 0x3e00008  jr          $ra
label_1e9440:
    if (ctx->pc == 0x1E9440u) {
        ctx->pc = 0x1E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E943Cu;
        // 0x1e9440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9444u;
        goto label_fallthrough_0x1e943c;
    }
    ctx->pc = 0x1E943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E943Cu;
        // 0x1e9440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e943c:
    ctx->pc = 0x1E9444u;
}
