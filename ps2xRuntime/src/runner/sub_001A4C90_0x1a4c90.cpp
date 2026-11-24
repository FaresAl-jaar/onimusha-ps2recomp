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

// Function: sub_001A4C90
// Address: 0x1a4c90 - 0x1a4ce8
void sub_001A4C90_0x1a4c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4C90_0x1a4c90");
#endif

    switch (ctx->pc) {
        case 0x1a4cb0u: goto label_1a4cb0;
        default: break;
    }

    ctx->pc = 0x1a4c90u;

    // 0x1a4c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4ca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ca4: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a4ca8: 0xc069d18  jal         func_1A7460
    ctx->pc = 0x1A4CA8u;
    SET_GPR_U32(ctx, 31, 0x1A4CB0u);
    ctx->pc = 0x1A4CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CA8u;
    // 0x1a4cac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7460u, 0x1A4CA8u, 0x1A4CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CB0u;
label_1a4cb0:
    // 0x1a4cb0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1a4cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4cb4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a4cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a4cb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4CB8u;
    {
        const bool branch_taken_0x1a4cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cb8) {
            ctx->pc = 0x1A4CC8u;
            goto label_1a4cc8;
        }
    }
    ctx->pc = 0x1A4CC0u;
    // 0x1a4cc0: 0xa2207845  sb          $zero, 0x7845($s1)
    ctx->pc = 0x1a4cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30789), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4cc4: 0x0  nop
    ctx->pc = 0x1a4cc4u;
    // NOP
label_1a4cc8:
    // 0x1a4cc8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a4ccc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a4cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4cd0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a4cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4cd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CE0u;
        // 0x1a4ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4CE8u;
}
