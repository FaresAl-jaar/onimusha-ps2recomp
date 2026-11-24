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

// Function: sub_001E1970
// Address: 0x1e1970 - 0x1e19a4
void sub_001E1970_0x1e1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1970_0x1e1970");
#endif

    switch (ctx->pc) {
        case 0x1e198cu: goto label_1e198c;
        default: break;
    }

    ctx->pc = 0x1e1970u;

    // 0x1e1970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1974: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1e1974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e1978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e197c: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x1e197cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x1e1980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1984: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E1984u;
    SET_GPR_U32(ctx, 31, 0x1E198Cu);
    ctx->pc = 0x1E1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1984u;
    // 0x1e1988: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E1984u, 0x1E198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E198Cu;
label_1e198c:
    // 0x1e198c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e198cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e1990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1994: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e199c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E199Cu;
        // 0x1e19a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E19A4u;
}
