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

// Function: sub_002F4B60
// Address: 0x2f4b60 - 0x2f4bb0
void sub_002F4B60_0x2f4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4B60_0x2f4b60");
#endif

    ctx->pc = 0x2f4b60u;

    // 0x2f4b60: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4B60u;
    {
        const bool branch_taken_0x2f4b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B60u;
        // 0x2f4b64: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b60) {
            ctx->pc = 0x2F4B70u;
            goto label_2f4b70;
        }
    }
    ctx->pc = 0x2F4B68u;
    // 0x2f4b68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F4B68u;
    {
        const bool branch_taken_0x2f4b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b68) {
            ctx->pc = 0x2F4BA8u;
            goto label_2f4ba8;
        }
    }
    ctx->pc = 0x2F4B70u;
label_2f4b70:
    // 0x2f4b70: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2f4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2f4b74: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x2f4b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f4b78: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2f4b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2f4b7c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2f4b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f4b80: 0x0  nop
    ctx->pc = 0x2f4b80u;
    // NOP
    // 0x2f4b84: 0x0  nop
    ctx->pc = 0x2f4b84u;
    // NOP
    // 0x2f4b88: 0x1010  mfhi        $v0
    ctx->pc = 0x2f4b88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f4b8c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2f4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2f4b90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2f4b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2f4b94: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2f4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b98: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4B98u;
    {
        const bool branch_taken_0x2f4b98 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2f4b98) {
            ctx->pc = 0x2F4BA4u;
            goto label_2f4ba4;
        }
    }
    ctx->pc = 0x2F4BA0u;
    // 0x2f4ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4ba4:
    // 0x2f4ba4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f4ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ba8:
    // 0x2f4ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4BB0u;
}
