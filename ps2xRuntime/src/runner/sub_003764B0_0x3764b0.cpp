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

// Function: sub_003764B0
// Address: 0x3764b0 - 0x376518
void sub_003764B0_0x3764b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003764B0_0x3764b0");
#endif

    switch (ctx->pc) {
        case 0x3764e4u: goto label_3764e4;
        default: break;
    }

    ctx->pc = 0x3764b0u;

    // 0x3764b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3764b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3764b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3764b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3764b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3764b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3764bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3764bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764c0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3764C0u;
    {
        const bool branch_taken_0x3764c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764C0u;
        // 0x3764c4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764c0) {
            ctx->pc = 0x376508u;
            goto label_376508;
        }
    }
    ctx->pc = 0x3764C8u;
    // 0x3764c8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3764cc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3764d0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3764d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3764d4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3764d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3764d8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3764d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3764dc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3764DCu;
    SET_GPR_U32(ctx, 31, 0x3764E4u);
    ctx->pc = 0x3764E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764DCu;
    // 0x3764e0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3764DCu, 0x3764E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764E4u;
label_3764e4:
    // 0x3764e4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3764e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3764e8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3764e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3764ec: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3764ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3764f0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3764f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3764f4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3764f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3764f8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3764f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3764fc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3764fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x376500: 0x24639810  addiu       $v1, $v1, -0x67F0
    ctx->pc = 0x376500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940688));
    // 0x376504: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x376504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_376508:
    // 0x376508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37650c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37650cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376510: 0x3e00008  jr          $ra
    ctx->pc = 0x376510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376510u;
        // 0x376514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376518u;
}
