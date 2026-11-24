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

// Function: sub_002A1490
// Address: 0x2a1490 - 0x2a14f8
void sub_002A1490_0x2a1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1490_0x2a1490");
#endif

    switch (ctx->pc) {
        case 0x2a14b0u: goto label_2a14b0;
        default: break;
    }

    ctx->pc = 0x2a1490u;

    // 0x2a1490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1494: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1498: 0xa33004  sllv        $a2, $v1, $a1
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2a149c: 0x94870068  lhu         $a3, 0x68($a0)
    ctx->pc = 0x2a149cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a14a0: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2a14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a14a4: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x2a14a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a14a8: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2a14a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2a14ac: 0x0  nop
    ctx->pc = 0x2a14acu;
    // NOP
label_2a14b0:
    // 0x2a14b0: 0x91230018  lbu         $v1, 0x18($t1)
    ctx->pc = 0x2a14b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2a14b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2a14b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2a14b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A14B8u;
    {
        const bool branch_taken_0x2a14b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14b8) {
            ctx->pc = 0x2A14D0u;
            goto label_2a14d0;
        }
    }
    ctx->pc = 0x2A14C0u;
    // 0x2a14c0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2a14c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2a14c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a14c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a14c8: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2a14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2a14cc: 0x0  nop
    ctx->pc = 0x2a14ccu;
    // NOP
label_2a14d0:
    // 0x2a14d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2a14d4: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x2a14d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x2a14d8: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A14D8u;
    {
        const bool branch_taken_0x2a14d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14D8u;
        // 0x2a14dc: 0x250801f0  addiu       $t0, $t0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14d8) {
            ctx->pc = 0x2A14B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a14b0;
        }
    }
    ctx->pc = 0x2A14E0u;
    // 0x2a14e0: 0x9083011d  lbu         $v1, 0x11D($a0)
    ctx->pc = 0x2a14e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 285)));
    // 0x2a14e4: 0xc02827  not         $a1, $a2
    ctx->pc = 0x2a14e4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x2a14e8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a14e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a14ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a14ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2a14f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A14F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14F0u;
        // 0x2a14f4: 0xa083011d  sb          $v1, 0x11D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 285), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A14F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A14F8u;
}
