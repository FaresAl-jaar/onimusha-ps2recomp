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

// Function: sub_001EF8A0
// Address: 0x1ef8a0 - 0x1ef8f0
void sub_001EF8A0_0x1ef8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF8A0_0x1ef8a0");
#endif

    switch (ctx->pc) {
        case 0x1ef8d4u: goto label_1ef8d4;
        default: break;
    }

    ctx->pc = 0x1ef8a0u;

    // 0x1ef8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef8ac: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1ef8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1ef8b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF8B0u;
    {
        const bool branch_taken_0x1ef8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8B0u;
        // 0x1ef8b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8b0) {
            ctx->pc = 0x1EF8E0u;
            goto label_1ef8e0;
        }
    }
    ctx->pc = 0x1EF8B8u;
    // 0x1ef8b8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1ef8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ef8bc: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1ef8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1ef8c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ef8c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ef8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef8c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef8cc: 0xc0569e4  jal         func_15A790
    ctx->pc = 0x1EF8CCu;
    SET_GPR_U32(ctx, 31, 0x1EF8D4u);
    ctx->pc = 0x1EF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8CCu;
    // 0x1ef8d0: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A790u, 0x1EF8CCu, 0x1EF8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF8D4u;
label_1ef8d4:
    // 0x1ef8d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef8d8: 0xa2030047  sb          $v1, 0x47($s0)
    ctx->pc = 0x1ef8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef8dc: 0x0  nop
    ctx->pc = 0x1ef8dcu;
    // NOP
label_1ef8e0:
    // 0x1ef8e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8E8u;
        // 0x1ef8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF8F0u;
}
