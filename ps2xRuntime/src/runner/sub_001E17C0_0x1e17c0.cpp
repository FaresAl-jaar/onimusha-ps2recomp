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

// Function: sub_001E17C0
// Address: 0x1e17c0 - 0x1e1804
void sub_001E17C0_0x1e17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E17C0_0x1e17c0");
#endif

    switch (ctx->pc) {
        case 0x1e17ecu: goto label_1e17ec;
        default: break;
    }

    ctx->pc = 0x1e17c0u;

    // 0x1e17c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e17c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e17c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e17c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e17cc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1e17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e17d0: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x1e17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x1e17d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e17d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e17dc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1e17dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e17e0: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1e17e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e17e4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E17E4u;
    SET_GPR_U32(ctx, 31, 0x1E17ECu);
    ctx->pc = 0x1E17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17E4u;
    // 0x1e17e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E17E4u, 0x1E17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17ECu;
label_1e17ec:
    // 0x1e17ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e17ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e17f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e17f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e17f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e17f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17FCu;
        // 0x1e1800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1804u;
}
