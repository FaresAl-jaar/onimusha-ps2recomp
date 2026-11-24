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

// Function: sub_00288360
// Address: 0x288360 - 0x2883c0
void sub_00288360_0x288360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288360_0x288360");
#endif

    switch (ctx->pc) {
        case 0x288390u: goto label_288390;
        case 0x2883a8u: goto label_2883a8;
        default: break;
    }

    ctx->pc = 0x288360u;

    // 0x288360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x288368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28836c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288374: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x288374u;
    {
        const bool branch_taken_0x288374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x288378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288374u;
        // 0x288378: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288374) {
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x28837Cu;
    // 0x28837c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x288380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288384: 0x244275c0  addiu       $v0, $v0, 0x75C0
    ctx->pc = 0x288384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x288388: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x288388u;
    SET_GPR_U32(ctx, 31, 0x288390u);
    ctx->pc = 0x28838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288388u;
    // 0x28838c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x288388u, 0x288390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288390u;
label_288390:
    // 0x288390: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x288390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x288394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x288394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x288398: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288398u;
    {
        const bool branch_taken_0x288398 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288398u;
        // 0x28839c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288398) {
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x2883A0u;
    // 0x2883a0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2883A0u;
    SET_GPR_U32(ctx, 31, 0x2883A8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2883A0u, 0x2883A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883A8u;
label_2883a8:
    // 0x2883a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2883a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2883acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2883b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2883b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2883b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2883b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2883b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2883B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2883BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883B8u;
        // 0x2883bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2883B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2883C0u;
}
