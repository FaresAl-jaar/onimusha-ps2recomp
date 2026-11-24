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

// Function: sub_00179550
// Address: 0x179550 - 0x179590
void sub_00179550_0x179550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179550_0x179550");
#endif

    ctx->pc = 0x179550u;

    // 0x179550: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x179550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x179554: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x179554u;
    {
        const bool branch_taken_0x179554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179554u;
        // 0x179558: 0x3c070066  lui         $a3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179554) {
            ctx->pc = 0x179578u;
            goto label_179578;
        }
    }
    ctx->pc = 0x17955Cu;
    // 0x17955c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17955cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x179560: 0x24e754c0  addiu       $a3, $a3, 0x54C0
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21696));
    // 0x179564: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x179564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x179568: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x179568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17956c: 0x600008  jr          $v1
    ctx->pc = 0x17956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179578u: goto label_179578;
            case 0x179580u: goto label_179580;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17956Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x179574u;
    // 0x179574: 0x0  nop
    ctx->pc = 0x179574u;
    // NOP
label_179578:
    // 0x179578: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x179578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17957c: 0x0  nop
    ctx->pc = 0x17957cu;
    // NOP
label_179580:
    // 0x179580: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x179580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x179584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179588: 0x3e00008  jr          $ra
    ctx->pc = 0x179588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179588u;
        // 0x17958c: 0xa0652ded  sb          $a1, 0x2DED($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11757), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179590u;
}
