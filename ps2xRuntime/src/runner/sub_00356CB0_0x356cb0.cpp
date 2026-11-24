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

// Function: sub_00356CB0
// Address: 0x356cb0 - 0x356d18
void sub_00356CB0_0x356cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356CB0_0x356cb0");
#endif

    switch (ctx->pc) {
        case 0x356ce4u: goto label_356ce4;
        default: break;
    }

    ctx->pc = 0x356cb0u;

    // 0x356cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x356cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x356cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356cc0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x356CC0u;
    {
        const bool branch_taken_0x356cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x356CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CC0u;
        // 0x356cc4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356cc0) {
            ctx->pc = 0x356D08u;
            goto label_356d08;
        }
    }
    ctx->pc = 0x356CC8u;
    // 0x356cc8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x356cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x356ccc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x356cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x356cd0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x356cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x356cd4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x356cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x356cd8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x356cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x356cdc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x356CDCu;
    SET_GPR_U32(ctx, 31, 0x356CE4u);
    ctx->pc = 0x356CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CDCu;
    // 0x356ce0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x356CDCu, 0x356CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CE4u;
label_356ce4:
    // 0x356ce4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x356ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x356ce8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x356ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x356cec: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x356cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x356cf0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x356cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x356cf4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x356cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x356cf8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x356cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x356cfc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x356cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x356d00: 0x24639040  addiu       $v1, $v1, -0x6FC0
    ctx->pc = 0x356d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938688));
    // 0x356d04: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x356d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_356d08:
    // 0x356d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356d10: 0x3e00008  jr          $ra
    ctx->pc = 0x356D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D10u;
        // 0x356d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356D18u;
}
