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

// Function: sub_0031BA90
// Address: 0x31ba90 - 0x31baf8
void sub_0031BA90_0x31ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BA90_0x31ba90");
#endif

    switch (ctx->pc) {
        case 0x31bac4u: goto label_31bac4;
        default: break;
    }

    ctx->pc = 0x31ba90u;

    // 0x31ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ba94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ba98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ba9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31baa0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31BAA0u;
    {
        const bool branch_taken_0x31baa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAA0u;
        // 0x31baa4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31baa0) {
            ctx->pc = 0x31BAE8u;
            goto label_31bae8;
        }
    }
    ctx->pc = 0x31BAA8u;
    // 0x31baa8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31baac: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x31baacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x31bab0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x31bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x31bab4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x31bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x31bab8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x31bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x31babc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x31BABCu;
    SET_GPR_U32(ctx, 31, 0x31BAC4u);
    ctx->pc = 0x31BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BABCu;
    // 0x31bac0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x31BABCu, 0x31BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BAC4u;
label_31bac4:
    // 0x31bac4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x31bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x31bac8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x31bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x31bacc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x31baccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x31bad0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x31bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x31bad4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x31bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x31bad8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x31bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x31badc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x31badcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x31bae0: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x31bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x31bae4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x31bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_31bae8:
    // 0x31bae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31bae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31baec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31baecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31baf0: 0x3e00008  jr          $ra
    ctx->pc = 0x31BAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAF0u;
        // 0x31baf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BAF8u;
}
