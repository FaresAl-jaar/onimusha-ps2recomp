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

// Function: sub_00238E68
// Address: 0x238e68 - 0x238eb4
void sub_00238E68_0x238e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238E68_0x238e68");
#endif

    switch (ctx->pc) {
        case 0x238e98u: goto label_238e98;
        case 0x238ea4u: goto label_238ea4;
        default: break;
    }

    ctx->pc = 0x238e68u;

    // 0x238e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238e6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e70: 0x24a707ff  addiu       $a3, $a1, 0x7FF
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x238e74: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x238e78: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x238e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x238e7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x238e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e84: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x238e88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x238e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x238e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x238e90: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x238E90u;
    SET_GPR_U32(ctx, 31, 0x238E98u);
    ctx->pc = 0x238E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E90u;
    // 0x238e94: 0x24a5af70  addiu       $a1, $a1, -0x5090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x238E90u, 0x238E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E98u;
label_238e98:
    // 0x238e98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e9c: 0xc08c092  jal         func_230248
    ctx->pc = 0x238E9Cu;
    SET_GPR_U32(ctx, 31, 0x238EA4u);
    ctx->pc = 0x238EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E9Cu;
    // 0x238ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230248u, 0x238E9Cu, 0x238EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EA4u;
label_238ea4:
    // 0x238ea4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x238ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ea8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x238ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238eac: 0x3e00008  jr          $ra
    ctx->pc = 0x238EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EACu;
        // 0x238eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238EB4u;
}
