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

// Function: sub_0021C978
// Address: 0x21c978 - 0x21c9dc
void sub_0021C978_0x21c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C978_0x21c978");
#endif

    switch (ctx->pc) {
        case 0x21c9ccu: goto label_21c9cc;
        default: break;
    }

    ctx->pc = 0x21c978u;

    // 0x21c978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c97c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21c97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c984: 0x24a60a0c  addiu       $a2, $a1, 0xA0C
    ctx->pc = 0x21c984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2572));
    // 0x21c988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c98c: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x21c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x21c990: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21C990u;
    {
        const bool branch_taken_0x21c990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C990u;
        // 0x21c994: 0x24a50d30  addiu       $a1, $a1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c990) {
            ctx->pc = 0x21C9D0u;
            goto label_21c9d0;
        }
    }
    ctx->pc = 0x21C998u;
    // 0x21c998: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x21c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21c99c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21C99Cu;
    {
        const bool branch_taken_0x21c99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c99c) {
            ctx->pc = 0x21C9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C99Cu;
            // 0x21c9a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C9D4u;
            goto label_21c9d4;
        }
    }
    ctx->pc = 0x21C9A4u;
    // 0x21c9a4: 0x8ca302b0  lw          $v1, 0x2B0($a1)
    ctx->pc = 0x21c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
    // 0x21c9a8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21C9A8u;
    {
        const bool branch_taken_0x21c9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c9a8) {
            ctx->pc = 0x21C9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C9A8u;
            // 0x21c9ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C9D4u;
            goto label_21c9d4;
        }
    }
    ctx->pc = 0x21C9B0u;
    // 0x21c9b0: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x21c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
    // 0x21c9b4: 0x8cc500b4  lw          $a1, 0xB4($a2)
    ctx->pc = 0x21c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x21c9b8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x21c9b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21c9bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C9BCu;
    {
        const bool branch_taken_0x21c9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c9bc) {
            ctx->pc = 0x21C9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C9BCu;
            // 0x21c9c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C9D4u;
            goto label_21c9d4;
        }
    }
    ctx->pc = 0x21C9C4u;
    // 0x21c9c4: 0xc0873ee  jal         func_21CFB8
    ctx->pc = 0x21C9C4u;
    SET_GPR_U32(ctx, 31, 0x21C9CCu);
    ctx->pc = 0x21CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CFB8u, 0x21C9C4u, 0x21C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9CCu;
label_21c9cc:
    // 0x21c9cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21c9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c9d0:
    // 0x21c9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c9d4:
    // 0x21c9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9D4u;
        // 0x21c9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C9DCu;
}
