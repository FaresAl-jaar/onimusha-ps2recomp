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

// Function: sub_0024E680
// Address: 0x24e680 - 0x24e6d4
void sub_0024E680_0x24e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E680_0x24e680");
#endif

    switch (ctx->pc) {
        case 0x24e6c8u: goto label_24e6c8;
        default: break;
    }

    ctx->pc = 0x24e680u;

    // 0x24e680: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e684: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24e688: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e68c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e690: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x24e690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e694: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x24e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x24e698: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E698u;
    {
        const bool branch_taken_0x24e698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E698u;
        // 0x24e69c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e698) {
            ctx->pc = 0x24E6B0u;
            goto label_24e6b0;
        }
    }
    ctx->pc = 0x24E6A0u;
    // 0x24e6a0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e6a4: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e6a8: 0x58600008  blezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E6A8u;
    {
        const bool branch_taken_0x24e6a8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24e6a8) {
            ctx->pc = 0x24E6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E6A8u;
            // 0x24e6ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E6CCu;
            goto label_24e6cc;
        }
    }
    ctx->pc = 0x24E6B0u;
label_24e6b0:
    // 0x24e6b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24e6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24e6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24e6bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e6c0: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24E6C0u;
    SET_GPR_U32(ctx, 31, 0x24E6C8u);
    ctx->pc = 0x24E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E6C0u;
    // 0x24e6c4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24E6C0u, 0x24E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6C8u;
label_24e6c8:
    // 0x24e6c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e6cc:
    // 0x24e6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24E6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6CCu;
        // 0x24e6d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E6D4u;
}
