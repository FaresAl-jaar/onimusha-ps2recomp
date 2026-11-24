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

// Function: sub_00230CB8
// Address: 0x230cb8 - 0x230d10
void sub_00230CB8_0x230cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230CB8_0x230cb8");
#endif

    switch (ctx->pc) {
        case 0x230cdcu: goto label_230cdc;
        case 0x230cecu: goto label_230cec;
        case 0x230cf4u: goto label_230cf4;
        default: break;
    }

    ctx->pc = 0x230cb8u;

    // 0x230cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ccc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230cd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230cd4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230CD4u;
    SET_GPR_U32(ctx, 31, 0x230CDCu);
    ctx->pc = 0x230CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CD4u;
    // 0x230cd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230CD4u, 0x230CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ce4: 0xc08c344  jal         func_230D10
    ctx->pc = 0x230CE4u;
    SET_GPR_U32(ctx, 31, 0x230CECu);
    ctx->pc = 0x230CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CE4u;
    // 0x230ce8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D10u, 0x230CE4u, 0x230CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CECu;
label_230cec:
    // 0x230cec: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230CECu;
    SET_GPR_U32(ctx, 31, 0x230CF4u);
    ctx->pc = 0x230CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CECu;
    // 0x230cf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230CECu, 0x230CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CF4u;
label_230cf4:
    // 0x230cf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230cf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d08: 0x3e00008  jr          $ra
    ctx->pc = 0x230D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D08u;
        // 0x230d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D10u;
}
