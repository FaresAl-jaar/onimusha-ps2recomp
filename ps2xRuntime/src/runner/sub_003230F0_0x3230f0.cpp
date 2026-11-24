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

// Function: sub_003230F0
// Address: 0x3230f0 - 0x323158
void sub_003230F0_0x3230f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003230F0_0x3230f0");
#endif

    switch (ctx->pc) {
        case 0x323124u: goto label_323124;
        default: break;
    }

    ctx->pc = 0x3230f0u;

    // 0x3230f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3230f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3230f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3230f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3230f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3230f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3230fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3230fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323100: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x323100u;
    {
        const bool branch_taken_0x323100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323100u;
        // 0x323104: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323100) {
            ctx->pc = 0x323148u;
            goto label_323148;
        }
    }
    ctx->pc = 0x323108u;
    // 0x323108: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x323108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32310c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x32310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x323110: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x323110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x323114: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x323118: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x323118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x32311c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x32311Cu;
    SET_GPR_U32(ctx, 31, 0x323124u);
    ctx->pc = 0x323120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32311Cu;
    // 0x323120: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x32311Cu, 0x323124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323124u;
label_323124:
    // 0x323124: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x323124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x323128: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x323128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x32312c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x32312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x323130: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x323130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    // 0x323134: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x323138: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x323138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x32313c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x32313cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x323140: 0x24638560  addiu       $v1, $v1, -0x7AA0
    ctx->pc = 0x323140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935904));
    // 0x323144: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_323148:
    // 0x323148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32314c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32314cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323150: 0x3e00008  jr          $ra
    ctx->pc = 0x323150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323150u;
        // 0x323154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323158u;
}
