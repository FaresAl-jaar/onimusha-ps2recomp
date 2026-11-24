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

// Function: sub_0017B880
// Address: 0x17b880 - 0x17b910
void sub_0017B880_0x17b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B880_0x17b880");
#endif

    ctx->pc = 0x17b880u;

    // 0x17b880: 0x8c8a2d0c  lw          $t2, 0x2D0C($a0)
    ctx->pc = 0x17b880u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11532)));
    // 0x17b884: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x17b884u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17b888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b88c: 0xa4040  sll         $t0, $t2, 1
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x17b890: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x17b890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x17b894: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x17b894u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x17b898: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x17b89c: 0x95482d1a  lhu         $t0, 0x2D1A($t2)
    ctx->pc = 0x17b89cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 11546)));
    // 0x17b8a0: 0x254b2d10  addiu       $t3, $t2, 0x2D10
    ctx->pc = 0x17b8a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 11536));
    // 0x17b8a4: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x17b8a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x17b8a8: 0xa5482d1a  sh          $t0, 0x2D1A($t2)
    ctx->pc = 0x17b8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 11546), (uint16_t)GPR_U32(ctx, 8));
    // 0x17b8ac: 0x95482d1a  lhu         $t0, 0x2D1A($t2)
    ctx->pc = 0x17b8acu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 11546)));
    // 0x17b8b0: 0x3108f0ff  andi        $t0, $t0, 0xF0FF
    ctx->pc = 0x17b8b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)61695);
    // 0x17b8b4: 0xa5482d1a  sh          $t0, 0x2D1A($t2)
    ctx->pc = 0x17b8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 11546), (uint16_t)GPR_U32(ctx, 8));
    // 0x17b8b8: 0x95482d1a  lhu         $t0, 0x2D1A($t2)
    ctx->pc = 0x17b8b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 11546)));
    // 0x17b8bc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x17b8c0: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B8C0u;
    {
        const bool branch_taken_0x17b8c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x17B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8C0u;
        // 0x17b8c4: 0xa5482d1a  sh          $t0, 0x2D1A($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 11546), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8c0) {
            ctx->pc = 0x17B8D0u;
            goto label_17b8d0;
        }
    }
    ctx->pc = 0x17B8C8u;
    // 0x17b8c8: 0xa5660008  sh          $a2, 0x8($t3)
    ctx->pc = 0x17b8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x17b8cc: 0x0  nop
    ctx->pc = 0x17b8ccu;
    // NOP
label_17b8d0:
    // 0x17b8d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b8d4: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B8D4u;
    {
        const bool branch_taken_0x17b8d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b8d4) {
            ctx->pc = 0x17B8F0u;
            goto label_17b8f0;
        }
    }
    ctx->pc = 0x17B8DCu;
    // 0x17b8dc: 0xad670004  sw          $a3, 0x4($t3)
    ctx->pc = 0x17b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 7));
    // 0x17b8e0: 0x8c832d04  lw          $v1, 0x2D04($a0)
    ctx->pc = 0x17b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11524)));
    // 0x17b8e4: 0xac832d08  sw          $v1, 0x2D08($a0)
    ctx->pc = 0x17b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11528), GPR_U32(ctx, 3));
    // 0x17b8e8: 0xac872d04  sw          $a3, 0x2D04($a0)
    ctx->pc = 0x17b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11524), GPR_U32(ctx, 7));
    // 0x17b8ec: 0x0  nop
    ctx->pc = 0x17b8ecu;
    // NOP
label_17b8f0:
    // 0x17b8f0: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x17b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x17b8f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B8F4u;
    {
        const bool branch_taken_0x17b8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8F4u;
        // 0x17b8f8: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8f4) {
            ctx->pc = 0x17B908u;
            goto label_17b908;
        }
    }
    ctx->pc = 0x17B8FCu;
    // 0x17b8fc: 0x8c832d04  lw          $v1, 0x2D04($a0)
    ctx->pc = 0x17b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11524)));
    // 0x17b900: 0xac832d08  sw          $v1, 0x2D08($a0)
    ctx->pc = 0x17b900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11528), GPR_U32(ctx, 3));
    // 0x17b904: 0xac872d04  sw          $a3, 0x2D04($a0)
    ctx->pc = 0x17b904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11524), GPR_U32(ctx, 7));
label_17b908:
    // 0x17b908: 0x3e00008  jr          $ra
    ctx->pc = 0x17B908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B910u;
}
