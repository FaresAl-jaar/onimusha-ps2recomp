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

// Function: sub_00298410
// Address: 0x298410 - 0x29846c
void sub_00298410_0x298410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298410_0x298410");
#endif

    switch (ctx->pc) {
        case 0x29842cu: goto label_29842c;
        case 0x29845cu: goto label_29845c;
        default: break;
    }

    ctx->pc = 0x298410u;

    // 0x298410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298414: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298414u;
    {
        const bool branch_taken_0x298414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x298418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298414u;
        // 0x298418: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298414) {
            ctx->pc = 0x298438u;
            goto label_298438;
        }
    }
    ctx->pc = 0x29841Cu;
    // 0x29841c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x29841cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298420: 0x24842930  addiu       $a0, $a0, 0x2930
    ctx->pc = 0x298420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10544));
    // 0x298424: 0xc09d6d8  jal         func_275B60
    ctx->pc = 0x298424u;
    SET_GPR_U32(ctx, 31, 0x29842Cu);
    ctx->pc = 0x298428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298424u;
    // 0x298428: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B60u, 0x298424u, 0x29842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29842Cu;
label_29842c:
    // 0x29842c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29842Cu;
    {
        const bool branch_taken_0x29842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29842c) {
            ctx->pc = 0x298460u;
            goto label_298460;
        }
    }
    ctx->pc = 0x298434u;
    // 0x298434: 0x0  nop
    ctx->pc = 0x298434u;
    // NOP
label_298438:
    // 0x298438: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x298438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29843c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29843cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x298440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x298444: 0x8c640858  lw          $a0, 0x858($v1)
    ctx->pc = 0x298444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x298448: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298448u;
    {
        const bool branch_taken_0x298448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298448) {
            ctx->pc = 0x298460u;
            goto label_298460;
        }
    }
    ctx->pc = 0x298450u;
    // 0x298450: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x298450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298454: 0xc0a71a8  jal         func_29C6A0
    ctx->pc = 0x298454u;
    SET_GPR_U32(ctx, 31, 0x29845Cu);
    ctx->pc = 0x298458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298454u;
    // 0x298458: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6A0u, 0x298454u, 0x29845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29845Cu;
label_29845c:
    // 0x29845c: 0x0  nop
    ctx->pc = 0x29845cu;
    // NOP
label_298460:
    // 0x298460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298464: 0x3e00008  jr          $ra
    ctx->pc = 0x298464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298464u;
        // 0x298468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29846Cu;
}
