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

// Function: sub_003EF4D0
// Address: 0x3ef4d0 - 0x3ef52c
void sub_003EF4D0_0x3ef4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF4D0_0x3ef4d0");
#endif

    switch (ctx->pc) {
        case 0x3ef520u: goto label_3ef520;
        default: break;
    }

    ctx->pc = 0x3ef4d0u;

    // 0x3ef4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef4d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ef4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef4dc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ef4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ef4e0: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3EF4E0u;
    {
        const bool branch_taken_0x3ef4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ef4e0) {
            ctx->pc = 0x3EF520u;
            goto label_3ef520;
        }
    }
    ctx->pc = 0x3EF4E8u;
    // 0x3ef4e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF4E8u;
    {
        const bool branch_taken_0x3ef4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef4e8) {
            ctx->pc = 0x3EF4F8u;
            goto label_3ef4f8;
        }
    }
    ctx->pc = 0x3EF4F0u;
    // 0x3ef4f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EF4F0u;
    {
        const bool branch_taken_0x3ef4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef4f0) {
            ctx->pc = 0x3EF520u;
            goto label_3ef520;
        }
    }
    ctx->pc = 0x3EF4F8u;
label_3ef4f8:
    // 0x3ef4f8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3ef4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ef4fc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3ef4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ef500: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ef500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ef504: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3ef504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef508: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ef508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ef50c: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3ef50cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef510: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ef510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ef514: 0xac8207ec  sw          $v0, 0x7EC($a0)
    ctx->pc = 0x3ef514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 2));
    // 0x3ef518: 0xc0fb78c  jal         func_3EDE30
    ctx->pc = 0x3EF518u;
    SET_GPR_U32(ctx, 31, 0x3EF520u);
    ctx->pc = 0x3EF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF518u;
    // 0x3ef51c: 0xa0850821  sb          $a1, 0x821($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDE30u, 0x3EF518u, 0x3EF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF520u;
label_3ef520:
    // 0x3ef520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef524: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF524u;
        // 0x3ef528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF52Cu;
}
