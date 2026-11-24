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

// Function: sub_002AF0F0
// Address: 0x2af0f0 - 0x2af148
void sub_002AF0F0_0x2af0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF0F0_0x2af0f0");
#endif

    ctx->pc = 0x2af0f0u;

    // 0x2af0f0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AF0F0u;
    {
        const bool branch_taken_0x2af0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0F0u;
        // 0x2af0f4: 0x240301c0  addiu       $v1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0f0) {
            ctx->pc = 0x2AF140u;
            goto label_2af140;
        }
    }
    ctx->pc = 0x2AF0F8u;
    // 0x2af0f8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x2af0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af0fc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF0FCu;
    {
        const bool branch_taken_0x2af0fc = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2AF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0FCu;
        // 0x2af100: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0fc) {
            ctx->pc = 0x2AF10Cu;
            goto label_2af10c;
        }
    }
    ctx->pc = 0x2AF104u;
    // 0x2af104: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2af104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2af108: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2af108u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2af10c:
    // 0x2af10c: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x2af10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2af110: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2af110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2af114: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2af114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2af118: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF118u;
    {
        const bool branch_taken_0x2af118 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2af118) {
            ctx->pc = 0x2AF140u;
            goto label_2af140;
        }
    }
    ctx->pc = 0x2AF120u;
    // 0x2af120: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x2af120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x2af124: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2af124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2af128: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2af128u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af12c: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x2af12cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af130: 0x90830063  lbu         $v1, 0x63($a0)
    ctx->pc = 0x2af130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 99)));
    // 0x2af134: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2af134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2af138: 0xa0830063  sb          $v1, 0x63($a0)
    ctx->pc = 0x2af138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af13c: 0x0  nop
    ctx->pc = 0x2af13cu;
    // NOP
label_2af140:
    // 0x2af140: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF148u;
}
