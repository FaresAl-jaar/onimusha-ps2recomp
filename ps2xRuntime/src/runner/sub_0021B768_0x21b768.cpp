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

// Function: sub_0021B768
// Address: 0x21b768 - 0x21b7d8
void sub_0021B768_0x21b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B768_0x21b768");
#endif

    switch (ctx->pc) {
        case 0x21b78cu: goto label_21b78c;
        default: break;
    }

    ctx->pc = 0x21b768u;

    // 0x21b768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b76c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b778: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21b778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b77c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b780: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21b784: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x21B784u;
    SET_GPR_U32(ctx, 31, 0x21B78Cu);
    ctx->pc = 0x21B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B784u;
    // 0x21b788: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x21B784u, 0x21B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B78Cu;
label_21b78c:
    // 0x21b78c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b790: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B790u;
    {
        const bool branch_taken_0x21b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B790u;
        // 0x21b794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b790) {
            ctx->pc = 0x21B7B8u;
            goto label_21b7b8;
        }
    }
    ctx->pc = 0x21B798u;
    // 0x21b798: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b7a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b7a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21b7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7ACu;
        // 0x21b7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B7B4u;
    // 0x21b7b4: 0x0  nop
    ctx->pc = 0x21b7b4u;
    // NOP
label_21b7b8:
    // 0x21b7b8: 0x8e441fc0  lw          $a0, 0x1FC0($s2)
    ctx->pc = 0x21b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x21b7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b7c4: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x21b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x21b7c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b7cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21b7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b7d0: 0x8086d3e  j           func_21B4F8
    ctx->pc = 0x21B7D0u;
    ctx->pc = 0x21B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7D0u;
    // 0x21b7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B4F8u;
    sub_0021B4F8_0x21b4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x21B7D8u;
}
