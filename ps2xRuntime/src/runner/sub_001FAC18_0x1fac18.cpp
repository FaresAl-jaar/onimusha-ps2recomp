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

// Function: sub_001FAC18
// Address: 0x1fac18 - 0x1fac68
void sub_001FAC18_0x1fac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC18_0x1fac18");
#endif

    switch (ctx->pc) {
        case 0x1fac2cu: goto label_1fac2c;
        default: break;
    }

    ctx->pc = 0x1fac18u;

    // 0x1fac18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fac1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fac20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fac24: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1FAC24u;
    SET_GPR_U32(ctx, 31, 0x1FAC2Cu);
    ctx->pc = 0x1FAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC24u;
    // 0x1fac28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1FAC24u, 0x1FAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC2Cu;
label_1fac2c:
    // 0x1fac2c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fac30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAC34u;
    {
        const bool branch_taken_0x1fac34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC34u;
        // 0x1fac38: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac34) {
            ctx->pc = 0x1FAC50u;
            goto label_1fac50;
        }
    }
    ctx->pc = 0x1FAC3Cu;
    // 0x1fac3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fac3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fac44: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1FAC44u;
    ctx->pc = 0x1FAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC44u;
    // 0x1fac48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAC4Cu;
    // 0x1fac4c: 0x0  nop
    ctx->pc = 0x1fac4cu;
    // NOP
label_1fac50:
    // 0x1fac50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fac54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fac58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fac58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fac5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fac5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC60u;
        // 0x1fac64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC68u;
}
