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

// Function: sub_003D33A0
// Address: 0x3d33a0 - 0x3d33fc
void sub_003D33A0_0x3d33a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D33A0_0x3d33a0");
#endif

    switch (ctx->pc) {
        case 0x3d33b4u: goto label_3d33b4;
        default: break;
    }

    ctx->pc = 0x3d33a0u;

    // 0x3d33a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d33a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d33a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d33a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d33a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d33a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d33ac: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3D33ACu;
    SET_GPR_U32(ctx, 31, 0x3D33B4u);
    ctx->pc = 0x3D33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D33ACu;
    // 0x3d33b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3D33ACu, 0x3D33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33B4u;
label_3d33b4:
    // 0x3d33b4: 0x920407d8  lbu         $a0, 0x7D8($s0)
    ctx->pc = 0x3d33b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x3d33b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d33bc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D33BCu;
    {
        const bool branch_taken_0x3d33bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33BCu;
        // 0x3d33c0: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d33bc) {
            ctx->pc = 0x3D33C8u;
            goto label_3d33c8;
        }
    }
    ctx->pc = 0x3D33C4u;
    // 0x3d33c4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d33c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d33c8:
    // 0x3d33c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d33c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d33cc: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x3d33ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d33d0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3d33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x3d33d4: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x3d33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3d33d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d33d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d33dc: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x3d33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x3d33e0: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x3d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3d33e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d33e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d33e8: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x3d33e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x3d33ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d33ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d33f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d33f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d33f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D33F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33F4u;
        // 0x3d33f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D33F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D33FCu;
}
