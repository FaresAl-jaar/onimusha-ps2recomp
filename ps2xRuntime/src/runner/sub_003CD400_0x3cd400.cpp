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

// Function: sub_003CD400
// Address: 0x3cd400 - 0x3cd474
void sub_003CD400_0x3cd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD400_0x3cd400");
#endif

    switch (ctx->pc) {
        case 0x3cd418u: goto label_3cd418;
        case 0x3cd43cu: goto label_3cd43c;
        case 0x3cd450u: goto label_3cd450;
        case 0x3cd45cu: goto label_3cd45c;
        case 0x3cd464u: goto label_3cd464;
        default: break;
    }

    ctx->pc = 0x3cd400u;

    // 0x3cd400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cd400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cd404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cd404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cd408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cd40c: 0x8085032e  lb          $a1, 0x32E($a0)
    ctx->pc = 0x3cd40cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 814)));
    // 0x3cd410: 0xc0dc3d0  jal         func_370F40
    ctx->pc = 0x3CD410u;
    SET_GPR_U32(ctx, 31, 0x3CD418u);
    ctx->pc = 0x3CD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD410u;
    // 0x3cd414: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370F40u, 0x3CD410u, 0x3CD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD418u;
label_3cd418:
    // 0x3cd418: 0x8202032e  lb          $v0, 0x32E($s0)
    ctx->pc = 0x3cd418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 814)));
    // 0x3cd41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd420: 0x82090333  lb          $t1, 0x333($s0)
    ctx->pc = 0x3cd420u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 819)));
    // 0x3cd424: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3cd424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3cd428: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x3cd428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3cd42c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3cd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3cd430: 0x904701bd  lbu         $a3, 0x1BD($v0)
    ctx->pc = 0x3cd430u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x3cd434: 0xc0dc434  jal         func_3710D0
    ctx->pc = 0x3CD434u;
    SET_GPR_U32(ctx, 31, 0x3CD43Cu);
    ctx->pc = 0x3CD438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD434u;
    // 0x3cd438: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710D0u, 0x3CD434u, 0x3CD43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD43Cu;
label_3cd43c:
    // 0x3cd43c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd440: 0x3405fff5  ori         $a1, $zero, 0xFFF5
    ctx->pc = 0x3cd440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x3cd444: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x3cd444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x3cd448: 0xc0cec3c  jal         func_33B0F0
    ctx->pc = 0x3CD448u;
    SET_GPR_U32(ctx, 31, 0x3CD450u);
    ctx->pc = 0x3CD44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD448u;
    // 0x3cd44c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B0F0u, 0x3CD448u, 0x3CD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD450u;
label_3cd450:
    // 0x3cd450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd454: 0xc0dc700  jal         func_371C00
    ctx->pc = 0x3CD454u;
    SET_GPR_U32(ctx, 31, 0x3CD45Cu);
    ctx->pc = 0x3CD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD454u;
    // 0x3cd458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C00u, 0x3CD454u, 0x3CD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD45Cu;
label_3cd45c:
    // 0x3cd45c: 0xc0dc6fc  jal         func_371BF0
    ctx->pc = 0x3CD45Cu;
    SET_GPR_U32(ctx, 31, 0x3CD464u);
    ctx->pc = 0x3CD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD45Cu;
    // 0x3cd460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371BF0u, 0x3CD45Cu, 0x3CD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD464u;
label_3cd464:
    // 0x3cd464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cd464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd46c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD46Cu;
        // 0x3cd470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD474u;
}
