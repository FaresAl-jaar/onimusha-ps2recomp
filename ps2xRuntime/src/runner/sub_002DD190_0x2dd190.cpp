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

// Function: sub_002DD190
// Address: 0x2dd190 - 0x2dd1f0
void sub_002DD190_0x2dd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD190_0x2dd190");
#endif

    switch (ctx->pc) {
        case 0x2dd1c0u: goto label_2dd1c0;
        case 0x2dd1d8u: goto label_2dd1d8;
        default: break;
    }

    ctx->pc = 0x2dd190u;

    // 0x2dd190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd1a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DD1A4u;
    {
        const bool branch_taken_0x2dd1a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1A4u;
        // 0x2dd1a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1a4) {
            ctx->pc = 0x2DD1D8u;
            goto label_2dd1d8;
        }
    }
    ctx->pc = 0x2DD1ACu;
    // 0x2dd1ac: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dd1b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1b4: 0x244279c0  addiu       $v0, $v0, 0x79C0
    ctx->pc = 0x2dd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31168));
    // 0x2dd1b8: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2DD1B8u;
    SET_GPR_U32(ctx, 31, 0x2DD1C0u);
    ctx->pc = 0x2DD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1B8u;
    // 0x2dd1bc: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2DD1B8u, 0x2DD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1C0u;
label_2dd1c0:
    // 0x2dd1c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dd1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dd1c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dd1c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dd1c8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD1C8u;
    {
        const bool branch_taken_0x2dd1c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1C8u;
        // 0x2dd1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1c8) {
            ctx->pc = 0x2DD1D8u;
            goto label_2dd1d8;
        }
    }
    ctx->pc = 0x2DD1D0u;
    // 0x2dd1d0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD1D0u;
    SET_GPR_U32(ctx, 31, 0x2DD1D8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD1D0u, 0x2DD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1D8u;
label_2dd1d8:
    // 0x2dd1d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd1e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1E8u;
        // 0x2dd1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD1F0u;
}
