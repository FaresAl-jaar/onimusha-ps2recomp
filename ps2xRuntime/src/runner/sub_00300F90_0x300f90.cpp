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

// Function: sub_00300F90
// Address: 0x300f90 - 0x300ff8
void sub_00300F90_0x300f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300F90_0x300f90");
#endif

    switch (ctx->pc) {
        case 0x300fc4u: goto label_300fc4;
        default: break;
    }

    ctx->pc = 0x300f90u;

    // 0x300f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fa0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x300FA0u;
    {
        const bool branch_taken_0x300fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FA0u;
        // 0x300fa4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300fa0) {
            ctx->pc = 0x300FE8u;
            goto label_300fe8;
        }
    }
    ctx->pc = 0x300FA8u;
    // 0x300fa8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x300fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x300fac: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x300facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x300fb0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x300fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x300fb4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x300fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x300fb8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x300fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x300fbc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x300FBCu;
    SET_GPR_U32(ctx, 31, 0x300FC4u);
    ctx->pc = 0x300FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FBCu;
    // 0x300fc0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x300FBCu, 0x300FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FC4u;
label_300fc4:
    // 0x300fc4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x300fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x300fc8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x300fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x300fcc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x300fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x300fd0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x300fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x300fd4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x300fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x300fd8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x300fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x300fdc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x300fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x300fe0: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x300fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x300fe4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x300fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_300fe8:
    // 0x300fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x300FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FF0u;
        // 0x300ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300FF8u;
}
