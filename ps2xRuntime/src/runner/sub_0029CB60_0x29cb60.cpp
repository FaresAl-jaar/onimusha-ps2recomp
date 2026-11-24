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

// Function: sub_0029CB60
// Address: 0x29cb60 - 0x29cc18
void sub_0029CB60_0x29cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CB60_0x29cb60");
#endif

    ctx->pc = 0x29cb60u;

    // 0x29cb60: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29cb64: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x29CB64u;
    {
        const bool branch_taken_0x29cb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb64) {
            ctx->pc = 0x29CC10u;
            goto label_29cc10;
        }
    }
    ctx->pc = 0x29CB6Cu;
    // 0x29cb6c: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x29cb6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29cb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb74: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29CB74u;
    {
        const bool branch_taken_0x29cb74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x29cb74) {
            ctx->pc = 0x29CBB0u;
            goto label_29cbb0;
        }
    }
    ctx->pc = 0x29CB7Cu;
    // 0x29cb7c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x29cb7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cb80: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x29cb84: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0
    ctx->pc = 0x29cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
    // 0x29cb88: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29cb8c: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x29cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x29cb90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x29cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29cb94: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x29cb94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29cb98: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x29cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29cb9c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x29cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29cba0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x29cba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29cba4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29cba8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x29cba8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29cbac: 0x0  nop
    ctx->pc = 0x29cbacu;
    // NOP
label_29cbb0:
    // 0x29cbb0: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x29cbb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29cbb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cbb8: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29CBB8u;
    {
        const bool branch_taken_0x29cbb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x29cbb8) {
            ctx->pc = 0x29CBF0u;
            goto label_29cbf0;
        }
    }
    ctx->pc = 0x29CBC0u;
    // 0x29cbc0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x29cbc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cbc4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x29cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x29cbc8: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
    // 0x29cbcc: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29cbd0: 0x24635070  addiu       $v1, $v1, 0x5070
    ctx->pc = 0x29cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20592));
    // 0x29cbd4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x29cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29cbd8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x29cbd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29cbdc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x29cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29cbe0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x29cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29cbe4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x29cbe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29cbe8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29cbec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x29cbecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_29cbf0:
    // 0x29cbf0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x29cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x29cbf4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29cbf8: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x29cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x29cbfc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x29cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29cc00: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x29cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x29cc04: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x29cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x29cc08: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x29cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x29cc0c: 0x0  nop
    ctx->pc = 0x29cc0cu;
    // NOP
label_29cc10:
    // 0x29cc10: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CC18u;
}
