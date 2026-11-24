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

// Function: sub_0010D4D8
// Address: 0x10d4d8 - 0x10d52c
void sub_0010D4D8_0x10d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D4D8_0x10d4d8");
#endif

    switch (ctx->pc) {
        case 0x10d510u: goto label_10d510;
        case 0x10d520u: goto label_10d520;
        default: break;
    }

    ctx->pc = 0x10d4d8u;

    // 0x10d4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d4dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d4e0: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x10d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x10d4e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10D4E4u;
    {
        const bool branch_taken_0x10d4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d4e4) {
            ctx->pc = 0x10D518u;
            goto label_10d518;
        }
    }
    ctx->pc = 0x10D4ECu;
    // 0x10d4ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10D4ECu;
    {
        const bool branch_taken_0x10d4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d4ec) {
            ctx->pc = 0x10D518u;
            goto label_10d518;
        }
    }
    ctx->pc = 0x10D4F4u;
    // 0x10d4f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10d4f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D4F8u;
    {
        const bool branch_taken_0x10d4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4F8u;
        // 0x10d4fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4f8) {
            ctx->pc = 0x10D518u;
            goto label_10d518;
        }
    }
    ctx->pc = 0x10D500u;
    // 0x10d500: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10d504: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d508: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10D508u;
    SET_GPR_U32(ctx, 31, 0x10D510u);
    ctx->pc = 0x10D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D508u;
    // 0x10d50c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10D508u, 0x10D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D510u;
label_10d510:
    // 0x10d510: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D510u;
    {
        const bool branch_taken_0x10d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D510u;
        // 0x10d514: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d510) {
            ctx->pc = 0x10D524u;
            goto label_10d524;
        }
    }
    ctx->pc = 0x10D518u;
label_10d518:
    // 0x10d518: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x10D518u;
    SET_GPR_U32(ctx, 31, 0x10D520u);
    ctx->pc = 0x10D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D518u;
    // 0x10d51c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x10D518u, 0x10D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D520u;
label_10d520:
    // 0x10d520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10d524:
    // 0x10d524: 0x3e00008  jr          $ra
    ctx->pc = 0x10D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D524u;
        // 0x10d528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D52Cu;
}
