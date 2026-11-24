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

// Function: sub_00323E70
// Address: 0x323e70 - 0x323ed0
void sub_00323E70_0x323e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E70_0x323e70");
#endif

    ctx->pc = 0x323e70u;

    // 0x323e70: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323e74: 0x3401ad00  ori         $at, $zero, 0xAD00
    ctx->pc = 0x323e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44288);
    // 0x323e78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x323e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x323e7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x323e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x323e80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323e84: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x323e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x323e88: 0x80a20043  lb          $v0, 0x43($a1)
    ctx->pc = 0x323e88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 67)));
    // 0x323e8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x323E8Cu;
    {
        const bool branch_taken_0x323e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323e8c) {
            ctx->pc = 0x323EC0u;
            goto label_323ec0;
        }
    }
    ctx->pc = 0x323E94u;
    // 0x323e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x323e98: 0xa0a20043  sb          $v0, 0x43($a1)
    ctx->pc = 0x323e98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x323e9c: 0x90a30041  lbu         $v1, 0x41($a1)
    ctx->pc = 0x323e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
    // 0x323ea0: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x323ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x323ea4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x323ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x323ea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x323eac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x323eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323eb0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x323eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x323EB4u;
    {
        const bool branch_taken_0x323eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EB4u;
        // 0x323eb8: 0xa0a30041  sb          $v1, 0x41($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 65), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323eb4) {
            ctx->pc = 0x323EC8u;
            goto label_323ec8;
        }
    }
    ctx->pc = 0x323EBCu;
    // 0x323ebc: 0x0  nop
    ctx->pc = 0x323ebcu;
    // NOP
label_323ec0:
    // 0x323ec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x323ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323ec4: 0x0  nop
    ctx->pc = 0x323ec4u;
    // NOP
label_323ec8:
    // 0x323ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x323EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323ED0u;
}
