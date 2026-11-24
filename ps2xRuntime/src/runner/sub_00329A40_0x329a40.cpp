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

// Function: sub_00329A40
// Address: 0x329a40 - 0x329a84
void sub_00329A40_0x329a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329A40_0x329a40");
#endif

    switch (ctx->pc) {
        case 0x329a64u: goto label_329a64;
        default: break;
    }

    ctx->pc = 0x329a40u;

    // 0x329a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329a4c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x329a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x329a50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x329A50u;
    {
        const bool branch_taken_0x329a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A50u;
        // 0x329a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a50) {
            ctx->pc = 0x329A68u;
            goto label_329a68;
        }
    }
    ctx->pc = 0x329A58u;
    // 0x329a58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329a5c: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x329A5Cu;
    SET_GPR_U32(ctx, 31, 0x329A64u);
    ctx->pc = 0x329A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A5Cu;
    // 0x329a60: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x329A5Cu, 0x329A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A64u;
label_329a64:
    // 0x329a64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x329a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_329a68:
    // 0x329a68: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x329a68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x329a6c: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329a70: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x329a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x329a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x329A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A7Cu;
        // 0x329a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329A84u;
}
