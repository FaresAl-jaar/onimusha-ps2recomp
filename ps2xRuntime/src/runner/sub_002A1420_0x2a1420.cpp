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

// Function: sub_002A1420
// Address: 0x2a1420 - 0x2a1484
void sub_002A1420_0x2a1420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1420_0x2a1420");
#endif

    switch (ctx->pc) {
        case 0x2a1440u: goto label_2a1440;
        default: break;
    }

    ctx->pc = 0x2a1420u;

    // 0x2a1420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1424: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1428: 0xa33004  sllv        $a2, $v1, $a1
    ctx->pc = 0x2a1428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2a142c: 0x94870068  lhu         $a3, 0x68($a0)
    ctx->pc = 0x2a142cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a1430: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2a1430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a1434: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x2a1434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a1438: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2a143c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x2a143cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a1440:
    // 0x2a1440: 0x91230018  lbu         $v1, 0x18($t1)
    ctx->pc = 0x2a1440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2a1444: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2a1444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2a1448: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1448u;
    {
        const bool branch_taken_0x2a1448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1448) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A1450u;
    // 0x2a1450: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2a1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2a1454: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a1454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2a1458: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2a1458u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2a145c: 0x0  nop
    ctx->pc = 0x2a145cu;
    // NOP
label_2a1460:
    // 0x2a1460: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2a1464: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x2a1468: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A1468u;
    {
        const bool branch_taken_0x2a1468 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1468u;
        // 0x2a146c: 0x250801f0  addiu       $t0, $t0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1468) {
            ctx->pc = 0x2A1440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1440;
        }
    }
    ctx->pc = 0x2A1470u;
    // 0x2a1470: 0x9083011d  lbu         $v1, 0x11D($a0)
    ctx->pc = 0x2a1470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 285)));
    // 0x2a1474: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x2a1474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a1478: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a1478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a147c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A147Cu;
        // 0x2a1480: 0xa083011d  sb          $v1, 0x11D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 285), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A147Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1484u;
}
