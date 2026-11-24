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

// Function: sub_00230248
// Address: 0x230248 - 0x230290
void sub_00230248_0x230248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230248_0x230248");
#endif

    switch (ctx->pc) {
        case 0x230264u: goto label_230264;
        case 0x230270u: goto label_230270;
        case 0x230278u: goto label_230278;
        default: break;
    }

    ctx->pc = 0x230248u;

    // 0x230248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23024c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23025c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x23025Cu;
    SET_GPR_U32(ctx, 31, 0x230264u);
    ctx->pc = 0x230260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23025Cu;
    // 0x230260: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x23025Cu, 0x230264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230264u;
label_230264:
    // 0x230264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230268: 0xc08c0a4  jal         func_230290
    ctx->pc = 0x230268u;
    SET_GPR_U32(ctx, 31, 0x230270u);
    ctx->pc = 0x23026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230268u;
    // 0x23026c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230290u, 0x230268u, 0x230270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230270u;
label_230270:
    // 0x230270: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230270u;
    SET_GPR_U32(ctx, 31, 0x230278u);
    ctx->pc = 0x230274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230270u;
    // 0x230274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230270u, 0x230278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230278u;
label_230278:
    // 0x230278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23027c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23027cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230288: 0x3e00008  jr          $ra
    ctx->pc = 0x230288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230288u;
        // 0x23028c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230290u;
}
