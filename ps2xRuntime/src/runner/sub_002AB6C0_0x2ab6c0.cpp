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

// Function: sub_002AB6C0
// Address: 0x2ab6c0 - 0x2ab708
void sub_002AB6C0_0x2ab6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB6C0_0x2ab6c0");
#endif

    switch (ctx->pc) {
        case 0x2ab6fcu: goto label_2ab6fc;
        default: break;
    }

    ctx->pc = 0x2ab6c0u;

    // 0x2ab6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab6c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ab6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6c8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab6c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab6d0: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x2ab6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x2ab6d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ab6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6d8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6dc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab6e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6e8: 0x34456930  ori         $a1, $v0, 0x6930
    ctx->pc = 0x2ab6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26928);
    // 0x2ab6ec: 0x24060598  addiu       $a2, $zero, 0x598
    ctx->pc = 0x2ab6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1432));
    // 0x2ab6f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab6f4: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2AB6F4u;
    SET_GPR_U32(ctx, 31, 0x2AB6FCu);
    ctx->pc = 0x2AB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6F4u;
    // 0x2ab6f8: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2AB6F4u, 0x2AB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6FCu;
label_2ab6fc:
    // 0x2ab6fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab700: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB700u;
        // 0x2ab704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB708u;
}
