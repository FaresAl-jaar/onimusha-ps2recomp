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

// Function: sub_00297F40
// Address: 0x297f40 - 0x297f88
void sub_00297F40_0x297f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F40_0x297f40");
#endif

    switch (ctx->pc) {
        case 0x297f68u: goto label_297f68;
        case 0x297f78u: goto label_297f78;
        default: break;
    }

    ctx->pc = 0x297f40u;

    // 0x297f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297f50: 0x9084000a  lbu         $a0, 0xA($a0)
    ctx->pc = 0x297f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x297f54: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x297F54u;
    {
        const bool branch_taken_0x297f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x297F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F54u;
        // 0x297f58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f54) {
            ctx->pc = 0x297F78u;
            goto label_297f78;
        }
    }
    ctx->pc = 0x297F5Cu;
    // 0x297f5c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x297f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x297f60: 0xc0bd2a8  jal         func_2F4AA0
    ctx->pc = 0x297F60u;
    SET_GPR_U32(ctx, 31, 0x297F68u);
    ctx->pc = 0x297F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F60u;
    // 0x297f64: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4AA0u, 0x297F60u, 0x297F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F68u;
label_297f68:
    // 0x297f68: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x297f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x297f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f70: 0xc0baeb4  jal         func_2EBAD0
    ctx->pc = 0x297F70u;
    SET_GPR_U32(ctx, 31, 0x297F78u);
    ctx->pc = 0x297F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F70u;
    // 0x297f74: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBAD0u, 0x297F70u, 0x297F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F78u;
label_297f78:
    // 0x297f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297f80: 0x3e00008  jr          $ra
    ctx->pc = 0x297F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F80u;
        // 0x297f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F88u;
}
