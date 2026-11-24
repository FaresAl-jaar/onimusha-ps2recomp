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

// Function: sub_002729A0
// Address: 0x2729a0 - 0x272a0c
void sub_002729A0_0x2729a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002729A0_0x2729a0");
#endif

    switch (ctx->pc) {
        case 0x2729d8u: goto label_2729d8;
        case 0x2729e8u: goto label_2729e8;
        default: break;
    }

    ctx->pc = 0x2729a0u;

    // 0x2729a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2729a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2729a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2729a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2729a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2729ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2729acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2729b0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2729b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2729b4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2729B4u;
    {
        const bool branch_taken_0x2729b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2729B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729B4u;
        // 0x2729b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729b4) {
            ctx->pc = 0x2729E0u;
            goto label_2729e0;
        }
    }
    ctx->pc = 0x2729BCu;
    // 0x2729bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2729bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2729c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2729C0u;
    {
        const bool branch_taken_0x2729c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2729c0) {
            ctx->pc = 0x2729D0u;
            goto label_2729d0;
        }
    }
    ctx->pc = 0x2729C8u;
    // 0x2729c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2729C8u;
    {
        const bool branch_taken_0x2729c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2729c8) {
            ctx->pc = 0x2729E8u;
            goto label_2729e8;
        }
    }
    ctx->pc = 0x2729D0u;
label_2729d0:
    // 0x2729d0: 0xc09ca8c  jal         func_272A30
    ctx->pc = 0x2729D0u;
    SET_GPR_U32(ctx, 31, 0x2729D8u);
    ctx->pc = 0x272A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A30u, 0x2729D0u, 0x2729D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729D8u;
label_2729d8:
    // 0x2729d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2729D8u;
    {
        const bool branch_taken_0x2729d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2729d8) {
            ctx->pc = 0x2729E8u;
            goto label_2729e8;
        }
    }
    ctx->pc = 0x2729E0u;
label_2729e0:
    // 0x2729e0: 0xc09caec  jal         func_272BB0
    ctx->pc = 0x2729E0u;
    SET_GPR_U32(ctx, 31, 0x2729E8u);
    ctx->pc = 0x272BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272BB0u, 0x2729E0u, 0x2729E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729E8u;
label_2729e8:
    // 0x2729e8: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x2729e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2729ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2729ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2729f0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2729F0u;
    {
        const bool branch_taken_0x2729f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2729F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F0u;
        // 0x2729f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729f0) {
            ctx->pc = 0x2729FCu;
            goto label_2729fc;
        }
    }
    ctx->pc = 0x2729F8u;
    // 0x2729f8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2729f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2729fc:
    // 0x2729fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2729fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272a04: 0x3e00008  jr          $ra
    ctx->pc = 0x272A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A04u;
        // 0x272a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272A0Cu;
}
