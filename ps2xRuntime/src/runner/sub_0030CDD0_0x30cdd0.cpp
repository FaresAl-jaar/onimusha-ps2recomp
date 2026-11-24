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

// Function: sub_0030CDD0
// Address: 0x30cdd0 - 0x30ce38
void sub_0030CDD0_0x30cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CDD0_0x30cdd0");
#endif

    switch (ctx->pc) {
        case 0x30ce04u: goto label_30ce04;
        default: break;
    }

    ctx->pc = 0x30cdd0u;

    // 0x30cdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30cdd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30cdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30cdd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30cddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cde0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30CDE0u;
    {
        const bool branch_taken_0x30cde0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDE0u;
        // 0x30cde4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cde0) {
            ctx->pc = 0x30CE28u;
            goto label_30ce28;
        }
    }
    ctx->pc = 0x30CDE8u;
    // 0x30cde8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x30cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x30cdec: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x30cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x30cdf0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x30cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x30cdf4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x30cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x30cdf8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x30cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x30cdfc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x30CDFCu;
    SET_GPR_U32(ctx, 31, 0x30CE04u);
    ctx->pc = 0x30CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDFCu;
    // 0x30ce00: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x30CDFCu, 0x30CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE04u;
label_30ce04:
    // 0x30ce04: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x30ce08: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x30ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x30ce0c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x30ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x30ce10: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x30ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x30ce14: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x30ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x30ce18: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x30ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x30ce1c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x30ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x30ce20: 0x24638380  addiu       $v1, $v1, -0x7C80
    ctx->pc = 0x30ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935424));
    // 0x30ce24: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x30ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_30ce28:
    // 0x30ce28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ce2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ce30: 0x3e00008  jr          $ra
    ctx->pc = 0x30CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE30u;
        // 0x30ce34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CE38u;
}
