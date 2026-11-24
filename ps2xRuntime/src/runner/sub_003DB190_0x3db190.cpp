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

// Function: sub_003DB190
// Address: 0x3db190 - 0x3db1c8
void sub_003DB190_0x3db190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB190_0x3db190");
#endif

    ctx->pc = 0x3db190u;

    // 0x3db190: 0x94822be8  lhu         $v0, 0x2BE8($a0)
    ctx->pc = 0x3db190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11240)));
    // 0x3db194: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB194u;
    {
        const bool branch_taken_0x3db194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db194) {
            ctx->pc = 0x3DB1B8u;
            goto label_3db1b8;
        }
    }
    ctx->pc = 0x3DB19Cu;
    // 0x3db19c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3db19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3db1a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3db1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3db1a4: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3db1a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3db1a8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3db1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3db1ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB1ACu;
    {
        const bool branch_taken_0x3db1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1ACu;
        // 0x3db1b0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db1ac) {
            ctx->pc = 0x3DB1C0u;
            goto label_3db1c0;
        }
    }
    ctx->pc = 0x3DB1B4u;
    // 0x3db1b4: 0x0  nop
    ctx->pc = 0x3db1b4u;
    // NOP
label_3db1b8:
    // 0x3db1b8: 0x908207f6  lbu         $v0, 0x7F6($a0)
    ctx->pc = 0x3db1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3db1bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3db1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3db1c0:
    // 0x3db1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB1C8u;
}
