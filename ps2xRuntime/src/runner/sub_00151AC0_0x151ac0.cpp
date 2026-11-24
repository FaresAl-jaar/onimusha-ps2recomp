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

// Function: sub_00151AC0
// Address: 0x151ac0 - 0x151b34
void sub_00151AC0_0x151ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151AC0_0x151ac0");
#endif

    switch (ctx->pc) {
        case 0x151af0u: goto label_151af0;
        case 0x151b14u: goto label_151b14;
        case 0x151b24u: goto label_151b24;
        default: break;
    }

    ctx->pc = 0x151ac0u;

    // 0x151ac0: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x151ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x151ac4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151ac8: 0x246370c0  addiu       $v1, $v1, 0x70C0
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28864));
    // 0x151acc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x151accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x151ad0: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x151ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151ad8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x151ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151adc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x151ae0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x151ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x151ae4: 0x24a56c40  addiu       $a1, $a1, 0x6C40
    ctx->pc = 0x151ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    // 0x151ae8: 0xc054738  jal         func_151CE0
    ctx->pc = 0x151AE8u;
    SET_GPR_U32(ctx, 31, 0x151AF0u);
    ctx->pc = 0x151AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AE8u;
    // 0x151aec: 0xac226c48  sw          $v0, 0x6C48($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CE0u, 0x151AE8u, 0x151AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AF0u;
label_151af0:
    // 0x151af0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151af4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x151af8: 0x8c246c48  lw          $a0, 0x6C48($at)
    ctx->pc = 0x151af8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7E6C48u));
    // 0x151afc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x151afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x151b00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x151b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b04: 0xaf82856c  sw          $v0, -0x7A94($gp)
    ctx->pc = 0x151b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935916), GPR_U32(ctx, 2));
    // 0x151b08: 0x8f85856c  lw          $a1, -0x7A94($gp)
    ctx->pc = 0x151b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
    // 0x151b0c: 0xc0548ac  jal         func_1522B0
    ctx->pc = 0x151B0Cu;
    SET_GPR_U32(ctx, 31, 0x151B14u);
    ctx->pc = 0x151B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B0Cu;
    // 0x151b10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522B0u, 0x151B0Cu, 0x151B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B14u;
label_151b14:
    // 0x151b14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151B14u;
    {
        const bool branch_taken_0x151b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B14u;
        // 0x151b18: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b14) {
            ctx->pc = 0x151B28u;
            goto label_151b28;
        }
    }
    ctx->pc = 0x151B1Cu;
    // 0x151b1c: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151B1Cu;
    SET_GPR_U32(ctx, 31, 0x151B24u);
    ctx->pc = 0x151B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B1Cu;
    // 0x151b20: 0x24844c70  addiu       $a0, $a0, 0x4C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151B1Cu, 0x151B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B24u;
label_151b24:
    // 0x151b24: 0x0  nop
    ctx->pc = 0x151b24u;
    // NOP
label_151b28:
    // 0x151b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x151B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B2Cu;
        // 0x151b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151B34u;
}
