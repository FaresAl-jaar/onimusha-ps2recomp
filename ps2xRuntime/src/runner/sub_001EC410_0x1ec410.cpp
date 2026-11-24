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

// Function: sub_001EC410
// Address: 0x1ec410 - 0x1ec460
void sub_001EC410_0x1ec410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC410_0x1ec410");
#endif

    switch (ctx->pc) {
        case 0x1ec444u: goto label_1ec444;
        default: break;
    }

    ctx->pc = 0x1ec410u;

    // 0x1ec410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec414: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ec418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec424: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1ec424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec428: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC428u;
    {
        const bool branch_taken_0x1ec428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec428) {
            ctx->pc = 0x1EC450u;
            goto label_1ec450;
        }
    }
    ctx->pc = 0x1EC430u;
    // 0x1ec430: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x1ec430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1ec434: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC434u;
    {
        const bool branch_taken_0x1ec434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec434) {
            ctx->pc = 0x1EC448u;
            goto label_1ec448;
        }
    }
    ctx->pc = 0x1EC43Cu;
    // 0x1ec43c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1EC43Cu;
    SET_GPR_U32(ctx, 31, 0x1EC444u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1EC43Cu, 0x1EC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC444u;
label_1ec444:
    // 0x1ec444: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1ec444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_1ec448:
    // 0x1ec448: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1ec448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ec44c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ec44cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ec450:
    // 0x1ec450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec458: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC458u;
        // 0x1ec45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC460u;
}
