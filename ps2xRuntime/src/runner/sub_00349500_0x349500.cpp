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

// Function: sub_00349500
// Address: 0x349500 - 0x34958c
void sub_00349500_0x349500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349500_0x349500");
#endif

    switch (ctx->pc) {
        case 0x349548u: goto label_349548;
        case 0x34957cu: goto label_34957c;
        default: break;
    }

    ctx->pc = 0x349500u;

    // 0x349500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349508: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x349508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x34950c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34950Cu;
    {
        const bool branch_taken_0x34950c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34950c) {
            ctx->pc = 0x349550u;
            goto label_349550;
        }
    }
    ctx->pc = 0x349514u;
    // 0x349514: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x349514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349518: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x349518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x34951c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x34951cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x349520: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x349520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x349524: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x349524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x349528: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x349528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x34952c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x34952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x349530: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x349530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x349534: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x349534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x349538: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x349538u;
    {
        const bool branch_taken_0x349538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349538) {
            ctx->pc = 0x349580u;
            goto label_349580;
        }
    }
    ctx->pc = 0x349540u;
    // 0x349540: 0xc0d24ac  jal         func_3492B0
    ctx->pc = 0x349540u;
    SET_GPR_U32(ctx, 31, 0x349548u);
    ctx->pc = 0x3492B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492B0u, 0x349540u, 0x349548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349548u;
label_349548:
    // 0x349548: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x349548u;
    {
        const bool branch_taken_0x349548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349548) {
            ctx->pc = 0x349580u;
            goto label_349580;
        }
    }
    ctx->pc = 0x349550u;
label_349550:
    // 0x349550: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x349550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349554: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x349554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x349558: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x349558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34955c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x34955cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x349560: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x349560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x349564: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x349564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x349568: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x349568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x34956c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34956Cu;
    {
        const bool branch_taken_0x34956c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34956c) {
            ctx->pc = 0x349580u;
            goto label_349580;
        }
    }
    ctx->pc = 0x349574u;
    // 0x349574: 0xc0d2494  jal         func_349250
    ctx->pc = 0x349574u;
    SET_GPR_U32(ctx, 31, 0x34957Cu);
    ctx->pc = 0x349250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349250u, 0x349574u, 0x34957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34957Cu;
label_34957c:
    // 0x34957c: 0x0  nop
    ctx->pc = 0x34957cu;
    // NOP
label_349580:
    // 0x349580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349584: 0x3e00008  jr          $ra
    ctx->pc = 0x349584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349584u;
        // 0x349588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34958Cu;
}
