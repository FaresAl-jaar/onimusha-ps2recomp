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

// Function: sub_002731A0
// Address: 0x2731a0 - 0x273200
void sub_002731A0_0x2731a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002731A0_0x2731a0");
#endif

    switch (ctx->pc) {
        case 0x2731c8u: goto label_2731c8;
        default: break;
    }

    ctx->pc = 0x2731a0u;

    // 0x2731a0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2731a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2731a4: 0xa78088bc  sh          $zero, -0x7744($gp)
    ctx->pc = 0x2731a4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 0));
    // 0x2731a8: 0xa78088b0  sh          $zero, -0x7750($gp)
    ctx->pc = 0x2731a8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936752), (uint16_t)GPR_U32(ctx, 0));
    // 0x2731ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2731acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731b0: 0xa78088b4  sh          $zero, -0x774C($gp)
    ctx->pc = 0x2731b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936756), (uint16_t)GPR_U32(ctx, 0));
    // 0x2731b4: 0x24840850  addiu       $a0, $a0, 0x850
    ctx->pc = 0x2731b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
    // 0x2731b8: 0xa78088a8  sh          $zero, -0x7758($gp)
    ctx->pc = 0x2731b8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936744), (uint16_t)GPR_U32(ctx, 0));
    // 0x2731bc: 0xa78088c8  sh          $zero, -0x7738($gp)
    ctx->pc = 0x2731bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936776), (uint16_t)GPR_U32(ctx, 0));
    // 0x2731c0: 0xa78088c4  sh          $zero, -0x773C($gp)
    ctx->pc = 0x2731c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936772), (uint16_t)GPR_U32(ctx, 0));
    // 0x2731c4: 0xa38088a4  sb          $zero, -0x775C($gp)
    ctx->pc = 0x2731c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 0));
label_2731c8:
    // 0x2731c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2731c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2731cc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2731ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2731d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2731d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2731d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2731d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2731d8: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x2731d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2731dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2731dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2731e0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2731e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2731e4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2731e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2731e8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2731e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2731ec: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2731ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2731f0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2731F0u;
    {
        const bool branch_taken_0x2731f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2731F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731F0u;
        // 0x2731f4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731f0) {
            ctx->pc = 0x2731C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2731c8;
        }
    }
    ctx->pc = 0x2731F8u;
    // 0x2731f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2731F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2731FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731F8u;
        // 0x2731fc: 0xaf8088d4  sw          $zero, -0x772C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2731F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273200u;
}
