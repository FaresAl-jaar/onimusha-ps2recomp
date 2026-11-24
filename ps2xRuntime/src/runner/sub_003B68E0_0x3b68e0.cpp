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

// Function: sub_003B68E0
// Address: 0x3b68e0 - 0x3b6948
void sub_003B68E0_0x3b68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B68E0_0x3b68e0");
#endif

    switch (ctx->pc) {
        case 0x3b6914u: goto label_3b6914;
        default: break;
    }

    ctx->pc = 0x3b68e0u;

    // 0x3b68e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b68e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b68e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b68e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b68e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b68e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b68ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b68ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b68f0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B68F0u;
    {
        const bool branch_taken_0x3b68f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68F0u;
        // 0x3b68f4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68f0) {
            ctx->pc = 0x3B6938u;
            goto label_3b6938;
        }
    }
    ctx->pc = 0x3B68F8u;
    // 0x3b68f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b68fc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3b68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3b6900: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3b6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3b6904: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b6904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3b6908: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3b6908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3b690c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3B690Cu;
    SET_GPR_U32(ctx, 31, 0x3B6914u);
    ctx->pc = 0x3B6910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B690Cu;
    // 0x3b6910: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3B690Cu, 0x3B6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6914u;
label_3b6914:
    // 0x3b6914: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b6914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b6918: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3b6918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3b691c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3b691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3b6920: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3b6920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3b6924: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b6924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3b6928: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b6928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b692c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3b692cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3b6930: 0x2463a550  addiu       $v1, $v1, -0x5AB0
    ctx->pc = 0x3b6930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944080));
    // 0x3b6934: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b6934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3b6938:
    // 0x3b6938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b693c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b693cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6940: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6940u;
        // 0x3b6944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6948u;
}
