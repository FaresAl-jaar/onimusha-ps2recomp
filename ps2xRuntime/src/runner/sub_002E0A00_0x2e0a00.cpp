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

// Function: sub_002E0A00
// Address: 0x2e0a00 - 0x2e0a54
void sub_002E0A00_0x2e0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0A00_0x2e0a00");
#endif

    switch (ctx->pc) {
        case 0x2e0a18u: goto label_2e0a18;
        default: break;
    }

    ctx->pc = 0x2e0a00u;

    // 0x2e0a00: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2e0a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e0a04: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x2e0a04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e0a08: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2e0a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e0a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e0a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a10: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2e0a10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2e0a14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e0a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0a18:
    // 0x2e0a18: 0x90830180  lbu         $v1, 0x180($a0)
    ctx->pc = 0x2e0a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2e0a1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0A1Cu;
    {
        const bool branch_taken_0x2e0a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a1c) {
            ctx->pc = 0x2E0A38u;
            goto label_2e0a38;
        }
    }
    ctx->pc = 0x2E0A24u;
    // 0x2e0a24: 0x90830188  lbu         $v1, 0x188($a0)
    ctx->pc = 0x2e0a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x2e0a28: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0A28u;
    {
        const bool branch_taken_0x2e0a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x2e0a28) {
            ctx->pc = 0x2E0A38u;
            goto label_2e0a38;
        }
    }
    ctx->pc = 0x2E0A30u;
    // 0x2e0a30: 0xa4c50580  sh          $a1, 0x580($a2)
    ctx->pc = 0x2e0a30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1408), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e0a34: 0xa0c70582  sb          $a3, 0x582($a2)
    ctx->pc = 0x2e0a34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1410), (uint8_t)GPR_U32(ctx, 7));
label_2e0a38:
    // 0x2e0a38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e0a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e0a3c: 0x2d230020  sltiu       $v1, $t1, 0x20
    ctx->pc = 0x2e0a3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e0a40: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2e0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2e0a44: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E0A44u;
    {
        const bool branch_taken_0x2e0a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A44u;
        // 0x2e0a48: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a44) {
            ctx->pc = 0x2E0A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0a18;
        }
    }
    ctx->pc = 0x2E0A4Cu;
    // 0x2e0a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0A54u;
}
