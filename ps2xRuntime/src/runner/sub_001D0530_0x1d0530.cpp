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

// Function: sub_001D0530
// Address: 0x1d0530 - 0x1d057c
void sub_001D0530_0x1d0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0530_0x1d0530");
#endif

    switch (ctx->pc) {
        case 0x1d0564u: goto label_1d0564;
        default: break;
    }

    ctx->pc = 0x1d0530u;

    // 0x1d0530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d053c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d053cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0540: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0540u;
    {
        const bool branch_taken_0x1d0540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0540u;
        // 0x1d0544: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0540) {
            ctx->pc = 0x1D0568u;
            goto label_1d0568;
        }
    }
    ctx->pc = 0x1D0548u;
    // 0x1d0548: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x1d054c: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x1d054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x1d0550: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d0550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d0554: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0554u;
    {
        const bool branch_taken_0x1d0554 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0554u;
        // 0x1d0558: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0554) {
            ctx->pc = 0x1D0568u;
            goto label_1d0568;
        }
    }
    ctx->pc = 0x1D055Cu;
    // 0x1d055c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1D055Cu;
    SET_GPR_U32(ctx, 31, 0x1D0564u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1D055Cu, 0x1D0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0564u;
label_1d0564:
    // 0x1d0564: 0x0  nop
    ctx->pc = 0x1d0564u;
    // NOP
label_1d0568:
    // 0x1d0568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d056c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0574: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D057Cu;
}
