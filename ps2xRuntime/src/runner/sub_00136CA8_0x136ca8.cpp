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

// Function: sub_00136CA8
// Address: 0x136ca8 - 0x136cfc
void sub_00136CA8_0x136ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136CA8_0x136ca8");
#endif

    switch (ctx->pc) {
        case 0x136cbcu: goto label_136cbc;
        default: break;
    }

    ctx->pc = 0x136ca8u;

    // 0x136ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136cb4: 0xc04dd22  jal         func_137488
    ctx->pc = 0x136CB4u;
    SET_GPR_U32(ctx, 31, 0x136CBCu);
    ctx->pc = 0x136CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CB4u;
    // 0x136cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137488u, 0x136CB4u, 0x136CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CBCu;
label_136cbc:
    // 0x136cbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x136cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cc0: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x136CC0u;
    {
        const bool branch_taken_0x136cc0 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC0u;
        // 0x136cc4: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cc0) {
            ctx->pc = 0x136CECu;
            goto label_136cec;
        }
    }
    ctx->pc = 0x136CC8u;
    // 0x136cc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x136cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x136ccc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x136cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136cd0: 0x24630ed0  addiu       $v1, $v1, 0xED0
    ctx->pc = 0x136cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3792));
    // 0x136cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136cd8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x136cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cdc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x136cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136ce0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x136ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ce4: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x136ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x136ce8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x136ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_136cec:
    // 0x136cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x136CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CF4u;
        // 0x136cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136CFCu;
}
