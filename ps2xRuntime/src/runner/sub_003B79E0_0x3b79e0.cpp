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

// Function: sub_003B79E0
// Address: 0x3b79e0 - 0x3b7a38
void sub_003B79E0_0x3b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B79E0_0x3b79e0");
#endif

    switch (ctx->pc) {
        case 0x3b79f4u: goto label_3b79f4;
        default: break;
    }

    ctx->pc = 0x3b79e0u;

    // 0x3b79e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b79e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b79e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b79ec: 0xc0a639c  jal         func_298E70
    ctx->pc = 0x3B79ECu;
    SET_GPR_U32(ctx, 31, 0x3B79F4u);
    ctx->pc = 0x3B79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79ECu;
    // 0x3b79f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E70u, 0x3B79ECu, 0x3B79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79F4u;
label_3b79f4:
    // 0x3b79f4: 0x8e05020c  lw          $a1, 0x20C($s0)
    ctx->pc = 0x3b79f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3b79f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3b79f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3b79fc: 0x96042b46  lhu         $a0, 0x2B46($s0)
    ctx->pc = 0x3b79fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11078)));
    // 0x3b7a00: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3b7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b7a04: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x3b7a04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x3b7a08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7A08u;
    {
        const bool branch_taken_0x3b7a08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A08u;
        // 0x3b7a0c: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a08) {
            ctx->pc = 0x3B7A18u;
            goto label_3b7a18;
        }
    }
    ctx->pc = 0x3B7A10u;
    // 0x3b7a10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7A10u;
    {
        const bool branch_taken_0x3b7a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A10u;
        // 0x3b7a14: 0xa6032b46  sh          $v1, 0x2B46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a10) {
            ctx->pc = 0x3B7A28u;
            goto label_3b7a28;
        }
    }
    ctx->pc = 0x3B7A18u;
label_3b7a18:
    // 0x3b7a18: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3b7a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3b7a1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b7a20: 0xa6032b46  sh          $v1, 0x2B46($s0)
    ctx->pc = 0x3b7a20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b7a24: 0x0  nop
    ctx->pc = 0x3b7a24u;
    // NOP
label_3b7a28:
    // 0x3b7a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b7a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7a30: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A30u;
        // 0x3b7a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7A38u;
}
