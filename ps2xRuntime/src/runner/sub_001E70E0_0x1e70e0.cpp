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

// Function: sub_001E70E0
// Address: 0x1e70e0 - 0x1e7130
void sub_001E70E0_0x1e70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E70E0_0x1e70e0");
#endif

    switch (ctx->pc) {
        case 0x1e7114u: goto label_1e7114;
        default: break;
    }

    ctx->pc = 0x1e70e0u;

    // 0x1e70e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e70e4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e70e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e70ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e70ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e70f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e70f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70f4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e70f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e70f8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E70F8u;
    {
        const bool branch_taken_0x1e70f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e70f8) {
            ctx->pc = 0x1E7120u;
            goto label_1e7120;
        }
    }
    ctx->pc = 0x1E7100u;
    // 0x1e7100: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e7104: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7104u;
    {
        const bool branch_taken_0x1e7104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7104) {
            ctx->pc = 0x1E7118u;
            goto label_1e7118;
        }
    }
    ctx->pc = 0x1E710Cu;
    // 0x1e710c: 0xc097900  jal         func_25E400
    ctx->pc = 0x1E710Cu;
    SET_GPR_U32(ctx, 31, 0x1E7114u);
    ctx->pc = 0x25E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E400u, 0x1E710Cu, 0x1E7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7114u;
label_1e7114:
    // 0x1e7114: 0x0  nop
    ctx->pc = 0x1e7114u;
    // NOP
label_1e7118:
    // 0x1e7118: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e7118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e711c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e711cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e7120:
    // 0x1e7120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7128: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7128u;
        // 0x1e712c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7130u;
}
