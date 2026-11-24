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

// Function: sub_003A40E0
// Address: 0x3a40e0 - 0x3a412c
void sub_003A40E0_0x3a40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A40E0_0x3a40e0");
#endif

    switch (ctx->pc) {
        case 0x3a4114u: goto label_3a4114;
        case 0x3a411cu: goto label_3a411c;
        default: break;
    }

    ctx->pc = 0x3a40e0u;

    // 0x3a40e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a40e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a40e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a40e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a40ec: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3a40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3a40f0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3a40f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3a40f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a40f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a40f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A40F8u;
    {
        const bool branch_taken_0x3a40f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40F8u;
        // 0x3a40fc: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40f8) {
            ctx->pc = 0x3A4120u;
            goto label_3a4120;
        }
    }
    ctx->pc = 0x3A4100u;
    // 0x3a4100: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a4100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a4104: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4104u;
    {
        const bool branch_taken_0x3a4104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4104) {
            ctx->pc = 0x3A4120u;
            goto label_3a4120;
        }
    }
    ctx->pc = 0x3A410Cu;
    // 0x3a410c: 0xc0e8c80  jal         func_3A3200
    ctx->pc = 0x3A410Cu;
    SET_GPR_U32(ctx, 31, 0x3A4114u);
    ctx->pc = 0x3A3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3200u, 0x3A410Cu, 0x3A4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4114u;
label_3a4114:
    // 0x3a4114: 0xc0e904c  jal         func_3A4130
    ctx->pc = 0x3A4114u;
    SET_GPR_U32(ctx, 31, 0x3A411Cu);
    ctx->pc = 0x3A4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4130u, 0x3A4114u, 0x3A411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A411Cu;
label_3a411c:
    // 0x3a411c: 0x0  nop
    ctx->pc = 0x3a411cu;
    // NOP
label_3a4120:
    // 0x3a4120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4124: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4124u;
        // 0x3a4128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A412Cu;
}
