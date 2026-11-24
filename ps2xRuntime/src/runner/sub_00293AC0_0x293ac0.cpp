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

// Function: sub_00293AC0
// Address: 0x293ac0 - 0x293b00
void sub_00293AC0_0x293ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293AC0_0x293ac0");
#endif

    switch (ctx->pc) {
        case 0x293ae8u: goto label_293ae8;
        case 0x293af0u: goto label_293af0;
        default: break;
    }

    ctx->pc = 0x293ac0u;

    // 0x293ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x293ac4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x293ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x293ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293ad0: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x293ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x293ad4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x293ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x293ad8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x293AD8u;
    {
        const bool branch_taken_0x293ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AD8u;
        // 0x293adc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ad8) {
            ctx->pc = 0x293AF0u;
            goto label_293af0;
        }
    }
    ctx->pc = 0x293AE0u;
    // 0x293ae0: 0xc0a72c4  jal         func_29CB10
    ctx->pc = 0x293AE0u;
    SET_GPR_U32(ctx, 31, 0x293AE8u);
    ctx->pc = 0x29CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB10u, 0x293AE0u, 0x293AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AE8u;
label_293ae8:
    // 0x293ae8: 0xc09ce88  jal         func_273A20
    ctx->pc = 0x293AE8u;
    SET_GPR_U32(ctx, 31, 0x293AF0u);
    ctx->pc = 0x293AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293AE8u;
    // 0x293aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A20u, 0x293AE8u, 0x293AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AF0u;
label_293af0:
    // 0x293af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293af8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AF8u;
        // 0x293afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293B00u;
}
