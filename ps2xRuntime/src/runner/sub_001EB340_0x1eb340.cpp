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

// Function: sub_001EB340
// Address: 0x1eb340 - 0x1eb394
void sub_001EB340_0x1eb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB340_0x1eb340");
#endif

    switch (ctx->pc) {
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb344u: goto label_1eb344;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb34cu: goto label_1eb34c;
        case 0x1eb350u: goto label_1eb350;
        case 0x1eb354u: goto label_1eb354;
        case 0x1eb358u: goto label_1eb358;
        case 0x1eb35cu: goto label_1eb35c;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb364u: goto label_1eb364;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb36cu: goto label_1eb36c;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb378u: goto label_1eb378;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb380u: goto label_1eb380;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb38cu: goto label_1eb38c;
        case 0x1eb390u: goto label_1eb390;
        default: break;
    }

    ctx->pc = 0x1eb340u;

label_1eb340:
    // 0x1eb340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eb344:
    // 0x1eb344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eb348:
    // 0x1eb348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb34c:
    // 0x1eb34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eb34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb350:
    // 0x1eb350: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1eb354:
    if (ctx->pc == 0x1EB354u) {
        ctx->pc = 0x1EB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB350u;
        // 0x1eb354: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB358u;
        goto label_1eb358;
    }
    ctx->pc = 0x1EB350u;
    {
        const bool branch_taken_0x1eb350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB350u;
        // 0x1eb354: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb350) {
            ctx->pc = 0x1EB380u;
            goto label_1eb380;
        }
    }
    ctx->pc = 0x1EB358u;
label_1eb358:
    // 0x1eb358: 0x24426ff0  addiu       $v0, $v0, 0x6FF0
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28656));
label_1eb35c:
    // 0x1eb35c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1eb35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1eb360:
    // 0x1eb360: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1eb360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1eb364:
    // 0x1eb364: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eb364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eb368:
    // 0x1eb368: 0x320f809  jalr        $t9
label_1eb36c:
    if (ctx->pc == 0x1EB36Cu) {
        ctx->pc = 0x1EB370u;
        goto label_1eb370;
    }
    ctx->pc = 0x1EB368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB370u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB368u, 0x1EB370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB370u;
label_1eb370:
    // 0x1eb370: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1eb374:
    if (ctx->pc == 0x1EB374u) {
        ctx->pc = 0x1EB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB370u;
        // 0x1eb374: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB378u;
        goto label_1eb378;
    }
    ctx->pc = 0x1EB370u;
    {
        const bool branch_taken_0x1eb370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB370u;
        // 0x1eb374: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb370) {
            ctx->pc = 0x1EB380u;
            goto label_1eb380;
        }
    }
    ctx->pc = 0x1EB378u;
label_1eb378:
    // 0x1eb378: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1eb378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1eb37c:
    // 0x1eb37c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1eb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1eb380:
    // 0x1eb380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eb380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb384:
    // 0x1eb384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb388:
    // 0x1eb388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb38c:
    // 0x1eb38c: 0x3e00008  jr          $ra
label_1eb390:
    if (ctx->pc == 0x1EB390u) {
        ctx->pc = 0x1EB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB38Cu;
        // 0x1eb390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB394u;
        goto label_fallthrough_0x1eb38c;
    }
    ctx->pc = 0x1EB38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB38Cu;
        // 0x1eb390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eb38c:
    ctx->pc = 0x1EB394u;
}
