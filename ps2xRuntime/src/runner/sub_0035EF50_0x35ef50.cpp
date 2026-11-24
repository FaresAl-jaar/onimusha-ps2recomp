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

// Function: sub_0035EF50
// Address: 0x35ef50 - 0x35efa0
void sub_0035EF50_0x35ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF50_0x35ef50");
#endif

    switch (ctx->pc) {
        case 0x35ef84u: goto label_35ef84;
        default: break;
    }

    ctx->pc = 0x35ef50u;

    // 0x35ef50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ef54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ef58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ef5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef60: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x35EF60u;
    {
        const bool branch_taken_0x35ef60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF60u;
        // 0x35ef64: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef60) {
            ctx->pc = 0x35EF90u;
            goto label_35ef90;
        }
    }
    ctx->pc = 0x35EF68u;
    // 0x35ef68: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x35ef6c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x35ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x35ef70: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x35ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x35ef74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x35ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x35ef78: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x35ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x35ef7c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x35EF7Cu;
    SET_GPR_U32(ctx, 31, 0x35EF84u);
    ctx->pc = 0x35EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF7Cu;
    // 0x35ef80: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x35EF7Cu, 0x35EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF84u;
label_35ef84:
    // 0x35ef84: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x35ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x35ef88: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x35ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x35ef8c: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x35ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_35ef90:
    // 0x35ef90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ef94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ef94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF98u;
        // 0x35ef9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EFA0u;
}
