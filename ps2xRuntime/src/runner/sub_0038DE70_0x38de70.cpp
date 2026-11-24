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

// Function: sub_0038DE70
// Address: 0x38de70 - 0x38deb0
void sub_0038DE70_0x38de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DE70_0x38de70");
#endif

    switch (ctx->pc) {
        case 0x38de94u: goto label_38de94;
        case 0x38de9cu: goto label_38de9c;
        default: break;
    }

    ctx->pc = 0x38de70u;

    // 0x38de70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38de74: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x38de74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x38de78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38de78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38de7c: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x38de7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x38de80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38de84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38de84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38de88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38de8c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x38DE8Cu;
    SET_GPR_U32(ctx, 31, 0x38DE94u);
    ctx->pc = 0x38DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE8Cu;
    // 0x38de90: 0x26062b20  addiu       $a2, $s0, 0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x38DE8Cu, 0x38DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE94u;
label_38de94:
    // 0x38de94: 0xc096e44  jal         func_25B910
    ctx->pc = 0x38DE94u;
    SET_GPR_U32(ctx, 31, 0x38DE9Cu);
    ctx->pc = 0x38DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE94u;
    // 0x38de98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x38DE94u, 0x38DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE9Cu;
label_38de9c:
    // 0x38de9c: 0xa6022b30  sh          $v0, 0x2B30($s0)
    ctx->pc = 0x38de9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
    // 0x38dea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38dea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dea8: 0x3e00008  jr          $ra
    ctx->pc = 0x38DEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEA8u;
        // 0x38deac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DEB0u;
}
