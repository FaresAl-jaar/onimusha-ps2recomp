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

// Function: sub_0023F798
// Address: 0x23f798 - 0x23f7e8
void sub_0023F798_0x23f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F798_0x23f798");
#endif

    switch (ctx->pc) {
        case 0x23f7b8u: goto label_23f7b8;
        case 0x23f7d0u: goto label_23f7d0;
        default: break;
    }

    ctx->pc = 0x23f798u;

    // 0x23f798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f7a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f7b0: 0xc049f18  jal         func_127C60
    ctx->pc = 0x23F7B0u;
    SET_GPR_U32(ctx, 31, 0x23F7B8u);
    ctx->pc = 0x23F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7B0u;
    // 0x23f7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x23F7B0u, 0x23F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7B8u;
label_23f7b8:
    // 0x23f7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7bc: 0x26060a22  addiu       $a2, $s0, 0xA22
    ctx->pc = 0x23f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2594));
    // 0x23f7c0: 0x26070a24  addiu       $a3, $s0, 0xA24
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2596));
    // 0x23f7c4: 0x26080a26  addiu       $t0, $s0, 0xA26
    ctx->pc = 0x23f7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2598));
    // 0x23f7c8: 0xc08fbaa  jal         func_23EEA8
    ctx->pc = 0x23F7C8u;
    SET_GPR_U32(ctx, 31, 0x23F7D0u);
    ctx->pc = 0x23F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7C8u;
    // 0x23f7cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EEA8u, 0x23F7C8u, 0x23F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7D0u;
label_23f7d0:
    // 0x23f7d0: 0xa6000a20  sh          $zero, 0xA20($s0)
    ctx->pc = 0x23f7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2592), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f7d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f7d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f7dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7E0u;
        // 0x23f7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7E8u;
}
