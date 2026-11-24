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

// Function: sub_001E27C0
// Address: 0x1e27c0 - 0x1e2828
void sub_001E27C0_0x1e27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E27C0_0x1e27c0");
#endif

    switch (ctx->pc) {
        case 0x1e27f4u: goto label_1e27f4;
        case 0x1e280cu: goto label_1e280c;
        default: break;
    }

    ctx->pc = 0x1e27c0u;

    // 0x1e27c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e27c4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e27c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e27cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e27d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e27d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27d4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e27d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e27d8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E27D8u;
    {
        const bool branch_taken_0x1e27d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e27d8) {
            ctx->pc = 0x1E2818u;
            goto label_1e2818;
        }
    }
    ctx->pc = 0x1E27E0u;
    // 0x1e27e0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1e27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e27e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E27E4u;
    {
        const bool branch_taken_0x1e27e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e27e4) {
            ctx->pc = 0x1E27F8u;
            goto label_1e27f8;
        }
    }
    ctx->pc = 0x1E27ECu;
    // 0x1e27ec: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E27ECu;
    SET_GPR_U32(ctx, 31, 0x1E27F4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E27ECu, 0x1E27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E27F4u;
label_1e27f4:
    // 0x1e27f4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e27f8:
    // 0x1e27f8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1e27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1e27fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E27FCu;
    {
        const bool branch_taken_0x1e27fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e27fc) {
            ctx->pc = 0x1E2810u;
            goto label_1e2810;
        }
    }
    ctx->pc = 0x1E2804u;
    // 0x1e2804: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E2804u;
    SET_GPR_U32(ctx, 31, 0x1E280Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E2804u, 0x1E280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E280Cu;
label_1e280c:
    // 0x1e280c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1e2810:
    // 0x1e2810: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e2810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e2814: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e2814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e2818:
    // 0x1e2818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e281c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e281cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2820: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2820u;
        // 0x1e2824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2828u;
}
