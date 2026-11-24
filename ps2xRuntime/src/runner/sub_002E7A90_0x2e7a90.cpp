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

// Function: sub_002E7A90
// Address: 0x2e7a90 - 0x2e7ae8
void sub_002E7A90_0x2e7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7A90_0x2e7a90");
#endif

    ctx->pc = 0x2e7a90u;

    // 0x2e7a90: 0x87838288  lh          $v1, -0x7D78($gp)
    ctx->pc = 0x2e7a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935176)));
    // 0x2e7a94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7a98: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x2e7a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2e7a9c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2e7a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7aa0: 0x94830152  lhu         $v1, 0x152($a0)
    ctx->pc = 0x2e7aa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x2e7aa4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E7AA4u;
    {
        const bool branch_taken_0x2e7aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7aa4) {
            ctx->pc = 0x2E7AE0u;
            goto label_2e7ae0;
        }
    }
    ctx->pc = 0x2E7AACu;
    // 0x2e7aac: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x2e7aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2e7ab0: 0x84830160  lh          $v1, 0x160($a0)
    ctx->pc = 0x2e7ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2e7ab4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2e7ab4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2e7ab8: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x2e7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2e7abc: 0x80a5000c  lb          $a1, 0xC($a1)
    ctx->pc = 0x2e7abcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e7ac0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e7ac4: 0xa4830160  sh          $v1, 0x160($a0)
    ctx->pc = 0x2e7ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7ac8: 0x84830160  lh          $v1, 0x160($a0)
    ctx->pc = 0x2e7ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2e7acc: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x2e7accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x2e7ad0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7AD0u;
    {
        const bool branch_taken_0x2e7ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD0u;
        // 0x2e7ad4: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ad0) {
            ctx->pc = 0x2E7AE0u;
            goto label_2e7ae0;
        }
    }
    ctx->pc = 0x2E7AD8u;
    // 0x2e7ad8: 0xa4830160  sh          $v1, 0x160($a0)
    ctx->pc = 0x2e7ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7adc: 0x0  nop
    ctx->pc = 0x2e7adcu;
    // NOP
label_2e7ae0:
    // 0x2e7ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AE0u;
        // 0x2e7ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7AE8u;
}
