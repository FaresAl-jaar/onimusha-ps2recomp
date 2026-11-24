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

// Function: sub_00308B80
// Address: 0x308b80 - 0x308be0
void sub_00308B80_0x308b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308B80_0x308b80");
#endif

    switch (ctx->pc) {
        case 0x308bb4u: goto label_308bb4;
        default: break;
    }

    ctx->pc = 0x308b80u;

    // 0x308b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b90: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x308B90u;
    {
        const bool branch_taken_0x308b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B90u;
        // 0x308b94: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b90) {
            ctx->pc = 0x308BD0u;
            goto label_308bd0;
        }
    }
    ctx->pc = 0x308B98u;
    // 0x308b98: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x308b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x308b9c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x308b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x308ba0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x308ba4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x308ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x308ba8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x308bac: 0xc09d694  jal         func_275A50
    ctx->pc = 0x308BACu;
    SET_GPR_U32(ctx, 31, 0x308BB4u);
    ctx->pc = 0x308BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BACu;
    // 0x308bb0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x308BACu, 0x308BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BB4u;
label_308bb4:
    // 0x308bb4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x308bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x308bb8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x308bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x308bbc: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x308bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x308bc0: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
    // 0x308bc4: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x308bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x308bc8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x308bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x308bcc: 0x0  nop
    ctx->pc = 0x308bccu;
    // NOP
label_308bd0:
    // 0x308bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x308BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BD8u;
        // 0x308bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308BE0u;
}
