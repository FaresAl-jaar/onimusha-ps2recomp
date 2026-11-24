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

// Function: sub_0028CC00
// Address: 0x28cc00 - 0x28cc40
void sub_0028CC00_0x28cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CC00_0x28cc00");
#endif

    switch (ctx->pc) {
        case 0x28cc2cu: goto label_28cc2c;
        default: break;
    }

    ctx->pc = 0x28cc00u;

    // 0x28cc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28cc04: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28cc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28cc0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28cc10: 0x9083015e  lbu         $v1, 0x15E($a0)
    ctx->pc = 0x28cc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 350)));
    // 0x28cc14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CC14u;
    {
        const bool branch_taken_0x28cc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC14u;
        // 0x28cc18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc14) {
            ctx->pc = 0x28CC30u;
            goto label_28cc30;
        }
    }
    ctx->pc = 0x28CC1Cu;
    // 0x28cc1c: 0x8608015a  lh          $t0, 0x15A($s0)
    ctx->pc = 0x28cc1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 346)));
    // 0x28cc20: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x28cc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x28cc24: 0xc0a2cd0  jal         func_28B340
    ctx->pc = 0x28CC24u;
    SET_GPR_U32(ctx, 31, 0x28CC2Cu);
    ctx->pc = 0x28CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC24u;
    // 0x28cc28: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B340u, 0x28CC24u, 0x28CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC2Cu;
label_28cc2c:
    // 0x28cc2c: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x28cc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
label_28cc30:
    // 0x28cc30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28cc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC38u;
        // 0x28cc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CC40u;
}
