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

// Function: sub_003C6B70
// Address: 0x3c6b70 - 0x3c6bd0
void sub_003C6B70_0x3c6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6B70_0x3c6b70");
#endif

    switch (ctx->pc) {
        case 0x3c6ba8u: goto label_3c6ba8;
        default: break;
    }

    ctx->pc = 0x3c6b70u;

    // 0x3c6b70: 0x9082057c  lbu         $v0, 0x57C($a0)
    ctx->pc = 0x3c6b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c6b74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3c6b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3c6b78: 0xa082057c  sb          $v0, 0x57C($a0)
    ctx->pc = 0x3c6b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c6b7c: 0x9082057c  lbu         $v0, 0x57C($a0)
    ctx->pc = 0x3c6b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c6b80: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x3c6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x3c6b84: 0xa082057c  sb          $v0, 0x57C($a0)
    ctx->pc = 0x3c6b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c6b88: 0x8c820568  lw          $v0, 0x568($a0)
    ctx->pc = 0x3c6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6b8c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x3c6b8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c6b90: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3C6B90u;
    {
        const bool branch_taken_0x3c6b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6B90u;
        // 0x3c6b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b90) {
            ctx->pc = 0x3C6BC8u;
            goto label_3c6bc8;
        }
    }
    ctx->pc = 0x3C6B98u;
    // 0x3c6b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c6b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6b9c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3c6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3c6ba0: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x3c6ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3c6ba4: 0x0  nop
    ctx->pc = 0x3c6ba4u;
    // NOP
label_3c6ba8:
    // 0x3c6ba8: 0x8c820574  lw          $v0, 0x574($a0)
    ctx->pc = 0x3c6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x3c6bac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c6bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c6bb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3c6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c6bb4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x3c6bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x3c6bb8: 0x8c820568  lw          $v0, 0x568($a0)
    ctx->pc = 0x3c6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c6bbc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3c6bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c6bc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C6BC0u;
    {
        const bool branch_taken_0x3c6bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BC0u;
        // 0x3c6bc4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bc0) {
            ctx->pc = 0x3C6BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6ba8;
        }
    }
    ctx->pc = 0x3C6BC8u;
label_3c6bc8:
    // 0x3c6bc8: 0x80f1b18  j           func_3C6C60
    ctx->pc = 0x3C6BC8u;
    ctx->pc = 0x3C6C60u;
    sub_003C6C60_0x3c6c60(rdram, ctx, runtime); return;
    ctx->pc = 0x3C6BD0u;
}
