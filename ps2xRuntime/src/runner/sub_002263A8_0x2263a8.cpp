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

// Function: sub_002263A8
// Address: 0x2263a8 - 0x2263f4
void sub_002263A8_0x2263a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002263A8_0x2263a8");
#endif

    switch (ctx->pc) {
        case 0x2263d4u: goto label_2263d4;
        default: break;
    }

    ctx->pc = 0x2263a8u;

    // 0x2263a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2263ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2263acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2263b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2263b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2263b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2263b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2263b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263bc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2263bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2263c0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2263c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2263c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2263c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2263c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2263c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2263cc: 0xc089902  jal         func_226408
    ctx->pc = 0x2263CCu;
    SET_GPR_U32(ctx, 31, 0x2263D4u);
    ctx->pc = 0x2263D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263CCu;
    // 0x2263d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226408u, 0x2263CCu, 0x2263D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263D4u;
label_2263d4:
    // 0x2263d4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2263d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2263d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2263d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2263dc: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x2263dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
    // 0x2263e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2263e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2263e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2263e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2263e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2263e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2263ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2263ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2263F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263ECu;
        // 0x2263f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2263ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2263F4u;
}
