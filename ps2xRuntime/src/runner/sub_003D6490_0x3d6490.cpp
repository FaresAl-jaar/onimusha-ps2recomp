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

// Function: sub_003D6490
// Address: 0x3d6490 - 0x3d64d8
void sub_003D6490_0x3d6490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6490_0x3d6490");
#endif

    ctx->pc = 0x3d6490u;

    // 0x3d6490: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6490u;
    {
        const bool branch_taken_0x3d6490 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3D6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6490u;
        // 0x3d6494: 0x28a30008  slti        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6490) {
            ctx->pc = 0x3D64A0u;
            goto label_3d64a0;
        }
    }
    ctx->pc = 0x3D6498u;
    // 0x3d6498: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6498u;
    {
        const bool branch_taken_0x3d6498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6498) {
            ctx->pc = 0x3D64A8u;
            goto label_3d64a8;
        }
    }
    ctx->pc = 0x3D64A0u;
label_3d64a0:
    // 0x3d64a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D64A0u;
    {
        const bool branch_taken_0x3d64a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d64a0) {
            ctx->pc = 0x3D64D0u;
            goto label_3d64d0;
        }
    }
    ctx->pc = 0x3D64A8u;
label_3d64a8:
    // 0x3d64a8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3d64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3d64ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3d64acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d64b0: 0x90832b59  lbu         $v1, 0x2B59($a0)
    ctx->pc = 0x3d64b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11097)));
    // 0x3d64b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D64B4u;
    {
        const bool branch_taken_0x3d64b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d64b4) {
            ctx->pc = 0x3D64D0u;
            goto label_3d64d0;
        }
    }
    ctx->pc = 0x3D64BCu;
    // 0x3d64bc: 0x90832b58  lbu         $v1, 0x2B58($a0)
    ctx->pc = 0x3d64bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11096)));
    // 0x3d64c0: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3d64c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3d64c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D64C4u;
    {
        const bool branch_taken_0x3d64c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64C4u;
        // 0x3d64c8: 0x24852b58  addiu       $a1, $a0, 0x2B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 11096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64c4) {
            ctx->pc = 0x3D64D0u;
            goto label_3d64d0;
        }
    }
    ctx->pc = 0x3D64CCu;
    // 0x3d64cc: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x3d64ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_3d64d0:
    // 0x3d64d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D64D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D64D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D64D8u;
}
