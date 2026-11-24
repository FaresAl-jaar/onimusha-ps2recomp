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

// Function: sub_00249780
// Address: 0x249780 - 0x2497d0
void sub_00249780_0x249780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249780_0x249780");
#endif

    switch (ctx->pc) {
        case 0x249798u: goto label_249798;
        default: break;
    }

    ctx->pc = 0x249780u;

    // 0x249780: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249788: 0x24440d60  addiu       $a0, $v0, 0xD60
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x24978c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249790: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x249790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249794: 0x0  nop
    ctx->pc = 0x249794u;
    // NOP
label_249798:
    // 0x249798: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x249798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24979c: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x24979Cu;
    {
        const bool branch_taken_0x24979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x24979c) {
            ctx->pc = 0x2497A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24979Cu;
            // 0x2497a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2497B4u;
            goto label_2497b4;
        }
    }
    ctx->pc = 0x2497A4u;
    // 0x2497a4: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x2497a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2497a8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2497A8u;
    {
        const bool branch_taken_0x2497a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2497ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497A8u;
        // 0x2497ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497a8) {
            ctx->pc = 0x2497C8u;
            goto label_2497c8;
        }
    }
    ctx->pc = 0x2497B0u;
    // 0x2497b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2497b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2497b4:
    // 0x2497b4: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x2497b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2497b8: 0x0  nop
    ctx->pc = 0x2497b8u;
    // NOP
    // 0x2497bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2497BCu;
    {
        const bool branch_taken_0x2497bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497BCu;
        // 0x2497c0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497bc) {
            ctx->pc = 0x249798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249798;
        }
    }
    ctx->pc = 0x2497C4u;
    // 0x2497c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2497c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2497c8:
    // 0x2497c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2497C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2497C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2497D0u;
}
