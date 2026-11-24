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

// Function: sub_00179150
// Address: 0x179150 - 0x179194
void sub_00179150_0x179150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179150_0x179150");
#endif

    switch (ctx->pc) {
        case 0x179174u: goto label_179174;
        case 0x179184u: goto label_179184;
        default: break;
    }

    ctx->pc = 0x179150u;

    // 0x179150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17915c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179164: 0xa4802de0  sh          $zero, 0x2DE0($a0)
    ctx->pc = 0x179164u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11744), (uint16_t)GPR_U32(ctx, 0));
    // 0x179168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17916c: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x17916Cu;
    SET_GPR_U32(ctx, 31, 0x179174u);
    ctx->pc = 0x179170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17916Cu;
    // 0x179170: 0xa4802de2  sh          $zero, 0x2DE2($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 11746), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x17916Cu, 0x179174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179174u;
label_179174:
    // 0x179174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17917c: 0xc05e46c  jal         func_1791B0
    ctx->pc = 0x17917Cu;
    SET_GPR_U32(ctx, 31, 0x179184u);
    ctx->pc = 0x179180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17917Cu;
    // 0x179180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791B0u, 0x17917Cu, 0x179184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179184u;
label_179184:
    // 0x179184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17918c: 0x3e00008  jr          $ra
    ctx->pc = 0x17918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17918Cu;
        // 0x179190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179194u;
}
