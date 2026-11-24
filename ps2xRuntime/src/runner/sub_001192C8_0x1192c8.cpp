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

// Function: sub_001192C8
// Address: 0x1192c8 - 0x119338
void sub_001192C8_0x1192c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001192C8_0x1192c8");
#endif

    ctx->pc = 0x1192c8u;

    // 0x1192c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1192c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1192cc: 0x24474148  addiu       $a3, $v0, 0x4148
    ctx->pc = 0x1192ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x1192d0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x40415Cu));
    // 0x1192d4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1192D4u;
    {
        const bool branch_taken_0x1192d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1192d4) {
            ctx->pc = 0x1192E8u;
            goto label_1192e8;
        }
    }
    ctx->pc = 0x1192DCu;
    // 0x1192dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1192dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1192e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1192E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1192E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192E0u;
        // 0x1192e4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1192E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1192E8u;
label_1192e8:
    // 0x1192e8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1192e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1192ec: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1192ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1192f0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1192f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1192f8: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1192f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1192fc: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1192fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x119300: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x119300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x119304: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x119304u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x119308: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11930c: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x11930cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x119310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x119310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x119314: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x119314u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x119318: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x119318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x11931c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119320: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x119320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x119324: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x119324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x119328: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x119328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11932c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x119330: 0x3e00008  jr          $ra
    ctx->pc = 0x119330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119330u;
        // 0x119334: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119338u;
}
