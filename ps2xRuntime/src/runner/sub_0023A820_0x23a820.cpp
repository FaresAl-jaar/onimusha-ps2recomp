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

// Function: sub_0023A820
// Address: 0x23a820 - 0x23a868
void sub_0023A820_0x23a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A820_0x23a820");
#endif

    switch (ctx->pc) {
        case 0x23a83cu: goto label_23a83c;
        case 0x23a848u: goto label_23a848;
        case 0x23a850u: goto label_23a850;
        default: break;
    }

    ctx->pc = 0x23a820u;

    // 0x23a820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a82c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a834: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A834u;
    SET_GPR_U32(ctx, 31, 0x23A83Cu);
    ctx->pc = 0x23A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A834u;
    // 0x23a838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A834u, 0x23A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A83Cu;
label_23a83c:
    // 0x23a83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a840: 0xc08ea1a  jal         func_23A868
    ctx->pc = 0x23A840u;
    SET_GPR_U32(ctx, 31, 0x23A848u);
    ctx->pc = 0x23A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A840u;
    // 0x23a844: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A868u, 0x23A840u, 0x23A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A848u;
label_23a848:
    // 0x23a848: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A848u;
    SET_GPR_U32(ctx, 31, 0x23A850u);
    ctx->pc = 0x23A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A848u;
    // 0x23a84c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A848u, 0x23A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A850u;
label_23a850:
    // 0x23a850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a860: 0x3e00008  jr          $ra
    ctx->pc = 0x23A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A860u;
        // 0x23a864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A868u;
}
