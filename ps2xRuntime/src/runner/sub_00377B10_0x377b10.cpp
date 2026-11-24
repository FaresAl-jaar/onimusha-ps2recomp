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

// Function: sub_00377B10
// Address: 0x377b10 - 0x377b80
void sub_00377B10_0x377b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B10_0x377b10");
#endif

    ctx->pc = 0x377b10u;

    // 0x377b10: 0x8c8505b8  lw          $a1, 0x5B8($a0)
    ctx->pc = 0x377b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x377b14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x377B14u;
    {
        const bool branch_taken_0x377b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b14) {
            ctx->pc = 0x377B28u;
            goto label_377b28;
        }
    }
    ctx->pc = 0x377B1Cu;
    // 0x377b1c: 0x8c8305bc  lw          $v1, 0x5BC($a0)
    ctx->pc = 0x377b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
    // 0x377b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x377B20u;
    {
        const bool branch_taken_0x377b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B20u;
        // 0x377b24: 0xaca305bc  sw          $v1, 0x5BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b20) {
            ctx->pc = 0x377B40u;
            goto label_377b40;
        }
    }
    ctx->pc = 0x377B28u;
label_377b28:
    // 0x377b28: 0x8c8305bc  lw          $v1, 0x5BC($a0)
    ctx->pc = 0x377b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
    // 0x377b2c: 0xaf838c10  sw          $v1, -0x73F0($gp)
    ctx->pc = 0x377b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 3));
    // 0x377b30: 0x8f838c10  lw          $v1, -0x73F0($gp)
    ctx->pc = 0x377b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x377b34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x377B34u;
    {
        const bool branch_taken_0x377b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b34) {
            ctx->pc = 0x377B40u;
            goto label_377b40;
        }
    }
    ctx->pc = 0x377B3Cu;
    // 0x377b3c: 0xac6005b8  sw          $zero, 0x5B8($v1)
    ctx->pc = 0x377b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 0));
label_377b40:
    // 0x377b40: 0x8c8505bc  lw          $a1, 0x5BC($a0)
    ctx->pc = 0x377b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
    // 0x377b44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x377B44u;
    {
        const bool branch_taken_0x377b44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b44) {
            ctx->pc = 0x377B58u;
            goto label_377b58;
        }
    }
    ctx->pc = 0x377B4Cu;
    // 0x377b4c: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x377b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x377b50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x377B50u;
    {
        const bool branch_taken_0x377b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B50u;
        // 0x377b54: 0xaca305b8  sw          $v1, 0x5B8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b50) {
            ctx->pc = 0x377B70u;
            goto label_377b70;
        }
    }
    ctx->pc = 0x377B58u;
label_377b58:
    // 0x377b58: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x377b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x377b5c: 0xaf838c14  sw          $v1, -0x73EC($gp)
    ctx->pc = 0x377b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 3));
    // 0x377b60: 0x8f838c14  lw          $v1, -0x73EC($gp)
    ctx->pc = 0x377b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x377b64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x377B64u;
    {
        const bool branch_taken_0x377b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b64) {
            ctx->pc = 0x377B70u;
            goto label_377b70;
        }
    }
    ctx->pc = 0x377B6Cu;
    // 0x377b6c: 0xac6005bc  sw          $zero, 0x5BC($v1)
    ctx->pc = 0x377b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 0));
label_377b70:
    // 0x377b70: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x377b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x377b74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x377b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x377b78: 0x3e00008  jr          $ra
    ctx->pc = 0x377B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B78u;
        // 0x377b7c: 0xaf838c18  sw          $v1, -0x73E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377B80u;
}
