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

// Function: sub_001327E0
// Address: 0x1327e0 - 0x13284c
void sub_001327E0_0x1327e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001327E0_0x1327e0");
#endif

    switch (ctx->pc) {
        case 0x1327f0u: goto label_1327f0;
        default: break;
    }

    ctx->pc = 0x1327e0u;

    // 0x1327e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1327e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1327e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1327E4u;
    {
        const bool branch_taken_0x1327e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1327e4) {
            ctx->pc = 0x132810u;
            goto label_132810;
        }
    }
    ctx->pc = 0x1327ECu;
    // 0x1327ec: 0x0  nop
    ctx->pc = 0x1327ecu;
    // NOP
label_1327f0:
    // 0x1327f0: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1327f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1327f4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1327f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1327f8: 0x0  nop
    ctx->pc = 0x1327f8u;
    // NOP
    // 0x1327fc: 0x0  nop
    ctx->pc = 0x1327fcu;
    // NOP
    // 0x132800: 0x0  nop
    ctx->pc = 0x132800u;
    // NOP
    // 0x132804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x132804u;
    {
        const bool branch_taken_0x132804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132804) {
            ctx->pc = 0x1327F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1327f0;
        }
    }
    ctx->pc = 0x13280Cu;
    // 0x13280c: 0x0  nop
    ctx->pc = 0x13280cu;
    // NOP
label_132810:
    // 0x132810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132814: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x132814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x132818: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x132818u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x13281c: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x13281cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x132820: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x132820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x132824: 0xa4870002  sh          $a3, 0x2($a0)
    ctx->pc = 0x132824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x132828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13282c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x13282cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x132830: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x132830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x132834: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x132834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x132838: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x132838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x13283c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x13283cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x132840: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x132840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x132844: 0x3e00008  jr          $ra
    ctx->pc = 0x132844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132844u;
        // 0x132848: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13284Cu;
}
