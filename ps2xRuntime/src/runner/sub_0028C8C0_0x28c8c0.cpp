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

// Function: sub_0028C8C0
// Address: 0x28c8c0 - 0x28c920
void sub_0028C8C0_0x28c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C8C0_0x28c8c0");
#endif

    switch (ctx->pc) {
        case 0x28c8f0u: goto label_28c8f0;
        case 0x28c908u: goto label_28c908;
        default: break;
    }

    ctx->pc = 0x28c8c0u;

    // 0x28c8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28c8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28c8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c8d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x28C8D4u;
    {
        const bool branch_taken_0x28c8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8D4u;
        // 0x28c8d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8d4) {
            ctx->pc = 0x28C908u;
            goto label_28c908;
        }
    }
    ctx->pc = 0x28C8DCu;
    // 0x28c8dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28c8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8e4: 0x244275e0  addiu       $v0, $v0, 0x75E0
    ctx->pc = 0x28c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30176));
    // 0x28c8e8: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x28C8E8u;
    SET_GPR_U32(ctx, 31, 0x28C8F0u);
    ctx->pc = 0x28C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8E8u;
    // 0x28c8ec: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x28C8E8u, 0x28C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8F0u;
label_28c8f0:
    // 0x28c8f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28c8f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28c8f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28c8f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C8F8u;
    {
        const bool branch_taken_0x28c8f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8F8u;
        // 0x28c8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8f8) {
            ctx->pc = 0x28C908u;
            goto label_28c908;
        }
    }
    ctx->pc = 0x28C900u;
    // 0x28c900: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28C900u;
    SET_GPR_U32(ctx, 31, 0x28C908u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28C900u, 0x28C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C908u;
label_28c908:
    // 0x28c908: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28c908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28c90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c918: 0x3e00008  jr          $ra
    ctx->pc = 0x28C918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C918u;
        // 0x28c91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C920u;
}
