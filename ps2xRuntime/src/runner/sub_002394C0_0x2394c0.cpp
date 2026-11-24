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

// Function: sub_002394C0
// Address: 0x2394c0 - 0x239514
void sub_002394C0_0x2394c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002394C0_0x2394c0");
#endif

    switch (ctx->pc) {
        case 0x2394e4u: goto label_2394e4;
        case 0x2394fcu: goto label_2394fc;
        default: break;
    }

    ctx->pc = 0x2394c0u;

    // 0x2394c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2394c4: 0x24a6fc00  addiu       $a2, $a1, -0x400
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x2394c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2394c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2394cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2394ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394d0: 0x26050400  addiu       $a1, $s0, 0x400
    ctx->pc = 0x2394d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x2394d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2394d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2394d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2394d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2394dc: 0xc08e458  jal         func_239160
    ctx->pc = 0x2394DCu;
    SET_GPR_U32(ctx, 31, 0x2394E4u);
    ctx->pc = 0x2394E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394DCu;
    // 0x2394e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239160u, 0x2394DCu, 0x2394E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394E4u;
label_2394e4:
    // 0x2394e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2394e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394e8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2394E8u;
    {
        const bool branch_taken_0x2394e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394E8u;
        // 0x2394ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394e8) {
            ctx->pc = 0x239500u;
            goto label_239500;
        }
    }
    ctx->pc = 0x2394F0u;
    // 0x2394f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2394f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394f4: 0xc093606  jal         func_24D818
    ctx->pc = 0x2394F4u;
    SET_GPR_U32(ctx, 31, 0x2394FCu);
    ctx->pc = 0x2394F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394F4u;
    // 0x2394f8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D818u, 0x2394F4u, 0x2394FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394FCu;
label_2394fc:
    // 0x2394fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2394fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239500:
    // 0x239500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23950c: 0x3e00008  jr          $ra
    ctx->pc = 0x23950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23950Cu;
        // 0x239510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239514u;
}
