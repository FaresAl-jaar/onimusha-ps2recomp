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

// Function: sub_001FB3E0
// Address: 0x1fb3e0 - 0x1fb42c
void sub_001FB3E0_0x1fb3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB3E0_0x1fb3e0");
#endif

    switch (ctx->pc) {
        case 0x1fb404u: goto label_1fb404;
        default: break;
    }

    ctx->pc = 0x1fb3e0u;

    // 0x1fb3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb3e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb3e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb3f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb3f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fb3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fb3fc: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FB3FCu;
    SET_GPR_U32(ctx, 31, 0x1FB404u);
    ctx->pc = 0x1FB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3FCu;
    // 0x1fb400: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FB3FCu, 0x1FB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB404u;
label_1fb404:
    // 0x1fb404: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB404u;
    {
        const bool branch_taken_0x1fb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb404) {
            ctx->pc = 0x1FB408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB404u;
            // 0x1fb408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB418u;
            goto label_1fb418;
        }
    }
    ctx->pc = 0x1FB40Cu;
    // 0x1fb40c: 0xae1100f8  sw          $s1, 0xF8($s0)
    ctx->pc = 0x1fb40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
    // 0x1fb410: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x1fb410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x1fb414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb418:
    // 0x1fb418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb41c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb41cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb420: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb424: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB424u;
        // 0x1fb428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB42Cu;
}
