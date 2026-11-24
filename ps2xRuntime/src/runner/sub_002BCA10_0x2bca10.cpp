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

// Function: sub_002BCA10
// Address: 0x2bca10 - 0x2bca50
void sub_002BCA10_0x2bca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCA10_0x2bca10");
#endif

    switch (ctx->pc) {
        case 0x2bca3cu: goto label_2bca3c;
        default: break;
    }

    ctx->pc = 0x2bca10u;

    // 0x2bca10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bca14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bca18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bca1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bca20: 0xa08000e6  sb          $zero, 0xE6($a0)
    ctx->pc = 0x2bca20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bca24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bca24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca28: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bca28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bca2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bca34: 0xc0a6178  jal         func_2985E0
    ctx->pc = 0x2BCA34u;
    SET_GPR_U32(ctx, 31, 0x2BCA3Cu);
    ctx->pc = 0x2BCA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA34u;
    // 0x2bca38: 0x622814  dsllv       $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2985E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2985E0u, 0x2BCA34u, 0x2BCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA3Cu;
label_2bca3c:
    // 0x2bca3c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2bca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bca40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bca44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bca44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bca48: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA48u;
        // 0x2bca4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA50u;
}
