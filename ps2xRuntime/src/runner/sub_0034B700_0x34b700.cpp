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

// Function: sub_0034B700
// Address: 0x34b700 - 0x34b750
void sub_0034B700_0x34b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B700_0x34b700");
#endif

    ctx->pc = 0x34b700u;

    // 0x34b700: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x34b700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x34b704: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x34b704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x34b708: 0xac852b60  sw          $a1, 0x2B60($a0)
    ctx->pc = 0x34b708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11104), GPR_U32(ctx, 5));
    // 0x34b70c: 0x90852b69  lbu         $a1, 0x2B69($a0)
    ctx->pc = 0x34b70cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11113)));
    // 0x34b710: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x34b710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x34b714: 0xa0852b69  sb          $a1, 0x2B69($a0)
    ctx->pc = 0x34b714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11113), (uint8_t)GPR_U32(ctx, 5));
    // 0x34b718: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x34b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x34b71c: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x34b71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x34b720: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34b720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x34b724: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x34b724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x34b728: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x34b728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x34b72c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x34b730: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x34b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x34b734: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x34b734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x34b738: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34b738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x34b73c: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x34b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x34b740: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x34b740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x34b744: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x34b744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x34b748: 0x3e00008  jr          $ra
    ctx->pc = 0x34B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B748u;
        // 0x34b74c: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B750u;
}
