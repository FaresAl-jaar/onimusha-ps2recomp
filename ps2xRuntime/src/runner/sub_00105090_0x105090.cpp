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

// Function: sub_00105090
// Address: 0x105090 - 0x105104
void sub_00105090_0x105090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105090_0x105090");
#endif

    switch (ctx->pc) {
        case 0x1050b0u: goto label_1050b0;
        default: break;
    }

    ctx->pc = 0x105090u;

    // 0x105090: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x105090u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105094: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x105094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105098: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x105098u;
    {
        const bool branch_taken_0x105098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105098u;
        // 0x10509c: 0x24c8ffff  addiu       $t0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105098) {
            ctx->pc = 0x1050FCu;
            goto label_1050fc;
        }
    }
    ctx->pc = 0x1050A0u;
    // 0x1050a0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1050a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1050a4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1050a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1050a8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1050a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1050ac: 0x0  nop
    ctx->pc = 0x1050acu;
    // NOP
label_1050b0:
    // 0x1050b0: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1050b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1050b4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1050b8: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1050b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1050bc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1050bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1050c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1050c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1050c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1050c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1050c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1050c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1050cc: 0x4283f  dsra32      $a1, $a0, 0
    ctx->pc = 0x1050ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1050d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1050d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1050d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1050d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1050d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1050dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1050e0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1050e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1050e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1050e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1050e8: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x1050e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1050ec: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1050ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1050f0: 0x1509ffef  bne         $t0, $t1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1050F0u;
    {
        const bool branch_taken_0x1050f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x1050F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050F0u;
        // 0x1050f4: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050f0) {
            ctx->pc = 0x1050B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1050b0;
        }
    }
    ctx->pc = 0x1050F8u;
    // 0x1050f8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x1050f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
label_1050fc:
    // 0x1050fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1050FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1050FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105104u;
}
