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

// Function: sub_00181A90
// Address: 0x181a90 - 0x181b0c
void sub_00181A90_0x181a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181A90_0x181a90");
#endif

    switch (ctx->pc) {
        case 0x181aa4u: goto label_181aa4;
        case 0x181ab0u: goto label_181ab0;
        default: break;
    }

    ctx->pc = 0x181a90u;

    // 0x181a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181a9c: 0xc0600c0  jal         func_180300
    ctx->pc = 0x181A9Cu;
    SET_GPR_U32(ctx, 31, 0x181AA4u);
    ctx->pc = 0x181AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181A9Cu;
    // 0x181aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180300u, 0x181A9Cu, 0x181AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AA4u;
label_181aa4:
    // 0x181aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181aac: 0x0  nop
    ctx->pc = 0x181aacu;
    // NOP
label_181ab0:
    // 0x181ab0: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x181ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x181ab4: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x181ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x181ab8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x181ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x181abc: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x181abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x181ac0: 0x2ca30040  sltiu       $v1, $a1, 0x40
    ctx->pc = 0x181ac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x181ac4: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x181ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x181ac8: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x181ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x181acc: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x181accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x181ad0: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x181ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x181ad4: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x181ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x181ad8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x181AD8u;
    {
        const bool branch_taken_0x181ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AD8u;
        // 0x181adc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ad8) {
            ctx->pc = 0x181AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181ab0;
        }
    }
    ctx->pc = 0x181AE0u;
    // 0x181ae0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x181ae4: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x181ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x181ae8: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x181ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x181aec: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x181aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x181af0: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x181af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x181af4: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x181af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x181af8: 0xa20001e4  sb          $zero, 0x1E4($s0)
    ctx->pc = 0x181af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 484), (uint8_t)GPR_U32(ctx, 0));
    // 0x181afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b04: 0x3e00008  jr          $ra
    ctx->pc = 0x181B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B04u;
        // 0x181b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181B0Cu;
}
