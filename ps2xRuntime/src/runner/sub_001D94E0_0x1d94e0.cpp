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

// Function: sub_001D94E0
// Address: 0x1d94e0 - 0x1d9550
void sub_001D94E0_0x1d94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D94E0_0x1d94e0");
#endif

    switch (ctx->pc) {
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9510u: goto label_1d9510;
        case 0x1d951cu: goto label_1d951c;
        case 0x1d952cu: goto label_1d952c;
        case 0x1d953cu: goto label_1d953c;
        default: break;
    }

    ctx->pc = 0x1d94e0u;

    // 0x1d94e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d94e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d94e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d94ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d94f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d94f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d94f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94f8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1d94f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d94fc: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1D94FCu;
    SET_GPR_U32(ctx, 31, 0x1D9504u);
    ctx->pc = 0x1D9500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94FCu;
    // 0x1d9500: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1D94FCu, 0x1D9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9504u;
label_1d9504:
    // 0x1d9504: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x1d9504u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9508: 0xc04d594  jal         func_135650
    ctx->pc = 0x1D9508u;
    SET_GPR_U32(ctx, 31, 0x1D9510u);
    ctx->pc = 0x1D950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9508u;
    // 0x1d950c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1D9508u, 0x1D9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9510u;
label_1d9510:
    // 0x1d9510: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x1d9510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d9514: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1D9514u;
    SET_GPR_U32(ctx, 31, 0x1D951Cu);
    ctx->pc = 0x1D9518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9514u;
    // 0x1d9518: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1D9514u, 0x1D951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D951Cu;
label_1d951c:
    // 0x1d951c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d951cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9520: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d9520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d9524: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9524u;
    SET_GPR_U32(ctx, 31, 0x1D952Cu);
    ctx->pc = 0x1D9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9524u;
    // 0x1d9528: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9524u, 0x1D952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D952Cu;
label_1d952c:
    // 0x1d952c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d9530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9534: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9534u;
    SET_GPR_U32(ctx, 31, 0x1D953Cu);
    ctx->pc = 0x1D9538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9534u;
    // 0x1d9538: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9534u, 0x1D953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D953Cu;
label_1d953c:
    // 0x1d953c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d953cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9548: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9548u;
        // 0x1d954c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9550u;
}
