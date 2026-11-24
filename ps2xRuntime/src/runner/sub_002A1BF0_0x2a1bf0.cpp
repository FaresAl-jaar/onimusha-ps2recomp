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

// Function: sub_002A1BF0
// Address: 0x2a1bf0 - 0x2a1c4c
void sub_002A1BF0_0x2a1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1BF0_0x2a1bf0");
#endif

    switch (ctx->pc) {
        case 0x2a1c18u: goto label_2a1c18;
        case 0x2a1c28u: goto label_2a1c28;
        default: break;
    }

    ctx->pc = 0x2a1bf0u;

    // 0x2a1bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a1bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a1bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a1bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a1c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c0c: 0x94820068  lhu         $v0, 0x68($a0)
    ctx->pc = 0x2a1c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a1c10: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2a1c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1c14: 0x0  nop
    ctx->pc = 0x2a1c14u;
    // NOP
label_2a1c18:
    // 0x2a1c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c20: 0xc0a86e0  jal         func_2A1B80
    ctx->pc = 0x2A1C20u;
    SET_GPR_U32(ctx, 31, 0x2A1C28u);
    ctx->pc = 0x2A1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C20u;
    // 0x2a1c24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B80u, 0x2A1C20u, 0x2A1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C28u;
label_2a1c28:
    // 0x2a1c28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a1c2c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1C2Cu;
    {
        const bool branch_taken_0x2a1c2c = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2a1c2c) {
            ctx->pc = 0x2A1C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1c18;
        }
    }
    ctx->pc = 0x2A1C34u;
    // 0x2a1c34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C44u;
        // 0x2a1c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1C4Cu;
}
