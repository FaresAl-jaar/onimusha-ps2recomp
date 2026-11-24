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

// Function: sub_0030BA10
// Address: 0x30ba10 - 0x30ba60
void sub_0030BA10_0x30ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA10_0x30ba10");
#endif

    switch (ctx->pc) {
        case 0x30ba34u: goto label_30ba34;
        default: break;
    }

    ctx->pc = 0x30ba10u;

    // 0x30ba10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ba14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30ba18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ba1c: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x30ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30ba20: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BA20u;
    {
        const bool branch_taken_0x30ba20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA20u;
        // 0x30ba24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba20) {
            ctx->pc = 0x30BA38u;
            goto label_30ba38;
        }
    }
    ctx->pc = 0x30BA28u;
    // 0x30ba28: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x30ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x30ba2c: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x30BA2Cu;
    SET_GPR_U32(ctx, 31, 0x30BA34u);
    ctx->pc = 0x30BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA2Cu;
    // 0x30ba30: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x30BA2Cu, 0x30BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA34u;
label_30ba34:
    // 0x30ba34: 0x0  nop
    ctx->pc = 0x30ba34u;
    // NOP
label_30ba38:
    // 0x30ba38: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x30ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x30ba3c: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x30ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ba40: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x30ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ba44: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x30ba44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ba48: 0xa6000048  sh          $zero, 0x48($s0)
    ctx->pc = 0x30ba48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x30ba4c: 0xa600004a  sh          $zero, 0x4A($s0)
    ctx->pc = 0x30ba4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x30ba50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ba54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ba58: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA58u;
        // 0x30ba5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BA60u;
}
