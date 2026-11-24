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

// Function: sub_0029B8B0
// Address: 0x29b8b0 - 0x29b908
void sub_0029B8B0_0x29b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B8B0_0x29b8b0");
#endif

    switch (ctx->pc) {
        case 0x29b8d0u: goto label_29b8d0;
        case 0x29b8e0u: goto label_29b8e0;
        default: break;
    }

    ctx->pc = 0x29b8b0u;

    // 0x29b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b8bc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x29b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b8c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29B8C0u;
    {
        const bool branch_taken_0x29b8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8C0u;
        // 0x29b8c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8c0) {
            ctx->pc = 0x29B8F0u;
            goto label_29b8f0;
        }
    }
    ctx->pc = 0x29B8C8u;
    // 0x29b8c8: 0xc041494  jal         func_105250
    ctx->pc = 0x29B8C8u;
    SET_GPR_U32(ctx, 31, 0x29B8D0u);
    ctx->pc = 0x29B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8C8u;
    // 0x29b8cc: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x29B8C8u, 0x29B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8D0u;
label_29b8d0:
    // 0x29b8d0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29b8d4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29b8d8: 0xc0a7e10  jal         func_29F840
    ctx->pc = 0x29B8D8u;
    SET_GPR_U32(ctx, 31, 0x29B8E0u);
    ctx->pc = 0x29B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8D8u;
    // 0x29b8dc: 0x24a5b870  addiu       $a1, $a1, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F840u, 0x29B8D8u, 0x29B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8E0u;
label_29b8e0:
    // 0x29b8e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b8e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29B8E4u;
    {
        const bool branch_taken_0x29b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8E4u;
        // 0x29b8e8: 0xa2030115  sb          $v1, 0x115($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8e4) {
            ctx->pc = 0x29B8F8u;
            goto label_29b8f8;
        }
    }
    ctx->pc = 0x29B8ECu;
    // 0x29b8ec: 0x0  nop
    ctx->pc = 0x29b8ecu;
    // NOP
label_29b8f0:
    // 0x29b8f0: 0xa2000115  sb          $zero, 0x115($s0)
    ctx->pc = 0x29b8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b8f4: 0x0  nop
    ctx->pc = 0x29b8f4u;
    // NOP
label_29b8f8:
    // 0x29b8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b900: 0x3e00008  jr          $ra
    ctx->pc = 0x29B900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B900u;
        // 0x29b904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B908u;
}
