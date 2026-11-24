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

// Function: sub_00338DE0
// Address: 0x338de0 - 0x338e1c
void sub_00338DE0_0x338de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338DE0_0x338de0");
#endif

    switch (ctx->pc) {
        case 0x338e04u: goto label_338e04;
        case 0x338e0cu: goto label_338e0c;
        default: break;
    }

    ctx->pc = 0x338de0u;

    // 0x338de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338de4: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x338de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x338de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x338dec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x338decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338df4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x338df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338dfc: 0xc08e810  jal         func_23A040
    ctx->pc = 0x338DFCu;
    SET_GPR_U32(ctx, 31, 0x338E04u);
    ctx->pc = 0x338E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DFCu;
    // 0x338e00: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A040u, 0x338DFCu, 0x338E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E04u;
label_338e04:
    // 0x338e04: 0xc08e904  jal         func_23A410
    ctx->pc = 0x338E04u;
    SET_GPR_U32(ctx, 31, 0x338E0Cu);
    ctx->pc = 0x338E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E04u;
    // 0x338e08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A410u, 0x338E04u, 0x338E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E0Cu;
label_338e0c:
    // 0x338e0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338e14: 0x3e00008  jr          $ra
    ctx->pc = 0x338E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E14u;
        // 0x338e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338E1Cu;
}
