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

// Function: sub_00685D80
// Address: 0x685d80 - 0x685dd8
void sub_00685D80_0x685d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685D80_0x685d80");
#endif

    switch (ctx->pc) {
        case 0x685da4u: goto label_685da4;
        case 0x685db0u: goto label_685db0;
        case 0x685dccu: goto label_685dcc;
        default: break;
    }

    ctx->pc = 0x685d80u;

    // 0x685d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x685d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x685d84: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x685d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x685d88: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x685d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x685d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x685d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x685d90: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x685d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x685d94: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x685d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x685d98: 0xac226ed4  sw          $v0, 0x6ED4($at)
    ctx->pc = 0x685d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8C6ED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C6ED4u, _value); } while (0);
    // 0x685d9c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x685D9Cu;
    SET_GPR_U32(ctx, 31, 0x685DA4u);
    ctx->pc = 0x685DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685D9Cu;
    // 0x685da0: 0x24847050  addiu       $a0, $a0, 0x7050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x685D9Cu, 0x685DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685DA4u;
label_685da4:
    // 0x685da4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x685da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x685da8: 0xc09d694  jal         func_275A50
    ctx->pc = 0x685DA8u;
    SET_GPR_U32(ctx, 31, 0x685DB0u);
    ctx->pc = 0x685DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685DA8u;
    // 0x685dac: 0x24849330  addiu       $a0, $a0, -0x6CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x685DA8u, 0x685DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685DB0u;
label_685db0:
    // 0x685db0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x685db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x685db4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x685db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x685db8: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x685db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x685dbc: 0x24846a00  addiu       $a0, $a0, 0x6A00
    ctx->pc = 0x685dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
    // 0x685dc0: 0x24a5a440  addiu       $a1, $a1, -0x5BC0
    ctx->pc = 0x685dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943808));
    // 0x685dc4: 0xc040244  jal         func_100910
    ctx->pc = 0x685DC4u;
    SET_GPR_U32(ctx, 31, 0x685DCCu);
    ctx->pc = 0x685DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685DC4u;
    // 0x685dc8: 0x24c669f0  addiu       $a2, $a2, 0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100910u, 0x685DC4u, 0x685DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685DCCu;
label_685dcc:
    // 0x685dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x685dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x685DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685DD0u;
        // 0x685dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685DD8u;
}
