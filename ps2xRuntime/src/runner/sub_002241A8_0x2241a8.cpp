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

// Function: sub_002241A8
// Address: 0x2241a8 - 0x2241f4
void sub_002241A8_0x2241a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002241A8_0x2241a8");
#endif

    switch (ctx->pc) {
        case 0x2241ccu: goto label_2241cc;
        default: break;
    }

    ctx->pc = 0x2241a8u;

    // 0x2241a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2241a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2241ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2241acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2241b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2241b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2241b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2241b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2241b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2241bc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2241bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2241c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2241c4: 0xc088e5e  jal         func_223978
    ctx->pc = 0x2241C4u;
    SET_GPR_U32(ctx, 31, 0x2241CCu);
    ctx->pc = 0x2241C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241C4u;
    // 0x2241c8: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x2241C4u, 0x2241CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241CCu;
label_2241cc:
    // 0x2241cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2241CCu;
    {
        const bool branch_taken_0x2241cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2241cc) {
            ctx->pc = 0x2241D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2241CCu;
            // 0x2241d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2241E4u;
            goto label_2241e4;
        }
    }
    ctx->pc = 0x2241D4u;
    // 0x2241d4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2241d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2241d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2241d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2241dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2241dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2241e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2241e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2241e4:
    // 0x2241e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2241e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2241e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2241e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2241ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2241ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2241F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241ECu;
        // 0x2241f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2241F4u;
}
