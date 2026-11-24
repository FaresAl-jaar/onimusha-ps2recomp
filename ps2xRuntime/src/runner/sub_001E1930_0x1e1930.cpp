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

// Function: sub_001E1930
// Address: 0x1e1930 - 0x1e1964
void sub_001E1930_0x1e1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1930_0x1e1930");
#endif

    switch (ctx->pc) {
        case 0x1e194cu: goto label_1e194c;
        default: break;
    }

    ctx->pc = 0x1e1930u;

    // 0x1e1930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1934: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1e1934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e1938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e193c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e193cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1944: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E1944u;
    SET_GPR_U32(ctx, 31, 0x1E194Cu);
    ctx->pc = 0x1E1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1944u;
    // 0x1e1948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E1944u, 0x1E194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E194Cu;
label_1e194c:
    // 0x1e194c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e194cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e1950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e195c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E195Cu;
        // 0x1e1960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1964u;
}
