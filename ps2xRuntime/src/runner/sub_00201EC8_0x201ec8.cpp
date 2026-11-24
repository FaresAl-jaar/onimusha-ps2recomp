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

// Function: sub_00201EC8
// Address: 0x201ec8 - 0x201f14
void sub_00201EC8_0x201ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201EC8_0x201ec8");
#endif

    switch (ctx->pc) {
        case 0x201ed8u: goto label_201ed8;
        default: break;
    }

    ctx->pc = 0x201ec8u;

    // 0x201ec8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x201ec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ecc: 0x248b000a  addiu       $t3, $a0, 0xA
    ctx->pc = 0x201eccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x201ed0: 0x252a0040  addiu       $t2, $t1, 0x40
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x201ed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201ed8:
    // 0x201ed8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x201edc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x201edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x201ee0: 0x1641021  addu        $v0, $t3, $a0
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x201ee4: 0x8a3021  addu        $a2, $a0, $t2
    ctx->pc = 0x201ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x201ee8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x201ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201eec: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x201eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x201ef0: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x201ef0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201ef4: 0x29070020  slti        $a3, $t0, 0x20
    ctx->pc = 0x201ef4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x201ef8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x201ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201efc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x201efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x201f00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x201f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x201f04: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x201F04u;
    {
        const bool branch_taken_0x201f04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F04u;
        // 0x201f08: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f04) {
            ctx->pc = 0x201ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201F0Cu;
    // 0x201f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x201F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F14u;
}
