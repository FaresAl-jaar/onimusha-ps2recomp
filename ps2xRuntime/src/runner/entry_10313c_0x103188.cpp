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

// Function: entry_10313c
// Address: 0x10313c - 0x103188
void entry_10313c_0x103188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_10313c_0x103188");
#endif

    switch (ctx->pc) {
        case 0x10314cu: goto label_10314c;
        default: break;
    }

    ctx->pc = 0x10313cu;

    // 0x10313c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x103140: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x103140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x103144: 0xc044332  jal         func_110CC8
    ctx->pc = 0x103144u;
    SET_GPR_U32(ctx, 31, 0x10314Cu);
    ctx->pc = 0x103148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103144u;
    // 0x103148: 0x24841a88  addiu       $a0, $a0, 0x1A88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x103144u, 0x10314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10314Cu;
label_10314c:
    // 0x10314c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10314Cu;
    {
        const bool branch_taken_0x10314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10314Cu;
        // 0x103150: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10314c) {
            ctx->pc = 0x10317Cu;
            goto label_10317c;
        }
    }
    ctx->pc = 0x103154u;
    // 0x103154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x103158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10315c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x10315cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x103160: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x103160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x103164: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x103164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x103168: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10316c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x103170: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x103170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x103174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103178: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x103178u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
label_10317c:
    // 0x10317c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10317cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103180: 0x3e00008  jr          $ra
    ctx->pc = 0x103180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103188u;
}
