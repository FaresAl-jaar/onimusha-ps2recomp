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

// Function: sub_002164D8
// Address: 0x2164d8 - 0x21651c
void sub_002164D8_0x2164d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002164D8_0x2164d8");
#endif

    switch (ctx->pc) {
        case 0x2164fcu: goto label_2164fc;
        default: break;
    }

    ctx->pc = 0x2164d8u;

    // 0x2164d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2164d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2164dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2164dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2164e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2164e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2164e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2164e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2164e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2164ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2164f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2164f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164f4: 0xc083ed0  jal         func_20FB40
    ctx->pc = 0x2164F4u;
    SET_GPR_U32(ctx, 31, 0x2164FCu);
    ctx->pc = 0x2164F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164F4u;
    // 0x2164f8: 0x8e051fc8  lw          $a1, 0x1FC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FB40u, 0x2164F4u, 0x2164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164FCu;
label_2164fc:
    // 0x2164fc: 0xde0209a8  ld          $v0, 0x9A8($s0)
    ctx->pc = 0x2164fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2472)));
    // 0x216500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216504: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x216504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x216508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21650c: 0xfe0209a8  sd          $v0, 0x9A8($s0)
    ctx->pc = 0x21650cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2472), GPR_U64(ctx, 2));
    // 0x216510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216514: 0x3e00008  jr          $ra
    ctx->pc = 0x216514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216514u;
        // 0x216518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21651Cu;
}
