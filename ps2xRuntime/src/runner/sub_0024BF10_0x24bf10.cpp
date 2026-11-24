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

// Function: sub_0024BF10
// Address: 0x24bf10 - 0x24bf44
void sub_0024BF10_0x24bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF10_0x24bf10");
#endif

    switch (ctx->pc) {
        case 0x24bf10u: goto label_24bf10;
        case 0x24bf14u: goto label_24bf14;
        case 0x24bf18u: goto label_24bf18;
        case 0x24bf1cu: goto label_24bf1c;
        case 0x24bf20u: goto label_24bf20;
        case 0x24bf24u: goto label_24bf24;
        case 0x24bf28u: goto label_24bf28;
        case 0x24bf2cu: goto label_24bf2c;
        case 0x24bf30u: goto label_24bf30;
        case 0x24bf34u: goto label_24bf34;
        case 0x24bf38u: goto label_24bf38;
        case 0x24bf3cu: goto label_24bf3c;
        case 0x24bf40u: goto label_24bf40;
        default: break;
    }

    ctx->pc = 0x24bf10u;

label_24bf10:
    // 0x24bf10: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24bf14:
    // 0x24bf14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bf14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24bf18:
    // 0x24bf18: 0x8c461248  lw          $a2, 0x1248($v0)
    ctx->pc = 0x24bf18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4680)));
label_24bf1c:
    // 0x24bf1c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_24bf20:
    if (ctx->pc == 0x24BF20u) {
        ctx->pc = 0x24BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF1Cu;
        // 0x24bf20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF24u;
        goto label_24bf24;
    }
    ctx->pc = 0x24BF1Cu;
    {
        const bool branch_taken_0x24bf1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF1Cu;
        // 0x24bf20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf1c) {
            ctx->pc = 0x24BF38u;
            goto label_24bf38;
        }
    }
    ctx->pc = 0x24BF24u;
label_24bf24:
    // 0x24bf24: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24bf28:
    // 0x24bf28: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_24bf2c:
    // 0x24bf2c: 0x8c44124c  lw          $a0, 0x124C($v0)
    ctx->pc = 0x24bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4684)));
label_24bf30:
    // 0x24bf30: 0xc0f809  jalr        $a2
label_24bf34:
    if (ctx->pc == 0x24BF34u) {
        ctx->pc = 0x24BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF30u;
        // 0x24bf34: 0x8c651250  lw          $a1, 0x1250($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF38u;
        goto label_24bf38;
    }
    ctx->pc = 0x24BF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24BF38u);
        ctx->pc = 0x24BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF30u;
        // 0x24bf34: 0x8c651250  lw          $a1, 0x1250($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4688)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF30u, 0x24BF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BF38u;
label_24bf38:
    // 0x24bf38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24bf3c:
    // 0x24bf3c: 0x3e00008  jr          $ra
label_24bf40:
    if (ctx->pc == 0x24BF40u) {
        ctx->pc = 0x24BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF3Cu;
        // 0x24bf40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF44u;
        goto label_fallthrough_0x24bf3c;
    }
    ctx->pc = 0x24BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF3Cu;
        // 0x24bf40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24bf3c:
    ctx->pc = 0x24BF44u;
}
