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

// Function: sub_0027E480
// Address: 0x27e480 - 0x27e4e0
void sub_0027E480_0x27e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E480_0x27e480");
#endif

    switch (ctx->pc) {
        case 0x27e488u: goto label_27e488;
        default: break;
    }

    ctx->pc = 0x27e480u;

    // 0x27e480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e484: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27e484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27e488:
    // 0x27e488: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x27e488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x27e48c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E48Cu;
    {
        const bool branch_taken_0x27e48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e48c) {
            ctx->pc = 0x27E4B0u;
            goto label_27e4b0;
        }
    }
    ctx->pc = 0x27E494u;
    // 0x27e494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27e494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27e498: 0xa08300d8  sb          $v1, 0xD8($a0)
    ctx->pc = 0x27e498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 3));
    // 0x27e49c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27e4a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E4A0u;
    {
        const bool branch_taken_0x27e4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e4a0) {
            ctx->pc = 0x27E4B0u;
            goto label_27e4b0;
        }
    }
    ctx->pc = 0x27E4A8u;
    // 0x27e4a8: 0xfc8000d0  sd          $zero, 0xD0($a0)
    ctx->pc = 0x27e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 0));
    // 0x27e4ac: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x27e4acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
label_27e4b0:
    // 0x27e4b0: 0x908300d9  lbu         $v1, 0xD9($a0)
    ctx->pc = 0x27e4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 217)));
    // 0x27e4b4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E4B4u;
    {
        const bool branch_taken_0x27e4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x27e4b4) {
            ctx->pc = 0x27E4C8u;
            goto label_27e4c8;
        }
    }
    ctx->pc = 0x27E4BCu;
    // 0x27e4bc: 0xfc8000d0  sd          $zero, 0xD0($a0)
    ctx->pc = 0x27e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 0));
    // 0x27e4c0: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x27e4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e4c4: 0x0  nop
    ctx->pc = 0x27e4c4u;
    // NOP
label_27e4c8:
    // 0x27e4c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27e4cc: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x27e4ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27e4d0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27E4D0u;
    {
        const bool branch_taken_0x27e4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4D0u;
        // 0x27e4d4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4d0) {
            ctx->pc = 0x27E488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e488;
        }
    }
    ctx->pc = 0x27E4D8u;
    // 0x27e4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E4E0u;
}
