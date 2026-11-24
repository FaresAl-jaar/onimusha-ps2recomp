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

// Function: sub_002748D0
// Address: 0x2748d0 - 0x274930
void sub_002748D0_0x2748d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002748D0_0x2748d0");
#endif

    switch (ctx->pc) {
        case 0x274900u: goto label_274900;
        case 0x274918u: goto label_274918;
        default: break;
    }

    ctx->pc = 0x2748d0u;

    // 0x2748d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2748d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2748d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2748d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2748d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2748d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2748dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2748dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2748e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2748e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2748E4u;
    {
        const bool branch_taken_0x2748e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748E4u;
        // 0x2748e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748e4) {
            ctx->pc = 0x274918u;
            goto label_274918;
        }
    }
    ctx->pc = 0x2748ECu;
    // 0x2748ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2748ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2748f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2748F0u;
    {
        const bool branch_taken_0x2748f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748F0u;
        // 0x2748f4: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748f0) {
            ctx->pc = 0x274900u;
            goto label_274900;
        }
    }
    ctx->pc = 0x2748F8u;
    // 0x2748f8: 0xc04bfbc  jal         func_12FEF0
    ctx->pc = 0x2748F8u;
    SET_GPR_U32(ctx, 31, 0x274900u);
    ctx->pc = 0x2748FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748F8u;
    // 0x2748fc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x2748F8u, 0x274900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274900u;
label_274900:
    // 0x274900: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x274900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x274904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x274904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x274908: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274908u;
    {
        const bool branch_taken_0x274908 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x27490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274908u;
        // 0x27490c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274908) {
            ctx->pc = 0x274918u;
            goto label_274918;
        }
    }
    ctx->pc = 0x274910u;
    // 0x274910: 0xc040148  jal         func_100520
    ctx->pc = 0x274910u;
    SET_GPR_U32(ctx, 31, 0x274918u);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x274910u, 0x274918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274918u;
label_274918:
    // 0x274918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x274918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27491c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27491cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274928: 0x3e00008  jr          $ra
    ctx->pc = 0x274928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274928u;
        // 0x27492c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274930u;
}
