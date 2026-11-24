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

// Function: sub_00247D30
// Address: 0x247d30 - 0x247d60
void sub_00247D30_0x247d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247D30_0x247d30");
#endif

    switch (ctx->pc) {
        case 0x247d30u: goto label_247d30;
        case 0x247d34u: goto label_247d34;
        case 0x247d38u: goto label_247d38;
        case 0x247d3cu: goto label_247d3c;
        case 0x247d40u: goto label_247d40;
        case 0x247d44u: goto label_247d44;
        case 0x247d48u: goto label_247d48;
        case 0x247d4cu: goto label_247d4c;
        case 0x247d50u: goto label_247d50;
        case 0x247d54u: goto label_247d54;
        case 0x247d58u: goto label_247d58;
        case 0x247d5cu: goto label_247d5c;
        default: break;
    }

    ctx->pc = 0x247d30u;

label_247d30:
    // 0x247d30: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_247d34:
    // 0x247d34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247d38:
    // 0x247d38: 0x8c43fe54  lw          $v1, -0x1AC($v0)
    ctx->pc = 0x247d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966868)));
label_247d3c:
    // 0x247d3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x247d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247d40:
    // 0x247d40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_247d44:
    if (ctx->pc == 0x247D44u) {
        ctx->pc = 0x247D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D40u;
        // 0x247d44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D48u;
        goto label_247d48;
    }
    ctx->pc = 0x247D40u;
    {
        const bool branch_taken_0x247d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D40u;
        // 0x247d44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d40) {
            ctx->pc = 0x247D54u;
            goto label_247d54;
        }
    }
    ctx->pc = 0x247D48u;
label_247d48:
    // 0x247d48: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_247d4c:
    // 0x247d4c: 0x60f809  jalr        $v1
label_247d50:
    if (ctx->pc == 0x247D50u) {
        ctx->pc = 0x247D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D4Cu;
        // 0x247d50: 0x8c44fe58  lw          $a0, -0x1A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D54u;
        goto label_247d54;
    }
    ctx->pc = 0x247D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247D54u);
        ctx->pc = 0x247D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D4Cu;
        // 0x247d50: 0x8c44fe58  lw          $a0, -0x1A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D4Cu, 0x247D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247D54u;
label_247d54:
    // 0x247d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247d58:
    // 0x247d58: 0x3e00008  jr          $ra
label_247d5c:
    if (ctx->pc == 0x247D5Cu) {
        ctx->pc = 0x247D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D58u;
        // 0x247d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D60u;
        goto label_fallthrough_0x247d58;
    }
    ctx->pc = 0x247D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D58u;
        // 0x247d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x247d58:
    ctx->pc = 0x247D60u;
}
